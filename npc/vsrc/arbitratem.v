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

`define ysyx22040228_AXI_SEND       3'b110
`define ysyx22040228_AXI_OK         3'b000
`define ysyx22040228_AXI_END        3'b010
`define ysyx22040228_AXI_IDLE       3'b100
`define ysyx22040228_AXI_WRITE      3'b101


`include "defines.v"
`include "defines_axi4.v"
`include "cache_defines.v"
module arbitratem (
    //-----------------------------system----------------------------------------//
    input       wire                                         clk                  ,
    input       wire                                         rst                  ,
    //-----------------------------d_cache---------------------------------------//
    /* verilator lint_off UNUSED */
    input       wire       [63:0]                            d_cache_addr         ,
    /* verilator lint_on UNUSED */
    input       wire       [63:0]                            d_cache_data         ,
    input       wire       [3:0]                             d_cache_type         ,
    //input       wire                                         d_cache_resp         ,
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
    //input       wire                                         i_cache_resp         ,
    output      reg        [63:0]                            i_cache_data         ,
    output      reg                                          i_cache_valid_       ,
    //----------------------write address cahnnel--------------------------------//
    output      wire       [`ysyx22040228_ID_BUS]            axi_aw_id            ,
    output      wire       [`ysyx22040228_ADDR_BUS]          axi_aw_addr          ,
    output      wire       [`ysyx22040228_LEN_BUS]           axi_aw_len           ,
    output      wire       [`ysyx22040228_SIZE_BUS]          axi_aw_size          ,
    output      wire       [`ysyx22040228_BURST_BUS]         axi_aw_burst         ,
    output      wire       [`ysyx22040228_CACHE_BUS]         axi_aw_cache         ,
    output      wire       [`ysyx22040228_PROT_BUS]          axi_aw_port          ,
    output      wire       [`ysyx22040228_QOS_BUS]           axi_aw_qos           ,
    output      wire                                         axi_aw_valid         ,
    input       wire                                         axi_aw_ready         ,

    //----------------------write data channel-----------------------------------//
    output      wire       [`ysyx22040228_DATA_BUS]          axi_w_data           ,
    output      wire       [`ysyx22040228_STRB_BUS]          axi_w_strb           ,
    output      wire                                         axi_w_last           ,
    output      wire                                         axi_w_valid          ,
    input       wire                                         axi_w_ready          ,

    //-----------------------write response channel------------------------------//
    input       wire       [`ysyx22040228_ID_BUS]            axi_b_id             ,
    input       wire       [`ysyx22040228_RESP_BUS]          axi_b_resp           ,
    input       wire                                         axi_b_valid          ,
    output      wire                                         axi_b_ready          ,

    //------------------------read address channel-------------------------------//
    output      wire       [`ysyx22040228_ID_BUS]            axi_ar_id            ,
    output      wire       [`ysyx22040228_ADDR_BUS]          axi_ar_addr          ,
    output      wire       [`ysyx22040228_LEN_BUS]           axi_ar_len           ,
    output      wire       [`ysyx22040228_SIZE_BUS]          axi_ar_size          ,
    output      wire       [`ysyx22040228_BURST_BUS]         axi_ar_burst         ,
    output      wire       [`ysyx22040228_CACHE_BUS]         axi_ar_cache         ,
    output      wire       [`ysyx22040228_PROT_BUS]          axi_ar_prot          ,
    output      wire       [`ysyx22040228_QOS_BUS]           axi_ar_qos           ,
    output      wire                                         axi_ar_valid         ,
    input       wire                                         axi_ar_ready         ,

    //------------------------read data channel----------------------------------//
    input       wire       [`ysyx22040228_ID_BUS]            axi_r_id             ,
    input       wire       [`ysyx22040228_DATA_BUS]          axi_r_data           ,
    input       wire       [`ysyx22040228_RESP_BUS]          axi_r_resp           ,
    input       wire                                         axi_r_last           ,
    input       wire                                         axi_r_valid          ,
    output      wire                                         axi_r_ready           
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

    reg  [2:0]    arbitrate_state ;
    reg  [2:0]    arbitrate_state_nxt ;

    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA)
            arbitrate_state <= `ysyx22040228_ARB_IDLE ;
        else 
            arbitrate_state <= arbitrate_state_nxt   ;
    end

    reg    dread_ok    ;
    reg    dread_ok_u  ;
    reg    dwrite_ok   ;
    reg    dwrite_ok_u ;
    reg    iread_ok    ;
    always @(*) begin
        case (arbitrate_state)
            `ysyx22040228_ARB_IDLE : begin
                if(read_dcache_shankhand)
                    arbitrate_state_nxt = `ysyx22040228_ARB_DREAD ;
                else if(read_uncahce_shankhand)
                    arbitrate_state_nxt = `ysyx22040228_ARB_DREADU ;
                else if(write_dcache_shankhand)
                    arbitrate_state_nxt = `ysyx22040228_ARB_DWRITE;
                else if(write_uncahce_shankhand)
                    arbitrate_state_nxt = `ysyx22040228_ARB_DWRITEU;
                else if(read_icache_shankhand)
                    arbitrate_state_nxt = `ysyx22040228_ARB_IREAD ;
                else 
                    arbitrate_state_nxt = `ysyx22040228_ARB_IDLE  ;
            end 
            `ysyx22040228_ARB_DREAD : begin
                if(dread_ok)
                    arbitrate_state_nxt = `ysyx22040228_ARB_IDLE  ;
                else 
                    arbitrate_state_nxt = `ysyx22040228_ARB_DREAD ;
            end 
            `ysyx22040228_ARB_DREADU : begin
                if(dread_ok_u)
                    arbitrate_state_nxt = `ysyx22040228_ARB_IDLE  ;
                else 
                    arbitrate_state_nxt = `ysyx22040228_ARB_DREADU ;
            end 
            `ysyx22040228_ARB_DWRITE : begin
                if(dwrite_ok)
                    arbitrate_state_nxt = `ysyx22040228_ARB_IDLE  ;
                else 
                    arbitrate_state_nxt = `ysyx22040228_ARB_DWRITE;
            end 
            `ysyx22040228_ARB_DWRITEU : begin
                if(dwrite_ok_u)
                    arbitrate_state_nxt = `ysyx22040228_ARB_IDLE  ;
                else 
                    arbitrate_state_nxt = `ysyx22040228_ARB_DWRITEU;
            end
            `ysyx22040228_ARB_IREAD : begin
                if(iread_ok)
                    arbitrate_state_nxt = `ysyx22040228_ARB_IDLE  ;
                else 
                    arbitrate_state_nxt = `ysyx22040228_ARB_IREAD ;
            end 
            default:  arbitrate_state_nxt = `ysyx22040228_ARB_IDLE  ;
        endcase
    end

    reg  [2:0]    axi_state ;
    reg  [2:0]    axi_state_n ;
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA)
            axi_state <= `ysyx22040228_AXI_IDLE ;
        else 
            axi_state <= axi_state_n            ;
    end
    wire   success_dread         ;
    wire   success_dwrite        ;
    wire   success_iread         ;
    wire   success_uncahceread   ;
    wire   success_uncahcewrite  ;
    wire   axi_shankhand         ;
    wire   shankhand  ;
    assign shankhand = read_uncahce_shankhand | write_dcache_shankhand | read_icache_shankhand | read_uncahce_shankhand | write_uncahce_shankhand ;
    wire   success    ;
    assign success   = sign_delay_dread | sign_delay_dwrite | sign_delay_iread | sign_delay_unread | sign_delay_unwrite ;
    always @(*) begin
        case (axi_state)
            `ysyx22040228_AXI_IDLE: begin
                if(shankhand)
                    axi_state_n = `ysyx22040228_AXI_SEND;
                else 
                    axi_state_n = `ysyx22040228_AXI_IDLE;
            end
            `ysyx22040228_AXI_SEND: begin
                if(axi_shankhand)
                    axi_state_n = `ysyx22040228_AXI_WRITE  ;
                else 
                    axi_state_n = `ysyx22040228_AXI_SEND ;
            end 
            `ysyx22040228_AXI_WRITE: begin
                if(success)
                    axi_state_n = `ysyx22040228_AXI_IDLE ;
                else 
                    axi_state_n = `ysyx22040228_AXI_WRITE;
            end 
            default: axi_state_n = `ysyx22040228_AXI_IDLE;
        endcase
    end

    // id == 4'b0001 ---> dcache
    // id == 4'b0010 ---> unchace
    // id == 4'b0100 ---> icache
    assign axi_aw_id      =   ((arbitrate_state == `ysyx22040228_ARB_DWRITE) && (axi_state == `ysyx22040228_AXI_SEND))   ? 4'b0001 :
                              ((arbitrate_state == `ysyx22040228_ARB_DWRITEU) && (axi_state == `ysyx22040228_AXI_SEND))  ? 4'b0010 :
                                                                                                                           4'b0000 ; 

    assign axi_aw_addr    =   ((arbitrate_state == `ysyx22040228_ARB_DWRITE) && (axi_state == `ysyx22040228_AXI_SEND))   ? d_cache_addr :
                              ((arbitrate_state == `ysyx22040228_ARB_DWRITEU) && (axi_state == `ysyx22040228_AXI_SEND))  ? uncache_addr :
                                                                                                                           64'h0        ;    
    assign axi_aw_len     =    ((arbitrate_state == `ysyx22040228_ARB_DWRITE) && (axi_state == `ysyx22040228_AXI_SEND))  ? 8'b0    :
                              ((arbitrate_state == `ysyx22040228_ARB_DWRITEU) && (axi_state == `ysyx22040228_AXI_SEND))  ? 8'b0    :
                                                                                                                           8'b0    ; 
    assign axi_aw_size    =   ((arbitrate_state == `ysyx22040228_ARB_DWRITE) && (axi_state == `ysyx22040228_AXI_SEND))   ? `AXI_SIZE_BYTES_64 :
                              ((arbitrate_state == `ysyx22040228_ARB_DWRITEU) && (axi_state == `ysyx22040228_AXI_SEND))  ? uncache_size_data  :
                                                                                                                           `AXI_SIZE_BYTES_1  ;
    assign axi_aw_burst   =   `AXI_BURST_TYPE_INCR                                                                                 ;
    assign axi_aw_port    =   `AXI_PROT_UNPRIVILEGED_ACCESS                                                                        ;
    assign axi_aw_qos     =   4'h0                                                                                                 ;
    assign axi_aw_cache   =   `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE                                                     ;
    assign axi_aw_valid   =   ((arbitrate_state == `ysyx22040228_ARB_DWRITE) && (axi_state == `ysyx22040228_AXI_SEND))   ? `ysyx22040228_ABLE   :
                              ((arbitrate_state == `ysyx22040228_ARB_DWRITEU) && (axi_state == `ysyx22040228_AXI_SEND))  ? `ysyx22040228_ABLE   :
                                                                                                                           `ysyx22040228_ENABLE ; 

    assign axi_w_data     =   ((arbitrate_state == `ysyx22040228_ARB_DWRITE) && (axi_state == `ysyx22040228_AXI_SEND))   ? d_cache_data :
                              ((arbitrate_state == `ysyx22040228_ARB_DWRITEU) && (axi_state == `ysyx22040228_AXI_SEND))  ? uncache_data :
                                                                                                                           64'h0        ;
    assign axi_w_strb     =   ((arbitrate_state == `ysyx22040228_ARB_DWRITE) && (axi_state == `ysyx22040228_AXI_SEND))   ? 8'b11111111  :
                              ((arbitrate_state == `ysyx22040228_ARB_DWRITEU) && (axi_state == `ysyx22040228_AXI_SEND))  ? uncache_mask :
                                                                                                                           8'b0         ;
    assign axi_w_data     =   ((arbitrate_state == `ysyx22040228_ARB_DWRITE) && (axi_state == `ysyx22040228_AXI_SEND))   ? d_cache_data :
                              ((arbitrate_state == `ysyx22040228_ARB_DWRITEU) && (axi_state == `ysyx22040228_AXI_SEND))  ? uncache_data :
                                                                                                                           64'h0        ;
    assign axi_w_last     =   `ysyx22040228_ABLE                                                                                        ;
    assign axi_w_valid    =   ((arbitrate_state == `ysyx22040228_ARB_DWRITE) && (axi_state == `ysyx22040228_AXI_SEND))   ? `ysyx22040228_ABLE  :
                              ((arbitrate_state == `ysyx22040228_ARB_DWRITEU) && (axi_state == `ysyx22040228_AXI_SEND))  ? `ysyx22040228_ABLE  :
                                                                                                                           `ysyx22040228_ENABLE;
    assign axi_b_ready    =   `ysyx22040228_ABLE                                                                                        ;           

    assign axi_ar_id      =   ((arbitrate_state == `ysyx22040228_ARB_DREAD) && (axi_state == `ysyx22040228_AXI_SEND))    ? 4'b0001      :
                              ((arbitrate_state == `ysyx22040228_ARB_DREADU) && (axi_state == `ysyx22040228_AXI_SEND))   ? 4'b0010      :
                              ((arbitrate_state == `ysyx22040228_ARB_IREAD) && (axi_state == `ysyx22040228_AXI_SEND))    ? 4'b0100      :
                                                                                                                           4'b0000      ;
    assign axi_ar_addr    =   ((arbitrate_state == `ysyx22040228_ARB_DREAD) && (axi_state == `ysyx22040228_AXI_SEND))    ? d_cache_addr :
                              ((arbitrate_state == `ysyx22040228_ARB_DREADU) && (axi_state == `ysyx22040228_AXI_SEND))   ? uncache_addr :
                              ((arbitrate_state == `ysyx22040228_ARB_IREAD) && (axi_state == `ysyx22040228_AXI_SEND))    ? i_cache_addr :
                                                                                                                           64'h0        ;
    assign axi_ar_len     =   ((arbitrate_state == `ysyx22040228_ARB_DREAD) && (axi_state == `ysyx22040228_AXI_SEND))    ? 8'b0         :
                              ((arbitrate_state == `ysyx22040228_ARB_DREADU) && (axi_state == `ysyx22040228_AXI_SEND))   ? 8'b0         :
                              ((arbitrate_state == `ysyx22040228_ARB_IREAD) && (axi_state == `ysyx22040228_AXI_SEND))    ? 8'b0         :
                                                                                                                           8'b0         ;
    assign axi_ar_size    =   ((arbitrate_state == `ysyx22040228_ARB_DREAD) && (axi_state == `ysyx22040228_AXI_SEND))    ? `AXI_SIZE_BYTES_64 :
                              ((arbitrate_state == `ysyx22040228_ARB_DREADU) && (axi_state == `ysyx22040228_AXI_SEND))   ? uncache_size_data  :
                              (((arbitrate_state == `ysyx22040228_ARB_IREAD) && (axi_state == `ysyx22040228_AXI_SEND)) && 
                              ((i_cache_addr >= `ysyx22040228_APB_START) && (i_cache_addr <= `ysyx22040228_APB_END)))    ? `AXI_SIZE_BYTES_32 :
                              (((arbitrate_state == `ysyx22040228_ARB_IREAD) && (axi_state == `ysyx22040228_AXI_SEND)) && 
                              ((i_cache_addr < `ysyx22040228_APB_START) || (i_cache_addr > `ysyx22040228_APB_END)))      ? `AXI_SIZE_BYTES_64 :
                                                                                                                           `AXI_SIZE_BYTES_1  ;
    assign axi_ar_burst   =   `AXI_BURST_TYPE_INCR                                                                                 ;
    assign axi_ar_prot    =   `AXI_PROT_UNPRIVILEGED_ACCESS                                                                        ;
    assign axi_ar_qos     =   4'h0                                                                                                 ;
    assign axi_ar_cache   =   `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE                                                     ;
    assign axi_ar_valid   =   ((arbitrate_state == `ysyx22040228_ARB_DREAD) && (axi_state == `ysyx22040228_AXI_SEND))    ? `ysyx22040228_ABLE   :
                              ((arbitrate_state == `ysyx22040228_ARB_DREADU) && (axi_state == `ysyx22040228_AXI_SEND))   ? `ysyx22040228_ABLE   :
                              ((arbitrate_state == `ysyx22040228_ARB_IREAD) && (axi_state == `ysyx22040228_AXI_SEND))    ? `ysyx22040228_ABLE   :
                                                                                                                           `ysyx22040228_ENABLE ;

    assign axi_r_ready    =   `ysyx22040228_ABLE                                                                                   ;


    assign success_dread        = ((arbitrate_state == `ysyx22040228_ARB_DREAD)   && (axi_r_id == 4'b0001) && (axi_r_last == `ysyx22040228_ABLE) && (axi_r_valid == `ysyx22040228_ABLE) && (axi_r_resp == 2'b00));
    assign success_dwrite       = ((arbitrate_state == `ysyx22040228_ARB_DWRITE)  && (axi_b_id == 4'b0001) && (axi_b_resp == 2'b00             ) && (axi_b_valid == `ysyx22040228_ABLE));
    assign success_iread        = ((arbitrate_state == `ysyx22040228_ARB_IREAD)   && (axi_r_id == 4'b0100) && (axi_r_last == `ysyx22040228_ABLE) && (axi_r_valid == `ysyx22040228_ABLE) && (axi_r_resp == 2'b00));
    assign success_uncahceread  = ((arbitrate_state == `ysyx22040228_ARB_DREADU)  && (axi_r_id == 4'b0010) && (axi_r_last == `ysyx22040228_ABLE) && (axi_r_valid == `ysyx22040228_ABLE) && (axi_r_resp == 2'b00));
    assign success_uncahcewrite = ((arbitrate_state == `ysyx22040228_ARB_DWRITEU) && (axi_b_id == 4'b0010) && (axi_b_resp == 2'b00             ) && (axi_b_valid == `ysyx22040228_ABLE));

    //assign d_cache_data_o   = success_dread       ?  axi_r_data           :   64'h0                ;
    //assign d_cache_valid_   = success_dread       ? `ysyx22040228_ABLE    :   `ysyx22040228_ENABLE ;
    //assign uncahce_data_o   = success_uncahceread ?  axi_r_data           :   64'h0                ; 
    //assign uncahce_valid_   = success_uncahceread ? `ysyx22040228_ABLE    :   `ysyx22040228_ENABLE ;
    //assign i_cache_data     = success_iread       ?  axi_r_data           :   64'h0                ;
    //assign i_cache_valid_   = success_iread       ? `ysyx22040228_ABLE    :   `ysyx22040228_ENABLE ; 

    reg     sign_delay_dread  ;
    reg     sign_delay_dwrite ;
    reg     sign_delay_iread  ;
    reg     sign_delay_unread ;
    reg     sign_delay_unwrite;
    always @(posedge clk) begin
        if(success_dread) begin
            sign_delay_dread   <= `ysyx22040228_ABLE;
            d_cache_data_o     <= axi_r_data        ;
            d_cache_valid_     <= `ysyx22040228_ABLE;
        end 
        else if(success_dwrite) begin
            sign_delay_dwrite  <= `ysyx22040228_ABLE;
        end 
        else if(success_iread)begin
            sign_delay_iread   <= `ysyx22040228_ABLE;
            i_cache_data       <= axi_r_data        ;
            i_cache_valid_     <= `ysyx22040228_ABLE;
        end 
        else if(success_uncahceread) begin
            sign_delay_unread  <= `ysyx22040228_ABLE;
        end 
        else if(success_uncahcewrite) begin
            sign_delay_unwrite <= `ysyx22040228_ABLE;
            uncahce_data_o     <= axi_r_data        ;
            uncahce_valid_     <= `ysyx22040228_ABLE;
        end 
        else begin
            sign_delay_dread   <= `ysyx22040228_ENABLE;
            sign_delay_dwrite  <= `ysyx22040228_ENABLE;
            sign_delay_iread   <= `ysyx22040228_ENABLE;
            sign_delay_unread  <= `ysyx22040228_ENABLE;
            sign_delay_unwrite <= `ysyx22040228_ENABLE;
            d_cache_data_o     <= 64'h0               ;
            d_cache_valid_     <= `ysyx22040228_ENABLE;
            i_cache_data       <= 64'h0               ;
            i_cache_valid_     <= `ysyx22040228_ENABLE;
            uncahce_data_o     <= 64'h0               ;
            uncahce_valid_     <= `ysyx22040228_ENABLE;
        end 
    end

    assign dread_ok    = sign_delay_dread    ;
    assign dwrite_ok   = sign_delay_dwrite   ;
    assign iread_ok    = sign_delay_iread    ;
    assign dread_ok_u  = sign_delay_unread   ;
    assign dwrite_ok_u = sign_delay_unwrite  ;

    assign axi_shankhand = (axi_aw_ready | axi_w_ready) | axi_ar_ready ;

endmodule
