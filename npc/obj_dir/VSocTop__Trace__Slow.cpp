// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSocTop__Syms.h"


void VSocTop___024root__traceInitSub0(VSocTop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VSocTop___024root__traceInitTop(VSocTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VSocTop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VSocTop___024root__traceInitSub0(VSocTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+491,"clk", false,-1);
        tracep->declBit(c+492,"rst", false,-1);
        tracep->declBus(c+493,"out_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+494,"out_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+496,"out_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+497,"out_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+498,"out_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+499,"out_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+500,"out_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+501,"out_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+502,"out_axi_aw_valid", false,-1);
        tracep->declBit(c+503,"out_axi_aw_ready", false,-1);
        tracep->declQuad(c+504,"out_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+506,"out_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+507,"out_axi_w_last", false,-1);
        tracep->declBit(c+508,"out_axi_w_valid", false,-1);
        tracep->declBit(c+509,"out_axi_w_ready", false,-1);
        tracep->declBus(c+510,"out_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+511,"out_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+512,"out_axi_b_valid", false,-1);
        tracep->declBit(c+513,"out_axi_b_ready", false,-1);
        tracep->declBus(c+514,"out_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+515,"out_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+517,"out_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+518,"out_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+519,"out_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+520,"out_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+521,"out_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+522,"out_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+523,"out_axi_ar_valid", false,-1);
        tracep->declBit(c+524,"out_axi_ar_ready", false,-1);
        tracep->declBus(c+525,"out_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+526,"out_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+528,"out_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+529,"out_axi_r_last", false,-1);
        tracep->declBit(c+530,"out_axi_r_valid", false,-1);
        tracep->declBit(c+531,"out_axi_r_ready", false,-1);
        tracep->declBit(c+491,"SocTop clk", false,-1);
        tracep->declBit(c+492,"SocTop rst", false,-1);
        tracep->declBus(c+493,"SocTop out_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+494,"SocTop out_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+496,"SocTop out_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+497,"SocTop out_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+498,"SocTop out_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+499,"SocTop out_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+500,"SocTop out_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+501,"SocTop out_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+502,"SocTop out_axi_aw_valid", false,-1);
        tracep->declBit(c+503,"SocTop out_axi_aw_ready", false,-1);
        tracep->declQuad(c+504,"SocTop out_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+506,"SocTop out_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+507,"SocTop out_axi_w_last", false,-1);
        tracep->declBit(c+508,"SocTop out_axi_w_valid", false,-1);
        tracep->declBit(c+509,"SocTop out_axi_w_ready", false,-1);
        tracep->declBus(c+510,"SocTop out_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+511,"SocTop out_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+512,"SocTop out_axi_b_valid", false,-1);
        tracep->declBit(c+513,"SocTop out_axi_b_ready", false,-1);
        tracep->declBus(c+514,"SocTop out_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+515,"SocTop out_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+517,"SocTop out_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+518,"SocTop out_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+519,"SocTop out_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+520,"SocTop out_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+521,"SocTop out_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+522,"SocTop out_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+523,"SocTop out_axi_ar_valid", false,-1);
        tracep->declBit(c+524,"SocTop out_axi_ar_ready", false,-1);
        tracep->declBus(c+525,"SocTop out_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+526,"SocTop out_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+528,"SocTop out_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+529,"SocTop out_axi_r_last", false,-1);
        tracep->declBit(c+530,"SocTop out_axi_r_valid", false,-1);
        tracep->declBit(c+531,"SocTop out_axi_r_ready", false,-1);
        tracep->declQuad(c+484,"SocTop rvcpu_inst_addr", false,-1, 63,0);
        tracep->declBit(c+492,"SocTop rvcpu_inst_ena", false,-1);
        tracep->declQuad(c+1,"SocTop rvcpu_data_addr", false,-1, 63,0);
        tracep->declBus(c+3,"SocTop rvcpu_wmask", false,-1, 7,0);
        tracep->declQuad(c+4,"SocTop rvcpu_data_o", false,-1, 63,0);
        tracep->declBit(c+6,"SocTop rvcpu_we", false,-1);
        tracep->declBit(c+7,"SocTop rvcpu_re", false,-1);
        tracep->declBus(c+8,"SocTop i_cache_inst_data", false,-1, 31,0);
        tracep->declBit(c+174,"SocTop i_cache_inst_valid", false,-1);
        tracep->declBit(c+422,"SocTop i_cache_read_ena", false,-1);
        tracep->declQuad(c+484,"SocTop i_cache_addr", false,-1, 63,0);
        tracep->declQuad(c+9,"SocTop d_cache_data_out", false,-1, 63,0);
        tracep->declBit(c+175,"SocTop d_cache_mem_finish", false,-1);
        tracep->declQuad(c+1,"SocTop d_cache_out_addr", false,-1, 63,0);
        tracep->declQuad(c+176,"SocTop d_cache_out_data", false,-1, 63,0);
        tracep->declBit(c+11,"SocTop d_cache_read_ena", false,-1);
        tracep->declBit(c+12,"SocTop d_cache_write_ena", false,-1);
        tracep->declQuad(c+13,"SocTop arbitrate_d_data", false,-1, 63,0);
        tracep->declBit(c+15,"SocTop arbitrate_d_ok", false,-1);
        tracep->declBus(c+16,"SocTop arbitrate_i_data", false,-1, 31,0);
        tracep->declBit(c+17,"SocTop arbitrate_i_ok", false,-1);
        tracep->declBit(c+559,"SocTop time_init_sign", false,-1);
        tracep->declBus(c+560,"SocTop t_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+18,"SocTop t_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+561,"SocTop t_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+562,"SocTop t_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+563,"SocTop t_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+564,"SocTop t_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+565,"SocTop t_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+560,"SocTop t_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+503,"SocTop t_axi_aw_ready", false,-1);
        tracep->declBit(c+20,"SocTop t_axi_aw_valid", false,-1);
        tracep->declQuad(c+178,"SocTop t_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+21,"SocTop t_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+566,"SocTop t_axi_w_last", false,-1);
        tracep->declBit(c+20,"SocTop t_axi_w_valid", false,-1);
        tracep->declBit(c+509,"SocTop t_axi_w_ready", false,-1);
        tracep->declBus(c+510,"SocTop t_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+511,"SocTop t_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+512,"SocTop t_axi_b_valid", false,-1);
        tracep->declBit(c+22,"SocTop t_axi_b_ready", false,-1);
        tracep->declBus(c+180,"SocTop t_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+532,"SocTop t_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+561,"SocTop t_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+423,"SocTop t_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+563,"SocTop t_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+564,"SocTop t_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+565,"SocTop t_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+560,"SocTop t_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+23,"SocTop t_axi_ar_valid", false,-1);
        tracep->declBit(c+524,"SocTop t_axi_ar_ready", false,-1);
        tracep->declBus(c+525,"SocTop t_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+526,"SocTop t_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+528,"SocTop t_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+529,"SocTop t_axi_r_last", false,-1);
        tracep->declBit(c+530,"SocTop t_axi_r_valid", false,-1);
        tracep->declBit(c+24,"SocTop t_axi_r_ready", false,-1);
        tracep->declBus(c+567,"SocTop d_cache_mask_gd", false,-1, 7,0);
        tracep->declBit(c+25,"SocTop rvcpu_inst_ready", false,-1);
        tracep->declBit(c+491,"SocTop rvcpu1 clk", false,-1);
        tracep->declBit(c+492,"SocTop rvcpu1 rst", false,-1);
        tracep->declQuad(c+484,"SocTop rvcpu1 inst_addr", false,-1, 63,0);
        tracep->declBit(c+492,"SocTop rvcpu1 inst_ena", false,-1);
        tracep->declBit(c+25,"SocTop rvcpu1 inst_ready", false,-1);
        tracep->declBus(c+8,"SocTop rvcpu1 inst", false,-1, 31,0);
        tracep->declBit(c+174,"SocTop rvcpu1 bui_inst_valid", false,-1);
        tracep->declQuad(c+1,"SocTop rvcpu1 data_addr", false,-1, 63,0);
        tracep->declBus(c+3,"SocTop rvcpu1 wmask", false,-1, 7,0);
        tracep->declQuad(c+4,"SocTop rvcpu1 data_o", false,-1, 63,0);
        tracep->declQuad(c+9,"SocTop rvcpu1 data_i", false,-1, 63,0);
        tracep->declBit(c+6,"SocTop rvcpu1 we", false,-1);
        tracep->declBit(c+7,"SocTop rvcpu1 re", false,-1);
        tracep->declBit(c+175,"SocTop rvcpu1 mem_finish", false,-1);
        tracep->declBit(c+559,"SocTop rvcpu1 timer_intr", false,-1);
        tracep->declQuad(c+534,"SocTop rvcpu1 pip_regfile_x1", false,-1, 63,0);
        tracep->declBit(c+536,"SocTop rvcpu1 pip_refflie_x1_ena", false,-1);
        tracep->declBus(c+26,"SocTop rvcpu1 pip_regfile_x1_addr", false,-1, 4,0);
        tracep->declQuad(c+537,"SocTop rvcpu1 pip_pc", false,-1, 63,0);
        tracep->declBit(c+27,"SocTop rvcpu1 if_stall_req", false,-1);
        tracep->declQuad(c+181,"SocTop rvcpu1 if_id_pc", false,-1, 63,0);
        tracep->declBus(c+183,"SocTop rvcpu1 if_id_inst", false,-1, 31,0);
        tracep->declBit(c+184,"SocTop rvcpu1 ex_flush", false,-1);
        tracep->declQuad(c+28,"SocTop rvcpu1 ex_id_rd_data", false,-1, 63,0);
        tracep->declBus(c+185,"SocTop rvcpu1 ex_id_rd_addr", false,-1, 4,0);
        tracep->declBit(c+186,"SocTop rvcpu1 ex_id_rd_ena", false,-1);
        tracep->declBus(c+187,"SocTop rvcpu1 ex_id_rd_type", false,-1, 7,0);
        tracep->declBus(c+188,"SocTop rvcpu1 ex_mem_sel", false,-1, 2,0);
        tracep->declQuad(c+189,"SocTop rvcpu1 ex_mem_addr", false,-1, 63,0);
        tracep->declBit(c+184,"SocTop rvcpu1 ex_pc_branchena", false,-1);
        tracep->declQuad(c+191,"SocTop rvcpu1 ex_pc_branchpc", false,-1, 63,0);
        tracep->declBit(c+145,"SocTop rvcpu1 ex_ctrl_req", false,-1);
        tracep->declBus(c+30,"SocTop rvcpu1 id_reg_addr1", false,-1, 4,0);
        tracep->declBit(c+31,"SocTop rvcpu1 id_reg_ena1", false,-1);
        tracep->declBus(c+32,"SocTop rvcpu1 id_reg_addr2", false,-1, 4,0);
        tracep->declBit(c+33,"SocTop rvcpu1 id_reg_ena2", false,-1);
        tracep->declBit(c+539,"SocTop rvcpu1 id_ctrl_req", false,-1);
        tracep->declBus(c+34,"SocTop rvcpu1 id_ex_type", false,-1, 7,0);
        tracep->declBus(c+35,"SocTop rvcpu1 id_ex_opcode", false,-1, 7,0);
        tracep->declQuad(c+36,"SocTop rvcpu1 id_ex_op", false,-1, 63,0);
        tracep->declQuad(c+38,"SocTop rvcpu1 id_ex_op2", false,-1, 63,0);
        tracep->declBit(c+40,"SocTop rvcpu1 id_ex_rd_ena", false,-1);
        tracep->declBus(c+41,"SocTop rvcpu1 id_ex_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+42,"SocTop rvcpu1 id_ex_pc", false,-1, 63,0);
        tracep->declBus(c+44,"SocTop rvcpu1 id_ex_s_offset", false,-1, 11,0);
        tracep->declBus(c+45,"SocTop rvcpu1 id_ex_memsel", false,-1, 2,0);
        tracep->declQuad(c+146,"SocTop rvcpu1 id_pip_jalrpc", false,-1, 63,0);
        tracep->declBit(c+46,"SocTop rvcpu1 id_pip_jalrena", false,-1);
        tracep->declBit(c+47,"SocTop rvcpu1 id_if_flush", false,-1);
        tracep->declBus(c+48,"SocTop rvcpu1 stall_ctrl", false,-1, 4,0);
        tracep->declQuad(c+540,"SocTop rvcpu1 regs_id_data1", false,-1, 63,0);
        tracep->declQuad(c+542,"SocTop rvcpu1 regs_id_data2", false,-1, 63,0);
        tracep->declQuad(c+49,"SocTop rvcpu1 mem_id_data", false,-1, 63,0);
        tracep->declBus(c+193,"SocTop rvcpu1 mem_id_addr", false,-1, 4,0);
        tracep->declBit(c+194,"SocTop rvcpu1 mem_id_ena", false,-1);
        tracep->declBit(c+544,"SocTop rvcpu1 mem_ctrl_req", false,-1);
        tracep->declBus(c+195,"SocTop rvcpu1 wb_id_addr", false,-1, 4,0);
        tracep->declBit(c+196,"SocTop rvcpu1 wb_id_ena", false,-1);
        tracep->declQuad(c+197,"SocTop rvcpu1 wb_regfile_data", false,-1, 63,0);
        tracep->declQuad(c+199,"SocTop rvcpu1 idex_ex_pc", false,-1, 63,0);
        tracep->declBus(c+201,"SocTop rvcpu1 idex_ex_type", false,-1, 7,0);
        tracep->declBus(c+202,"SocTop rvcpu1 idex_ex_opcode", false,-1, 7,0);
        tracep->declQuad(c+203,"SocTop rvcpu1 idex_ex_op1", false,-1, 63,0);
        tracep->declQuad(c+205,"SocTop rvcpu1 idex_ex_op2", false,-1, 63,0);
        tracep->declBit(c+207,"SocTop rvcpu1 idex_ex_rdena", false,-1);
        tracep->declBus(c+185,"SocTop rvcpu1 idex_ex_rdaddr", false,-1, 4,0);
        tracep->declBus(c+208,"SocTop rvcpu1 idex_ex_offset", false,-1, 11,0);
        tracep->declBus(c+188,"SocTop rvcpu1 idex_ex_sel", false,-1, 2,0);
        tracep->declBus(c+209,"SocTop rvcpu1 exmem_mem_type", false,-1, 7,0);
        tracep->declBit(c+194,"SocTop rvcpu1 exmem_mem_ena", false,-1);
        tracep->declQuad(c+210,"SocTop rvcpu1 exmem_mem_data", false,-1, 63,0);
        tracep->declBus(c+193,"SocTop rvcpu1 exmem_mem_addr", false,-1, 4,0);
        tracep->declBus(c+212,"SocTop rvcpu1 exmem_mem_sel", false,-1, 2,0);
        tracep->declQuad(c+213,"SocTop rvcpu1 exmem_mem_lsaddr", false,-1, 63,0);
        tracep->declQuad(c+51,"SocTop rvcpu1 ex_ex_mem_pc", false,-1, 63,0);
        tracep->declQuad(c+215,"SocTop rvcpu1 ex_mem_mem_pc", false,-1, 63,0);
        tracep->declQuad(c+53,"SocTop rvcpu1 mem_mem_wb_pc", false,-1, 63,0);
        tracep->declBus(c+55,"SocTop rvcpu1 id_id_ex_inst", false,-1, 31,0);
        tracep->declBus(c+217,"SocTop rvcpu1 id_ex_ex_inst", false,-1, 31,0);
        tracep->declBus(c+56,"SocTop rvcpu1 ex_ex_mem_inst", false,-1, 31,0);
        tracep->declBus(c+218,"SocTop rvcpu1 ex_mem_mem_inst", false,-1, 31,0);
        tracep->declBus(c+57,"SocTop rvcpu1 mem_mem_wb_inst", false,-1, 31,0);
        tracep->declBit(c+492,"SocTop rvcpu1 pip_fore0 rst", false,-1);
        tracep->declQuad(c+484,"SocTop rvcpu1 pip_fore0 pc_i", false,-1, 63,0);
        tracep->declBus(c+8,"SocTop rvcpu1 pip_fore0 inst", false,-1, 31,0);
        tracep->declQuad(c+534,"SocTop rvcpu1 pip_fore0 x1_data", false,-1, 63,0);
        tracep->declQuad(c+537,"SocTop rvcpu1 pip_fore0 pc_o", false,-1, 63,0);
        tracep->declBus(c+26,"SocTop rvcpu1 pip_fore0 x1_addr", false,-1, 4,0);
        tracep->declBit(c+536,"SocTop rvcpu1 pip_fore0 x1_ena", false,-1);
        tracep->declBus(c+58,"SocTop rvcpu1 pip_fore0 j_imm", false,-1, 20,1);
        tracep->declBus(c+59,"SocTop rvcpu1 pip_fore0 i_imm", false,-1, 11,0);
        tracep->declBus(c+60,"SocTop rvcpu1 pip_fore0 b_imm", false,-1, 12,1);
        tracep->declBus(c+61,"SocTop rvcpu1 pip_fore0 opcode", false,-1, 6,0);
        tracep->declBit(c+62,"SocTop rvcpu1 pip_fore0 inst_jal", false,-1);
        tracep->declBit(c+63,"SocTop rvcpu1 pip_fore0 inst_jalr", false,-1);
        tracep->declBit(c+64,"SocTop rvcpu1 pip_fore0 inst_bxx", false,-1);
        tracep->declQuad(c+65,"SocTop rvcpu1 pip_fore0 operand1", false,-1, 63,0);
        tracep->declQuad(c+67,"SocTop rvcpu1 pip_fore0 operand2", false,-1, 63,0);
        tracep->declQuad(c+69,"SocTop rvcpu1 pip_fore0 j_pc", false,-1, 63,0);
        tracep->declBit(c+491,"SocTop rvcpu1 pc1 clk", false,-1);
        tracep->declBit(c+492,"SocTop rvcpu1 pc1 rst", false,-1);
        tracep->declQuad(c+537,"SocTop rvcpu1 pc1 static_pc_i", false,-1, 63,0);
        tracep->declQuad(c+146,"SocTop rvcpu1 pc1 id_pc_i", false,-1, 63,0);
        tracep->declBit(c+46,"SocTop rvcpu1 pc1 id_pc_ena", false,-1);
        tracep->declQuad(c+191,"SocTop rvcpu1 pc1 ex_pc_i", false,-1, 63,0);
        tracep->declBit(c+184,"SocTop rvcpu1 pc1 ex_pc_ena", false,-1);
        tracep->declBit(c+71,"SocTop rvcpu1 pc1 pc_stall", false,-1);
        tracep->declQuad(c+484,"SocTop rvcpu1 pc1 pc", false,-1, 63,0);
        tracep->declBit(c+492,"SocTop rvcpu1 pc1 ce", false,-1);
        tracep->declBit(c+491,"SocTop rvcpu1 if_id2 clk", false,-1);
        tracep->declBit(c+492,"SocTop rvcpu1 if_id2 rst", false,-1);
        tracep->declQuad(c+484,"SocTop rvcpu1 if_id2 if_pc", false,-1, 63,0);
        tracep->declBus(c+8,"SocTop rvcpu1 if_id2 if_inst", false,-1, 31,0);
        tracep->declBit(c+184,"SocTop rvcpu1 if_id2 if_id_flush", false,-1);
        tracep->declBit(c+47,"SocTop rvcpu1 if_id2 if_id_bubble", false,-1);
        tracep->declBit(c+174,"SocTop rvcpu1 if_id2 if_inst_valid", false,-1);
        tracep->declBit(c+25,"SocTop rvcpu1 if_id2 if_inst_ready", false,-1);
        tracep->declBus(c+48,"SocTop rvcpu1 if_id2 stall_ctrl", false,-1, 4,0);
        tracep->declBit(c+27,"SocTop rvcpu1 if_id2 if_stall_req", false,-1);
        tracep->declQuad(c+181,"SocTop rvcpu1 if_id2 id_pc", false,-1, 63,0);
        tracep->declBus(c+183,"SocTop rvcpu1 if_id2 id_inst", false,-1, 31,0);
        tracep->declBit(c+492,"SocTop rvcpu1 id3 rst", false,-1);
        tracep->declBus(c+183,"SocTop rvcpu1 id3 inst_i", false,-1, 31,0);
        tracep->declQuad(c+181,"SocTop rvcpu1 id3 pc_i", false,-1, 63,0);
        tracep->declQuad(c+540,"SocTop rvcpu1 id3 op1_data_i", false,-1, 63,0);
        tracep->declQuad(c+542,"SocTop rvcpu1 id3 op2_data_i", false,-1, 63,0);
        tracep->declBus(c+30,"SocTop rvcpu1 id3 op1_addr_o", false,-1, 4,0);
        tracep->declBus(c+32,"SocTop rvcpu1 id3 op2_addr_o", false,-1, 4,0);
        tracep->declBit(c+31,"SocTop rvcpu1 id3 op1_read_o", false,-1);
        tracep->declBit(c+33,"SocTop rvcpu1 id3 op2_read_o", false,-1);
        tracep->declQuad(c+28,"SocTop rvcpu1 id3 ex_rd_data", false,-1, 63,0);
        tracep->declBus(c+185,"SocTop rvcpu1 id3 ex_rd_addr", false,-1, 4,0);
        tracep->declBit(c+186,"SocTop rvcpu1 id3 ex_rd_ena", false,-1);
        tracep->declBus(c+187,"SocTop rvcpu1 id3 ex_inst_type", false,-1, 7,0);
        tracep->declQuad(c+49,"SocTop rvcpu1 id3 mem_rd_data", false,-1, 63,0);
        tracep->declBus(c+193,"SocTop rvcpu1 id3 mem_rd_addr", false,-1, 4,0);
        tracep->declBit(c+194,"SocTop rvcpu1 id3 mem_rd_ena", false,-1);
        tracep->declBit(c+196,"SocTop rvcpu1 id3 wb_rd_ena", false,-1);
        tracep->declBus(c+195,"SocTop rvcpu1 id3 wb_rd_addr", false,-1, 4,0);
        tracep->declBit(c+539,"SocTop rvcpu1 id3 id_stall_req", false,-1);
        tracep->declBit(c+27,"SocTop rvcpu1 id3 if_stall_req", false,-1);
        tracep->declBus(c+34,"SocTop rvcpu1 id3 inst_type", false,-1, 7,0);
        tracep->declBus(c+35,"SocTop rvcpu1 id3 inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+36,"SocTop rvcpu1 id3 op1_o", false,-1, 63,0);
        tracep->declQuad(c+38,"SocTop rvcpu1 id3 op2_o", false,-1, 63,0);
        tracep->declBit(c+40,"SocTop rvcpu1 id3 rd_w_ena", false,-1);
        tracep->declBus(c+41,"SocTop rvcpu1 id3 rd_w_addr", false,-1, 4,0);
        tracep->declQuad(c+42,"SocTop rvcpu1 id3 pc_o", false,-1, 63,0);
        tracep->declBus(c+55,"SocTop rvcpu1 id3 inst_o", false,-1, 31,0);
        tracep->declBus(c+44,"SocTop rvcpu1 id3 store_addr_offset", false,-1, 11,0);
        tracep->declBus(c+45,"SocTop rvcpu1 id3 mem_op_sel", false,-1, 2,0);
        tracep->declBit(c+46,"SocTop rvcpu1 id3 jalr_pc_ena", false,-1);
        tracep->declQuad(c+146,"SocTop rvcpu1 id3 jalr_pc", false,-1, 63,0);
        tracep->declBit(c+47,"SocTop rvcpu1 id3 id_flush", false,-1);
        tracep->declBus(c+219,"SocTop rvcpu1 id3 opcode", false,-1, 6,0);
        tracep->declBus(c+220,"SocTop rvcpu1 id3 rd", false,-1, 4,0);
        tracep->declBus(c+221,"SocTop rvcpu1 id3 funct3", false,-1, 2,0);
        tracep->declBus(c+72,"SocTop rvcpu1 id3 rs1", false,-1, 4,0);
        tracep->declBus(c+222,"SocTop rvcpu1 id3 imm", false,-1, 11,0);
        tracep->declBus(c+223,"SocTop rvcpu1 id3 funct7", false,-1, 6,0);
        tracep->declBus(c+224,"SocTop rvcpu1 id3 rs2", false,-1, 4,0);
        tracep->declBus(c+225,"SocTop rvcpu1 id3 u_imm", false,-1, 19,0);
        tracep->declBus(c+226,"SocTop rvcpu1 id3 s_imm", false,-1, 11,0);
        tracep->declBit(c+73,"SocTop rvcpu1 id3 inst_lui", false,-1);
        tracep->declBit(c+74,"SocTop rvcpu1 id3 inst_auipc", false,-1);
        tracep->declBit(c+75,"SocTop rvcpu1 id3 inst_jal", false,-1);
        tracep->declBit(c+76,"SocTop rvcpu1 id3 inst_jalr", false,-1);
        tracep->declBit(c+77,"SocTop rvcpu1 id3 inst_jump", false,-1);
        tracep->declBit(c+148,"SocTop rvcpu1 id3 inst_addi", false,-1);
        tracep->declBit(c+149,"SocTop rvcpu1 id3 inst_slti", false,-1);
        tracep->declBit(c+150,"SocTop rvcpu1 id3 inst_sltiu", false,-1);
        tracep->declBit(c+151,"SocTop rvcpu1 id3 inst_xori", false,-1);
        tracep->declBit(c+152,"SocTop rvcpu1 id3 inst_ori", false,-1);
        tracep->declBit(c+153,"SocTop rvcpu1 id3 inst_andi", false,-1);
        tracep->declBit(c+154,"SocTop rvcpu1 id3 inst_slli", false,-1);
        tracep->declBit(c+155,"SocTop rvcpu1 id3 inst_srli", false,-1);
        tracep->declBit(c+78,"SocTop rvcpu1 id3 inst_srai", false,-1);
        tracep->declBit(c+79,"SocTop rvcpu1 id3 inst_addiw", false,-1);
        tracep->declBit(c+80,"SocTop rvcpu1 id3 inst_slliw", false,-1);
        tracep->declBit(c+81,"SocTop rvcpu1 id3 inst_srliw", false,-1);
        tracep->declBit(c+82,"SocTop rvcpu1 id3 inst_sraiw", false,-1);
        tracep->declBit(c+83,"SocTop rvcpu1 id3 inst_add", false,-1);
        tracep->declBit(c+84,"SocTop rvcpu1 id3 inst_sub", false,-1);
        tracep->declBit(c+85,"SocTop rvcpu1 id3 inst_sll", false,-1);
        tracep->declBit(c+86,"SocTop rvcpu1 id3 inst_slt", false,-1);
        tracep->declBit(c+87,"SocTop rvcpu1 id3 inst_sltu", false,-1);
        tracep->declBit(c+88,"SocTop rvcpu1 id3 inst_xor", false,-1);
        tracep->declBit(c+89,"SocTop rvcpu1 id3 inst_srl", false,-1);
        tracep->declBit(c+90,"SocTop rvcpu1 id3 inst_sra", false,-1);
        tracep->declBit(c+91,"SocTop rvcpu1 id3 inst_or", false,-1);
        tracep->declBit(c+92,"SocTop rvcpu1 id3 inst_and", false,-1);
        tracep->declBit(c+93,"SocTop rvcpu1 id3 inst_addw", false,-1);
        tracep->declBit(c+94,"SocTop rvcpu1 id3 inst_subw", false,-1);
        tracep->declBit(c+95,"SocTop rvcpu1 id3 inst_sllw", false,-1);
        tracep->declBit(c+96,"SocTop rvcpu1 id3 inst_srlw", false,-1);
        tracep->declBit(c+97,"SocTop rvcpu1 id3 inst_sraw", false,-1);
        tracep->declBit(c+156,"SocTop rvcpu1 id3 inst_beq", false,-1);
        tracep->declBit(c+157,"SocTop rvcpu1 id3 inst_ben", false,-1);
        tracep->declBit(c+158,"SocTop rvcpu1 id3 inst_blt", false,-1);
        tracep->declBit(c+159,"SocTop rvcpu1 id3 inst_bge", false,-1);
        tracep->declBit(c+160,"SocTop rvcpu1 id3 inst_bltu", false,-1);
        tracep->declBit(c+161,"SocTop rvcpu1 id3 inst_bgeu", false,-1);
        tracep->declBit(c+98,"SocTop rvcpu1 id3 inst_csrrw", false,-1);
        tracep->declBit(c+99,"SocTop rvcpu1 id3 inst_csrrs", false,-1);
        tracep->declBit(c+100,"SocTop rvcpu1 id3 inst_csrrc", false,-1);
        tracep->declBit(c+101,"SocTop rvcpu1 id3 inst_csrrwi", false,-1);
        tracep->declBit(c+162,"SocTop rvcpu1 id3 inst_csrrsi", false,-1);
        tracep->declBit(c+163,"SocTop rvcpu1 id3 inst_csrrci", false,-1);
        tracep->declBit(c+102,"SocTop rvcpu1 id3 inst_csr_rs1", false,-1);
        tracep->declBit(c+101,"SocTop rvcpu1 id3 inst_csr_imm", false,-1);
        tracep->declBit(c+164,"SocTop rvcpu1 id3 inst_ecall", false,-1);
        tracep->declBit(c+103,"SocTop rvcpu1 id3 inst_ebreak", false,-1);
        tracep->declBit(c+165,"SocTop rvcpu1 id3 inst_mret", false,-1);
        tracep->declBit(c+545,"SocTop rvcpu1 id3 op1_loda_relate", false,-1);
        tracep->declBit(c+546,"SocTop rvcpu1 id3 op2_loda_relate", false,-1);
        tracep->declBit(c+104,"SocTop rvcpu1 id3 ex_op1", false,-1);
        tracep->declBit(c+105,"SocTop rvcpu1 id3 mem_op1", false,-1);
        tracep->declBit(c+166,"SocTop rvcpu1 id3 ex_op2", false,-1);
        tracep->declBit(c+167,"SocTop rvcpu1 id3 mem_op2", false,-1);
        tracep->declBit(c+168,"SocTop rvcpu1 id3 wb_op1", false,-1);
        tracep->declQuad(c+169,"SocTop rvcpu1 id3 jalr_pc_temp", false,-1, 63,0);
        tracep->declBit(c+171,"SocTop rvcpu1 id3 predict_success", false,-1);
        tracep->declBit(c+491,"SocTop rvcpu1 id_ex4 clk", false,-1);
        tracep->declBit(c+492,"SocTop rvcpu1 id_ex4 rst", false,-1);
        tracep->declBit(c+184,"SocTop rvcpu1 id_ex4 id_ex_bubble", false,-1);
        tracep->declBus(c+48,"SocTop rvcpu1 id_ex4 stall_ctrl", false,-1, 4,0);
        tracep->declBus(c+55,"SocTop rvcpu1 id_ex4 id_inst", false,-1, 31,0);
        tracep->declQuad(c+42,"SocTop rvcpu1 id_ex4 id_pc", false,-1, 63,0);
        tracep->declBus(c+34,"SocTop rvcpu1 id_ex4 id_inst_type", false,-1, 7,0);
        tracep->declBus(c+35,"SocTop rvcpu1 id_ex4 id_inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+36,"SocTop rvcpu1 id_ex4 id_op1", false,-1, 63,0);
        tracep->declQuad(c+38,"SocTop rvcpu1 id_ex4 id_op2", false,-1, 63,0);
        tracep->declBit(c+40,"SocTop rvcpu1 id_ex4 id_rd_ena", false,-1);
        tracep->declBus(c+41,"SocTop rvcpu1 id_ex4 id_rd_addr", false,-1, 4,0);
        tracep->declBus(c+44,"SocTop rvcpu1 id_ex4 id_addr_offset", false,-1, 11,0);
        tracep->declBus(c+45,"SocTop rvcpu1 id_ex4 id_ls_sel", false,-1, 2,0);
        tracep->declBus(c+217,"SocTop rvcpu1 id_ex4 ex_inst", false,-1, 31,0);
        tracep->declQuad(c+199,"SocTop rvcpu1 id_ex4 ex_pc", false,-1, 63,0);
        tracep->declBus(c+201,"SocTop rvcpu1 id_ex4 ex_inst_type", false,-1, 7,0);
        tracep->declBus(c+202,"SocTop rvcpu1 id_ex4 ex_inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+203,"SocTop rvcpu1 id_ex4 ex_op1", false,-1, 63,0);
        tracep->declQuad(c+205,"SocTop rvcpu1 id_ex4 ex_op2", false,-1, 63,0);
        tracep->declBit(c+207,"SocTop rvcpu1 id_ex4 ex_rd_ena", false,-1);
        tracep->declBus(c+185,"SocTop rvcpu1 id_ex4 ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+208,"SocTop rvcpu1 id_ex4 ex_addr_offset", false,-1, 11,0);
        tracep->declBus(c+188,"SocTop rvcpu1 id_ex4 ex_ls_sel", false,-1, 2,0);
        tracep->declBit(c+491,"SocTop rvcpu1 ex5 clk", false,-1);
        tracep->declBit(c+492,"SocTop rvcpu1 ex5 rst", false,-1);
        tracep->declQuad(c+199,"SocTop rvcpu1 ex5 pc_i", false,-1, 63,0);
        tracep->declBus(c+217,"SocTop rvcpu1 ex5 id_ex_inst", false,-1, 31,0);
        tracep->declBus(c+201,"SocTop rvcpu1 ex5 inst_type_i", false,-1, 7,0);
        tracep->declBus(c+202,"SocTop rvcpu1 ex5 inst_opcode_i", false,-1, 7,0);
        tracep->declQuad(c+203,"SocTop rvcpu1 ex5 op1_i", false,-1, 63,0);
        tracep->declQuad(c+205,"SocTop rvcpu1 ex5 op2_i", false,-1, 63,0);
        tracep->declBit(c+207,"SocTop rvcpu1 ex5 rd_ena_i", false,-1);
        tracep->declBus(c+185,"SocTop rvcpu1 ex5 rd_addr_i", false,-1, 4,0);
        tracep->declBus(c+188,"SocTop rvcpu1 ex5 ls_sel_i", false,-1, 2,0);
        tracep->declBus(c+208,"SocTop rvcpu1 ex5 addr_offsel_i", false,-1, 11,0);
        tracep->declBus(c+187,"SocTop rvcpu1 ex5 inst_type_o", false,-1, 7,0);
        tracep->declBit(c+186,"SocTop rvcpu1 ex5 rd_ena_o", false,-1);
        tracep->declBus(c+185,"SocTop rvcpu1 ex5 rd_addr_o", false,-1, 4,0);
        tracep->declQuad(c+28,"SocTop rvcpu1 ex5 rd_data_o", false,-1, 63,0);
        tracep->declQuad(c+51,"SocTop rvcpu1 ex5 ex_pc_o", false,-1, 63,0);
        tracep->declBus(c+56,"SocTop rvcpu1 ex5 ex_inst_o", false,-1, 31,0);
        tracep->declBus(c+188,"SocTop rvcpu1 ex5 ls_sel_o", false,-1, 2,0);
        tracep->declQuad(c+189,"SocTop rvcpu1 ex5 ls_addr_o", false,-1, 63,0);
        tracep->declBit(c+184,"SocTop rvcpu1 ex5 ex_flush", false,-1);
        tracep->declBit(c+184,"SocTop rvcpu1 ex5 branch_pc_ena", false,-1);
        tracep->declQuad(c+191,"SocTop rvcpu1 ex5 branch_pc", false,-1, 63,0);
        tracep->declBit(c+27,"SocTop rvcpu1 ex5 if_stell_req", false,-1);
        tracep->declBit(c+145,"SocTop rvcpu1 ex5 ex_stall_req", false,-1);
        tracep->declBit(c+559,"SocTop rvcpu1 ex5 timer_intr", false,-1);
        tracep->declBit(c+106,"SocTop rvcpu1 ex5 ex_stall", false,-1);
        tracep->declQuad(c+107,"SocTop rvcpu1 ex5 exe_res", false,-1, 63,0);
        tracep->declQuad(c+227,"SocTop rvcpu1 ex5 op2_i_mux", false,-1, 63,0);
        tracep->declQuad(c+229,"SocTop rvcpu1 ex5 op1_sub_op2", false,-1, 63,0);
        tracep->declQuad(c+231,"SocTop rvcpu1 ex5 op1_add_op2", false,-1, 63,0);
        tracep->declQuad(c+233,"SocTop rvcpu1 ex5 op1_addw_op2", false,-1, 63,0);
        tracep->declBit(c+235,"SocTop rvcpu1 ex5 op1_ls_op2", false,-1);
        tracep->declQuad(c+236,"SocTop rvcpu1 ex5 shift_res", false,-1, 63,0);
        tracep->declBus(c+238,"SocTop rvcpu1 ex5 op1_sllw_op2", false,-1, 31,0);
        tracep->declQuad(c+239,"SocTop rvcpu1 ex5 sllw_res", false,-1, 63,0);
        tracep->declBus(c+241,"SocTop rvcpu1 ex5 op1_srlw_op2", false,-1, 31,0);
        tracep->declQuad(c+242,"SocTop rvcpu1 ex5 srlw_res", false,-1, 63,0);
        tracep->declBus(c+244,"SocTop rvcpu1 ex5 op1_sraw_op2", false,-1, 31,0);
        tracep->declQuad(c+245,"SocTop rvcpu1 ex5 sraw_res", false,-1, 63,0);
        tracep->declBus(c+247,"SocTop rvcpu1 ex5 op1_subw_op2", false,-1, 31,0);
        tracep->declQuad(c+248,"SocTop rvcpu1 ex5 subw_res", false,-1, 63,0);
        tracep->declQuad(c+250,"SocTop rvcpu1 ex5 upper_imm", false,-1, 63,0);
        tracep->declBit(c+252,"SocTop rvcpu1 ex5 ex_flush_branch", false,-1);
        tracep->declBit(c+253,"SocTop rvcpu1 ex5 tmr_trap_ena", false,-1);
        tracep->declBus(c+254,"SocTop rvcpu1 ex5 csr_idx", false,-1, 11,0);
        tracep->declQuad(c+255,"SocTop rvcpu1 ex5 read_csr_data", false,-1, 63,0);
        tracep->declBit(c+257,"SocTop rvcpu1 ex5 trap_ena", false,-1);
        tracep->declBit(c+258,"SocTop rvcpu1 ex5 ecall_trap_ena", false,-1);
        tracep->declBit(c+259,"SocTop rvcpu1 ex5 cmt_mret_ena", false,-1);
        tracep->declBit(c+260,"SocTop rvcpu1 ex5 csr_wr_en", false,-1);
        tracep->declBit(c+261,"SocTop rvcpu1 ex5 csr_rd_en", false,-1);
        tracep->declQuad(c+262,"SocTop rvcpu1 ex5 wbck_csr_data", false,-1, 63,0);
        tracep->declQuad(c+264,"SocTop rvcpu1 ex5 trap_mcause_value", false,-1, 63,0);
        tracep->declQuad(c+266,"SocTop rvcpu1 ex5 mask_set_res", false,-1, 63,0);
        tracep->declQuad(c+268,"SocTop rvcpu1 ex5 mask_clear_res", false,-1, 63,0);
        tracep->declBit(c+491,"SocTop rvcpu1 ex5 csr0 clk", false,-1);
        tracep->declBit(c+492,"SocTop rvcpu1 ex5 csr0 rst", false,-1);
        tracep->declQuad(c+199,"SocTop rvcpu1 ex5 csr0 pc_i", false,-1, 63,0);
        tracep->declBit(c+260,"SocTop rvcpu1 ex5 csr0 csr_wr_en", false,-1);
        tracep->declBit(c+261,"SocTop rvcpu1 ex5 csr0 csr_rd_en", false,-1);
        tracep->declBus(c+254,"SocTop rvcpu1 ex5 csr0 csr_idx", false,-1, 11,0);
        tracep->declBit(c+259,"SocTop rvcpu1 ex5 csr0 cmt_mret_ena", false,-1);
        tracep->declBit(c+258,"SocTop rvcpu1 ex5 csr0 ecall_trap_ena", false,-1);
        tracep->declQuad(c+264,"SocTop rvcpu1 ex5 csr0 trap_mcause_value", false,-1, 63,0);
        tracep->declBit(c+559,"SocTop rvcpu1 ex5 csr0 tmr_intr_ena", false,-1);
        tracep->declBit(c+253,"SocTop rvcpu1 ex5 csr0 tmr_trap_ena", false,-1);
        tracep->declQuad(c+255,"SocTop rvcpu1 ex5 csr0 read_csr_data", false,-1, 63,0);
        tracep->declQuad(c+262,"SocTop rvcpu1 ex5 csr0 wbck_csr_data", false,-1, 63,0);
        tracep->declBit(c+106,"SocTop rvcpu1 ex5 csr0 ex_stall", false,-1);
        tracep->declBit(c+270,"SocTop rvcpu1 ex5 csr0 sel_mcycle", false,-1);
        tracep->declBit(c+271,"SocTop rvcpu1 ex5 csr0 rd_mcycle", false,-1);
        tracep->declBit(c+272,"SocTop rvcpu1 ex5 csr0 wr_mcycle", false,-1);
        tracep->declQuad(c+273,"SocTop rvcpu1 ex5 csr0 csr_mcycle", false,-1, 63,0);
        tracep->declBit(c+275,"SocTop rvcpu1 ex5 csr0 sel_mstatus", false,-1);
        tracep->declBit(c+276,"SocTop rvcpu1 ex5 csr0 rd_mstatus", false,-1);
        tracep->declBit(c+277,"SocTop rvcpu1 ex5 csr0 wr_mstatus", false,-1);
        tracep->declBit(c+278,"SocTop rvcpu1 ex5 csr0 mstatus_mpie_ena", false,-1);
        tracep->declBit(c+279,"SocTop rvcpu1 ex5 csr0 mstatus_mpie_nxt", false,-1);
        tracep->declBit(c+280,"SocTop rvcpu1 ex5 csr0 csr_mstatus_mpie", false,-1);
        tracep->declBit(c+278,"SocTop rvcpu1 ex5 csr0 mstatus_mie_ena", false,-1);
        tracep->declBit(c+281,"SocTop rvcpu1 ex5 csr0 mstatus_mie_nxt", false,-1);
        tracep->declBit(c+282,"SocTop rvcpu1 ex5 csr0 csr_mstatus_mie", false,-1);
        tracep->declBit(c+278,"SocTop rvcpu1 ex5 csr0 mstatus_mpp_ena", false,-1);
        tracep->declBus(c+283,"SocTop rvcpu1 ex5 csr0 mstatus_mpp_nxt", false,-1, 1,0);
        tracep->declBus(c+284,"SocTop rvcpu1 ex5 csr0 csr_mstatus_mpp", false,-1, 1,0);
        tracep->declBus(c+568,"SocTop rvcpu1 ex5 csr0 csr_mstatus_xs", false,-1, 1,0);
        tracep->declBus(c+285,"SocTop rvcpu1 ex5 csr0 csr_mstatus_fs", false,-1, 1,0);
        tracep->declBit(c+286,"SocTop rvcpu1 ex5 csr0 csr_mstatus_sd", false,-1);
        tracep->declQuad(c+287,"SocTop rvcpu1 ex5 csr0 csr_mstatus", false,-1, 63,0);
        tracep->declBit(c+289,"SocTop rvcpu1 ex5 csr0 sel_mtvec", false,-1);
        tracep->declBit(c+290,"SocTop rvcpu1 ex5 csr0 rd_mtvec", false,-1);
        tracep->declBit(c+291,"SocTop rvcpu1 ex5 csr0 wr_mtvec", false,-1);
        tracep->declQuad(c+292,"SocTop rvcpu1 ex5 csr0 csr_mtvec_base", false,-1, 63,2);
        tracep->declBus(c+568,"SocTop rvcpu1 ex5 csr0 csr_mtvec_mode", false,-1, 1,0);
        tracep->declQuad(c+294,"SocTop rvcpu1 ex5 csr0 csr_mtvec", false,-1, 63,0);
        tracep->declBit(c+296,"SocTop rvcpu1 ex5 csr0 sel_mepc", false,-1);
        tracep->declBit(c+297,"SocTop rvcpu1 ex5 csr0 rd_mepc", false,-1);
        tracep->declBit(c+298,"SocTop rvcpu1 ex5 csr0 wr_mepc", false,-1);
        tracep->declQuad(c+299,"SocTop rvcpu1 ex5 csr0 csr_mepc", false,-1, 63,0);
        tracep->declBit(c+301,"SocTop rvcpu1 ex5 csr0 sel_mcause", false,-1);
        tracep->declBit(c+302,"SocTop rvcpu1 ex5 csr0 rd_mcause", false,-1);
        tracep->declBit(c+303,"SocTop rvcpu1 ex5 csr0 wr_mcause", false,-1);
        tracep->declBit(c+304,"SocTop rvcpu1 ex5 csr0 csr_mcause_ena", false,-1);
        tracep->declQuad(c+305,"SocTop rvcpu1 ex5 csr0 csr_mcause_nxt", false,-1, 63,0);
        tracep->declQuad(c+307,"SocTop rvcpu1 ex5 csr0 csr_mcause", false,-1, 63,0);
        tracep->declBit(c+309,"SocTop rvcpu1 ex5 csr0 sle_mie", false,-1);
        tracep->declBit(c+310,"SocTop rvcpu1 ex5 csr0 rd_mie", false,-1);
        tracep->declBit(c+311,"SocTop rvcpu1 ex5 csr0 wr_mie", false,-1);
        tracep->declBit(c+312,"SocTop rvcpu1 ex5 csr0 csr_mie_mtie", false,-1);
        tracep->declQuad(c+313,"SocTop rvcpu1 ex5 csr0 csr_mie", false,-1, 63,0);
        tracep->declBit(c+315,"SocTop rvcpu1 ex5 csr0 sel_mip", false,-1);
        tracep->declBit(c+316,"SocTop rvcpu1 ex5 csr0 rd_mip", false,-1);
        tracep->declBit(c+317,"SocTop rvcpu1 ex5 csr0 csr_mip_mtip", false,-1);
        tracep->declQuad(c+318,"SocTop rvcpu1 ex5 csr0 csr_mip", false,-1, 63,0);
        tracep->declBit(c+320,"SocTop rvcpu1 ex5 csr0 sel_mscratch", false,-1);
        tracep->declBit(c+321,"SocTop rvcpu1 ex5 csr0 rd_mscrstch", false,-1);
        tracep->declBit(c+322,"SocTop rvcpu1 ex5 csr0 wr_mscrstch", false,-1);
        tracep->declQuad(c+323,"SocTop rvcpu1 ex5 csr0 csr_mscrstch", false,-1, 63,0);
        tracep->declBit(c+491,"SocTop rvcpu1 ex_mem6 clk", false,-1);
        tracep->declBit(c+492,"SocTop rvcpu1 ex_mem6 rst", false,-1);
        tracep->declQuad(c+51,"SocTop rvcpu1 ex_mem6 ex_mem_pc_i", false,-1, 63,0);
        tracep->declBus(c+56,"SocTop rvcpu1 ex_mem6 ex_mem_inst_i", false,-1, 31,0);
        tracep->declBus(c+48,"SocTop rvcpu1 ex_mem6 stall_ctrl", false,-1, 4,0);
        tracep->declBus(c+187,"SocTop rvcpu1 ex_mem6 ex_inst_type", false,-1, 7,0);
        tracep->declBit(c+186,"SocTop rvcpu1 ex_mem6 ex_rd_ena", false,-1);
        tracep->declQuad(c+28,"SocTop rvcpu1 ex_mem6 ex_rd_data", false,-1, 63,0);
        tracep->declBus(c+185,"SocTop rvcpu1 ex_mem6 ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+188,"SocTop rvcpu1 ex_mem6 ex_ls_sel", false,-1, 2,0);
        tracep->declQuad(c+189,"SocTop rvcpu1 ex_mem6 ex_ls_addr", false,-1, 63,0);
        tracep->declBus(c+209,"SocTop rvcpu1 ex_mem6 mem_inst_type", false,-1, 7,0);
        tracep->declBit(c+194,"SocTop rvcpu1 ex_mem6 mem_rd_ena", false,-1);
        tracep->declQuad(c+210,"SocTop rvcpu1 ex_mem6 mem_rd_data", false,-1, 63,0);
        tracep->declBus(c+193,"SocTop rvcpu1 ex_mem6 mem_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+215,"SocTop rvcpu1 ex_mem6 ex_mem_pc_o", false,-1, 63,0);
        tracep->declBus(c+218,"SocTop rvcpu1 ex_mem6 ex_mem_inst_o", false,-1, 31,0);
        tracep->declBus(c+212,"SocTop rvcpu1 ex_mem6 mem_ls_sel", false,-1, 2,0);
        tracep->declQuad(c+213,"SocTop rvcpu1 ex_mem6 mem_ls_addr", false,-1, 63,0);
        tracep->declBit(c+492,"SocTop rvcpu1 mem7 rst", false,-1);
        tracep->declBus(c+209,"SocTop rvcpu1 mem7 inst_type_i", false,-1, 7,0);
        tracep->declBit(c+194,"SocTop rvcpu1 mem7 rd_ena_i", false,-1);
        tracep->declQuad(c+210,"SocTop rvcpu1 mem7 rd_data_i", false,-1, 63,0);
        tracep->declBus(c+193,"SocTop rvcpu1 mem7 rd_addr_i", false,-1, 4,0);
        tracep->declQuad(c+215,"SocTop rvcpu1 mem7 mem_pc_i", false,-1, 63,0);
        tracep->declBus(c+218,"SocTop rvcpu1 mem7 mem_inst_i", false,-1, 31,0);
        tracep->declQuad(c+213,"SocTop rvcpu1 mem7 ls_addr_i", false,-1, 63,0);
        tracep->declBus(c+212,"SocTop rvcpu1 mem7 ls_sel_i", false,-1, 2,0);
        tracep->declQuad(c+1,"SocTop rvcpu1 mem7 data_addr_o", false,-1, 63,0);
        tracep->declBus(c+3,"SocTop rvcpu1 mem7 wmask_o", false,-1, 7,0);
        tracep->declQuad(c+9,"SocTop rvcpu1 mem7 data_i", false,-1, 63,0);
        tracep->declQuad(c+4,"SocTop rvcpu1 mem7 data_o", false,-1, 63,0);
        tracep->declBit(c+6,"SocTop rvcpu1 mem7 we", false,-1);
        tracep->declBit(c+7,"SocTop rvcpu1 mem7 re", false,-1);
        tracep->declBit(c+175,"SocTop rvcpu1 mem7 mem_finish", false,-1);
        tracep->declBit(c+194,"SocTop rvcpu1 mem7 rd_ena_o", false,-1);
        tracep->declQuad(c+49,"SocTop rvcpu1 mem7 rd_data_o", false,-1, 63,0);
        tracep->declBus(c+193,"SocTop rvcpu1 mem7 rd_addr_o", false,-1, 4,0);
        tracep->declQuad(c+53,"SocTop rvcpu1 mem7 mem_pc_o", false,-1, 63,0);
        tracep->declBus(c+57,"SocTop rvcpu1 mem7 mem_inst_o", false,-1, 31,0);
        tracep->declBit(c+544,"SocTop rvcpu1 mem7 mem_stall_req", false,-1);
        tracep->declQuad(c+172,"SocTop rvcpu1 mem7 load_data", false,-1, 63,0);
        tracep->declBus(c+325,"SocTop rvcpu1 mem7 byte_sel", false,-1, 2,0);
        tracep->declBus(c+326,"SocTop rvcpu1 mem7 half_byte_sel", false,-1, 1,0);
        tracep->declBit(c+327,"SocTop rvcpu1 mem7 word_sel", false,-1);
        tracep->declBus(c+109,"SocTop rvcpu1 mem7 data_byte", false,-1, 7,0);
        tracep->declBus(c+110,"SocTop rvcpu1 mem7 data_half_byte", false,-1, 15,0);
        tracep->declBus(c+111,"SocTop rvcpu1 mem7 data_word", false,-1, 31,0);
        tracep->declQuad(c+112,"SocTop rvcpu1 mem7 store_data", false,-1, 63,0);
        tracep->declBus(c+114,"SocTop rvcpu1 mem7 store_mask", false,-1, 7,0);
        tracep->declQuad(c+547,"SocTop rvcpu1 mem7 sb_data", false,-1, 63,0);
        tracep->declQuad(c+549,"SocTop rvcpu1 mem7 sh_data", false,-1, 63,0);
        tracep->declQuad(c+551,"SocTop rvcpu1 mem7 sw_data", false,-1, 63,0);
        tracep->declBus(c+553,"SocTop rvcpu1 mem7 sb_mask", false,-1, 7,0);
        tracep->declBus(c+554,"SocTop rvcpu1 mem7 sh_mask", false,-1, 7,0);
        tracep->declBus(c+555,"SocTop rvcpu1 mem7 sw_mask", false,-1, 7,0);
        tracep->declBit(c+491,"SocTop rvcpu1 mem_wb8 clk", false,-1);
        tracep->declBit(c+492,"SocTop rvcpu1 mem_wb8 rst", false,-1);
        tracep->declQuad(c+53,"SocTop rvcpu1 mem_wb8 wb_pc_i", false,-1, 63,0);
        tracep->declBus(c+57,"SocTop rvcpu1 mem_wb8 wb_inst_i", false,-1, 31,0);
        tracep->declBus(c+48,"SocTop rvcpu1 mem_wb8 stall_ctrl", false,-1, 4,0);
        tracep->declQuad(c+49,"SocTop rvcpu1 mem_wb8 mem_rd_data", false,-1, 63,0);
        tracep->declBus(c+193,"SocTop rvcpu1 mem_wb8 mem_rd_addr", false,-1, 4,0);
        tracep->declBit(c+194,"SocTop rvcpu1 mem_wb8 mem_rd_ena", false,-1);
        tracep->declQuad(c+197,"SocTop rvcpu1 mem_wb8 wb_rd_data", false,-1, 63,0);
        tracep->declBus(c+195,"SocTop rvcpu1 mem_wb8 wb_rd_addr", false,-1, 4,0);
        tracep->declBit(c+196,"SocTop rvcpu1 mem_wb8 wb_rd_ena", false,-1);
        tracep->declQuad(c+328,"SocTop rvcpu1 mem_wb8 wb_pc_o", false,-1, 63,0);
        tracep->declBus(c+330,"SocTop rvcpu1 mem_wb8 wb_inst_o", false,-1, 31,0);
        tracep->declQuad(c+331,"SocTop rvcpu1 mem_wb8 pc_data1", false,-1, 63,0);
        tracep->declBit(c+333,"SocTop rvcpu1 mem_wb8 difftest_exyn", false,-1);
        tracep->declBit(c+334,"SocTop rvcpu1 mem_wb8 teap_yn", false,-1);
        tracep->declQuad(c+335,"SocTop rvcpu1 mem_wb8 trap_code", false,-1, 63,0);
        tracep->declBit(c+492,"SocTop rvcpu1 ctrl9 rst", false,-1);
        tracep->declBit(c+27,"SocTop rvcpu1 ctrl9 if_stall_req", false,-1);
        tracep->declBit(c+539,"SocTop rvcpu1 ctrl9 id_stall_req", false,-1);
        tracep->declBit(c+145,"SocTop rvcpu1 ctrl9 ex_stall_req", false,-1);
        tracep->declBit(c+544,"SocTop rvcpu1 ctrl9 mem_stall_req", false,-1);
        tracep->declBus(c+48,"SocTop rvcpu1 ctrl9 stall_ctrl", false,-1, 4,0);
        tracep->declBit(c+491,"SocTop rvcpu1 regfile10 clk", false,-1);
        tracep->declBit(c+492,"SocTop rvcpu1 regfile10 rst", false,-1);
        tracep->declBus(c+195,"SocTop rvcpu1 regfile10 waddr", false,-1, 4,0);
        tracep->declQuad(c+197,"SocTop rvcpu1 regfile10 wdata", false,-1, 63,0);
        tracep->declBit(c+196,"SocTop rvcpu1 regfile10 we", false,-1);
        tracep->declBus(c+30,"SocTop rvcpu1 regfile10 raddr1", false,-1, 4,0);
        tracep->declQuad(c+540,"SocTop rvcpu1 regfile10 rdata1", false,-1, 63,0);
        tracep->declBit(c+31,"SocTop rvcpu1 regfile10 re1", false,-1);
        tracep->declBus(c+32,"SocTop rvcpu1 regfile10 raddr2", false,-1, 4,0);
        tracep->declQuad(c+542,"SocTop rvcpu1 regfile10 rdata2", false,-1, 63,0);
        tracep->declBit(c+33,"SocTop rvcpu1 regfile10 re2", false,-1);
        tracep->declBit(c+536,"SocTop rvcpu1 regfile10 x1_read_ena", false,-1);
        tracep->declQuad(c+534,"SocTop rvcpu1 regfile10 x1_data", false,-1, 63,0);
        tracep->declBus(c+26,"SocTop rvcpu1 regfile10 x1_addr", false,-1, 4,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+337+i*2,"SocTop rvcpu1 regfile10 regs", true,(i+0), 63,0);}}
        tracep->declBus(c+401,"SocTop rvcpu1 regfile10 i", false,-1, 31,0);
        tracep->declBit(c+491,"SocTop i_cache12 clk", false,-1);
        tracep->declBit(c+492,"SocTop i_cache12 rst", false,-1);
        tracep->declQuad(c+484,"SocTop i_cache12 inst_addr", false,-1, 63,0);
        tracep->declBit(c+492,"SocTop i_cache12 inst_ena", false,-1);
        tracep->declBus(c+8,"SocTop i_cache12 inst_data", false,-1, 31,0);
        tracep->declBit(c+174,"SocTop i_cache12 inst_valid", false,-1);
        tracep->declBit(c+422,"SocTop i_cache12 cache_read_ena", false,-1);
        tracep->declQuad(c+484,"SocTop i_cache12 cache_addr", false,-1, 63,0);
        tracep->declBus(c+16,"SocTop i_cache12 cache_or_data", false,-1, 31,0);
        tracep->declBit(c+17,"SocTop i_cache12 cache_in_ok", false,-1);
        tracep->declBus(c+486,"SocTop i_cache12 i_cache_addr1", false,-1, 5,0);
        tracep->declQuad(c+487,"SocTop i_cache12 i_cache_tag1", false,-1, 55,0);
        tracep->declBit(c+115,"SocTop i_cache12 i_tag_ena1", false,-1);
        tracep->declQuad(c+402,"SocTop i_cache12 i_tag_data1", false,-1, 54,0);
        tracep->declBit(c+404,"SocTop i_cache12 i_tag_user1", false,-1);
        tracep->declBus(c+486,"SocTop i_cache12 i_cache_addr2", false,-1, 5,0);
        tracep->declQuad(c+487,"SocTop i_cache12 i_cache_tag2", false,-1, 55,0);
        tracep->declBit(c+569,"SocTop i_cache12 i_tag_ena2", false,-1);
        tracep->declQuad(c+405,"SocTop i_cache12 i_tag_data2", false,-1, 54,0);
        tracep->declBit(c+407,"SocTop i_cache12 i_tag_user2", false,-1);
        tracep->declBus(c+486,"SocTop i_cache12 i_addrdata1", false,-1, 5,0);
        tracep->declBus(c+116,"SocTop i_cache12 i_in_data1", false,-1, 31,0);
        tracep->declBit(c+559,"SocTop i_cache12 i_data_ena1", false,-1);
        tracep->declBus(c+408,"SocTop i_cache12 i_out_data1", false,-1, 31,0);
        tracep->declBus(c+486,"SocTop i_cache12 i_addrdata2", false,-1, 5,0);
        tracep->declBus(c+570,"SocTop i_cache12 i_in_data2", false,-1, 31,0);
        tracep->declBit(c+571,"SocTop i_cache12 i_data_ena2", false,-1);
        tracep->declBus(c+409,"SocTop i_cache12 i_out_data2", false,-1, 31,0);
        tracep->declBus(c+486,"SocTop i_cache12 i_count_addr", false,-1, 5,0);
        tracep->declBus(c+410,"SocTop i_cache12 i", false,-1, 31,0);
        tracep->declQuad(c+489,"SocTop i_cache12 i_in_teg", false,-1, 54,0);
        tracep->declBus(c+117,"SocTop i_cache12 state_inst", false,-1, 5,0);
        tracep->declBus(c+118,"SocTop i_cache12 state_inst_nxt", false,-1, 5,0);
        tracep->declBit(c+424,"SocTop i_cache12 inst_hit_ok", false,-1);
        tracep->declBit(c+425,"SocTop i_cache12 write_i_ok", false,-1);
        tracep->declBus(c+426,"SocTop i_cache12 inst_data_o", false,-1, 31,0);
        tracep->declBit(c+427,"SocTop i_cache12 inst_valid_o", false,-1);
        tracep->declBus(c+428,"SocTop i_cache12 inst_hit_count1", false,-1, 2,0);
        tracep->declBus(c+429,"SocTop i_cache12 inst_hit_count2", false,-1, 2,0);
        tracep->declBit(c+572,"SocTop i_cache12 finish_the_mem_l", false,-1);
        tracep->declBus(c+430,"SocTop i_cache12 data_inst", false,-1, 31,0);
        tracep->declBit(c+422,"SocTop i_cache12 ord_data_ena", false,-1);
        tracep->declBit(c+431,"SocTop i_cache12 inst_in_cache1", false,-1);
        tracep->declBit(c+432,"SocTop i_cache12 inst_in_cache2", false,-1);
        tracep->declBit(c+433,"SocTop i_cache12 inst_write_cache", false,-1);
        tracep->declBit(c+434,"SocTop i_cache12 inst_valid_write", false,-1);
        tracep->declBit(c+491,"SocTop i_cache12 u_tag01 clk", false,-1);
        tracep->declBit(c+492,"SocTop i_cache12 u_tag01 rst", false,-1);
        tracep->declBus(c+486,"SocTop i_cache12 u_tag01 addr_i", false,-1, 5,0);
        tracep->declQuad(c+487,"SocTop i_cache12 u_tag01 data_i", false,-1, 55,0);
        tracep->declBit(c+115,"SocTop i_cache12 u_tag01 write_ena", false,-1);
        tracep->declQuad(c+402,"SocTop i_cache12 u_tag01 tag_data", false,-1, 54,0);
        tracep->declBit(c+404,"SocTop i_cache12 u_tag01 tag_valid", false,-1);
        tracep->declQuad(c+402,"SocTop i_cache12 u_tag01 out_data", false,-1, 54,0);
        tracep->declBit(c+404,"SocTop i_cache12 u_tag01 out_vaild", false,-1);
        tracep->declBit(c+491,"SocTop i_cache12 u_tag02 clk", false,-1);
        tracep->declBit(c+492,"SocTop i_cache12 u_tag02 rst", false,-1);
        tracep->declBus(c+486,"SocTop i_cache12 u_tag02 addr_i", false,-1, 5,0);
        tracep->declQuad(c+487,"SocTop i_cache12 u_tag02 data_i", false,-1, 55,0);
        tracep->declBit(c+569,"SocTop i_cache12 u_tag02 write_ena", false,-1);
        tracep->declQuad(c+405,"SocTop i_cache12 u_tag02 tag_data", false,-1, 54,0);
        tracep->declBit(c+407,"SocTop i_cache12 u_tag02 tag_valid", false,-1);
        tracep->declQuad(c+405,"SocTop i_cache12 u_tag02 out_data", false,-1, 54,0);
        tracep->declBit(c+407,"SocTop i_cache12 u_tag02 out_vaild", false,-1);
        tracep->declBit(c+491,"SocTop i_cache12 u_data01 clk", false,-1);
        tracep->declBit(c+492,"SocTop i_cache12 u_data01 rst", false,-1);
        tracep->declBus(c+486,"SocTop i_cache12 u_data01 addr_i", false,-1, 5,0);
        tracep->declBus(c+116,"SocTop i_cache12 u_data01 data_i", false,-1, 31,0);
        tracep->declBit(c+559,"SocTop i_cache12 u_data01 write_ena", false,-1);
        tracep->declBus(c+408,"SocTop i_cache12 u_data01 data_o", false,-1, 31,0);
        tracep->declBus(c+408,"SocTop i_cache12 u_data01 out_data", false,-1, 31,0);
        tracep->declBit(c+491,"SocTop i_cache12 u_data02 clk", false,-1);
        tracep->declBit(c+492,"SocTop i_cache12 u_data02 rst", false,-1);
        tracep->declBus(c+486,"SocTop i_cache12 u_data02 addr_i", false,-1, 5,0);
        tracep->declBus(c+570,"SocTop i_cache12 u_data02 data_i", false,-1, 31,0);
        tracep->declBit(c+571,"SocTop i_cache12 u_data02 write_ena", false,-1);
        tracep->declBus(c+409,"SocTop i_cache12 u_data02 data_o", false,-1, 31,0);
        tracep->declBus(c+409,"SocTop i_cache12 u_data02 out_data", false,-1, 31,0);
        tracep->declBit(c+491,"SocTop d_cache13 clk", false,-1);
        tracep->declBit(c+492,"SocTop d_cache13 rst", false,-1);
        tracep->declQuad(c+1,"SocTop d_cache13 mem_addr_i", false,-1, 63,0);
        tracep->declQuad(c+4,"SocTop d_cache13 mem_data_i", false,-1, 63,0);
        tracep->declBus(c+3,"SocTop d_cache13 mem_mask_i", false,-1, 7,0);
        tracep->declBit(c+7,"SocTop d_cache13 mem_data_read_ena", false,-1);
        tracep->declBit(c+6,"SocTop d_cache13 mem_data_writ_ena", false,-1);
        tracep->declQuad(c+9,"SocTop d_cache13 mem_data_out_cpu", false,-1, 63,0);
        tracep->declBit(c+175,"SocTop d_cache13 mem_data_finish", false,-1);
        tracep->declQuad(c+13,"SocTop d_cache13 in_dcache_data", false,-1, 63,0);
        tracep->declBit(c+15,"SocTop d_cache13 in_dcache_ok", false,-1);
        tracep->declQuad(c+1,"SocTop d_cache13 out_dcache_addr", false,-1, 63,0);
        tracep->declQuad(c+176,"SocTop d_cache13 out_dcache_data", false,-1, 63,0);
        tracep->declBit(c+11,"SocTop d_cache13 outr_dcache_ena", false,-1);
        tracep->declBit(c+12,"SocTop d_cache13 outw_dcache_ena", false,-1);
        tracep->declBus(c+119,"SocTop d_cache13 addrtag1", false,-1, 5,0);
        tracep->declQuad(c+120,"SocTop d_cache13 datatag1", false,-1, 55,0);
        tracep->declBit(c+122,"SocTop d_cache13 tag_ena1", false,-1);
        tracep->declQuad(c+411,"SocTop d_cache13 tag_data1", false,-1, 54,0);
        tracep->declBit(c+413,"SocTop d_cache13 tag_user1", false,-1);
        tracep->declBus(c+119,"SocTop d_cache13 addrtag2", false,-1, 5,0);
        tracep->declQuad(c+120,"SocTop d_cache13 datatag2", false,-1, 55,0);
        tracep->declBit(c+573,"SocTop d_cache13 tag_ena2", false,-1);
        tracep->declQuad(c+414,"SocTop d_cache13 tag_data2", false,-1, 54,0);
        tracep->declBit(c+416,"SocTop d_cache13 tag_user2", false,-1);
        tracep->declBus(c+123,"SocTop d_cache13 addrdata1", false,-1, 5,0);
        tracep->declQuad(c+124,"SocTop d_cache13 in_data1", false,-1, 63,0);
        tracep->declBus(c+126,"SocTop d_cache13 data_ena1", false,-1, 7,0);
        tracep->declQuad(c+417,"SocTop d_cache13 out_data1", false,-1, 63,0);
        tracep->declBus(c+123,"SocTop d_cache13 addrdata2", false,-1, 5,0);
        tracep->declQuad(c+127,"SocTop d_cache13 in_data2", false,-1, 63,0);
        tracep->declBus(c+129,"SocTop d_cache13 data_ena2", false,-1, 7,0);
        tracep->declQuad(c+419,"SocTop d_cache13 out_data2", false,-1, 63,0);
        tracep->declBus(c+119,"SocTop d_cache13 count_a", false,-1, 5,0);
        tracep->declBus(c+421,"SocTop d_cache13 i", false,-1, 31,0);
        tracep->declBus(c+119,"SocTop d_cache13 dirty_addr", false,-1, 5,0);
        tracep->declQuad(c+130,"SocTop d_cache13 in_teg", false,-1, 54,0);
        tracep->declBus(c+119,"SocTop d_cache13 dirty_count_addr", false,-1, 5,0);
        tracep->declBus(c+132,"SocTop d_cache13 state_store", false,-1, 5,0);
        tracep->declBus(c+133,"SocTop d_cache13 state_store_nxt", false,-1, 5,0);
        tracep->declBit(c+435,"SocTop d_cache13 store_ok", false,-1);
        tracep->declBit(c+436,"SocTop d_cache13 write_ok", false,-1);
        tracep->declBit(c+15,"SocTop d_cache13 wbck_ok", false,-1);
        tracep->declBit(c+437,"SocTop d_cache13 finish_the_mem", false,-1);
        tracep->declBit(c+438,"SocTop d_cache13 outr_data_ena_w", false,-1);
        tracep->declBit(c+439,"SocTop d_cache13 write_incache", false,-1);
        tracep->declQuad(c+440,"SocTop d_cache13 ram_iw_data", false,-1, 63,0);
        tracep->declBit(c+442,"SocTop d_cache13 w_incache_ena1", false,-1);
        tracep->declBit(c+443,"SocTop d_cache13 w_incache_ena2", false,-1);
        tracep->declBus(c+444,"SocTop d_cache13 w_incache_mask", false,-1, 7,0);
        tracep->declBit(c+445,"SocTop d_cache13 dirty_make", false,-1);
        tracep->declBus(c+446,"SocTop d_cache13 count_write1", false,-1, 2,0);
        tracep->declBus(c+447,"SocTop d_cache13 count_write2", false,-1, 2,0);
        tracep->declBus(c+119,"SocTop d_cache13 count_addr", false,-1, 5,0);
        tracep->declQuad(c+448,"SocTop d_cache13 out_data_wb", false,-1, 63,0);
        tracep->declBit(c+450,"SocTop d_cache13 outr_data_ena", false,-1);
        tracep->declQuad(c+451,"SocTop d_cache13 out_addr_wb", false,-1, 63,0);
        tracep->declBus(c+453,"SocTop d_cache13 data_ram1_mask", false,-1, 7,0);
        tracep->declBus(c+454,"SocTop d_cache13 data_ram2_mask", false,-1, 7,0);
        tracep->declQuad(c+455,"SocTop d_cache13 data_ram1_data", false,-1, 63,0);
        tracep->declQuad(c+457,"SocTop d_cache13 data_ram2_data", false,-1, 63,0);
        tracep->declBit(c+459,"SocTop d_cache13 store_finish", false,-1);
        tracep->declBit(c+460,"SocTop d_cache13 dirty_hit", false,-1);
        tracep->declBus(c+461,"SocTop d_cache13 count_hit1", false,-1, 2,0);
        tracep->declBus(c+462,"SocTop d_cache13 count_hit2", false,-1, 2,0);
        tracep->declBus(c+134,"SocTop d_cache13 state_load", false,-1, 5,0);
        tracep->declBus(c+135,"SocTop d_cache13 state_load_nxt", false,-1, 5,0);
        tracep->declBit(c+463,"SocTop d_cache13 load_ok", false,-1);
        tracep->declBit(c+574,"SocTop d_cache13 load_bc_ok", false,-1);
        tracep->declBit(c+464,"SocTop d_cache13 write_l_ok", false,-1);
        tracep->declBus(c+119,"SocTop d_cache13 count_addr2", false,-1, 5,0);
        tracep->declQuad(c+465,"SocTop d_cache13 load_data_o", false,-1, 63,0);
        tracep->declBit(c+467,"SocTop d_cache13 load_finish_h", false,-1);
        tracep->declBus(c+468,"SocTop d_cache13 load_hit_count1", false,-1, 2,0);
        tracep->declBus(c+469,"SocTop d_cache13 load_hit_count2", false,-1, 2,0);
        tracep->declQuad(c+470,"SocTop d_cache13 out_data_wb_l", false,-1, 63,0);
        tracep->declBit(c+472,"SocTop d_cache13 outw_data_ena_l", false,-1);
        tracep->declBit(c+473,"SocTop d_cache13 finish_the_mem_l", false,-1);
        tracep->declQuad(c+474,"SocTop d_cache13 data_load", false,-1, 63,0);
        tracep->declBit(c+476,"SocTop d_cache13 outr_data_ena_w_l", false,-1);
        tracep->declBus(c+477,"SocTop d_cache13 load_write_count1", false,-1, 2,0);
        tracep->declBus(c+478,"SocTop d_cache13 load_write_count2", false,-1, 2,0);
        tracep->declBit(c+479,"SocTop d_cache13 load_in_cache1", false,-1);
        tracep->declBit(c+480,"SocTop d_cache13 load_in_cache2", false,-1);
        tracep->declQuad(c+481,"SocTop d_cache13 ram_iw_data_l", false,-1, 63,0);
        tracep->declBit(c+483,"SocTop d_cache13 read_cache", false,-1);
        tracep->declBit(c+491,"SocTop d_cache13 u_tag0 clk", false,-1);
        tracep->declBit(c+492,"SocTop d_cache13 u_tag0 rst", false,-1);
        tracep->declBus(c+119,"SocTop d_cache13 u_tag0 addr_i", false,-1, 5,0);
        tracep->declQuad(c+120,"SocTop d_cache13 u_tag0 data_i", false,-1, 55,0);
        tracep->declBit(c+122,"SocTop d_cache13 u_tag0 write_ena", false,-1);
        tracep->declQuad(c+411,"SocTop d_cache13 u_tag0 tag_data", false,-1, 54,0);
        tracep->declBit(c+413,"SocTop d_cache13 u_tag0 tag_valid", false,-1);
        tracep->declQuad(c+411,"SocTop d_cache13 u_tag0 out_data", false,-1, 54,0);
        tracep->declBit(c+413,"SocTop d_cache13 u_tag0 out_vaild", false,-1);
        tracep->declBit(c+491,"SocTop d_cache13 u_tag1 clk", false,-1);
        tracep->declBit(c+492,"SocTop d_cache13 u_tag1 rst", false,-1);
        tracep->declBus(c+119,"SocTop d_cache13 u_tag1 addr_i", false,-1, 5,0);
        tracep->declQuad(c+120,"SocTop d_cache13 u_tag1 data_i", false,-1, 55,0);
        tracep->declBit(c+573,"SocTop d_cache13 u_tag1 write_ena", false,-1);
        tracep->declQuad(c+414,"SocTop d_cache13 u_tag1 tag_data", false,-1, 54,0);
        tracep->declBit(c+416,"SocTop d_cache13 u_tag1 tag_valid", false,-1);
        tracep->declQuad(c+414,"SocTop d_cache13 u_tag1 out_data", false,-1, 54,0);
        tracep->declBit(c+416,"SocTop d_cache13 u_tag1 out_vaild", false,-1);
        tracep->declBit(c+491,"SocTop d_cache13 u_data0 clk", false,-1);
        tracep->declBit(c+492,"SocTop d_cache13 u_data0 rst", false,-1);
        tracep->declBus(c+123,"SocTop d_cache13 u_data0 addr_i", false,-1, 5,0);
        tracep->declQuad(c+124,"SocTop d_cache13 u_data0 data_i", false,-1, 63,0);
        tracep->declBus(c+126,"SocTop d_cache13 u_data0 write_ena", false,-1, 7,0);
        tracep->declQuad(c+417,"SocTop d_cache13 u_data0 data_o", false,-1, 63,0);
        tracep->declQuad(c+417,"SocTop d_cache13 u_data0 out_data", false,-1, 63,0);
        tracep->declBit(c+491,"SocTop d_cache13 u_data1 clk", false,-1);
        tracep->declBit(c+492,"SocTop d_cache13 u_data1 rst", false,-1);
        tracep->declBus(c+123,"SocTop d_cache13 u_data1 addr_i", false,-1, 5,0);
        tracep->declQuad(c+127,"SocTop d_cache13 u_data1 data_i", false,-1, 63,0);
        tracep->declBus(c+129,"SocTop d_cache13 u_data1 write_ena", false,-1, 7,0);
        tracep->declQuad(c+419,"SocTop d_cache13 u_data1 data_o", false,-1, 63,0);
        tracep->declQuad(c+419,"SocTop d_cache13 u_data1 out_data", false,-1, 63,0);
        tracep->declBit(c+492,"SocTop arbitrate4 rst", false,-1);
        tracep->declQuad(c+1,"SocTop arbitrate4 d_cache_addr", false,-1, 63,0);
        tracep->declQuad(c+176,"SocTop arbitrate4 d_cache_data", false,-1, 63,0);
        tracep->declBit(c+11,"SocTop arbitrate4 d_cache_read_ena", false,-1);
        tracep->declBit(c+12,"SocTop arbitrate4 d_cache_write_ena", false,-1);
        tracep->declBus(c+567,"SocTop arbitrate4 d_cache_mask", false,-1, 7,0);
        tracep->declQuad(c+13,"SocTop arbitrate4 d_cache_data_o", false,-1, 63,0);
        tracep->declBit(c+15,"SocTop arbitrate4 d_cache_ok", false,-1);
        tracep->declQuad(c+484,"SocTop arbitrate4 i_cache_addr", false,-1, 63,0);
        tracep->declBit(c+422,"SocTop arbitrate4 i_cache_ena", false,-1);
        tracep->declQuad(c+136,"SocTop arbitrate4 i_cache_data_o", false,-1, 63,0);
        tracep->declBit(c+17,"SocTop arbitrate4 i_cache_ok", false,-1);
        tracep->declBus(c+560,"SocTop arbitrate4 axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+18,"SocTop arbitrate4 axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+561,"SocTop arbitrate4 axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+562,"SocTop arbitrate4 axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+563,"SocTop arbitrate4 axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+564,"SocTop arbitrate4 axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+565,"SocTop arbitrate4 axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+560,"SocTop arbitrate4 axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+20,"SocTop arbitrate4 axi_aw_valid", false,-1);
        tracep->declBit(c+503,"SocTop arbitrate4 axi_aw_ready", false,-1);
        tracep->declQuad(c+178,"SocTop arbitrate4 axi_w_data", false,-1, 63,0);
        tracep->declBus(c+21,"SocTop arbitrate4 axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+566,"SocTop arbitrate4 axi_w_last", false,-1);
        tracep->declBit(c+20,"SocTop arbitrate4 axi_w_valid", false,-1);
        tracep->declBit(c+509,"SocTop arbitrate4 axi_w_ready", false,-1);
        tracep->declBus(c+510,"SocTop arbitrate4 axi_b_id", false,-1, 3,0);
        tracep->declBus(c+511,"SocTop arbitrate4 axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+512,"SocTop arbitrate4 axi_b_valid", false,-1);
        tracep->declBit(c+22,"SocTop arbitrate4 axi_b_ready", false,-1);
        tracep->declBus(c+180,"SocTop arbitrate4 axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+532,"SocTop arbitrate4 axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+561,"SocTop arbitrate4 axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+423,"SocTop arbitrate4 axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+563,"SocTop arbitrate4 axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+564,"SocTop arbitrate4 axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+565,"SocTop arbitrate4 axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+560,"SocTop arbitrate4 axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+23,"SocTop arbitrate4 axi_ar_valid", false,-1);
        tracep->declBit(c+524,"SocTop arbitrate4 axi_ar_ready", false,-1);
        tracep->declBus(c+525,"SocTop arbitrate4 axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+526,"SocTop arbitrate4 axi_r_data", false,-1, 63,0);
        tracep->declBus(c+528,"SocTop arbitrate4 axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+529,"SocTop arbitrate4 axi_r_last", false,-1);
        tracep->declBit(c+530,"SocTop arbitrate4 axi_r_valid", false,-1);
        tracep->declBit(c+24,"SocTop arbitrate4 axi_r_ready", false,-1);
        tracep->declBit(c+138,"SocTop arbitrate4 aw_shankhand", false,-1);
        tracep->declBit(c+139,"SocTop arbitrate4 w_shankhand", false,-1);
        tracep->declBit(c+140,"SocTop arbitrate4 b_shankhand", false,-1);
        tracep->declBit(c+556,"SocTop arbitrate4 b_success", false,-1);
        tracep->declBus(c+141,"SocTop arbitrate4 transfor_state", false,-1, 1,0);
        tracep->declBus(c+142,"SocTop arbitrate4 transfor_state_nex", false,-1, 1,0);
        tracep->declBit(c+557,"SocTop arbitrate4 ar_shankhand", false,-1);
        tracep->declBit(c+558,"SocTop arbitrate4 r_shankhand", false,-1);
        tracep->declBus(c+143,"SocTop arbitrate4 cache_state", false,-1, 1,0);
        tracep->declBus(c+144,"SocTop arbitrate4 cache_state_nxt", false,-1, 1,0);
    }
}

void VSocTop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VSocTop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VSocTop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VSocTop___024root__traceRegister(VSocTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VSocTop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VSocTop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VSocTop___024root__traceCleanup, vlSelf);
    }
}

void VSocTop___024root__traceFullSub0(VSocTop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VSocTop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VSocTop___024root* const __restrict vlSelf = static_cast<VSocTop___024root*>(voidSelf);
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VSocTop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VSocTop___024root__traceFullSub0(VSocTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->SocTop__DOT__rvcpu_data_addr),64);
        tracep->fullCData(oldp+3,(vlSelf->SocTop__DOT__rvcpu_wmask),8);
        tracep->fullQData(oldp+4,(vlSelf->SocTop__DOT__rvcpu_data_o),64);
        tracep->fullBit(oldp+6,(vlSelf->SocTop__DOT__rvcpu_we));
        tracep->fullBit(oldp+7,(vlSelf->SocTop__DOT__rvcpu_re));
        tracep->fullIData(oldp+8,(vlSelf->SocTop__DOT__i_cache_inst_data),32);
        tracep->fullQData(oldp+9,(vlSelf->SocTop__DOT__d_cache_data_out),64);
        tracep->fullBit(oldp+11,(vlSelf->SocTop__DOT__d_cache_read_ena));
        tracep->fullBit(oldp+12,(vlSelf->SocTop__DOT__d_cache_write_ena));
        tracep->fullQData(oldp+13,(vlSelf->SocTop__DOT__arbitrate_d_data),64);
        tracep->fullBit(oldp+15,(vlSelf->SocTop__DOT__arbitrate_d_ok));
        tracep->fullIData(oldp+16,((IData)(vlSelf->SocTop__DOT____Vcellout__arbitrate4__i_cache_data_o)),32);
        tracep->fullBit(oldp+17,(vlSelf->SocTop__DOT__arbitrate_i_ok));
        tracep->fullQData(oldp+18,(vlSelf->SocTop__DOT__t_axi_aw_addr),64);
        tracep->fullBit(oldp+20,(vlSelf->SocTop__DOT__t_axi_aw_valid));
        tracep->fullCData(oldp+21,((((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__aw_shankhand) 
                                     & (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__w_shankhand))
                                     ? 0xffU : 0U)),8);
        tracep->fullBit(oldp+22,((3U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state))));
        tracep->fullBit(oldp+23,(vlSelf->SocTop__DOT__t_axi_ar_valid));
        tracep->fullBit(oldp+24,((1U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__cache_state))));
        tracep->fullBit(oldp+25,((1U & (~ ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl) 
                                           >> 1U)))));
        tracep->fullCData(oldp+26,((0x1fU & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                             >> 0xfU))),5);
        tracep->fullBit(oldp+27,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_stall_req));
        tracep->fullQData(oldp+28,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_data),64);
        tracep->fullCData(oldp+30,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1),5);
        tracep->fullBit(oldp+31,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1));
        tracep->fullCData(oldp+32,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2),5);
        tracep->fullBit(oldp+33,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2));
        tracep->fullCData(oldp+34,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type),8);
        tracep->fullCData(oldp+35,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode),8);
        tracep->fullQData(oldp+36,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op),64);
        tracep->fullQData(oldp+38,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op2),64);
        tracep->fullBit(oldp+40,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_ena));
        tracep->fullCData(oldp+41,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_addr),5);
        tracep->fullQData(oldp+42,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_pc),64);
        tracep->fullSData(oldp+44,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_s_offset),12);
        tracep->fullCData(oldp+45,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_memsel),3);
        tracep->fullBit(oldp+46,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_pip_jalrena));
        tracep->fullBit(oldp+47,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_if_flush));
        tracep->fullCData(oldp+48,(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl),5);
        tracep->fullQData(oldp+49,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_id_data),64);
        tracep->fullQData(oldp+51,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_ex_mem_pc),64);
        tracep->fullQData(oldp+53,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_pc),64);
        tracep->fullIData(oldp+55,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_id_ex_inst),32);
        tracep->fullIData(oldp+56,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_ex_mem_inst),32);
        tracep->fullIData(oldp+57,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_inst),32);
        tracep->fullIData(oldp+58,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm),20);
        tracep->fullSData(oldp+59,((vlSelf->SocTop__DOT__i_cache_inst_data 
                                    >> 0x14U)),12);
        tracep->fullSData(oldp+60,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm),12);
        tracep->fullCData(oldp+61,((0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)),7);
        tracep->fullBit(oldp+62,((IData)((0x6fU == 
                                          (0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)))));
        tracep->fullBit(oldp+63,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr));
        tracep->fullBit(oldp+64,((IData)((0x63U == 
                                          (0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)))));
        tracep->fullQData(oldp+65,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__operand1),64);
        tracep->fullQData(oldp+67,(((IData)((0x6fU 
                                             == (0x7fU 
                                                 & vlSelf->SocTop__DOT__i_cache_inst_data)))
                                     ? (((- (QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm 
                                                                >> 0x13U))))) 
                                         << 0x14U) 
                                        | (QData)((IData)(
                                                          (0xfffffU 
                                                           & (vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm 
                                                              << 1U)))))
                                     : ((IData)((0x63U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->SocTop__DOT__i_cache_inst_data)))
                                         ? (((- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm) 
                                                                    >> 0xbU))))) 
                                             << 0xcU) 
                                            | (QData)((IData)(
                                                              (0xfffU 
                                                               & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm) 
                                                                  << 1U)))))
                                         : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
                                             ? (((- (QData)((IData)(
                                                                    (vlSelf->SocTop__DOT__i_cache_inst_data 
                                                                     >> 0x1fU)))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  (vlSelf->SocTop__DOT__i_cache_inst_data 
                                                                   >> 0x14U))))
                                             : 4ULL)))),64);
        tracep->fullQData(oldp+69,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc),64);
        tracep->fullBit(oldp+71,((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))));
        tracep->fullCData(oldp+72,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__rs1),5);
        tracep->fullBit(oldp+73,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui));
        tracep->fullBit(oldp+74,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc));
        tracep->fullBit(oldp+75,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal));
        tracep->fullBit(oldp+76,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr));
        tracep->fullBit(oldp+77,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jump));
        tracep->fullBit(oldp+78,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srai));
        tracep->fullBit(oldp+79,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addiw));
        tracep->fullBit(oldp+80,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slliw));
        tracep->fullBit(oldp+81,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srliw));
        tracep->fullBit(oldp+82,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraiw));
        tracep->fullBit(oldp+83,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_add));
        tracep->fullBit(oldp+84,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sub));
        tracep->fullBit(oldp+85,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sll));
        tracep->fullBit(oldp+86,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slt));
        tracep->fullBit(oldp+87,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sltu));
        tracep->fullBit(oldp+88,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_xor));
        tracep->fullBit(oldp+89,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srl));
        tracep->fullBit(oldp+90,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sra));
        tracep->fullBit(oldp+91,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_or));
        tracep->fullBit(oldp+92,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_and));
        tracep->fullBit(oldp+93,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addw));
        tracep->fullBit(oldp+94,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_subw));
        tracep->fullBit(oldp+95,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sllw));
        tracep->fullBit(oldp+96,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srlw));
        tracep->fullBit(oldp+97,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraw));
        tracep->fullBit(oldp+98,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw));
        tracep->fullBit(oldp+99,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs));
        tracep->fullBit(oldp+100,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc));
        tracep->fullBit(oldp+101,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrwi));
        tracep->fullBit(oldp+102,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc))));
        tracep->fullBit(oldp+103,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak));
        tracep->fullBit(oldp+104,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1));
        tracep->fullBit(oldp+105,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1));
        tracep->fullBit(oldp+106,((1U & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl) 
                                         >> 3U))));
        tracep->fullQData(oldp+107,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__exe_res),64);
        tracep->fullCData(oldp+109,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_byte),8);
        tracep->fullSData(oldp+110,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte),16);
        tracep->fullIData(oldp+111,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word),32);
        tracep->fullQData(oldp+112,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_data),64);
        tracep->fullCData(oldp+114,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_mask),8);
        tracep->fullBit(oldp+115,(vlSelf->SocTop__DOT__i_cache12__DOT__i_tag_ena1));
        tracep->fullIData(oldp+116,(vlSelf->SocTop__DOT__i_cache12__DOT__i_in_data1),32);
        tracep->fullCData(oldp+117,(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst),6);
        tracep->fullCData(oldp+118,(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst_nxt),6);
        tracep->fullCData(oldp+119,((0x3fU & (IData)(
                                                     (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                      >> 3U)))),6);
        tracep->fullQData(oldp+120,((0x80000000000000ULL 
                                     | (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                        >> 9U))),56);
        tracep->fullBit(oldp+122,(vlSelf->SocTop__DOT__d_cache13__DOT__tag_ena1));
        tracep->fullCData(oldp+123,((0x3fU & (IData)(
                                                     (vlSelf->SocTop__DOT__rvcpu_data_o 
                                                      >> 3U)))),6);
        tracep->fullQData(oldp+124,(vlSelf->SocTop__DOT__d_cache13__DOT__in_data1),64);
        tracep->fullCData(oldp+126,(vlSelf->SocTop__DOT__d_cache13__DOT__data_ena1),8);
        tracep->fullQData(oldp+127,(vlSelf->SocTop__DOT__d_cache13__DOT__in_data2),64);
        tracep->fullCData(oldp+129,(vlSelf->SocTop__DOT__d_cache13__DOT__data_ena2),8);
        tracep->fullQData(oldp+130,((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                     >> 9U)),55);
        tracep->fullCData(oldp+132,(vlSelf->SocTop__DOT__d_cache13__DOT__state_store),6);
        tracep->fullCData(oldp+133,(vlSelf->SocTop__DOT__d_cache13__DOT__state_store_nxt),6);
        tracep->fullCData(oldp+134,(vlSelf->SocTop__DOT__d_cache13__DOT__state_load),6);
        tracep->fullCData(oldp+135,(vlSelf->SocTop__DOT__d_cache13__DOT__state_load_nxt),6);
        tracep->fullQData(oldp+136,(vlSelf->SocTop__DOT____Vcellout__arbitrate4__i_cache_data_o),64);
        tracep->fullBit(oldp+138,(vlSelf->SocTop__DOT__arbitrate4__DOT__aw_shankhand));
        tracep->fullBit(oldp+139,(vlSelf->SocTop__DOT__arbitrate4__DOT__w_shankhand));
        tracep->fullBit(oldp+140,(vlSelf->SocTop__DOT__arbitrate4__DOT__b_shankhand));
        tracep->fullCData(oldp+141,(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state),2);
        tracep->fullCData(oldp+142,(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state_nex),2);
        tracep->fullCData(oldp+143,(vlSelf->SocTop__DOT__arbitrate4__DOT__cache_state),2);
        tracep->fullCData(oldp+144,(vlSelf->SocTop__DOT__arbitrate4__DOT__cache_state_nxt),2);
        tracep->fullBit(oldp+145,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__if_stall_req))));
        tracep->fullQData(oldp+146,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr)
                                      ? (0xfffffffffffffffeULL 
                                         & ((((- (QData)((IData)(
                                                                 (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                  >> 0x1fU)))) 
                                              << 0xcU) 
                                             | (QData)((IData)(
                                                               (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                >> 0x14U)))) 
                                            + vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op))
                                      : 0ULL)),64);
        tracep->fullBit(oldp+148,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+149,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x2000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+150,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x3000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+151,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x4000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+152,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+153,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+154,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x1000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+155,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x5000U 
                                                    == 
                                                    (0x40007000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+156,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+157,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x1000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+158,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x4000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+159,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x5000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+160,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+161,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+162,((1U & (IData)(((0x80U 
                                                  == 
                                                  (0x80U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+163,((1U & (IData)(((0x80U 
                                                  == 
                                                  (0x80U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+164,(((IData)(((0x80U 
                                             == (0x80U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                            & (0U == 
                                               (0x7000U 
                                                & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                   & (0U == (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                             >> 0x14U)))));
        tracep->fullBit(oldp+165,(((IData)(((0x80U 
                                             == (0x80U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                            & (0U == 
                                               (0x7000U 
                                                & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                   & (0x18U == (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+166,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr) 
                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena))));
        tracep->fullBit(oldp+167,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr) 
                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena))));
        tracep->fullBit(oldp+168,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))));
        tracep->fullQData(oldp+169,(((((- (QData)((IData)(
                                                          (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                           >> 0x1fU)))) 
                                       << 0xcU) | (QData)((IData)(
                                                                  (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                   >> 0x14U)))) 
                                     + vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op)),64);
        tracep->fullBit(oldp+171,((1U & (((~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1)) 
                                          & (~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1))) 
                                         & (~ (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                                == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                               & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena)))))));
        tracep->fullQData(oldp+172,(((2U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type))
                                      ? ((4U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                                          ? ((2U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                                              ? ((1U 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                                                  ? 0ULL
                                                  : (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word)))
                                              : ((1U 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                                                  ? (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte))
                                                  : (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_byte))))
                                          : ((2U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                                              ? ((1U 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                                                  ? vlSelf->SocTop__DOT__d_cache_data_out
                                                  : 
                                                 (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word 
                                                                               >> 0x1fU))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word))))
                                              : ((1U 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte) 
                                                                          >> 0xfU))))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte)))
                                                  : 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_byte) 
                                                                          >> 7U))))) 
                                                   << 8U) 
                                                  | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_byte))))))
                                      : 0ULL)),64);
        tracep->fullBit(oldp+174,(((4U == (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst))
                                    ? (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__inst_valid_o)
                                    : ((IData)(vlSelf->SocTop__DOT__i_cache12__DOT__inst_write_cache) 
                                       & (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__inst_valid_write)))));
        tracep->fullBit(oldp+175,((((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                    & (4U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)))
                                    ? (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__load_finish_h)
                                    : (((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                        & ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)) 
                                           & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))
                                        ? (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__finish_the_mem_l)
                                        : (((IData)(vlSelf->SocTop__DOT__rvcpu_we) 
                                            & (4U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)))
                                            ? (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__store_finish)
                                            : (((IData)(vlSelf->SocTop__DOT__rvcpu_we) 
                                                & ((0x10U 
                                                    == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)) 
                                                   & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok))) 
                                               & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__finish_the_mem)))))));
        tracep->fullQData(oldp+176,((((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                      & (0x20U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)))
                                      ? vlSelf->SocTop__DOT__d_cache13__DOT__out_data_wb_l
                                      : (((IData)(vlSelf->SocTop__DOT__rvcpu_we) 
                                          & (0x20U 
                                             == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)))
                                          ? vlSelf->SocTop__DOT__d_cache13__DOT__out_data_wb
                                          : 0ULL))),64);
        tracep->fullQData(oldp+178,((((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__aw_shankhand) 
                                      & (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__w_shankhand))
                                      ? (((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                          & (0x20U 
                                             == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)))
                                          ? vlSelf->SocTop__DOT__d_cache13__DOT__out_data_wb_l
                                          : (((IData)(vlSelf->SocTop__DOT__rvcpu_we) 
                                              & (0x20U 
                                                 == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)))
                                              ? vlSelf->SocTop__DOT__d_cache13__DOT__out_data_wb
                                              : 0ULL))
                                      : 0ULL)),64);
        tracep->fullCData(oldp+180,(((IData)(vlSelf->SocTop__DOT__i_cache12__DOT__ord_data_ena)
                                      ? 1U : ((IData)(vlSelf->SocTop__DOT__d_cache_read_ena)
                                               ? 2U
                                               : 0U))),4);
        tracep->fullQData(oldp+181,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc),64);
        tracep->fullIData(oldp+183,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst),32);
        tracep->fullBit(oldp+184,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena));
        tracep->fullCData(oldp+185,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr),5);
        tracep->fullBit(oldp+186,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena));
        tracep->fullCData(oldp+187,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type),8);
        tracep->fullCData(oldp+188,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_sel),3);
        tracep->fullQData(oldp+189,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_addr),64);
        tracep->fullQData(oldp+191,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena))
                                      ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data
                                      : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch)
                                          ? (4ULL + vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc)
                                          : 0ULL))),64);
        tracep->fullCData(oldp+193,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr),5);
        tracep->fullBit(oldp+194,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena));
        tracep->fullCData(oldp+195,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr),5);
        tracep->fullBit(oldp+196,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena));
        tracep->fullQData(oldp+197,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data),64);
        tracep->fullQData(oldp+199,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc),64);
        tracep->fullCData(oldp+201,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type),8);
        tracep->fullCData(oldp+202,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode),8);
        tracep->fullQData(oldp+203,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1),64);
        tracep->fullQData(oldp+205,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2),64);
        tracep->fullBit(oldp+207,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdena));
        tracep->fullSData(oldp+208,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset),12);
        tracep->fullCData(oldp+209,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type),8);
        tracep->fullQData(oldp+210,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data),64);
        tracep->fullCData(oldp+212,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel),3);
        tracep->fullQData(oldp+213,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr),64);
        tracep->fullQData(oldp+215,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_pc),64);
        tracep->fullIData(oldp+217,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_ex_inst),32);
        tracep->fullIData(oldp+218,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_inst),32);
        tracep->fullCData(oldp+219,((0x7fU & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)),7);
        tracep->fullCData(oldp+220,((0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+221,((7U & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                           >> 0xcU))),3);
        tracep->fullSData(oldp+222,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                     >> 0x14U)),12);
        tracep->fullCData(oldp+223,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+224,((0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                              >> 0x14U))),5);
        tracep->fullIData(oldp+225,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                     >> 0xcU)),20);
        tracep->fullSData(oldp+226,(((0xfe0U & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                 >> 7U)))),12);
        tracep->fullQData(oldp+227,((1ULL + (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))),64);
        tracep->fullQData(oldp+229,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sub_op2),64);
        tracep->fullQData(oldp+231,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2),64);
        tracep->fullQData(oldp+233,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_addw_op2),64);
        tracep->fullBit(oldp+235,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_ls_op2));
        tracep->fullQData(oldp+236,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__shift_res),64);
        tracep->fullIData(oldp+238,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sllw_op2),32);
        tracep->fullQData(oldp+239,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sllw_res),64);
        tracep->fullIData(oldp+241,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_srlw_op2),32);
        tracep->fullQData(oldp+242,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__srlw_res),64);
        tracep->fullIData(oldp+244,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sraw_op2),32);
        tracep->fullQData(oldp+245,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sraw_res),64);
        tracep->fullIData(oldp+247,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2),32);
        tracep->fullQData(oldp+248,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2)))),64);
        tracep->fullQData(oldp+250,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__upper_imm),64);
        tracep->fullBit(oldp+252,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch));
        tracep->fullBit(oldp+253,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena));
        tracep->fullSData(oldp+254,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx),12);
        tracep->fullQData(oldp+255,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data),64);
        tracep->fullBit(oldp+257,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena));
        tracep->fullBit(oldp+258,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena));
        tracep->fullBit(oldp+259,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena));
        tracep->fullBit(oldp+260,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en));
        tracep->fullBit(oldp+261,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en));
        tracep->fullQData(oldp+262,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data),64);
        tracep->fullQData(oldp+264,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value),64);
        tracep->fullQData(oldp+266,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
                                     | vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1)),64);
        tracep->fullQData(oldp+268,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
                                     & (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1))),64);
        tracep->fullBit(oldp+270,((0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+271,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en) 
                                   & (0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)))));
        tracep->fullBit(oldp+272,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en) 
                                   & (0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)))));
        tracep->fullQData(oldp+273,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcycle),64);
        tracep->fullBit(oldp+275,((0x300U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+276,(((0x300U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+277,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus));
        tracep->fullBit(oldp+278,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_ena));
        tracep->fullBit(oldp+279,((1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                          | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                          ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)
                                          : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena) 
                                             | ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                 ? (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                            >> 7U))
                                                 : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)))))));
        tracep->fullBit(oldp+280,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie));
        tracep->fullBit(oldp+281,((1U & ((~ ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                             | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))) 
                                         & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)
                                             ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)
                                             : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                 ? (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                            >> 3U))
                                                 : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)))))));
        tracep->fullBit(oldp+282,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie));
        tracep->fullCData(oldp+283,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                      ? 3U : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                      ? (IData)(
                                                                (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                                 >> 0xbU))
                                                      : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp)))))),2);
        tracep->fullCData(oldp+284,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp),2);
        tracep->fullCData(oldp+285,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs),2);
        tracep->fullBit(oldp+286,((3U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs))));
        tracep->fullQData(oldp+287,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus),64);
        tracep->fullBit(oldp+289,((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+290,(((((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en)) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
        tracep->fullBit(oldp+291,(((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
        tracep->fullQData(oldp+292,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base),62);
        tracep->fullQData(oldp+294,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base 
                                     << 2U)),64);
        tracep->fullBit(oldp+296,((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+297,((((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena))));
        tracep->fullBit(oldp+298,(((((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en)) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
        tracep->fullQData(oldp+299,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mepc),64);
        tracep->fullBit(oldp+301,((0x342U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+302,(((0x342U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+303,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause));
        tracep->fullBit(oldp+304,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
        tracep->fullQData(oldp+305,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                      ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value
                                      : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause)
                                          ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data
                                          : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause))),64);
        tracep->fullQData(oldp+307,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause),64);
        tracep->fullBit(oldp+309,((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+310,(((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+311,(((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
        tracep->fullBit(oldp+312,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie));
        tracep->fullQData(oldp+313,(((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie)) 
                                     << 7U)),64);
        tracep->fullBit(oldp+315,((0x344U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+316,(((0x344U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+317,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip));
        tracep->fullQData(oldp+318,((QData)((IData)(
                                                    ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip) 
                                                     << 7U)))),64);
        tracep->fullBit(oldp+320,((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+321,(((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+322,(((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
        tracep->fullQData(oldp+323,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mscrstch),64);
        tracep->fullCData(oldp+325,((7U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))),3);
        tracep->fullCData(oldp+326,((3U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                   >> 1U)))),2);
        tracep->fullBit(oldp+327,((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                 >> 2U)))));
        tracep->fullQData(oldp+328,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_pc_o),64);
        tracep->fullIData(oldp+330,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o),32);
        tracep->fullQData(oldp+331,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__pc_data1),64);
        tracep->fullBit(oldp+333,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_exyn));
        tracep->fullBit(oldp+334,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__teap_yn));
        tracep->fullQData(oldp+335,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__trap_code),64);
        tracep->fullQData(oldp+337,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[0]),64);
        tracep->fullQData(oldp+339,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[1]),64);
        tracep->fullQData(oldp+341,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[2]),64);
        tracep->fullQData(oldp+343,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[3]),64);
        tracep->fullQData(oldp+345,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[4]),64);
        tracep->fullQData(oldp+347,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[5]),64);
        tracep->fullQData(oldp+349,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[6]),64);
        tracep->fullQData(oldp+351,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[7]),64);
        tracep->fullQData(oldp+353,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[8]),64);
        tracep->fullQData(oldp+355,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[9]),64);
        tracep->fullQData(oldp+357,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[10]),64);
        tracep->fullQData(oldp+359,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[11]),64);
        tracep->fullQData(oldp+361,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[12]),64);
        tracep->fullQData(oldp+363,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[13]),64);
        tracep->fullQData(oldp+365,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[14]),64);
        tracep->fullQData(oldp+367,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[15]),64);
        tracep->fullQData(oldp+369,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[16]),64);
        tracep->fullQData(oldp+371,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[17]),64);
        tracep->fullQData(oldp+373,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[18]),64);
        tracep->fullQData(oldp+375,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[19]),64);
        tracep->fullQData(oldp+377,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[20]),64);
        tracep->fullQData(oldp+379,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[21]),64);
        tracep->fullQData(oldp+381,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[22]),64);
        tracep->fullQData(oldp+383,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[23]),64);
        tracep->fullQData(oldp+385,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[24]),64);
        tracep->fullQData(oldp+387,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[25]),64);
        tracep->fullQData(oldp+389,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[26]),64);
        tracep->fullQData(oldp+391,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[27]),64);
        tracep->fullQData(oldp+393,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[28]),64);
        tracep->fullQData(oldp+395,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[29]),64);
        tracep->fullQData(oldp+397,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[30]),64);
        tracep->fullQData(oldp+399,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[31]),64);
        tracep->fullIData(oldp+401,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__i),32);
        tracep->fullQData(oldp+402,(vlSelf->SocTop__DOT__i_cache12__DOT__u_tag01__DOT__out_data),55);
        tracep->fullBit(oldp+404,(vlSelf->SocTop__DOT__i_cache12__DOT__u_tag01__DOT__out_vaild));
        tracep->fullQData(oldp+405,(vlSelf->SocTop__DOT__i_cache12__DOT__u_tag02__DOT__out_data),55);
        tracep->fullBit(oldp+407,(vlSelf->SocTop__DOT__i_cache12__DOT__u_tag02__DOT__out_vaild));
        tracep->fullIData(oldp+408,(vlSelf->SocTop__DOT__i_cache12__DOT__u_data01__DOT__out_data),32);
        tracep->fullIData(oldp+409,(vlSelf->SocTop__DOT__i_cache12__DOT__u_data02__DOT__out_data),32);
        tracep->fullIData(oldp+410,(vlSelf->SocTop__DOT__i_cache12__DOT__i),32);
        tracep->fullQData(oldp+411,(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_data),55);
        tracep->fullBit(oldp+413,(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_vaild));
        tracep->fullQData(oldp+414,(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_data),55);
        tracep->fullBit(oldp+416,(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_vaild));
        tracep->fullQData(oldp+417,(vlSelf->SocTop__DOT__d_cache13__DOT__u_data0__DOT__out_data),64);
        tracep->fullQData(oldp+419,(vlSelf->SocTop__DOT__d_cache13__DOT__u_data1__DOT__out_data),64);
        tracep->fullIData(oldp+421,(vlSelf->SocTop__DOT__d_cache13__DOT__i),32);
        tracep->fullBit(oldp+422,(vlSelf->SocTop__DOT__i_cache12__DOT__ord_data_ena));
        tracep->fullCData(oldp+423,(((IData)(vlSelf->SocTop__DOT__i_cache12__DOT__ord_data_ena)
                                      ? 2U : 3U)),3);
        tracep->fullBit(oldp+424,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_hit_ok));
        tracep->fullBit(oldp+425,(vlSelf->SocTop__DOT__i_cache12__DOT__write_i_ok));
        tracep->fullIData(oldp+426,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_data_o),32);
        tracep->fullBit(oldp+427,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_valid_o));
        tracep->fullCData(oldp+428,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_hit_count1),3);
        tracep->fullCData(oldp+429,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_hit_count2),3);
        tracep->fullIData(oldp+430,(vlSelf->SocTop__DOT__i_cache12__DOT__data_inst),32);
        tracep->fullBit(oldp+431,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_in_cache1));
        tracep->fullBit(oldp+432,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_in_cache2));
        tracep->fullBit(oldp+433,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_write_cache));
        tracep->fullBit(oldp+434,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_valid_write));
        tracep->fullBit(oldp+435,(vlSelf->SocTop__DOT__d_cache13__DOT__store_ok));
        tracep->fullBit(oldp+436,(vlSelf->SocTop__DOT__d_cache13__DOT__write_ok));
        tracep->fullBit(oldp+437,(vlSelf->SocTop__DOT__d_cache13__DOT__finish_the_mem));
        tracep->fullBit(oldp+438,(vlSelf->SocTop__DOT__d_cache13__DOT__outr_data_ena_w));
        tracep->fullBit(oldp+439,(vlSelf->SocTop__DOT__d_cache13__DOT__write_incache));
        tracep->fullQData(oldp+440,(vlSelf->SocTop__DOT__d_cache13__DOT__ram_iw_data),64);
        tracep->fullBit(oldp+442,(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena1));
        tracep->fullBit(oldp+443,(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena2));
        tracep->fullCData(oldp+444,(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_mask),8);
        tracep->fullBit(oldp+445,(vlSelf->SocTop__DOT__d_cache13__DOT__dirty_make));
        tracep->fullCData(oldp+446,(vlSelf->SocTop__DOT__d_cache13__DOT__count_write1),3);
        tracep->fullCData(oldp+447,(vlSelf->SocTop__DOT__d_cache13__DOT__count_write2),3);
        tracep->fullQData(oldp+448,(vlSelf->SocTop__DOT__d_cache13__DOT__out_data_wb),64);
        tracep->fullBit(oldp+450,(vlSelf->SocTop__DOT__d_cache13__DOT__outr_data_ena));
        tracep->fullQData(oldp+451,(vlSelf->SocTop__DOT__d_cache13__DOT__out_addr_wb),64);
        tracep->fullCData(oldp+453,(vlSelf->SocTop__DOT__d_cache13__DOT__data_ram1_mask),8);
        tracep->fullCData(oldp+454,(vlSelf->SocTop__DOT__d_cache13__DOT__data_ram2_mask),8);
        tracep->fullQData(oldp+455,(vlSelf->SocTop__DOT__d_cache13__DOT__data_ram1_data),64);
        tracep->fullQData(oldp+457,(vlSelf->SocTop__DOT__d_cache13__DOT__data_ram2_data),64);
        tracep->fullBit(oldp+459,(vlSelf->SocTop__DOT__d_cache13__DOT__store_finish));
        tracep->fullBit(oldp+460,(vlSelf->SocTop__DOT__d_cache13__DOT__dirty_hit));
        tracep->fullCData(oldp+461,(vlSelf->SocTop__DOT__d_cache13__DOT__count_hit1),3);
        tracep->fullCData(oldp+462,(vlSelf->SocTop__DOT__d_cache13__DOT__count_hit2),3);
        tracep->fullBit(oldp+463,(vlSelf->SocTop__DOT__d_cache13__DOT__load_ok));
        tracep->fullBit(oldp+464,(vlSelf->SocTop__DOT__d_cache13__DOT__write_l_ok));
        tracep->fullQData(oldp+465,(vlSelf->SocTop__DOT__d_cache13__DOT__load_data_o),64);
        tracep->fullBit(oldp+467,(vlSelf->SocTop__DOT__d_cache13__DOT__load_finish_h));
        tracep->fullCData(oldp+468,(vlSelf->SocTop__DOT__d_cache13__DOT__load_hit_count1),3);
        tracep->fullCData(oldp+469,(vlSelf->SocTop__DOT__d_cache13__DOT__load_hit_count2),3);
        tracep->fullQData(oldp+470,(vlSelf->SocTop__DOT__d_cache13__DOT__out_data_wb_l),64);
        tracep->fullBit(oldp+472,(vlSelf->SocTop__DOT__d_cache13__DOT__outw_data_ena_l));
        tracep->fullBit(oldp+473,(vlSelf->SocTop__DOT__d_cache13__DOT__finish_the_mem_l));
        tracep->fullQData(oldp+474,(vlSelf->SocTop__DOT__d_cache13__DOT__data_load),64);
        tracep->fullBit(oldp+476,(vlSelf->SocTop__DOT__d_cache13__DOT__outr_data_ena_w_l));
        tracep->fullCData(oldp+477,(vlSelf->SocTop__DOT__d_cache13__DOT__load_write_count1),3);
        tracep->fullCData(oldp+478,(vlSelf->SocTop__DOT__d_cache13__DOT__load_write_count2),3);
        tracep->fullBit(oldp+479,(vlSelf->SocTop__DOT__d_cache13__DOT__load_in_cache1));
        tracep->fullBit(oldp+480,(vlSelf->SocTop__DOT__d_cache13__DOT__load_in_cache2));
        tracep->fullQData(oldp+481,(vlSelf->SocTop__DOT__d_cache13__DOT__ram_iw_data_l),64);
        tracep->fullBit(oldp+483,(vlSelf->SocTop__DOT__d_cache13__DOT__read_cache));
        tracep->fullQData(oldp+484,(vlSelf->SocTop__DOT__rvcpu_inst_addr),64);
        tracep->fullCData(oldp+486,((0x3fU & (IData)(
                                                     (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                                      >> 3U)))),6);
        tracep->fullQData(oldp+487,((0x80000000000000ULL 
                                     | (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                        >> 9U))),56);
        tracep->fullQData(oldp+489,((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                     >> 9U)),55);
        tracep->fullBit(oldp+491,(vlSelf->clk));
        tracep->fullBit(oldp+492,(vlSelf->rst));
        tracep->fullCData(oldp+493,(vlSelf->out_axi_aw_id),4);
        tracep->fullQData(oldp+494,(vlSelf->out_axi_aw_addr),64);
        tracep->fullCData(oldp+496,(vlSelf->out_axi_aw_len),8);
        tracep->fullCData(oldp+497,(vlSelf->out_axi_aw_size),3);
        tracep->fullCData(oldp+498,(vlSelf->out_axi_aw_burst),2);
        tracep->fullCData(oldp+499,(vlSelf->out_axi_aw_cache),4);
        tracep->fullCData(oldp+500,(vlSelf->out_axi_aw_port),3);
        tracep->fullCData(oldp+501,(vlSelf->out_axi_aw_qos),4);
        tracep->fullBit(oldp+502,(vlSelf->out_axi_aw_valid));
        tracep->fullBit(oldp+503,(vlSelf->out_axi_aw_ready));
        tracep->fullQData(oldp+504,(vlSelf->out_axi_w_data),64);
        tracep->fullCData(oldp+506,(vlSelf->out_axi_w_strb),8);
        tracep->fullBit(oldp+507,(vlSelf->out_axi_w_last));
        tracep->fullBit(oldp+508,(vlSelf->out_axi_w_valid));
        tracep->fullBit(oldp+509,(vlSelf->out_axi_w_ready));
        tracep->fullCData(oldp+510,(vlSelf->out_axi_b_id),4);
        tracep->fullCData(oldp+511,(vlSelf->out_axi_b_resp),2);
        tracep->fullBit(oldp+512,(vlSelf->out_axi_b_valid));
        tracep->fullBit(oldp+513,(vlSelf->out_axi_b_ready));
        tracep->fullCData(oldp+514,(vlSelf->out_axi_ar_id),4);
        tracep->fullQData(oldp+515,(vlSelf->out_axi_ar_addr),64);
        tracep->fullCData(oldp+517,(vlSelf->out_axi_ar_len),8);
        tracep->fullCData(oldp+518,(vlSelf->out_axi_ar_size),3);
        tracep->fullCData(oldp+519,(vlSelf->out_axi_ar_burst),2);
        tracep->fullCData(oldp+520,(vlSelf->out_axi_ar_cache),4);
        tracep->fullCData(oldp+521,(vlSelf->out_axi_ar_prot),3);
        tracep->fullCData(oldp+522,(vlSelf->out_axi_ar_qos),4);
        tracep->fullBit(oldp+523,(vlSelf->out_axi_ar_valid));
        tracep->fullBit(oldp+524,(vlSelf->out_axi_ar_ready));
        tracep->fullCData(oldp+525,(vlSelf->out_axi_r_id),4);
        tracep->fullQData(oldp+526,(vlSelf->out_axi_r_data),64);
        tracep->fullCData(oldp+528,(vlSelf->out_axi_r_resp),2);
        tracep->fullBit(oldp+529,(vlSelf->out_axi_r_last));
        tracep->fullBit(oldp+530,(vlSelf->out_axi_r_valid));
        tracep->fullBit(oldp+531,(vlSelf->out_axi_r_ready));
        tracep->fullQData(oldp+532,(((IData)(vlSelf->SocTop__DOT__i_cache12__DOT__ord_data_ena)
                                      ? vlSelf->SocTop__DOT__rvcpu_data_addr
                                      : ((IData)(vlSelf->SocTop__DOT__d_cache_read_ena)
                                          ? vlSelf->SocTop__DOT__rvcpu_inst_addr
                                          : 0ULL))),64);
        tracep->fullQData(oldp+534,(((1U & ((~ (IData)(vlSelf->rst)) 
                                            & ((IData)(vlSelf->rst)
                                                ? 0U
                                                : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr))))
                                      ? ((((0x1fU & 
                                            (vlSelf->SocTop__DOT__i_cache_inst_data 
                                             >> 0xfU)) 
                                           == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr)) 
                                          & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                          ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                          : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                         [(0x1fU & 
                                           (vlSelf->SocTop__DOT__i_cache_inst_data 
                                            >> 0xfU))])
                                      : 0ULL)),64);
        tracep->fullBit(oldp+536,(((IData)(vlSelf->rst)
                                    ? 0U : (1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)))));
        tracep->fullQData(oldp+537,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
                                                 ? 
                                                (0xfffffffffffffffeULL 
                                                 & vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc)
                                                 : vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc))),64);
        tracep->fullBit(oldp+539,(((IData)(vlSelf->rst)
                                    ? 0U : (1U & ((
                                                   ((IData)(vlSelf->rst)
                                                     ? 0U
                                                     : 
                                                    (1U 
                                                     & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1) 
                                                         & (2U 
                                                            == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                        & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1) 
                                                           == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr))))) 
                                                   | ((IData)(vlSelf->rst)
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2) 
                                                           & (2U 
                                                              == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                          & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2) 
                                                             == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)))))) 
                                                  | ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_if_flush) 
                                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__if_stall_req)))))));
        tracep->fullQData(oldp+540,((((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1))
                                      ? ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                           == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                          & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                          ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                          : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                         [vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1])
                                      : 0ULL)),64);
        tracep->fullQData(oldp+542,((((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2))
                                      ? ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                           == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                          & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                          ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                          : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                         [vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2])
                                      : 0ULL)),64);
        tracep->fullBit(oldp+544,(((~ (IData)(vlSelf->rst)) 
                                   & (((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                       | (IData)(vlSelf->SocTop__DOT__rvcpu_we)) 
                                      & (~ (((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                             & (4U 
                                                == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)))
                                             ? (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__load_finish_h)
                                             : (((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                                 & ((0x10U 
                                                     == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)) 
                                                    & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok)))
                                                 ? (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__finish_the_mem_l)
                                                 : 
                                                (((IData)(vlSelf->SocTop__DOT__rvcpu_we) 
                                                  & (4U 
                                                     == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)))
                                                  ? (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__store_finish)
                                                  : 
                                                 (((IData)(vlSelf->SocTop__DOT__rvcpu_we) 
                                                   & ((0x10U 
                                                       == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store)) 
                                                      & (IData)(vlSelf->SocTop__DOT__arbitrate_d_ok))) 
                                                  & (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__finish_the_mem))))))))));
        tracep->fullBit(oldp+545,(((IData)(vlSelf->rst)
                                    ? 0U : (1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1) 
                                                   & (2U 
                                                      == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                  & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1) 
                                                     == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)))))));
        tracep->fullBit(oldp+546,(((IData)(vlSelf->rst)
                                    ? 0U : (1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2) 
                                                   & (2U 
                                                      == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                  & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2) 
                                                     == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)))))));
        tracep->fullQData(oldp+547,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((1U 
                                                 & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                            >> 2U)))
                                                 ? 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                             >> 1U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                   << 0x38U)
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                   << 0x30U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                   << 0x28U)
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                   << 0x20U)))
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                             >> 1U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                   << 0x18U)
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                   << 0x10U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                   << 8U)
                                                   : (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data))))))))),64);
        tracep->fullQData(oldp+549,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(
                                                            (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                             >> 1U))))
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data))))
                                                 : 
                                                ((1U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                              >> 1U))))
                                                  ? 
                                                 ((QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                  << 0x10U)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                               >> 1U))))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                   << 0x20U)
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                   << 0x30U)))))),64);
        tracep->fullQData(oldp+551,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((1U 
                                                 & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                            >> 2U)))
                                                 ? 
                                                ((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)) 
                                                 << 0x20U)
                                                 : (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data))))),64);
        tracep->fullCData(oldp+553,(((IData)(vlSelf->rst)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                    ? 0x80U
                                                    : 0x40U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                    ? 0x20U
                                                    : 0x10U))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                    ? 8U
                                                    : 4U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                    ? 2U
                                                    : 1U))))),8);
        tracep->fullCData(oldp+554,(((IData)(vlSelf->rst)
                                      ? 0U : ((0U == 
                                               (3U 
                                                & (IData)(
                                                          (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                           >> 1U))))
                                               ? 3U
                                               : ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                               >> 1U))))
                                                   ? 0xcU
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                                >> 1U))))
                                                    ? 0x30U
                                                    : 0xc0U))))),8);
        tracep->fullCData(oldp+555,(((IData)(vlSelf->rst)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                             >> 2U)))
                                               ? 0xf0U
                                               : 0xfU))),8);
        tracep->fullBit(oldp+556,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__b_shankhand) 
                                   & (0U == (IData)(vlSelf->out_axi_b_resp)))));
        tracep->fullBit(oldp+557,(((IData)(vlSelf->SocTop__DOT__t_axi_ar_valid) 
                                   & (IData)(vlSelf->out_axi_ar_ready))));
        tracep->fullBit(oldp+558,(((IData)(vlSelf->out_axi_r_valid) 
                                   & (1U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__cache_state)))));
        tracep->fullBit(oldp+559,(0U));
        tracep->fullCData(oldp+560,(0U),4);
        tracep->fullCData(oldp+561,(0U),8);
        tracep->fullCData(oldp+562,(3U),3);
        tracep->fullCData(oldp+563,(1U),2);
        tracep->fullCData(oldp+564,(2U),4);
        tracep->fullCData(oldp+565,(0U),3);
        tracep->fullBit(oldp+566,(1U));
        tracep->fullCData(oldp+567,(0xffU),8);
        tracep->fullCData(oldp+568,(0U),2);
        tracep->fullBit(oldp+569,(vlSelf->SocTop__DOT__i_cache12__DOT__i_tag_ena2));
        tracep->fullIData(oldp+570,(vlSelf->SocTop__DOT__i_cache12__DOT__i_in_data2),32);
        tracep->fullBit(oldp+571,(vlSelf->SocTop__DOT__i_cache12__DOT__i_data_ena2));
        tracep->fullBit(oldp+572,(vlSelf->SocTop__DOT__i_cache12__DOT__finish_the_mem_l));
        tracep->fullBit(oldp+573,(vlSelf->SocTop__DOT__d_cache13__DOT__tag_ena2));
        tracep->fullBit(oldp+574,(vlSelf->SocTop__DOT__d_cache13__DOT__load_bc_ok));
    }
}
