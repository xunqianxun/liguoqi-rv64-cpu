// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrvcpu__Syms.h"


void Vrvcpu___024root__traceInitSub0(Vrvcpu___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vrvcpu___024root__traceInitTop(Vrvcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vrvcpu___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vrvcpu___024root__traceInitSub0(Vrvcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+310,"clk", false,-1);
        tracep->declBit(c+311,"rst", false,-1);
        tracep->declQuad(c+312,"inst_addr", false,-1, 63,0);
        tracep->declBit(c+314,"inst_ena", false,-1);
        tracep->declBit(c+315,"inst_ready", false,-1);
        tracep->declBus(c+316,"inst", false,-1, 31,0);
        tracep->declBit(c+317,"bui_inst_valid", false,-1);
        tracep->declQuad(c+318,"data_addr", false,-1, 63,0);
        tracep->declBus(c+320,"wmask", false,-1, 7,0);
        tracep->declQuad(c+321,"data_o", false,-1, 63,0);
        tracep->declQuad(c+323,"data_i", false,-1, 63,0);
        tracep->declBit(c+325,"we", false,-1);
        tracep->declBit(c+326,"re", false,-1);
        tracep->declBit(c+327,"mem_finish", false,-1);
        tracep->declBit(c+328,"timer_intr", false,-1);
        tracep->declBit(c+310,"rvcpu clk", false,-1);
        tracep->declBit(c+311,"rvcpu rst", false,-1);
        tracep->declQuad(c+312,"rvcpu inst_addr", false,-1, 63,0);
        tracep->declBit(c+314,"rvcpu inst_ena", false,-1);
        tracep->declBit(c+315,"rvcpu inst_ready", false,-1);
        tracep->declBus(c+316,"rvcpu inst", false,-1, 31,0);
        tracep->declBit(c+317,"rvcpu bui_inst_valid", false,-1);
        tracep->declQuad(c+318,"rvcpu data_addr", false,-1, 63,0);
        tracep->declBus(c+320,"rvcpu wmask", false,-1, 7,0);
        tracep->declQuad(c+321,"rvcpu data_o", false,-1, 63,0);
        tracep->declQuad(c+323,"rvcpu data_i", false,-1, 63,0);
        tracep->declBit(c+325,"rvcpu we", false,-1);
        tracep->declBit(c+326,"rvcpu re", false,-1);
        tracep->declBit(c+327,"rvcpu mem_finish", false,-1);
        tracep->declBit(c+328,"rvcpu timer_intr", false,-1);
        tracep->declQuad(c+99,"rvcpu pc", false,-1, 63,0);
        tracep->declQuad(c+329,"rvcpu pip_regfile_x1", false,-1, 63,0);
        tracep->declBit(c+331,"rvcpu pip_refflie_x1_ena", false,-1);
        tracep->declBus(c+332,"rvcpu pip_regfile_x1_addr", false,-1, 4,0);
        tracep->declQuad(c+333,"rvcpu pip_pc", false,-1, 63,0);
        tracep->declBit(c+1,"rvcpu if_stall_req", false,-1);
        tracep->declQuad(c+101,"rvcpu if_id_pc", false,-1, 63,0);
        tracep->declBus(c+103,"rvcpu if_id_inst", false,-1, 31,0);
        tracep->declBit(c+104,"rvcpu ex_flush", false,-1);
        tracep->declQuad(c+2,"rvcpu ex_id_rd_data", false,-1, 63,0);
        tracep->declBus(c+105,"rvcpu ex_id_rd_addr", false,-1, 4,0);
        tracep->declBit(c+106,"rvcpu ex_id_rd_ena", false,-1);
        tracep->declBus(c+107,"rvcpu ex_id_rd_type", false,-1, 7,0);
        tracep->declBus(c+108,"rvcpu ex_mem_sel", false,-1, 2,0);
        tracep->declQuad(c+109,"rvcpu ex_mem_addr", false,-1, 63,0);
        tracep->declBit(c+104,"rvcpu ex_pc_branchena", false,-1);
        tracep->declQuad(c+111,"rvcpu ex_pc_branchpc", false,-1, 63,0);
        tracep->declBit(c+72,"rvcpu ex_ctrl_req", false,-1);
        tracep->declBus(c+4,"rvcpu id_reg_addr1", false,-1, 4,0);
        tracep->declBit(c+5,"rvcpu id_reg_ena1", false,-1);
        tracep->declBus(c+6,"rvcpu id_reg_addr2", false,-1, 4,0);
        tracep->declBit(c+7,"rvcpu id_reg_ena2", false,-1);
        tracep->declBit(c+335,"rvcpu id_ctrl_req", false,-1);
        tracep->declBus(c+8,"rvcpu id_ex_type", false,-1, 7,0);
        tracep->declBus(c+9,"rvcpu id_ex_opcode", false,-1, 7,0);
        tracep->declQuad(c+10,"rvcpu id_ex_op", false,-1, 63,0);
        tracep->declQuad(c+12,"rvcpu id_ex_op2", false,-1, 63,0);
        tracep->declBit(c+14,"rvcpu id_ex_rd_ena", false,-1);
        tracep->declBus(c+15,"rvcpu id_ex_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+16,"rvcpu id_ex_pc", false,-1, 63,0);
        tracep->declBus(c+18,"rvcpu id_ex_s_offset", false,-1, 11,0);
        tracep->declBus(c+19,"rvcpu id_ex_memsel", false,-1, 2,0);
        tracep->declQuad(c+73,"rvcpu id_pip_jalrpc", false,-1, 63,0);
        tracep->declBit(c+20,"rvcpu id_pip_jalrena", false,-1);
        tracep->declBit(c+21,"rvcpu id_if_flush", false,-1);
        tracep->declBus(c+22,"rvcpu stall_ctrl", false,-1, 4,0);
        tracep->declQuad(c+336,"rvcpu regs_id_data1", false,-1, 63,0);
        tracep->declQuad(c+338,"rvcpu regs_id_data2", false,-1, 63,0);
        tracep->declQuad(c+23,"rvcpu mem_id_data", false,-1, 63,0);
        tracep->declBus(c+113,"rvcpu mem_id_addr", false,-1, 4,0);
        tracep->declBit(c+114,"rvcpu mem_id_ena", false,-1);
        tracep->declBit(c+340,"rvcpu mem_ctrl_req", false,-1);
        tracep->declBus(c+115,"rvcpu wb_id_addr", false,-1, 4,0);
        tracep->declBit(c+116,"rvcpu wb_id_ena", false,-1);
        tracep->declQuad(c+117,"rvcpu wb_regfile_data", false,-1, 63,0);
        tracep->declQuad(c+119,"rvcpu idex_ex_pc", false,-1, 63,0);
        tracep->declBus(c+121,"rvcpu idex_ex_type", false,-1, 7,0);
        tracep->declBus(c+122,"rvcpu idex_ex_opcode", false,-1, 7,0);
        tracep->declQuad(c+123,"rvcpu idex_ex_op1", false,-1, 63,0);
        tracep->declQuad(c+125,"rvcpu idex_ex_op2", false,-1, 63,0);
        tracep->declBit(c+127,"rvcpu idex_ex_rdena", false,-1);
        tracep->declBus(c+105,"rvcpu idex_ex_rdaddr", false,-1, 4,0);
        tracep->declBus(c+128,"rvcpu idex_ex_offset", false,-1, 11,0);
        tracep->declBus(c+108,"rvcpu idex_ex_sel", false,-1, 2,0);
        tracep->declBus(c+129,"rvcpu exmem_mem_type", false,-1, 7,0);
        tracep->declBit(c+114,"rvcpu exmem_mem_ena", false,-1);
        tracep->declQuad(c+130,"rvcpu exmem_mem_data", false,-1, 63,0);
        tracep->declBus(c+113,"rvcpu exmem_mem_addr", false,-1, 4,0);
        tracep->declBus(c+132,"rvcpu exmem_mem_sel", false,-1, 2,0);
        tracep->declQuad(c+133,"rvcpu exmem_mem_lsaddr", false,-1, 63,0);
        tracep->declBit(c+311,"rvcpu pip_fore0 rst", false,-1);
        tracep->declQuad(c+99,"rvcpu pip_fore0 pc_i", false,-1, 63,0);
        tracep->declBus(c+316,"rvcpu pip_fore0 inst", false,-1, 31,0);
        tracep->declQuad(c+329,"rvcpu pip_fore0 x1_data", false,-1, 63,0);
        tracep->declQuad(c+333,"rvcpu pip_fore0 pc_o", false,-1, 63,0);
        tracep->declBus(c+332,"rvcpu pip_fore0 x1_addr", false,-1, 4,0);
        tracep->declBit(c+331,"rvcpu pip_fore0 x1_ena", false,-1);
        tracep->declBus(c+25,"rvcpu pip_fore0 j_imm", false,-1, 20,1);
        tracep->declBus(c+341,"rvcpu pip_fore0 i_imm", false,-1, 11,0);
        tracep->declBus(c+26,"rvcpu pip_fore0 b_imm", false,-1, 12,1);
        tracep->declBus(c+342,"rvcpu pip_fore0 opcode", false,-1, 6,0);
        tracep->declBit(c+343,"rvcpu pip_fore0 inst_jal", false,-1);
        tracep->declBit(c+27,"rvcpu pip_fore0 inst_jalr", false,-1);
        tracep->declBit(c+344,"rvcpu pip_fore0 inst_bxx", false,-1);
        tracep->declQuad(c+345,"rvcpu pip_fore0 operand1", false,-1, 63,0);
        tracep->declQuad(c+347,"rvcpu pip_fore0 operand2", false,-1, 63,0);
        tracep->declQuad(c+28,"rvcpu pip_fore0 j_pc", false,-1, 63,0);
        tracep->declBit(c+310,"rvcpu pc1 clk", false,-1);
        tracep->declBit(c+311,"rvcpu pc1 rst", false,-1);
        tracep->declQuad(c+333,"rvcpu pc1 static_pc_i", false,-1, 63,0);
        tracep->declQuad(c+73,"rvcpu pc1 id_pc_i", false,-1, 63,0);
        tracep->declBit(c+20,"rvcpu pc1 id_pc_ena", false,-1);
        tracep->declQuad(c+111,"rvcpu pc1 ex_pc_i", false,-1, 63,0);
        tracep->declBit(c+104,"rvcpu pc1 ex_pc_ena", false,-1);
        tracep->declBit(c+30,"rvcpu pc1 pc_stall", false,-1);
        tracep->declQuad(c+99,"rvcpu pc1 pc", false,-1, 63,0);
        tracep->declBit(c+314,"rvcpu pc1 ce", false,-1);
        tracep->declBit(c+310,"rvcpu if_id2 clk", false,-1);
        tracep->declBit(c+311,"rvcpu if_id2 rst", false,-1);
        tracep->declQuad(c+99,"rvcpu if_id2 if_pc", false,-1, 63,0);
        tracep->declBus(c+316,"rvcpu if_id2 if_inst", false,-1, 31,0);
        tracep->declBit(c+104,"rvcpu if_id2 if_id_flush", false,-1);
        tracep->declBit(c+21,"rvcpu if_id2 if_id_bubble", false,-1);
        tracep->declBit(c+317,"rvcpu if_id2 if_inst_valid", false,-1);
        tracep->declBit(c+315,"rvcpu if_id2 if_inst_ready", false,-1);
        tracep->declBus(c+22,"rvcpu if_id2 stall_ctrl", false,-1, 4,0);
        tracep->declBit(c+1,"rvcpu if_id2 if_stall_req", false,-1);
        tracep->declQuad(c+101,"rvcpu if_id2 id_pc", false,-1, 63,0);
        tracep->declBus(c+103,"rvcpu if_id2 id_inst", false,-1, 31,0);
        tracep->declBit(c+311,"rvcpu id3 rst", false,-1);
        tracep->declBus(c+103,"rvcpu id3 inst_i", false,-1, 31,0);
        tracep->declQuad(c+101,"rvcpu id3 pc_i", false,-1, 63,0);
        tracep->declQuad(c+336,"rvcpu id3 op1_data_i", false,-1, 63,0);
        tracep->declQuad(c+338,"rvcpu id3 op2_data_i", false,-1, 63,0);
        tracep->declBus(c+4,"rvcpu id3 op1_addr_o", false,-1, 4,0);
        tracep->declBus(c+6,"rvcpu id3 op2_addr_o", false,-1, 4,0);
        tracep->declBit(c+5,"rvcpu id3 op1_read_o", false,-1);
        tracep->declBit(c+7,"rvcpu id3 op2_read_o", false,-1);
        tracep->declQuad(c+2,"rvcpu id3 ex_rd_data", false,-1, 63,0);
        tracep->declBus(c+105,"rvcpu id3 ex_rd_addr", false,-1, 4,0);
        tracep->declBit(c+106,"rvcpu id3 ex_rd_ena", false,-1);
        tracep->declBus(c+107,"rvcpu id3 ex_inst_type", false,-1, 7,0);
        tracep->declQuad(c+23,"rvcpu id3 mem_rd_data", false,-1, 63,0);
        tracep->declBus(c+113,"rvcpu id3 mem_rd_addr", false,-1, 4,0);
        tracep->declBit(c+114,"rvcpu id3 mem_rd_ena", false,-1);
        tracep->declBit(c+116,"rvcpu id3 wb_rd_ena", false,-1);
        tracep->declBus(c+115,"rvcpu id3 wb_rd_addr", false,-1, 4,0);
        tracep->declBit(c+335,"rvcpu id3 id_stall_req", false,-1);
        tracep->declBit(c+1,"rvcpu id3 if_stall_req", false,-1);
        tracep->declBus(c+8,"rvcpu id3 inst_type", false,-1, 7,0);
        tracep->declBus(c+9,"rvcpu id3 inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+10,"rvcpu id3 op1_o", false,-1, 63,0);
        tracep->declQuad(c+12,"rvcpu id3 op2_o", false,-1, 63,0);
        tracep->declBit(c+14,"rvcpu id3 rd_w_ena", false,-1);
        tracep->declBus(c+15,"rvcpu id3 rd_w_addr", false,-1, 4,0);
        tracep->declQuad(c+16,"rvcpu id3 pc_o", false,-1, 63,0);
        tracep->declBus(c+18,"rvcpu id3 store_addr_offset", false,-1, 11,0);
        tracep->declBus(c+19,"rvcpu id3 mem_op_sel", false,-1, 2,0);
        tracep->declBit(c+20,"rvcpu id3 jalr_pc_ena", false,-1);
        tracep->declQuad(c+73,"rvcpu id3 jalr_pc", false,-1, 63,0);
        tracep->declBit(c+21,"rvcpu id3 id_flush", false,-1);
        tracep->declBus(c+135,"rvcpu id3 opcode", false,-1, 6,0);
        tracep->declBus(c+136,"rvcpu id3 rd", false,-1, 4,0);
        tracep->declBus(c+137,"rvcpu id3 funct3", false,-1, 2,0);
        tracep->declBus(c+138,"rvcpu id3 rs1", false,-1, 4,0);
        tracep->declBus(c+139,"rvcpu id3 imm", false,-1, 11,0);
        tracep->declBus(c+140,"rvcpu id3 funct7", false,-1, 6,0);
        tracep->declBus(c+141,"rvcpu id3 rs2", false,-1, 4,0);
        tracep->declBus(c+142,"rvcpu id3 u_imm", false,-1, 19,0);
        tracep->declBus(c+143,"rvcpu id3 s_imm", false,-1, 11,0);
        tracep->declBit(c+31,"rvcpu id3 inst_lui", false,-1);
        tracep->declBit(c+32,"rvcpu id3 inst_auipc", false,-1);
        tracep->declBit(c+33,"rvcpu id3 inst_jal", false,-1);
        tracep->declBit(c+34,"rvcpu id3 inst_jalr", false,-1);
        tracep->declBit(c+35,"rvcpu id3 inst_jump", false,-1);
        tracep->declBit(c+75,"rvcpu id3 inst_addi", false,-1);
        tracep->declBit(c+76,"rvcpu id3 inst_slti", false,-1);
        tracep->declBit(c+77,"rvcpu id3 inst_sltiu", false,-1);
        tracep->declBit(c+78,"rvcpu id3 inst_xori", false,-1);
        tracep->declBit(c+79,"rvcpu id3 inst_ori", false,-1);
        tracep->declBit(c+80,"rvcpu id3 inst_andi", false,-1);
        tracep->declBit(c+81,"rvcpu id3 inst_slli", false,-1);
        tracep->declBit(c+82,"rvcpu id3 inst_srli", false,-1);
        tracep->declBit(c+36,"rvcpu id3 inst_srai", false,-1);
        tracep->declBit(c+37,"rvcpu id3 inst_addiw", false,-1);
        tracep->declBit(c+38,"rvcpu id3 inst_slliw", false,-1);
        tracep->declBit(c+39,"rvcpu id3 inst_srliw", false,-1);
        tracep->declBit(c+40,"rvcpu id3 inst_sraiw", false,-1);
        tracep->declBit(c+41,"rvcpu id3 inst_add", false,-1);
        tracep->declBit(c+42,"rvcpu id3 inst_sub", false,-1);
        tracep->declBit(c+43,"rvcpu id3 inst_sll", false,-1);
        tracep->declBit(c+44,"rvcpu id3 inst_slt", false,-1);
        tracep->declBit(c+45,"rvcpu id3 inst_sltu", false,-1);
        tracep->declBit(c+46,"rvcpu id3 inst_xor", false,-1);
        tracep->declBit(c+47,"rvcpu id3 inst_srl", false,-1);
        tracep->declBit(c+48,"rvcpu id3 inst_sra", false,-1);
        tracep->declBit(c+49,"rvcpu id3 inst_or", false,-1);
        tracep->declBit(c+50,"rvcpu id3 inst_and", false,-1);
        tracep->declBit(c+51,"rvcpu id3 inst_addw", false,-1);
        tracep->declBit(c+52,"rvcpu id3 inst_subw", false,-1);
        tracep->declBit(c+53,"rvcpu id3 inst_sllw", false,-1);
        tracep->declBit(c+54,"rvcpu id3 inst_srlw", false,-1);
        tracep->declBit(c+55,"rvcpu id3 inst_sraw", false,-1);
        tracep->declBit(c+83,"rvcpu id3 inst_beq", false,-1);
        tracep->declBit(c+84,"rvcpu id3 inst_ben", false,-1);
        tracep->declBit(c+85,"rvcpu id3 inst_blt", false,-1);
        tracep->declBit(c+86,"rvcpu id3 inst_bge", false,-1);
        tracep->declBit(c+87,"rvcpu id3 inst_bltu", false,-1);
        tracep->declBit(c+88,"rvcpu id3 inst_bgeu", false,-1);
        tracep->declBit(c+56,"rvcpu id3 inst_csrrw", false,-1);
        tracep->declBit(c+57,"rvcpu id3 inst_csrrs", false,-1);
        tracep->declBit(c+58,"rvcpu id3 inst_csrrc", false,-1);
        tracep->declBit(c+59,"rvcpu id3 inst_csrrwi", false,-1);
        tracep->declBit(c+89,"rvcpu id3 inst_csrrsi", false,-1);
        tracep->declBit(c+90,"rvcpu id3 inst_csrrci", false,-1);
        tracep->declBit(c+60,"rvcpu id3 inst_csr_rs1", false,-1);
        tracep->declBit(c+59,"rvcpu id3 inst_csr_imm", false,-1);
        tracep->declBit(c+91,"rvcpu id3 inst_ecall", false,-1);
        tracep->declBit(c+92,"rvcpu id3 inst_mret", false,-1);
        tracep->declBit(c+349,"rvcpu id3 op1_loda_relate", false,-1);
        tracep->declBit(c+350,"rvcpu id3 op2_loda_relate", false,-1);
        tracep->declBit(c+61,"rvcpu id3 ex_op1", false,-1);
        tracep->declBit(c+62,"rvcpu id3 mem_op1", false,-1);
        tracep->declBit(c+93,"rvcpu id3 ex_op2", false,-1);
        tracep->declBit(c+94,"rvcpu id3 mem_op2", false,-1);
        tracep->declBit(c+95,"rvcpu id3 wb_op1", false,-1);
        tracep->declQuad(c+96,"rvcpu id3 jalr_pc_temp", false,-1, 63,0);
        tracep->declBit(c+98,"rvcpu id3 predict_success", false,-1);
        tracep->declBit(c+310,"rvcpu id_ex4 clk", false,-1);
        tracep->declBit(c+311,"rvcpu id_ex4 rst", false,-1);
        tracep->declBit(c+104,"rvcpu id_ex4 id_ex_bubble", false,-1);
        tracep->declBus(c+22,"rvcpu id_ex4 stall_ctrl", false,-1, 4,0);
        tracep->declQuad(c+16,"rvcpu id_ex4 id_pc", false,-1, 63,0);
        tracep->declBus(c+8,"rvcpu id_ex4 id_inst_type", false,-1, 7,0);
        tracep->declBus(c+9,"rvcpu id_ex4 id_inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+10,"rvcpu id_ex4 id_op1", false,-1, 63,0);
        tracep->declQuad(c+12,"rvcpu id_ex4 id_op2", false,-1, 63,0);
        tracep->declBit(c+14,"rvcpu id_ex4 id_rd_ena", false,-1);
        tracep->declBus(c+15,"rvcpu id_ex4 id_rd_addr", false,-1, 4,0);
        tracep->declBus(c+18,"rvcpu id_ex4 id_addr_offset", false,-1, 11,0);
        tracep->declBus(c+19,"rvcpu id_ex4 id_ls_sel", false,-1, 2,0);
        tracep->declQuad(c+119,"rvcpu id_ex4 ex_pc", false,-1, 63,0);
        tracep->declBus(c+121,"rvcpu id_ex4 ex_inst_type", false,-1, 7,0);
        tracep->declBus(c+122,"rvcpu id_ex4 ex_inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+123,"rvcpu id_ex4 ex_op1", false,-1, 63,0);
        tracep->declQuad(c+125,"rvcpu id_ex4 ex_op2", false,-1, 63,0);
        tracep->declBit(c+127,"rvcpu id_ex4 ex_rd_ena", false,-1);
        tracep->declBus(c+105,"rvcpu id_ex4 ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+128,"rvcpu id_ex4 ex_addr_offset", false,-1, 11,0);
        tracep->declBus(c+108,"rvcpu id_ex4 ex_ls_sel", false,-1, 2,0);
        tracep->declBit(c+310,"rvcpu ex5 clk", false,-1);
        tracep->declBit(c+311,"rvcpu ex5 rst", false,-1);
        tracep->declQuad(c+119,"rvcpu ex5 pc_i", false,-1, 63,0);
        tracep->declBus(c+121,"rvcpu ex5 inst_type_i", false,-1, 7,0);
        tracep->declBus(c+122,"rvcpu ex5 inst_opcode_i", false,-1, 7,0);
        tracep->declQuad(c+123,"rvcpu ex5 op1_i", false,-1, 63,0);
        tracep->declQuad(c+125,"rvcpu ex5 op2_i", false,-1, 63,0);
        tracep->declBit(c+127,"rvcpu ex5 rd_ena_i", false,-1);
        tracep->declBus(c+105,"rvcpu ex5 rd_addr_i", false,-1, 4,0);
        tracep->declBus(c+108,"rvcpu ex5 ls_sel_i", false,-1, 2,0);
        tracep->declBus(c+128,"rvcpu ex5 addr_offsel_i", false,-1, 11,0);
        tracep->declBus(c+107,"rvcpu ex5 inst_type_o", false,-1, 7,0);
        tracep->declBit(c+106,"rvcpu ex5 rd_ena_o", false,-1);
        tracep->declBus(c+105,"rvcpu ex5 rd_addr_o", false,-1, 4,0);
        tracep->declQuad(c+2,"rvcpu ex5 rd_data_o", false,-1, 63,0);
        tracep->declBus(c+108,"rvcpu ex5 ls_sel_o", false,-1, 2,0);
        tracep->declQuad(c+109,"rvcpu ex5 ls_addr_o", false,-1, 63,0);
        tracep->declBit(c+104,"rvcpu ex5 ex_flush", false,-1);
        tracep->declBit(c+104,"rvcpu ex5 branch_pc_ena", false,-1);
        tracep->declQuad(c+111,"rvcpu ex5 branch_pc", false,-1, 63,0);
        tracep->declBit(c+1,"rvcpu ex5 if_stell_req", false,-1);
        tracep->declBit(c+72,"rvcpu ex5 ex_stall_req", false,-1);
        tracep->declBit(c+328,"rvcpu ex5 timer_intr", false,-1);
        tracep->declBit(c+63,"rvcpu ex5 ex_stall", false,-1);
        tracep->declQuad(c+64,"rvcpu ex5 exe_res", false,-1, 63,0);
        tracep->declQuad(c+144,"rvcpu ex5 op2_i_mux", false,-1, 63,0);
        tracep->declQuad(c+146,"rvcpu ex5 op1_sub_op2", false,-1, 63,0);
        tracep->declQuad(c+148,"rvcpu ex5 op1_add_op2", false,-1, 63,0);
        tracep->declQuad(c+150,"rvcpu ex5 op1_addw_op2", false,-1, 63,0);
        tracep->declBit(c+152,"rvcpu ex5 op1_ls_op2", false,-1);
        tracep->declQuad(c+153,"rvcpu ex5 shift_res", false,-1, 63,0);
        tracep->declBus(c+155,"rvcpu ex5 op1_sllw_op2", false,-1, 31,0);
        tracep->declQuad(c+156,"rvcpu ex5 sllw_res", false,-1, 63,0);
        tracep->declBus(c+158,"rvcpu ex5 op1_srlw_op2", false,-1, 31,0);
        tracep->declQuad(c+159,"rvcpu ex5 srlw_res", false,-1, 63,0);
        tracep->declBus(c+161,"rvcpu ex5 op1_sraw_op2", false,-1, 31,0);
        tracep->declQuad(c+162,"rvcpu ex5 sraw_res", false,-1, 63,0);
        tracep->declBus(c+164,"rvcpu ex5 op1_subw_op2", false,-1, 31,0);
        tracep->declQuad(c+165,"rvcpu ex5 subw_res", false,-1, 63,0);
        tracep->declQuad(c+167,"rvcpu ex5 upper_imm", false,-1, 63,0);
        tracep->declBit(c+169,"rvcpu ex5 ex_flush_branch", false,-1);
        tracep->declBit(c+170,"rvcpu ex5 tmr_trap_ena", false,-1);
        tracep->declBus(c+171,"rvcpu ex5 csr_idx", false,-1, 11,0);
        tracep->declQuad(c+172,"rvcpu ex5 read_csr_data", false,-1, 63,0);
        tracep->declBit(c+174,"rvcpu ex5 trap_ena", false,-1);
        tracep->declBit(c+175,"rvcpu ex5 ecall_trap_ena", false,-1);
        tracep->declBit(c+176,"rvcpu ex5 cmt_mret_ena", false,-1);
        tracep->declBit(c+177,"rvcpu ex5 csr_wr_en", false,-1);
        tracep->declBit(c+178,"rvcpu ex5 csr_rd_en", false,-1);
        tracep->declQuad(c+179,"rvcpu ex5 wbck_csr_data", false,-1, 63,0);
        tracep->declQuad(c+181,"rvcpu ex5 trap_mcause_value", false,-1, 63,0);
        tracep->declQuad(c+183,"rvcpu ex5 mask_set_res", false,-1, 63,0);
        tracep->declQuad(c+185,"rvcpu ex5 mask_clear_res", false,-1, 63,0);
        tracep->declBit(c+310,"rvcpu ex5 csr0 clk", false,-1);
        tracep->declBit(c+311,"rvcpu ex5 csr0 rst", false,-1);
        tracep->declQuad(c+119,"rvcpu ex5 csr0 pc_i", false,-1, 63,0);
        tracep->declBit(c+177,"rvcpu ex5 csr0 csr_wr_en", false,-1);
        tracep->declBit(c+178,"rvcpu ex5 csr0 csr_rd_en", false,-1);
        tracep->declBus(c+171,"rvcpu ex5 csr0 csr_idx", false,-1, 11,0);
        tracep->declBit(c+176,"rvcpu ex5 csr0 cmt_mret_ena", false,-1);
        tracep->declBit(c+175,"rvcpu ex5 csr0 ecall_trap_ena", false,-1);
        tracep->declQuad(c+181,"rvcpu ex5 csr0 trap_mcause_value", false,-1, 63,0);
        tracep->declBit(c+328,"rvcpu ex5 csr0 tmr_intr_ena", false,-1);
        tracep->declBit(c+170,"rvcpu ex5 csr0 tmr_trap_ena", false,-1);
        tracep->declQuad(c+172,"rvcpu ex5 csr0 read_csr_data", false,-1, 63,0);
        tracep->declQuad(c+179,"rvcpu ex5 csr0 wbck_csr_data", false,-1, 63,0);
        tracep->declBit(c+63,"rvcpu ex5 csr0 ex_stall", false,-1);
        tracep->declBit(c+187,"rvcpu ex5 csr0 sel_mcycle", false,-1);
        tracep->declBit(c+188,"rvcpu ex5 csr0 rd_mcycle", false,-1);
        tracep->declBit(c+189,"rvcpu ex5 csr0 wr_mcycle", false,-1);
        tracep->declQuad(c+190,"rvcpu ex5 csr0 csr_mcycle", false,-1, 63,0);
        tracep->declBit(c+192,"rvcpu ex5 csr0 sel_mstatus", false,-1);
        tracep->declBit(c+193,"rvcpu ex5 csr0 rd_mstatus", false,-1);
        tracep->declBit(c+194,"rvcpu ex5 csr0 wr_mstatus", false,-1);
        tracep->declBit(c+195,"rvcpu ex5 csr0 mstatus_mpie_ena", false,-1);
        tracep->declBit(c+196,"rvcpu ex5 csr0 mstatus_mpie_nxt", false,-1);
        tracep->declBit(c+197,"rvcpu ex5 csr0 csr_mstatus_mpie", false,-1);
        tracep->declBit(c+195,"rvcpu ex5 csr0 mstatus_mie_ena", false,-1);
        tracep->declBit(c+198,"rvcpu ex5 csr0 mstatus_mie_nxt", false,-1);
        tracep->declBit(c+199,"rvcpu ex5 csr0 csr_mstatus_mie", false,-1);
        tracep->declBit(c+195,"rvcpu ex5 csr0 mstatus_mpp_ena", false,-1);
        tracep->declBus(c+200,"rvcpu ex5 csr0 mstatus_mpp_nxt", false,-1, 1,0);
        tracep->declBus(c+201,"rvcpu ex5 csr0 csr_mstatus_mpp", false,-1, 1,0);
        tracep->declBus(c+362,"rvcpu ex5 csr0 csr_mstatus_xs", false,-1, 1,0);
        tracep->declBus(c+202,"rvcpu ex5 csr0 csr_mstatus_fs", false,-1, 1,0);
        tracep->declBit(c+203,"rvcpu ex5 csr0 csr_mstatus_sd", false,-1);
        tracep->declQuad(c+204,"rvcpu ex5 csr0 csr_mstatus", false,-1, 63,0);
        tracep->declBit(c+206,"rvcpu ex5 csr0 sel_mtvec", false,-1);
        tracep->declBit(c+207,"rvcpu ex5 csr0 rd_mtvec", false,-1);
        tracep->declBit(c+208,"rvcpu ex5 csr0 wr_mtvec", false,-1);
        tracep->declQuad(c+209,"rvcpu ex5 csr0 csr_mtvec_base", false,-1, 63,2);
        tracep->declBus(c+362,"rvcpu ex5 csr0 csr_mtvec_mode", false,-1, 1,0);
        tracep->declQuad(c+211,"rvcpu ex5 csr0 csr_mtvec", false,-1, 63,0);
        tracep->declBit(c+213,"rvcpu ex5 csr0 sel_mepc", false,-1);
        tracep->declBit(c+214,"rvcpu ex5 csr0 rd_mepc", false,-1);
        tracep->declBit(c+215,"rvcpu ex5 csr0 wr_mepc", false,-1);
        tracep->declQuad(c+216,"rvcpu ex5 csr0 csr_mepc", false,-1, 63,0);
        tracep->declBit(c+218,"rvcpu ex5 csr0 sel_mcause", false,-1);
        tracep->declBit(c+219,"rvcpu ex5 csr0 rd_mcause", false,-1);
        tracep->declBit(c+220,"rvcpu ex5 csr0 wr_mcause", false,-1);
        tracep->declBit(c+221,"rvcpu ex5 csr0 csr_mcause_ena", false,-1);
        tracep->declQuad(c+222,"rvcpu ex5 csr0 csr_mcause_nxt", false,-1, 63,0);
        tracep->declQuad(c+224,"rvcpu ex5 csr0 csr_mcause", false,-1, 63,0);
        tracep->declBit(c+226,"rvcpu ex5 csr0 sle_mie", false,-1);
        tracep->declBit(c+227,"rvcpu ex5 csr0 rd_mie", false,-1);
        tracep->declBit(c+228,"rvcpu ex5 csr0 wr_mie", false,-1);
        tracep->declBit(c+229,"rvcpu ex5 csr0 csr_mie_mtie", false,-1);
        tracep->declQuad(c+230,"rvcpu ex5 csr0 csr_mie", false,-1, 63,0);
        tracep->declBit(c+232,"rvcpu ex5 csr0 sel_mip", false,-1);
        tracep->declBit(c+233,"rvcpu ex5 csr0 rd_mip", false,-1);
        tracep->declBit(c+234,"rvcpu ex5 csr0 csr_mip_mtip", false,-1);
        tracep->declQuad(c+235,"rvcpu ex5 csr0 csr_mip", false,-1, 63,0);
        tracep->declBit(c+237,"rvcpu ex5 csr0 sel_mscratch", false,-1);
        tracep->declBit(c+238,"rvcpu ex5 csr0 rd_mscrstch", false,-1);
        tracep->declBit(c+239,"rvcpu ex5 csr0 wr_mscrstch", false,-1);
        tracep->declQuad(c+240,"rvcpu ex5 csr0 csr_mscrstch", false,-1, 63,0);
        tracep->declBit(c+310,"rvcpu ex_mem6 clk", false,-1);
        tracep->declBit(c+311,"rvcpu ex_mem6 rst", false,-1);
        tracep->declBus(c+22,"rvcpu ex_mem6 stall_ctrl", false,-1, 4,0);
        tracep->declBus(c+107,"rvcpu ex_mem6 ex_inst_type", false,-1, 7,0);
        tracep->declBit(c+106,"rvcpu ex_mem6 ex_rd_ena", false,-1);
        tracep->declQuad(c+2,"rvcpu ex_mem6 ex_rd_data", false,-1, 63,0);
        tracep->declBus(c+105,"rvcpu ex_mem6 ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+108,"rvcpu ex_mem6 ex_ls_sel", false,-1, 2,0);
        tracep->declQuad(c+109,"rvcpu ex_mem6 ex_ls_addr", false,-1, 63,0);
        tracep->declBus(c+129,"rvcpu ex_mem6 mem_inst_type", false,-1, 7,0);
        tracep->declBit(c+114,"rvcpu ex_mem6 mem_rd_ena", false,-1);
        tracep->declQuad(c+130,"rvcpu ex_mem6 mem_rd_data", false,-1, 63,0);
        tracep->declBus(c+113,"rvcpu ex_mem6 mem_rd_addr", false,-1, 4,0);
        tracep->declBus(c+132,"rvcpu ex_mem6 mem_ls_sel", false,-1, 2,0);
        tracep->declQuad(c+133,"rvcpu ex_mem6 mem_ls_addr", false,-1, 63,0);
        tracep->declBit(c+311,"rvcpu mem7 rst", false,-1);
        tracep->declBus(c+129,"rvcpu mem7 inst_type_i", false,-1, 7,0);
        tracep->declBit(c+114,"rvcpu mem7 rd_ena_i", false,-1);
        tracep->declQuad(c+130,"rvcpu mem7 rd_data_i", false,-1, 63,0);
        tracep->declBus(c+113,"rvcpu mem7 rd_addr_i", false,-1, 4,0);
        tracep->declQuad(c+133,"rvcpu mem7 ls_addr_i", false,-1, 63,0);
        tracep->declBus(c+132,"rvcpu mem7 ls_sel_i", false,-1, 2,0);
        tracep->declQuad(c+318,"rvcpu mem7 data_addr_o", false,-1, 63,0);
        tracep->declBus(c+320,"rvcpu mem7 wmask_o", false,-1, 7,0);
        tracep->declQuad(c+323,"rvcpu mem7 data_i", false,-1, 63,0);
        tracep->declQuad(c+321,"rvcpu mem7 data_o", false,-1, 63,0);
        tracep->declBit(c+325,"rvcpu mem7 we", false,-1);
        tracep->declBit(c+326,"rvcpu mem7 re", false,-1);
        tracep->declBit(c+327,"rvcpu mem7 mem_finish", false,-1);
        tracep->declBit(c+114,"rvcpu mem7 rd_ena_o", false,-1);
        tracep->declQuad(c+23,"rvcpu mem7 rd_data_o", false,-1, 63,0);
        tracep->declBus(c+113,"rvcpu mem7 rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+340,"rvcpu mem7 mem_stall_req", false,-1);
        tracep->declQuad(c+351,"rvcpu mem7 load_data", false,-1, 63,0);
        tracep->declBus(c+242,"rvcpu mem7 byte_sel", false,-1, 2,0);
        tracep->declBus(c+243,"rvcpu mem7 half_byte_sel", false,-1, 1,0);
        tracep->declBit(c+244,"rvcpu mem7 word_sel", false,-1);
        tracep->declBus(c+66,"rvcpu mem7 data_byte", false,-1, 7,0);
        tracep->declBus(c+67,"rvcpu mem7 data_half_byte", false,-1, 15,0);
        tracep->declBus(c+68,"rvcpu mem7 data_word", false,-1, 31,0);
        tracep->declQuad(c+69,"rvcpu mem7 store_data", false,-1, 63,0);
        tracep->declBus(c+71,"rvcpu mem7 store_mask", false,-1, 7,0);
        tracep->declQuad(c+353,"rvcpu mem7 sb_data", false,-1, 63,0);
        tracep->declQuad(c+355,"rvcpu mem7 sh_data", false,-1, 63,0);
        tracep->declQuad(c+357,"rvcpu mem7 sw_data", false,-1, 63,0);
        tracep->declBus(c+359,"rvcpu mem7 sb_mask", false,-1, 7,0);
        tracep->declBus(c+360,"rvcpu mem7 sh_mask", false,-1, 7,0);
        tracep->declBus(c+361,"rvcpu mem7 sw_mask", false,-1, 7,0);
        tracep->declBit(c+310,"rvcpu mem_wb8 clk", false,-1);
        tracep->declBit(c+311,"rvcpu mem_wb8 rst", false,-1);
        tracep->declBus(c+22,"rvcpu mem_wb8 stall_ctrl", false,-1, 4,0);
        tracep->declQuad(c+23,"rvcpu mem_wb8 mem_rd_data", false,-1, 63,0);
        tracep->declBus(c+113,"rvcpu mem_wb8 mem_rd_addr", false,-1, 4,0);
        tracep->declBit(c+114,"rvcpu mem_wb8 mem_rd_ena", false,-1);
        tracep->declQuad(c+117,"rvcpu mem_wb8 wb_rd_data", false,-1, 63,0);
        tracep->declBus(c+115,"rvcpu mem_wb8 wb_rd_addr", false,-1, 4,0);
        tracep->declBit(c+116,"rvcpu mem_wb8 wb_rd_ena", false,-1);
        tracep->declBit(c+311,"rvcpu ctrl9 rst", false,-1);
        tracep->declBit(c+1,"rvcpu ctrl9 if_stall_req", false,-1);
        tracep->declBit(c+335,"rvcpu ctrl9 id_stall_req", false,-1);
        tracep->declBit(c+72,"rvcpu ctrl9 ex_stall_req", false,-1);
        tracep->declBit(c+340,"rvcpu ctrl9 mem_stall_req", false,-1);
        tracep->declBus(c+22,"rvcpu ctrl9 stall_ctrl", false,-1, 4,0);
        tracep->declBit(c+310,"rvcpu regfile10 clk", false,-1);
        tracep->declBit(c+311,"rvcpu regfile10 rst", false,-1);
        tracep->declBus(c+115,"rvcpu regfile10 waddr", false,-1, 4,0);
        tracep->declQuad(c+117,"rvcpu regfile10 wdata", false,-1, 63,0);
        tracep->declBit(c+116,"rvcpu regfile10 we", false,-1);
        tracep->declBus(c+4,"rvcpu regfile10 raddr1", false,-1, 4,0);
        tracep->declQuad(c+336,"rvcpu regfile10 rdata1", false,-1, 63,0);
        tracep->declBit(c+5,"rvcpu regfile10 re1", false,-1);
        tracep->declBus(c+6,"rvcpu regfile10 raddr2", false,-1, 4,0);
        tracep->declQuad(c+338,"rvcpu regfile10 rdata2", false,-1, 63,0);
        tracep->declBit(c+7,"rvcpu regfile10 re2", false,-1);
        tracep->declBit(c+331,"rvcpu regfile10 x1_read_ena", false,-1);
        tracep->declQuad(c+329,"rvcpu regfile10 x1_data", false,-1, 63,0);
        tracep->declBus(c+332,"rvcpu regfile10 x1_addr", false,-1, 4,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+245+i*2,"rvcpu regfile10 regs", true,(i+0), 63,0);}}
        tracep->declBus(c+309,"rvcpu regfile10 i", false,-1, 31,0);
    }
}

void Vrvcpu___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vrvcpu___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vrvcpu___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vrvcpu___024root__traceRegister(Vrvcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vrvcpu___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vrvcpu___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vrvcpu___024root__traceCleanup, vlSelf);
    }
}

void Vrvcpu___024root__traceFullSub0(Vrvcpu___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vrvcpu___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vrvcpu___024root* const __restrict vlSelf = static_cast<Vrvcpu___024root*>(voidSelf);
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vrvcpu___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vrvcpu___024root__traceFullSub0(Vrvcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->rvcpu__DOT__if_stall_req));
        tracep->fullQData(oldp+2,(vlSelf->rvcpu__DOT__ex_id_rd_data),64);
        tracep->fullCData(oldp+4,(vlSelf->rvcpu__DOT__id_reg_addr1),5);
        tracep->fullBit(oldp+5,(vlSelf->rvcpu__DOT__id_reg_ena1));
        tracep->fullCData(oldp+6,(vlSelf->rvcpu__DOT__id_reg_addr2),5);
        tracep->fullBit(oldp+7,(vlSelf->rvcpu__DOT__id_reg_ena2));
        tracep->fullCData(oldp+8,(vlSelf->rvcpu__DOT__id_ex_type),8);
        tracep->fullCData(oldp+9,(vlSelf->rvcpu__DOT__id_ex_opcode),8);
        tracep->fullQData(oldp+10,(vlSelf->rvcpu__DOT__id_ex_op),64);
        tracep->fullQData(oldp+12,(vlSelf->rvcpu__DOT__id_ex_op2),64);
        tracep->fullBit(oldp+14,(vlSelf->rvcpu__DOT__id_ex_rd_ena));
        tracep->fullCData(oldp+15,(vlSelf->rvcpu__DOT__id_ex_rd_addr),5);
        tracep->fullQData(oldp+16,(vlSelf->rvcpu__DOT__id_ex_pc),64);
        tracep->fullSData(oldp+18,(vlSelf->rvcpu__DOT__id_ex_s_offset),12);
        tracep->fullCData(oldp+19,(vlSelf->rvcpu__DOT__id_ex_memsel),3);
        tracep->fullBit(oldp+20,(vlSelf->rvcpu__DOT__id_pip_jalrena));
        tracep->fullBit(oldp+21,(vlSelf->rvcpu__DOT__id_if_flush));
        tracep->fullCData(oldp+22,(vlSelf->rvcpu__DOT__stall_ctrl),5);
        tracep->fullQData(oldp+23,(vlSelf->rvcpu__DOT__mem_id_data),64);
        tracep->fullIData(oldp+25,(vlSelf->rvcpu__DOT__pip_fore0__DOT__j_imm),20);
        tracep->fullSData(oldp+26,(vlSelf->rvcpu__DOT__pip_fore0__DOT__b_imm),12);
        tracep->fullBit(oldp+27,(vlSelf->rvcpu__DOT__pip_fore0__DOT__inst_jalr));
        tracep->fullQData(oldp+28,(vlSelf->rvcpu__DOT__pip_fore0__DOT__j_pc),64);
        tracep->fullBit(oldp+30,((1U & (IData)(vlSelf->rvcpu__DOT__stall_ctrl))));
        tracep->fullBit(oldp+31,(vlSelf->rvcpu__DOT__id3__DOT__inst_lui));
        tracep->fullBit(oldp+32,(vlSelf->rvcpu__DOT__id3__DOT__inst_auipc));
        tracep->fullBit(oldp+33,(vlSelf->rvcpu__DOT__id3__DOT__inst_jal));
        tracep->fullBit(oldp+34,(vlSelf->rvcpu__DOT__id3__DOT__inst_jalr));
        tracep->fullBit(oldp+35,(vlSelf->rvcpu__DOT__id3__DOT__inst_jump));
        tracep->fullBit(oldp+36,(vlSelf->rvcpu__DOT__id3__DOT__inst_srai));
        tracep->fullBit(oldp+37,(vlSelf->rvcpu__DOT__id3__DOT__inst_addiw));
        tracep->fullBit(oldp+38,(vlSelf->rvcpu__DOT__id3__DOT__inst_slliw));
        tracep->fullBit(oldp+39,(vlSelf->rvcpu__DOT__id3__DOT__inst_srliw));
        tracep->fullBit(oldp+40,(vlSelf->rvcpu__DOT__id3__DOT__inst_sraiw));
        tracep->fullBit(oldp+41,(vlSelf->rvcpu__DOT__id3__DOT__inst_add));
        tracep->fullBit(oldp+42,(vlSelf->rvcpu__DOT__id3__DOT__inst_sub));
        tracep->fullBit(oldp+43,(vlSelf->rvcpu__DOT__id3__DOT__inst_sll));
        tracep->fullBit(oldp+44,(vlSelf->rvcpu__DOT__id3__DOT__inst_slt));
        tracep->fullBit(oldp+45,(vlSelf->rvcpu__DOT__id3__DOT__inst_sltu));
        tracep->fullBit(oldp+46,(vlSelf->rvcpu__DOT__id3__DOT__inst_xor));
        tracep->fullBit(oldp+47,(vlSelf->rvcpu__DOT__id3__DOT__inst_srl));
        tracep->fullBit(oldp+48,(vlSelf->rvcpu__DOT__id3__DOT__inst_sra));
        tracep->fullBit(oldp+49,(vlSelf->rvcpu__DOT__id3__DOT__inst_or));
        tracep->fullBit(oldp+50,(vlSelf->rvcpu__DOT__id3__DOT__inst_and));
        tracep->fullBit(oldp+51,(vlSelf->rvcpu__DOT__id3__DOT__inst_addw));
        tracep->fullBit(oldp+52,(vlSelf->rvcpu__DOT__id3__DOT__inst_subw));
        tracep->fullBit(oldp+53,(vlSelf->rvcpu__DOT__id3__DOT__inst_sllw));
        tracep->fullBit(oldp+54,(vlSelf->rvcpu__DOT__id3__DOT__inst_srlw));
        tracep->fullBit(oldp+55,(vlSelf->rvcpu__DOT__id3__DOT__inst_sraw));
        tracep->fullBit(oldp+56,(vlSelf->rvcpu__DOT__id3__DOT__inst_csrrw));
        tracep->fullBit(oldp+57,(vlSelf->rvcpu__DOT__id3__DOT__inst_csrrs));
        tracep->fullBit(oldp+58,(vlSelf->rvcpu__DOT__id3__DOT__inst_csrrc));
        tracep->fullBit(oldp+59,(vlSelf->rvcpu__DOT__id3__DOT__inst_csrrwi));
        tracep->fullBit(oldp+60,((((IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_csrrw) 
                                   | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_csrrs)) 
                                  | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_csrrc))));
        tracep->fullBit(oldp+61,(vlSelf->rvcpu__DOT__id3__DOT__ex_op1));
        tracep->fullBit(oldp+62,(vlSelf->rvcpu__DOT__id3__DOT__mem_op1));
        tracep->fullBit(oldp+63,((1U & ((IData)(vlSelf->rvcpu__DOT__stall_ctrl) 
                                        >> 3U))));
        tracep->fullQData(oldp+64,(vlSelf->rvcpu__DOT__ex5__DOT__exe_res),64);
        tracep->fullCData(oldp+66,(vlSelf->rvcpu__DOT__mem7__DOT__data_byte),8);
        tracep->fullSData(oldp+67,(vlSelf->rvcpu__DOT__mem7__DOT__data_half_byte),16);
        tracep->fullIData(oldp+68,(vlSelf->rvcpu__DOT__mem7__DOT__data_word),32);
        tracep->fullQData(oldp+69,(vlSelf->rvcpu__DOT__mem7__DOT__store_data),64);
        tracep->fullCData(oldp+71,(vlSelf->rvcpu__DOT__mem7__DOT__store_mask),8);
        tracep->fullBit(oldp+72,(((IData)(vlSelf->rvcpu__DOT__ex_pc_branchena) 
                                  & (IData)(vlSelf->rvcpu__DOT__if_stall_req))));
        tracep->fullQData(oldp+73,(((IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_jalr)
                                     ? (0xfffffffffffffffeULL 
                                        & ((((- (QData)((IData)(
                                                                (vlSelf->rvcpu__DOT__if_id_inst 
                                                                 >> 0x1fU)))) 
                                             << 0xcU) 
                                            | (QData)((IData)(
                                                              (vlSelf->rvcpu__DOT__if_id_inst 
                                                               >> 0x14U)))) 
                                           + vlSelf->rvcpu__DOT__id_ex_op))
                                     : 0ULL)),64);
        tracep->fullBit(oldp+75,((1U & (IData)(((0x10U 
                                                 == 
                                                 (0x10U 
                                                  & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                & (0U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->rvcpu__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+76,((1U & (IData)(((0x10U 
                                                 == 
                                                 (0x10U 
                                                  & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                & (0x2000U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->rvcpu__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+77,((1U & (IData)(((0x10U 
                                                 == 
                                                 (0x10U 
                                                  & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                & (0x3000U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->rvcpu__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+78,((1U & (IData)(((0x10U 
                                                 == 
                                                 (0x10U 
                                                  & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                & (0x4000U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->rvcpu__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+79,((1U & (IData)(((0x10U 
                                                 == 
                                                 (0x10U 
                                                  & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                & (0x6000U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->rvcpu__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+80,((1U & (IData)(((0x10U 
                                                 == 
                                                 (0x10U 
                                                  & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                & (0x7000U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->rvcpu__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+81,((1U & (IData)(((0x10U 
                                                 == 
                                                 (0x10U 
                                                  & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                & (0x1000U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->rvcpu__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+82,((1U & (IData)(((0x10U 
                                                 == 
                                                 (0x10U 
                                                  & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                & (0x5000U 
                                                   == 
                                                   (0x40007000U 
                                                    & vlSelf->rvcpu__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+83,((1U & (IData)(((4U 
                                                 == 
                                                 (4U 
                                                  & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                & (0U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->rvcpu__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+84,((1U & (IData)(((4U 
                                                 == 
                                                 (4U 
                                                  & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                & (0x1000U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->rvcpu__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+85,((1U & (IData)(((4U 
                                                 == 
                                                 (4U 
                                                  & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                & (0x4000U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->rvcpu__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+86,((1U & (IData)(((4U 
                                                 == 
                                                 (4U 
                                                  & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                & (0x5000U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->rvcpu__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+87,((1U & (IData)(((4U 
                                                 == 
                                                 (4U 
                                                  & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                & (0x6000U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->rvcpu__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+88,((1U & (IData)(((4U 
                                                 == 
                                                 (4U 
                                                  & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                & (0x7000U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->rvcpu__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+89,((1U & (IData)(((0x80U 
                                                 == 
                                                 (0x80U 
                                                  & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                & (0x6000U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->rvcpu__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+90,((1U & (IData)(((0x80U 
                                                 == 
                                                 (0x80U 
                                                  & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                & (0x7000U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->rvcpu__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+91,(((IData)(((0x80U == 
                                            (0x80U 
                                             & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                           & (0U == 
                                              (0x7000U 
                                               & vlSelf->rvcpu__DOT__if_id_inst)))) 
                                  & (0U == (vlSelf->rvcpu__DOT__if_id_inst 
                                            >> 0x14U)))));
        tracep->fullBit(oldp+92,(((IData)(((0x80U == 
                                            (0x80U 
                                             & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                           & (0U == 
                                              (0x7000U 
                                               & vlSelf->rvcpu__DOT__if_id_inst)))) 
                                  & (0x18U == (vlSelf->rvcpu__DOT__if_id_inst 
                                               >> 0x19U)))));
        tracep->fullBit(oldp+93,((((IData)(vlSelf->rvcpu__DOT__idex_ex_rdaddr) 
                                   == (IData)(vlSelf->rvcpu__DOT__id_reg_addr2)) 
                                  & (IData)(vlSelf->rvcpu__DOT__ex_id_rd_ena))));
        tracep->fullBit(oldp+94,((((IData)(vlSelf->rvcpu__DOT__exmem_mem_addr) 
                                   == (IData)(vlSelf->rvcpu__DOT__id_reg_addr2)) 
                                  & (IData)(vlSelf->rvcpu__DOT__exmem_mem_ena))));
        tracep->fullBit(oldp+95,((((IData)(vlSelf->rvcpu__DOT__wb_id_addr) 
                                   == (IData)(vlSelf->rvcpu__DOT__id_reg_addr1)) 
                                  & (IData)(vlSelf->rvcpu__DOT__wb_id_ena))));
        tracep->fullQData(oldp+96,(((((- (QData)((IData)(
                                                         (vlSelf->rvcpu__DOT__if_id_inst 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 (vlSelf->rvcpu__DOT__if_id_inst 
                                                                  >> 0x14U)))) 
                                    + vlSelf->rvcpu__DOT__id_ex_op)),64);
        tracep->fullBit(oldp+98,((1U & (((~ (IData)(vlSelf->rvcpu__DOT__id3__DOT__ex_op1)) 
                                         & (~ (IData)(vlSelf->rvcpu__DOT__id3__DOT__mem_op1))) 
                                        & (~ (((IData)(vlSelf->rvcpu__DOT__wb_id_addr) 
                                               == (IData)(vlSelf->rvcpu__DOT__id_reg_addr1)) 
                                              & (IData)(vlSelf->rvcpu__DOT__wb_id_ena)))))));
        tracep->fullQData(oldp+99,(vlSelf->rvcpu__DOT__pc),64);
        tracep->fullQData(oldp+101,(vlSelf->rvcpu__DOT__if_id_pc),64);
        tracep->fullIData(oldp+103,(vlSelf->rvcpu__DOT__if_id_inst),32);
        tracep->fullBit(oldp+104,(vlSelf->rvcpu__DOT__ex_pc_branchena));
        tracep->fullCData(oldp+105,(vlSelf->rvcpu__DOT__idex_ex_rdaddr),5);
        tracep->fullBit(oldp+106,(vlSelf->rvcpu__DOT__ex_id_rd_ena));
        tracep->fullCData(oldp+107,(vlSelf->rvcpu__DOT__ex_id_rd_type),8);
        tracep->fullCData(oldp+108,(vlSelf->rvcpu__DOT__idex_ex_sel),3);
        tracep->fullQData(oldp+109,(vlSelf->rvcpu__DOT__ex_mem_addr),64);
        tracep->fullQData(oldp+111,((((IData)(vlSelf->rvcpu__DOT__ex5__DOT__trap_ena) 
                                      | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__cmt_mret_ena))
                                      ? vlSelf->rvcpu__DOT__ex5__DOT__read_csr_data
                                      : ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__ex_flush_branch)
                                          ? (4ULL + vlSelf->rvcpu__DOT__idex_ex_pc)
                                          : 0ULL))),64);
        tracep->fullCData(oldp+113,(vlSelf->rvcpu__DOT__exmem_mem_addr),5);
        tracep->fullBit(oldp+114,(vlSelf->rvcpu__DOT__exmem_mem_ena));
        tracep->fullCData(oldp+115,(vlSelf->rvcpu__DOT__wb_id_addr),5);
        tracep->fullBit(oldp+116,(vlSelf->rvcpu__DOT__wb_id_ena));
        tracep->fullQData(oldp+117,(vlSelf->rvcpu__DOT__wb_regfile_data),64);
        tracep->fullQData(oldp+119,(vlSelf->rvcpu__DOT__idex_ex_pc),64);
        tracep->fullCData(oldp+121,(vlSelf->rvcpu__DOT__idex_ex_type),8);
        tracep->fullCData(oldp+122,(vlSelf->rvcpu__DOT__idex_ex_opcode),8);
        tracep->fullQData(oldp+123,(vlSelf->rvcpu__DOT__idex_ex_op1),64);
        tracep->fullQData(oldp+125,(vlSelf->rvcpu__DOT__idex_ex_op2),64);
        tracep->fullBit(oldp+127,(vlSelf->rvcpu__DOT__idex_ex_rdena));
        tracep->fullSData(oldp+128,(vlSelf->rvcpu__DOT__idex_ex_offset),12);
        tracep->fullCData(oldp+129,(vlSelf->rvcpu__DOT__exmem_mem_type),8);
        tracep->fullQData(oldp+130,(vlSelf->rvcpu__DOT__exmem_mem_data),64);
        tracep->fullCData(oldp+132,(vlSelf->rvcpu__DOT__exmem_mem_sel),3);
        tracep->fullQData(oldp+133,(vlSelf->rvcpu__DOT__exmem_mem_lsaddr),64);
        tracep->fullCData(oldp+135,((0x7fU & vlSelf->rvcpu__DOT__if_id_inst)),7);
        tracep->fullCData(oldp+136,((0x1fU & (vlSelf->rvcpu__DOT__if_id_inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+137,((7U & (vlSelf->rvcpu__DOT__if_id_inst 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+138,((0x1fU & (vlSelf->rvcpu__DOT__if_id_inst 
                                              >> 0xfU))),5);
        tracep->fullSData(oldp+139,((vlSelf->rvcpu__DOT__if_id_inst 
                                     >> 0x14U)),12);
        tracep->fullCData(oldp+140,((vlSelf->rvcpu__DOT__if_id_inst 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+141,((0x1fU & (vlSelf->rvcpu__DOT__if_id_inst 
                                              >> 0x14U))),5);
        tracep->fullIData(oldp+142,((vlSelf->rvcpu__DOT__if_id_inst 
                                     >> 0xcU)),20);
        tracep->fullSData(oldp+143,(((0xfe0U & (vlSelf->rvcpu__DOT__if_id_inst 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlSelf->rvcpu__DOT__if_id_inst 
                                                 >> 7U)))),12);
        tracep->fullQData(oldp+144,((1ULL + (~ vlSelf->rvcpu__DOT__idex_ex_op2))),64);
        tracep->fullQData(oldp+146,(vlSelf->rvcpu__DOT__ex5__DOT__op1_sub_op2),64);
        tracep->fullQData(oldp+148,(vlSelf->rvcpu__DOT__ex5__DOT__op1_add_op2),64);
        tracep->fullQData(oldp+150,(vlSelf->rvcpu__DOT__ex5__DOT__op1_addw_op2),64);
        tracep->fullBit(oldp+152,(vlSelf->rvcpu__DOT__ex5__DOT__op1_ls_op2));
        tracep->fullQData(oldp+153,(vlSelf->rvcpu__DOT__ex5__DOT__shift_res),64);
        tracep->fullIData(oldp+155,(vlSelf->rvcpu__DOT__ex5__DOT__op1_sllw_op2),32);
        tracep->fullQData(oldp+156,(vlSelf->rvcpu__DOT__ex5__DOT__sllw_res),64);
        tracep->fullIData(oldp+158,(vlSelf->rvcpu__DOT__ex5__DOT__op1_srlw_op2),32);
        tracep->fullQData(oldp+159,(vlSelf->rvcpu__DOT__ex5__DOT__srlw_res),64);
        tracep->fullIData(oldp+161,(vlSelf->rvcpu__DOT__ex5__DOT__op1_sraw_op2),32);
        tracep->fullQData(oldp+162,(vlSelf->rvcpu__DOT__ex5__DOT__sraw_res),64);
        tracep->fullIData(oldp+164,(vlSelf->rvcpu__DOT__ex5__DOT__op1_subw_op2),32);
        tracep->fullQData(oldp+165,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->rvcpu__DOT__ex5__DOT__op1_subw_op2 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->rvcpu__DOT__ex5__DOT__op1_subw_op2)))),64);
        tracep->fullQData(oldp+167,(vlSelf->rvcpu__DOT__ex5__DOT__upper_imm),64);
        tracep->fullBit(oldp+169,(vlSelf->rvcpu__DOT__ex5__DOT__ex_flush_branch));
        tracep->fullBit(oldp+170,(vlSelf->rvcpu__DOT__ex5__DOT__tmr_trap_ena));
        tracep->fullSData(oldp+171,(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx),12);
        tracep->fullQData(oldp+172,(vlSelf->rvcpu__DOT__ex5__DOT__read_csr_data),64);
        tracep->fullBit(oldp+174,(vlSelf->rvcpu__DOT__ex5__DOT__trap_ena));
        tracep->fullBit(oldp+175,(vlSelf->rvcpu__DOT__ex5__DOT__ecall_trap_ena));
        tracep->fullBit(oldp+176,(vlSelf->rvcpu__DOT__ex5__DOT__cmt_mret_ena));
        tracep->fullBit(oldp+177,(vlSelf->rvcpu__DOT__ex5__DOT__csr_wr_en));
        tracep->fullBit(oldp+178,(vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en));
        tracep->fullQData(oldp+179,(vlSelf->rvcpu__DOT__ex5__DOT__wbck_csr_data),64);
        tracep->fullQData(oldp+181,(vlSelf->rvcpu__DOT__ex5__DOT__trap_mcause_value),64);
        tracep->fullQData(oldp+183,((vlSelf->rvcpu__DOT__ex5__DOT__read_csr_data 
                                     | vlSelf->rvcpu__DOT__idex_ex_op1)),64);
        tracep->fullQData(oldp+185,((vlSelf->rvcpu__DOT__ex5__DOT__read_csr_data 
                                     & (~ vlSelf->rvcpu__DOT__idex_ex_op1))),64);
        tracep->fullBit(oldp+187,((0xb00U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+188,(((IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en) 
                                   & (0xb00U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)))));
        tracep->fullBit(oldp+189,(((IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_wr_en) 
                                   & (0xb00U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)))));
        tracep->fullQData(oldp+190,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mcycle),64);
        tracep->fullBit(oldp+192,((0x300U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+193,(((0x300U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+194,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__wr_mstatus));
        tracep->fullBit(oldp+195,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_ena));
        tracep->fullBit(oldp+196,((1U & (((IData)(vlSelf->rvcpu__DOT__ex5__DOT__ecall_trap_ena) 
                                          | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__tmr_trap_ena))
                                          ? (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)
                                          : ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__cmt_mret_ena) 
                                             | ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                 ? (IData)(
                                                           (vlSelf->rvcpu__DOT__ex5__DOT__wbck_csr_data 
                                                            >> 7U))
                                                 : (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)))))));
        tracep->fullBit(oldp+197,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie));
        tracep->fullBit(oldp+198,((1U & ((~ ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__ecall_trap_ena) 
                                             | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__tmr_trap_ena))) 
                                         & ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__cmt_mret_ena)
                                             ? (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)
                                             : ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                 ? (IData)(
                                                           (vlSelf->rvcpu__DOT__ex5__DOT__wbck_csr_data 
                                                            >> 3U))
                                                 : (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)))))));
        tracep->fullBit(oldp+199,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie));
        tracep->fullCData(oldp+200,((((IData)(vlSelf->rvcpu__DOT__ex5__DOT__ecall_trap_ena) 
                                      | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__tmr_trap_ena))
                                      ? 3U : ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__cmt_mret_ena)
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                      ? (IData)(
                                                                (vlSelf->rvcpu__DOT__ex5__DOT__wbck_csr_data 
                                                                 >> 0xbU))
                                                      : (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp)))))),2);
        tracep->fullCData(oldp+201,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp),2);
        tracep->fullCData(oldp+202,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs),2);
        tracep->fullBit(oldp+203,((3U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs))));
        tracep->fullQData(oldp+204,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus),64);
        tracep->fullBit(oldp+206,((0x305U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+207,(((((0x305U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                     & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en)) 
                                    | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__ecall_trap_ena)) 
                                   | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__tmr_trap_ena))));
        tracep->fullBit(oldp+208,(((0x305U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_wr_en))));
        tracep->fullQData(oldp+209,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base),62);
        tracep->fullQData(oldp+211,((vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base 
                                     << 2U)),64);
        tracep->fullBit(oldp+213,((0x341U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+214,((((0x341U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                    & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en)) 
                                   | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__cmt_mret_ena))));
        tracep->fullBit(oldp+215,(((((0x341U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                     & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_wr_en)) 
                                    | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__ecall_trap_ena)) 
                                   | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__tmr_trap_ena))));
        tracep->fullQData(oldp+216,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mepc),64);
        tracep->fullBit(oldp+218,((0x342U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+219,(((0x342U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+220,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__wr_mcause));
        tracep->fullBit(oldp+221,((((IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__wr_mcause) 
                                    | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__ecall_trap_ena)) 
                                   | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__tmr_trap_ena))));
        tracep->fullQData(oldp+222,((((IData)(vlSelf->rvcpu__DOT__ex5__DOT__ecall_trap_ena) 
                                      | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__tmr_trap_ena))
                                      ? vlSelf->rvcpu__DOT__ex5__DOT__trap_mcause_value
                                      : ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__wr_mcause)
                                          ? vlSelf->rvcpu__DOT__ex5__DOT__wbck_csr_data
                                          : vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mcause))),64);
        tracep->fullQData(oldp+224,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mcause),64);
        tracep->fullBit(oldp+226,((0x304U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+227,(((0x304U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+228,(((0x304U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_wr_en))));
        tracep->fullBit(oldp+229,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie));
        tracep->fullQData(oldp+230,(((QData)((IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie)) 
                                     << 7U)),64);
        tracep->fullBit(oldp+232,((0x344U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+233,(((0x344U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+234,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip));
        tracep->fullQData(oldp+235,((QData)((IData)(
                                                    ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip) 
                                                     << 7U)))),64);
        tracep->fullBit(oldp+237,((0x340U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+238,(((0x340U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+239,(((0x340U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_wr_en))));
        tracep->fullQData(oldp+240,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mscrstch),64);
        tracep->fullCData(oldp+242,((7U & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))),3);
        tracep->fullCData(oldp+243,((3U & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))),2);
        tracep->fullBit(oldp+244,((1U & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))));
        tracep->fullQData(oldp+245,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[0]),64);
        tracep->fullQData(oldp+247,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[1]),64);
        tracep->fullQData(oldp+249,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[2]),64);
        tracep->fullQData(oldp+251,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[3]),64);
        tracep->fullQData(oldp+253,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[4]),64);
        tracep->fullQData(oldp+255,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[5]),64);
        tracep->fullQData(oldp+257,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[6]),64);
        tracep->fullQData(oldp+259,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[7]),64);
        tracep->fullQData(oldp+261,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[8]),64);
        tracep->fullQData(oldp+263,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[9]),64);
        tracep->fullQData(oldp+265,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[10]),64);
        tracep->fullQData(oldp+267,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[11]),64);
        tracep->fullQData(oldp+269,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[12]),64);
        tracep->fullQData(oldp+271,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[13]),64);
        tracep->fullQData(oldp+273,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[14]),64);
        tracep->fullQData(oldp+275,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[15]),64);
        tracep->fullQData(oldp+277,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[16]),64);
        tracep->fullQData(oldp+279,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[17]),64);
        tracep->fullQData(oldp+281,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[18]),64);
        tracep->fullQData(oldp+283,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[19]),64);
        tracep->fullQData(oldp+285,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[20]),64);
        tracep->fullQData(oldp+287,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[21]),64);
        tracep->fullQData(oldp+289,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[22]),64);
        tracep->fullQData(oldp+291,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[23]),64);
        tracep->fullQData(oldp+293,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[24]),64);
        tracep->fullQData(oldp+295,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[25]),64);
        tracep->fullQData(oldp+297,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[26]),64);
        tracep->fullQData(oldp+299,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[27]),64);
        tracep->fullQData(oldp+301,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[28]),64);
        tracep->fullQData(oldp+303,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[29]),64);
        tracep->fullQData(oldp+305,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[30]),64);
        tracep->fullQData(oldp+307,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[31]),64);
        tracep->fullIData(oldp+309,(vlSelf->rvcpu__DOT__regfile10__DOT__i),32);
        tracep->fullBit(oldp+310,(vlSelf->clk));
        tracep->fullBit(oldp+311,(vlSelf->rst));
        tracep->fullQData(oldp+312,(vlSelf->inst_addr),64);
        tracep->fullBit(oldp+314,(vlSelf->inst_ena));
        tracep->fullBit(oldp+315,(vlSelf->inst_ready));
        tracep->fullIData(oldp+316,(vlSelf->inst),32);
        tracep->fullBit(oldp+317,(vlSelf->bui_inst_valid));
        tracep->fullQData(oldp+318,(vlSelf->data_addr),64);
        tracep->fullCData(oldp+320,(vlSelf->wmask),8);
        tracep->fullQData(oldp+321,(vlSelf->data_o),64);
        tracep->fullQData(oldp+323,(vlSelf->data_i),64);
        tracep->fullBit(oldp+325,(vlSelf->we));
        tracep->fullBit(oldp+326,(vlSelf->re));
        tracep->fullBit(oldp+327,(vlSelf->mem_finish));
        tracep->fullBit(oldp+328,(vlSelf->timer_intr));
        tracep->fullQData(oldp+329,((((IData)(vlSelf->rst) 
                                      & ((IData)(vlSelf->rst)
                                          ? 0U : (IData)(vlSelf->rvcpu__DOT__pip_fore0__DOT__inst_jalr)))
                                      ? ((((IData)(vlSelf->rvcpu__DOT__wb_id_addr) 
                                           == (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 0xfU))) 
                                          & (IData)(vlSelf->rvcpu__DOT__wb_id_ena))
                                          ? vlSelf->rvcpu__DOT__wb_regfile_data
                                          : vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                         [vlSelf->rvcpu__DOT__id_reg_addr1])
                                      : 0ULL)),64);
        tracep->fullBit(oldp+331,(((IData)(vlSelf->rst)
                                    ? 0U : (1U & (IData)(vlSelf->rvcpu__DOT__pip_fore0__DOT__inst_jalr)))));
        tracep->fullCData(oldp+332,((0x1fU & (vlSelf->inst 
                                              >> 0xfU))),5);
        tracep->fullQData(oldp+333,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((IData)(vlSelf->rvcpu__DOT__pip_fore0__DOT__inst_jalr)
                                                 ? 
                                                (0xfffffffffffffffeULL 
                                                 & vlSelf->rvcpu__DOT__pip_fore0__DOT__j_pc)
                                                 : vlSelf->rvcpu__DOT__pip_fore0__DOT__j_pc))),64);
        tracep->fullBit(oldp+335,(((IData)(vlSelf->rst)
                                    ? 0U : (1U & ((
                                                   ((IData)(vlSelf->rst)
                                                     ? 0U
                                                     : 
                                                    (1U 
                                                     & (((IData)(vlSelf->rvcpu__DOT__id_reg_ena1) 
                                                         & (2U 
                                                            == (IData)(vlSelf->rvcpu__DOT__ex_id_rd_type))) 
                                                        & ((IData)(vlSelf->rvcpu__DOT__id_reg_addr1) 
                                                           == (IData)(vlSelf->rvcpu__DOT__idex_ex_rdaddr))))) 
                                                   | ((IData)(vlSelf->rst)
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & (((IData)(vlSelf->rvcpu__DOT__id_reg_ena2) 
                                                           & (2U 
                                                              == (IData)(vlSelf->rvcpu__DOT__ex_id_rd_type))) 
                                                          & ((IData)(vlSelf->rvcpu__DOT__id_reg_addr2) 
                                                             == (IData)(vlSelf->rvcpu__DOT__idex_ex_rdaddr)))))) 
                                                  | ((IData)(vlSelf->rvcpu__DOT__id_if_flush) 
                                                     & (IData)(vlSelf->rvcpu__DOT__if_stall_req)))))));
        tracep->fullQData(oldp+336,((((IData)(vlSelf->rst) 
                                      & (IData)(vlSelf->rvcpu__DOT__id_reg_ena1))
                                      ? ((((IData)(vlSelf->rvcpu__DOT__wb_id_addr) 
                                           == (IData)(vlSelf->rvcpu__DOT__id_reg_addr1)) 
                                          & (IData)(vlSelf->rvcpu__DOT__wb_id_ena))
                                          ? vlSelf->rvcpu__DOT__wb_regfile_data
                                          : vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                         [vlSelf->rvcpu__DOT__id_reg_addr1])
                                      : 0ULL)),64);
        tracep->fullQData(oldp+338,((((IData)(vlSelf->rst) 
                                      & (IData)(vlSelf->rvcpu__DOT__id_reg_ena2))
                                      ? ((((IData)(vlSelf->rvcpu__DOT__wb_id_addr) 
                                           == (IData)(vlSelf->rvcpu__DOT__id_reg_addr2)) 
                                          & (IData)(vlSelf->rvcpu__DOT__wb_id_ena))
                                          ? vlSelf->rvcpu__DOT__wb_regfile_data
                                          : vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                         [vlSelf->rvcpu__DOT__id_reg_addr2])
                                      : 0ULL)),64);
        tracep->fullBit(oldp+340,(((~ (IData)(vlSelf->rst)) 
                                   & (((IData)(vlSelf->re) 
                                       | (IData)(vlSelf->we)) 
                                      & (~ (IData)(vlSelf->mem_finish))))));
        tracep->fullSData(oldp+341,((vlSelf->inst >> 0x14U)),12);
        tracep->fullCData(oldp+342,((0x7fU & vlSelf->inst)),7);
        tracep->fullBit(oldp+343,((IData)((0x6fU == 
                                           (0x7fU & vlSelf->inst)))));
        tracep->fullBit(oldp+344,((IData)((0x63U == 
                                           (0x7fU & vlSelf->inst)))));
        tracep->fullQData(oldp+345,(((IData)(vlSelf->rvcpu__DOT__pip_fore0__DOT__inst_jalr)
                                      ? (((IData)(vlSelf->rst) 
                                          & ((IData)(vlSelf->rst)
                                              ? 0U : (IData)(vlSelf->rvcpu__DOT__pip_fore0__DOT__inst_jalr)))
                                          ? ((((IData)(vlSelf->rvcpu__DOT__wb_id_addr) 
                                               == (0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 0xfU))) 
                                              & (IData)(vlSelf->rvcpu__DOT__wb_id_ena))
                                              ? vlSelf->rvcpu__DOT__wb_regfile_data
                                              : vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                             [vlSelf->rvcpu__DOT__id_reg_addr1])
                                          : 0ULL) : vlSelf->rvcpu__DOT__pc)),64);
        tracep->fullQData(oldp+347,(((IData)((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->inst)))
                                      ? (((- (QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->rvcpu__DOT__pip_fore0__DOT__j_imm 
                                                                 >> 0x13U))))) 
                                          << 0x14U) 
                                         | (QData)((IData)(
                                                           (0xfffffU 
                                                            & (vlSelf->rvcpu__DOT__pip_fore0__DOT__j_imm 
                                                               << 1U)))))
                                      : ((IData)((0x63U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->inst)))
                                          ? (((- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->rvcpu__DOT__pip_fore0__DOT__b_imm) 
                                                                     >> 0xbU))))) 
                                              << 0xcU) 
                                             | (QData)((IData)(
                                                               (0xfffU 
                                                                & ((IData)(vlSelf->rvcpu__DOT__pip_fore0__DOT__b_imm) 
                                                                   << 1U)))))
                                          : ((IData)(vlSelf->rvcpu__DOT__pip_fore0__DOT__inst_jalr)
                                              ? (((- (QData)((IData)(
                                                                     (vlSelf->inst 
                                                                      >> 0x1fU)))) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   (vlSelf->inst 
                                                                    >> 0x14U))))
                                              : 4ULL)))),64);
        tracep->fullBit(oldp+349,(((IData)(vlSelf->rst)
                                    ? 0U : (1U & (((IData)(vlSelf->rvcpu__DOT__id_reg_ena1) 
                                                   & (2U 
                                                      == (IData)(vlSelf->rvcpu__DOT__ex_id_rd_type))) 
                                                  & ((IData)(vlSelf->rvcpu__DOT__id_reg_addr1) 
                                                     == (IData)(vlSelf->rvcpu__DOT__idex_ex_rdaddr)))))));
        tracep->fullBit(oldp+350,(((IData)(vlSelf->rst)
                                    ? 0U : (1U & (((IData)(vlSelf->rvcpu__DOT__id_reg_ena2) 
                                                   & (2U 
                                                      == (IData)(vlSelf->rvcpu__DOT__ex_id_rd_type))) 
                                                  & ((IData)(vlSelf->rvcpu__DOT__id_reg_addr2) 
                                                     == (IData)(vlSelf->rvcpu__DOT__idex_ex_rdaddr)))))));
        tracep->fullQData(oldp+351,(((2U == (IData)(vlSelf->rvcpu__DOT__exmem_mem_type))
                                      ? ((4U & (IData)(vlSelf->rvcpu__DOT__exmem_mem_sel))
                                          ? ((2U & (IData)(vlSelf->rvcpu__DOT__exmem_mem_sel))
                                              ? ((1U 
                                                  & (IData)(vlSelf->rvcpu__DOT__exmem_mem_sel))
                                                  ? 0ULL
                                                  : (QData)((IData)(vlSelf->rvcpu__DOT__mem7__DOT__data_word)))
                                              : ((1U 
                                                  & (IData)(vlSelf->rvcpu__DOT__exmem_mem_sel))
                                                  ? (QData)((IData)(vlSelf->rvcpu__DOT__mem7__DOT__data_half_byte))
                                                  : (QData)((IData)(vlSelf->rvcpu__DOT__mem7__DOT__data_byte))))
                                          : ((2U & (IData)(vlSelf->rvcpu__DOT__exmem_mem_sel))
                                              ? ((1U 
                                                  & (IData)(vlSelf->rvcpu__DOT__exmem_mem_sel))
                                                  ? vlSelf->data_i
                                                  : 
                                                 (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (vlSelf->rvcpu__DOT__mem7__DOT__data_word 
                                                                               >> 0x1fU))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->rvcpu__DOT__mem7__DOT__data_word))))
                                              : ((1U 
                                                  & (IData)(vlSelf->rvcpu__DOT__exmem_mem_sel))
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->rvcpu__DOT__mem7__DOT__data_half_byte) 
                                                                          >> 0xfU))))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(vlSelf->rvcpu__DOT__mem7__DOT__data_half_byte)))
                                                  : 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->rvcpu__DOT__mem7__DOT__data_byte) 
                                                                          >> 7U))))) 
                                                   << 8U) 
                                                  | (QData)((IData)(vlSelf->rvcpu__DOT__mem7__DOT__data_byte))))))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+353,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((1U 
                                                 & (IData)(
                                                           (vlSelf->rvcpu__DOT__exmem_mem_lsaddr 
                                                            >> 2U)))
                                                 ? 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->rvcpu__DOT__exmem_mem_lsaddr 
                                                             >> 1U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->rvcpu__DOT__exmem_mem_data)))) 
                                                   << 0x38U)
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->rvcpu__DOT__exmem_mem_data)))) 
                                                   << 0x30U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->rvcpu__DOT__exmem_mem_data)))) 
                                                   << 0x28U)
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->rvcpu__DOT__exmem_mem_data)))) 
                                                   << 0x20U)))
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->rvcpu__DOT__exmem_mem_lsaddr 
                                                             >> 1U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->rvcpu__DOT__exmem_mem_data)))) 
                                                   << 0x18U)
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->rvcpu__DOT__exmem_mem_data)))) 
                                                   << 0x10U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->rvcpu__DOT__exmem_mem_data)))) 
                                                   << 8U)
                                                   : (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->rvcpu__DOT__exmem_mem_data))))))))),64);
        tracep->fullQData(oldp+355,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr)))
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->rvcpu__DOT__exmem_mem_data))))
                                                 : 
                                                ((1U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr)))
                                                  ? 
                                                 ((QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->rvcpu__DOT__exmem_mem_data)))) 
                                                  << 0x10U)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr)))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->rvcpu__DOT__exmem_mem_data)))) 
                                                   << 0x20U)
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->rvcpu__DOT__exmem_mem_data)))) 
                                                   << 0x30U)))))),64);
        tracep->fullQData(oldp+357,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((1U 
                                                 & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))
                                                 ? 
                                                ((QData)((IData)(vlSelf->rvcpu__DOT__exmem_mem_data)) 
                                                 << 0x20U)
                                                 : (QData)((IData)(vlSelf->rvcpu__DOT__exmem_mem_data))))),64);
        tracep->fullCData(oldp+359,(((IData)(vlSelf->rst)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->rvcpu__DOT__exmem_mem_lsaddr 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->rvcpu__DOT__exmem_mem_lsaddr 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))
                                                    ? 0x80U
                                                    : 0x40U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))
                                                    ? 0x20U
                                                    : 0x10U))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->rvcpu__DOT__exmem_mem_lsaddr 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))
                                                    ? 8U
                                                    : 4U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))
                                                    ? 2U
                                                    : 1U))))),8);
        tracep->fullCData(oldp+360,(((IData)(vlSelf->rst)
                                      ? 0U : ((0U == 
                                               (3U 
                                                & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr)))
                                               ? 3U
                                               : ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr)))
                                                   ? 0xcU
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr)))
                                                    ? 0x30U
                                                    : 0xc0U))))),8);
        tracep->fullCData(oldp+361,(((IData)(vlSelf->rst)
                                      ? 0U : ((1U & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))
                                               ? 0xf0U
                                               : 0xfU))),8);
        tracep->fullCData(oldp+362,(0U),2);
    }
}
