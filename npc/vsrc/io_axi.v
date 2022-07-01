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

module io_axi4 (
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
);
    
endmodule