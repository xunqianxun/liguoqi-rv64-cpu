/************************************************************
Author:LiGuoqi
Name:id_ex.v
Function: Intermediate module for compiling code and executing
************************************************************/
`include "ysyx_22040228defines.v"
module ysyx_22040228id_ex (
    input       wire                                     clk                ,
    input       wire                                     rst                ,
    input       wire                                     id_ex_bubble       ,
    input       wire       [ 4:0]                        stall_ctrl         ,
    input       wire       [`ysyx22040228_INSTBUS]       id_inst            ,
    input       wire       [`ysyx22040228_PCBUS]         id_pc              ,
    input       wire       [ 7:0]                        id_inst_type       ,
    input       wire       [ 7:0]                        id_inst_opcode     ,
    input       wire       [`ysyx22040228_REGBUS]        id_op1             ,
    input       wire       [`ysyx22040228_REGBUS]        id_op2             ,
    input       wire                                     id_rd_ena          ,
    input       wire       [`ysyx22040228_REGADDRBUS]    id_rd_addr         ,

    input       wire       [11:0]                        id_addr_offset     , 
    input       wire       [ 2:0]                        id_ls_sel          ,

    //output
    output      reg        [`ysyx22040228_INSTBUS]       ex_inst            ,
    output      reg        [`ysyx22040228_PCBUS]         ex_pc              ,
    output      reg        [ 7:0]                        ex_inst_type       ,
    output      reg        [ 7:0]                        ex_inst_opcode     ,
    output      reg        [`ysyx22040228_REGBUS]        ex_op1             ,
    output      reg        [`ysyx22040228_REGBUS]        ex_op2             ,
    output      reg                                      ex_rd_ena          ,
    output      reg        [`ysyx22040228_REGADDRBUS]    ex_rd_addr         ,

    output      reg        [11:0]                        ex_addr_offset     ,
    output      reg        [ 2:0]                        ex_ls_sel          
 );

 always @(posedge clk) begin
     if(rst == `ysyx22040228_RSTENA) begin
         ex_pc              <= `ysyx22040228_ZEROWORD  ;
         ex_inst            <= 32'b0       ;
         ex_inst_type       <= 8'b0        ;
         ex_inst_opcode     <= 8'B0        ;
         ex_op1             <= 64'b0       ; 
         ex_op2             <= 64'b0       ;
         ex_rd_ena          <= 1'b0        ;
         ex_rd_addr         <= 5'b0        ;
         ex_addr_offset     <= 12'b0       ;
         ex_ls_sel          <= 3'b0        ;
     end
     else if(id_ex_bubble) begin
         ex_pc              <= `ysyx22040228_ZEROWORD  ;
         ex_inst            <= 32'b0       ;             
         ex_inst_type       <= 8'b0        ;
         ex_inst_opcode     <= 8'B0        ;
         ex_op1             <= 64'b0       ;              
         ex_op2             <= 64'b0       ;
         ex_rd_ena          <= 1'b0        ;
         ex_rd_addr         <= 5'b0        ;
         ex_addr_offset     <= 12'b0       ;
         ex_ls_sel          <= 3'b0        ;
     end
     else if(stall_ctrl[2:0] == 3'b111)begin
         ex_pc              <= ex_pc          ;
         ex_inst            <= ex_inst        ;
         ex_inst_type       <= ex_inst_type   ;
         ex_inst_opcode     <= ex_inst_opcode ;
         ex_op1             <= ex_op1         ; 
         ex_op2             <= ex_op2         ;
         ex_rd_ena          <= ex_rd_ena      ;
         ex_rd_addr         <= ex_rd_addr     ;
         ex_addr_offset     <= ex_addr_offset ;
         ex_ls_sel          <= ex_ls_sel      ;
     end 
     else begin
         ex_pc              <= id_pc              ;
         ex_inst            <= id_inst            ;
         ex_inst_type       <= id_inst_type       ;
         ex_inst_opcode     <= id_inst_opcode     ;
         ex_op1             <= id_op1             ; 
         ex_op2             <= id_op2             ;
         ex_rd_ena          <= id_rd_ena          ;
         ex_rd_addr         <= id_rd_addr         ;
         ex_addr_offset     <= id_addr_offset     ;
         ex_ls_sel          <= id_ls_sel          ;
     end
 end
    
endmodule//id_ex
