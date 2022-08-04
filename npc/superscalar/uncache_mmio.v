`include "defines.v"
`include "defines_axi4.v"
`include "cache_defines.v"
/* verilator lint_off UNUSED */
`define AXI_SIZE_BYTES_1                                    3'b000
`define AXI_SIZE_BYTES_2                                    3'b001
`define AXI_SIZE_BYTES_4                                    3'b010
`define AXI_SIZE_BYTES_8                                    3'b011
`define AXI_SIZE_BYTES_16                                   3'b100
`define AXI_SIZE_BYTES_32                                   3'b101
`define AXI_SIZE_BYTES_64                                   3'b110
`define AXI_SIZE_BYTES_128                                  3'b111

`define ysyx22040228_UART_ST   64'h00000000a00003f8
`define ysyx22040228_UART_EN   64'h00000000a00003ff 

module uncache_mmio (
    //input     wire                                         clk              ,
    //input     wire                                         rst              ,
    output    wire          [2:0]                          mmio_sign        ,

    input     wire          [63:0]                         core_addr        ,
    input     wire          [63:0]                         core_data        ,
    input     wire          [7:0]                          core_mask        ,
    input     wire                                         fence_in         ,
    input     wire          [2:0]                          core_we_type     ,
    input     wire                                         core_we          ,
    input     wire          [2:0]                          core_re_type     ,
    input     wire                                         core_re          ,
    output    wire          [63:0]                         in_core_data     ,
    output    wire                                         in_core_finish   ,

    output    wire          [63:0]                         arb_addr         ,
    output    reg           [63:0]                         arb_data         ,
    output    wire          [7:0]                          arb_mask         ,
    output    wire                                         arb_we           ,
    output    wire                                         arb_re           ,
    output    wire          [2:0]                          arb_size_data    ,
    input     wire          [63:0]                         in_arb_data      ,
    input     wire                                         in_arb_finish    ,

    output    wire          [63:0]                         dcache_addr      ,
    output    wire          [63:0]                         dcache_data      ,
    output    wire          [7:0]                          dcache_mask      ,
    output    wire                                         dcache_fence     ,
    output    wire                                         dcache_we        ,
    output    wire                                         dcache_re        ,
    input     wire          [63:0]                         in_dcache_data   ,
    input     wire                                         in_dcache_finish 
);
    wire   start_sign;
    assign start_sign = (core_we | core_re );
    assign mmio_sign  = (start_sign &&((core_addr >= `ysyx22040228_UART_ST) && (core_addr <= `ysyx22040228_UART_EN))) ? 3'b001 :
                                                                                                                        3'b100 ;
    assign dcache_fence = fence_in;
    wire   uncache  ;
    assign uncache    = ((core_addr >= `ysyx22040228_UART_ST) && (core_addr <= `ysyx22040228_UART_EN)) ;


    assign dcache_addr = ~uncache ? core_addr : `ysyx22040228_ZEROWORD ;
    assign dcache_data = ~uncache ? core_data : `ysyx22040228_ZEROWORD ;
    assign dcache_mask = ~uncache ? core_mask : 8'b00000000            ;
    assign dcache_we   = ~uncache ? core_we   : `ysyx22040228_ENABLE   ;
    assign dcache_re   = ~uncache ? core_re   : `ysyx22040228_ENABLE   ;

    assign arb_addr    =  uncache ? core_addr : `ysyx22040228_ZEROWORD ;
    assign arb_data    =  uncache ? core_data : `ysyx22040228_ZEROWORD ;
    assign arb_mask    =  uncache ? core_mask : 8'b00000000            ;
    assign arb_we      =  uncache ? core_we   : `ysyx22040228_ENABLE   ;
    assign arb_re      =  uncache ? core_re   : `ysyx22040228_ENABLE   ;
    assign arb_size_data = `AXI_SIZE_BYTES_8  ;

    assign in_core_data  = uncache ? in_arb_data : in_dcache_data ;
    assign in_core_finish = uncache ? in_arb_finish : in_dcache_finish ;

endmodule

