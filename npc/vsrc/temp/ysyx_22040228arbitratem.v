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
module ysyx_22040228arbitratem (
    //-----------------------------system----------------------------------------//
    input       wire                                         clk                  ,
    input       wire                                         rst                  ,
    //-----------------------------d_cache---------------------------------------//
    input       wire       [63:0]                            d_cache_addr         ,
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
    /* verilator lint_off UNUSED */
    input       wire                                         axi_aw_ready         ,
    /* verilator lint_on UNUSED */
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

    // froce define for verdi
    reg     sign_delay_dread  ;
    reg     sign_delay_dwrite ;
    reg     sign_delay_iread  ;
    reg     sign_delay_unread ;
    reg     sign_delay_unwrite;
    // reg     aw_enable ;
    // reg     aw_enable_n ;
    // froce define for verdi

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

    wire    dread_ok    ;
    wire    dread_ok_u  ;
    wire    dwrite_ok   ;
    wire    dwrite_ok_u ;
    wire    iread_ok    ;
    always @(*) begin
        if(rst == `ysyx22040228_RSTENA) begin
            arbitrate_state_nxt = `ysyx22040228_ARB_IDLE  ;
        end 
        else begin 
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
    end

    // reg  [2:0]    axi_state ;
    // reg  [2:0]    axi_state_n ;
    // always @(posedge clk) begin
    //     if(rst == `ysyx22040228_RSTENA)
    //         axi_state <= `ysyx22040228_AXI_IDLE ;
    //     else 
    //         axi_state <= axi_state_n            ;
    // end
    wire   success_dread         ;
    wire   success_dwrite        ;
    wire   success_iread         ;
    wire   success_uncahceread   ;
    wire   success_uncahcewrite  ;
    //wire   axi_shankhand         ;
    // wire   shankhand  ;
    // assign shankhand = read_dcache_shankhand | write_dcache_shankhand | read_icache_shankhand | read_uncahce_shankhand | write_uncahce_shankhand ;
    //wire   success    ;
    //assign success   = sign_delay_dread | sign_delay_dwrite | sign_delay_iread | sign_delay_unread | sign_delay_unwrite ;


    // always @(*) begin
    //     if(rst == `ysyx22040228_RSTENA) begin
    //         axi_state_n = `ysyx22040228_AXI_IDLE;
    //     end 
    //     else begin
    //         case (axi_state)
    //             `ysyx22040228_AXI_IDLE: begin
    //                 if(shankhand)
    //                     axi_state_n = `ysyx22040228_AXI_SEND;
    //                 else 
    //                     axi_state_n = `ysyx22040228_AXI_IDLE;
    //             end
    //             `ysyx22040228_AXI_SEND: begin
    //                 if(axi_shankhand)
    //                     axi_state_n = `ysyx22040228_AXI_WRITE  ;
    //                 else 
    //                     axi_state_n = `ysyx22040228_AXI_SEND ;
    //             end 
    //             `ysyx22040228_AXI_WRITE: begin
    //                 if(success)
    //                     axi_state_n = `ysyx22040228_AXI_IDLE ;
    //                 else 
    //                     axi_state_n = `ysyx22040228_AXI_WRITE;
    //             end 
    //             // `ysyx22040228_AXI_SEND: begin
    //             //     if(success)
    //             //         axi_state_n = `ysyx22040228_AXI_IDLE ;
    //             //     else 
    //             //         axi_state_n = `ysyx22040228_AXI_SEND ;
    //             // end 
    //             default: axi_state_n = `ysyx22040228_AXI_IDLE;
    //         endcase
    //     end 
    // end

    reg  [2:0]  axiw_state   ;
    reg  [2:0]  axiw_state_n ;
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA)
            axiw_state <= `ysyx22040228_AXIW_IDLE ;
        else 
            axiw_state <= axiw_state_n            ;
    end

    always @(*) begin
        if(rst == `ysyx22040228_RSTENA) begin
            axiw_state_n = `ysyx22040228_AXIW_IDLE ;
        end 
        else begin
            case (axiw_state)
                `ysyx22040228_AXIW_IDLE : begin
                    axiw_state_n = `ysyx22040228_AXIW_ADDR ;
                end 
                `ysyx22040228_AXIW_ADDR : begin
                    if(axi_aw_ready) 
                        axiw_state_n = `ysyx22040228_AXIW_WRITE ;
                    else 
                        axiw_state_n = `ysyx22040228_AXIW_ADDR  ;
                end 
                `ysyx22040228_AXIW_WRITE : begin
                    if(axi_w_ready & axi_w_valid & axi_w_last)
                        axiw_state_n = `ysyx22040228_AXIW_RESP ;
                    else begin
                        axiw_state_n = `ysyx22040228_AXIW_WRITE;
                    end 
                end 
                `ysyx22040228_AXIW_RESP : begin
                    if(axi_b_valid) 
                        axiw_state_n = `ysyx22040228_AXIW_IDLE ;
                    else 
                        axiw_state_n = `ysyx22040228_AXIW_RESP ;
                end 
                default: axiw_state_n = `ysyx22040228_AXIW_IDLE ;
            endcase
        end 
    end

    reg  [1:0]  axir_state ;
    reg  [1:0]  axir_state_n ;
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) 
            axir_state <= `ysyx22040228_AXIR_IDLE ;
        else 
            axir_state <= axir_state_n ;
    end
    
    always @(*) begin
        if(rst == `ysyx22040228_RSTENA) begin
            axir_state_n = `ysyx22040228_AXIR_IDLE ;
        end 
        else begin
            case (axir_state)
                `ysyx22040228_AXIR_IDLE : begin
                    axir_state_n = `ysyx22040228_AXIR_ADDR ;
                end  
                `ysyx22040228_AXIR_ADDR : begin
                    if(axi_ar_valid & axi_ar_ready)
                        axir_state_n = `ysyx22040228_AXIR_READ ;
                    else 
                        axir_state_n = `ysyx22040228_AXIR_ADDR ;
                end 
                `ysyx22040228_AXIR_READ : begin
                    if(axi_r_last & axi_r_valid)
                        axir_state_n = `ysyx22040228_AXIR_IDLE ;
                    else
                        axir_state_n = `ysyx22040228_AXIR_READ ;
                end 
                default: axir_state_n = `ysyx22040228_AXIR_IDLE ;
            endcase
        end 
    end


    // id == 4'b0001 ---> dcache
    // id == 4'b0010 ---> unchace
    // id == 4'b0100 ---> icache
    // assign axi_aw_id      =   ((arbitrate_state == `ysyx22040228_ARB_DWRITE) && (axi_state == `ysyx22040228_AXI_SEND))   ? 4'b0001 :
    //                           ((arbitrate_state == `ysyx22040228_ARB_DWRITEU) && (axi_state == `ysyx22040228_AXI_SEND))  ? 4'b0010 :
    //                                                                                                                        4'b0000 ; 

    // assign axi_aw_addr    =   ((arbitrate_state == `ysyx22040228_ARB_DWRITE) && (axi_state == `ysyx22040228_AXI_SEND))   ? d_cache_addr :
    //                           ((arbitrate_state == `ysyx22040228_ARB_DWRITEU) && (axi_state == `ysyx22040228_AXI_SEND))  ? uncache_addr :
    //                                                                                                                        64'h0        ;    
    // assign axi_aw_len     =    ((arbitrate_state == `ysyx22040228_ARB_DWRITE) && (axi_state == `ysyx22040228_AXI_SEND))  ? 8'h00   :
    //                           ((arbitrate_state == `ysyx22040228_ARB_DWRITEU) && (axi_state == `ysyx22040228_AXI_SEND))  ? 8'h00   :
    //                                                                                                                        8'h00   ; 
    // assign axi_aw_size    =   ((arbitrate_state == `ysyx22040228_ARB_DWRITE) && (axi_state == `ysyx22040228_AXI_SEND))   ? `AXI_SIZE_BYTES_8  :
    //                           ((arbitrate_state == `ysyx22040228_ARB_DWRITEU) && (axi_state == `ysyx22040228_AXI_SEND))  ? uncache_size_data  :
    //                                                                                                                        `AXI_SIZE_BYTES_1  ;
    // assign axi_aw_burst   =   `AXI_BURST_TYPE_INCR                                                                                 ;
    // assign axi_aw_port    =   `AXI_PROT_UNPRIVILEGED_ACCESS                                                                        ;
    // assign axi_aw_qos     =   4'h0                                                                                                 ;
    // assign axi_aw_cache   =   `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE                                                     ;
    // assign axi_aw_valid   =   ((arbitrate_state == `ysyx22040228_ARB_DWRITE) && (axi_state == `ysyx22040228_AXI_SEND))   ? (`ysyx22040228_ABLE & ~aw_enable)  :
    //                           ((arbitrate_state == `ysyx22040228_ARB_DWRITEU) && (axi_state == `ysyx22040228_AXI_SEND))  ? (`ysyx22040228_ABLE & ~aw_enable)  :
    //                                                                                                                        `ysyx22040228_ENABLE ; 

    // assign axi_w_data     =   ((arbitrate_state == `ysyx22040228_ARB_DWRITE) && (axi_state == `ysyx22040228_AXI_SEND))   ? d_cache_data :
    //                           ((arbitrate_state == `ysyx22040228_ARB_DWRITEU) && (axi_state == `ysyx22040228_AXI_SEND))  ? uncache_data :
    //                                                                                                                        64'h0        ;
    // assign axi_w_strb     =   ((arbitrate_state == `ysyx22040228_ARB_DWRITE) && (axi_state == `ysyx22040228_AXI_SEND))   ? 8'b11111111  :
    //                           ((arbitrate_state == `ysyx22040228_ARB_DWRITEU) && (axi_state == `ysyx22040228_AXI_SEND))  ? uncache_mask :
    //                                                                                                                        8'b0         ;
    // // assign axi_w_data     =   ((arbitrate_state == `ysyx22040228_ARB_DWRITE) && (axi_state == `ysyx22040228_AXI_SEND))   ? d_cache_data :
    // //                           ((arbitrate_state == `ysyx22040228_ARB_DWRITEU) && (axi_state == `ysyx22040228_AXI_SEND))  ? uncache_data :
    // //                                                                                                                        64'h0        ;
    // assign axi_w_last     =   `ysyx22040228_ABLE                                                                                        ;
    // assign axi_w_valid    =   ((arbitrate_state == `ysyx22040228_ARB_DWRITE) && (axi_state == `ysyx22040228_AXI_SEND))   ? `ysyx22040228_ABLE  :
    //                           ((arbitrate_state == `ysyx22040228_ARB_DWRITEU) && (axi_state == `ysyx22040228_AXI_SEND))  ? `ysyx22040228_ABLE  :
    //                                                                                                                        `ysyx22040228_ENABLE;
    // assign axi_b_ready    =   `ysyx22040228_ABLE                                                                                        ;           

    // assign axi_ar_id      =   ((arbitrate_state == `ysyx22040228_ARB_DREAD) && (axi_state == `ysyx22040228_AXI_SEND))    ? 4'b0001      :
    //                           ((arbitrate_state == `ysyx22040228_ARB_DREADU) && (axi_state == `ysyx22040228_AXI_SEND))   ? 4'b0010      :
    //                           ((arbitrate_state == `ysyx22040228_ARB_IREAD) && (axi_state == `ysyx22040228_AXI_SEND))    ? 4'b0100      :
    //                                                                                                                        4'b0000      ;
    // assign axi_ar_addr    =   ((arbitrate_state == `ysyx22040228_ARB_DREAD) && (axi_state == `ysyx22040228_AXI_SEND))    ? d_cache_addr :
    //                           ((arbitrate_state == `ysyx22040228_ARB_DREADU) && (axi_state == `ysyx22040228_AXI_SEND))   ? uncache_addr :
    //                           ((arbitrate_state == `ysyx22040228_ARB_IREAD) && (axi_state == `ysyx22040228_AXI_SEND))    ? i_cache_addr :
    //                                                                                                                        64'h0        ;
    // assign axi_ar_len     =   ((arbitrate_state == `ysyx22040228_ARB_DREAD) && (axi_state == `ysyx22040228_AXI_SEND))    ? 8'h00        :
    //                           ((arbitrate_state == `ysyx22040228_ARB_DREADU) && (axi_state == `ysyx22040228_AXI_SEND))   ? 8'h00        :
    //                           ((arbitrate_state == `ysyx22040228_ARB_IREAD) && (axi_state == `ysyx22040228_AXI_SEND))    ? 8'h00        :
    //                                                                                                                        8'h00        ;
    // assign axi_ar_size    =   ((arbitrate_state == `ysyx22040228_ARB_DREAD) && (axi_state == `ysyx22040228_AXI_SEND))    ? `AXI_SIZE_BYTES_8 :
    //                           ((arbitrate_state == `ysyx22040228_ARB_DREADU) && (axi_state == `ysyx22040228_AXI_SEND))   ? uncache_size_data  :
    //                           (((arbitrate_state == `ysyx22040228_ARB_IREAD) && (axi_state == `ysyx22040228_AXI_SEND)) && 
    //                           ((i_cache_addr >= `ysyx22040228_APB_START) && (i_cache_addr <= `ysyx22040228_APB_END)))    ? `AXI_SIZE_BYTES_4 :
    //                           (((arbitrate_state == `ysyx22040228_ARB_IREAD) && (axi_state == `ysyx22040228_AXI_SEND)) && 
    //                           ((i_cache_addr < `ysyx22040228_APB_START) || (i_cache_addr > `ysyx22040228_APB_END)))      ? `AXI_SIZE_BYTES_8 :
    //                                                                                                                        `AXI_SIZE_BYTES_1  ;
    // assign axi_ar_burst   =   `AXI_BURST_TYPE_INCR                                                                                 ;
    // assign axi_ar_prot    =   `AXI_PROT_UNPRIVILEGED_ACCESS                                                                        ;
    // assign axi_ar_qos     =   4'h0                                                                                                 ;
    // assign axi_ar_cache   =   `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE                                                     ;
    // assign axi_ar_valid   =   ((arbitrate_state == `ysyx22040228_ARB_DREAD) && (axi_state == `ysyx22040228_AXI_SEND))    ? `ysyx22040228_ABLE   :
    //                           ((arbitrate_state == `ysyx22040228_ARB_DREADU) && (axi_state == `ysyx22040228_AXI_SEND))   ? `ysyx22040228_ABLE   :
    //                           ((arbitrate_state == `ysyx22040228_ARB_IREAD) && (axi_state == `ysyx22040228_AXI_SEND))    ? `ysyx22040228_ABLE   :
    //                                                                                                             `ysyx22040228_ENABLE ;      
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

    assign axi_ar_valid   =   ((arbitrate_state == `ysyx22040228_ARB_IREAD) && (axir_state == `ysyx22040228_AXIR_ADDR))  ? ((axi_ar_addr[31]) ? axi_ar_ready : ~chosel): 
                              ((arbitrate_state == `ysyx22040228_ARB_DREAD) && (axir_state == `ysyx22040228_AXIR_ADDR))  ? ((axi_ar_addr[31]) ? axi_ar_ready : ~chosel): 
                              ((arbitrate_state == `ysyx22040228_ARB_DREADU) && (axir_state == `ysyx22040228_AXIR_ADDR)) ? ((axi_ar_addr[31]) ? axi_ar_ready : ~chosel): 
                                                                                                                           `ysyx22040228_ENABLE ; 

    assign axi_ar_addr    =   ((arbitrate_state == `ysyx22040228_ARB_IREAD) && ((axir_state == `ysyx22040228_AXIR_ADDR) | (axir_state == `ysyx22040228_AXIR_READ))) ? i_cache_addr : 
                              ((arbitrate_state == `ysyx22040228_ARB_DREAD) && ((axir_state == `ysyx22040228_AXIR_ADDR) | (axir_state == `ysyx22040228_AXIR_READ))) ? d_cache_addr : 
                              ((arbitrate_state == `ysyx22040228_ARB_DREADU) && ((axir_state == `ysyx22040228_AXIR_ADDR) | (axir_state == `ysyx22040228_AXIR_READ))) ? uncache_addr : 
                                                                                                                                                                      64'h0        ;

    assign axi_ar_size    =   (((arbitrate_state == `ysyx22040228_ARB_IREAD) && (axir_state == `ysyx22040228_AXIR_ADDR)) && 
                              ((i_cache_addr >= `ysyx22040228_APB_START) && (i_cache_addr <= `ysyx22040228_APB_END)))   ? `AXI_SIZE_BYTES_4 : 
                              (((arbitrate_state == `ysyx22040228_ARB_IREAD) && (axir_state == `ysyx22040228_AXIR_ADDR)) && 
                              ((i_cache_addr < `ysyx22040228_APB_START) && (i_cache_addr > `ysyx22040228_APB_END)))     ? `AXI_SIZE_BYTES_8 :
                              ((arbitrate_state == `ysyx22040228_ARB_DREAD) && (axir_state == `ysyx22040228_AXIR_ADDR)) ? `AXI_SIZE_BYTES_8 :
                              ((arbitrate_state == `ysyx22040228_ARB_DREADU) && (axir_state == `ysyx22040228_AXIR_ADDR)) ? uncache_size_data :
                                                                                                                           3'b000           ;

    assign axi_ar_len     =   8'h00 ;

    assign axi_ar_burst   =   `AXI_BURST_TYPE_INCR ;

    assign axi_ar_id      =   ((arbitrate_state == `ysyx22040228_ARB_IREAD) && (axir_state == `ysyx22040228_AXIR_ADDR)) ? 4'b0100 :
                              ((arbitrate_state == `ysyx22040228_ARB_DREAD) && (axir_state == `ysyx22040228_AXIR_ADDR)) ? 4'b0001 :
                              ((arbitrate_state == `ysyx22040228_ARB_DREADU) && (axir_state == `ysyx22040228_AXIR_ADDR)) ? 4'b0010 :
                                                                                                                           4'b0000 ;
                                                                                                                        

    assign axi_ar_prot    =   `AXI_PROT_UNPRIVILEGED_ACCESS;

    assign axi_ar_qos     =   4'h0 ;

    assign axi_ar_cache   =   `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE ;

    assign axi_r_ready    =   ((arbitrate_state == `ysyx22040228_ARB_IREAD) && (axir_state == `ysyx22040228_AXIR_READ)) ?  `ysyx22040228_ABLE :
                              ((arbitrate_state == `ysyx22040228_ARB_DREAD) && (axir_state == `ysyx22040228_AXIR_READ)) ?  `ysyx22040228_ABLE :
                              ((arbitrate_state == `ysyx22040228_ARB_DREADU) && (axir_state == `ysyx22040228_AXIR_READ)) ? `ysyx22040228_ABLE :
                                                                                                                           `ysyx22040228_ENABLE ;

    assign axi_aw_valid   =   ((arbitrate_state == `ysyx22040228_ARB_DWRITE) && (axiw_state == `ysyx22040228_AXIW_ADDR)) ? `ysyx22040228_ABLE :
                              ((arbitrate_state == `ysyx22040228_ARB_DWRITEU) && (axiw_state == `ysyx22040228_AXIW_ADDR)) ? `ysyx22040228_ABLE :
                                                                                                                            `ysyx22040228_ENABLE ;
                              

    assign axi_aw_addr    =   ((arbitrate_state == `ysyx22040228_ARB_DWRITE) && ((axiw_state == `ysyx22040228_AXIW_ADDR) | (axiw_state == `ysyx22040228_AXIW_WRITE) | (axiw_state == `ysyx22040228_AXIW_RESP))) ?  d_cache_addr :
                              ((arbitrate_state == `ysyx22040228_ARB_DWRITEU) && ((axiw_state == `ysyx22040228_AXIW_ADDR) | (axiw_state == `ysyx22040228_AXIW_WRITE) | (axiw_state == `ysyx22040228_AXIW_RESP))) ?  uncache_addr :
                                                                                                                                                                                                                   64'h0 ;

    assign axi_aw_id      =   ((arbitrate_state == `ysyx22040228_ARB_DWRITE) && ((axiw_state == `ysyx22040228_AXIW_ADDR) | (axiw_state == `ysyx22040228_AXIW_WRITE))) ?  4'b0001  :
                              ((arbitrate_state == `ysyx22040228_ARB_DWRITEU) && ((axiw_state == `ysyx22040228_AXIW_ADDR) | (axiw_state == `ysyx22040228_AXIW_WRITE))) ?  4'b0010 :
                                                                                                                                                                         4'b0000  ;

    assign axi_aw_len     =   8'h0 ;

    assign axi_aw_size    =   ((arbitrate_state == `ysyx22040228_ARB_DWRITE) && ((axiw_state == `ysyx22040228_AXIW_ADDR) | (axiw_state == `ysyx22040228_AXIW_WRITE))) ?  `AXI_SIZE_BYTES_8  :
                              ((arbitrate_state == `ysyx22040228_ARB_DWRITEU) && ((axiw_state == `ysyx22040228_AXIW_ADDR) | (axiw_state == `ysyx22040228_AXIW_WRITE))) ?  uncache_size_data  :
                                                                                                                                                                         3'b000 ;

    assign axi_aw_burst   =   `AXI_BURST_TYPE_INCR ;

    assign axi_aw_cache   =   `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE ;

    assign axi_aw_port    =   `AXI_PROT_UNPRIVILEGED_ACCESS ;

    assign axi_aw_qos     =   4'h0 ;

    assign axi_w_valid    =   ((arbitrate_state == `ysyx22040228_ARB_DWRITE) && (axiw_state == `ysyx22040228_AXIW_WRITE)) ? `ysyx22040228_ABLE :
                              ((arbitrate_state == `ysyx22040228_ARB_DWRITEU) && (axiw_state == `ysyx22040228_AXIW_WRITE)) ? `ysyx22040228_ABLE :
                                                                                                                             `ysyx22040228_ENABLE ;

    assign axi_w_data     =   ((arbitrate_state == `ysyx22040228_ARB_DWRITE) && ((axiw_state == `ysyx22040228_AXIW_ADDR) | (axiw_state == `ysyx22040228_AXIW_WRITE) | (axiw_state == `ysyx22040228_AXIW_RESP))) ? d_cache_data : 
                              ((arbitrate_state == `ysyx22040228_ARB_DWRITEU) && ((axiw_state == `ysyx22040228_AXIW_ADDR) | (axiw_state == `ysyx22040228_AXIW_WRITE) | (axiw_state == `ysyx22040228_AXIW_RESP))) ? uncache_data :
                                                                                                                                                                         64'h0       ;  

    assign axi_w_strb     =   ((arbitrate_state == `ysyx22040228_ARB_DWRITE) && ((axiw_state == `ysyx22040228_AXIW_ADDR) | (axiw_state == `ysyx22040228_AXIW_WRITE) | (axiw_state == `ysyx22040228_AXIW_RESP))) ? 8'b11111111 : 
                              ((arbitrate_state == `ysyx22040228_ARB_DWRITEU) && ((axiw_state == `ysyx22040228_AXIW_ADDR) | (axiw_state == `ysyx22040228_AXIW_WRITE) | (axiw_state == `ysyx22040228_AXIW_RESP))) ? uncache_mask :
                                                                                                                                                                        8'b00000000 ;      

    assign axi_w_last     =   ((arbitrate_state == `ysyx22040228_ARB_DWRITE) && ((axiw_state == `ysyx22040228_AXIW_WRITE) | (axiw_state == `ysyx22040228_AXIW_RESP))) ? `ysyx22040228_ABLE :
                              ((arbitrate_state == `ysyx22040228_ARB_DWRITEU) && ((axiw_state == `ysyx22040228_AXIW_WRITE) | (axiw_state == `ysyx22040228_AXIW_RESP))) ? `ysyx22040228_ABLE :
                                                                                                                                                                         `ysyx22040228_ENABLE ;

    assign axi_b_ready    =   ((arbitrate_state == `ysyx22040228_ARB_DWRITE) && (axiw_state == `ysyx22040228_AXIW_RESP)) ? `ysyx22040228_ABLE :
                              ((arbitrate_state == `ysyx22040228_ARB_DWRITEU) && (axiw_state == `ysyx22040228_AXIW_RESP)) ? `ysyx22040228_ABLE :
                                                                                                                            `ysyx22040228_ENABLE ;


    assign success_dread        = ((arbitrate_state == `ysyx22040228_ARB_DREAD)   && (axi_r_id == 4'b0001) && (axi_r_last == `ysyx22040228_ABLE) && (axi_r_valid == `ysyx22040228_ABLE) && (axi_r_resp == 2'b00));
    assign success_dwrite       = ((arbitrate_state == `ysyx22040228_ARB_DWRITE)  && (axi_b_id == 4'b0001) && (axi_b_resp == 2'b00             ) && (axi_b_valid == `ysyx22040228_ABLE));
    assign success_iread        = ((arbitrate_state == `ysyx22040228_ARB_IREAD)   && (axi_r_id == 4'b0100) && (axi_r_last == `ysyx22040228_ABLE) && (axi_r_valid == `ysyx22040228_ABLE) && (axi_r_resp == 2'b00));
    assign success_uncahceread  = ((arbitrate_state == `ysyx22040228_ARB_DREADU)  && (axi_r_id != 4'b1111) && (axi_r_last == `ysyx22040228_ABLE) && (axi_r_valid == `ysyx22040228_ABLE) && (axi_r_resp == 2'b00));
    assign success_uncahcewrite = ((arbitrate_state == `ysyx22040228_ARB_DWRITEU) && (axi_b_id == 4'b0010) && (axi_b_resp == 2'b00             ) && (axi_b_valid == `ysyx22040228_ABLE));

    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
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
        else if(success_dread) begin
            sign_delay_dread   <= `ysyx22040228_ABLE;
            d_cache_data_o     <= axi_r_data        ;
            d_cache_valid_     <= `ysyx22040228_ABLE;
        end 
        else if(success_dwrite) begin
            sign_delay_dwrite  <= `ysyx22040228_ABLE;
            d_cache_valid_     <= `ysyx22040228_ABLE;
        end 
        else if(success_iread)begin
            sign_delay_iread   <= `ysyx22040228_ABLE;
            i_cache_data       <= axi_r_data        ;
            i_cache_valid_     <= `ysyx22040228_ABLE;
        end 
        else if(success_uncahceread) begin
            sign_delay_unread  <= `ysyx22040228_ABLE;           
            uncahce_data_o     <= axi_r_data        ;
            uncahce_valid_     <= `ysyx22040228_ABLE;

        end 
        else if(success_uncahcewrite) begin
            sign_delay_unwrite <= `ysyx22040228_ABLE;
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

    //assign axi_shankhand = (axi_w_ready & (write_uncahce_shankhand | write_dcache_shankhand)) | ((read_uncahce_shankhand | read_icache_shankhand | read_dcache_shankhand) & axi_ar_ready );

    // reg     aw_enable ;
    // reg     aw_enable_n ;
    // always @(posedge clk) begin
    //     if(rst == `ysyx22040228_RSTENA)
    //         aw_enable <= `ysyx22040228_ENABLE;
    //     else 
    //         aw_enable <= aw_enable_n ;
    // end
    // always @(*) begin
    //     if(rst == `ysyx22040228_RSTENA) 
    //         aw_enable_n = 1'b0 ;  
    //     else if(axi_aw_ready)
    //         aw_enable_n = 1'b1 ;
    //     else 
    //         aw_enable_n = 1'b0 ;
    // end

endmodule
