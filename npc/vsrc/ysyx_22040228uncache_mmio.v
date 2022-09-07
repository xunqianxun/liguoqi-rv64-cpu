`include "ysyx_22040228defines.v"
`include "ysyx_22040228defines_axi4.v"
`include "ysyx_22040228cache_defines.v"
/* verilator lint_off LATCH */
`define AXI_SIZE_BYTES_1                                    3'b000
`define AXI_SIZE_BYTES_2                                    3'b001
`define AXI_SIZE_BYTES_4                                    3'b010
`define AXI_SIZE_BYTES_8                                    3'b011
`define AXI_SIZE_BYTES_16                                   3'b100
`define AXI_SIZE_BYTES_32                                   3'b101
`define AXI_SIZE_BYTES_64                                   3'b110
`define AXI_SIZE_BYTES_128                                  3'b111
module ysyx_22040228uncache_mmio (
    //input     wire                                         clk              ,
    //input     wire                                         rst              ,
    output    wire          [1:0]                          mmio_sign        ,

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
    assign mmio_sign  = (start_sign &&((core_addr >= `ysyx22040228_CLINT_START) && (core_addr <= `ysyx22040228_CLINT_END))) ? 2'b01 :
                                                                                                                              2'b10 ;
    assign dcache_fence = fence_in;
    wire   uncache  ;
    assign uncache    = ((core_addr >= `ysyx22040228_UART_START) && (core_addr <= `ysyx22040228_UART_END)) |
                        ((core_addr >= `ysyx22040228_SPICTRL_START) && (core_addr <= `ysyx22040228_SPICTRL_END)) |
                        ((core_addr >= `ysyx22040228_SPI_START) && (core_addr <= `ysyx22040228_SPI_END)) |
                        ((core_addr >= `ysyx22040228_CLINT_START) && (core_addr <= `ysyx22040228_CLINT_END)) |
                        ((core_addr >= `ysyx22040228_CHIPLINK_START) && (core_addr <= `ysyx22040228_CHIPLINK_END)) ;


    assign dcache_addr = ~uncache ? core_addr : `ysyx22040228_ZEROWORD ;
    assign dcache_data = ~uncache ? core_data : `ysyx22040228_ZEROWORD ;
    assign dcache_mask = ~uncache ? core_mask : 8'b00000000            ;
    assign dcache_we   = ~uncache ? core_we   : `ysyx22040228_ENABLE   ;
    assign dcache_re   = ~uncache ? core_re   : `ysyx22040228_ENABLE   ;

 
    wire [2:0]  byte_size ;
    assign      byte_size   = (core_we && (core_we_type == 3'b000)) || (core_re && (core_re_type == 3'b000)) ? `AXI_SIZE_BYTES_1 :
                              (core_we && (core_we_type == 3'b001)) || (core_re && (core_re_type == 3'b001)) ? `AXI_SIZE_BYTES_2 : 
                              (core_we && (core_we_type == 3'b010)) || (core_re && (core_re_type == 3'b010)) ? `AXI_SIZE_BYTES_4 :
                              (core_we && (core_we_type == 3'b100)) || (core_re && (core_re_type == 3'b100)) ? `AXI_SIZE_BYTES_8 :
                                                                                                               `AXI_SIZE_BYTES_1 ;
    wire [63:0] addr_outaxi ;
    assign      addr_outaxi = (core_we && (core_we_type == 3'b000)) || (core_re && (core_re_type == 3'b000)) ? core_addr                 :
                              (core_we && (core_we_type == 3'b001)) || (core_re && (core_re_type == 3'b001)) ? {core_addr[63:1], 1'b0}   : 
                              (core_we && (core_we_type == 3'b010)) || (core_re && (core_re_type == 3'b010)) ? {core_addr[63:2], 2'b00}  :
                              (core_we && (core_we_type == 3'b100)) || (core_re && (core_re_type == 3'b100)) ? {core_addr[63:3], 3'b000} :
                                                                                                               core_addr                 ;                                                                                                          

    reg   [63:0]    uncache_temp        ;
    reg             uncahche_read_finish;
    reg             uncache_out_ena  ;
    reg   [63:0]    uncahce_out_addr ;
    //reg   [2:0]     uncache_out_size ;

    always @(*) begin
        if((uncache && core_re) && (~in_arb_finish)) begin
            uncache_out_ena   = `ysyx22040228_ABLE ;
            uncahce_out_addr  =  addr_outaxi       ;
        end 
        else if((core_re) && (uncache) && (in_arb_finish)) begin
            uncache_out_ena   = `ysyx22040228_ENABLE  ;
            uncahce_out_addr  = `ysyx22040228_ZEROWORD;
            uncache_temp      = in_arb_data           ;
            uncahche_read_finish = `ysyx22040228_ABLE ;
        end  
        else begin
            uncache_out_ena  =  uncache_out_ena ;
            uncahce_out_addr = uncahce_out_addr ;
            uncache_temp = uncache_temp ;
            uncahche_read_finish = `ysyx22040228_ENABLE; 
        end
    end 

    // wire   [63:0]    uncache_temp        ;
    // wire             uncahche_read_finish;
    // wire             uncache_out_ena  ;
    // wire   [63:0]    uncahce_out_addr ;

    // assign uncache_out_ena  = ((uncache && core_re) && (~in_arb_finish)) ? `ysyx22040228_ABLE : `ysyx22040228_ENABLE ;
    // assign uncahce_out_addr = ((uncache && core_re) && (~in_arb_finish)) ? addr_outaxi : `ysyx22040228_ZEROWORD      ;
    // assign uncache_temp     = ((core_re) && (uncache) && (in_arb_finish)) ? in_arb_data : `ysyx22040228_ZEROWORD     ;
    // assign uncahche_read_finish = ((core_re) && (uncache) && (in_arb_finish)) ? `ysyx22040228_ABLE : `ysyx22040228_ENABLE ;

    reg              uncache_out_ena1 ;
    reg   [63:0]     uncache_out_addr1 ;
    reg              uncahche_write_finish;
    always @(*) begin
        if((uncache && core_we) && (~in_arb_finish)) begin
            uncache_out_ena1   = `ysyx22040228_ABLE ;
            uncache_out_addr1  =  addr_outaxi       ;
            arb_data           =  core_data         ;
        end 
        else if((uncache) && (in_arb_finish) && (core_we)) begin
            uncache_out_ena1   = `ysyx22040228_ENABLE   ;
            uncache_out_addr1  = `ysyx22040228_ZEROWORD ;
            uncahche_write_finish = `ysyx22040228_ABLE  ;
            arb_data           = `ysyx22040228_ZEROWORD ;
        end 
        else begin
            uncahche_write_finish = `ysyx22040228_ENABLE;
        end
    end

    // wire              uncache_out_ena1 ;
    // wire   [63:0]     uncache_out_addr1 ;
    // wire              uncahche_write_finish;
    // assign uncache_out_ena1 = ((uncache && core_we) && (~in_arb_finish)) ? `ysyx22040228_ABLE : `ysyx22040228_ENABLE ;
    // assign uncache_out_addr1 = ((uncache && core_we) && (~in_arb_finish)) ? addr_outaxi : `ysyx22040228_ZEROWORD ;
    // assign arb_data = ((uncache && core_we) && (~in_arb_finish)) ? core_data : `ysyx22040228_ZEROWORD ;
    // assign uncahche_write_finish = ((uncache) && (in_arb_finish) && (core_we)) ? `ysyx22040228_ABLE : `ysyx22040228_ENABLE ;


    assign  in_core_data    = uncache ? uncache_temp  : in_dcache_data   ;
    
    assign  in_core_finish  = (uncache && core_re) ? uncahche_read_finish :
                              (uncache && core_we) ? uncahche_write_finish:
                                                         in_dcache_finish ; 
    assign  arb_addr =  (uncache && core_re) ? uncahce_out_addr :
                        (uncache && core_we) ? uncache_out_addr1:
                                          `ysyx22040228_ZEROWORD; 
    assign  arb_mask = uncache ? core_mask : 8'b00000000           ;
    assign  arb_we   = uncache ? uncache_out_ena1   : `ysyx22040228_ENABLE  ;
    assign  arb_re   = uncache ? uncache_out_ena    : `ysyx22040228_ENABLE  ;

    assign arb_size_data = (uncache && core_re) ? byte_size        :
                           (uncache && core_we) ? byte_size        :
                                                  3'b000           ; 

endmodule
