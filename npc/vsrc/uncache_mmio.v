`include "defines.v"
`include "defines_axi4.v"
`include "cache_defines.v"

module uncache_mmio (
    output    wire          [2:0]                          mmio_sign        ,

    input     wire          [63:0]                         core_addr        ,
    input     wire          [63:0]                         core_data        ,
    input     wire          [7:0]                          core_mask        ,
    input     wire                                         fence_in         ,
    input     wire                                         core_we          ,
    input     wire                                         core_re          ,
    output    wire          [63:0]                         in_core_data     ,
    output    wire                                         in_core_finish   ,

    output    wire          [63:0]                         arb_addr         ,
    output    wire          [63:0]                         arb_data         ,
    output    wire          [7:0]                          arb_mask         ,
    output    wire                                         arb_we           ,
    output    wire                                         arb_re           ,
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
    assign mmio_sign  = (start_sign &&((core_addr >= `ysyx22040228_CLINT_START) && (core_addr <= `ysyx22040228_CLINT_END))) ? 3'b010 :
                                                                                                                              3'b100 ;
    assign dcache_fence = fence_in;
    wire   uncache  ;
    assign uncache    = ((core_addr >= `ysyx22040228_UART_START) && (core_addr <= `ysyx22040228_UART_END)) |
                        ((core_addr >= `ysyx22040228_SPICTRL_START) && (core_addr <= `ysyx22040228_SPICTRL_END)) |
                        ((core_addr >= `ysyx22040228_SPI_START) && (core_addr <= `ysyx22040228_SPI_END)) |
                        //((core_addr >= `ysyx22040228_CHIPLINK_START) && (core_addr <= `ysyx22040228_CHIPLINK_END)) ;
    assign  arb_addr = uncache ? core_addr : `ysyx22040228_ZEROWORD; 
    assign  arb_data = uncache ? core_data : `ysyx22040228_ZEROWORD;  
    assign  arb_mask = uncache ? core_mask : 8'b00000000           ;
    assign  arb_we   = uncache ? core_we   : `ysyx22040228_ENABLE  ;
    assign  arb_re   = uncache ? core_re   : `ysyx22040228_ENABLE  ;


    // wire   [63:0]  aw_mask ;
    // assign aw_mask = {{8{core_mask[7]}}, {8{core_mask[6]}}, {8{core_mask[5]}}, {8{core_mask[4]}},
    //                   {8{core_mask[3]}}, {8{core_mask[2]}}, {8{core_mask[1]}}, {8{core_mask[0]}}};

    assign dcache_addr = ~uncache ? core_addr : `ysyx22040228_ZEROWORD ;
    assign dcache_data = ~uncache ? core_data : `ysyx22040228_ZEROWORD ;
    assign dcache_mask = ~uncache ? core_mask : 8'b00000000            ;
    assign dcache_we   = ~uncache ? core_we   : `ysyx22040228_ENABLE   ;
    assign dcache_re   = ~uncache ? core_re   : `ysyx22040228_ENABLE   ;

    assign  in_core_data    = uncache ? in_arb_data   : in_dcache_data   ;
    assign  in_core_finish  = uncache ? in_arb_finish : in_dcache_finish ;                                                                                                                  

endmodule

