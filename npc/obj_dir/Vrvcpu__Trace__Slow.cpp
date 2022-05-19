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
        tracep->declBit(c+329,"clk", false,-1);
        tracep->declBit(c+330,"rst", false,-1);
        tracep->declQuad(c+331,"inst_addr", false,-1, 63,0);
        tracep->declBit(c+333,"inst_ena", false,-1);
        tracep->declBit(c+334,"inst_ready", false,-1);
        tracep->declBus(c+335,"inst", false,-1, 31,0);
        tracep->declBit(c+336,"bui_inst_valid", false,-1);
        tracep->declQuad(c+337,"data_addr", false,-1, 63,0);
        tracep->declBus(c+339,"wmask", false,-1, 7,0);
        tracep->declQuad(c+340,"data_o", false,-1, 63,0);
        tracep->declQuad(c+342,"data_i", false,-1, 63,0);
        tracep->declBit(c+344,"we", false,-1);
        tracep->declBit(c+345,"re", false,-1);
        tracep->declBit(c+346,"mem_finish", false,-1);
        tracep->declBit(c+347,"timer_intr", false,-1);
        tracep->declBit(c+329,"rvcpu clk", false,-1);
        tracep->declBit(c+330,"rvcpu rst", false,-1);
        tracep->declQuad(c+331,"rvcpu inst_addr", false,-1, 63,0);
        tracep->declBit(c+333,"rvcpu inst_ena", false,-1);
        tracep->declBit(c+334,"rvcpu inst_ready", false,-1);
        tracep->declBus(c+335,"rvcpu inst", false,-1, 31,0);
        tracep->declBit(c+336,"rvcpu bui_inst_valid", false,-1);
        tracep->declQuad(c+337,"rvcpu data_addr", false,-1, 63,0);
        tracep->declBus(c+339,"rvcpu wmask", false,-1, 7,0);
        tracep->declQuad(c+340,"rvcpu data_o", false,-1, 63,0);
        tracep->declQuad(c+342,"rvcpu data_i", false,-1, 63,0);
        tracep->declBit(c+344,"rvcpu we", false,-1);
        tracep->declBit(c+345,"rvcpu re", false,-1);
        tracep->declBit(c+346,"rvcpu mem_finish", false,-1);
        tracep->declBit(c+347,"rvcpu timer_intr", false,-1);
        tracep->declQuad(c+348,"rvcpu pip_regfile_x1", false,-1, 63,0);
        tracep->declBit(c+350,"rvcpu pip_refflie_x1_ena", false,-1);
        tracep->declBus(c+351,"rvcpu pip_regfile_x1_addr", false,-1, 4,0);
        tracep->declQuad(c+352,"rvcpu pip_pc", false,-1, 63,0);
        tracep->declBit(c+1,"rvcpu if_stall_req", false,-1);
        tracep->declQuad(c+107,"rvcpu if_id_pc", false,-1, 63,0);
        tracep->declBus(c+109,"rvcpu if_id_inst", false,-1, 31,0);
        tracep->declBit(c+110,"rvcpu ex_flush", false,-1);
        tracep->declQuad(c+2,"rvcpu ex_id_rd_data", false,-1, 63,0);
        tracep->declBus(c+111,"rvcpu ex_id_rd_addr", false,-1, 4,0);
        tracep->declBit(c+112,"rvcpu ex_id_rd_ena", false,-1);
        tracep->declBus(c+113,"rvcpu ex_id_rd_type", false,-1, 7,0);
        tracep->declBus(c+114,"rvcpu ex_mem_sel", false,-1, 2,0);
        tracep->declQuad(c+115,"rvcpu ex_mem_addr", false,-1, 63,0);
        tracep->declBit(c+110,"rvcpu ex_pc_branchena", false,-1);
        tracep->declQuad(c+117,"rvcpu ex_pc_branchpc", false,-1, 63,0);
        tracep->declBit(c+80,"rvcpu ex_ctrl_req", false,-1);
        tracep->declBus(c+4,"rvcpu id_reg_addr1", false,-1, 4,0);
        tracep->declBit(c+5,"rvcpu id_reg_ena1", false,-1);
        tracep->declBus(c+6,"rvcpu id_reg_addr2", false,-1, 4,0);
        tracep->declBit(c+7,"rvcpu id_reg_ena2", false,-1);
        tracep->declBit(c+354,"rvcpu id_ctrl_req", false,-1);
        tracep->declBus(c+8,"rvcpu id_ex_type", false,-1, 7,0);
        tracep->declBus(c+9,"rvcpu id_ex_opcode", false,-1, 7,0);
        tracep->declQuad(c+10,"rvcpu id_ex_op", false,-1, 63,0);
        tracep->declQuad(c+12,"rvcpu id_ex_op2", false,-1, 63,0);
        tracep->declBit(c+14,"rvcpu id_ex_rd_ena", false,-1);
        tracep->declBus(c+15,"rvcpu id_ex_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+16,"rvcpu id_ex_pc", false,-1, 63,0);
        tracep->declBus(c+18,"rvcpu id_ex_s_offset", false,-1, 11,0);
        tracep->declBus(c+19,"rvcpu id_ex_memsel", false,-1, 2,0);
        tracep->declQuad(c+81,"rvcpu id_pip_jalrpc", false,-1, 63,0);
        tracep->declBit(c+20,"rvcpu id_pip_jalrena", false,-1);
        tracep->declBit(c+21,"rvcpu id_if_flush", false,-1);
        tracep->declBus(c+22,"rvcpu stall_ctrl", false,-1, 4,0);
        tracep->declQuad(c+355,"rvcpu regs_id_data1", false,-1, 63,0);
        tracep->declQuad(c+357,"rvcpu regs_id_data2", false,-1, 63,0);
        tracep->declQuad(c+23,"rvcpu mem_id_data", false,-1, 63,0);
        tracep->declBus(c+119,"rvcpu mem_id_addr", false,-1, 4,0);
        tracep->declBit(c+120,"rvcpu mem_id_ena", false,-1);
        tracep->declBit(c+359,"rvcpu mem_ctrl_req", false,-1);
        tracep->declBus(c+121,"rvcpu wb_id_addr", false,-1, 4,0);
        tracep->declBit(c+122,"rvcpu wb_id_ena", false,-1);
        tracep->declQuad(c+123,"rvcpu wb_regfile_data", false,-1, 63,0);
        tracep->declQuad(c+125,"rvcpu idex_ex_pc", false,-1, 63,0);
        tracep->declBus(c+127,"rvcpu idex_ex_type", false,-1, 7,0);
        tracep->declBus(c+128,"rvcpu idex_ex_opcode", false,-1, 7,0);
        tracep->declQuad(c+129,"rvcpu idex_ex_op1", false,-1, 63,0);
        tracep->declQuad(c+131,"rvcpu idex_ex_op2", false,-1, 63,0);
        tracep->declBit(c+133,"rvcpu idex_ex_rdena", false,-1);
        tracep->declBus(c+111,"rvcpu idex_ex_rdaddr", false,-1, 4,0);
        tracep->declBus(c+134,"rvcpu idex_ex_offset", false,-1, 11,0);
        tracep->declBus(c+114,"rvcpu idex_ex_sel", false,-1, 2,0);
        tracep->declBus(c+135,"rvcpu exmem_mem_type", false,-1, 7,0);
        tracep->declBit(c+120,"rvcpu exmem_mem_ena", false,-1);
        tracep->declQuad(c+136,"rvcpu exmem_mem_data", false,-1, 63,0);
        tracep->declBus(c+119,"rvcpu exmem_mem_addr", false,-1, 4,0);
        tracep->declBus(c+138,"rvcpu exmem_mem_sel", false,-1, 2,0);
        tracep->declQuad(c+139,"rvcpu exmem_mem_lsaddr", false,-1, 63,0);
        tracep->declQuad(c+25,"rvcpu ex_ex_mem_pc", false,-1, 63,0);
        tracep->declQuad(c+141,"rvcpu ex_mem_mem_pc", false,-1, 63,0);
        tracep->declQuad(c+27,"rvcpu mem_mem_wb_pc", false,-1, 63,0);
        tracep->declBus(c+29,"rvcpu id_id_ex_inst", false,-1, 31,0);
        tracep->declBus(c+143,"rvcpu id_ex_ex_inst", false,-1, 31,0);
        tracep->declBus(c+30,"rvcpu ex_ex_mem_inst", false,-1, 31,0);
        tracep->declBus(c+144,"rvcpu ex_mem_mem_inst", false,-1, 31,0);
        tracep->declBus(c+31,"rvcpu mem_mem_wb_inst", false,-1, 31,0);
        tracep->declBit(c+330,"rvcpu pip_fore0 rst", false,-1);
        tracep->declQuad(c+331,"rvcpu pip_fore0 pc_i", false,-1, 63,0);
        tracep->declBus(c+335,"rvcpu pip_fore0 inst", false,-1, 31,0);
        tracep->declQuad(c+348,"rvcpu pip_fore0 x1_data", false,-1, 63,0);
        tracep->declQuad(c+352,"rvcpu pip_fore0 pc_o", false,-1, 63,0);
        tracep->declBus(c+351,"rvcpu pip_fore0 x1_addr", false,-1, 4,0);
        tracep->declBit(c+350,"rvcpu pip_fore0 x1_ena", false,-1);
        tracep->declBus(c+32,"rvcpu pip_fore0 j_imm", false,-1, 20,1);
        tracep->declBus(c+360,"rvcpu pip_fore0 i_imm", false,-1, 11,0);
        tracep->declBus(c+33,"rvcpu pip_fore0 b_imm", false,-1, 12,1);
        tracep->declBus(c+361,"rvcpu pip_fore0 opcode", false,-1, 6,0);
        tracep->declBit(c+362,"rvcpu pip_fore0 inst_jal", false,-1);
        tracep->declBit(c+34,"rvcpu pip_fore0 inst_jalr", false,-1);
        tracep->declBit(c+363,"rvcpu pip_fore0 inst_bxx", false,-1);
        tracep->declQuad(c+364,"rvcpu pip_fore0 operand1", false,-1, 63,0);
        tracep->declQuad(c+366,"rvcpu pip_fore0 operand2", false,-1, 63,0);
        tracep->declQuad(c+35,"rvcpu pip_fore0 j_pc", false,-1, 63,0);
        tracep->declBit(c+329,"rvcpu pc1 clk", false,-1);
        tracep->declBit(c+330,"rvcpu pc1 rst", false,-1);
        tracep->declQuad(c+352,"rvcpu pc1 static_pc_i", false,-1, 63,0);
        tracep->declQuad(c+81,"rvcpu pc1 id_pc_i", false,-1, 63,0);
        tracep->declBit(c+20,"rvcpu pc1 id_pc_ena", false,-1);
        tracep->declQuad(c+117,"rvcpu pc1 ex_pc_i", false,-1, 63,0);
        tracep->declBit(c+110,"rvcpu pc1 ex_pc_ena", false,-1);
        tracep->declBit(c+37,"rvcpu pc1 pc_stall", false,-1);
        tracep->declQuad(c+331,"rvcpu pc1 pc", false,-1, 63,0);
        tracep->declBit(c+333,"rvcpu pc1 ce", false,-1);
        tracep->declBit(c+329,"rvcpu if_id2 clk", false,-1);
        tracep->declBit(c+330,"rvcpu if_id2 rst", false,-1);
        tracep->declQuad(c+331,"rvcpu if_id2 if_pc", false,-1, 63,0);
        tracep->declBus(c+335,"rvcpu if_id2 if_inst", false,-1, 31,0);
        tracep->declBit(c+110,"rvcpu if_id2 if_id_flush", false,-1);
        tracep->declBit(c+21,"rvcpu if_id2 if_id_bubble", false,-1);
        tracep->declBit(c+336,"rvcpu if_id2 if_inst_valid", false,-1);
        tracep->declBit(c+334,"rvcpu if_id2 if_inst_ready", false,-1);
        tracep->declBus(c+22,"rvcpu if_id2 stall_ctrl", false,-1, 4,0);
        tracep->declBit(c+1,"rvcpu if_id2 if_stall_req", false,-1);
        tracep->declQuad(c+107,"rvcpu if_id2 id_pc", false,-1, 63,0);
        tracep->declBus(c+109,"rvcpu if_id2 id_inst", false,-1, 31,0);
        tracep->declBit(c+330,"rvcpu id3 rst", false,-1);
        tracep->declBus(c+109,"rvcpu id3 inst_i", false,-1, 31,0);
        tracep->declQuad(c+107,"rvcpu id3 pc_i", false,-1, 63,0);
        tracep->declQuad(c+355,"rvcpu id3 op1_data_i", false,-1, 63,0);
        tracep->declQuad(c+357,"rvcpu id3 op2_data_i", false,-1, 63,0);
        tracep->declBus(c+4,"rvcpu id3 op1_addr_o", false,-1, 4,0);
        tracep->declBus(c+6,"rvcpu id3 op2_addr_o", false,-1, 4,0);
        tracep->declBit(c+5,"rvcpu id3 op1_read_o", false,-1);
        tracep->declBit(c+7,"rvcpu id3 op2_read_o", false,-1);
        tracep->declQuad(c+2,"rvcpu id3 ex_rd_data", false,-1, 63,0);
        tracep->declBus(c+111,"rvcpu id3 ex_rd_addr", false,-1, 4,0);
        tracep->declBit(c+112,"rvcpu id3 ex_rd_ena", false,-1);
        tracep->declBus(c+113,"rvcpu id3 ex_inst_type", false,-1, 7,0);
        tracep->declQuad(c+23,"rvcpu id3 mem_rd_data", false,-1, 63,0);
        tracep->declBus(c+119,"rvcpu id3 mem_rd_addr", false,-1, 4,0);
        tracep->declBit(c+120,"rvcpu id3 mem_rd_ena", false,-1);
        tracep->declBit(c+122,"rvcpu id3 wb_rd_ena", false,-1);
        tracep->declBus(c+121,"rvcpu id3 wb_rd_addr", false,-1, 4,0);
        tracep->declBit(c+354,"rvcpu id3 id_stall_req", false,-1);
        tracep->declBit(c+1,"rvcpu id3 if_stall_req", false,-1);
        tracep->declBus(c+8,"rvcpu id3 inst_type", false,-1, 7,0);
        tracep->declBus(c+9,"rvcpu id3 inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+10,"rvcpu id3 op1_o", false,-1, 63,0);
        tracep->declQuad(c+12,"rvcpu id3 op2_o", false,-1, 63,0);
        tracep->declBit(c+14,"rvcpu id3 rd_w_ena", false,-1);
        tracep->declBus(c+15,"rvcpu id3 rd_w_addr", false,-1, 4,0);
        tracep->declQuad(c+16,"rvcpu id3 pc_o", false,-1, 63,0);
        tracep->declBus(c+29,"rvcpu id3 inst_o", false,-1, 31,0);
        tracep->declBus(c+18,"rvcpu id3 store_addr_offset", false,-1, 11,0);
        tracep->declBus(c+19,"rvcpu id3 mem_op_sel", false,-1, 2,0);
        tracep->declBit(c+20,"rvcpu id3 jalr_pc_ena", false,-1);
        tracep->declQuad(c+81,"rvcpu id3 jalr_pc", false,-1, 63,0);
        tracep->declBit(c+21,"rvcpu id3 id_flush", false,-1);
        tracep->declBus(c+145,"rvcpu id3 opcode", false,-1, 6,0);
        tracep->declBus(c+146,"rvcpu id3 rd", false,-1, 4,0);
        tracep->declBus(c+147,"rvcpu id3 funct3", false,-1, 2,0);
        tracep->declBus(c+148,"rvcpu id3 rs1", false,-1, 4,0);
        tracep->declBus(c+149,"rvcpu id3 imm", false,-1, 11,0);
        tracep->declBus(c+150,"rvcpu id3 funct7", false,-1, 6,0);
        tracep->declBus(c+151,"rvcpu id3 rs2", false,-1, 4,0);
        tracep->declBus(c+152,"rvcpu id3 u_imm", false,-1, 19,0);
        tracep->declBus(c+153,"rvcpu id3 s_imm", false,-1, 11,0);
        tracep->declBit(c+38,"rvcpu id3 inst_lui", false,-1);
        tracep->declBit(c+39,"rvcpu id3 inst_auipc", false,-1);
        tracep->declBit(c+40,"rvcpu id3 inst_jal", false,-1);
        tracep->declBit(c+41,"rvcpu id3 inst_jalr", false,-1);
        tracep->declBit(c+42,"rvcpu id3 inst_jump", false,-1);
        tracep->declBit(c+83,"rvcpu id3 inst_addi", false,-1);
        tracep->declBit(c+84,"rvcpu id3 inst_slti", false,-1);
        tracep->declBit(c+85,"rvcpu id3 inst_sltiu", false,-1);
        tracep->declBit(c+86,"rvcpu id3 inst_xori", false,-1);
        tracep->declBit(c+87,"rvcpu id3 inst_ori", false,-1);
        tracep->declBit(c+88,"rvcpu id3 inst_andi", false,-1);
        tracep->declBit(c+89,"rvcpu id3 inst_slli", false,-1);
        tracep->declBit(c+90,"rvcpu id3 inst_srli", false,-1);
        tracep->declBit(c+43,"rvcpu id3 inst_srai", false,-1);
        tracep->declBit(c+44,"rvcpu id3 inst_addiw", false,-1);
        tracep->declBit(c+45,"rvcpu id3 inst_slliw", false,-1);
        tracep->declBit(c+46,"rvcpu id3 inst_srliw", false,-1);
        tracep->declBit(c+47,"rvcpu id3 inst_sraiw", false,-1);
        tracep->declBit(c+48,"rvcpu id3 inst_add", false,-1);
        tracep->declBit(c+49,"rvcpu id3 inst_sub", false,-1);
        tracep->declBit(c+50,"rvcpu id3 inst_sll", false,-1);
        tracep->declBit(c+51,"rvcpu id3 inst_slt", false,-1);
        tracep->declBit(c+52,"rvcpu id3 inst_sltu", false,-1);
        tracep->declBit(c+53,"rvcpu id3 inst_xor", false,-1);
        tracep->declBit(c+54,"rvcpu id3 inst_srl", false,-1);
        tracep->declBit(c+55,"rvcpu id3 inst_sra", false,-1);
        tracep->declBit(c+56,"rvcpu id3 inst_or", false,-1);
        tracep->declBit(c+57,"rvcpu id3 inst_and", false,-1);
        tracep->declBit(c+58,"rvcpu id3 inst_addw", false,-1);
        tracep->declBit(c+59,"rvcpu id3 inst_subw", false,-1);
        tracep->declBit(c+60,"rvcpu id3 inst_sllw", false,-1);
        tracep->declBit(c+61,"rvcpu id3 inst_srlw", false,-1);
        tracep->declBit(c+62,"rvcpu id3 inst_sraw", false,-1);
        tracep->declBit(c+91,"rvcpu id3 inst_beq", false,-1);
        tracep->declBit(c+92,"rvcpu id3 inst_ben", false,-1);
        tracep->declBit(c+93,"rvcpu id3 inst_blt", false,-1);
        tracep->declBit(c+94,"rvcpu id3 inst_bge", false,-1);
        tracep->declBit(c+95,"rvcpu id3 inst_bltu", false,-1);
        tracep->declBit(c+96,"rvcpu id3 inst_bgeu", false,-1);
        tracep->declBit(c+63,"rvcpu id3 inst_csrrw", false,-1);
        tracep->declBit(c+64,"rvcpu id3 inst_csrrs", false,-1);
        tracep->declBit(c+65,"rvcpu id3 inst_csrrc", false,-1);
        tracep->declBit(c+66,"rvcpu id3 inst_csrrwi", false,-1);
        tracep->declBit(c+97,"rvcpu id3 inst_csrrsi", false,-1);
        tracep->declBit(c+98,"rvcpu id3 inst_csrrci", false,-1);
        tracep->declBit(c+67,"rvcpu id3 inst_csr_rs1", false,-1);
        tracep->declBit(c+66,"rvcpu id3 inst_csr_imm", false,-1);
        tracep->declBit(c+99,"rvcpu id3 inst_ecall", false,-1);
        tracep->declBit(c+68,"rvcpu id3 inst_ebreak", false,-1);
        tracep->declBit(c+100,"rvcpu id3 inst_mret", false,-1);
        tracep->declBit(c+368,"rvcpu id3 op1_loda_relate", false,-1);
        tracep->declBit(c+369,"rvcpu id3 op2_loda_relate", false,-1);
        tracep->declBit(c+69,"rvcpu id3 ex_op1", false,-1);
        tracep->declBit(c+70,"rvcpu id3 mem_op1", false,-1);
        tracep->declBit(c+101,"rvcpu id3 ex_op2", false,-1);
        tracep->declBit(c+102,"rvcpu id3 mem_op2", false,-1);
        tracep->declBit(c+103,"rvcpu id3 wb_op1", false,-1);
        tracep->declQuad(c+104,"rvcpu id3 jalr_pc_temp", false,-1, 63,0);
        tracep->declBit(c+106,"rvcpu id3 predict_success", false,-1);
        tracep->declBit(c+329,"rvcpu id_ex4 clk", false,-1);
        tracep->declBit(c+330,"rvcpu id_ex4 rst", false,-1);
        tracep->declBit(c+110,"rvcpu id_ex4 id_ex_bubble", false,-1);
        tracep->declBus(c+22,"rvcpu id_ex4 stall_ctrl", false,-1, 4,0);
        tracep->declBus(c+29,"rvcpu id_ex4 id_inst", false,-1, 31,0);
        tracep->declQuad(c+16,"rvcpu id_ex4 id_pc", false,-1, 63,0);
        tracep->declBus(c+8,"rvcpu id_ex4 id_inst_type", false,-1, 7,0);
        tracep->declBus(c+9,"rvcpu id_ex4 id_inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+10,"rvcpu id_ex4 id_op1", false,-1, 63,0);
        tracep->declQuad(c+12,"rvcpu id_ex4 id_op2", false,-1, 63,0);
        tracep->declBit(c+14,"rvcpu id_ex4 id_rd_ena", false,-1);
        tracep->declBus(c+15,"rvcpu id_ex4 id_rd_addr", false,-1, 4,0);
        tracep->declBus(c+18,"rvcpu id_ex4 id_addr_offset", false,-1, 11,0);
        tracep->declBus(c+19,"rvcpu id_ex4 id_ls_sel", false,-1, 2,0);
        tracep->declBus(c+143,"rvcpu id_ex4 ex_inst", false,-1, 31,0);
        tracep->declQuad(c+125,"rvcpu id_ex4 ex_pc", false,-1, 63,0);
        tracep->declBus(c+127,"rvcpu id_ex4 ex_inst_type", false,-1, 7,0);
        tracep->declBus(c+128,"rvcpu id_ex4 ex_inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+129,"rvcpu id_ex4 ex_op1", false,-1, 63,0);
        tracep->declQuad(c+131,"rvcpu id_ex4 ex_op2", false,-1, 63,0);
        tracep->declBit(c+133,"rvcpu id_ex4 ex_rd_ena", false,-1);
        tracep->declBus(c+111,"rvcpu id_ex4 ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+134,"rvcpu id_ex4 ex_addr_offset", false,-1, 11,0);
        tracep->declBus(c+114,"rvcpu id_ex4 ex_ls_sel", false,-1, 2,0);
        tracep->declBit(c+329,"rvcpu ex5 clk", false,-1);
        tracep->declBit(c+330,"rvcpu ex5 rst", false,-1);
        tracep->declQuad(c+125,"rvcpu ex5 pc_i", false,-1, 63,0);
        tracep->declBus(c+143,"rvcpu ex5 id_ex_inst", false,-1, 31,0);
        tracep->declBus(c+127,"rvcpu ex5 inst_type_i", false,-1, 7,0);
        tracep->declBus(c+128,"rvcpu ex5 inst_opcode_i", false,-1, 7,0);
        tracep->declQuad(c+129,"rvcpu ex5 op1_i", false,-1, 63,0);
        tracep->declQuad(c+131,"rvcpu ex5 op2_i", false,-1, 63,0);
        tracep->declBit(c+133,"rvcpu ex5 rd_ena_i", false,-1);
        tracep->declBus(c+111,"rvcpu ex5 rd_addr_i", false,-1, 4,0);
        tracep->declBus(c+114,"rvcpu ex5 ls_sel_i", false,-1, 2,0);
        tracep->declBus(c+134,"rvcpu ex5 addr_offsel_i", false,-1, 11,0);
        tracep->declBus(c+113,"rvcpu ex5 inst_type_o", false,-1, 7,0);
        tracep->declBit(c+112,"rvcpu ex5 rd_ena_o", false,-1);
        tracep->declBus(c+111,"rvcpu ex5 rd_addr_o", false,-1, 4,0);
        tracep->declQuad(c+2,"rvcpu ex5 rd_data_o", false,-1, 63,0);
        tracep->declQuad(c+25,"rvcpu ex5 ex_pc_o", false,-1, 63,0);
        tracep->declBus(c+30,"rvcpu ex5 ex_inst_o", false,-1, 31,0);
        tracep->declBus(c+114,"rvcpu ex5 ls_sel_o", false,-1, 2,0);
        tracep->declQuad(c+115,"rvcpu ex5 ls_addr_o", false,-1, 63,0);
        tracep->declBit(c+110,"rvcpu ex5 ex_flush", false,-1);
        tracep->declBit(c+110,"rvcpu ex5 branch_pc_ena", false,-1);
        tracep->declQuad(c+117,"rvcpu ex5 branch_pc", false,-1, 63,0);
        tracep->declBit(c+1,"rvcpu ex5 if_stell_req", false,-1);
        tracep->declBit(c+80,"rvcpu ex5 ex_stall_req", false,-1);
        tracep->declBit(c+347,"rvcpu ex5 timer_intr", false,-1);
        tracep->declBit(c+71,"rvcpu ex5 ex_stall", false,-1);
        tracep->declQuad(c+72,"rvcpu ex5 exe_res", false,-1, 63,0);
        tracep->declQuad(c+154,"rvcpu ex5 op2_i_mux", false,-1, 63,0);
        tracep->declQuad(c+156,"rvcpu ex5 op1_sub_op2", false,-1, 63,0);
        tracep->declQuad(c+158,"rvcpu ex5 op1_add_op2", false,-1, 63,0);
        tracep->declQuad(c+160,"rvcpu ex5 op1_addw_op2", false,-1, 63,0);
        tracep->declBit(c+162,"rvcpu ex5 op1_ls_op2", false,-1);
        tracep->declQuad(c+163,"rvcpu ex5 shift_res", false,-1, 63,0);
        tracep->declBus(c+165,"rvcpu ex5 op1_sllw_op2", false,-1, 31,0);
        tracep->declQuad(c+166,"rvcpu ex5 sllw_res", false,-1, 63,0);
        tracep->declBus(c+168,"rvcpu ex5 op1_srlw_op2", false,-1, 31,0);
        tracep->declQuad(c+169,"rvcpu ex5 srlw_res", false,-1, 63,0);
        tracep->declBus(c+171,"rvcpu ex5 op1_sraw_op2", false,-1, 31,0);
        tracep->declQuad(c+172,"rvcpu ex5 sraw_res", false,-1, 63,0);
        tracep->declBus(c+174,"rvcpu ex5 op1_subw_op2", false,-1, 31,0);
        tracep->declQuad(c+175,"rvcpu ex5 subw_res", false,-1, 63,0);
        tracep->declQuad(c+177,"rvcpu ex5 upper_imm", false,-1, 63,0);
        tracep->declBit(c+179,"rvcpu ex5 ex_flush_branch", false,-1);
        tracep->declBit(c+180,"rvcpu ex5 tmr_trap_ena", false,-1);
        tracep->declBus(c+181,"rvcpu ex5 csr_idx", false,-1, 11,0);
        tracep->declQuad(c+182,"rvcpu ex5 read_csr_data", false,-1, 63,0);
        tracep->declBit(c+184,"rvcpu ex5 trap_ena", false,-1);
        tracep->declBit(c+185,"rvcpu ex5 ecall_trap_ena", false,-1);
        tracep->declBit(c+186,"rvcpu ex5 cmt_mret_ena", false,-1);
        tracep->declBit(c+187,"rvcpu ex5 csr_wr_en", false,-1);
        tracep->declBit(c+188,"rvcpu ex5 csr_rd_en", false,-1);
        tracep->declQuad(c+189,"rvcpu ex5 wbck_csr_data", false,-1, 63,0);
        tracep->declQuad(c+191,"rvcpu ex5 trap_mcause_value", false,-1, 63,0);
        tracep->declQuad(c+193,"rvcpu ex5 mask_set_res", false,-1, 63,0);
        tracep->declQuad(c+195,"rvcpu ex5 mask_clear_res", false,-1, 63,0);
        tracep->declBit(c+329,"rvcpu ex5 csr0 clk", false,-1);
        tracep->declBit(c+330,"rvcpu ex5 csr0 rst", false,-1);
        tracep->declQuad(c+125,"rvcpu ex5 csr0 pc_i", false,-1, 63,0);
        tracep->declBit(c+187,"rvcpu ex5 csr0 csr_wr_en", false,-1);
        tracep->declBit(c+188,"rvcpu ex5 csr0 csr_rd_en", false,-1);
        tracep->declBus(c+181,"rvcpu ex5 csr0 csr_idx", false,-1, 11,0);
        tracep->declBit(c+186,"rvcpu ex5 csr0 cmt_mret_ena", false,-1);
        tracep->declBit(c+185,"rvcpu ex5 csr0 ecall_trap_ena", false,-1);
        tracep->declQuad(c+191,"rvcpu ex5 csr0 trap_mcause_value", false,-1, 63,0);
        tracep->declBit(c+347,"rvcpu ex5 csr0 tmr_intr_ena", false,-1);
        tracep->declBit(c+180,"rvcpu ex5 csr0 tmr_trap_ena", false,-1);
        tracep->declQuad(c+182,"rvcpu ex5 csr0 read_csr_data", false,-1, 63,0);
        tracep->declQuad(c+189,"rvcpu ex5 csr0 wbck_csr_data", false,-1, 63,0);
        tracep->declBit(c+71,"rvcpu ex5 csr0 ex_stall", false,-1);
        tracep->declBit(c+197,"rvcpu ex5 csr0 sel_mcycle", false,-1);
        tracep->declBit(c+198,"rvcpu ex5 csr0 rd_mcycle", false,-1);
        tracep->declBit(c+199,"rvcpu ex5 csr0 wr_mcycle", false,-1);
        tracep->declQuad(c+200,"rvcpu ex5 csr0 csr_mcycle", false,-1, 63,0);
        tracep->declBit(c+202,"rvcpu ex5 csr0 sel_mstatus", false,-1);
        tracep->declBit(c+203,"rvcpu ex5 csr0 rd_mstatus", false,-1);
        tracep->declBit(c+204,"rvcpu ex5 csr0 wr_mstatus", false,-1);
        tracep->declBit(c+205,"rvcpu ex5 csr0 mstatus_mpie_ena", false,-1);
        tracep->declBit(c+206,"rvcpu ex5 csr0 mstatus_mpie_nxt", false,-1);
        tracep->declBit(c+207,"rvcpu ex5 csr0 csr_mstatus_mpie", false,-1);
        tracep->declBit(c+205,"rvcpu ex5 csr0 mstatus_mie_ena", false,-1);
        tracep->declBit(c+208,"rvcpu ex5 csr0 mstatus_mie_nxt", false,-1);
        tracep->declBit(c+209,"rvcpu ex5 csr0 csr_mstatus_mie", false,-1);
        tracep->declBit(c+205,"rvcpu ex5 csr0 mstatus_mpp_ena", false,-1);
        tracep->declBus(c+210,"rvcpu ex5 csr0 mstatus_mpp_nxt", false,-1, 1,0);
        tracep->declBus(c+211,"rvcpu ex5 csr0 csr_mstatus_mpp", false,-1, 1,0);
        tracep->declBus(c+381,"rvcpu ex5 csr0 csr_mstatus_xs", false,-1, 1,0);
        tracep->declBus(c+212,"rvcpu ex5 csr0 csr_mstatus_fs", false,-1, 1,0);
        tracep->declBit(c+213,"rvcpu ex5 csr0 csr_mstatus_sd", false,-1);
        tracep->declQuad(c+214,"rvcpu ex5 csr0 csr_mstatus", false,-1, 63,0);
        tracep->declBit(c+216,"rvcpu ex5 csr0 sel_mtvec", false,-1);
        tracep->declBit(c+217,"rvcpu ex5 csr0 rd_mtvec", false,-1);
        tracep->declBit(c+218,"rvcpu ex5 csr0 wr_mtvec", false,-1);
        tracep->declQuad(c+219,"rvcpu ex5 csr0 csr_mtvec_base", false,-1, 63,2);
        tracep->declBus(c+381,"rvcpu ex5 csr0 csr_mtvec_mode", false,-1, 1,0);
        tracep->declQuad(c+221,"rvcpu ex5 csr0 csr_mtvec", false,-1, 63,0);
        tracep->declBit(c+223,"rvcpu ex5 csr0 sel_mepc", false,-1);
        tracep->declBit(c+224,"rvcpu ex5 csr0 rd_mepc", false,-1);
        tracep->declBit(c+225,"rvcpu ex5 csr0 wr_mepc", false,-1);
        tracep->declQuad(c+226,"rvcpu ex5 csr0 csr_mepc", false,-1, 63,0);
        tracep->declBit(c+228,"rvcpu ex5 csr0 sel_mcause", false,-1);
        tracep->declBit(c+229,"rvcpu ex5 csr0 rd_mcause", false,-1);
        tracep->declBit(c+230,"rvcpu ex5 csr0 wr_mcause", false,-1);
        tracep->declBit(c+231,"rvcpu ex5 csr0 csr_mcause_ena", false,-1);
        tracep->declQuad(c+232,"rvcpu ex5 csr0 csr_mcause_nxt", false,-1, 63,0);
        tracep->declQuad(c+234,"rvcpu ex5 csr0 csr_mcause", false,-1, 63,0);
        tracep->declBit(c+236,"rvcpu ex5 csr0 sle_mie", false,-1);
        tracep->declBit(c+237,"rvcpu ex5 csr0 rd_mie", false,-1);
        tracep->declBit(c+238,"rvcpu ex5 csr0 wr_mie", false,-1);
        tracep->declBit(c+239,"rvcpu ex5 csr0 csr_mie_mtie", false,-1);
        tracep->declQuad(c+240,"rvcpu ex5 csr0 csr_mie", false,-1, 63,0);
        tracep->declBit(c+242,"rvcpu ex5 csr0 sel_mip", false,-1);
        tracep->declBit(c+243,"rvcpu ex5 csr0 rd_mip", false,-1);
        tracep->declBit(c+244,"rvcpu ex5 csr0 csr_mip_mtip", false,-1);
        tracep->declQuad(c+245,"rvcpu ex5 csr0 csr_mip", false,-1, 63,0);
        tracep->declBit(c+247,"rvcpu ex5 csr0 sel_mscratch", false,-1);
        tracep->declBit(c+248,"rvcpu ex5 csr0 rd_mscrstch", false,-1);
        tracep->declBit(c+249,"rvcpu ex5 csr0 wr_mscrstch", false,-1);
        tracep->declQuad(c+250,"rvcpu ex5 csr0 csr_mscrstch", false,-1, 63,0);
        tracep->declBit(c+329,"rvcpu ex_mem6 clk", false,-1);
        tracep->declBit(c+330,"rvcpu ex_mem6 rst", false,-1);
        tracep->declQuad(c+25,"rvcpu ex_mem6 ex_mem_pc_i", false,-1, 63,0);
        tracep->declBus(c+30,"rvcpu ex_mem6 ex_mem_inst_i", false,-1, 31,0);
        tracep->declBus(c+22,"rvcpu ex_mem6 stall_ctrl", false,-1, 4,0);
        tracep->declBus(c+113,"rvcpu ex_mem6 ex_inst_type", false,-1, 7,0);
        tracep->declBit(c+112,"rvcpu ex_mem6 ex_rd_ena", false,-1);
        tracep->declQuad(c+2,"rvcpu ex_mem6 ex_rd_data", false,-1, 63,0);
        tracep->declBus(c+111,"rvcpu ex_mem6 ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+114,"rvcpu ex_mem6 ex_ls_sel", false,-1, 2,0);
        tracep->declQuad(c+115,"rvcpu ex_mem6 ex_ls_addr", false,-1, 63,0);
        tracep->declBus(c+135,"rvcpu ex_mem6 mem_inst_type", false,-1, 7,0);
        tracep->declBit(c+120,"rvcpu ex_mem6 mem_rd_ena", false,-1);
        tracep->declQuad(c+136,"rvcpu ex_mem6 mem_rd_data", false,-1, 63,0);
        tracep->declBus(c+119,"rvcpu ex_mem6 mem_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+141,"rvcpu ex_mem6 ex_mem_pc_o", false,-1, 63,0);
        tracep->declBus(c+144,"rvcpu ex_mem6 ex_mem_inst_o", false,-1, 31,0);
        tracep->declBus(c+138,"rvcpu ex_mem6 mem_ls_sel", false,-1, 2,0);
        tracep->declQuad(c+139,"rvcpu ex_mem6 mem_ls_addr", false,-1, 63,0);
        tracep->declBit(c+330,"rvcpu mem7 rst", false,-1);
        tracep->declBus(c+135,"rvcpu mem7 inst_type_i", false,-1, 7,0);
        tracep->declBit(c+120,"rvcpu mem7 rd_ena_i", false,-1);
        tracep->declQuad(c+136,"rvcpu mem7 rd_data_i", false,-1, 63,0);
        tracep->declBus(c+119,"rvcpu mem7 rd_addr_i", false,-1, 4,0);
        tracep->declQuad(c+141,"rvcpu mem7 mem_pc_i", false,-1, 63,0);
        tracep->declBus(c+144,"rvcpu mem7 mem_inst_i", false,-1, 31,0);
        tracep->declQuad(c+139,"rvcpu mem7 ls_addr_i", false,-1, 63,0);
        tracep->declBus(c+138,"rvcpu mem7 ls_sel_i", false,-1, 2,0);
        tracep->declQuad(c+337,"rvcpu mem7 data_addr_o", false,-1, 63,0);
        tracep->declBus(c+339,"rvcpu mem7 wmask_o", false,-1, 7,0);
        tracep->declQuad(c+342,"rvcpu mem7 data_i", false,-1, 63,0);
        tracep->declQuad(c+340,"rvcpu mem7 data_o", false,-1, 63,0);
        tracep->declBit(c+344,"rvcpu mem7 we", false,-1);
        tracep->declBit(c+345,"rvcpu mem7 re", false,-1);
        tracep->declBit(c+346,"rvcpu mem7 mem_finish", false,-1);
        tracep->declBit(c+120,"rvcpu mem7 rd_ena_o", false,-1);
        tracep->declQuad(c+23,"rvcpu mem7 rd_data_o", false,-1, 63,0);
        tracep->declBus(c+119,"rvcpu mem7 rd_addr_o", false,-1, 4,0);
        tracep->declQuad(c+27,"rvcpu mem7 mem_pc_o", false,-1, 63,0);
        tracep->declBus(c+31,"rvcpu mem7 mem_inst_o", false,-1, 31,0);
        tracep->declBit(c+359,"rvcpu mem7 mem_stall_req", false,-1);
        tracep->declQuad(c+370,"rvcpu mem7 load_data", false,-1, 63,0);
        tracep->declBus(c+252,"rvcpu mem7 byte_sel", false,-1, 2,0);
        tracep->declBus(c+253,"rvcpu mem7 half_byte_sel", false,-1, 1,0);
        tracep->declBit(c+254,"rvcpu mem7 word_sel", false,-1);
        tracep->declBus(c+74,"rvcpu mem7 data_byte", false,-1, 7,0);
        tracep->declBus(c+75,"rvcpu mem7 data_half_byte", false,-1, 15,0);
        tracep->declBus(c+76,"rvcpu mem7 data_word", false,-1, 31,0);
        tracep->declQuad(c+77,"rvcpu mem7 store_data", false,-1, 63,0);
        tracep->declBus(c+79,"rvcpu mem7 store_mask", false,-1, 7,0);
        tracep->declQuad(c+372,"rvcpu mem7 sb_data", false,-1, 63,0);
        tracep->declQuad(c+374,"rvcpu mem7 sh_data", false,-1, 63,0);
        tracep->declQuad(c+376,"rvcpu mem7 sw_data", false,-1, 63,0);
        tracep->declBus(c+378,"rvcpu mem7 sb_mask", false,-1, 7,0);
        tracep->declBus(c+379,"rvcpu mem7 sh_mask", false,-1, 7,0);
        tracep->declBus(c+380,"rvcpu mem7 sw_mask", false,-1, 7,0);
        tracep->declBit(c+329,"rvcpu mem_wb8 clk", false,-1);
        tracep->declBit(c+330,"rvcpu mem_wb8 rst", false,-1);
        tracep->declQuad(c+27,"rvcpu mem_wb8 wb_pc_i", false,-1, 63,0);
        tracep->declBus(c+31,"rvcpu mem_wb8 wb_inst_i", false,-1, 31,0);
        tracep->declBus(c+22,"rvcpu mem_wb8 stall_ctrl", false,-1, 4,0);
        tracep->declQuad(c+23,"rvcpu mem_wb8 mem_rd_data", false,-1, 63,0);
        tracep->declBus(c+119,"rvcpu mem_wb8 mem_rd_addr", false,-1, 4,0);
        tracep->declBit(c+120,"rvcpu mem_wb8 mem_rd_ena", false,-1);
        tracep->declQuad(c+123,"rvcpu mem_wb8 wb_rd_data", false,-1, 63,0);
        tracep->declBus(c+121,"rvcpu mem_wb8 wb_rd_addr", false,-1, 4,0);
        tracep->declBit(c+122,"rvcpu mem_wb8 wb_rd_ena", false,-1);
        tracep->declQuad(c+255,"rvcpu mem_wb8 wb_pc_o", false,-1, 63,0);
        tracep->declBus(c+257,"rvcpu mem_wb8 wb_inst_o", false,-1, 31,0);
        tracep->declQuad(c+258,"rvcpu mem_wb8 pc_data1", false,-1, 63,0);
        tracep->declBit(c+260,"rvcpu mem_wb8 difftest_exyn", false,-1);
        tracep->declBit(c+261,"rvcpu mem_wb8 teap_yn", false,-1);
        tracep->declQuad(c+262,"rvcpu mem_wb8 trap_code", false,-1, 63,0);
        tracep->declBit(c+330,"rvcpu ctrl9 rst", false,-1);
        tracep->declBit(c+1,"rvcpu ctrl9 if_stall_req", false,-1);
        tracep->declBit(c+354,"rvcpu ctrl9 id_stall_req", false,-1);
        tracep->declBit(c+80,"rvcpu ctrl9 ex_stall_req", false,-1);
        tracep->declBit(c+359,"rvcpu ctrl9 mem_stall_req", false,-1);
        tracep->declBus(c+22,"rvcpu ctrl9 stall_ctrl", false,-1, 4,0);
        tracep->declBit(c+329,"rvcpu regfile10 clk", false,-1);
        tracep->declBit(c+330,"rvcpu regfile10 rst", false,-1);
        tracep->declBus(c+121,"rvcpu regfile10 waddr", false,-1, 4,0);
        tracep->declQuad(c+123,"rvcpu regfile10 wdata", false,-1, 63,0);
        tracep->declBit(c+122,"rvcpu regfile10 we", false,-1);
        tracep->declBus(c+4,"rvcpu regfile10 raddr1", false,-1, 4,0);
        tracep->declQuad(c+355,"rvcpu regfile10 rdata1", false,-1, 63,0);
        tracep->declBit(c+5,"rvcpu regfile10 re1", false,-1);
        tracep->declBus(c+6,"rvcpu regfile10 raddr2", false,-1, 4,0);
        tracep->declQuad(c+357,"rvcpu regfile10 rdata2", false,-1, 63,0);
        tracep->declBit(c+7,"rvcpu regfile10 re2", false,-1);
        tracep->declBit(c+350,"rvcpu regfile10 x1_read_ena", false,-1);
        tracep->declQuad(c+348,"rvcpu regfile10 x1_data", false,-1, 63,0);
        tracep->declBus(c+351,"rvcpu regfile10 x1_addr", false,-1, 4,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+264+i*2,"rvcpu regfile10 regs", true,(i+0), 63,0);}}
        tracep->declBus(c+328,"rvcpu regfile10 i", false,-1, 31,0);
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
        tracep->fullQData(oldp+25,(vlSelf->rvcpu__DOT__ex_ex_mem_pc),64);
        tracep->fullQData(oldp+27,(vlSelf->rvcpu__DOT__mem_mem_wb_pc),64);
        tracep->fullIData(oldp+29,(vlSelf->rvcpu__DOT__id_id_ex_inst),32);
        tracep->fullIData(oldp+30,(vlSelf->rvcpu__DOT__ex_ex_mem_inst),32);
        tracep->fullIData(oldp+31,(vlSelf->rvcpu__DOT__mem_mem_wb_inst),32);
        tracep->fullIData(oldp+32,(vlSelf->rvcpu__DOT__pip_fore0__DOT__j_imm),20);
        tracep->fullSData(oldp+33,(vlSelf->rvcpu__DOT__pip_fore0__DOT__b_imm),12);
        tracep->fullBit(oldp+34,(vlSelf->rvcpu__DOT__pip_fore0__DOT__inst_jalr));
        tracep->fullQData(oldp+35,(vlSelf->rvcpu__DOT__pip_fore0__DOT__j_pc),64);
        tracep->fullBit(oldp+37,((1U & (IData)(vlSelf->rvcpu__DOT__stall_ctrl))));
        tracep->fullBit(oldp+38,(vlSelf->rvcpu__DOT__id3__DOT__inst_lui));
        tracep->fullBit(oldp+39,(vlSelf->rvcpu__DOT__id3__DOT__inst_auipc));
        tracep->fullBit(oldp+40,(vlSelf->rvcpu__DOT__id3__DOT__inst_jal));
        tracep->fullBit(oldp+41,(vlSelf->rvcpu__DOT__id3__DOT__inst_jalr));
        tracep->fullBit(oldp+42,(vlSelf->rvcpu__DOT__id3__DOT__inst_jump));
        tracep->fullBit(oldp+43,(vlSelf->rvcpu__DOT__id3__DOT__inst_srai));
        tracep->fullBit(oldp+44,(vlSelf->rvcpu__DOT__id3__DOT__inst_addiw));
        tracep->fullBit(oldp+45,(vlSelf->rvcpu__DOT__id3__DOT__inst_slliw));
        tracep->fullBit(oldp+46,(vlSelf->rvcpu__DOT__id3__DOT__inst_srliw));
        tracep->fullBit(oldp+47,(vlSelf->rvcpu__DOT__id3__DOT__inst_sraiw));
        tracep->fullBit(oldp+48,(vlSelf->rvcpu__DOT__id3__DOT__inst_add));
        tracep->fullBit(oldp+49,(vlSelf->rvcpu__DOT__id3__DOT__inst_sub));
        tracep->fullBit(oldp+50,(vlSelf->rvcpu__DOT__id3__DOT__inst_sll));
        tracep->fullBit(oldp+51,(vlSelf->rvcpu__DOT__id3__DOT__inst_slt));
        tracep->fullBit(oldp+52,(vlSelf->rvcpu__DOT__id3__DOT__inst_sltu));
        tracep->fullBit(oldp+53,(vlSelf->rvcpu__DOT__id3__DOT__inst_xor));
        tracep->fullBit(oldp+54,(vlSelf->rvcpu__DOT__id3__DOT__inst_srl));
        tracep->fullBit(oldp+55,(vlSelf->rvcpu__DOT__id3__DOT__inst_sra));
        tracep->fullBit(oldp+56,(vlSelf->rvcpu__DOT__id3__DOT__inst_or));
        tracep->fullBit(oldp+57,(vlSelf->rvcpu__DOT__id3__DOT__inst_and));
        tracep->fullBit(oldp+58,(vlSelf->rvcpu__DOT__id3__DOT__inst_addw));
        tracep->fullBit(oldp+59,(vlSelf->rvcpu__DOT__id3__DOT__inst_subw));
        tracep->fullBit(oldp+60,(vlSelf->rvcpu__DOT__id3__DOT__inst_sllw));
        tracep->fullBit(oldp+61,(vlSelf->rvcpu__DOT__id3__DOT__inst_srlw));
        tracep->fullBit(oldp+62,(vlSelf->rvcpu__DOT__id3__DOT__inst_sraw));
        tracep->fullBit(oldp+63,(vlSelf->rvcpu__DOT__id3__DOT__inst_csrrw));
        tracep->fullBit(oldp+64,(vlSelf->rvcpu__DOT__id3__DOT__inst_csrrs));
        tracep->fullBit(oldp+65,(vlSelf->rvcpu__DOT__id3__DOT__inst_csrrc));
        tracep->fullBit(oldp+66,(vlSelf->rvcpu__DOT__id3__DOT__inst_csrrwi));
        tracep->fullBit(oldp+67,((((IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_csrrw) 
                                   | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_csrrs)) 
                                  | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_csrrc))));
        tracep->fullBit(oldp+68,(vlSelf->rvcpu__DOT__id3__DOT__inst_ebreak));
        tracep->fullBit(oldp+69,(vlSelf->rvcpu__DOT__id3__DOT__ex_op1));
        tracep->fullBit(oldp+70,(vlSelf->rvcpu__DOT__id3__DOT__mem_op1));
        tracep->fullBit(oldp+71,((1U & ((IData)(vlSelf->rvcpu__DOT__stall_ctrl) 
                                        >> 3U))));
        tracep->fullQData(oldp+72,(vlSelf->rvcpu__DOT__ex5__DOT__exe_res),64);
        tracep->fullCData(oldp+74,(vlSelf->rvcpu__DOT__mem7__DOT__data_byte),8);
        tracep->fullSData(oldp+75,(vlSelf->rvcpu__DOT__mem7__DOT__data_half_byte),16);
        tracep->fullIData(oldp+76,(vlSelf->rvcpu__DOT__mem7__DOT__data_word),32);
        tracep->fullQData(oldp+77,(vlSelf->rvcpu__DOT__mem7__DOT__store_data),64);
        tracep->fullCData(oldp+79,(vlSelf->rvcpu__DOT__mem7__DOT__store_mask),8);
        tracep->fullBit(oldp+80,(((IData)(vlSelf->rvcpu__DOT__ex_pc_branchena) 
                                  & (IData)(vlSelf->rvcpu__DOT__if_stall_req))));
        tracep->fullQData(oldp+81,(((IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_jalr)
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
        tracep->fullBit(oldp+83,((1U & (IData)(((0x10U 
                                                 == 
                                                 (0x10U 
                                                  & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                & (0U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->rvcpu__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+84,((1U & (IData)(((0x10U 
                                                 == 
                                                 (0x10U 
                                                  & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                & (0x2000U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->rvcpu__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+85,((1U & (IData)(((0x10U 
                                                 == 
                                                 (0x10U 
                                                  & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                & (0x3000U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->rvcpu__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+86,((1U & (IData)(((0x10U 
                                                 == 
                                                 (0x10U 
                                                  & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                & (0x4000U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->rvcpu__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+87,((1U & (IData)(((0x10U 
                                                 == 
                                                 (0x10U 
                                                  & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                & (0x6000U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->rvcpu__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+88,((1U & (IData)(((0x10U 
                                                 == 
                                                 (0x10U 
                                                  & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                & (0x7000U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->rvcpu__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+89,((1U & (IData)(((0x10U 
                                                 == 
                                                 (0x10U 
                                                  & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                & (0x1000U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->rvcpu__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+90,((1U & (IData)(((0x10U 
                                                 == 
                                                 (0x10U 
                                                  & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                & (0x5000U 
                                                   == 
                                                   (0x40007000U 
                                                    & vlSelf->rvcpu__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+91,((1U & (IData)(((4U 
                                                 == 
                                                 (4U 
                                                  & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                & (0U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->rvcpu__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+92,((1U & (IData)(((4U 
                                                 == 
                                                 (4U 
                                                  & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                & (0x1000U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->rvcpu__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+93,((1U & (IData)(((4U 
                                                 == 
                                                 (4U 
                                                  & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                & (0x4000U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->rvcpu__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+94,((1U & (IData)(((4U 
                                                 == 
                                                 (4U 
                                                  & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                & (0x5000U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->rvcpu__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+95,((1U & (IData)(((4U 
                                                 == 
                                                 (4U 
                                                  & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                & (0x6000U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->rvcpu__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+96,((1U & (IData)(((4U 
                                                 == 
                                                 (4U 
                                                  & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                & (0x7000U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->rvcpu__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+97,((1U & (IData)(((0x80U 
                                                 == 
                                                 (0x80U 
                                                  & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                & (0x6000U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->rvcpu__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+98,((1U & (IData)(((0x80U 
                                                 == 
                                                 (0x80U 
                                                  & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                & (0x7000U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->rvcpu__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+99,(((IData)(((0x80U == 
                                            (0x80U 
                                             & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                           & (0U == 
                                              (0x7000U 
                                               & vlSelf->rvcpu__DOT__if_id_inst)))) 
                                  & (0U == (vlSelf->rvcpu__DOT__if_id_inst 
                                            >> 0x14U)))));
        tracep->fullBit(oldp+100,(((IData)(((0x80U 
                                             == (0x80U 
                                                 & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                            & (0U == 
                                               (0x7000U 
                                                & vlSelf->rvcpu__DOT__if_id_inst)))) 
                                   & (0x18U == (vlSelf->rvcpu__DOT__if_id_inst 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+101,((((IData)(vlSelf->rvcpu__DOT__idex_ex_rdaddr) 
                                    == (IData)(vlSelf->rvcpu__DOT__id_reg_addr2)) 
                                   & (IData)(vlSelf->rvcpu__DOT__ex_id_rd_ena))));
        tracep->fullBit(oldp+102,((((IData)(vlSelf->rvcpu__DOT__exmem_mem_addr) 
                                    == (IData)(vlSelf->rvcpu__DOT__id_reg_addr2)) 
                                   & (IData)(vlSelf->rvcpu__DOT__exmem_mem_ena))));
        tracep->fullBit(oldp+103,((((IData)(vlSelf->rvcpu__DOT__wb_id_addr) 
                                    == (IData)(vlSelf->rvcpu__DOT__id_reg_addr1)) 
                                   & (IData)(vlSelf->rvcpu__DOT__wb_id_ena))));
        tracep->fullQData(oldp+104,(((((- (QData)((IData)(
                                                          (vlSelf->rvcpu__DOT__if_id_inst 
                                                           >> 0x1fU)))) 
                                       << 0xcU) | (QData)((IData)(
                                                                  (vlSelf->rvcpu__DOT__if_id_inst 
                                                                   >> 0x14U)))) 
                                     + vlSelf->rvcpu__DOT__id_ex_op)),64);
        tracep->fullBit(oldp+106,((1U & (((~ (IData)(vlSelf->rvcpu__DOT__id3__DOT__ex_op1)) 
                                          & (~ (IData)(vlSelf->rvcpu__DOT__id3__DOT__mem_op1))) 
                                         & (~ (((IData)(vlSelf->rvcpu__DOT__wb_id_addr) 
                                                == (IData)(vlSelf->rvcpu__DOT__id_reg_addr1)) 
                                               & (IData)(vlSelf->rvcpu__DOT__wb_id_ena)))))));
        tracep->fullQData(oldp+107,(vlSelf->rvcpu__DOT__if_id_pc),64);
        tracep->fullIData(oldp+109,(vlSelf->rvcpu__DOT__if_id_inst),32);
        tracep->fullBit(oldp+110,(vlSelf->rvcpu__DOT__ex_pc_branchena));
        tracep->fullCData(oldp+111,(vlSelf->rvcpu__DOT__idex_ex_rdaddr),5);
        tracep->fullBit(oldp+112,(vlSelf->rvcpu__DOT__ex_id_rd_ena));
        tracep->fullCData(oldp+113,(vlSelf->rvcpu__DOT__ex_id_rd_type),8);
        tracep->fullCData(oldp+114,(vlSelf->rvcpu__DOT__idex_ex_sel),3);
        tracep->fullQData(oldp+115,(vlSelf->rvcpu__DOT__ex_mem_addr),64);
        tracep->fullQData(oldp+117,((((IData)(vlSelf->rvcpu__DOT__ex5__DOT__trap_ena) 
                                      | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__cmt_mret_ena))
                                      ? vlSelf->rvcpu__DOT__ex5__DOT__read_csr_data
                                      : ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__ex_flush_branch)
                                          ? (4ULL + vlSelf->rvcpu__DOT__idex_ex_pc)
                                          : 0ULL))),64);
        tracep->fullCData(oldp+119,(vlSelf->rvcpu__DOT__exmem_mem_addr),5);
        tracep->fullBit(oldp+120,(vlSelf->rvcpu__DOT__exmem_mem_ena));
        tracep->fullCData(oldp+121,(vlSelf->rvcpu__DOT__wb_id_addr),5);
        tracep->fullBit(oldp+122,(vlSelf->rvcpu__DOT__wb_id_ena));
        tracep->fullQData(oldp+123,(vlSelf->rvcpu__DOT__wb_regfile_data),64);
        tracep->fullQData(oldp+125,(vlSelf->rvcpu__DOT__idex_ex_pc),64);
        tracep->fullCData(oldp+127,(vlSelf->rvcpu__DOT__idex_ex_type),8);
        tracep->fullCData(oldp+128,(vlSelf->rvcpu__DOT__idex_ex_opcode),8);
        tracep->fullQData(oldp+129,(vlSelf->rvcpu__DOT__idex_ex_op1),64);
        tracep->fullQData(oldp+131,(vlSelf->rvcpu__DOT__idex_ex_op2),64);
        tracep->fullBit(oldp+133,(vlSelf->rvcpu__DOT__idex_ex_rdena));
        tracep->fullSData(oldp+134,(vlSelf->rvcpu__DOT__idex_ex_offset),12);
        tracep->fullCData(oldp+135,(vlSelf->rvcpu__DOT__exmem_mem_type),8);
        tracep->fullQData(oldp+136,(vlSelf->rvcpu__DOT__exmem_mem_data),64);
        tracep->fullCData(oldp+138,(vlSelf->rvcpu__DOT__exmem_mem_sel),3);
        tracep->fullQData(oldp+139,(vlSelf->rvcpu__DOT__exmem_mem_lsaddr),64);
        tracep->fullQData(oldp+141,(vlSelf->rvcpu__DOT__ex_mem_mem_pc),64);
        tracep->fullIData(oldp+143,(vlSelf->rvcpu__DOT__id_ex_ex_inst),32);
        tracep->fullIData(oldp+144,(vlSelf->rvcpu__DOT__ex_mem_mem_inst),32);
        tracep->fullCData(oldp+145,((0x7fU & vlSelf->rvcpu__DOT__if_id_inst)),7);
        tracep->fullCData(oldp+146,((0x1fU & (vlSelf->rvcpu__DOT__if_id_inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+147,((7U & (vlSelf->rvcpu__DOT__if_id_inst 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+148,((0x1fU & (vlSelf->rvcpu__DOT__if_id_inst 
                                              >> 0xfU))),5);
        tracep->fullSData(oldp+149,((vlSelf->rvcpu__DOT__if_id_inst 
                                     >> 0x14U)),12);
        tracep->fullCData(oldp+150,((vlSelf->rvcpu__DOT__if_id_inst 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+151,((0x1fU & (vlSelf->rvcpu__DOT__if_id_inst 
                                              >> 0x14U))),5);
        tracep->fullIData(oldp+152,((vlSelf->rvcpu__DOT__if_id_inst 
                                     >> 0xcU)),20);
        tracep->fullSData(oldp+153,(((0xfe0U & (vlSelf->rvcpu__DOT__if_id_inst 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlSelf->rvcpu__DOT__if_id_inst 
                                                 >> 7U)))),12);
        tracep->fullQData(oldp+154,((1ULL + (~ vlSelf->rvcpu__DOT__idex_ex_op2))),64);
        tracep->fullQData(oldp+156,(vlSelf->rvcpu__DOT__ex5__DOT__op1_sub_op2),64);
        tracep->fullQData(oldp+158,(vlSelf->rvcpu__DOT__ex5__DOT__op1_add_op2),64);
        tracep->fullQData(oldp+160,(vlSelf->rvcpu__DOT__ex5__DOT__op1_addw_op2),64);
        tracep->fullBit(oldp+162,(vlSelf->rvcpu__DOT__ex5__DOT__op1_ls_op2));
        tracep->fullQData(oldp+163,(vlSelf->rvcpu__DOT__ex5__DOT__shift_res),64);
        tracep->fullIData(oldp+165,(vlSelf->rvcpu__DOT__ex5__DOT__op1_sllw_op2),32);
        tracep->fullQData(oldp+166,(vlSelf->rvcpu__DOT__ex5__DOT__sllw_res),64);
        tracep->fullIData(oldp+168,(vlSelf->rvcpu__DOT__ex5__DOT__op1_srlw_op2),32);
        tracep->fullQData(oldp+169,(vlSelf->rvcpu__DOT__ex5__DOT__srlw_res),64);
        tracep->fullIData(oldp+171,(vlSelf->rvcpu__DOT__ex5__DOT__op1_sraw_op2),32);
        tracep->fullQData(oldp+172,(vlSelf->rvcpu__DOT__ex5__DOT__sraw_res),64);
        tracep->fullIData(oldp+174,(vlSelf->rvcpu__DOT__ex5__DOT__op1_subw_op2),32);
        tracep->fullQData(oldp+175,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->rvcpu__DOT__ex5__DOT__op1_subw_op2 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->rvcpu__DOT__ex5__DOT__op1_subw_op2)))),64);
        tracep->fullQData(oldp+177,(vlSelf->rvcpu__DOT__ex5__DOT__upper_imm),64);
        tracep->fullBit(oldp+179,(vlSelf->rvcpu__DOT__ex5__DOT__ex_flush_branch));
        tracep->fullBit(oldp+180,(vlSelf->rvcpu__DOT__ex5__DOT__tmr_trap_ena));
        tracep->fullSData(oldp+181,(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx),12);
        tracep->fullQData(oldp+182,(vlSelf->rvcpu__DOT__ex5__DOT__read_csr_data),64);
        tracep->fullBit(oldp+184,(vlSelf->rvcpu__DOT__ex5__DOT__trap_ena));
        tracep->fullBit(oldp+185,(vlSelf->rvcpu__DOT__ex5__DOT__ecall_trap_ena));
        tracep->fullBit(oldp+186,(vlSelf->rvcpu__DOT__ex5__DOT__cmt_mret_ena));
        tracep->fullBit(oldp+187,(vlSelf->rvcpu__DOT__ex5__DOT__csr_wr_en));
        tracep->fullBit(oldp+188,(vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en));
        tracep->fullQData(oldp+189,(vlSelf->rvcpu__DOT__ex5__DOT__wbck_csr_data),64);
        tracep->fullQData(oldp+191,(vlSelf->rvcpu__DOT__ex5__DOT__trap_mcause_value),64);
        tracep->fullQData(oldp+193,((vlSelf->rvcpu__DOT__ex5__DOT__read_csr_data 
                                     | vlSelf->rvcpu__DOT__idex_ex_op1)),64);
        tracep->fullQData(oldp+195,((vlSelf->rvcpu__DOT__ex5__DOT__read_csr_data 
                                     & (~ vlSelf->rvcpu__DOT__idex_ex_op1))),64);
        tracep->fullBit(oldp+197,((0xb00U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+198,(((IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en) 
                                   & (0xb00U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)))));
        tracep->fullBit(oldp+199,(((IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_wr_en) 
                                   & (0xb00U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)))));
        tracep->fullQData(oldp+200,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mcycle),64);
        tracep->fullBit(oldp+202,((0x300U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+203,(((0x300U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+204,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__wr_mstatus));
        tracep->fullBit(oldp+205,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_ena));
        tracep->fullBit(oldp+206,((1U & (((IData)(vlSelf->rvcpu__DOT__ex5__DOT__ecall_trap_ena) 
                                          | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__tmr_trap_ena))
                                          ? (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)
                                          : ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__cmt_mret_ena) 
                                             | ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                 ? (IData)(
                                                           (vlSelf->rvcpu__DOT__ex5__DOT__wbck_csr_data 
                                                            >> 7U))
                                                 : (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)))))));
        tracep->fullBit(oldp+207,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie));
        tracep->fullBit(oldp+208,((1U & ((~ ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__ecall_trap_ena) 
                                             | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__tmr_trap_ena))) 
                                         & ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__cmt_mret_ena)
                                             ? (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)
                                             : ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                 ? (IData)(
                                                           (vlSelf->rvcpu__DOT__ex5__DOT__wbck_csr_data 
                                                            >> 3U))
                                                 : (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)))))));
        tracep->fullBit(oldp+209,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie));
        tracep->fullCData(oldp+210,((((IData)(vlSelf->rvcpu__DOT__ex5__DOT__ecall_trap_ena) 
                                      | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__tmr_trap_ena))
                                      ? 3U : ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__cmt_mret_ena)
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                      ? (IData)(
                                                                (vlSelf->rvcpu__DOT__ex5__DOT__wbck_csr_data 
                                                                 >> 0xbU))
                                                      : (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp)))))),2);
        tracep->fullCData(oldp+211,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp),2);
        tracep->fullCData(oldp+212,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs),2);
        tracep->fullBit(oldp+213,((3U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs))));
        tracep->fullQData(oldp+214,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus),64);
        tracep->fullBit(oldp+216,((0x305U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+217,(((((0x305U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                     & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en)) 
                                    | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__ecall_trap_ena)) 
                                   | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__tmr_trap_ena))));
        tracep->fullBit(oldp+218,(((0x305U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_wr_en))));
        tracep->fullQData(oldp+219,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base),62);
        tracep->fullQData(oldp+221,((vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base 
                                     << 2U)),64);
        tracep->fullBit(oldp+223,((0x341U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+224,((((0x341U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                    & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en)) 
                                   | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__cmt_mret_ena))));
        tracep->fullBit(oldp+225,(((((0x341U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                     & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_wr_en)) 
                                    | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__ecall_trap_ena)) 
                                   | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__tmr_trap_ena))));
        tracep->fullQData(oldp+226,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mepc),64);
        tracep->fullBit(oldp+228,((0x342U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+229,(((0x342U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+230,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__wr_mcause));
        tracep->fullBit(oldp+231,((((IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__wr_mcause) 
                                    | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__ecall_trap_ena)) 
                                   | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__tmr_trap_ena))));
        tracep->fullQData(oldp+232,((((IData)(vlSelf->rvcpu__DOT__ex5__DOT__ecall_trap_ena) 
                                      | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__tmr_trap_ena))
                                      ? vlSelf->rvcpu__DOT__ex5__DOT__trap_mcause_value
                                      : ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__wr_mcause)
                                          ? vlSelf->rvcpu__DOT__ex5__DOT__wbck_csr_data
                                          : vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mcause))),64);
        tracep->fullQData(oldp+234,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mcause),64);
        tracep->fullBit(oldp+236,((0x304U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+237,(((0x304U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+238,(((0x304U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_wr_en))));
        tracep->fullBit(oldp+239,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie));
        tracep->fullQData(oldp+240,(((QData)((IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie)) 
                                     << 7U)),64);
        tracep->fullBit(oldp+242,((0x344U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+243,(((0x344U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+244,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip));
        tracep->fullQData(oldp+245,((QData)((IData)(
                                                    ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip) 
                                                     << 7U)))),64);
        tracep->fullBit(oldp+247,((0x340U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+248,(((0x340U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+249,(((0x340U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_wr_en))));
        tracep->fullQData(oldp+250,(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mscrstch),64);
        tracep->fullCData(oldp+252,((7U & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))),3);
        tracep->fullCData(oldp+253,((3U & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))),2);
        tracep->fullBit(oldp+254,((1U & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))));
        tracep->fullQData(oldp+255,(vlSelf->rvcpu__DOT__mem_wb8__DOT__wb_pc_o),64);
        tracep->fullIData(oldp+257,(vlSelf->rvcpu__DOT__mem_wb8__DOT__wb_inst_o),32);
        tracep->fullQData(oldp+258,(vlSelf->rvcpu__DOT__mem_wb8__DOT__pc_data1),64);
        tracep->fullBit(oldp+260,(vlSelf->rvcpu__DOT__mem_wb8__DOT__difftest_exyn));
        tracep->fullBit(oldp+261,(vlSelf->rvcpu__DOT__mem_wb8__DOT__teap_yn));
        tracep->fullQData(oldp+262,(vlSelf->rvcpu__DOT__mem_wb8__DOT__trap_code),64);
        tracep->fullQData(oldp+264,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[0]),64);
        tracep->fullQData(oldp+266,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[1]),64);
        tracep->fullQData(oldp+268,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[2]),64);
        tracep->fullQData(oldp+270,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[3]),64);
        tracep->fullQData(oldp+272,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[4]),64);
        tracep->fullQData(oldp+274,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[5]),64);
        tracep->fullQData(oldp+276,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[6]),64);
        tracep->fullQData(oldp+278,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[7]),64);
        tracep->fullQData(oldp+280,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[8]),64);
        tracep->fullQData(oldp+282,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[9]),64);
        tracep->fullQData(oldp+284,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[10]),64);
        tracep->fullQData(oldp+286,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[11]),64);
        tracep->fullQData(oldp+288,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[12]),64);
        tracep->fullQData(oldp+290,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[13]),64);
        tracep->fullQData(oldp+292,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[14]),64);
        tracep->fullQData(oldp+294,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[15]),64);
        tracep->fullQData(oldp+296,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[16]),64);
        tracep->fullQData(oldp+298,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[17]),64);
        tracep->fullQData(oldp+300,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[18]),64);
        tracep->fullQData(oldp+302,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[19]),64);
        tracep->fullQData(oldp+304,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[20]),64);
        tracep->fullQData(oldp+306,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[21]),64);
        tracep->fullQData(oldp+308,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[22]),64);
        tracep->fullQData(oldp+310,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[23]),64);
        tracep->fullQData(oldp+312,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[24]),64);
        tracep->fullQData(oldp+314,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[25]),64);
        tracep->fullQData(oldp+316,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[26]),64);
        tracep->fullQData(oldp+318,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[27]),64);
        tracep->fullQData(oldp+320,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[28]),64);
        tracep->fullQData(oldp+322,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[29]),64);
        tracep->fullQData(oldp+324,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[30]),64);
        tracep->fullQData(oldp+326,(vlSelf->rvcpu__DOT__regfile10__DOT__regs[31]),64);
        tracep->fullIData(oldp+328,(vlSelf->rvcpu__DOT__regfile10__DOT__i),32);
        tracep->fullBit(oldp+329,(vlSelf->clk));
        tracep->fullBit(oldp+330,(vlSelf->rst));
        tracep->fullQData(oldp+331,(vlSelf->inst_addr),64);
        tracep->fullBit(oldp+333,(vlSelf->inst_ena));
        tracep->fullBit(oldp+334,(vlSelf->inst_ready));
        tracep->fullIData(oldp+335,(vlSelf->inst),32);
        tracep->fullBit(oldp+336,(vlSelf->bui_inst_valid));
        tracep->fullQData(oldp+337,(vlSelf->data_addr),64);
        tracep->fullCData(oldp+339,(vlSelf->wmask),8);
        tracep->fullQData(oldp+340,(vlSelf->data_o),64);
        tracep->fullQData(oldp+342,(vlSelf->data_i),64);
        tracep->fullBit(oldp+344,(vlSelf->we));
        tracep->fullBit(oldp+345,(vlSelf->re));
        tracep->fullBit(oldp+346,(vlSelf->mem_finish));
        tracep->fullBit(oldp+347,(vlSelf->timer_intr));
        tracep->fullQData(oldp+348,(((1U & ((~ (IData)(vlSelf->rst)) 
                                            & ((IData)(vlSelf->rst)
                                                ? 0U
                                                : (IData)(vlSelf->rvcpu__DOT__pip_fore0__DOT__inst_jalr))))
                                      ? ((((IData)(vlSelf->rvcpu__DOT__wb_id_addr) 
                                           == (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 0xfU))) 
                                          & (IData)(vlSelf->rvcpu__DOT__wb_id_ena))
                                          ? vlSelf->rvcpu__DOT__wb_regfile_data
                                          : vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                         [vlSelf->rvcpu__DOT__id_reg_addr1])
                                      : 0ULL)),64);
        tracep->fullBit(oldp+350,(((IData)(vlSelf->rst)
                                    ? 0U : (1U & (IData)(vlSelf->rvcpu__DOT__pip_fore0__DOT__inst_jalr)))));
        tracep->fullCData(oldp+351,((0x1fU & (vlSelf->inst 
                                              >> 0xfU))),5);
        tracep->fullQData(oldp+352,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((IData)(vlSelf->rvcpu__DOT__pip_fore0__DOT__inst_jalr)
                                                 ? 
                                                (0xfffffffffffffffeULL 
                                                 & vlSelf->rvcpu__DOT__pip_fore0__DOT__j_pc)
                                                 : vlSelf->rvcpu__DOT__pip_fore0__DOT__j_pc))),64);
        tracep->fullBit(oldp+354,(((IData)(vlSelf->rst)
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
        tracep->fullQData(oldp+355,((((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->rvcpu__DOT__id_reg_ena1))
                                      ? ((((IData)(vlSelf->rvcpu__DOT__wb_id_addr) 
                                           == (IData)(vlSelf->rvcpu__DOT__id_reg_addr1)) 
                                          & (IData)(vlSelf->rvcpu__DOT__wb_id_ena))
                                          ? vlSelf->rvcpu__DOT__wb_regfile_data
                                          : vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                         [vlSelf->rvcpu__DOT__id_reg_addr1])
                                      : 0ULL)),64);
        tracep->fullQData(oldp+357,((((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->rvcpu__DOT__id_reg_ena2))
                                      ? ((((IData)(vlSelf->rvcpu__DOT__wb_id_addr) 
                                           == (IData)(vlSelf->rvcpu__DOT__id_reg_addr2)) 
                                          & (IData)(vlSelf->rvcpu__DOT__wb_id_ena))
                                          ? vlSelf->rvcpu__DOT__wb_regfile_data
                                          : vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                         [vlSelf->rvcpu__DOT__id_reg_addr2])
                                      : 0ULL)),64);
        tracep->fullBit(oldp+359,(((~ (IData)(vlSelf->rst)) 
                                   & (((IData)(vlSelf->re) 
                                       | (IData)(vlSelf->we)) 
                                      & (~ (IData)(vlSelf->mem_finish))))));
        tracep->fullSData(oldp+360,((vlSelf->inst >> 0x14U)),12);
        tracep->fullCData(oldp+361,((0x7fU & vlSelf->inst)),7);
        tracep->fullBit(oldp+362,((IData)((0x6fU == 
                                           (0x7fU & vlSelf->inst)))));
        tracep->fullBit(oldp+363,((IData)((0x63U == 
                                           (0x7fU & vlSelf->inst)))));
        tracep->fullQData(oldp+364,(((IData)(vlSelf->rvcpu__DOT__pip_fore0__DOT__inst_jalr)
                                      ? ((1U & ((~ (IData)(vlSelf->rst)) 
                                                & ((IData)(vlSelf->rst)
                                                    ? 0U
                                                    : (IData)(vlSelf->rvcpu__DOT__pip_fore0__DOT__inst_jalr))))
                                          ? ((((IData)(vlSelf->rvcpu__DOT__wb_id_addr) 
                                               == (0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 0xfU))) 
                                              & (IData)(vlSelf->rvcpu__DOT__wb_id_ena))
                                              ? vlSelf->rvcpu__DOT__wb_regfile_data
                                              : vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                             [vlSelf->rvcpu__DOT__id_reg_addr1])
                                          : 0ULL) : vlSelf->inst_addr)),64);
        tracep->fullQData(oldp+366,(((IData)((0x6fU 
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
        tracep->fullBit(oldp+368,(((IData)(vlSelf->rst)
                                    ? 0U : (1U & (((IData)(vlSelf->rvcpu__DOT__id_reg_ena1) 
                                                   & (2U 
                                                      == (IData)(vlSelf->rvcpu__DOT__ex_id_rd_type))) 
                                                  & ((IData)(vlSelf->rvcpu__DOT__id_reg_addr1) 
                                                     == (IData)(vlSelf->rvcpu__DOT__idex_ex_rdaddr)))))));
        tracep->fullBit(oldp+369,(((IData)(vlSelf->rst)
                                    ? 0U : (1U & (((IData)(vlSelf->rvcpu__DOT__id_reg_ena2) 
                                                   & (2U 
                                                      == (IData)(vlSelf->rvcpu__DOT__ex_id_rd_type))) 
                                                  & ((IData)(vlSelf->rvcpu__DOT__id_reg_addr2) 
                                                     == (IData)(vlSelf->rvcpu__DOT__idex_ex_rdaddr)))))));
        tracep->fullQData(oldp+370,(((2U == (IData)(vlSelf->rvcpu__DOT__exmem_mem_type))
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
        tracep->fullQData(oldp+372,(((IData)(vlSelf->rst)
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
        tracep->fullQData(oldp+374,(((IData)(vlSelf->rst)
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
        tracep->fullQData(oldp+376,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((1U 
                                                 & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))
                                                 ? 
                                                ((QData)((IData)(vlSelf->rvcpu__DOT__exmem_mem_data)) 
                                                 << 0x20U)
                                                 : (QData)((IData)(vlSelf->rvcpu__DOT__exmem_mem_data))))),64);
        tracep->fullCData(oldp+378,(((IData)(vlSelf->rst)
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
        tracep->fullCData(oldp+379,(((IData)(vlSelf->rst)
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
        tracep->fullCData(oldp+380,(((IData)(vlSelf->rst)
                                      ? 0U : ((1U & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))
                                               ? 0xf0U
                                               : 0xfU))),8);
        tracep->fullCData(oldp+381,(0U),2);
    }
}
