/**********************************************************************
Author  :LiGuoQi
Data    :2022,03,21
Function:this module use to pipeline prediction
**********************************************************************/
`include "./vsrc/defines.v"
module pip_fore (
//    input            wire                                   clk      ,
    input            wire                                   rst      ,
    input            wire    [`ysyx22040228_PCBUS]          pc_i     ,
    input            wire    [`ysyx22040228_INSTBUS]        inst     ,
    input            wire    [`ysyx22040228_REGBUS]         x1_data  ,
//    input            wire    [ 1:0]                         pip_cont ,
    
    output           wire    [`ysyx22040228_PCBUS]          pc_o     ,
    output           wire    [`ysyx22040228_REGADDRBUS]     x1_addr  ,
//    output           wire                                   pip_ena  ,
    output           wire                                   x1_ena   
);

wire   [20:1] j_imm;
assign {j_imm[20] , j_imm[10:1] , j_imm[11] , j_imm[19:12]} = inst[31:12];
wire   [11:0] i_imm;
assign i_imm = inst[31:20];
wire   [12:1] b_imm;
assign {b_imm[12] , b_imm[10:5] , b_imm[4:1] , b_imm[11]} = {inst[31:25] , inst[11:7]} ; 

wire [6:0] opcode;
assign x1_addr = inst[19:15];
assign opcode = inst[6:0];
wire inst_jal  ;
wire inst_jalr ;
wire inst_bxx  ;
assign inst_jal  = (opcode[6:2] == `ysyx22040228_JAL) && (opcode[1:0] == 2'b11)  ;
assign inst_jalr = (opcode[6:2] == `ysyx22040228_JALR) && (opcode[1:0] == 2'b11) ;
assign inst_bxx  = (opcode[6:2] == `ysyx22040228_BRANCH) && (opcode[1:0] == 2'b11)   ; 
//assign pip_ena   = inst_bxx;
assign x1_ena = (rst == `ysyx22040228_RSTENA) ? 0:inst_jalr;

wire [63:0] operand1;
wire [63:0] operand2;
assign operand1 = inst_jalr ? x1_data:pc_i;
assign operand2 = inst_jal  ? {{44{j_imm[20]}} , j_imm[20:1] << 1} :
                  inst_bxx  ? {{52{b_imm[12]}} , b_imm[12:1] << 1} :
                  inst_jalr ? {{52{i_imm[11]}} , i_imm[11:0]}      : `ysyx22040228_NEXTPC; 

wire [63:0] j_pc;
wire [63:0] pc_next_data;
assign j_pc         = operand1 + operand2;
assign pc_o = (rst == `ysyx22040228_RSTENA) ? `ysyx22040228_ZEROWORD:
                      inst_jalr                     ? {j_pc[63:1] , 1'b0}   :
                                                                j_pc;

endmodule//pip_fore

