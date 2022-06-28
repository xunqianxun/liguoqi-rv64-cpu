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

`include "./vsrc/defines.v"
`include "./vsrc/defines_axi4.v"
module arbitrate (
    //-----------------------------system----------------------------------------//
    input       wire                                         clk                  ,
    input       wire                                         rst                  ,
    //-----------------------------d_cache---------------------------------------//
    input       wire       [63:0]                            d_cache_addr         ,
    input       wire       [63:0]                            d_cache_data         ,
    input       wire                                         d_cache_read_ena     ,
    input       wire                                         d_cache_write_ena    ,
    input       wire       [7:0 ]                            d_cache_mask         ,
    output      wire       [63:0]                            d_cache_data_o       ,
    output      wire                                         d_cache_ok           ,
    //----------------------------i_cache----------------------------------------//
    input       wire       [63:0]                            i_cache_addr         ,
    input       wire                                         i_cache_ena          ,
    output      wire       [63:0]                            i_cache_data_o       ,
    output      wire                                         i_cache_ok           ,
    //---------------------------axi sign----------------------------------------//

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
    input       wire                                         aix_r_valid          ,
    output      wire                                         axi_r_ready           
);

    
    //-----------------------------write about sign-------------------------------//
    //-------------------------wirte channel sign make----------------------------// 
    wire  aw_shankhand = axi_aw_valid && axi_aw_ready;
    wire  w_shankhand  = axi_w_valid  && axi_w_ready ;
    wire  b_shankhand  = axi_b_valid  && axi_b_ready && (axi_b_id == 4'b0000);
    wire  b_success    = b_shankhand  && (axi_b_resp == 2'b00)               ;

    `define ysyx22040228_ABE_IDLE 2'b00  
    `define ysyx22040228_ABE_INFO 2'b01
    `define ysyx22040228_ABE_RESP 2'b11

    reg [1:0] transfor_state    ;
    reg [1:0] transfor_state_nex;
    always @(*) begin
        if(rst == `ysyx22040228_RSTENA) 
            transfor_state = `ysyx22040228_ABE_IDLE;
        case (transfor_state)
           `ysyx22040228_ABE_IDLE : begin
               if(aw_shankhand && w_shankhand)
                    transfor_state_nex = `ysyx22040228_ABE_RESP    ;
               else if(axi_aw_valid | axi_w_valid)
                    transfor_state_nex = `ysyx22040228_ABE_INFO    ;
               else 
                    transfor_state_nex = `ysyx22040228_ABE_IDLE    ;
           end 
           `ysyx22040228_ABE_INFO : begin
               if(aw_shankhand && w_shankhand)
                    transfor_state_nex = `ysyx22040228_ABE_RESP    ;
               else 
                    transfor_state_nex = `ysyx22040228_ABE_INFO    ;
           end
           `ysyx22040228_ABE_RESP : begin
               if(b_shankhand)
                    transfor_state_nex = `ysyx22040228_ABE_IDLE    ;
               else 
                    transfor_state_nex = `ysyx22040228_ABE_RESP    ;
           end 
            default: ;
        endcase
    end
    assign transfor_state = transfor_state_nex ;

    //------------------------------output sign make------------------------------//
    assign axi_aw_id     =  4'b0000                      ;
    assign axi_aw_len    =  7'd0                         ;
    assign axi_aw_size   =  `AXI_SIZE_BYTES_8            ; 
    assign axi_aw_burst  =  `AXI_BURST_TYPE_INCR         ; //all use INCR type
    assign axi_aw_cache  =  `AXI_AWCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE;
    assign axi_aw_port   =  `AXI_PROT_UNPRIVILEGED_ACCESS;
    assign axi_aw_qos    =  4'h0                         ;
    assign axi_aw_valid  =  (d_cache_write_ena && (transfor_state == `ysyx22040228_ABE_IDLE)) ? `ysyx22040228_ABLE : `ysyx22040228_ENABLE ;
    assign axi_aw_addr   =  (aw_shankhand && w_shankhand) ? axi_aw_addr  : `ysyx22040228_ZEROWORD;

    assign axi_w_data    =  (aw_shankhand && w_shankhand) ? d_cache_data : `ysyx22040228_ZEROWORD;
    assign axi_w_strb    =  (aw_shankhand && w_shankhand) ? d_cache_mask : `ysyx22040228_ZEROWORD;             
    assign axi_w_last    =  1'b1                         ;
    assign axi_w_valid   =  (d_cache_write_ena && (transfor_state == `ysyx22040228_ABE_IDLE)) ? `ysyx22040228_ABLE : `ysyx22040228_ENABLE ;
    assign axi_b_ready   =  (transfor_state == ``ysyx22040228_ABE_RESP) ? `ysyx22040228_ABLE : `ysyx22040228_ENABLE                       ;
   // wire   write_to_mem  ;
   // assign write_to_mem  =  (axi_b_id == 4'b0000) && (axi_b_resp == 2'b00) ? `ysyx22040228_ABLE : `ysyx22040228_ENABLE                    ;
    assign d_cache_ok    =  (b_success) ? `ysyx22040228_ABLE : `ysyx22040228_ENABLE                                                       ;
    //-------------------------wirte channel sign make----------------------------// 
    wire ar_shankhand ;
    wire r_shankhand  ;
    assign ar_shankhand = axi_ar_valid && axi_ar_ready ;
    assign r_shankhand  = axi_r_valid  && axi_ar_ready ; 
    reg [1:0] cache_state     ;
    reg [1:0] cache_state_nxt ;

    `define ysyx22040228_READ_IDLE      2'b00 
    //`define ysyx22040228_READ_CHECK     4'b0010
    `define ysyx22040228_READ_TRAF      2'b01
    `define ysyx22040228_READ_WRBC      2'b10
    always @(*) begin
        if(rst == `ysyx22040228_ENABLE) 
            cache_state = `ysyx22040228_READ_IDLE;
        else begin
            case (cache_state)
               `ysyx22040228_READ_IDLE   : begin
                    if(ar_shankhand) 
                        cache_state_nxt = `ysyx22040228_READ_TRAF  ;
                    cache_state_nxt = `ysyx22040228_READ_IDLE      ;
               end
                `ysyx22040228_READ_TRAF  : begin
                    if(r_shankhand)
                        cache_state_nxt = `ysyx22040228_READ_WRBC  ;
                    cache_state_nxt = `ysyx22040228_READ_TRAF      ;
                end 
                `ysyx22040228_READ_WRBC  : begin
                    if(axi_r_last)
                        cache_state_nxt = `ysyx22040228_READ_IDLE  ;
                    cache_state_nxt = `ysyx22040228_READ_WRBC      ;
                end 
                default: 
            endcase
        end 
    end
    assign cache_state = cache_state_nxt ;

    assign axi_ar_id    = i_cache_ena ? 4'b0001 : (d_cache_read_ena ? 4'b0010 : 4'b0000)                              ;
    assign axi_ar_addr  = i_cache_ena ? d_cache_addr : (d_cache_read_ena ? i_cache_addr : `ysyx22040228_ZEROWORD)     ;
    assign axi_ar_len   = 7'd0                ;
    assign axi_ar_size  = i_cache_ena ? `AXI_SIZE_BYTES_4 : (d_cache_read_ena ? `AXI_SIZE_BYTES_8 : `AXI_SIZE_BYTES_8);
    assign axi_aw_burst = `AXI_BURST_TYPE_INCR;
    assign axi_aw_cache = `AXI_AWCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE;
    assign axi_aw_port  = `AXI_PROT_UNPRIVILEGED_ACCESS                   ;
    assign axi_aw_qos   =  4'h0               ;
    assign axi_aw_valid = (cache_state == `ysyx22040228_READ_IDLE) && (d_cache_read_ena || i_cache_ena) ? `ysyx22040228_ABLE : `ysyx22040228_ENABLE         ;
    
    assign axi_r_ready  = (cache_state == `ysyx22040228_READ_TRAF) ? `ysyx22040228_ABLE : `ysyx22040228_ENABLE ;
    assign i_cache_ok   = ((axi_r_id == 4'b0001) && (axi_r_last == `ysyx22040228_ABLE) && (axi_r_resp == 2'b00)) ? `ysyx22040228_ABLE : `ysyx22040228_ENABLE;
    assign i_cache_data_o = (i_cache_ok) ? axi_r_data : `ysyx22040228_ZEROWORD;
    assign d_cache_ok   = ((axi_r_id == 4'b0010) && (axi_r_last == `ysyx22040228_ABLE) && (axi_r_resp == 2'b00)) ? `ysyx22040228_ABLE : `ysyx22040228_ENABLE;
    assign d_cache_data_o = (d_cache_ok) ? axi_r_data : `ysyx22040228_ZEROWORD;


endmodule

