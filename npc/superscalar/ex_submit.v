`include "defines.v"
module ex_submit (
    input        wire                                               clk           , 
    input        wire                                               rst           ,
     
    input        wire        [`ysyx22040228_PCBUS]                  socreboard_pc ,

    input        wire        [`ysyx22040228_REGBUS]                 ao_data_in    ,
    input        wire        [`ysyx22040228_REGADDRBUS]             ao_addr_in    ,
    input        wire        [`ysyx22040228_PCBUS]                  ao_pc_in      ,
    input        wire                                               ao_ena_in     ,

    input        wire        [`ysyx22040228_REGBUS]                 at_data_in    ,
    input        wire        [`ysyx22040228_REGADDRBUS]             at_addr_in    ,
    input        wire        [`ysyx22040228_PCBUS]                  at_pc_in      ,
    input        wire                                               at_ena_in     ,

    input        wire        [`ysyx22040228_REGBUS]                 mm_data_in    ,
    input        wire        [`ysyx22040228_REGADDRBUS]             mm_addr_in    ,
    input        wire        [`ysyx22040228_PCBUS]                  mm_pc_in      ,
    input        wire                                               mm_ena_in     ,

    output       reg         [`ysyx22040228_REGBUS]                 ao_data_out   ,
    output       reg         [`ysyx22040228_REGADDRBUS]             ao_addr_out   ,
    output       reg                                                ao_ena_out    ,

    output       reg         [`ysyx22040228_REGBUS]                 at_data_out   ,
    output       reg         [`ysyx22040228_REGADDRBUS]             at_addr_out   ,
    output       reg                                                at_ena_out    ,

    output       reg         [`ysyx22040228_REGBUS]                 mm_data_out   ,
    output       reg         [`ysyx22040228_REGADDRBUS]             mm_addr_out   ,
    output       reg                                                mm_ena_out    
);

import "DPI-C" function void difftest_dut_pc(input longint pc_data, input longint exit_code, input bit endyn, input bit exe);
import "DPI-C" function void difftest_dut_thepc(input longint thepc_data);

always @(*) begin
    difftest_dut_thepc(`ysyx22040228_ZEROWORD);
end

always@(*)begin
difftest_dut_pc(`ysyx22040228_ZEROWORD, `ysyx22040228_ZEROWORD, 1'b0, 1'b0);    
end 

    wire  [2:0]  gating    ;
    assign       gating[0] = (socreboard_pc < ao_pc_in) ? 1'b0 : 1'b1 ;
    assign       gating[1] = (socreboard_pc < at_pc_in) ? 1'b0 : 1'b1 ;
    assign       gating[2] = (socreboard_pc < mm_pc_in) ? 1'b0 : 1'b1 ;    

    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            ao_data_out <= `ysyx22040228_ZEROWORD ;
            ao_addr_out <= 5'b00000               ;
            ao_ena_out  <= 1'b0                   ;
            at_data_out <= `ysyx22040228_ZEROWORD ;
            at_addr_out <= 5'b00000               ;
            at_ena_out  <= 1'b0                   ;
            mm_data_out <= `ysyx22040228_ZEROWORD ;
            mm_addr_out <= 5'b00000               ;
            mm_ena_out  <= 1'b0                   ;
        end    
        else begin
            ao_data_out <= ({64{gating[0]}} & ao_data_in);
            ao_addr_out <= ({5{gating[0]}} & ao_addr_in) ;
            ao_ena_out  <= gating[0] & ao_ena_in         ;
            at_data_out <= ({64{gating[1]}} & at_data_in);
            at_addr_out <= ({5{gating[1]}} & at_addr_in) ;
            at_ena_out  <= gating[1] & at_ena_in         ;
            mm_data_out <= ({64{gating[2]}} & mm_data_in);
            mm_addr_out <= ({5{gating[2]}} & mm_addr_in) ;
            mm_ena_out  <= gating[2] & mm_ena_in         ;
        end 
    end
    
endmodule

