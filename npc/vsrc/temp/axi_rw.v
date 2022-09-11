/************************************************************
Author:LiGuoqi
Name:arbitrate.v
Function:arbitrate i_cache and d_cache
************************************************************/
// Burst types
`define AXI_BURST_TYPE_FIXED                                2'b00
`define AXI_BURST_TYPE_INCR                                 2'b01
`define AXI_BURST_TYPE_WRAP                                 2'b10
// Access permissions
`define AXI_PROT_UNPRIVILEGED_ACCESS                        3'b000
`define AXI_PROT_PRIVILEGED_ACCESS                          3'b001
`define AXI_PROT_SECURE_ACCESS                              3'b000
`define AXI_PROT_NON_SECURE_ACCESS                          3'b010
`define AXI_PROT_DATA_ACCESS                                3'b000
`define AXI_PROT_INSTRUCTION_ACCESS                         3'b100
// Memory types (AR)
`define AXI_ARCACHE_DEVICE_NON_BUFFERABLE                   4'b0000
`define AXI_ARCACHE_DEVICE_BUFFERABLE                       4'b0001
`define AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE     4'b0010
`define AXI_ARCACHE_NORMAL_NON_CACHEABLE_BUFFERABLE         4'b0011
`define AXI_ARCACHE_WRITE_THROUGH_NO_ALLOCATE               4'b1010
`define AXI_ARCACHE_WRITE_THROUGH_READ_ALLOCATE             4'b1110
`define AXI_ARCACHE_WRITE_THROUGH_WRITE_ALLOCATE            4'b1010
`define AXI_ARCACHE_WRITE_THROUGH_READ_AND_WRITE_ALLOCATE   4'b1110
`define AXI_ARCACHE_WRITE_BACK_NO_ALLOCATE                  4'b1011
`define AXI_ARCACHE_WRITE_BACK_READ_ALLOCATE                4'b1111
`define AXI_ARCACHE_WRITE_BACK_WRITE_ALLOCATE               4'b1011
`define AXI_ARCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE      4'b1111
// Memory types (AW)
`define AXI_AWCACHE_DEVICE_NON_BUFFERABLE                   4'b0000
`define AXI_AWCACHE_DEVICE_BUFFERABLE                       4'b0001
`define AXI_AWCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE     4'b0010
`define AXI_AWCACHE_NORMAL_NON_CACHEABLE_BUFFERABLE         4'b0011
`define AXI_AWCACHE_WRITE_THROUGH_NO_ALLOCATE               4'b0110
`define AXI_AWCACHE_WRITE_THROUGH_READ_ALLOCATE             4'b0110
`define AXI_AWCACHE_WRITE_THROUGH_WRITE_ALLOCATE            4'b1110
`define AXI_AWCACHE_WRITE_THROUGH_READ_AND_WRITE_ALLOCATE   4'b1110
`define AXI_AWCACHE_WRITE_BACK_NO_ALLOCATE                  4'b0111
`define AXI_AWCACHE_WRITE_BACK_READ_ALLOCATE                4'b0111
`define AXI_AWCACHE_WRITE_BACK_WRITE_ALLOCATE               4'b1111
`define AXI_AWCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE      4'b1111

`define AXI_SIZE_BYTES_1                                    3'b000
`define AXI_SIZE_BYTES_2                                    3'b001
`define AXI_SIZE_BYTES_4                                    3'b010
`define AXI_SIZE_BYTES_8                                    3'b011
`define AXI_SIZE_BYTES_16                                   3'b100
`define AXI_SIZE_BYTES_32                                   3'b101
`define AXI_SIZE_BYTES_64                                   3'b110
`define AXI_SIZE_BYTES_128                                  3'b111

`define ysyx22040228_ARB_IDLE       3'b001  
`define ysyx22040228_ARB_DWRITE     3'b010
`define ysyx22040228_ARB_IREAD      3'b100
`define ysyx22040228_ARB_DREAD      3'b101
`define ysyx22040228_ARB_DWRITEU    3'b011
`define ysyx22040228_ARB_DREADU     3'b110

// `define ysyx22040228_AXI_SEND       3'b110
// `define ysyx22040228_AXI_OK         3'b000
// `define ysyx22040228_AXI_END        3'b010
// `define ysyx22040228_AXI_IDLE       3'b100
// `define ysyx22040228_AXI_WRITE      3'b101

