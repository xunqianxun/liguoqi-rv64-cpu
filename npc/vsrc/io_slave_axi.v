`include "./vsrc/defines_axi4.v"
`include "./vsrc/defines.v"

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

module io_slave_axi (
    input    wire                                      clk               ,
    input    wire                                      rst               ,

    input    wire     [`ysyx22040228_ID_BUS   ]        ioe_axi_aw_id     , 
    input    wire     [`ysyx22040228_ADDR_BUS ]        ioe_axi_aw_addr   ,
    input    wire     [`ysyx22040228_LEN_BUS  ]        ioe_axi_aw_len    ,
    input    wire     [`ysyx22040228_SIZE_BUS ]        ioe_axi_aw_size   ,
    input    wire     [`ysyx22040228_BURST_BUS]        ioe_axi_aw_burst  ,
    input    wire     [`ysyx22040228_CACHE_BUS]        ioe_axi_aw_cache  ,
    inout    wire     [`ysyx22040228_PROT_BUS ]        ioe_axi_aw_prot   ,
    inout    wire     [`ysyx22040228_QOS_BUS  ]        ioe_axi_aw_qos    ,
    input    wire                                      ioe_axi_aw_valid  ,
    output   wire                                      ioe_axi_aw_ready  , 

    //write data channel
    input    wire     [`ysyx22040228_DATA_BUS ]        ioe_axi_w_data    ,
    input    wire     [`ysyx22040228_STRB_BUS ]        ioe_axi_w_strb    ,
    input    wire                                      ioe_axi_w_last    ,
    input    wire                                      ioe_axi_w_valid   ,
    output   wire                                      ioe_axi_w_ready   ,

    //write response channel
    output   wire     [`ysyx22040228_ID_BUS   ]        ioe_axi_b_id      ,
    output   wire     [`ysyx22040228_RESP_BUS ]        ioe_axi_b_resp    ,
    output   wire                                      ioe_axi_b_valid   ,
    input    wire                                      ioe_axi_b_ready   ,

    //read address channel
    input    wire     [`ysyx22040228_ID_BUS   ]        ioe_axi_ar_id     ,
    input    wire     [`ysyx22040228_ADDR_BUS ]        ioe_axi_ar_addr   ,
    input    wire     [`ysyx22040228_LEN_BUS  ]        ioe_axi_ar_len    ,
    input    wire     [`ysyx22040228_SIZE_BUS ]        ioe_axi_ar_size   ,
    input    wire     [`ysyx22040228_BURST_BUS]        ioe_axi_ar_burst  ,
    input    wire     [`ysyx22040228_CACHE_BUS]        ioe_axi_ar_cache  ,
    input    wire     [`ysyx22040228_PROT_BUS ]        ioe_axi_ar_prot   ,
    input    wire     [`ysyx22040228_QOS_BUS  ]        ioe_axi_ar_qos    ,
    input    wire                                      ioe_axi_ar_valid  ,
    output   wire                                      ioe_axi_ar_ready  ,

    //read data channel
    output   wire     [`ysyx22040228_ID_BUS   ]        ioe_axi_r_id      ,
    output   wire     [`ysyx22040228_DATA_BUS ]        ioe_axi_r_data    ,
    output   wire     [`ysyx22040228_RESP_BUS ]        ioe_axi_r_resp    ,
    output   wire                                      ioe_axi_r_last    ,
    output   wire                                      ioe_axi_r_valid   ,
    input    wire                                      ioe_axi_r_ready   ,

    output   wire     [63:0]                           out_slave_addr    ,

    output   wire     [63:0]                           out_serial_data   ,
    output   wire                                      out_serial_write  ,
    input    wire     [63:0]                           in_rtc_data       ,
    output   wire                                      out_rtc_read      ,

);

    `define ysyx22040228_S_IDLE  2'b00 
    `define ysyx22040228_S_INFO  2'b01
    `define ysyx22040228_S_RESP  2'b10

    `define ysyx22040228_S_ADDR  2'b01
    `define ysyx22040228_S_DATA  2'b10

    wire  aw_shankhand = ioe_axi_aw_valid && ioe_axi_aw_ready;
    wire  w_shankhand  = ioe_axi_w_valid  && ioe_axi_w_ready ;
    wire  b_shankhand  = ioe_axi_b_valid  && ioe_axi_b_ready ;

    reg  [1:0]  s_write_state     ;
    reg  [1:0]  s_write_state_nxt ;
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA)
            s_write_state <= `ysyx22040228_S_IDLE ;
        else 
            s_write_state <= s_write_state_nxt    ;
    end 

    always @(*) begin
        case (s_write_state)
            `ysyx22040228_S_IDLE : begin
                if(aw_shankhand && w_shankhand) 
                    s_write_state_nxt = `ysyx22040228_S_RESP ;
                else if(ioe_axi_aw_valid | ioe_axi_w_valid) 
                    s_write_state_nxt = `ysyx22040228_S_INFO ;
                else 
                    s_write_state_nxt = `ysyx22040228_S_IDLE ;
            end 
            `ysyx22040228_S_INFO : begin
                if(aw_shankhand && w_shankhand)
                    s_write_state_nxt = `ysyx22040228_S_RESP ;
                else 
                    s_write_state_nxt = `ysyx22040228_S_INFO ;
            end 
            `ysyx22040228_S_RESP : begin
                if(b_shankhand)
                    s_write_state_nxt = `ysyx22040228_S_IDLE ;
                else 
                    s_write_state_nxt = `ysyx22040228_S_RESP ;
            end 
            default: s_write_state_nxt = `ysyx22040228_S_IDLE;
        endcase
    end

    assign ioe_axi_aw_ready = (ioe_axi_aw_valid && ioe_axi_w_valid && (ioe_axi_aw_len == 8'b0) && (ioe_axi_aw_size == 3'b011) && (ioe_axi_aw_burst == 2'b01) && (ioe_axi_aw_cache == 4'b0010) && (ioe_axi_aw_prot == 3'b000) && ioe_axi_aw_qos == 4'h0);
    assign ioe_axi_w_ready  = ioe_axi_aw_valid && ioe_axi_w_valid  && (ioe_axi_w_last) ;

    assign ioe_axi_b_id     = ioe_axi_aw_id;
    assign ioe_axi_b_resp   = 2'b00  ;
    assign ioe_axi_b_valid  = (s_write_state == `ysyx22040228_S_RESP) ? `ysyx22040228_ABLE : `ysyx22040228_ENABLE ;

    assign out_serial_write  = (s_write_state == `ysyx22040228_S_RESP) ? `ysyx22040228_ABLE : `ysyx22040228_ENABLE ;
    assign out_slave_addr  = (s_write_state == `ysyx22040228_S_RESP) ? write_addr_reg     : `ysyx22040228_ZEROWORD;
    assign out_serial_data = (s_write_state == `ysyx22040228_S_RESP) ? write_data_reg     : `ysyx22040228_ZEROWORD;

    wire   ar_shankhand   = ioe_axi_ar_ready && ioe_axi_ar_valid && (ioe_axi_ar_len == 8'd0) && (ioe_axi_ar_size == 3'b011) && (ioe_axi_ar_burst == 2'b01) ;
    wire   r_shankhand    = ioe_axi_r_ready && ioe_axi_r_valid ;
    reg  [1:0] s_read_state     ;
    reg  [1:0] s_read_state_nxt ;
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA)
            s_read_state  <= `ysyx22040228_S_IDLE ;
        else 
            s_read_state  <= s_read_state_nxt     ;
    end

    always @(*) begin
        case (s_read_state)
            `ysyx22040228_S_IDLE : begin
                if(ar_shankhand)
                    s_read_state_nxt = `ysyx22040228_S_DATA ;
                else if(ioe_axi_ar_valid)
                    s_read_state_nxt = `ysyx22040228_S_ADDR ;
                else
                    s_read_state_nxt = `ysyx22040228_S_IDLE ;
            end 
            `ysyx22040228_S_ADDR : begin
                if(ar_shankhand)
                    s_read_state_nxt = `ysyx22040228_S_DATA ;
                else 
                    s_read_state_nxt = `ysyx22040228_S_ADDR ;
            end        
            `ysyx22040228_S_DATA : begin
                if(r_shankhand)
                    s_read_state_nxt = `ysyx22040228_S_IDLE ;
                else 
                    s_read_state_nxt = `ysyx22040228_S_DATA ; 
            end 
            default: s_read_state_nxt = `ysyx22040228_S_IDLE;
        endcase
    end
    reg  [63:0]  write_data_reg;
    reg  [63:0]  write_addr_reg;
    reg  [3:0]   r_s_axi_ar_id ;
    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA)begin
            write_data_reg  <= `ysyx22040228_ZEROWORD;
            write_addr_reg  <= `ysyx22040228_ZEROWORD;
            r_s_axi_ar_id   <= 4'b0000               ;
        end
        else begin
            write_data_reg  <= ioe_axi_w_data ;
            write_addr_reg  <= ioe_axi_aw_addr;
            r_s_axi_ar_id   <= ioe_axi_ar_id  ;
        end 
    end

    assign ioe_axi_ar_ready = ((s_read_state == `ysyx22040228_S_IDLE) || (s_read_state == `ysyx22040228_S_ADDR)) ;
    assign ioe_axi_r_valid  = (s_read_state == `ysyx22040228_S_DATA) ;
    assign ioe_axi_r_id     = (s_read_state == `ysyx22040228_S_DATA) ? r_s_axi_ar_id : 4'b0 ;
    assign ioe_axi_r_resp   = 2'b00 ;
    assign ioe_axi_r_last   = (s_read_state == `ysyx22040228_S_DATA) ? `ysyx22040228_ABLE : `ysyx22040228_ENABLE; 
    assign ioe_axi_r_data   = (s_read_state == `ysyx22040228_S_DATA) ? in_rtc_data : `ysyx22040228_ZEROWORD;

    assign out_rtc_read   = (ar_shankhand) ? `ysyx22040228_ABLE : `ysyx22040228_ENABLE;
    assign out_slave_addr = (ar_shankhand) ? ioe_axi_ar_addr : `ysyx22040228_ZEROWORD   ;

endmodule