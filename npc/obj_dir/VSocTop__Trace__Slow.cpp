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
        tracep->declBit(c+479,"clk", false,-1);
        tracep->declBit(c+480,"rst", false,-1);
        tracep->declBit(c+481,"out_read_ram_ena", false,-1);
        tracep->declBit(c+482,"out_read_inst_ena", false,-1);
        tracep->declQuad(c+483,"out_addr_outp", false,-1, 63,0);
        tracep->declBus(c+485,"in_inst_data_in", false,-1, 31,0);
        tracep->declQuad(c+486,"in_ram_data_in", false,-1, 63,0);
        tracep->declBit(c+488,"out_write_ram_ena", false,-1);
        tracep->declQuad(c+489,"out_write_ram_data", false,-1, 63,0);
        tracep->declQuad(c+491,"out_write_ram_addr", false,-1, 63,0);
        tracep->declBit(c+479,"SocTop clk", false,-1);
        tracep->declBit(c+480,"SocTop rst", false,-1);
        tracep->declBit(c+481,"SocTop out_read_ram_ena", false,-1);
        tracep->declBit(c+482,"SocTop out_read_inst_ena", false,-1);
        tracep->declQuad(c+483,"SocTop out_addr_outp", false,-1, 63,0);
        tracep->declBus(c+485,"SocTop in_inst_data_in", false,-1, 31,0);
        tracep->declQuad(c+486,"SocTop in_ram_data_in", false,-1, 63,0);
        tracep->declBit(c+488,"SocTop out_write_ram_ena", false,-1);
        tracep->declQuad(c+489,"SocTop out_write_ram_data", false,-1, 63,0);
        tracep->declQuad(c+491,"SocTop out_write_ram_addr", false,-1, 63,0);
        tracep->declQuad(c+450,"SocTop rvcpu_inst_addr", false,-1, 63,0);
        tracep->declBit(c+480,"SocTop rvcpu_inst_ena", false,-1);
        tracep->declQuad(c+299,"SocTop rvcpu_data_addr", false,-1, 63,0);
        tracep->declBus(c+301,"SocTop rvcpu_wmask", false,-1, 7,0);
        tracep->declQuad(c+302,"SocTop rvcpu_data_o", false,-1, 63,0);
        tracep->declBit(c+304,"SocTop rvcpu_we", false,-1);
        tracep->declBit(c+305,"SocTop rvcpu_re", false,-1);
        tracep->declBus(c+306,"SocTop i_cache_inst_data", false,-1, 31,0);
        tracep->declBit(c+252,"SocTop i_cache_inst_valid", false,-1);
        tracep->declBit(c+307,"SocTop i_cache_read_ena", false,-1);
        tracep->declQuad(c+450,"SocTop i_cache_addr", false,-1, 63,0);
        tracep->declBit(c+308,"SocTop i_cache_ready", false,-1);
        tracep->declQuad(c+309,"SocTop d_cache_data_out", false,-1, 63,0);
        tracep->declBit(c+493,"SocTop d_cache_mem_finish", false,-1);
        tracep->declQuad(c+299,"SocTop d_cache_out_addr", false,-1, 63,0);
        tracep->declQuad(c+494,"SocTop d_cache_out_data", false,-1, 63,0);
        tracep->declBit(c+311,"SocTop d_cache_read_ena", false,-1);
        tracep->declBit(c+441,"SocTop d_cache_write_ena", false,-1);
        tracep->declQuad(c+1,"SocTop arbitrate_d_data", false,-1, 63,0);
        tracep->declBit(c+452,"SocTop arbitrate_d_ok", false,-1);
        tracep->declBus(c+3,"SocTop arbitrate_i_data", false,-1, 31,0);
        tracep->declBit(c+453,"SocTop arbitrate_i_ok", false,-1);
        tracep->declBit(c+253,"SocTop arbitrate_ti_sign", false,-1);
        tracep->declBit(c+527,"SocTop time_init_sign", false,-1);
        tracep->declBus(c+528,"SocTop t_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+254,"SocTop t_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+529,"SocTop t_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+530,"SocTop t_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+531,"SocTop t_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+532,"SocTop t_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+533,"SocTop t_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+528,"SocTop t_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+312,"SocTop t_axi_aw_ready", false,-1);
        tracep->declBit(c+313,"SocTop t_axi_aw_valid", false,-1);
        tracep->declQuad(c+496,"SocTop t_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+4,"SocTop t_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+534,"SocTop t_axi_w_last", false,-1);
        tracep->declBit(c+5,"SocTop t_axi_w_valid", false,-1);
        tracep->declBit(c+312,"SocTop t_axi_w_ready", false,-1);
        tracep->declBus(c+528,"SocTop t_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+535,"SocTop t_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+6,"SocTop t_axi_b_valid", false,-1);
        tracep->declBit(c+534,"SocTop t_axi_b_ready", false,-1);
        tracep->declBus(c+314,"SocTop t_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+442,"SocTop t_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+529,"SocTop t_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+530,"SocTop t_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+531,"SocTop t_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+532,"SocTop t_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+533,"SocTop t_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+528,"SocTop t_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+315,"SocTop t_axi_ar_valid", false,-1);
        tracep->declBit(c+454,"SocTop t_axi_ar_ready", false,-1);
        tracep->declBus(c+316,"SocTop t_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+317,"SocTop t_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+535,"SocTop t_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+455,"SocTop t_axi_r_last", false,-1);
        tracep->declBit(c+456,"SocTop t_axi_r_valid", false,-1);
        tracep->declBit(c+534,"SocTop t_axi_r_ready", false,-1);
        tracep->declBus(c+536,"SocTop d_cache_mask_gd", false,-1, 7,0);
        tracep->declBit(c+444,"SocTop read_ram_sign", false,-1);
        tracep->declBit(c+445,"SocTop read_inst_sign", false,-1);
        tracep->declQuad(c+498,"SocTop addr_oup_sign", false,-1, 63,0);
        tracep->declBus(c+485,"SocTop inst_data_sign", false,-1, 31,0);
        tracep->declQuad(c+486,"SocTop ram_data_sign", false,-1, 63,0);
        tracep->declBit(c+6,"SocTop write_ena_sign", false,-1);
        tracep->declQuad(c+7,"SocTop write_addr_sign", false,-1, 63,0);
        tracep->declQuad(c+9,"SocTop write_data_sign", false,-1, 63,0);
        tracep->declBit(c+479,"SocTop rvcpu1 clk", false,-1);
        tracep->declBit(c+480,"SocTop rvcpu1 rst", false,-1);
        tracep->declQuad(c+450,"SocTop rvcpu1 inst_addr", false,-1, 63,0);
        tracep->declBit(c+480,"SocTop rvcpu1 inst_ena", false,-1);
        tracep->declBit(c+308,"SocTop rvcpu1 inst_ready", false,-1);
        tracep->declBus(c+306,"SocTop rvcpu1 inst", false,-1, 31,0);
        tracep->declBit(c+252,"SocTop rvcpu1 bui_inst_valid", false,-1);
        tracep->declQuad(c+299,"SocTop rvcpu1 data_addr", false,-1, 63,0);
        tracep->declBus(c+301,"SocTop rvcpu1 wmask", false,-1, 7,0);
        tracep->declQuad(c+302,"SocTop rvcpu1 data_o", false,-1, 63,0);
        tracep->declQuad(c+309,"SocTop rvcpu1 data_i", false,-1, 63,0);
        tracep->declBit(c+304,"SocTop rvcpu1 we", false,-1);
        tracep->declBit(c+305,"SocTop rvcpu1 re", false,-1);
        tracep->declBit(c+493,"SocTop rvcpu1 mem_finish", false,-1);
        tracep->declBit(c+527,"SocTop rvcpu1 timer_intr", false,-1);
        tracep->declQuad(c+500,"SocTop rvcpu1 pip_regfile_x1", false,-1, 63,0);
        tracep->declBit(c+502,"SocTop rvcpu1 pip_refflie_x1_ena", false,-1);
        tracep->declBus(c+319,"SocTop rvcpu1 pip_regfile_x1_addr", false,-1, 4,0);
        tracep->declQuad(c+503,"SocTop rvcpu1 pip_pc", false,-1, 63,0);
        tracep->declBit(c+320,"SocTop rvcpu1 if_stall_req", false,-1);
        tracep->declQuad(c+11,"SocTop rvcpu1 if_id_pc", false,-1, 63,0);
        tracep->declBus(c+13,"SocTop rvcpu1 if_id_inst", false,-1, 31,0);
        tracep->declBit(c+14,"SocTop rvcpu1 ex_flush", false,-1);
        tracep->declQuad(c+321,"SocTop rvcpu1 ex_id_rd_data", false,-1, 63,0);
        tracep->declBus(c+15,"SocTop rvcpu1 ex_id_rd_addr", false,-1, 4,0);
        tracep->declBit(c+16,"SocTop rvcpu1 ex_id_rd_ena", false,-1);
        tracep->declBus(c+17,"SocTop rvcpu1 ex_id_rd_type", false,-1, 7,0);
        tracep->declBus(c+18,"SocTop rvcpu1 ex_mem_sel", false,-1, 2,0);
        tracep->declQuad(c+19,"SocTop rvcpu1 ex_mem_addr", false,-1, 63,0);
        tracep->declBit(c+14,"SocTop rvcpu1 ex_pc_branchena", false,-1);
        tracep->declQuad(c+21,"SocTop rvcpu1 ex_pc_branchpc", false,-1, 63,0);
        tracep->declBit(c+256,"SocTop rvcpu1 ex_ctrl_req", false,-1);
        tracep->declBus(c+323,"SocTop rvcpu1 id_reg_addr1", false,-1, 4,0);
        tracep->declBit(c+324,"SocTop rvcpu1 id_reg_ena1", false,-1);
        tracep->declBus(c+325,"SocTop rvcpu1 id_reg_addr2", false,-1, 4,0);
        tracep->declBit(c+326,"SocTop rvcpu1 id_reg_ena2", false,-1);
        tracep->declBit(c+505,"SocTop rvcpu1 id_ctrl_req", false,-1);
        tracep->declBus(c+327,"SocTop rvcpu1 id_ex_type", false,-1, 7,0);
        tracep->declBus(c+328,"SocTop rvcpu1 id_ex_opcode", false,-1, 7,0);
        tracep->declQuad(c+329,"SocTop rvcpu1 id_ex_op", false,-1, 63,0);
        tracep->declQuad(c+331,"SocTop rvcpu1 id_ex_op2", false,-1, 63,0);
        tracep->declBit(c+333,"SocTop rvcpu1 id_ex_rd_ena", false,-1);
        tracep->declBus(c+334,"SocTop rvcpu1 id_ex_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+335,"SocTop rvcpu1 id_ex_pc", false,-1, 63,0);
        tracep->declBus(c+337,"SocTop rvcpu1 id_ex_s_offset", false,-1, 11,0);
        tracep->declBus(c+338,"SocTop rvcpu1 id_ex_memsel", false,-1, 2,0);
        tracep->declQuad(c+257,"SocTop rvcpu1 id_pip_jalrpc", false,-1, 63,0);
        tracep->declBit(c+339,"SocTop rvcpu1 id_pip_jalrena", false,-1);
        tracep->declBit(c+340,"SocTop rvcpu1 id_if_flush", false,-1);
        tracep->declBus(c+341,"SocTop rvcpu1 stall_ctrl", false,-1, 4,0);
        tracep->declQuad(c+506,"SocTop rvcpu1 regs_id_data1", false,-1, 63,0);
        tracep->declQuad(c+508,"SocTop rvcpu1 regs_id_data2", false,-1, 63,0);
        tracep->declQuad(c+342,"SocTop rvcpu1 mem_id_data", false,-1, 63,0);
        tracep->declBus(c+23,"SocTop rvcpu1 mem_id_addr", false,-1, 4,0);
        tracep->declBit(c+24,"SocTop rvcpu1 mem_id_ena", false,-1);
        tracep->declBit(c+510,"SocTop rvcpu1 mem_ctrl_req", false,-1);
        tracep->declBus(c+25,"SocTop rvcpu1 wb_id_addr", false,-1, 4,0);
        tracep->declBit(c+26,"SocTop rvcpu1 wb_id_ena", false,-1);
        tracep->declQuad(c+27,"SocTop rvcpu1 wb_regfile_data", false,-1, 63,0);
        tracep->declQuad(c+29,"SocTop rvcpu1 idex_ex_pc", false,-1, 63,0);
        tracep->declBus(c+31,"SocTop rvcpu1 idex_ex_type", false,-1, 7,0);
        tracep->declBus(c+32,"SocTop rvcpu1 idex_ex_opcode", false,-1, 7,0);
        tracep->declQuad(c+33,"SocTop rvcpu1 idex_ex_op1", false,-1, 63,0);
        tracep->declQuad(c+35,"SocTop rvcpu1 idex_ex_op2", false,-1, 63,0);
        tracep->declBit(c+37,"SocTop rvcpu1 idex_ex_rdena", false,-1);
        tracep->declBus(c+15,"SocTop rvcpu1 idex_ex_rdaddr", false,-1, 4,0);
        tracep->declBus(c+38,"SocTop rvcpu1 idex_ex_offset", false,-1, 11,0);
        tracep->declBus(c+18,"SocTop rvcpu1 idex_ex_sel", false,-1, 2,0);
        tracep->declBus(c+39,"SocTop rvcpu1 exmem_mem_type", false,-1, 7,0);
        tracep->declBit(c+24,"SocTop rvcpu1 exmem_mem_ena", false,-1);
        tracep->declQuad(c+40,"SocTop rvcpu1 exmem_mem_data", false,-1, 63,0);
        tracep->declBus(c+23,"SocTop rvcpu1 exmem_mem_addr", false,-1, 4,0);
        tracep->declBus(c+42,"SocTop rvcpu1 exmem_mem_sel", false,-1, 2,0);
        tracep->declQuad(c+43,"SocTop rvcpu1 exmem_mem_lsaddr", false,-1, 63,0);
        tracep->declQuad(c+344,"SocTop rvcpu1 ex_ex_mem_pc", false,-1, 63,0);
        tracep->declQuad(c+45,"SocTop rvcpu1 ex_mem_mem_pc", false,-1, 63,0);
        tracep->declQuad(c+346,"SocTop rvcpu1 mem_mem_wb_pc", false,-1, 63,0);
        tracep->declBus(c+348,"SocTop rvcpu1 id_id_ex_inst", false,-1, 31,0);
        tracep->declBus(c+47,"SocTop rvcpu1 id_ex_ex_inst", false,-1, 31,0);
        tracep->declBus(c+349,"SocTop rvcpu1 ex_ex_mem_inst", false,-1, 31,0);
        tracep->declBus(c+48,"SocTop rvcpu1 ex_mem_mem_inst", false,-1, 31,0);
        tracep->declBus(c+350,"SocTop rvcpu1 mem_mem_wb_inst", false,-1, 31,0);
        tracep->declBit(c+480,"SocTop rvcpu1 pip_fore0 rst", false,-1);
        tracep->declQuad(c+450,"SocTop rvcpu1 pip_fore0 pc_i", false,-1, 63,0);
        tracep->declBus(c+306,"SocTop rvcpu1 pip_fore0 inst", false,-1, 31,0);
        tracep->declQuad(c+500,"SocTop rvcpu1 pip_fore0 x1_data", false,-1, 63,0);
        tracep->declQuad(c+503,"SocTop rvcpu1 pip_fore0 pc_o", false,-1, 63,0);
        tracep->declBus(c+319,"SocTop rvcpu1 pip_fore0 x1_addr", false,-1, 4,0);
        tracep->declBit(c+502,"SocTop rvcpu1 pip_fore0 x1_ena", false,-1);
        tracep->declBus(c+351,"SocTop rvcpu1 pip_fore0 j_imm", false,-1, 20,1);
        tracep->declBus(c+352,"SocTop rvcpu1 pip_fore0 i_imm", false,-1, 11,0);
        tracep->declBus(c+353,"SocTop rvcpu1 pip_fore0 b_imm", false,-1, 12,1);
        tracep->declBus(c+354,"SocTop rvcpu1 pip_fore0 opcode", false,-1, 6,0);
        tracep->declBit(c+355,"SocTop rvcpu1 pip_fore0 inst_jal", false,-1);
        tracep->declBit(c+356,"SocTop rvcpu1 pip_fore0 inst_jalr", false,-1);
        tracep->declBit(c+357,"SocTop rvcpu1 pip_fore0 inst_bxx", false,-1);
        tracep->declQuad(c+358,"SocTop rvcpu1 pip_fore0 operand1", false,-1, 63,0);
        tracep->declQuad(c+360,"SocTop rvcpu1 pip_fore0 operand2", false,-1, 63,0);
        tracep->declQuad(c+362,"SocTop rvcpu1 pip_fore0 j_pc", false,-1, 63,0);
        tracep->declBit(c+479,"SocTop rvcpu1 pc1 clk", false,-1);
        tracep->declBit(c+480,"SocTop rvcpu1 pc1 rst", false,-1);
        tracep->declQuad(c+503,"SocTop rvcpu1 pc1 static_pc_i", false,-1, 63,0);
        tracep->declQuad(c+257,"SocTop rvcpu1 pc1 id_pc_i", false,-1, 63,0);
        tracep->declBit(c+339,"SocTop rvcpu1 pc1 id_pc_ena", false,-1);
        tracep->declQuad(c+21,"SocTop rvcpu1 pc1 ex_pc_i", false,-1, 63,0);
        tracep->declBit(c+14,"SocTop rvcpu1 pc1 ex_pc_ena", false,-1);
        tracep->declBit(c+364,"SocTop rvcpu1 pc1 pc_stall", false,-1);
        tracep->declQuad(c+450,"SocTop rvcpu1 pc1 pc", false,-1, 63,0);
        tracep->declBit(c+480,"SocTop rvcpu1 pc1 ce", false,-1);
        tracep->declBit(c+479,"SocTop rvcpu1 if_id2 clk", false,-1);
        tracep->declBit(c+480,"SocTop rvcpu1 if_id2 rst", false,-1);
        tracep->declQuad(c+450,"SocTop rvcpu1 if_id2 if_pc", false,-1, 63,0);
        tracep->declBus(c+306,"SocTop rvcpu1 if_id2 if_inst", false,-1, 31,0);
        tracep->declBit(c+14,"SocTop rvcpu1 if_id2 if_id_flush", false,-1);
        tracep->declBit(c+340,"SocTop rvcpu1 if_id2 if_id_bubble", false,-1);
        tracep->declBit(c+252,"SocTop rvcpu1 if_id2 if_inst_valid", false,-1);
        tracep->declBit(c+308,"SocTop rvcpu1 if_id2 if_inst_ready", false,-1);
        tracep->declBus(c+341,"SocTop rvcpu1 if_id2 stall_ctrl", false,-1, 4,0);
        tracep->declBit(c+320,"SocTop rvcpu1 if_id2 if_stall_req", false,-1);
        tracep->declQuad(c+11,"SocTop rvcpu1 if_id2 id_pc", false,-1, 63,0);
        tracep->declBus(c+13,"SocTop rvcpu1 if_id2 id_inst", false,-1, 31,0);
        tracep->declBit(c+480,"SocTop rvcpu1 id3 rst", false,-1);
        tracep->declBus(c+13,"SocTop rvcpu1 id3 inst_i", false,-1, 31,0);
        tracep->declQuad(c+11,"SocTop rvcpu1 id3 pc_i", false,-1, 63,0);
        tracep->declQuad(c+506,"SocTop rvcpu1 id3 op1_data_i", false,-1, 63,0);
        tracep->declQuad(c+508,"SocTop rvcpu1 id3 op2_data_i", false,-1, 63,0);
        tracep->declBus(c+323,"SocTop rvcpu1 id3 op1_addr_o", false,-1, 4,0);
        tracep->declBus(c+325,"SocTop rvcpu1 id3 op2_addr_o", false,-1, 4,0);
        tracep->declBit(c+324,"SocTop rvcpu1 id3 op1_read_o", false,-1);
        tracep->declBit(c+326,"SocTop rvcpu1 id3 op2_read_o", false,-1);
        tracep->declQuad(c+321,"SocTop rvcpu1 id3 ex_rd_data", false,-1, 63,0);
        tracep->declBus(c+15,"SocTop rvcpu1 id3 ex_rd_addr", false,-1, 4,0);
        tracep->declBit(c+16,"SocTop rvcpu1 id3 ex_rd_ena", false,-1);
        tracep->declBus(c+17,"SocTop rvcpu1 id3 ex_inst_type", false,-1, 7,0);
        tracep->declQuad(c+342,"SocTop rvcpu1 id3 mem_rd_data", false,-1, 63,0);
        tracep->declBus(c+23,"SocTop rvcpu1 id3 mem_rd_addr", false,-1, 4,0);
        tracep->declBit(c+24,"SocTop rvcpu1 id3 mem_rd_ena", false,-1);
        tracep->declBit(c+26,"SocTop rvcpu1 id3 wb_rd_ena", false,-1);
        tracep->declBus(c+25,"SocTop rvcpu1 id3 wb_rd_addr", false,-1, 4,0);
        tracep->declBit(c+505,"SocTop rvcpu1 id3 id_stall_req", false,-1);
        tracep->declBit(c+320,"SocTop rvcpu1 id3 if_stall_req", false,-1);
        tracep->declBus(c+327,"SocTop rvcpu1 id3 inst_type", false,-1, 7,0);
        tracep->declBus(c+328,"SocTop rvcpu1 id3 inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+329,"SocTop rvcpu1 id3 op1_o", false,-1, 63,0);
        tracep->declQuad(c+331,"SocTop rvcpu1 id3 op2_o", false,-1, 63,0);
        tracep->declBit(c+333,"SocTop rvcpu1 id3 rd_w_ena", false,-1);
        tracep->declBus(c+334,"SocTop rvcpu1 id3 rd_w_addr", false,-1, 4,0);
        tracep->declQuad(c+335,"SocTop rvcpu1 id3 pc_o", false,-1, 63,0);
        tracep->declBus(c+348,"SocTop rvcpu1 id3 inst_o", false,-1, 31,0);
        tracep->declBus(c+337,"SocTop rvcpu1 id3 store_addr_offset", false,-1, 11,0);
        tracep->declBus(c+338,"SocTop rvcpu1 id3 mem_op_sel", false,-1, 2,0);
        tracep->declBit(c+339,"SocTop rvcpu1 id3 jalr_pc_ena", false,-1);
        tracep->declQuad(c+257,"SocTop rvcpu1 id3 jalr_pc", false,-1, 63,0);
        tracep->declBit(c+340,"SocTop rvcpu1 id3 id_flush", false,-1);
        tracep->declBus(c+49,"SocTop rvcpu1 id3 opcode", false,-1, 6,0);
        tracep->declBus(c+50,"SocTop rvcpu1 id3 rd", false,-1, 4,0);
        tracep->declBus(c+51,"SocTop rvcpu1 id3 funct3", false,-1, 2,0);
        tracep->declBus(c+365,"SocTop rvcpu1 id3 rs1", false,-1, 4,0);
        tracep->declBus(c+52,"SocTop rvcpu1 id3 imm", false,-1, 11,0);
        tracep->declBus(c+53,"SocTop rvcpu1 id3 funct7", false,-1, 6,0);
        tracep->declBus(c+54,"SocTop rvcpu1 id3 rs2", false,-1, 4,0);
        tracep->declBus(c+55,"SocTop rvcpu1 id3 u_imm", false,-1, 19,0);
        tracep->declBus(c+56,"SocTop rvcpu1 id3 s_imm", false,-1, 11,0);
        tracep->declBit(c+366,"SocTop rvcpu1 id3 inst_lui", false,-1);
        tracep->declBit(c+367,"SocTop rvcpu1 id3 inst_auipc", false,-1);
        tracep->declBit(c+368,"SocTop rvcpu1 id3 inst_jal", false,-1);
        tracep->declBit(c+369,"SocTop rvcpu1 id3 inst_jalr", false,-1);
        tracep->declBit(c+370,"SocTop rvcpu1 id3 inst_jump", false,-1);
        tracep->declBit(c+259,"SocTop rvcpu1 id3 inst_addi", false,-1);
        tracep->declBit(c+260,"SocTop rvcpu1 id3 inst_slti", false,-1);
        tracep->declBit(c+261,"SocTop rvcpu1 id3 inst_sltiu", false,-1);
        tracep->declBit(c+262,"SocTop rvcpu1 id3 inst_xori", false,-1);
        tracep->declBit(c+263,"SocTop rvcpu1 id3 inst_ori", false,-1);
        tracep->declBit(c+264,"SocTop rvcpu1 id3 inst_andi", false,-1);
        tracep->declBit(c+265,"SocTop rvcpu1 id3 inst_slli", false,-1);
        tracep->declBit(c+266,"SocTop rvcpu1 id3 inst_srli", false,-1);
        tracep->declBit(c+371,"SocTop rvcpu1 id3 inst_srai", false,-1);
        tracep->declBit(c+372,"SocTop rvcpu1 id3 inst_addiw", false,-1);
        tracep->declBit(c+373,"SocTop rvcpu1 id3 inst_slliw", false,-1);
        tracep->declBit(c+374,"SocTop rvcpu1 id3 inst_srliw", false,-1);
        tracep->declBit(c+375,"SocTop rvcpu1 id3 inst_sraiw", false,-1);
        tracep->declBit(c+376,"SocTop rvcpu1 id3 inst_add", false,-1);
        tracep->declBit(c+377,"SocTop rvcpu1 id3 inst_sub", false,-1);
        tracep->declBit(c+378,"SocTop rvcpu1 id3 inst_sll", false,-1);
        tracep->declBit(c+379,"SocTop rvcpu1 id3 inst_slt", false,-1);
        tracep->declBit(c+380,"SocTop rvcpu1 id3 inst_sltu", false,-1);
        tracep->declBit(c+381,"SocTop rvcpu1 id3 inst_xor", false,-1);
        tracep->declBit(c+382,"SocTop rvcpu1 id3 inst_srl", false,-1);
        tracep->declBit(c+383,"SocTop rvcpu1 id3 inst_sra", false,-1);
        tracep->declBit(c+384,"SocTop rvcpu1 id3 inst_or", false,-1);
        tracep->declBit(c+385,"SocTop rvcpu1 id3 inst_and", false,-1);
        tracep->declBit(c+386,"SocTop rvcpu1 id3 inst_addw", false,-1);
        tracep->declBit(c+387,"SocTop rvcpu1 id3 inst_subw", false,-1);
        tracep->declBit(c+388,"SocTop rvcpu1 id3 inst_sllw", false,-1);
        tracep->declBit(c+389,"SocTop rvcpu1 id3 inst_srlw", false,-1);
        tracep->declBit(c+390,"SocTop rvcpu1 id3 inst_sraw", false,-1);
        tracep->declBit(c+267,"SocTop rvcpu1 id3 inst_beq", false,-1);
        tracep->declBit(c+268,"SocTop rvcpu1 id3 inst_ben", false,-1);
        tracep->declBit(c+269,"SocTop rvcpu1 id3 inst_blt", false,-1);
        tracep->declBit(c+270,"SocTop rvcpu1 id3 inst_bge", false,-1);
        tracep->declBit(c+271,"SocTop rvcpu1 id3 inst_bltu", false,-1);
        tracep->declBit(c+272,"SocTop rvcpu1 id3 inst_bgeu", false,-1);
        tracep->declBit(c+391,"SocTop rvcpu1 id3 inst_csrrw", false,-1);
        tracep->declBit(c+392,"SocTop rvcpu1 id3 inst_csrrs", false,-1);
        tracep->declBit(c+393,"SocTop rvcpu1 id3 inst_csrrc", false,-1);
        tracep->declBit(c+394,"SocTop rvcpu1 id3 inst_csrrwi", false,-1);
        tracep->declBit(c+273,"SocTop rvcpu1 id3 inst_csrrsi", false,-1);
        tracep->declBit(c+274,"SocTop rvcpu1 id3 inst_csrrci", false,-1);
        tracep->declBit(c+395,"SocTop rvcpu1 id3 inst_csr_rs1", false,-1);
        tracep->declBit(c+394,"SocTop rvcpu1 id3 inst_csr_imm", false,-1);
        tracep->declBit(c+275,"SocTop rvcpu1 id3 inst_ecall", false,-1);
        tracep->declBit(c+396,"SocTop rvcpu1 id3 inst_ebreak", false,-1);
        tracep->declBit(c+276,"SocTop rvcpu1 id3 inst_mret", false,-1);
        tracep->declBit(c+511,"SocTop rvcpu1 id3 op1_loda_relate", false,-1);
        tracep->declBit(c+512,"SocTop rvcpu1 id3 op2_loda_relate", false,-1);
        tracep->declBit(c+397,"SocTop rvcpu1 id3 ex_op1", false,-1);
        tracep->declBit(c+398,"SocTop rvcpu1 id3 mem_op1", false,-1);
        tracep->declBit(c+277,"SocTop rvcpu1 id3 ex_op2", false,-1);
        tracep->declBit(c+278,"SocTop rvcpu1 id3 mem_op2", false,-1);
        tracep->declBit(c+279,"SocTop rvcpu1 id3 wb_op1", false,-1);
        tracep->declQuad(c+280,"SocTop rvcpu1 id3 jalr_pc_temp", false,-1, 63,0);
        tracep->declBit(c+282,"SocTop rvcpu1 id3 predict_success", false,-1);
        tracep->declBit(c+479,"SocTop rvcpu1 id_ex4 clk", false,-1);
        tracep->declBit(c+480,"SocTop rvcpu1 id_ex4 rst", false,-1);
        tracep->declBit(c+14,"SocTop rvcpu1 id_ex4 id_ex_bubble", false,-1);
        tracep->declBus(c+341,"SocTop rvcpu1 id_ex4 stall_ctrl", false,-1, 4,0);
        tracep->declBus(c+348,"SocTop rvcpu1 id_ex4 id_inst", false,-1, 31,0);
        tracep->declQuad(c+335,"SocTop rvcpu1 id_ex4 id_pc", false,-1, 63,0);
        tracep->declBus(c+327,"SocTop rvcpu1 id_ex4 id_inst_type", false,-1, 7,0);
        tracep->declBus(c+328,"SocTop rvcpu1 id_ex4 id_inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+329,"SocTop rvcpu1 id_ex4 id_op1", false,-1, 63,0);
        tracep->declQuad(c+331,"SocTop rvcpu1 id_ex4 id_op2", false,-1, 63,0);
        tracep->declBit(c+333,"SocTop rvcpu1 id_ex4 id_rd_ena", false,-1);
        tracep->declBus(c+334,"SocTop rvcpu1 id_ex4 id_rd_addr", false,-1, 4,0);
        tracep->declBus(c+337,"SocTop rvcpu1 id_ex4 id_addr_offset", false,-1, 11,0);
        tracep->declBus(c+338,"SocTop rvcpu1 id_ex4 id_ls_sel", false,-1, 2,0);
        tracep->declBus(c+47,"SocTop rvcpu1 id_ex4 ex_inst", false,-1, 31,0);
        tracep->declQuad(c+29,"SocTop rvcpu1 id_ex4 ex_pc", false,-1, 63,0);
        tracep->declBus(c+31,"SocTop rvcpu1 id_ex4 ex_inst_type", false,-1, 7,0);
        tracep->declBus(c+32,"SocTop rvcpu1 id_ex4 ex_inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+33,"SocTop rvcpu1 id_ex4 ex_op1", false,-1, 63,0);
        tracep->declQuad(c+35,"SocTop rvcpu1 id_ex4 ex_op2", false,-1, 63,0);
        tracep->declBit(c+37,"SocTop rvcpu1 id_ex4 ex_rd_ena", false,-1);
        tracep->declBus(c+15,"SocTop rvcpu1 id_ex4 ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+38,"SocTop rvcpu1 id_ex4 ex_addr_offset", false,-1, 11,0);
        tracep->declBus(c+18,"SocTop rvcpu1 id_ex4 ex_ls_sel", false,-1, 2,0);
        tracep->declBit(c+479,"SocTop rvcpu1 ex5 clk", false,-1);
        tracep->declBit(c+480,"SocTop rvcpu1 ex5 rst", false,-1);
        tracep->declQuad(c+29,"SocTop rvcpu1 ex5 pc_i", false,-1, 63,0);
        tracep->declBus(c+47,"SocTop rvcpu1 ex5 id_ex_inst", false,-1, 31,0);
        tracep->declBus(c+31,"SocTop rvcpu1 ex5 inst_type_i", false,-1, 7,0);
        tracep->declBus(c+32,"SocTop rvcpu1 ex5 inst_opcode_i", false,-1, 7,0);
        tracep->declQuad(c+33,"SocTop rvcpu1 ex5 op1_i", false,-1, 63,0);
        tracep->declQuad(c+35,"SocTop rvcpu1 ex5 op2_i", false,-1, 63,0);
        tracep->declBit(c+37,"SocTop rvcpu1 ex5 rd_ena_i", false,-1);
        tracep->declBus(c+15,"SocTop rvcpu1 ex5 rd_addr_i", false,-1, 4,0);
        tracep->declBus(c+18,"SocTop rvcpu1 ex5 ls_sel_i", false,-1, 2,0);
        tracep->declBus(c+38,"SocTop rvcpu1 ex5 addr_offsel_i", false,-1, 11,0);
        tracep->declBus(c+17,"SocTop rvcpu1 ex5 inst_type_o", false,-1, 7,0);
        tracep->declBit(c+16,"SocTop rvcpu1 ex5 rd_ena_o", false,-1);
        tracep->declBus(c+15,"SocTop rvcpu1 ex5 rd_addr_o", false,-1, 4,0);
        tracep->declQuad(c+321,"SocTop rvcpu1 ex5 rd_data_o", false,-1, 63,0);
        tracep->declQuad(c+344,"SocTop rvcpu1 ex5 ex_pc_o", false,-1, 63,0);
        tracep->declBus(c+349,"SocTop rvcpu1 ex5 ex_inst_o", false,-1, 31,0);
        tracep->declBus(c+18,"SocTop rvcpu1 ex5 ls_sel_o", false,-1, 2,0);
        tracep->declQuad(c+19,"SocTop rvcpu1 ex5 ls_addr_o", false,-1, 63,0);
        tracep->declBit(c+14,"SocTop rvcpu1 ex5 ex_flush", false,-1);
        tracep->declBit(c+14,"SocTop rvcpu1 ex5 branch_pc_ena", false,-1);
        tracep->declQuad(c+21,"SocTop rvcpu1 ex5 branch_pc", false,-1, 63,0);
        tracep->declBit(c+320,"SocTop rvcpu1 ex5 if_stell_req", false,-1);
        tracep->declBit(c+256,"SocTop rvcpu1 ex5 ex_stall_req", false,-1);
        tracep->declBit(c+527,"SocTop rvcpu1 ex5 timer_intr", false,-1);
        tracep->declBit(c+399,"SocTop rvcpu1 ex5 ex_stall", false,-1);
        tracep->declQuad(c+400,"SocTop rvcpu1 ex5 exe_res", false,-1, 63,0);
        tracep->declQuad(c+57,"SocTop rvcpu1 ex5 op2_i_mux", false,-1, 63,0);
        tracep->declQuad(c+59,"SocTop rvcpu1 ex5 op1_sub_op2", false,-1, 63,0);
        tracep->declQuad(c+61,"SocTop rvcpu1 ex5 op1_add_op2", false,-1, 63,0);
        tracep->declQuad(c+63,"SocTop rvcpu1 ex5 op1_addw_op2", false,-1, 63,0);
        tracep->declBit(c+65,"SocTop rvcpu1 ex5 op1_ls_op2", false,-1);
        tracep->declQuad(c+66,"SocTop rvcpu1 ex5 shift_res", false,-1, 63,0);
        tracep->declBus(c+68,"SocTop rvcpu1 ex5 op1_sllw_op2", false,-1, 31,0);
        tracep->declQuad(c+69,"SocTop rvcpu1 ex5 sllw_res", false,-1, 63,0);
        tracep->declBus(c+71,"SocTop rvcpu1 ex5 op1_srlw_op2", false,-1, 31,0);
        tracep->declQuad(c+72,"SocTop rvcpu1 ex5 srlw_res", false,-1, 63,0);
        tracep->declBus(c+74,"SocTop rvcpu1 ex5 op1_sraw_op2", false,-1, 31,0);
        tracep->declQuad(c+75,"SocTop rvcpu1 ex5 sraw_res", false,-1, 63,0);
        tracep->declBus(c+77,"SocTop rvcpu1 ex5 op1_subw_op2", false,-1, 31,0);
        tracep->declQuad(c+78,"SocTop rvcpu1 ex5 subw_res", false,-1, 63,0);
        tracep->declQuad(c+80,"SocTop rvcpu1 ex5 upper_imm", false,-1, 63,0);
        tracep->declBit(c+82,"SocTop rvcpu1 ex5 ex_flush_branch", false,-1);
        tracep->declBit(c+83,"SocTop rvcpu1 ex5 tmr_trap_ena", false,-1);
        tracep->declBus(c+84,"SocTop rvcpu1 ex5 csr_idx", false,-1, 11,0);
        tracep->declQuad(c+85,"SocTop rvcpu1 ex5 read_csr_data", false,-1, 63,0);
        tracep->declBit(c+87,"SocTop rvcpu1 ex5 trap_ena", false,-1);
        tracep->declBit(c+88,"SocTop rvcpu1 ex5 ecall_trap_ena", false,-1);
        tracep->declBit(c+89,"SocTop rvcpu1 ex5 cmt_mret_ena", false,-1);
        tracep->declBit(c+90,"SocTop rvcpu1 ex5 csr_wr_en", false,-1);
        tracep->declBit(c+91,"SocTop rvcpu1 ex5 csr_rd_en", false,-1);
        tracep->declQuad(c+92,"SocTop rvcpu1 ex5 wbck_csr_data", false,-1, 63,0);
        tracep->declQuad(c+94,"SocTop rvcpu1 ex5 trap_mcause_value", false,-1, 63,0);
        tracep->declQuad(c+96,"SocTop rvcpu1 ex5 mask_set_res", false,-1, 63,0);
        tracep->declQuad(c+98,"SocTop rvcpu1 ex5 mask_clear_res", false,-1, 63,0);
        tracep->declBit(c+479,"SocTop rvcpu1 ex5 csr0 clk", false,-1);
        tracep->declBit(c+480,"SocTop rvcpu1 ex5 csr0 rst", false,-1);
        tracep->declQuad(c+29,"SocTop rvcpu1 ex5 csr0 pc_i", false,-1, 63,0);
        tracep->declBit(c+90,"SocTop rvcpu1 ex5 csr0 csr_wr_en", false,-1);
        tracep->declBit(c+91,"SocTop rvcpu1 ex5 csr0 csr_rd_en", false,-1);
        tracep->declBus(c+84,"SocTop rvcpu1 ex5 csr0 csr_idx", false,-1, 11,0);
        tracep->declBit(c+89,"SocTop rvcpu1 ex5 csr0 cmt_mret_ena", false,-1);
        tracep->declBit(c+88,"SocTop rvcpu1 ex5 csr0 ecall_trap_ena", false,-1);
        tracep->declQuad(c+94,"SocTop rvcpu1 ex5 csr0 trap_mcause_value", false,-1, 63,0);
        tracep->declBit(c+527,"SocTop rvcpu1 ex5 csr0 tmr_intr_ena", false,-1);
        tracep->declBit(c+83,"SocTop rvcpu1 ex5 csr0 tmr_trap_ena", false,-1);
        tracep->declQuad(c+85,"SocTop rvcpu1 ex5 csr0 read_csr_data", false,-1, 63,0);
        tracep->declQuad(c+92,"SocTop rvcpu1 ex5 csr0 wbck_csr_data", false,-1, 63,0);
        tracep->declBit(c+399,"SocTop rvcpu1 ex5 csr0 ex_stall", false,-1);
        tracep->declBit(c+100,"SocTop rvcpu1 ex5 csr0 sel_mcycle", false,-1);
        tracep->declBit(c+101,"SocTop rvcpu1 ex5 csr0 rd_mcycle", false,-1);
        tracep->declBit(c+102,"SocTop rvcpu1 ex5 csr0 wr_mcycle", false,-1);
        tracep->declQuad(c+103,"SocTop rvcpu1 ex5 csr0 csr_mcycle", false,-1, 63,0);
        tracep->declBit(c+105,"SocTop rvcpu1 ex5 csr0 sel_mstatus", false,-1);
        tracep->declBit(c+106,"SocTop rvcpu1 ex5 csr0 rd_mstatus", false,-1);
        tracep->declBit(c+107,"SocTop rvcpu1 ex5 csr0 wr_mstatus", false,-1);
        tracep->declBit(c+108,"SocTop rvcpu1 ex5 csr0 mstatus_mpie_ena", false,-1);
        tracep->declBit(c+109,"SocTop rvcpu1 ex5 csr0 mstatus_mpie_nxt", false,-1);
        tracep->declBit(c+110,"SocTop rvcpu1 ex5 csr0 csr_mstatus_mpie", false,-1);
        tracep->declBit(c+108,"SocTop rvcpu1 ex5 csr0 mstatus_mie_ena", false,-1);
        tracep->declBit(c+111,"SocTop rvcpu1 ex5 csr0 mstatus_mie_nxt", false,-1);
        tracep->declBit(c+112,"SocTop rvcpu1 ex5 csr0 csr_mstatus_mie", false,-1);
        tracep->declBit(c+108,"SocTop rvcpu1 ex5 csr0 mstatus_mpp_ena", false,-1);
        tracep->declBus(c+113,"SocTop rvcpu1 ex5 csr0 mstatus_mpp_nxt", false,-1, 1,0);
        tracep->declBus(c+114,"SocTop rvcpu1 ex5 csr0 csr_mstatus_mpp", false,-1, 1,0);
        tracep->declBus(c+535,"SocTop rvcpu1 ex5 csr0 csr_mstatus_xs", false,-1, 1,0);
        tracep->declBus(c+115,"SocTop rvcpu1 ex5 csr0 csr_mstatus_fs", false,-1, 1,0);
        tracep->declBit(c+116,"SocTop rvcpu1 ex5 csr0 csr_mstatus_sd", false,-1);
        tracep->declQuad(c+117,"SocTop rvcpu1 ex5 csr0 csr_mstatus", false,-1, 63,0);
        tracep->declBit(c+119,"SocTop rvcpu1 ex5 csr0 sel_mtvec", false,-1);
        tracep->declBit(c+120,"SocTop rvcpu1 ex5 csr0 rd_mtvec", false,-1);
        tracep->declBit(c+121,"SocTop rvcpu1 ex5 csr0 wr_mtvec", false,-1);
        tracep->declQuad(c+122,"SocTop rvcpu1 ex5 csr0 csr_mtvec_base", false,-1, 63,2);
        tracep->declBus(c+535,"SocTop rvcpu1 ex5 csr0 csr_mtvec_mode", false,-1, 1,0);
        tracep->declQuad(c+124,"SocTop rvcpu1 ex5 csr0 csr_mtvec", false,-1, 63,0);
        tracep->declBit(c+126,"SocTop rvcpu1 ex5 csr0 sel_mepc", false,-1);
        tracep->declBit(c+127,"SocTop rvcpu1 ex5 csr0 rd_mepc", false,-1);
        tracep->declBit(c+128,"SocTop rvcpu1 ex5 csr0 wr_mepc", false,-1);
        tracep->declQuad(c+129,"SocTop rvcpu1 ex5 csr0 csr_mepc", false,-1, 63,0);
        tracep->declBit(c+131,"SocTop rvcpu1 ex5 csr0 sel_mcause", false,-1);
        tracep->declBit(c+132,"SocTop rvcpu1 ex5 csr0 rd_mcause", false,-1);
        tracep->declBit(c+133,"SocTop rvcpu1 ex5 csr0 wr_mcause", false,-1);
        tracep->declBit(c+134,"SocTop rvcpu1 ex5 csr0 csr_mcause_ena", false,-1);
        tracep->declQuad(c+135,"SocTop rvcpu1 ex5 csr0 csr_mcause_nxt", false,-1, 63,0);
        tracep->declQuad(c+137,"SocTop rvcpu1 ex5 csr0 csr_mcause", false,-1, 63,0);
        tracep->declBit(c+139,"SocTop rvcpu1 ex5 csr0 sle_mie", false,-1);
        tracep->declBit(c+140,"SocTop rvcpu1 ex5 csr0 rd_mie", false,-1);
        tracep->declBit(c+141,"SocTop rvcpu1 ex5 csr0 wr_mie", false,-1);
        tracep->declBit(c+142,"SocTop rvcpu1 ex5 csr0 csr_mie_mtie", false,-1);
        tracep->declQuad(c+143,"SocTop rvcpu1 ex5 csr0 csr_mie", false,-1, 63,0);
        tracep->declBit(c+145,"SocTop rvcpu1 ex5 csr0 sel_mip", false,-1);
        tracep->declBit(c+146,"SocTop rvcpu1 ex5 csr0 rd_mip", false,-1);
        tracep->declBit(c+147,"SocTop rvcpu1 ex5 csr0 csr_mip_mtip", false,-1);
        tracep->declQuad(c+148,"SocTop rvcpu1 ex5 csr0 csr_mip", false,-1, 63,0);
        tracep->declBit(c+150,"SocTop rvcpu1 ex5 csr0 sel_mscratch", false,-1);
        tracep->declBit(c+151,"SocTop rvcpu1 ex5 csr0 rd_mscrstch", false,-1);
        tracep->declBit(c+152,"SocTop rvcpu1 ex5 csr0 wr_mscrstch", false,-1);
        tracep->declQuad(c+153,"SocTop rvcpu1 ex5 csr0 csr_mscrstch", false,-1, 63,0);
        tracep->declBit(c+479,"SocTop rvcpu1 ex_mem6 clk", false,-1);
        tracep->declBit(c+480,"SocTop rvcpu1 ex_mem6 rst", false,-1);
        tracep->declQuad(c+344,"SocTop rvcpu1 ex_mem6 ex_mem_pc_i", false,-1, 63,0);
        tracep->declBus(c+349,"SocTop rvcpu1 ex_mem6 ex_mem_inst_i", false,-1, 31,0);
        tracep->declBus(c+341,"SocTop rvcpu1 ex_mem6 stall_ctrl", false,-1, 4,0);
        tracep->declBus(c+17,"SocTop rvcpu1 ex_mem6 ex_inst_type", false,-1, 7,0);
        tracep->declBit(c+16,"SocTop rvcpu1 ex_mem6 ex_rd_ena", false,-1);
        tracep->declQuad(c+321,"SocTop rvcpu1 ex_mem6 ex_rd_data", false,-1, 63,0);
        tracep->declBus(c+15,"SocTop rvcpu1 ex_mem6 ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+18,"SocTop rvcpu1 ex_mem6 ex_ls_sel", false,-1, 2,0);
        tracep->declQuad(c+19,"SocTop rvcpu1 ex_mem6 ex_ls_addr", false,-1, 63,0);
        tracep->declBus(c+39,"SocTop rvcpu1 ex_mem6 mem_inst_type", false,-1, 7,0);
        tracep->declBit(c+24,"SocTop rvcpu1 ex_mem6 mem_rd_ena", false,-1);
        tracep->declQuad(c+40,"SocTop rvcpu1 ex_mem6 mem_rd_data", false,-1, 63,0);
        tracep->declBus(c+23,"SocTop rvcpu1 ex_mem6 mem_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+45,"SocTop rvcpu1 ex_mem6 ex_mem_pc_o", false,-1, 63,0);
        tracep->declBus(c+48,"SocTop rvcpu1 ex_mem6 ex_mem_inst_o", false,-1, 31,0);
        tracep->declBus(c+42,"SocTop rvcpu1 ex_mem6 mem_ls_sel", false,-1, 2,0);
        tracep->declQuad(c+43,"SocTop rvcpu1 ex_mem6 mem_ls_addr", false,-1, 63,0);
        tracep->declBit(c+480,"SocTop rvcpu1 mem7 rst", false,-1);
        tracep->declBus(c+39,"SocTop rvcpu1 mem7 inst_type_i", false,-1, 7,0);
        tracep->declBit(c+24,"SocTop rvcpu1 mem7 rd_ena_i", false,-1);
        tracep->declQuad(c+40,"SocTop rvcpu1 mem7 rd_data_i", false,-1, 63,0);
        tracep->declBus(c+23,"SocTop rvcpu1 mem7 rd_addr_i", false,-1, 4,0);
        tracep->declQuad(c+45,"SocTop rvcpu1 mem7 mem_pc_i", false,-1, 63,0);
        tracep->declBus(c+48,"SocTop rvcpu1 mem7 mem_inst_i", false,-1, 31,0);
        tracep->declQuad(c+43,"SocTop rvcpu1 mem7 ls_addr_i", false,-1, 63,0);
        tracep->declBus(c+42,"SocTop rvcpu1 mem7 ls_sel_i", false,-1, 2,0);
        tracep->declQuad(c+299,"SocTop rvcpu1 mem7 data_addr_o", false,-1, 63,0);
        tracep->declBus(c+301,"SocTop rvcpu1 mem7 wmask_o", false,-1, 7,0);
        tracep->declQuad(c+309,"SocTop rvcpu1 mem7 data_i", false,-1, 63,0);
        tracep->declQuad(c+302,"SocTop rvcpu1 mem7 data_o", false,-1, 63,0);
        tracep->declBit(c+304,"SocTop rvcpu1 mem7 we", false,-1);
        tracep->declBit(c+305,"SocTop rvcpu1 mem7 re", false,-1);
        tracep->declBit(c+493,"SocTop rvcpu1 mem7 mem_finish", false,-1);
        tracep->declBit(c+24,"SocTop rvcpu1 mem7 rd_ena_o", false,-1);
        tracep->declQuad(c+342,"SocTop rvcpu1 mem7 rd_data_o", false,-1, 63,0);
        tracep->declBus(c+23,"SocTop rvcpu1 mem7 rd_addr_o", false,-1, 4,0);
        tracep->declQuad(c+346,"SocTop rvcpu1 mem7 mem_pc_o", false,-1, 63,0);
        tracep->declBus(c+350,"SocTop rvcpu1 mem7 mem_inst_o", false,-1, 31,0);
        tracep->declBit(c+510,"SocTop rvcpu1 mem7 mem_stall_req", false,-1);
        tracep->declQuad(c+283,"SocTop rvcpu1 mem7 load_data", false,-1, 63,0);
        tracep->declBus(c+155,"SocTop rvcpu1 mem7 byte_sel", false,-1, 2,0);
        tracep->declBus(c+156,"SocTop rvcpu1 mem7 half_byte_sel", false,-1, 1,0);
        tracep->declBit(c+157,"SocTop rvcpu1 mem7 word_sel", false,-1);
        tracep->declBus(c+402,"SocTop rvcpu1 mem7 data_byte", false,-1, 7,0);
        tracep->declBus(c+403,"SocTop rvcpu1 mem7 data_half_byte", false,-1, 15,0);
        tracep->declBus(c+404,"SocTop rvcpu1 mem7 data_word", false,-1, 31,0);
        tracep->declQuad(c+405,"SocTop rvcpu1 mem7 store_data", false,-1, 63,0);
        tracep->declBus(c+407,"SocTop rvcpu1 mem7 store_mask", false,-1, 7,0);
        tracep->declQuad(c+513,"SocTop rvcpu1 mem7 sb_data", false,-1, 63,0);
        tracep->declQuad(c+515,"SocTop rvcpu1 mem7 sh_data", false,-1, 63,0);
        tracep->declQuad(c+517,"SocTop rvcpu1 mem7 sw_data", false,-1, 63,0);
        tracep->declBus(c+519,"SocTop rvcpu1 mem7 sb_mask", false,-1, 7,0);
        tracep->declBus(c+520,"SocTop rvcpu1 mem7 sh_mask", false,-1, 7,0);
        tracep->declBus(c+521,"SocTop rvcpu1 mem7 sw_mask", false,-1, 7,0);
        tracep->declBit(c+479,"SocTop rvcpu1 mem_wb8 clk", false,-1);
        tracep->declBit(c+480,"SocTop rvcpu1 mem_wb8 rst", false,-1);
        tracep->declQuad(c+346,"SocTop rvcpu1 mem_wb8 wb_pc_i", false,-1, 63,0);
        tracep->declBus(c+350,"SocTop rvcpu1 mem_wb8 wb_inst_i", false,-1, 31,0);
        tracep->declBus(c+341,"SocTop rvcpu1 mem_wb8 stall_ctrl", false,-1, 4,0);
        tracep->declQuad(c+342,"SocTop rvcpu1 mem_wb8 mem_rd_data", false,-1, 63,0);
        tracep->declBus(c+23,"SocTop rvcpu1 mem_wb8 mem_rd_addr", false,-1, 4,0);
        tracep->declBit(c+24,"SocTop rvcpu1 mem_wb8 mem_rd_ena", false,-1);
        tracep->declQuad(c+27,"SocTop rvcpu1 mem_wb8 wb_rd_data", false,-1, 63,0);
        tracep->declBus(c+25,"SocTop rvcpu1 mem_wb8 wb_rd_addr", false,-1, 4,0);
        tracep->declBit(c+26,"SocTop rvcpu1 mem_wb8 wb_rd_ena", false,-1);
        tracep->declQuad(c+158,"SocTop rvcpu1 mem_wb8 wb_pc_o", false,-1, 63,0);
        tracep->declBus(c+160,"SocTop rvcpu1 mem_wb8 wb_inst_o", false,-1, 31,0);
        tracep->declQuad(c+161,"SocTop rvcpu1 mem_wb8 pc_data1", false,-1, 63,0);
        tracep->declBit(c+163,"SocTop rvcpu1 mem_wb8 difftest_exyn", false,-1);
        tracep->declBit(c+164,"SocTop rvcpu1 mem_wb8 teap_yn", false,-1);
        tracep->declQuad(c+165,"SocTop rvcpu1 mem_wb8 trap_code", false,-1, 63,0);
        tracep->declBit(c+480,"SocTop rvcpu1 ctrl9 rst", false,-1);
        tracep->declBit(c+320,"SocTop rvcpu1 ctrl9 if_stall_req", false,-1);
        tracep->declBit(c+505,"SocTop rvcpu1 ctrl9 id_stall_req", false,-1);
        tracep->declBit(c+256,"SocTop rvcpu1 ctrl9 ex_stall_req", false,-1);
        tracep->declBit(c+510,"SocTop rvcpu1 ctrl9 mem_stall_req", false,-1);
        tracep->declBus(c+341,"SocTop rvcpu1 ctrl9 stall_ctrl", false,-1, 4,0);
        tracep->declBit(c+479,"SocTop rvcpu1 regfile10 clk", false,-1);
        tracep->declBit(c+480,"SocTop rvcpu1 regfile10 rst", false,-1);
        tracep->declBus(c+25,"SocTop rvcpu1 regfile10 waddr", false,-1, 4,0);
        tracep->declQuad(c+27,"SocTop rvcpu1 regfile10 wdata", false,-1, 63,0);
        tracep->declBit(c+26,"SocTop rvcpu1 regfile10 we", false,-1);
        tracep->declBus(c+323,"SocTop rvcpu1 regfile10 raddr1", false,-1, 4,0);
        tracep->declQuad(c+506,"SocTop rvcpu1 regfile10 rdata1", false,-1, 63,0);
        tracep->declBit(c+324,"SocTop rvcpu1 regfile10 re1", false,-1);
        tracep->declBus(c+325,"SocTop rvcpu1 regfile10 raddr2", false,-1, 4,0);
        tracep->declQuad(c+508,"SocTop rvcpu1 regfile10 rdata2", false,-1, 63,0);
        tracep->declBit(c+326,"SocTop rvcpu1 regfile10 re2", false,-1);
        tracep->declBit(c+502,"SocTop rvcpu1 regfile10 x1_read_ena", false,-1);
        tracep->declQuad(c+500,"SocTop rvcpu1 regfile10 x1_data", false,-1, 63,0);
        tracep->declBus(c+319,"SocTop rvcpu1 regfile10 x1_addr", false,-1, 4,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+167+i*2,"SocTop rvcpu1 regfile10 regs", true,(i+0), 63,0);}}
        tracep->declBus(c+231,"SocTop rvcpu1 regfile10 i", false,-1, 31,0);
        tracep->declBit(c+479,"SocTop i_cache12 clk", false,-1);
        tracep->declBit(c+480,"SocTop i_cache12 rst", false,-1);
        tracep->declQuad(c+450,"SocTop i_cache12 inst_addr", false,-1, 63,0);
        tracep->declBit(c+480,"SocTop i_cache12 inst_ena", false,-1);
        tracep->declBit(c+308,"SocTop i_cache12 inst_ready", false,-1);
        tracep->declBus(c+306,"SocTop i_cache12 inst_data", false,-1, 31,0);
        tracep->declBit(c+252,"SocTop i_cache12 inst_valid", false,-1);
        tracep->declBit(c+307,"SocTop i_cache12 cache_read_ena", false,-1);
        tracep->declQuad(c+450,"SocTop i_cache12 cache_addr", false,-1, 63,0);
        tracep->declBus(c+3,"SocTop i_cache12 cache_or_data", false,-1, 31,0);
        tracep->declBit(c+453,"SocTop i_cache12 cache_in_ok", false,-1);
        tracep->declBit(c+253,"SocTop i_cache12 axi_working_ti", false,-1);
        tracep->declQuad(c+457,"SocTop i_cache12 i_in_teg", false,-1, 54,0);
        tracep->declBus(c+408,"SocTop i_cache12 state_inst", false,-1, 5,0);
        tracep->declBit(c+286,"SocTop i_cache12 inst_hit_ok", false,-1);
        tracep->declBit(c+287,"SocTop i_cache12 write_i_ok", false,-1);
        tracep->declBit(c+522,"SocTop i_cache12 state_sign", false,-1);
        tracep->declBit(c+288,"SocTop i_cache12 inst_in_cache1", false,-1);
        tracep->declBit(c+289,"SocTop i_cache12 inst_in_cache2", false,-1);
        tracep->declBit(c+290,"SocTop i_cache12 inst_write_cache", false,-1);
        tracep->declBit(c+459,"SocTop i_cache12 inst_chose1", false,-1);
        tracep->declBit(c+460,"SocTop i_cache12 inst_chose2", false,-1);
        tracep->declBus(c+461,"SocTop i_cache12 i_cache_addr1", false,-1, 5,0);
        tracep->declQuad(c+462,"SocTop i_cache12 i_cache_tag1", false,-1, 55,0);
        tracep->declBit(c+409,"SocTop i_cache12 i_tag_ena1", false,-1);
        tracep->declQuad(c+464,"SocTop i_cache12 i_tag_data1", false,-1, 54,0);
        tracep->declBit(c+466,"SocTop i_cache12 i_tag_user1", false,-1);
        tracep->declBus(c+461,"SocTop i_cache12 i_cache_addr2", false,-1, 5,0);
        tracep->declQuad(c+462,"SocTop i_cache12 i_cache_tag2", false,-1, 55,0);
        tracep->declBit(c+410,"SocTop i_cache12 i_tag_ena2", false,-1);
        tracep->declQuad(c+467,"SocTop i_cache12 i_tag_data2", false,-1, 54,0);
        tracep->declBit(c+469,"SocTop i_cache12 i_tag_user2", false,-1);
        tracep->declBus(c+461,"SocTop i_cache12 i_addrdata1", false,-1, 5,0);
        tracep->declBus(c+523,"SocTop i_cache12 i_in_data1", false,-1, 31,0);
        tracep->declBit(c+527,"SocTop i_cache12 i_data_ena1", false,-1);
        tracep->declBus(c+232,"SocTop i_cache12 i_out_data1", false,-1, 31,0);
        tracep->declBus(c+461,"SocTop i_cache12 i_addrdata2", false,-1, 5,0);
        tracep->declBus(c+524,"SocTop i_cache12 i_in_data2", false,-1, 31,0);
        tracep->declBit(c+527,"SocTop i_cache12 i_data_ena2", false,-1);
        tracep->declBus(c+233,"SocTop i_cache12 i_out_data2", false,-1, 31,0);
        tracep->declBus(c+461,"SocTop i_cache12 i_count_addr", false,-1, 5,0);
        tracep->declBus(c+234,"SocTop i_cache12 i", false,-1, 31,0);
        tracep->declBit(c+479,"SocTop i_cache12 u_tag01 clk", false,-1);
        tracep->declBus(c+461,"SocTop i_cache12 u_tag01 addr_i", false,-1, 5,0);
        tracep->declQuad(c+462,"SocTop i_cache12 u_tag01 data_i", false,-1, 55,0);
        tracep->declBit(c+409,"SocTop i_cache12 u_tag01 write_ena", false,-1);
        tracep->declQuad(c+464,"SocTop i_cache12 u_tag01 tag_data", false,-1, 54,0);
        tracep->declBit(c+466,"SocTop i_cache12 u_tag01 tag_valid", false,-1);
        tracep->declQuad(c+464,"SocTop i_cache12 u_tag01 out_data", false,-1, 54,0);
        tracep->declBit(c+466,"SocTop i_cache12 u_tag01 out_vaild", false,-1);
        tracep->declBit(c+479,"SocTop i_cache12 u_tag02 clk", false,-1);
        tracep->declBus(c+461,"SocTop i_cache12 u_tag02 addr_i", false,-1, 5,0);
        tracep->declQuad(c+462,"SocTop i_cache12 u_tag02 data_i", false,-1, 55,0);
        tracep->declBit(c+410,"SocTop i_cache12 u_tag02 write_ena", false,-1);
        tracep->declQuad(c+467,"SocTop i_cache12 u_tag02 tag_data", false,-1, 54,0);
        tracep->declBit(c+469,"SocTop i_cache12 u_tag02 tag_valid", false,-1);
        tracep->declQuad(c+467,"SocTop i_cache12 u_tag02 out_data", false,-1, 54,0);
        tracep->declBit(c+469,"SocTop i_cache12 u_tag02 out_vaild", false,-1);
        tracep->declBit(c+479,"SocTop i_cache12 u_data01 clk", false,-1);
        tracep->declBus(c+461,"SocTop i_cache12 u_data01 addr_i", false,-1, 5,0);
        tracep->declBus(c+523,"SocTop i_cache12 u_data01 data_i", false,-1, 31,0);
        tracep->declBit(c+527,"SocTop i_cache12 u_data01 write_ena", false,-1);
        tracep->declBus(c+232,"SocTop i_cache12 u_data01 data_o", false,-1, 31,0);
        tracep->declBus(c+232,"SocTop i_cache12 u_data01 out_data", false,-1, 31,0);
        tracep->declBit(c+479,"SocTop i_cache12 u_data02 clk", false,-1);
        tracep->declBus(c+461,"SocTop i_cache12 u_data02 addr_i", false,-1, 5,0);
        tracep->declBus(c+524,"SocTop i_cache12 u_data02 data_i", false,-1, 31,0);
        tracep->declBit(c+527,"SocTop i_cache12 u_data02 write_ena", false,-1);
        tracep->declBus(c+233,"SocTop i_cache12 u_data02 data_o", false,-1, 31,0);
        tracep->declBus(c+233,"SocTop i_cache12 u_data02 out_data", false,-1, 31,0);
        tracep->declBit(c+479,"SocTop d_cache13 clk", false,-1);
        tracep->declBit(c+480,"SocTop d_cache13 rst", false,-1);
        tracep->declQuad(c+299,"SocTop d_cache13 mem_addr_i", false,-1, 63,0);
        tracep->declQuad(c+302,"SocTop d_cache13 mem_data_i", false,-1, 63,0);
        tracep->declBus(c+301,"SocTop d_cache13 mem_mask_i", false,-1, 7,0);
        tracep->declBit(c+305,"SocTop d_cache13 mem_data_read_ena", false,-1);
        tracep->declBit(c+304,"SocTop d_cache13 mem_data_writ_ena", false,-1);
        tracep->declQuad(c+309,"SocTop d_cache13 mem_data_out_cpu", false,-1, 63,0);
        tracep->declBit(c+493,"SocTop d_cache13 mem_data_finish", false,-1);
        tracep->declQuad(c+1,"SocTop d_cache13 in_dcache_data", false,-1, 63,0);
        tracep->declBit(c+452,"SocTop d_cache13 in_dcache_ok", false,-1);
        tracep->declQuad(c+299,"SocTop d_cache13 out_dcache_addr", false,-1, 63,0);
        tracep->declQuad(c+494,"SocTop d_cache13 out_dcache_data", false,-1, 63,0);
        tracep->declBit(c+311,"SocTop d_cache13 outr_dcache_ena", false,-1);
        tracep->declBit(c+441,"SocTop d_cache13 outw_dcache_ena", false,-1);
        tracep->declBus(c+411,"SocTop d_cache13 count_addr", false,-1, 5,0);
        tracep->declBit(c+412,"SocTop d_cache13 wirte_chose1", false,-1);
        tracep->declBit(c+413,"SocTop d_cache13 wirte_chose2", false,-1);
        tracep->declBus(c+414,"SocTop d_cache13 state_store", false,-1, 5,0);
        tracep->declBit(c+525,"SocTop d_cache13 store_ok", false,-1);
        tracep->declBit(c+291,"SocTop d_cache13 write_ok", false,-1);
        tracep->declBit(c+470,"SocTop d_cache13 wbck_ok", false,-1);
        tracep->declQuad(c+415,"SocTop d_cache13 in_teg", false,-1, 54,0);
        tracep->declBit(c+292,"SocTop d_cache13 write_incache", false,-1);
        tracep->declBit(c+293,"SocTop d_cache13 w_incache_ena1", false,-1);
        tracep->declBit(c+294,"SocTop d_cache13 w_incache_ena2", false,-1);
        tracep->declBus(c+417,"SocTop d_cache13 state_load", false,-1, 5,0);
        tracep->declBit(c+526,"SocTop d_cache13 load_ok", false,-1);
        tracep->declBit(c+471,"SocTop d_cache13 load_bc_ok", false,-1);
        tracep->declBit(c+295,"SocTop d_cache13 write_l_ok", false,-1);
        tracep->declBus(c+418,"SocTop d_cache13 count_addr2", false,-1, 5,0);
        tracep->declBit(c+446,"SocTop d_cache13 wbck_load_chose1", false,-1);
        tracep->declBit(c+296,"SocTop d_cache13 load_in_cache1", false,-1);
        tracep->declBit(c+297,"SocTop d_cache13 load_in_cache2", false,-1);
        tracep->declBit(c+298,"SocTop d_cache13 read_cache", false,-1);
        tracep->declBus(c+418,"SocTop d_cache13 count_a", false,-1, 5,0);
        tracep->declBus(c+235,"SocTop d_cache13 i", false,-1, 31,0);
        tracep->declBus(c+418,"SocTop d_cache13 dirty_addr", false,-1, 5,0);
        tracep->declBus(c+418,"SocTop d_cache13 addrtag1", false,-1, 5,0);
        tracep->declQuad(c+419,"SocTop d_cache13 datatag1", false,-1, 55,0);
        tracep->declBit(c+421,"SocTop d_cache13 tag_ena1", false,-1);
        tracep->declQuad(c+472,"SocTop d_cache13 tag_data1", false,-1, 54,0);
        tracep->declBit(c+474,"SocTop d_cache13 tag_user1", false,-1);
        tracep->declBus(c+418,"SocTop d_cache13 addrtag2", false,-1, 5,0);
        tracep->declQuad(c+419,"SocTop d_cache13 datatag2", false,-1, 55,0);
        tracep->declBit(c+422,"SocTop d_cache13 tag_ena2", false,-1);
        tracep->declQuad(c+475,"SocTop d_cache13 tag_data2", false,-1, 54,0);
        tracep->declBit(c+477,"SocTop d_cache13 tag_user2", false,-1);
        tracep->declBus(c+423,"SocTop d_cache13 addrdata1", false,-1, 5,0);
        tracep->declQuad(c+424,"SocTop d_cache13 in_data1", false,-1, 63,0);
        tracep->declBus(c+426,"SocTop d_cache13 data_ena1", false,-1, 7,0);
        tracep->declQuad(c+236,"SocTop d_cache13 out_data1", false,-1, 63,0);
        tracep->declBus(c+423,"SocTop d_cache13 addrdata2", false,-1, 5,0);
        tracep->declQuad(c+427,"SocTop d_cache13 in_data2", false,-1, 63,0);
        tracep->declBus(c+429,"SocTop d_cache13 data_ena2", false,-1, 7,0);
        tracep->declQuad(c+238,"SocTop d_cache13 out_data2", false,-1, 63,0);
        tracep->declBit(c+479,"SocTop d_cache13 u_tag0 clk", false,-1);
        tracep->declBus(c+418,"SocTop d_cache13 u_tag0 addr_i", false,-1, 5,0);
        tracep->declQuad(c+419,"SocTop d_cache13 u_tag0 data_i", false,-1, 55,0);
        tracep->declBit(c+421,"SocTop d_cache13 u_tag0 write_ena", false,-1);
        tracep->declQuad(c+472,"SocTop d_cache13 u_tag0 tag_data", false,-1, 54,0);
        tracep->declBit(c+474,"SocTop d_cache13 u_tag0 tag_valid", false,-1);
        tracep->declQuad(c+472,"SocTop d_cache13 u_tag0 out_data", false,-1, 54,0);
        tracep->declBit(c+474,"SocTop d_cache13 u_tag0 out_vaild", false,-1);
        tracep->declBit(c+479,"SocTop d_cache13 u_tag1 clk", false,-1);
        tracep->declBus(c+418,"SocTop d_cache13 u_tag1 addr_i", false,-1, 5,0);
        tracep->declQuad(c+419,"SocTop d_cache13 u_tag1 data_i", false,-1, 55,0);
        tracep->declBit(c+422,"SocTop d_cache13 u_tag1 write_ena", false,-1);
        tracep->declQuad(c+475,"SocTop d_cache13 u_tag1 tag_data", false,-1, 54,0);
        tracep->declBit(c+477,"SocTop d_cache13 u_tag1 tag_valid", false,-1);
        tracep->declQuad(c+475,"SocTop d_cache13 u_tag1 out_data", false,-1, 54,0);
        tracep->declBit(c+477,"SocTop d_cache13 u_tag1 out_vaild", false,-1);
        tracep->declBit(c+479,"SocTop d_cache13 u_data0 clk", false,-1);
        tracep->declBus(c+423,"SocTop d_cache13 u_data0 addr_i", false,-1, 5,0);
        tracep->declQuad(c+424,"SocTop d_cache13 u_data0 data_i", false,-1, 63,0);
        tracep->declBus(c+426,"SocTop d_cache13 u_data0 write_ena", false,-1, 7,0);
        tracep->declQuad(c+236,"SocTop d_cache13 u_data0 data_o", false,-1, 63,0);
        tracep->declQuad(c+236,"SocTop d_cache13 u_data0 out_data", false,-1, 63,0);
        tracep->declBit(c+479,"SocTop d_cache13 u_data1 clk", false,-1);
        tracep->declBus(c+423,"SocTop d_cache13 u_data1 addr_i", false,-1, 5,0);
        tracep->declQuad(c+427,"SocTop d_cache13 u_data1 data_i", false,-1, 63,0);
        tracep->declBus(c+429,"SocTop d_cache13 u_data1 write_ena", false,-1, 7,0);
        tracep->declQuad(c+238,"SocTop d_cache13 u_data1 data_o", false,-1, 63,0);
        tracep->declQuad(c+238,"SocTop d_cache13 u_data1 out_data", false,-1, 63,0);
        tracep->declBit(c+479,"SocTop arbitrate4 clk", false,-1);
        tracep->declBit(c+480,"SocTop arbitrate4 rst", false,-1);
        tracep->declQuad(c+299,"SocTop arbitrate4 d_cache_addr", false,-1, 63,0);
        tracep->declQuad(c+494,"SocTop arbitrate4 d_cache_data", false,-1, 63,0);
        tracep->declBit(c+311,"SocTop arbitrate4 d_cache_read_ena", false,-1);
        tracep->declBit(c+441,"SocTop arbitrate4 d_cache_write_ena", false,-1);
        tracep->declBus(c+536,"SocTop arbitrate4 d_cache_mask", false,-1, 7,0);
        tracep->declQuad(c+1,"SocTop arbitrate4 d_cache_data_o", false,-1, 63,0);
        tracep->declBit(c+452,"SocTop arbitrate4 d_cache_ok", false,-1);
        tracep->declQuad(c+450,"SocTop arbitrate4 i_cache_addr", false,-1, 63,0);
        tracep->declBit(c+307,"SocTop arbitrate4 i_cache_ena", false,-1);
        tracep->declBus(c+3,"SocTop arbitrate4 i_cache_data_o", false,-1, 31,0);
        tracep->declBit(c+453,"SocTop arbitrate4 i_cache_ok", false,-1);
        tracep->declBit(c+253,"SocTop arbitrate4 axi_working_ti", false,-1);
        tracep->declBus(c+528,"SocTop arbitrate4 axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+254,"SocTop arbitrate4 axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+529,"SocTop arbitrate4 axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+530,"SocTop arbitrate4 axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+531,"SocTop arbitrate4 axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+532,"SocTop arbitrate4 axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+533,"SocTop arbitrate4 axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+528,"SocTop arbitrate4 axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+313,"SocTop arbitrate4 axi_aw_valid", false,-1);
        tracep->declBit(c+312,"SocTop arbitrate4 axi_aw_ready", false,-1);
        tracep->declQuad(c+496,"SocTop arbitrate4 axi_w_data", false,-1, 63,0);
        tracep->declBus(c+4,"SocTop arbitrate4 axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+534,"SocTop arbitrate4 axi_w_last", false,-1);
        tracep->declBit(c+5,"SocTop arbitrate4 axi_w_valid", false,-1);
        tracep->declBit(c+312,"SocTop arbitrate4 axi_w_ready", false,-1);
        tracep->declBus(c+528,"SocTop arbitrate4 axi_b_id", false,-1, 3,0);
        tracep->declBus(c+535,"SocTop arbitrate4 axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+6,"SocTop arbitrate4 axi_b_valid", false,-1);
        tracep->declBit(c+534,"SocTop arbitrate4 axi_b_ready", false,-1);
        tracep->declBus(c+314,"SocTop arbitrate4 axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+442,"SocTop arbitrate4 axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+529,"SocTop arbitrate4 axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+530,"SocTop arbitrate4 axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+531,"SocTop arbitrate4 axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+532,"SocTop arbitrate4 axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+533,"SocTop arbitrate4 axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+528,"SocTop arbitrate4 axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+315,"SocTop arbitrate4 axi_ar_valid", false,-1);
        tracep->declBit(c+454,"SocTop arbitrate4 axi_ar_ready", false,-1);
        tracep->declBus(c+316,"SocTop arbitrate4 axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+317,"SocTop arbitrate4 axi_r_data", false,-1, 63,0);
        tracep->declBus(c+535,"SocTop arbitrate4 axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+455,"SocTop arbitrate4 axi_r_last", false,-1);
        tracep->declBit(c+456,"SocTop arbitrate4 axi_r_valid", false,-1);
        tracep->declBit(c+534,"SocTop arbitrate4 axi_r_ready", false,-1);
        tracep->declBit(c+430,"SocTop arbitrate4 aw_shankhand", false,-1);
        tracep->declBit(c+285,"SocTop arbitrate4 w_shankhand", false,-1);
        tracep->declBit(c+240,"SocTop arbitrate4 b_shankhand", false,-1);
        tracep->declBit(c+240,"SocTop arbitrate4 b_success", false,-1);
        tracep->declBus(c+241,"SocTop arbitrate4 transfor_state", false,-1, 1,0);
        tracep->declBus(c+431,"SocTop arbitrate4 transfor_state_nex", false,-1, 1,0);
        tracep->declBit(c+456,"SocTop arbitrate4 r_shankhand", false,-1);
        tracep->declBit(c+447,"SocTop arbitrate4 d_cache_ar_shankhand", false,-1);
        tracep->declBit(c+448,"SocTop arbitrate4 i_cache_ar_shankhand", false,-1);
        tracep->declBit(c+432,"SocTop arbitrate4 d_cache_r_shankhand", false,-1);
        tracep->declBit(c+433,"SocTop arbitrate4 i_cache_r_shankhand", false,-1);
        tracep->declBit(c+434,"SocTop arbitrate4 arb_sign", false,-1);
        tracep->declBit(c+435,"SocTop arbitrate4 i_cache_valid", false,-1);
        tracep->declBit(c+436,"SocTop arbitrate4 d_cache_valid", false,-1);
        tracep->declBus(c+242,"SocTop arbitrate4 i_cache_state", false,-1, 1,0);
        tracep->declBus(c+437,"SocTop arbitrate4 i_cache_state_nxt", false,-1, 1,0);
        tracep->declBus(c+243,"SocTop arbitrate4 d_cache_state", false,-1, 1,0);
        tracep->declBus(c+438,"SocTop arbitrate4 d_cache_state_nxt", false,-1, 1,0);
        tracep->declBit(c+453,"SocTop arbitrate4 i_cache_okreg", false,-1);
        tracep->declBit(c+244,"SocTop arbitrate4 d_cache_okreg", false,-1);
        tracep->declBus(c+3,"SocTop arbitrate4 i_cache_data_oupt", false,-1, 31,0);
        tracep->declQuad(c+1,"SocTop arbitrate4 d_cache_data_outp", false,-1, 63,0);
        tracep->declBit(c+479,"SocTop axi_mnq4 clk", false,-1);
        tracep->declBit(c+480,"SocTop axi_mnq4 rst", false,-1);
        tracep->declBus(c+528,"SocTop axi_mnq4 s_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+254,"SocTop axi_mnq4 s_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+529,"SocTop axi_mnq4 s_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+530,"SocTop axi_mnq4 s_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+531,"SocTop axi_mnq4 s_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+532,"SocTop axi_mnq4 s_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+533,"SocTop axi_mnq4 s_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+528,"SocTop axi_mnq4 s_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+313,"SocTop axi_mnq4 s_axi_aw_valid", false,-1);
        tracep->declBit(c+312,"SocTop axi_mnq4 s_axi_aw_ready", false,-1);
        tracep->declQuad(c+496,"SocTop axi_mnq4 s_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+4,"SocTop axi_mnq4 s_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+534,"SocTop axi_mnq4 s_axi_w_last", false,-1);
        tracep->declBit(c+5,"SocTop axi_mnq4 s_axi_w_valid", false,-1);
        tracep->declBit(c+312,"SocTop axi_mnq4 s_axi_w_ready", false,-1);
        tracep->declBus(c+528,"SocTop axi_mnq4 s_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+535,"SocTop axi_mnq4 s_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+6,"SocTop axi_mnq4 s_axi_b_valid", false,-1);
        tracep->declBit(c+534,"SocTop axi_mnq4 s_axi_b_ready", false,-1);
        tracep->declBus(c+314,"SocTop axi_mnq4 s_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+442,"SocTop axi_mnq4 s_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+529,"SocTop axi_mnq4 s_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+530,"SocTop axi_mnq4 s_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+531,"SocTop axi_mnq4 s_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+532,"SocTop axi_mnq4 s_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+533,"SocTop axi_mnq4 s_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+528,"SocTop axi_mnq4 s_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+315,"SocTop axi_mnq4 s_axi_ar_valid", false,-1);
        tracep->declBit(c+454,"SocTop axi_mnq4 s_axi_ar_ready", false,-1);
        tracep->declBus(c+316,"SocTop axi_mnq4 s_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+317,"SocTop axi_mnq4 s_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+535,"SocTop axi_mnq4 s_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+455,"SocTop axi_mnq4 s_axi_r_last", false,-1);
        tracep->declBit(c+456,"SocTop axi_mnq4 s_axi_r_valid", false,-1);
        tracep->declBit(c+534,"SocTop axi_mnq4 s_axi_r_ready", false,-1);
        tracep->declBit(c+444,"SocTop axi_mnq4 read_ram_ena", false,-1);
        tracep->declBit(c+445,"SocTop axi_mnq4 read_inst_ena", false,-1);
        tracep->declQuad(c+498,"SocTop axi_mnq4 addr_oup", false,-1, 63,0);
        tracep->declBus(c+485,"SocTop axi_mnq4 inst_data_in", false,-1, 31,0);
        tracep->declQuad(c+486,"SocTop axi_mnq4 ram_data_in", false,-1, 63,0);
        tracep->declBit(c+6,"SocTop axi_mnq4 write_ram_ena", false,-1);
        tracep->declQuad(c+9,"SocTop axi_mnq4 write_ram_data", false,-1, 63,0);
        tracep->declQuad(c+7,"SocTop axi_mnq4 write_ram_addr", false,-1, 63,0);
        tracep->declBit(c+430,"SocTop axi_mnq4 aw_shankhand", false,-1);
        tracep->declBit(c+285,"SocTop axi_mnq4 w_shankhand", false,-1);
        tracep->declBit(c+240,"SocTop axi_mnq4 b_shankhand", false,-1);
        tracep->declBus(c+245,"SocTop axi_mnq4 s_write_state", false,-1, 1,0);
        tracep->declBus(c+439,"SocTop axi_mnq4 s_write_state_nxt", false,-1, 1,0);
        tracep->declBit(c+449,"SocTop axi_mnq4 ar_shankhand", false,-1);
        tracep->declBit(c+456,"SocTop axi_mnq4 r_shankhand", false,-1);
        tracep->declBus(c+478,"SocTop axi_mnq4 s_read_state", false,-1, 1,0);
        tracep->declBus(c+440,"SocTop axi_mnq4 s_read_state_nxt", false,-1, 1,0);
        tracep->declQuad(c+246,"SocTop axi_mnq4 read_addr_reg", false,-1, 63,0);
        tracep->declQuad(c+248,"SocTop axi_mnq4 write_data_reg", false,-1, 63,0);
        tracep->declQuad(c+250,"SocTop axi_mnq4 write_addr_reg", false,-1, 63,0);
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
        tracep->fullQData(oldp+1,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_data_outp),64);
        tracep->fullIData(oldp+3,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_data_oupt),32);
        tracep->fullCData(oldp+4,((((0U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state)) 
                                    | (1U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state)))
                                    ? 0xffU : 0U)),8);
        tracep->fullBit(oldp+5,(vlSelf->SocTop__DOT__t_axi_w_valid));
        tracep->fullBit(oldp+6,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))));
        tracep->fullQData(oldp+7,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))
                                    ? vlSelf->SocTop__DOT__axi_mnq4__DOT__write_addr_reg
                                    : 0ULL)),64);
        tracep->fullQData(oldp+9,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))
                                    ? vlSelf->SocTop__DOT__axi_mnq4__DOT__write_data_reg
                                    : 0ULL)),64);
        tracep->fullQData(oldp+11,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc),64);
        tracep->fullIData(oldp+13,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst),32);
        tracep->fullBit(oldp+14,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena));
        tracep->fullCData(oldp+15,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr),5);
        tracep->fullBit(oldp+16,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena));
        tracep->fullCData(oldp+17,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type),8);
        tracep->fullCData(oldp+18,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_sel),3);
        tracep->fullQData(oldp+19,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_addr),64);
        tracep->fullQData(oldp+21,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena) 
                                     | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena))
                                     ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data
                                     : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch)
                                         ? (4ULL + vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc)
                                         : 0ULL))),64);
        tracep->fullCData(oldp+23,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr),5);
        tracep->fullBit(oldp+24,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena));
        tracep->fullCData(oldp+25,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr),5);
        tracep->fullBit(oldp+26,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena));
        tracep->fullQData(oldp+27,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data),64);
        tracep->fullQData(oldp+29,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc),64);
        tracep->fullCData(oldp+31,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type),8);
        tracep->fullCData(oldp+32,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode),8);
        tracep->fullQData(oldp+33,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1),64);
        tracep->fullQData(oldp+35,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2),64);
        tracep->fullBit(oldp+37,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdena));
        tracep->fullSData(oldp+38,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset),12);
        tracep->fullCData(oldp+39,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type),8);
        tracep->fullQData(oldp+40,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data),64);
        tracep->fullCData(oldp+42,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel),3);
        tracep->fullQData(oldp+43,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr),64);
        tracep->fullQData(oldp+45,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_pc),64);
        tracep->fullIData(oldp+47,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_ex_inst),32);
        tracep->fullIData(oldp+48,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_inst),32);
        tracep->fullCData(oldp+49,((0x7fU & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)),7);
        tracep->fullCData(oldp+50,((0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                             >> 7U))),5);
        tracep->fullCData(oldp+51,((7U & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                          >> 0xcU))),3);
        tracep->fullSData(oldp+52,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                    >> 0x14U)),12);
        tracep->fullCData(oldp+53,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                    >> 0x19U)),7);
        tracep->fullCData(oldp+54,((0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                             >> 0x14U))),5);
        tracep->fullIData(oldp+55,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                    >> 0xcU)),20);
        tracep->fullSData(oldp+56,(((0xfe0U & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                               >> 0x14U)) 
                                    | (0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                >> 7U)))),12);
        tracep->fullQData(oldp+57,((1ULL + (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))),64);
        tracep->fullQData(oldp+59,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sub_op2),64);
        tracep->fullQData(oldp+61,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2),64);
        tracep->fullQData(oldp+63,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_addw_op2),64);
        tracep->fullBit(oldp+65,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_ls_op2));
        tracep->fullQData(oldp+66,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__shift_res),64);
        tracep->fullIData(oldp+68,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sllw_op2),32);
        tracep->fullQData(oldp+69,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sllw_res),64);
        tracep->fullIData(oldp+71,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_srlw_op2),32);
        tracep->fullQData(oldp+72,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__srlw_res),64);
        tracep->fullIData(oldp+74,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sraw_op2),32);
        tracep->fullQData(oldp+75,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sraw_res),64);
        tracep->fullIData(oldp+77,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2),32);
        tracep->fullQData(oldp+78,((((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2)))),64);
        tracep->fullQData(oldp+80,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__upper_imm),64);
        tracep->fullBit(oldp+82,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch));
        tracep->fullBit(oldp+83,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena));
        tracep->fullSData(oldp+84,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx),12);
        tracep->fullQData(oldp+85,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data),64);
        tracep->fullBit(oldp+87,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena));
        tracep->fullBit(oldp+88,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena));
        tracep->fullBit(oldp+89,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena));
        tracep->fullBit(oldp+90,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en));
        tracep->fullBit(oldp+91,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en));
        tracep->fullQData(oldp+92,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data),64);
        tracep->fullQData(oldp+94,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value),64);
        tracep->fullQData(oldp+96,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
                                    | vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1)),64);
        tracep->fullQData(oldp+98,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
                                    & (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1))),64);
        tracep->fullBit(oldp+100,((0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+101,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en) 
                                   & (0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)))));
        tracep->fullBit(oldp+102,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en) 
                                   & (0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)))));
        tracep->fullQData(oldp+103,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcycle),64);
        tracep->fullBit(oldp+105,((0x300U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+106,(((0x300U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+107,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus));
        tracep->fullBit(oldp+108,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_ena));
        tracep->fullBit(oldp+109,((1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                          | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                          ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)
                                          : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena) 
                                             | ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                 ? (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                            >> 7U))
                                                 : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)))))));
        tracep->fullBit(oldp+110,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie));
        tracep->fullBit(oldp+111,((1U & ((~ ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                             | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))) 
                                         & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)
                                             ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)
                                             : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                 ? (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                            >> 3U))
                                                 : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)))))));
        tracep->fullBit(oldp+112,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie));
        tracep->fullCData(oldp+113,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                      ? 3U : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                      ? (IData)(
                                                                (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                                 >> 0xbU))
                                                      : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp)))))),2);
        tracep->fullCData(oldp+114,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp),2);
        tracep->fullCData(oldp+115,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs),2);
        tracep->fullBit(oldp+116,((3U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs))));
        tracep->fullQData(oldp+117,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus),64);
        tracep->fullBit(oldp+119,((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+120,(((((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en)) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
        tracep->fullBit(oldp+121,(((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
        tracep->fullQData(oldp+122,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base),62);
        tracep->fullQData(oldp+124,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base 
                                     << 2U)),64);
        tracep->fullBit(oldp+126,((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+127,((((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena))));
        tracep->fullBit(oldp+128,(((((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en)) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
        tracep->fullQData(oldp+129,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mepc),64);
        tracep->fullBit(oldp+131,((0x342U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+132,(((0x342U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+133,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause));
        tracep->fullBit(oldp+134,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
        tracep->fullQData(oldp+135,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                      ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value
                                      : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause)
                                          ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data
                                          : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause))),64);
        tracep->fullQData(oldp+137,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause),64);
        tracep->fullBit(oldp+139,((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+140,(((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+141,(((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
        tracep->fullBit(oldp+142,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie));
        tracep->fullQData(oldp+143,(((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie)) 
                                     << 7U)),64);
        tracep->fullBit(oldp+145,((0x344U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+146,(((0x344U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+147,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip));
        tracep->fullQData(oldp+148,((QData)((IData)(
                                                    ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip) 
                                                     << 7U)))),64);
        tracep->fullBit(oldp+150,((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+151,(((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+152,(((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
        tracep->fullQData(oldp+153,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mscrstch),64);
        tracep->fullCData(oldp+155,((7U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))),3);
        tracep->fullCData(oldp+156,((3U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                   >> 1U)))),2);
        tracep->fullBit(oldp+157,((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                 >> 2U)))));
        tracep->fullQData(oldp+158,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_pc_o),64);
        tracep->fullIData(oldp+160,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o),32);
        tracep->fullQData(oldp+161,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__pc_data1),64);
        tracep->fullBit(oldp+163,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_exyn));
        tracep->fullBit(oldp+164,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__teap_yn));
        tracep->fullQData(oldp+165,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__trap_code),64);
        tracep->fullQData(oldp+167,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[0]),64);
        tracep->fullQData(oldp+169,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[1]),64);
        tracep->fullQData(oldp+171,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[2]),64);
        tracep->fullQData(oldp+173,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[3]),64);
        tracep->fullQData(oldp+175,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[4]),64);
        tracep->fullQData(oldp+177,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[5]),64);
        tracep->fullQData(oldp+179,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[6]),64);
        tracep->fullQData(oldp+181,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[7]),64);
        tracep->fullQData(oldp+183,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[8]),64);
        tracep->fullQData(oldp+185,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[9]),64);
        tracep->fullQData(oldp+187,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[10]),64);
        tracep->fullQData(oldp+189,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[11]),64);
        tracep->fullQData(oldp+191,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[12]),64);
        tracep->fullQData(oldp+193,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[13]),64);
        tracep->fullQData(oldp+195,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[14]),64);
        tracep->fullQData(oldp+197,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[15]),64);
        tracep->fullQData(oldp+199,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[16]),64);
        tracep->fullQData(oldp+201,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[17]),64);
        tracep->fullQData(oldp+203,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[18]),64);
        tracep->fullQData(oldp+205,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[19]),64);
        tracep->fullQData(oldp+207,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[20]),64);
        tracep->fullQData(oldp+209,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[21]),64);
        tracep->fullQData(oldp+211,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[22]),64);
        tracep->fullQData(oldp+213,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[23]),64);
        tracep->fullQData(oldp+215,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[24]),64);
        tracep->fullQData(oldp+217,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[25]),64);
        tracep->fullQData(oldp+219,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[26]),64);
        tracep->fullQData(oldp+221,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[27]),64);
        tracep->fullQData(oldp+223,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[28]),64);
        tracep->fullQData(oldp+225,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[29]),64);
        tracep->fullQData(oldp+227,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[30]),64);
        tracep->fullQData(oldp+229,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[31]),64);
        tracep->fullIData(oldp+231,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__i),32);
        tracep->fullIData(oldp+232,(vlSelf->SocTop__DOT__i_cache12__DOT__u_data01__DOT__out_data),32);
        tracep->fullIData(oldp+233,(vlSelf->SocTop__DOT__i_cache12__DOT__u_data02__DOT__out_data),32);
        tracep->fullIData(oldp+234,(vlSelf->SocTop__DOT__i_cache12__DOT__i),32);
        tracep->fullIData(oldp+235,(vlSelf->SocTop__DOT__d_cache13__DOT__i),32);
        tracep->fullQData(oldp+236,(vlSelf->SocTop__DOT__d_cache13__DOT__u_data0__DOT__out_data),64);
        tracep->fullQData(oldp+238,(vlSelf->SocTop__DOT__d_cache13__DOT__u_data1__DOT__out_data),64);
        tracep->fullBit(oldp+240,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))));
        tracep->fullCData(oldp+241,(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state),2);
        tracep->fullCData(oldp+242,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_state),2);
        tracep->fullCData(oldp+243,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_state),2);
        tracep->fullBit(oldp+244,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_okreg));
        tracep->fullCData(oldp+245,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state),2);
        tracep->fullQData(oldp+246,(vlSelf->SocTop__DOT__axi_mnq4__DOT__read_addr_reg),64);
        tracep->fullQData(oldp+248,(vlSelf->SocTop__DOT__axi_mnq4__DOT__write_data_reg),64);
        tracep->fullQData(oldp+250,(vlSelf->SocTop__DOT__axi_mnq4__DOT__write_addr_reg),64);
        tracep->fullBit(oldp+252,((1U & (~ (((0U != (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_state)) 
                                             | (0U 
                                                != (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_state))) 
                                            | ((IData)(vlSelf->SocTop__DOT__i_cache_read_ena) 
                                               & (IData)(vlSelf->SocTop__DOT__d_cache_read_ena)))))));
        tracep->fullBit(oldp+253,((((0U != (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_state)) 
                                    | (0U != (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_state))) 
                                   | ((IData)(vlSelf->SocTop__DOT__i_cache_read_ena) 
                                      & (IData)(vlSelf->SocTop__DOT__d_cache_read_ena)))));
        tracep->fullQData(oldp+254,((((0U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state)) 
                                      | (1U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state)))
                                      ? vlSelf->SocTop__DOT__rvcpu_data_addr
                                      : 0ULL)),64);
        tracep->fullBit(oldp+256,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__if_stall_req))));
        tracep->fullQData(oldp+257,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr)
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
        tracep->fullBit(oldp+259,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+260,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x2000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+261,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x3000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+262,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x4000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+263,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+264,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+265,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x1000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+266,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x5000U 
                                                    == 
                                                    (0x40007000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+267,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+268,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x1000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+269,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x4000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+270,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x5000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+271,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+272,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+273,((1U & (IData)(((0x80U 
                                                  == 
                                                  (0x80U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+274,((1U & (IData)(((0x80U 
                                                  == 
                                                  (0x80U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+275,(((IData)(((0x80U 
                                             == (0x80U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                            & (0U == 
                                               (0x7000U 
                                                & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                   & (0U == (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                             >> 0x14U)))));
        tracep->fullBit(oldp+276,(((IData)(((0x80U 
                                             == (0x80U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                            & (0U == 
                                               (0x7000U 
                                                & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                   & (0x18U == (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+277,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr) 
                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena))));
        tracep->fullBit(oldp+278,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr) 
                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena))));
        tracep->fullBit(oldp+279,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))));
        tracep->fullQData(oldp+280,(((((- (QData)((IData)(
                                                          (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                           >> 0x1fU)))) 
                                       << 0xcU) | (QData)((IData)(
                                                                  (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                   >> 0x14U)))) 
                                     + vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op)),64);
        tracep->fullBit(oldp+282,((1U & (((~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1)) 
                                          & (~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1))) 
                                         & (~ (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                                == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                               & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena)))))));
        tracep->fullQData(oldp+283,(((2U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type))
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
        tracep->fullBit(oldp+285,(((IData)(vlSelf->SocTop__DOT__t_axi_w_valid) 
                                   & (IData)(vlSelf->SocTop__DOT__t_axi_aw_ready))));
        tracep->fullBit(oldp+286,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_hit_ok));
        tracep->fullBit(oldp+287,(vlSelf->SocTop__DOT__i_cache12__DOT__write_i_ok));
        tracep->fullBit(oldp+288,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_in_cache1));
        tracep->fullBit(oldp+289,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_in_cache2));
        tracep->fullBit(oldp+290,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_write_cache));
        tracep->fullBit(oldp+291,(vlSelf->SocTop__DOT__d_cache13__DOT__write_ok));
        tracep->fullBit(oldp+292,(vlSelf->SocTop__DOT__d_cache13__DOT__write_incache));
        tracep->fullBit(oldp+293,(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena1));
        tracep->fullBit(oldp+294,(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena2));
        tracep->fullBit(oldp+295,(vlSelf->SocTop__DOT__d_cache13__DOT__write_l_ok));
        tracep->fullBit(oldp+296,(vlSelf->SocTop__DOT__d_cache13__DOT__load_in_cache1));
        tracep->fullBit(oldp+297,(vlSelf->SocTop__DOT__d_cache13__DOT__load_in_cache2));
        tracep->fullBit(oldp+298,(vlSelf->SocTop__DOT__d_cache13__DOT__read_cache));
        tracep->fullQData(oldp+299,(vlSelf->SocTop__DOT__rvcpu_data_addr),64);
        tracep->fullCData(oldp+301,(vlSelf->SocTop__DOT__rvcpu_wmask),8);
        tracep->fullQData(oldp+302,(vlSelf->SocTop__DOT__rvcpu_data_o),64);
        tracep->fullBit(oldp+304,(vlSelf->SocTop__DOT__rvcpu_we));
        tracep->fullBit(oldp+305,(vlSelf->SocTop__DOT__rvcpu_re));
        tracep->fullIData(oldp+306,(vlSelf->SocTop__DOT__i_cache_inst_data),32);
        tracep->fullBit(oldp+307,(vlSelf->SocTop__DOT__i_cache_read_ena));
        tracep->fullBit(oldp+308,((1U & (~ ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl) 
                                            >> 1U)))));
        tracep->fullQData(oldp+309,(vlSelf->SocTop__DOT__d_cache_data_out),64);
        tracep->fullBit(oldp+311,(vlSelf->SocTop__DOT__d_cache_read_ena));
        tracep->fullBit(oldp+312,(vlSelf->SocTop__DOT__t_axi_aw_ready));
        tracep->fullBit(oldp+313,(vlSelf->SocTop__DOT__t_axi_aw_valid));
        tracep->fullCData(oldp+314,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid)
                                      ? 1U : 0U)),4);
        tracep->fullBit(oldp+315,(vlSelf->SocTop__DOT__t_axi_ar_valid));
        tracep->fullCData(oldp+316,(vlSelf->SocTop__DOT__t_axi_r_id),4);
        tracep->fullQData(oldp+317,(vlSelf->SocTop__DOT__t_axi_r_data),64);
        tracep->fullCData(oldp+319,((0x1fU & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                              >> 0xfU))),5);
        tracep->fullBit(oldp+320,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_stall_req));
        tracep->fullQData(oldp+321,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_data),64);
        tracep->fullCData(oldp+323,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1),5);
        tracep->fullBit(oldp+324,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1));
        tracep->fullCData(oldp+325,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2),5);
        tracep->fullBit(oldp+326,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2));
        tracep->fullCData(oldp+327,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type),8);
        tracep->fullCData(oldp+328,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode),8);
        tracep->fullQData(oldp+329,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op),64);
        tracep->fullQData(oldp+331,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op2),64);
        tracep->fullBit(oldp+333,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_ena));
        tracep->fullCData(oldp+334,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_addr),5);
        tracep->fullQData(oldp+335,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_pc),64);
        tracep->fullSData(oldp+337,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_s_offset),12);
        tracep->fullCData(oldp+338,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_memsel),3);
        tracep->fullBit(oldp+339,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_pip_jalrena));
        tracep->fullBit(oldp+340,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_if_flush));
        tracep->fullCData(oldp+341,(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl),5);
        tracep->fullQData(oldp+342,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_id_data),64);
        tracep->fullQData(oldp+344,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_ex_mem_pc),64);
        tracep->fullQData(oldp+346,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_pc),64);
        tracep->fullIData(oldp+348,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_id_ex_inst),32);
        tracep->fullIData(oldp+349,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_ex_mem_inst),32);
        tracep->fullIData(oldp+350,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_inst),32);
        tracep->fullIData(oldp+351,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm),20);
        tracep->fullSData(oldp+352,((vlSelf->SocTop__DOT__i_cache_inst_data 
                                     >> 0x14U)),12);
        tracep->fullSData(oldp+353,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm),12);
        tracep->fullCData(oldp+354,((0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)),7);
        tracep->fullBit(oldp+355,((IData)((0x6fU == 
                                           (0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)))));
        tracep->fullBit(oldp+356,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr));
        tracep->fullBit(oldp+357,((IData)((0x63U == 
                                           (0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)))));
        tracep->fullQData(oldp+358,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__operand1),64);
        tracep->fullQData(oldp+360,(((IData)((0x6fU 
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
        tracep->fullQData(oldp+362,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc),64);
        tracep->fullBit(oldp+364,((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))));
        tracep->fullCData(oldp+365,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__rs1),5);
        tracep->fullBit(oldp+366,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui));
        tracep->fullBit(oldp+367,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc));
        tracep->fullBit(oldp+368,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal));
        tracep->fullBit(oldp+369,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr));
        tracep->fullBit(oldp+370,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jump));
        tracep->fullBit(oldp+371,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srai));
        tracep->fullBit(oldp+372,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addiw));
        tracep->fullBit(oldp+373,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slliw));
        tracep->fullBit(oldp+374,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srliw));
        tracep->fullBit(oldp+375,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraiw));
        tracep->fullBit(oldp+376,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_add));
        tracep->fullBit(oldp+377,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sub));
        tracep->fullBit(oldp+378,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sll));
        tracep->fullBit(oldp+379,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slt));
        tracep->fullBit(oldp+380,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sltu));
        tracep->fullBit(oldp+381,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_xor));
        tracep->fullBit(oldp+382,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srl));
        tracep->fullBit(oldp+383,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sra));
        tracep->fullBit(oldp+384,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_or));
        tracep->fullBit(oldp+385,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_and));
        tracep->fullBit(oldp+386,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addw));
        tracep->fullBit(oldp+387,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_subw));
        tracep->fullBit(oldp+388,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sllw));
        tracep->fullBit(oldp+389,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srlw));
        tracep->fullBit(oldp+390,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraw));
        tracep->fullBit(oldp+391,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw));
        tracep->fullBit(oldp+392,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs));
        tracep->fullBit(oldp+393,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc));
        tracep->fullBit(oldp+394,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrwi));
        tracep->fullBit(oldp+395,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc))));
        tracep->fullBit(oldp+396,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak));
        tracep->fullBit(oldp+397,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1));
        tracep->fullBit(oldp+398,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1));
        tracep->fullBit(oldp+399,((1U & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl) 
                                         >> 3U))));
        tracep->fullQData(oldp+400,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__exe_res),64);
        tracep->fullCData(oldp+402,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_byte),8);
        tracep->fullSData(oldp+403,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte),16);
        tracep->fullIData(oldp+404,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word),32);
        tracep->fullQData(oldp+405,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_data),64);
        tracep->fullCData(oldp+407,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_mask),8);
        tracep->fullCData(oldp+408,(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst),6);
        tracep->fullBit(oldp+409,(vlSelf->SocTop__DOT__i_cache12__DOT__i_tag_ena1));
        tracep->fullBit(oldp+410,(vlSelf->SocTop__DOT__i_cache12__DOT__i_tag_ena2));
        tracep->fullCData(oldp+411,(vlSelf->SocTop__DOT__d_cache13__DOT__count_addr),6);
        tracep->fullBit(oldp+412,(vlSelf->SocTop__DOT__d_cache13__DOT__wirte_chose1));
        tracep->fullBit(oldp+413,(vlSelf->SocTop__DOT__d_cache13__DOT__wirte_chose2));
        tracep->fullCData(oldp+414,(vlSelf->SocTop__DOT__d_cache13__DOT__state_store),6);
        tracep->fullQData(oldp+415,((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                     >> 9U)),55);
        tracep->fullCData(oldp+417,(vlSelf->SocTop__DOT__d_cache13__DOT__state_load),6);
        tracep->fullCData(oldp+418,((0x3fU & (IData)(
                                                     (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                      >> 3U)))),6);
        tracep->fullQData(oldp+419,((0x80000000000000ULL 
                                     | (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                        >> 9U))),56);
        tracep->fullBit(oldp+421,(vlSelf->SocTop__DOT__d_cache13__DOT__tag_ena1));
        tracep->fullBit(oldp+422,(vlSelf->SocTop__DOT__d_cache13__DOT__tag_ena2));
        tracep->fullCData(oldp+423,((0x3fU & (IData)(
                                                     (vlSelf->SocTop__DOT__rvcpu_data_o 
                                                      >> 3U)))),6);
        tracep->fullQData(oldp+424,(vlSelf->SocTop__DOT__d_cache13__DOT__in_data1),64);
        tracep->fullCData(oldp+426,(vlSelf->SocTop__DOT__d_cache13__DOT__data_ena1),8);
        tracep->fullQData(oldp+427,(vlSelf->SocTop__DOT__d_cache13__DOT__in_data2),64);
        tracep->fullCData(oldp+429,(vlSelf->SocTop__DOT__d_cache13__DOT__data_ena2),8);
        tracep->fullBit(oldp+430,(((IData)(vlSelf->SocTop__DOT__t_axi_aw_valid) 
                                   & (IData)(vlSelf->SocTop__DOT__t_axi_aw_ready))));
        tracep->fullCData(oldp+431,(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state_nex),2);
        tracep->fullBit(oldp+432,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_r_shankhand));
        tracep->fullBit(oldp+433,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_r_shankhand));
        tracep->fullBit(oldp+434,(((IData)(vlSelf->SocTop__DOT__i_cache_read_ena) 
                                   & (IData)(vlSelf->SocTop__DOT__d_cache_read_ena))));
        tracep->fullBit(oldp+435,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid));
        tracep->fullBit(oldp+436,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_valid));
        tracep->fullCData(oldp+437,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_state_nxt),2);
        tracep->fullCData(oldp+438,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_state_nxt),2);
        tracep->fullCData(oldp+439,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state_nxt),2);
        tracep->fullCData(oldp+440,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state_nxt),2);
        tracep->fullBit(oldp+441,((((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                    & (0x20U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load))) 
                                   | (vlSelf->SocTop__DOT__d_cache13__DOT__dirty1
                                      [vlSelf->SocTop__DOT__d_cache13__DOT__count_addr] 
                                      & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                         [vlSelf->SocTop__DOT__d_cache13__DOT__count_addr] 
                                         >= vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                         [vlSelf->SocTop__DOT__d_cache13__DOT__count_addr])))));
        tracep->fullQData(oldp+442,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid)
                                      ? vlSelf->SocTop__DOT__rvcpu_inst_addr
                                      : ((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_valid)
                                          ? vlSelf->SocTop__DOT__rvcpu_data_addr
                                          : 0ULL))),64);
        tracep->fullBit(oldp+444,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)) 
                                   & (0U == ((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid)
                                              ? 1U : 0U)))));
        tracep->fullBit(oldp+445,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)) 
                                   & (1U == ((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid)
                                              ? 1U : 0U)))));
        tracep->fullBit(oldp+446,((vlSelf->SocTop__DOT__d_cache13__DOT__dirty1
                                   [(0x3fU & (IData)(
                                                     (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                      >> 3U)))] 
                                   & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                      [(0x3fU & (IData)(
                                                        (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                         >> 3U)))] 
                                      >= vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                      [(0x3fU & (IData)(
                                                        (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                         >> 3U)))]))));
        tracep->fullBit(oldp+447,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_valid) 
                                   & (IData)(vlSelf->SocTop__DOT__t_axi_ar_ready))));
        tracep->fullBit(oldp+448,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid) 
                                   & (IData)(vlSelf->SocTop__DOT__t_axi_ar_ready))));
        tracep->fullBit(oldp+449,(((IData)(vlSelf->SocTop__DOT__t_axi_ar_ready) 
                                   & (IData)(vlSelf->SocTop__DOT__t_axi_ar_valid))));
        tracep->fullQData(oldp+450,(vlSelf->SocTop__DOT__rvcpu_inst_addr),64);
        tracep->fullBit(oldp+452,(vlSelf->SocTop__DOT__arbitrate_d_ok));
        tracep->fullBit(oldp+453,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_okreg));
        tracep->fullBit(oldp+454,(vlSelf->SocTop__DOT__t_axi_ar_ready));
        tracep->fullBit(oldp+455,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))));
        tracep->fullBit(oldp+456,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))));
        tracep->fullQData(oldp+457,((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                     >> 9U)),55);
        tracep->fullBit(oldp+459,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_chose1));
        tracep->fullBit(oldp+460,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_chose2));
        tracep->fullCData(oldp+461,((0x3fU & (IData)(
                                                     (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                                      >> 3U)))),6);
        tracep->fullQData(oldp+462,((0x80000000000000ULL 
                                     | (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                        >> 9U))),56);
        tracep->fullQData(oldp+464,(vlSelf->SocTop__DOT__i_cache12__DOT__u_tag01__DOT__out_data),55);
        tracep->fullBit(oldp+466,(vlSelf->SocTop__DOT__i_cache12__DOT__u_tag01__DOT__out_vaild));
        tracep->fullQData(oldp+467,(vlSelf->SocTop__DOT__i_cache12__DOT__u_tag02__DOT__out_data),55);
        tracep->fullBit(oldp+469,(vlSelf->SocTop__DOT__i_cache12__DOT__u_tag02__DOT__out_vaild));
        tracep->fullBit(oldp+470,(vlSelf->SocTop__DOT__d_cache13__DOT__wbck_ok));
        tracep->fullBit(oldp+471,(vlSelf->SocTop__DOT__d_cache13__DOT__load_bc_ok));
        tracep->fullQData(oldp+472,(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_data),55);
        tracep->fullBit(oldp+474,(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_vaild));
        tracep->fullQData(oldp+475,(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_data),55);
        tracep->fullBit(oldp+477,(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_vaild));
        tracep->fullCData(oldp+478,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state),2);
        tracep->fullBit(oldp+479,(vlSelf->clk));
        tracep->fullBit(oldp+480,(vlSelf->rst));
        tracep->fullBit(oldp+481,(vlSelf->out_read_ram_ena));
        tracep->fullBit(oldp+482,(vlSelf->out_read_inst_ena));
        tracep->fullQData(oldp+483,(vlSelf->out_addr_outp),64);
        tracep->fullIData(oldp+485,(vlSelf->in_inst_data_in),32);
        tracep->fullQData(oldp+486,(vlSelf->in_ram_data_in),64);
        tracep->fullBit(oldp+488,(vlSelf->out_write_ram_ena));
        tracep->fullQData(oldp+489,(vlSelf->out_write_ram_data),64);
        tracep->fullQData(oldp+491,(vlSelf->out_write_ram_addr),64);
        tracep->fullBit(oldp+493,((((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                    & (4U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load))) 
                                   | ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__read_cache) 
                                      | (((IData)(vlSelf->SocTop__DOT__rvcpu_we) 
                                          & (4U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store))) 
                                         | (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__write_incache))))));
        tracep->fullQData(oldp+494,((((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                      & (0x20U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)))
                                      ? ((vlSelf->SocTop__DOT__d_cache13__DOT__dirty1
                                          [(0x3fU & (IData)(
                                                            (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                             >> 3U)))] 
                                          & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                          >> 3U)))] 
                                             >= vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                          >> 3U)))]))
                                          ? vlSelf->SocTop__DOT__d_cache13__DOT__u_data0__DOT__out_data
                                          : vlSelf->SocTop__DOT__d_cache13__DOT__u_data1__DOT__out_data)
                                      : ((vlSelf->SocTop__DOT__d_cache13__DOT__dirty1
                                          [vlSelf->SocTop__DOT__d_cache13__DOT__count_addr] 
                                          & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                             [vlSelf->SocTop__DOT__d_cache13__DOT__count_addr] 
                                             >= vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                             [vlSelf->SocTop__DOT__d_cache13__DOT__count_addr]))
                                          ? vlSelf->SocTop__DOT__d_cache13__DOT__u_data0__DOT__out_data
                                          : 0ULL))),64);
        tracep->fullQData(oldp+496,((((0U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state)) 
                                      | (1U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state)))
                                      ? (((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                          & (0x20U 
                                             == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load)))
                                          ? ((vlSelf->SocTop__DOT__d_cache13__DOT__dirty1
                                              [(0x3fU 
                                                & (IData)(
                                                          (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                           >> 3U)))] 
                                              & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                              >> 3U)))] 
                                                 >= 
                                                 vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                              >> 3U)))]))
                                              ? vlSelf->SocTop__DOT__d_cache13__DOT__u_data0__DOT__out_data
                                              : vlSelf->SocTop__DOT__d_cache13__DOT__u_data1__DOT__out_data)
                                          : ((vlSelf->SocTop__DOT__d_cache13__DOT__dirty1
                                              [vlSelf->SocTop__DOT__d_cache13__DOT__count_addr] 
                                              & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                                 [vlSelf->SocTop__DOT__d_cache13__DOT__count_addr] 
                                                 >= 
                                                 vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                                 [vlSelf->SocTop__DOT__d_cache13__DOT__count_addr]))
                                              ? vlSelf->SocTop__DOT__d_cache13__DOT__u_data0__DOT__out_data
                                              : 0ULL))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+498,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                      ? vlSelf->SocTop__DOT__axi_mnq4__DOT__read_addr_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+500,(((1U & ((~ (IData)(vlSelf->rst)) 
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
        tracep->fullBit(oldp+502,(((IData)(vlSelf->rst)
                                    ? 0U : (1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)))));
        tracep->fullQData(oldp+503,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
                                                 ? 
                                                (0xfffffffffffffffeULL 
                                                 & vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc)
                                                 : vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc))),64);
        tracep->fullBit(oldp+505,(((IData)(vlSelf->rst)
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
        tracep->fullQData(oldp+506,((((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1))
                                      ? ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                           == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                          & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                          ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                          : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                         [vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1])
                                      : 0ULL)),64);
        tracep->fullQData(oldp+508,((((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2))
                                      ? ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                           == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                          & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                          ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                          : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                         [vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2])
                                      : 0ULL)),64);
        tracep->fullBit(oldp+510,(((~ (IData)(vlSelf->rst)) 
                                   & (((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                       | (IData)(vlSelf->SocTop__DOT__rvcpu_we)) 
                                      & (~ (((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                             & (4U 
                                                == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load))) 
                                            | ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__read_cache) 
                                               | (((IData)(vlSelf->SocTop__DOT__rvcpu_we) 
                                                   & (4U 
                                                      == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store))) 
                                                  | (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__write_incache)))))))));
        tracep->fullBit(oldp+511,(((IData)(vlSelf->rst)
                                    ? 0U : (1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1) 
                                                   & (2U 
                                                      == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                  & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1) 
                                                     == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)))))));
        tracep->fullBit(oldp+512,(((IData)(vlSelf->rst)
                                    ? 0U : (1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2) 
                                                   & (2U 
                                                      == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                  & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2) 
                                                     == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)))))));
        tracep->fullQData(oldp+513,(((IData)(vlSelf->rst)
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
        tracep->fullQData(oldp+515,(((IData)(vlSelf->rst)
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
        tracep->fullQData(oldp+517,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((1U 
                                                 & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                            >> 2U)))
                                                 ? 
                                                ((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)) 
                                                 << 0x20U)
                                                 : (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data))))),64);
        tracep->fullCData(oldp+519,(((IData)(vlSelf->rst)
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
        tracep->fullCData(oldp+520,(((IData)(vlSelf->rst)
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
        tracep->fullCData(oldp+521,(((IData)(vlSelf->rst)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                             >> 2U)))
                                               ? 0xf0U
                                               : 0xfU))),8);
        tracep->fullBit(oldp+522,((1U & ((~ (IData)(vlSelf->rst)) 
                                         & (~ ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl) 
                                               >> 1U))))));
        tracep->fullIData(oldp+523,(((((0x10U == (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst)) 
                                       & (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_okreg)) 
                                      & (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__inst_chose1))
                                      ? vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_data_oupt
                                      : 0U)),32);
        tracep->fullIData(oldp+524,(((((0x10U == (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst)) 
                                       & (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_okreg)) 
                                      & (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__inst_chose2))
                                      ? vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_data_oupt
                                      : 0U)),32);
        tracep->fullBit(oldp+525,(vlSelf->SocTop__DOT__d_cache13__DOT__store_ok));
        tracep->fullBit(oldp+526,(vlSelf->SocTop__DOT__d_cache13__DOT__load_ok));
        tracep->fullBit(oldp+527,(0U));
        tracep->fullCData(oldp+528,(0U),4);
        tracep->fullCData(oldp+529,(0U),8);
        tracep->fullCData(oldp+530,(3U),3);
        tracep->fullCData(oldp+531,(1U),2);
        tracep->fullCData(oldp+532,(2U),4);
        tracep->fullCData(oldp+533,(0U),3);
        tracep->fullBit(oldp+534,(1U));
        tracep->fullCData(oldp+535,(0U),2);
        tracep->fullCData(oldp+536,(0xffU),8);
    }
}
