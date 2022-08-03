/************************************************************
Author:LiGuoqi
Name:regfile.v
Function:32 general purpose registers
************************************************************/
`include "defines.v"
module regsfile (
	input                   wire                                     clk            ,
	input                   wire                                     rst            ,

	input                   wire     [`ysyx22040228_REGADDRBUS]      waddr1         ,
	input                   wire     [`ysyx22040228_REGBUS]          wdata1         ,
	input                   wire                                     we1            ,

	input                   wire     [`ysyx22040228_REGADDRBUS]      waddr2         ,
	input                   wire     [`ysyx22040228_REGBUS]          wdata2         ,
	input                   wire                                     we2            ,  

	input                   wire     [`ysyx22040228_REGADDRBUS]      waddr3         ,
	input                   wire     [`ysyx22040228_REGBUS]          wdata3         ,
	input                   wire                                     we3            ,  

	input                   wire     [`ysyx22040228_REGADDRBUS]      raddr1_1       ,
	output                  wire     [`ysyx22040228_REGBUS]          rdata1_1       ,
	input                   wire                                     re1_1          ,

	input                   wire     [`ysyx22040228_REGADDRBUS]      raddr2_1       ,
	output                  wire     [`ysyx22040228_REGBUS]          rdata2_1       ,
	input                   wire                                     re2_1          ,    

	input                   wire     [`ysyx22040228_REGADDRBUS]      raddr1_2       ,
	output                  wire     [`ysyx22040228_REGBUS]          rdata1_2       ,
	input                   wire                                     re1_2          ,

	input                   wire     [`ysyx22040228_REGADDRBUS]      raddr2_2       ,
	output                  wire     [`ysyx22040228_REGBUS]          rdata2_2       ,
	input                   wire                                     re2_2          ,   

	input                   wire                                     x1_read_ena    ,
	output                  wire     [`ysyx22040228_REGBUS]          x1_data        ,
	input                   wire     [`ysyx22040228_REGADDRBUS]      x1_addr        
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
		if(we1 == `ysyx22040228_WENABLE && waddr1 != 5'd0) begin
			regs[waddr1] <= wdata1 ;
		end
        if(we2 == `ysyx22040228_WENABLE && waddr2 != 5'd0) begin
			regs[waddr2] <= wdata2 ;
		end
		if(we3 == `ysyx22040228_WENABLE && waddr3 != 5'd0) begin
			regs[waddr3] <= wdata3 ;
		end
	end
end


assign rdata1_1 = (rst == `ysyx22040228_RSTENA)                                                                ? `ysyx22040228_ZEROWORD     :
                  ((re1_1 == `ysyx22040228_RENABLE) && (waddr1 == raddr1_1) && (we1 == `ysyx22040228_WENABLE)) ? wdata1                     :
                  ((re1_1 == `ysyx22040228_RENABLE) && (waddr2 == raddr1_1) && (we2 == `ysyx22040228_WENABLE)) ? wdata2                     :
                  ((re1_1 == `ysyx22040228_RENABLE) && (waddr3 == raddr1_1) && (we3 == `ysyx22040228_WENABLE)) ? wdata3                     :
                                                                                                                              regs[raddr1_1];       
assign rdata2_1 = (rst == `ysyx22040228_RSTENA)                                                                ? `ysyx22040228_ZEROWORD     :
                  ((re2_1 == `ysyx22040228_RENABLE) && (waddr1 == raddr2_1) && (we1 == `ysyx22040228_WENABLE)) ? wdata1                     :
                  ((re2_1 == `ysyx22040228_RENABLE) && (waddr2 == raddr2_1) && (we2 == `ysyx22040228_WENABLE)) ? wdata2                     :
                  ((re2_1 == `ysyx22040228_RENABLE) && (waddr3 == raddr2_1) && (we3 == `ysyx22040228_WENABLE)) ? wdata3                     :
                                                                                                                              regs[raddr2_1];    
assign rdata1_2 = (rst == `ysyx22040228_RSTENA)                                                                ? `ysyx22040228_ZEROWORD     :
                  ((re1_2 == `ysyx22040228_RENABLE) && (waddr1 == raddr1_2) && (we1 == `ysyx22040228_WENABLE)) ? wdata1                     :
                  ((re1_2 == `ysyx22040228_RENABLE) && (waddr2 == raddr1_2) && (we2 == `ysyx22040228_WENABLE)) ? wdata2                     :
                  ((re1_2 == `ysyx22040228_RENABLE) && (waddr3 == raddr1_2) && (we3 == `ysyx22040228_WENABLE)) ? wdata3                     :
                                                                                                                              regs[raddr1_2];    
assign rdata2_2 = (rst == `ysyx22040228_RSTENA)                                                                ? `ysyx22040228_ZEROWORD     :
                  ((re2_2 == `ysyx22040228_RENABLE) && (waddr1 == raddr2_2) && (we1 == `ysyx22040228_WENABLE)) ? wdata1                     :
                  ((re2_2 == `ysyx22040228_RENABLE) && (waddr2 == raddr2_2) && (we2 == `ysyx22040228_WENABLE)) ? wdata2                     :
                  ((re2_2 == `ysyx22040228_RENABLE) && (waddr3 == raddr2_2) && (we3 == `ysyx22040228_WENABLE)) ? wdata3                     :
                                                                                                                              regs[raddr2_2];    

assign x1_data  = (rst == `ysyx22040228_RSTENA)                                                                     ? `ysyx22040228_ZEROWORD     :
                  ((x1_read_ena == `ysyx22040228_RENABLE) && (waddr1 == x1_addr) && (we1 == `ysyx22040228_WENABLE)) ? wdata1                     :
                  ((x1_read_ena == `ysyx22040228_RENABLE) && (waddr2 == x1_addr) && (we2 == `ysyx22040228_WENABLE)) ? wdata2                     :
                  ((x1_read_ena == `ysyx22040228_RENABLE) && (waddr3 == x1_addr) && (we3 == `ysyx22040228_WENABLE)) ? wdata3                     :
                                                                                                                                    regs[x1_addr];                                                                                                                                      

endmodule//regfile

