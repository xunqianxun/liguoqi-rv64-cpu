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
                        ((core_addr >= `ysyx22040228_CLINT_START) && (core_addr <= `ysyx22040228_CLINT_END)) ;
                        //((core_addr >= `ysyx22040228_CHIPLINK_START) && (core_addr <= `ysyx22040228_CHIPLINK_END)) ;


    assign dcache_addr = ~uncache ? core_addr : `ysyx22040228_ZEROWORD ;
    assign dcache_data = ~uncache ? core_data : `ysyx22040228_ZEROWORD ;
    assign dcache_mask = ~uncache ? core_mask : 8'b00000000            ;
    assign dcache_we   = ~uncache ? core_we   : `ysyx22040228_ENABLE   ;
    assign dcache_re   = ~uncache ? core_re   : `ysyx22040228_ENABLE   ;

 

    //---------------------------uncache_set----------------------------//

    reg   [1:0]     out_counter ;
    reg   [63:0]    uncache_temp ;
    reg             uncahche_read_finish;

    reg             uncahce_out_ena  ;
    reg             uncahce_out_addr ;
    always @(*) begin
        if((uncache && core_re) && (~in_arb_finish)) begin
            uncahce_out_ena = `ysyx22040228_ABLE    ;
            uncahce_out_addr = {core_addr[63:3], 1'b1, 2'b0};
            out_counter  = 2'b01                 ;
        end 
        else if((uncache) && (in_arb_finish) && (out_counter  == 2'b01)) begin
            uncahce_out_ena = `ysyx22040228_ABLE    ;
            uncahce_out_addr = {core_addr[63:3], 1'b0, 2'b0};
            out_counter  = 2'b11                 ;
            uncache_temp      = {in_arb_data[31:0], 32'h0};
        end 
        else if((uncache) && (in_arb_finish) && (out_counter  == 2'b11)) begin
            uncahce_out_ena  = `ysyx22040228_ENABLE;
            out_counter      = 2'b00               ;
            uncache_temp      = {uncache_temp[63:32], in_arb_data[31:0]};
            uncahche_read_finish = `ysyx22040228_ABLE;

        end 
        else begin
            uncahche_read_finish = `ysyx22040228_ENABLE; 
        end
    end 

    reg              uncache_out_ena1 ;
    reg   [63:0]     uncache_out_addr1 ;
    reg   [1:0]      out_counter1     ;
    reg              uncahche_write_finish;
    always @(*) begin
        if((uncache && core_we) && (~in_arb_finish)) begin
            uncache_out_ena1 = `ysyx22040228_ABLE    ;
            out_counter1      = 2'b01    ;
            if(out_counter1 <= 2'b01) begin
                arb_data      = {32'h0, core_data[63:32]} ;
                uncache_out_addr1 = {core_addr[63:3], 1'b1, 2'b0};
            end 
            else begin
                arb_data      = {32'h0, core_data[31:0]} ;
                uncache_out_addr1 = {core_addr[63:3], 1'b0, 2'b0};
            end 
        end 
        else if((uncache) && (in_arb_finish) && (out_counter  == 2'b01)) begin
            uncache_out_ena1 = `ysyx22040228_ABLE    ;
            out_counter1       = 2'b11                 ;
        end 
        else if((uncache) && (in_arb_finish) && (out_counter  == 2'b11)) begin
            uncache_out_ena1 = `ysyx22040228_ENABLE;
            out_counter      = 2'b00               ;
            uncahche_write_finish = `ysyx22040228_ABLE;

        end 
        else begin
            uncahche_write_finish = `ysyx22040228_ENABLE;
        end
    end                                                                                                           

    assign  arb_addr =  (uncache && core_re) ? uncahce_out_addr :
                        (uncache && core_we) ? uncache_out_addr1:
                                          `ysyx22040228_ZEROWORD; 
    assign  arb_mask = uncache ? core_mask : 8'b00000000           ;
    assign  arb_we   = uncache ? uncache_out_ena1   : `ysyx22040228_ENABLE  ;
    assign  arb_re   = uncache ? uncache_out_ena    : `ysyx22040228_ENABLE  ;

    assign  in_core_data    = uncache ? uncache_temp  : in_dcache_data   ;
    
    assign  in_core_finish  = (uncache && core_re) ? uncahche_read_finish :
                              (uncache && core_we) ? uncahche_write_finish:
                                                         in_dcache_finish ;    

endmodule

