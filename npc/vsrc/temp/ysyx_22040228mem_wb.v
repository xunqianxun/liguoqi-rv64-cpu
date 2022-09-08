/************************************************************
Author:LiGuoqi
Name:mem_wb.v
Function:write data back to regfile module
************************************************************/
/* verilator lint_off UNUSED */
`include "ysyx_22040228defines.v"
module ysyx_22040228mem_wb (
    input                   wire                                             clk            ,
    input                   wire                                             rst            ,
    input                   wire          [`ysyx22040228_PCBUS]              wb_pc_i        ,
    input                   wire          [`ysyx22040228_INSTBUS]            wb_inst_i      ,
    input                   wire          [ 4:0]                             stall_ctrl     ,

    input                   wire          [`ysyx22040228_REGBUS]             mem_rd_data    ,
    input                   wire          [`ysyx22040228_REGADDRBUS]         mem_rd_addr    ,
    input                   wire                                             mem_rd_ena     ,

    output                  reg           [`ysyx22040228_REGBUS]             wb_rd_data     ,
    output                  reg           [`ysyx22040228_REGADDRBUS]         wb_rd_addr     ,
    output                  reg                                              wb_rd_ena         
);

// import "DPI-C" function void difftest_dut_pc(input longint pc_data, input longint exit_code, input bit endyn, input bit exe);
// import "DPI-C" function void difftest_dut_thepc(input longint thepc_data);

// always @(*) begin
//     difftest_dut_thepc(wb_pc_o);
// end

reg  [`ysyx22040228_PCBUS]    wb_pc_o;
reg  [`ysyx22040228_INSTBUS]  wb_inst_o;


// always@(*)begin
// difftest_dut_pc(pc_data1, trap_code, teap_yn, difftest_exyn);    
// end  
    
always @(posedge clk) begin
    if(rst == `ysyx22040228_RSTENA) begin
        wb_rd_ena  <= 1'b0 ;
        wb_rd_addr <= 5'b0 ;
        wb_rd_data <= `ysyx22040228_ZEROWORD ;
        wb_pc_o    <= `ysyx22040228_ZEROWORD ;
        wb_inst_o  <= 32'b0 ;
    end
    else begin
        if(stall_ctrl[4] == `ysyx22040228_NOSTOP) begin
            wb_rd_ena  <= mem_rd_ena  ;
            wb_rd_addr <= mem_rd_addr ;
            wb_rd_data <= mem_rd_data ;
            wb_pc_o    <= wb_pc_i     ;
            wb_inst_o  <= wb_inst_i   ;
        end
        else if((stall_ctrl[3:0] == 4'b1111) && (stall_ctrl[4] == `ysyx22040228_STOP)) begin
            wb_rd_ena  <= 1'b0 ;
            wb_rd_addr <= 5'b0 ;
            wb_rd_data <= `ysyx22040228_ZEROWORD ;
            wb_pc_o    <= `ysyx22040228_ZEROWORD ;
            wb_inst_o  <= 32'b0 ;
        end
        else begin
        wb_rd_ena  <= wb_rd_ena  ;
        wb_rd_addr <= wb_rd_addr ;
        wb_rd_data <= wb_rd_data ;
        wb_pc_o    <= wb_pc_i    ;
        wb_inst_o  <= wb_inst_i   ;
        end
    end
end

//delay two time to writ difftest exe
reg   [`ysyx22040228_PCBUS]    pc_data1;
reg                            difftest_exyn;
reg                            teap_yn ;
reg   [`ysyx22040228_REGBUS]   trap_code;

always @(posedge clk) begin
    if(rst == `ysyx22040228_RENABLE) begin
       pc_data1   <= `ysyx22040228_ZEROWORD;
    end 
    else begin
       pc_data1   <= wb_pc_o;
    end 
end

always @(posedge clk) begin
    if(wb_inst_o != 32'b0) begin
        difftest_exyn <= 1'b1;
        if(wb_inst_o == `EBREAK_TRAP) begin
            teap_yn <= 1'b1;
            trap_code <= wb_rd_data ;
        end
        else begin
            teap_yn <= 1'b0;
            trap_code <= `ysyx22040228_ZEROWORD ;
        end  
    end 
    else if(wb_inst_o == 32'b0) begin
        difftest_exyn <= 1'b0;
        teap_yn <= 1'b0;
        trap_code <= `ysyx22040228_ZEROWORD ;
    end 
end

endmodule//mem_wb

