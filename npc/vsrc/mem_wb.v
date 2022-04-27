/************************************************************
Author:LiGuoqi
Name:mem_wb.v
Function:write data back to regfile module
************************************************************/
`include "./vsrc/defines.v"
module mem_wb (
    input                   wire                                             clk            ,
    input                   wire                                             rst            ,
    input                   wire          [`ysyx22040228_PCBUS]              wb_pc_i        ,
    input                   wire          [ 4:0]                             stall_ctrl     ,

    input                   wire          [`ysyx22040228_REGBUS]             mem_rd_data    ,
    input                   wire          [`ysyx22040228_REGADDRBUS]         mem_rd_addr    ,
    input                   wire                                             mem_rd_ena     ,

    output                  reg           [`ysyx22040228_REGBUS]             wb_rd_data     ,
    output                  reg           [`ysyx22040228_REGADDRBUS]         wb_rd_addr     ,
    output                  reg                                              wb_rd_ena      
//    output                  reg           [`ysyx22040228_PCBUS]              wb_pc_o        
);

import "DPI-C" function void difftest_dut_pc(input longint pc_data ,input bit exe);

reg  [`ysyx22040228_PCBUS]  wb_pc_o;
// initial begin
//     wb_pc_o = wb_pc_i;
// end

always@(*)begin
    // if(wb_rd_ena == 1'b1) begin
    //     difftest_dut_pc(wb_pc_o,0);
    // end
    // else begin
    //     difftest_dut_pc(wb_pc_o,1);
    // end
difftest_dut_pc(pc_data2,data_ena2);    
end  
    
always @(posedge clk) begin
    if(rst == `ysyx22040228_RSTENA) begin
        wb_rd_ena  <= 1'b0 ;
        wb_rd_addr <= 5'b0 ;
        wb_rd_data <= `ysyx22040228_ZEROWORD ;
        wb_pc_o    <= `ysyx22040228_ZEROWORD ;
    end
    else begin
        if(stall_ctrl[4] == `ysyx22040228_NOSTOP) begin
            wb_rd_ena  <= mem_rd_ena  ;
            wb_rd_addr <= mem_rd_addr ;
            wb_rd_data <= mem_rd_data ;
            wb_pc_o    <= wb_pc_i     ;
        end
        else if((stall_ctrl[3:0] == 4'b1111) && (stall_ctrl[4] == `ysyx22040228_STOP)) begin
            wb_rd_ena  <= 1'b0 ;
            wb_rd_addr <= 5'b0 ;
            wb_rd_data <= `ysyx22040228_ZEROWORD ;
            wb_pc_o    <= `ysyx22040228_ZEROWORD ;
        end
        else begin
        wb_rd_ena  <= wb_rd_ena  ;
        wb_rd_addr <= wb_rd_addr ;
        wb_rd_data <= wb_rd_data ;
        wb_pc_o    <= wb_pc_i    ;
        end
    end
end

//delay two time to writ difftest exe
reg   [`ysyx22040228_PCBUS]    pc_data1, pc_data2;
reg                            data_ena1, data_ena2;

always @(posedge clk) begin
    pc_data1   <= wb_pc_o;
    pc_data2   <= pc_data1;
    data_ena1  <= wb_rd_ena;
    data_ena2  <= data_ena1;
end

endmodule//mem_wb