`define ysyx22040228_AXIW_IDLE      3'b000 
`define ysyx22040228_AXIW_ADDR      3'b001 
`define ysyx22040228_AXIW_WRITE     3'b010 
`define ysyx22040228_AXIW_RESP      3'b100 

`define ysyx22040228_AXIR_IDLE      2'b00  
`define ysyx22040228_AXIR_ADDR      2'b01 
`define ysyx22040228_AXIR_READ      2'b10 


`include "ysyx_22040228defines.v"
`include "ysyx_22040228defines_axi4.v"
`include "ysyx_22040228cache_defines.v"
module axi_rw (
/* verilator lint_off UNUSED */ 
   //-----------------------------system----------------------------------------//
    input       wire                                         clk                  ,
    input       wire                                         rst                  ,
    //-----------------------------d_cache---------------------------------------//
    input       wire       [63:0]                            d_cache_addr         ,
    input       wire       [63:0]                            d_cache_data         ,
    input       wire       [3:0]                             d_cache_type         ,
    output      reg        [63:0]                            d_cache_data_o       ,
    output      reg                                          d_cache_valid_       ,
    //----------------------------uncache----------------------------------------//
    input       wire       [63:0]                            uncache_addr         ,
    input       wire       [63:0]                            uncache_data         ,
    input       wire                                         uncache_read_ena     ,
    input       wire                                         uncache_write_ena    ,
    input       wire       [2:0]                             uncache_size_data    ,
    input       wire       [7:0]                             uncache_mask         ,
    output      reg        [63:0]                            uncahce_data_o       ,
    output      reg                                          uncahce_valid_       ,
    //----------------------------i_cache----------------------------------------//
    input       wire       [63:0]                            i_cache_addr         ,
    input       wire                                         i_cache_ena          ,
    output      reg        [63:0]                            i_cache_data         ,
    output      reg                                          i_cache_valid_       ,
    //----------------------write address cahnnel--------------------------------//
    output      reg        [`ysyx22040228_ID_BUS]            axi_aw_id            ,
    output      reg        [`ysyx22040228_ADDR_BUS]          axi_aw_addr          ,
    output      reg        [`ysyx22040228_LEN_BUS]           axi_aw_len           ,
    output      reg        [`ysyx22040228_SIZE_BUS]          axi_aw_size          ,
    output      reg        [`ysyx22040228_BURST_BUS]         axi_aw_burst         ,
    output      reg        [`ysyx22040228_CACHE_BUS]         axi_aw_cache         ,
    output      reg        [`ysyx22040228_PROT_BUS]          axi_aw_port          ,
    output      reg        [`ysyx22040228_QOS_BUS]           axi_aw_qos           ,
    output      reg                                          axi_aw_valid         ,
    input       reg                                          axi_aw_ready         ,
    //----------------------write data channel-----------------------------------//
    output      reg        [`ysyx22040228_DATA_BUS]          axi_w_data           ,
    output      reg        [`ysyx22040228_STRB_BUS]          axi_w_strb           ,
    output      reg                                          axi_w_last           ,
    output      reg                                          axi_w_valid          ,
    input       wire                                         axi_w_ready          ,

    //-----------------------write response channel------------------------------//
    input       wire       [`ysyx22040228_ID_BUS]            axi_b_id             ,
    input       wire       [`ysyx22040228_RESP_BUS]          axi_b_resp           ,
    input       wire                                         axi_b_valid          ,
    output      reg                                          axi_b_ready          ,

    //------------------------read address channel-------------------------------//
    output      reg        [`ysyx22040228_ID_BUS]            axi_ar_id            ,
    output      reg        [`ysyx22040228_ADDR_BUS]          axi_ar_addr          ,
    output      reg        [`ysyx22040228_LEN_BUS]           axi_ar_len           ,
    output      reg        [`ysyx22040228_SIZE_BUS]          axi_ar_size          ,
    output      reg        [`ysyx22040228_BURST_BUS]         axi_ar_burst         ,
    output      reg        [`ysyx22040228_CACHE_BUS]         axi_ar_cache         ,
    output      reg        [`ysyx22040228_PROT_BUS]          axi_ar_prot          ,
    output      reg        [`ysyx22040228_QOS_BUS]           axi_ar_qos           ,
    output      reg                                          axi_ar_valid         ,
    input       wire                                         axi_ar_ready         ,

    //------------------------read data channel----------------------------------//
    input       wire       [`ysyx22040228_ID_BUS]            axi_r_id             ,
    input       wire       [`ysyx22040228_DATA_BUS]          axi_r_data           ,
    input       wire       [`ysyx22040228_RESP_BUS]          axi_r_resp           ,
    input       wire                                         axi_r_last           ,
    input       wire                                         axi_r_valid          ,
    output      reg                                          axi_r_ready           
);

    wire    read_dcache_shankhand  ;
    wire    write_dcache_shankhand ;
    wire    read_icache_shankhand  ;
    wire    read_uncahce_shankhand ;
    wire    write_uncahce_shankhand;

    assign read_uncahce_shankhand  =  (~read_icache_shankhand) && (uncache_read_ena) ;
    assign write_uncahce_shankhand =  (~read_icache_shankhand) && (uncache_write_ena);
    assign read_dcache_shankhand   =  (~read_icache_shankhand) && ((d_cache_type == 4'b0010) || (d_cache_type == 4'b1000));
    assign write_dcache_shankhand  =  (~read_icache_shankhand) && ((d_cache_type == 4'b0001) || (d_cache_type == 4'b0100)); 
    assign read_icache_shankhand   =  ((d_cache_type == 4'b0000) | (~uncache_read_ena) | (~uncache_write_ena)) && i_cache_ena ;

    wire [2:0]  shankhand_chose ;
    assign      shankhand_chose = read_uncahce_shankhand  ? `ysyx22040228_ARB_DREADU  :
                                  write_uncahce_shankhand ? `ysyx22040228_ARB_DWRITEU : 
                                  read_dcache_shankhand   ? `ysyx22040228_ARB_DREAD   :
                                  write_dcache_shankhand  ? `ysyx22040228_ARB_DWRITE  :
                                  read_icache_shankhand   ? `ysyx22040228_ARB_IREAD   : `ysyx22040228_ARB_IDLE ;

    wire   read_valid  ;
    wire   write_valid ;
    assign read_valid  = read_uncahce_shankhand | read_dcache_shankhand | read_icache_shankhand ;
    assign write_valid = write_uncahce_shankhand | write_dcache_shankhand ;

    reg [2:0] axiw_state ;
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            axiw_state <= `ysyx22040228_AXIW_IDLE ;
        end 
        else begin
            if(write_valid)begin 
                case (axiw_state)
                    `ysyx22040228_AXIW_IDLE : begin
                        axiw_state <= `ysyx22040228_AXIW_ADDR ;
                    end 
                    `ysyx22040228_AXIW_ADDR : begin
                        if(axi_aw_ready) 
                            axiw_state <= `ysyx22040228_AXIW_WRITE ;
                        else 
                            axiw_state <= `ysyx22040228_AXIW_ADDR  ;
                    end 
                    `ysyx22040228_AXIW_WRITE : begin
                        if(axi_w_ready & axi_w_valid & axi_w_last)
                            axiw_state <= `ysyx22040228_AXIW_RESP ;
                        else begin
                            axiw_state <= `ysyx22040228_AXIW_WRITE;
                        end 
                    end 
                    `ysyx22040228_AXIW_RESP : begin
                        if(axi_b_valid) 
                            axiw_state <= `ysyx22040228_AXIW_IDLE ;
                        else 
                            axiw_state <= `ysyx22040228_AXIW_RESP ;
                    end 
                    default: axiw_state <= `ysyx22040228_AXIW_IDLE ;
                endcase
            end 
        end 
    end

    reg [1:0] axir_state ;
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            axir_state <= `ysyx22040228_AXIR_IDLE ;
        end 
        else begin
            if(read_valid) begin 
                case (axir_state)
                    `ysyx22040228_AXIR_IDLE : begin
                        axir_state <= `ysyx22040228_AXIR_ADDR ;
                    end  
                    `ysyx22040228_AXIR_ADDR : begin
                        if(axi_ar_valid & axi_ar_ready)
                            axir_state <= `ysyx22040228_AXIR_READ ;
                        else 
                            axir_state <= `ysyx22040228_AXIR_ADDR ;
                    end 
                    `ysyx22040228_AXIR_READ : begin
                        if(axi_r_last & axi_r_valid)
                            axir_state <= `ysyx22040228_AXIR_IDLE ;
                        else
                            axir_state <= `ysyx22040228_AXIR_READ ;
                    end 
                    default: axir_state <= `ysyx22040228_AXIR_IDLE ;
                endcase
            end 
        end 
    end
/* verilator lint_off BLKSEQ */
    reg  chosel ;
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            chosel = `ysyx22040228_ENABLE ;
        end
        else if(axi_ar_ready & axi_ar_valid)begin
            chosel = `ysyx22040228_ABLE ;
        end  
        else begin
            chosel = `ysyx22040228_ENABLE ;
        end 
    end 

    always @(*) begin
        axi_aw_id = 4'b0000 ;
        axi_aw_addr = 64'h0 ;
        axi_aw_len = 8'b0   ;
        axi_aw_size = 3'b000;
        axi_aw_burst = 2'b0 ;
        axi_aw_cache = 4'b0000 ;
        axi_aw_port = 3'b000 ;
        axi_aw_qos = 4'h0 ;
        axi_aw_valid = `ysyx22040228_ENABLE ;
        axi_w_data = 64'h0 ;
        axi_w_strb = 8'b00000000 ;
        axi_w_last = `ysyx22040228_ENABLE ;
        axi_w_valid = `ysyx22040228_ENABLE ;
        axi_b_ready = `ysyx22040228_ENABLE ;
        axi_ar_id = 4'b0000 ;
        axi_ar_addr = 64'h0 ;
        axi_ar_len = 8'b0 ;
        axi_ar_size = 3'b000 ;
        axi_ar_burst = 2'b0 ;
        axi_ar_cache = 4'b0000 ;
        axi_ar_prot = 3'b000 ;
        axi_ar_qos = 4'h0 ;
        axi_ar_valid = `ysyx22040228_ENABLE ;
        axi_r_ready = `ysyx22040228_ENABLE ;
        case (shankhand_chose)
            `ysyx22040228_ARB_IREAD : begin   
                case (axir_state)
                `ysyx22040228_AXIR_IDLE : begin
                        axi_r_ready    = 1'b0;
                        axi_ar_valid   = 1'b0;       
                        axi_ar_len     = 8'h00;      
                        axi_ar_burst   = 2'b0;       
                        axi_ar_id      = 4'b0000;          
                        axi_aw_valid   = 1'b0;
                        axi_w_valid    = 1'b0;
                        axi_b_ready    = 1'b0; 
                        axi_w_strb     =8'h00;
                        axi_ar_addr    =64'h0;
                    end
                `ysyx22040228_AXIR_ADDR : begin
                    //pc读通道
                        axi_ar_valid  = (i_cache_addr[31] == 1 )?axi_ar_ready:~chosel;
                        axi_ar_addr   =  i_cache_addr;
                        axi_ar_size  = ((i_cache_addr >= `ysyx22040228_APB_START) && (i_cache_addr <= `ysyx22040228_APB_END)) ? `AXI_SIZE_BYTES_4 :`AXI_SIZE_BYTES_8;
                        axi_ar_len    = 8'h00;
                        axi_ar_burst  = 2'b01;
                        axi_ar_id     = 4'b0000;
                        axi_aw_valid  =1'b0;
                        axi_w_valid   = 1'b0;
                        axi_b_ready   = 1'b0;  
                        axi_w_strb    =8'h00;                                    
                end
                `ysyx22040228_AXIR_READ : begin
                        axi_ar_valid  = 1'b0;
                        axi_ar_addr   = i_cache_addr; 
                        axi_r_ready   = 1'b1;
                        axi_ar_len    = 8'h00;
                        axi_ar_size   = 3'b000;
                        axi_ar_burst  = 2'b0;
                        axi_ar_id     = 4'b0000;
                        axi_aw_valid  =1'b0;
                        axi_w_strb    = 8'h00;
                        axi_w_valid   = 1'b0;
                        axi_b_ready   = 1'b0;             
                    end

                    default:;
                endcase
            end
        `ysyx22040228_ARB_DREAD : begin
            case (axir_state)
                `ysyx22040228_AXIR_IDLE : begin
                        axi_r_ready   = 1'b0;
                        axi_ar_valid  = 1'b0;
                        axi_ar_len   = 8'h00;
                        axi_ar_burst = 2'b0;
                        axi_ar_id     = 4'b0000;
                        axi_aw_valid  =1'b0;
                        axi_w_strb    =8'h00;
                        axi_w_valid  = 1'b0;
                        axi_b_ready   = 1'b0; 
                        axi_ar_addr   = d_cache_addr;                 
                    end

                `ysyx22040228_AXIR_ADDR : begin
                        axi_ar_valid  = (d_cache_addr[31] == 1 )?axi_ar_ready:~chosel;
                        axi_ar_addr   =  d_cache_addr;
                        axi_ar_size   = `AXI_SIZE_BYTES_8;
                        axi_ar_len    = 8'b0000_0001;
                        axi_ar_burst  = 2'b01;
                        axi_ar_id     = 4'b0000;
                        axi_r_ready   = 1'b0;
                        axi_aw_valid  =1'b0;
                        axi_w_valid  = 1'b0;
                        axi_b_ready   = 1'b0;
                        axi_w_strb    =8'h00;                    
                    end

                `ysyx22040228_AXIR_READ: begin                  
                        axi_ar_valid  = 1'b0;
                        axi_ar_addr  = d_cache_addr;
                        axi_r_ready   = 1'b1;                  
                        axi_ar_len    = 8'h00;
                        axi_ar_size   = 3'b000;
                        axi_ar_burst  = 2'b0;
                        axi_ar_id     = 4'b0000;
                        axi_aw_valid  =1'b0;
                        axi_w_strb    =8'h00;
                        axi_w_valid  = 1'b0;
                        axi_b_ready   = 1'b0;                    
                        //axi_w_data   = d_cache_data;          
                    end
                    default:;
            endcase
          end
        `ysyx22040228_ARB_DREADU : begin
            case (axir_state)
                `ysyx22040228_AXIR_IDLE : begin
                        axi_r_ready   = 1'b0;
                        axi_ar_valid  = 1'b0;
                        axi_ar_len   = 8'h00;
                        axi_ar_burst = 2'b0;
                        axi_ar_id     = 4'b0000;
                        axi_aw_valid  =1'b0;
                        axi_w_strb    =8'h00;
                        axi_w_valid  = 1'b0;
                        axi_b_ready   = 1'b0;  
                        axi_ar_addr   = uncache_addr;                 
                    end

                `ysyx22040228_AXIR_ADDR : begin
                        axi_ar_valid  = (uncache_addr[31] == 1 )?axi_ar_ready:~chosel;
                        axi_ar_addr   =  uncache_addr;
                        axi_ar_size   = uncache_size_data ;
                        axi_ar_len    = 8'b0000_0001;
                        axi_ar_burst  = 2'b01;
                        axi_ar_id     = 4'b0000;
                        axi_r_ready   = 1'b0;
                        axi_aw_valid  =1'b0;
                        axi_w_valid  = 1'b0;
                        axi_b_ready   = 1'b0;
                        axi_w_strb    = 8'h00;                    
                    end

                `ysyx22040228_AXIR_READ : begin                   
                        axi_ar_valid  = 1'b0;
                        axi_ar_addr  = uncache_addr;
                        axi_r_ready   = 1'b1;               
                        axi_ar_len    = 8'h00;
                        axi_ar_size   = 3'b000;
                        axi_ar_burst  = 2'b0;
                        axi_ar_id     = 4'b0000;
                        axi_aw_valid  =1'b0;
                        axi_w_valid  = 1'b0;
                        axi_b_ready   = 1'b0;                    
                        //axi_w_data   = d_cache_data;
                        axi_w_strb   = 8'h00;                    
                    end

                    default:;
            endcase
          end

        `ysyx22040228_ARB_DWRITE : begin
            case (axiw_state)    
            `ysyx22040228_AXIW_IDLE : begin
                    axi_aw_valid = 1'b0;
                    axi_aw_addr  = 64'h0;
                    axi_aw_id    = 4'b0000;
                    axi_aw_len   = 8'h00;
                    axi_aw_size  = 3'b000;
                    axi_aw_burst = 2'b0;
                    axi_w_valid  = 1'b0;
                    axi_w_data   = d_cache_data;
                    axi_w_strb   = 8'b11111111;
                    axi_w_last    = 1'b0;
                    axi_b_ready   = 1'b0;
                    axi_r_ready  = 1'b0;
                    axi_ar_valid = 1'b0;                                        
                end
            `ysyx22040228_AXIW_ADDR :begin
                    axi_aw_valid = 1'b1;
                    axi_aw_addr  = d_cache_addr;
                    axi_ar_addr  = 64'h0;
                    axi_aw_id    = 4'b0000;
                    axi_aw_len   = 8'h00;
                    axi_aw_size  = `AXI_SIZE_BYTES_8 ;
                    axi_aw_burst = 2'b01;
                    axi_w_valid   = 1'b0;
                    axi_w_data    = d_cache_data;
                    axi_w_strb    = 8'b11111111;
                    axi_w_last    = 1'b0;
                    axi_b_ready   = 1'b0;
                    axi_r_ready  = 1'b0;
                    axi_ar_valid = 1'b0;
                end
            `ysyx22040228_AXIW_WRITE : begin
                    axi_aw_valid = 1'b0;
                    axi_aw_addr  = d_cache_addr;
                    axi_ar_addr  = 64'h0;
                    axi_aw_id    = 4'b0000;
                    axi_aw_len   = 8'h00;
                    axi_aw_size  = 3'b000;
                    axi_aw_burst = 2'b0;
                    axi_w_valid  = 1'b1;
                    axi_w_data   = d_cache_data;
                    axi_w_strb   = 8'b11111111;
                    axi_w_last    = 1'b1;
                    axi_b_ready   = 1'b0;
                    axi_r_ready  = 1'b0;
                    axi_ar_valid = 1'b0;
                end
            `ysyx22040228_AXIW_RESP :begin
                    axi_aw_valid = 1'b0;
                    axi_aw_addr  = d_cache_addr;
                    axi_ar_addr  = 64'h0;
                    axi_aw_id    = 4'b0000;
                    axi_aw_len   = 8'h00;
                    axi_aw_size  = 3'b000;
                    axi_aw_burst = 2'b01;
                    axi_w_valid = 1'b0;
                    axi_w_data  = d_cache_data;
                    axi_w_strb   = 8'b11111111;
                    axi_w_last   = 1'b1;
                    axi_b_ready   = 1'b1;
                    axi_r_ready  = 1'b0;
                    axi_ar_valid = 1'b0;                 
                end

                default:; 
        endcase
                
        end

        `ysyx22040228_ARB_DWRITEU : begin
            case (axiw_state)    
                `ysyx22040228_AXIW_IDLE :begin
                    axi_aw_valid = 1'b0;
                    axi_aw_addr  = 64'h0;
                    axi_aw_id    = 4'b0000;
                    axi_aw_len   = 8'h00;
                    axi_aw_size  = 3'b000;
                    axi_aw_burst = 2'b0;
                    axi_w_valid  = 1'b0;
                    axi_w_data   = uncache_data;
                    axi_w_strb   = uncache_mask;
                    axi_w_last    = 1'b0;
                    axi_b_ready   = 1'b0; 
                    axi_r_ready  = 1'b0;
                    axi_ar_valid = 1'b0;                                     
                end
                `ysyx22040228_AXIW_ADDR : begin
                    axi_aw_valid = 1'b1;
                    axi_aw_addr  = uncache_addr;
                    axi_ar_addr  = 64'h0;
                    axi_aw_id    = 4'b0000;
                    axi_aw_len   = 8'h00;
                    axi_aw_size  = uncache_size_data;
                    axi_aw_burst = 2'b01;
                    axi_w_valid   = 1'b0;
                    axi_w_data    = uncache_data;
                    axi_w_strb    = uncache_mask;
                    axi_w_last    = 1'b0;
                    axi_b_ready   = 1'b0;
                    axi_r_ready  = 1'b0;
                    axi_ar_valid = 1'b0;
                end
                `ysyx22040228_AXIW_WRITE : begin
                    axi_aw_valid = 1'b0;
                    axi_aw_addr  = uncache_addr;
                    axi_ar_addr  = 64'h0;
                    axi_aw_id    = 4'b0000;
                    axi_aw_len   = 8'h00;
                    axi_aw_size  = 3'b000;
                    axi_aw_burst = 2'b0;
                    axi_w_valid  = 1'b1;
                    axi_w_data   = uncache_data;
                    axi_w_strb   = uncache_mask;
                    axi_w_last    = 1'b1;
                    axi_b_ready   = 1'b0;
                    axi_r_ready  = 1'b0;
                    axi_ar_valid = 1'b0;
                end
                `ysyx22040228_AXIW_RESP : begin
                    axi_aw_valid = 1'b0;
                    axi_aw_addr  = uncache_addr;
                    axi_ar_addr  = 64'h0;
                    axi_aw_id    = 4'b0000;
                    axi_aw_len   = 8'h00;
                    axi_aw_size  = 3'b000;
                    axi_aw_burst = 2'b01;
                    axi_w_valid  = 1'b0;
                    axi_w_data   = uncache_data;
                    axi_w_strb   = uncache_mask;
                    axi_w_last    = 1'b1;
                    axi_b_ready   = 1'b1;
                    axi_r_ready  = 1'b0;
                    axi_ar_valid = 1'b0;                 
                end

                default:; 
        endcase       
        end
            default: ; 
        endcase
    end

    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            d_cache_data_o     <= 64'h0               ;
            d_cache_valid_     <= `ysyx22040228_ENABLE;
            i_cache_data       <= 64'h0               ;
            i_cache_valid_     <= `ysyx22040228_ENABLE;
            uncahce_data_o     <= 64'h0               ;
            uncahce_valid_     <= `ysyx22040228_ENABLE;
        end 
        else if(read_dcache_shankhand & (axi_r_last & axi_r_valid)) begin
            d_cache_data_o     <= axi_r_data        ;
            d_cache_valid_     <= `ysyx22040228_ABLE;
        end 
        else if(write_dcache_shankhand & (axi_b_ready & axi_b_valid)) begin
            d_cache_valid_     <= `ysyx22040228_ABLE;
        end 
        else if(read_icache_shankhand & (axi_r_last & axi_r_valid))begin
            i_cache_data       <= axi_r_data        ;
            i_cache_valid_     <= `ysyx22040228_ABLE;
        end 
        else if(read_uncahce_shankhand & (axi_r_last & axi_r_valid)) begin          
            uncahce_data_o     <= axi_r_data        ;
            uncahce_valid_     <= `ysyx22040228_ABLE;

        end 
        else if(write_uncahce_shankhand & (axi_b_ready & axi_b_valid)) begin
            uncahce_valid_     <= `ysyx22040228_ABLE;
        end 
        else begin
            d_cache_data_o     <= 64'h0               ;
            d_cache_valid_     <= `ysyx22040228_ENABLE;
            i_cache_data       <= 64'h0               ;
            i_cache_valid_     <= `ysyx22040228_ENABLE;
            uncahce_data_o     <= 64'h0               ;
            uncahce_valid_     <= `ysyx22040228_ENABLE;
        end 
    end


endmodule
