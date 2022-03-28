/************************************************************
Author:LiGuoqi
Name:regfile.v
Function:32 general purpose registers
************************************************************/
`include "./vsrc/defines.v"
module regfile (
	input                   wire                                     clk            ,
	input                   wire                                     rst            ,

	input                   wire     [`ysyx22040228_REGADDRBUS]      waddr          ,
	input                   wire     [`ysyx22040228_REGBUS]          wdata          ,
	input                   wire                                     we             ,

	input                   wire     [`ysyx22040228_REGADDRBUS]      raddr1         ,
	output                  wire     [`ysyx22040228_REGBUS]          rdata1         ,
	input                   wire                                     re1            ,

	input                   wire     [`ysyx22040228_REGADDRBUS]      raddr2         ,
	output                  wire     [`ysyx22040228_REGBUS]          rdata2         ,
	input                   wire                                     re2            ,     

	input                   wire                                     x1_read_ena    ,
	output                  wire     [`ysyx22040228_REGBUS]          x1_data        //,

//	output                  wire     [ 7:0]                         trap_code      ,

//	output                  wire     [`ysyx22040228_REGBUS]         reg_a0                   
);
	
reg [`ysyx22040228_REGBUS] regs [0:31] ;

integer i ;

always @(posedge clk) begin
	if(rst == `ysyx22040228_RSTENA) begin
		for(i = 0;i<32;i=i+1) begin
			regs[i] <= `ysyx22040228_ZEROWORD ;
		end
	end
	else begin
		if(we == `ysyx22040228_WENABLE && waddr != 5'd0) begin
			regs[waddr] <= wdata ;
		end
	end
end

assign rdata1 = ((rst == `ysyx22040228_RSTENA) && (re1 == `ysyx22040228_RENABLE)) ? (((waddr == raddr1) && (we == `ysyx22040228_WENABLE) ? wdata : regs[raddr1])) : `ysyx22040228_ZEROWORD ;
assign rdata2 = ((rst == `ysyx22040228_RSTENA) && (re2 == `ysyx22040228_RENABLE)) ? (((waddr == raddr2) && (we == `ysyx22040228_WENABLE) ? wdata : regs[raddr2])) : `ysyx22040228_ZEROWORD ;

assign x1_data  = ((rst == `ysyx22040228_RSTENA) && (x1_read_ena == `ysyx22040228_RENABLE)) ? (((waddr == 5'b00001) && (we == `ysyx22040228_WENABLE) ? wdata : regs[raddr1])) : `ysyx22040228_ZEROWORD ;

endmodule//regfile

