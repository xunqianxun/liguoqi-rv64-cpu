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
        tracep->declBit(c+792,"clk", false,-1);
        tracep->declBit(c+793,"rst", false,-1);
        tracep->declBit(c+794,"read_ena_sign_", false,-1);
        tracep->declQuad(c+795,"out_addr_outp", false,-1, 63,0);
        tracep->declQuad(c+797,"read_data_sign_", false,-1, 63,0);
        tracep->declBit(c+799,"out_write_ram_ena", false,-1);
        tracep->declQuad(c+800,"out_write_ram_data", false,-1, 63,0);
        tracep->declQuad(c+802,"out_write_ram_addr", false,-1, 63,0);
        tracep->declBit(c+792,"SocTop clk", false,-1);
        tracep->declBit(c+793,"SocTop rst", false,-1);
        tracep->declBit(c+794,"SocTop read_ena_sign_", false,-1);
        tracep->declQuad(c+795,"SocTop out_addr_outp", false,-1, 63,0);
        tracep->declQuad(c+797,"SocTop read_data_sign_", false,-1, 63,0);
        tracep->declBit(c+799,"SocTop out_write_ram_ena", false,-1);
        tracep->declQuad(c+800,"SocTop out_write_ram_data", false,-1, 63,0);
        tracep->declQuad(c+802,"SocTop out_write_ram_addr", false,-1, 63,0);
        tracep->declBus(c+852,"SocTop SLAVE_NUM", false,-1, 31,0);
        tracep->declBit(c+792,"SocTop aclk", false,-1);
        tracep->declQuad(c+369,"SocTop rvcpu_inst_addr", false,-1, 63,0);
        tracep->declQuad(c+3,"SocTop rvcpu_data_addr", false,-1, 63,0);
        tracep->declBus(c+5,"SocTop rvcpu_wmask", false,-1, 7,0);
        tracep->declQuad(c+6,"SocTop rvcpu_data_o", false,-1, 63,0);
        tracep->declBit(c+8,"SocTop rvcpu_we", false,-1);
        tracep->declBit(c+9,"SocTop rvcpu_re", false,-1);
        tracep->declBit(c+10,"SocTop core_stall_l", false,-1);
        tracep->declBus(c+11,"SocTop i_cache_inst_data", false,-1, 31,0);
        tracep->declBit(c+12,"SocTop i_cache_inst_valid", false,-1);
        tracep->declBit(c+371,"SocTop i_cache_read_ena", false,-1);
        tracep->declQuad(c+372,"SocTop i_cache_addr", false,-1, 63,0);
        tracep->declBit(c+804,"SocTop i_cache_ready", false,-1);
        tracep->declBit(c+374,"SocTop i_caceh_resp", false,-1);
        tracep->declQuad(c+13,"SocTop d_cache_data_out", false,-1, 63,0);
        tracep->declBit(c+317,"SocTop d_cache_mem_finish", false,-1);
        tracep->declQuad(c+15,"SocTop d_cache_out_addr", false,-1, 63,0);
        tracep->declQuad(c+318,"SocTop d_cache_out_data", false,-1, 63,0);
        tracep->declBit(c+320,"SocTop d_cache_out_resp", false,-1);
        tracep->declBus(c+17,"SocTop d_cache_out_type", false,-1, 3,0);
        tracep->declQuad(c+375,"SocTop arbitrate_d_data", false,-1, 63,0);
        tracep->declBit(c+377,"SocTop arbitrate_d_ok", false,-1);
        tracep->declQuad(c+378,"SocTop arbitrate_i_data", false,-1, 63,0);
        tracep->declBit(c+380,"SocTop arbitrate_i_ok", false,-1);
        tracep->declBit(c+381,"SocTop time_init_sign", false,-1);
        tracep->declBus(c+382,"SocTop t_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+383,"SocTop t_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+385,"SocTop t_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+386,"SocTop t_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+387,"SocTop t_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+388,"SocTop t_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+389,"SocTop t_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+390,"SocTop t_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+805,"SocTop t_axi_aw_ready", false,-1);
        tracep->declBit(c+391,"SocTop t_axi_aw_valid", false,-1);
        tracep->declQuad(c+392,"SocTop t_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+394,"SocTop t_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+395,"SocTop t_axi_w_last", false,-1);
        tracep->declBit(c+396,"SocTop t_axi_w_valid", false,-1);
        tracep->declBit(c+806,"SocTop t_axi_w_ready", false,-1);
        tracep->declBus(c+807,"SocTop t_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+808,"SocTop t_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+809,"SocTop t_axi_b_valid", false,-1);
        tracep->declBit(c+853,"SocTop t_axi_b_ready", false,-1);
        tracep->declBus(c+397,"SocTop t_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+398,"SocTop t_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+400,"SocTop t_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+401,"SocTop t_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+402,"SocTop t_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+403,"SocTop t_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+404,"SocTop t_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+405,"SocTop t_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+406,"SocTop t_axi_ar_valid", false,-1);
        tracep->declBit(c+18,"SocTop t_axi_ar_ready", false,-1);
        tracep->declBus(c+19,"SocTop t_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+20,"SocTop t_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+22,"SocTop t_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+23,"SocTop t_axi_r_last", false,-1);
        tracep->declBit(c+23,"SocTop t_axi_r_valid", false,-1);
        tracep->declBit(c+407,"SocTop t_axi_r_ready", false,-1);
        tracep->declBus(c+24,"SocTop add_axi_aw_id", false,-1, 11,0);
        tracep->declArray(c+25,"SocTop add_axi_aw_addr", false,-1, 191,0);
        tracep->declBus(c+31,"SocTop add_axi_aw_len", false,-1, 23,0);
        tracep->declBus(c+32,"SocTop add_axi_aw_size", false,-1, 8,0);
        tracep->declBus(c+33,"SocTop add_axi_aw_burst", false,-1, 5,0);
        tracep->declBus(c+34,"SocTop add_axi_aw_cache", false,-1, 11,0);
        tracep->declBus(c+35,"SocTop add_axi_aw_prot", false,-1, 8,0);
        tracep->declBus(c+36,"SocTop add_axi_aw_qos", false,-1, 11,0);
        tracep->declBus(c+37,"SocTop add_axi_aw_valid", false,-1, 2,0);
        tracep->declBus(c+38,"SocTop add_axi_aw_ready", false,-1, 2,0);
        tracep->declArray(c+39,"SocTop add_axi_w_data", false,-1, 191,0);
        tracep->declBus(c+45,"SocTop add_axi_w_strb", false,-1, 23,0);
        tracep->declBus(c+46,"SocTop add_axi_w_last", false,-1, 2,0);
        tracep->declBus(c+47,"SocTop add_axi_w_valid", false,-1, 2,0);
        tracep->declBus(c+48,"SocTop add_axi_w_ready", false,-1, 2,0);
        tracep->declBus(c+321,"SocTop add_axi_b_id", false,-1, 11,0);
        tracep->declBus(c+408,"SocTop add_axi_b_resp", false,-1, 5,0);
        tracep->declBus(c+409,"SocTop add_axi_b_valid", false,-1, 2,0);
        tracep->declBus(c+49,"SocTop add_axi_b_ready", false,-1, 2,0);
        tracep->declBus(c+50,"SocTop add_axi_ar_id", false,-1, 11,0);
        tracep->declArray(c+51,"SocTop add_axi_ar_addr", false,-1, 191,0);
        tracep->declBus(c+57,"SocTop add_axi_ar_len", false,-1, 23,0);
        tracep->declBus(c+58,"SocTop add_axi_ar_size", false,-1, 8,0);
        tracep->declBus(c+59,"SocTop add_axi_ar_burst", false,-1, 5,0);
        tracep->declBus(c+60,"SocTop add_axi_ar_cache", false,-1, 11,0);
        tracep->declBus(c+61,"SocTop add_axi_ar_prot", false,-1, 8,0);
        tracep->declBus(c+62,"SocTop add_axi_ar_qos", false,-1, 11,0);
        tracep->declBus(c+63,"SocTop add_axi_ar_valid", false,-1, 2,0);
        tracep->declBus(c+322,"SocTop add_axi_ar_ready", false,-1, 2,0);
        tracep->declBus(c+323,"SocTop add_axi_r_id", false,-1, 11,0);
        tracep->declArray(c+810,"SocTop add_axi_r_data", false,-1, 191,0);
        tracep->declBus(c+1,"SocTop add_axi_r_resp", false,-1, 5,0);
        tracep->declBus(c+410,"SocTop add_axi_r_last", false,-1, 2,0);
        tracep->declBus(c+411,"SocTop add_axi_r_valid", false,-1, 2,0);
        tracep->declBus(c+64,"SocTop add_axi_r_ready", false,-1, 2,0);
        tracep->declBus(c+65,"SocTop soc_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+66,"SocTop soc_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+68,"SocTop soc_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+69,"SocTop soc_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+70,"SocTop soc_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+71,"SocTop soc_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+72,"SocTop soc_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+73,"SocTop soc_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+74,"SocTop soc_axi_aw_ready", false,-1);
        tracep->declBit(c+75,"SocTop soc_axi_aw_valid", false,-1);
        tracep->declQuad(c+76,"SocTop soc_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+78,"SocTop soc_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+79,"SocTop soc_axi_w_last", false,-1);
        tracep->declBit(c+80,"SocTop soc_axi_w_valid", false,-1);
        tracep->declBit(c+81,"SocTop soc_axi_w_ready", false,-1);
        tracep->declBus(c+65,"SocTop soc_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+854,"SocTop soc_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+412,"SocTop soc_axi_b_valid", false,-1);
        tracep->declBit(c+82,"SocTop soc_axi_b_ready", false,-1);
        tracep->declBus(c+83,"SocTop soc_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+84,"SocTop soc_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+86,"SocTop soc_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+87,"SocTop soc_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+88,"SocTop soc_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+89,"SocTop soc_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+90,"SocTop soc_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+91,"SocTop soc_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+92,"SocTop soc_axi_ar_valid", false,-1);
        tracep->declBit(c+413,"SocTop soc_axi_ar_ready", false,-1);
        tracep->declBus(c+414,"SocTop soc_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+816,"SocTop soc_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+854,"SocTop soc_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+415,"SocTop soc_axi_r_last", false,-1);
        tracep->declBit(c+416,"SocTop soc_axi_r_valid", false,-1);
        tracep->declBit(c+93,"SocTop soc_axi_r_ready", false,-1);
        tracep->declBus(c+94,"SocTop tim_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+95,"SocTop tim_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+97,"SocTop tim_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+98,"SocTop tim_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+99,"SocTop tim_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+100,"SocTop tim_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+101,"SocTop tim_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+102,"SocTop tim_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+103,"SocTop tim_axi_aw_ready", false,-1);
        tracep->declBit(c+104,"SocTop tim_axi_aw_valid", false,-1);
        tracep->declQuad(c+105,"SocTop tim_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+107,"SocTop tim_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+108,"SocTop tim_axi_w_last", false,-1);
        tracep->declBit(c+109,"SocTop tim_axi_w_valid", false,-1);
        tracep->declBit(c+110,"SocTop tim_axi_w_ready", false,-1);
        tracep->declBus(c+417,"SocTop tim_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+418,"SocTop tim_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+419,"SocTop tim_axi_b_valid", false,-1);
        tracep->declBit(c+111,"SocTop tim_axi_b_ready", false,-1);
        tracep->declBus(c+112,"SocTop tim_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+113,"SocTop tim_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+115,"SocTop tim_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+116,"SocTop tim_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+117,"SocTop tim_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+118,"SocTop tim_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+119,"SocTop tim_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+120,"SocTop tim_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+121,"SocTop tim_axi_ar_valid", false,-1);
        tracep->declBit(c+122,"SocTop tim_axi_ar_ready", false,-1);
        tracep->declBus(c+324,"SocTop tim_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+123,"SocTop tim_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+2,"SocTop tim_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+420,"SocTop tim_axi_r_last", false,-1);
        tracep->declBit(c+421,"SocTop tim_axi_r_valid", false,-1);
        tracep->declBit(c+125,"SocTop tim_axi_r_ready", false,-1);
        tracep->declBus(c+126,"SocTop io_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+127,"SocTop io_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+129,"SocTop io_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+130,"SocTop io_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+131,"SocTop io_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+132,"SocTop io_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+133,"SocTop io_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+134,"SocTop io_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+855,"SocTop io_axi_aw_ready", false,-1);
        tracep->declBit(c+135,"SocTop io_axi_aw_valid", false,-1);
        tracep->declQuad(c+136,"SocTop io_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+138,"SocTop io_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+139,"SocTop io_axi_w_last", false,-1);
        tracep->declBit(c+140,"SocTop io_axi_w_valid", false,-1);
        tracep->declBit(c+856,"SocTop io_axi_w_ready", false,-1);
        tracep->declBus(c+857,"SocTop io_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+858,"SocTop io_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+859,"SocTop io_axi_b_valid", false,-1);
        tracep->declBit(c+141,"SocTop io_axi_b_ready", false,-1);
        tracep->declBus(c+142,"SocTop io_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+143,"SocTop io_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+145,"SocTop io_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+146,"SocTop io_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+147,"SocTop io_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+148,"SocTop io_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+149,"SocTop io_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+150,"SocTop io_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+151,"SocTop io_axi_ar_valid", false,-1);
        tracep->declBit(c+860,"SocTop io_axi_ar_ready", false,-1);
        tracep->declBus(c+861,"SocTop io_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+862,"SocTop io_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+864,"SocTop io_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+865,"SocTop io_axi_r_last", false,-1);
        tracep->declBit(c+866,"SocTop io_axi_r_valid", false,-1);
        tracep->declBit(c+152,"SocTop io_axi_r_ready", false,-1);
        tracep->declBit(c+153,"SocTop read_ena_sign", false,-1);
        tracep->declQuad(c+154,"SocTop addr_oup_sign", false,-1, 63,0);
        tracep->declQuad(c+797,"SocTop read_data_sign", false,-1, 63,0);
        tracep->declBit(c+412,"SocTop write_ena_sign", false,-1);
        tracep->declQuad(c+422,"SocTop write_addr_sign", false,-1, 63,0);
        tracep->declQuad(c+424,"SocTop write_data_sign", false,-1, 63,0);
        tracep->declBus(c+867,"SocTop prot_chose_write", false,-1, 2,0);
        tracep->declBus(c+867,"SocTop prot_chose_read", false,-1, 2,0);
        tracep->declBit(c+792,"SocTop rvcpu1 clk", false,-1);
        tracep->declBit(c+793,"SocTop rvcpu1 rst", false,-1);
        tracep->declQuad(c+369,"SocTop rvcpu1 inst_addr", false,-1, 63,0);
        tracep->declBit(c+804,"SocTop rvcpu1 inst_ready", false,-1);
        tracep->declBus(c+11,"SocTop rvcpu1 inst", false,-1, 31,0);
        tracep->declBit(c+12,"SocTop rvcpu1 bui_inst_valid", false,-1);
        tracep->declBit(c+10,"SocTop rvcpu1 core_stall_sign", false,-1);
        tracep->declQuad(c+3,"SocTop rvcpu1 data_addr", false,-1, 63,0);
        tracep->declBus(c+5,"SocTop rvcpu1 wmask", false,-1, 7,0);
        tracep->declQuad(c+6,"SocTop rvcpu1 data_o", false,-1, 63,0);
        tracep->declQuad(c+13,"SocTop rvcpu1 data_i", false,-1, 63,0);
        tracep->declBit(c+8,"SocTop rvcpu1 we", false,-1);
        tracep->declBit(c+9,"SocTop rvcpu1 re", false,-1);
        tracep->declBit(c+317,"SocTop rvcpu1 mem_finish", false,-1);
        tracep->declBit(c+381,"SocTop rvcpu1 timer_intr", false,-1);
        tracep->declQuad(c+818,"SocTop rvcpu1 pip_regfile_x1", false,-1, 63,0);
        tracep->declBit(c+820,"SocTop rvcpu1 pip_refflie_x1_ena", false,-1);
        tracep->declBus(c+156,"SocTop rvcpu1 pip_regfile_x1_addr", false,-1, 4,0);
        tracep->declQuad(c+821,"SocTop rvcpu1 pip_pc", false,-1, 63,0);
        tracep->declBit(c+823,"SocTop rvcpu1 if_stall_req", false,-1);
        tracep->declQuad(c+426,"SocTop rvcpu1 if_id_pc", false,-1, 63,0);
        tracep->declBus(c+428,"SocTop rvcpu1 if_id_inst", false,-1, 31,0);
        tracep->declBit(c+429,"SocTop rvcpu1 ex_flush", false,-1);
        tracep->declQuad(c+157,"SocTop rvcpu1 ex_id_rd_data", false,-1, 63,0);
        tracep->declBus(c+430,"SocTop rvcpu1 ex_id_rd_addr", false,-1, 4,0);
        tracep->declBit(c+431,"SocTop rvcpu1 ex_id_rd_ena", false,-1);
        tracep->declBus(c+432,"SocTop rvcpu1 ex_id_rd_type", false,-1, 7,0);
        tracep->declBus(c+433,"SocTop rvcpu1 ex_mem_sel", false,-1, 2,0);
        tracep->declQuad(c+434,"SocTop rvcpu1 ex_mem_addr", false,-1, 63,0);
        tracep->declBit(c+429,"SocTop rvcpu1 ex_pc_branchena", false,-1);
        tracep->declQuad(c+436,"SocTop rvcpu1 ex_pc_branchpc", false,-1, 63,0);
        tracep->declBit(c+438,"SocTop rvcpu1 ex_ctrl_req", false,-1);
        tracep->declBus(c+159,"SocTop rvcpu1 id_reg_addr1", false,-1, 4,0);
        tracep->declBit(c+160,"SocTop rvcpu1 id_reg_ena1", false,-1);
        tracep->declBus(c+161,"SocTop rvcpu1 id_reg_addr2", false,-1, 4,0);
        tracep->declBit(c+162,"SocTop rvcpu1 id_reg_ena2", false,-1);
        tracep->declBit(c+163,"SocTop rvcpu1 id_ctrl_req", false,-1);
        tracep->declBus(c+164,"SocTop rvcpu1 id_ex_type", false,-1, 7,0);
        tracep->declBus(c+165,"SocTop rvcpu1 id_ex_opcode", false,-1, 7,0);
        tracep->declQuad(c+166,"SocTop rvcpu1 id_ex_op", false,-1, 63,0);
        tracep->declQuad(c+824,"SocTop rvcpu1 id_ex_op2", false,-1, 63,0);
        tracep->declBit(c+168,"SocTop rvcpu1 id_ex_rd_ena", false,-1);
        tracep->declBus(c+325,"SocTop rvcpu1 id_ex_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+826,"SocTop rvcpu1 id_ex_pc", false,-1, 63,0);
        tracep->declBus(c+326,"SocTop rvcpu1 id_ex_s_offset", false,-1, 11,0);
        tracep->declBus(c+828,"SocTop rvcpu1 id_ex_memsel", false,-1, 2,0);
        tracep->declQuad(c+327,"SocTop rvcpu1 id_pip_jalrpc", false,-1, 63,0);
        tracep->declBit(c+169,"SocTop rvcpu1 id_pip_jalrena", false,-1);
        tracep->declBit(c+170,"SocTop rvcpu1 id_if_flush", false,-1);
        tracep->declBus(c+171,"SocTop rvcpu1 stall_ctrl", false,-1, 4,0);
        tracep->declQuad(c+829,"SocTop rvcpu1 regs_id_data1", false,-1, 63,0);
        tracep->declQuad(c+831,"SocTop rvcpu1 regs_id_data2", false,-1, 63,0);
        tracep->declQuad(c+172,"SocTop rvcpu1 mem_id_data", false,-1, 63,0);
        tracep->declBus(c+439,"SocTop rvcpu1 mem_id_addr", false,-1, 4,0);
        tracep->declBit(c+440,"SocTop rvcpu1 mem_id_ena", false,-1);
        tracep->declBit(c+174,"SocTop rvcpu1 mem_ctrl_req", false,-1);
        tracep->declBus(c+441,"SocTop rvcpu1 wb_id_addr", false,-1, 4,0);
        tracep->declBit(c+442,"SocTop rvcpu1 wb_id_ena", false,-1);
        tracep->declQuad(c+443,"SocTop rvcpu1 wb_regfile_data", false,-1, 63,0);
        tracep->declQuad(c+445,"SocTop rvcpu1 idex_ex_pc", false,-1, 63,0);
        tracep->declBus(c+447,"SocTop rvcpu1 idex_ex_type", false,-1, 7,0);
        tracep->declBus(c+448,"SocTop rvcpu1 idex_ex_opcode", false,-1, 7,0);
        tracep->declQuad(c+449,"SocTop rvcpu1 idex_ex_op1", false,-1, 63,0);
        tracep->declQuad(c+451,"SocTop rvcpu1 idex_ex_op2", false,-1, 63,0);
        tracep->declBit(c+453,"SocTop rvcpu1 idex_ex_rdena", false,-1);
        tracep->declBus(c+430,"SocTop rvcpu1 idex_ex_rdaddr", false,-1, 4,0);
        tracep->declBus(c+454,"SocTop rvcpu1 idex_ex_offset", false,-1, 11,0);
        tracep->declBus(c+433,"SocTop rvcpu1 idex_ex_sel", false,-1, 2,0);
        tracep->declBus(c+455,"SocTop rvcpu1 exmem_mem_type", false,-1, 7,0);
        tracep->declBit(c+440,"SocTop rvcpu1 exmem_mem_ena", false,-1);
        tracep->declQuad(c+456,"SocTop rvcpu1 exmem_mem_data", false,-1, 63,0);
        tracep->declBus(c+439,"SocTop rvcpu1 exmem_mem_addr", false,-1, 4,0);
        tracep->declBus(c+458,"SocTop rvcpu1 exmem_mem_sel", false,-1, 2,0);
        tracep->declQuad(c+459,"SocTop rvcpu1 exmem_mem_lsaddr", false,-1, 63,0);
        tracep->declQuad(c+833,"SocTop rvcpu1 ex_ex_mem_pc", false,-1, 63,0);
        tracep->declQuad(c+461,"SocTop rvcpu1 ex_mem_mem_pc", false,-1, 63,0);
        tracep->declQuad(c+175,"SocTop rvcpu1 mem_mem_wb_pc", false,-1, 63,0);
        tracep->declBus(c+835,"SocTop rvcpu1 id_id_ex_inst", false,-1, 31,0);
        tracep->declBus(c+463,"SocTop rvcpu1 id_ex_ex_inst", false,-1, 31,0);
        tracep->declBus(c+836,"SocTop rvcpu1 ex_ex_mem_inst", false,-1, 31,0);
        tracep->declBus(c+464,"SocTop rvcpu1 ex_mem_mem_inst", false,-1, 31,0);
        tracep->declBus(c+177,"SocTop rvcpu1 mem_mem_wb_inst", false,-1, 31,0);
        tracep->declBit(c+793,"SocTop rvcpu1 pip_fore0 rst", false,-1);
        tracep->declQuad(c+369,"SocTop rvcpu1 pip_fore0 pc_i", false,-1, 63,0);
        tracep->declBus(c+11,"SocTop rvcpu1 pip_fore0 inst", false,-1, 31,0);
        tracep->declQuad(c+818,"SocTop rvcpu1 pip_fore0 x1_data", false,-1, 63,0);
        tracep->declQuad(c+821,"SocTop rvcpu1 pip_fore0 pc_o", false,-1, 63,0);
        tracep->declBus(c+156,"SocTop rvcpu1 pip_fore0 x1_addr", false,-1, 4,0);
        tracep->declBit(c+820,"SocTop rvcpu1 pip_fore0 x1_ena", false,-1);
        tracep->declBus(c+178,"SocTop rvcpu1 pip_fore0 j_imm", false,-1, 20,1);
        tracep->declBus(c+179,"SocTop rvcpu1 pip_fore0 i_imm", false,-1, 11,0);
        tracep->declBus(c+180,"SocTop rvcpu1 pip_fore0 b_imm", false,-1, 12,1);
        tracep->declBus(c+181,"SocTop rvcpu1 pip_fore0 opcode", false,-1, 6,0);
        tracep->declBit(c+182,"SocTop rvcpu1 pip_fore0 inst_jal", false,-1);
        tracep->declBit(c+183,"SocTop rvcpu1 pip_fore0 inst_jalr", false,-1);
        tracep->declBit(c+184,"SocTop rvcpu1 pip_fore0 inst_bxx", false,-1);
        tracep->declQuad(c+837,"SocTop rvcpu1 pip_fore0 operand1", false,-1, 63,0);
        tracep->declQuad(c+839,"SocTop rvcpu1 pip_fore0 operand2", false,-1, 63,0);
        tracep->declQuad(c+185,"SocTop rvcpu1 pip_fore0 j_pc", false,-1, 63,0);
        tracep->declBit(c+792,"SocTop rvcpu1 pc1 clk", false,-1);
        tracep->declBit(c+793,"SocTop rvcpu1 pc1 rst", false,-1);
        tracep->declQuad(c+821,"SocTop rvcpu1 pc1 static_pc_i", false,-1, 63,0);
        tracep->declQuad(c+327,"SocTop rvcpu1 pc1 id_pc_i", false,-1, 63,0);
        tracep->declBit(c+169,"SocTop rvcpu1 pc1 id_pc_ena", false,-1);
        tracep->declQuad(c+436,"SocTop rvcpu1 pc1 ex_pc_i", false,-1, 63,0);
        tracep->declBit(c+429,"SocTop rvcpu1 pc1 ex_pc_ena", false,-1);
        tracep->declBus(c+171,"SocTop rvcpu1 pc1 stall_ctrl", false,-1, 4,0);
        tracep->declQuad(c+369,"SocTop rvcpu1 pc1 pc", false,-1, 63,0);
        tracep->declBit(c+465,"SocTop rvcpu1 pc1 ex_pc_change", false,-1);
        tracep->declBit(c+466,"SocTop rvcpu1 pc1 id_pc_change", false,-1);
        tracep->declQuad(c+467,"SocTop rvcpu1 pc1 pc_ex", false,-1, 63,0);
        tracep->declQuad(c+469,"SocTop rvcpu1 pc1 pc_id", false,-1, 63,0);
        tracep->declBit(c+792,"SocTop rvcpu1 if_id2 clk", false,-1);
        tracep->declBit(c+793,"SocTop rvcpu1 if_id2 rst", false,-1);
        tracep->declQuad(c+369,"SocTop rvcpu1 if_id2 if_pc", false,-1, 63,0);
        tracep->declBus(c+11,"SocTop rvcpu1 if_id2 if_inst", false,-1, 31,0);
        tracep->declBit(c+429,"SocTop rvcpu1 if_id2 if_id_flush", false,-1);
        tracep->declBit(c+170,"SocTop rvcpu1 if_id2 if_id_bubble", false,-1);
        tracep->declBit(c+12,"SocTop rvcpu1 if_id2 if_inst_valid", false,-1);
        tracep->declBit(c+804,"SocTop rvcpu1 if_id2 if_inst_ready", false,-1);
        tracep->declBit(c+10,"SocTop rvcpu1 if_id2 if_inst_stall", false,-1);
        tracep->declBus(c+171,"SocTop rvcpu1 if_id2 stall_ctrl", false,-1, 4,0);
        tracep->declBit(c+174,"SocTop rvcpu1 if_id2 mem_stall_sign", false,-1);
        tracep->declBit(c+438,"SocTop rvcpu1 if_id2 ex_stall_sign", false,-1);
        tracep->declBit(c+163,"SocTop rvcpu1 if_id2 id_stall_sign", false,-1);
        tracep->declBit(c+823,"SocTop rvcpu1 if_id2 if_unstall_req", false,-1);
        tracep->declQuad(c+426,"SocTop rvcpu1 if_id2 id_pc", false,-1, 63,0);
        tracep->declBus(c+428,"SocTop rvcpu1 if_id2 id_inst", false,-1, 31,0);
        tracep->declBit(c+471,"SocTop rvcpu1 if_id2 fl_bub_temp", false,-1);
        tracep->declBit(c+793,"SocTop rvcpu1 id3 rst", false,-1);
        tracep->declBus(c+428,"SocTop rvcpu1 id3 inst_i", false,-1, 31,0);
        tracep->declQuad(c+426,"SocTop rvcpu1 id3 pc_i", false,-1, 63,0);
        tracep->declQuad(c+829,"SocTop rvcpu1 id3 op1_data_i", false,-1, 63,0);
        tracep->declQuad(c+831,"SocTop rvcpu1 id3 op2_data_i", false,-1, 63,0);
        tracep->declBus(c+159,"SocTop rvcpu1 id3 op1_addr_o", false,-1, 4,0);
        tracep->declBus(c+161,"SocTop rvcpu1 id3 op2_addr_o", false,-1, 4,0);
        tracep->declBit(c+160,"SocTop rvcpu1 id3 op1_read_o", false,-1);
        tracep->declBit(c+162,"SocTop rvcpu1 id3 op2_read_o", false,-1);
        tracep->declQuad(c+157,"SocTop rvcpu1 id3 ex_rd_data", false,-1, 63,0);
        tracep->declBus(c+430,"SocTop rvcpu1 id3 ex_rd_addr", false,-1, 4,0);
        tracep->declBit(c+431,"SocTop rvcpu1 id3 ex_rd_ena", false,-1);
        tracep->declBus(c+432,"SocTop rvcpu1 id3 ex_inst_type", false,-1, 7,0);
        tracep->declQuad(c+172,"SocTop rvcpu1 id3 mem_rd_data", false,-1, 63,0);
        tracep->declBus(c+439,"SocTop rvcpu1 id3 mem_rd_addr", false,-1, 4,0);
        tracep->declBit(c+440,"SocTop rvcpu1 id3 mem_rd_ena", false,-1);
        tracep->declBit(c+442,"SocTop rvcpu1 id3 wb_rd_ena", false,-1);
        tracep->declBus(c+441,"SocTop rvcpu1 id3 wb_rd_addr", false,-1, 4,0);
        tracep->declBit(c+163,"SocTop rvcpu1 id3 id_stall_req", false,-1);
        tracep->declBus(c+164,"SocTop rvcpu1 id3 inst_type", false,-1, 7,0);
        tracep->declBus(c+165,"SocTop rvcpu1 id3 inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+166,"SocTop rvcpu1 id3 op1_o", false,-1, 63,0);
        tracep->declQuad(c+824,"SocTop rvcpu1 id3 op2_o", false,-1, 63,0);
        tracep->declBit(c+168,"SocTop rvcpu1 id3 rd_w_ena", false,-1);
        tracep->declBus(c+325,"SocTop rvcpu1 id3 rd_w_addr", false,-1, 4,0);
        tracep->declQuad(c+826,"SocTop rvcpu1 id3 pc_o", false,-1, 63,0);
        tracep->declBus(c+835,"SocTop rvcpu1 id3 inst_o", false,-1, 31,0);
        tracep->declBus(c+326,"SocTop rvcpu1 id3 store_addr_offset", false,-1, 11,0);
        tracep->declBus(c+828,"SocTop rvcpu1 id3 mem_op_sel", false,-1, 2,0);
        tracep->declBit(c+169,"SocTop rvcpu1 id3 jalr_pc_ena", false,-1);
        tracep->declQuad(c+327,"SocTop rvcpu1 id3 jalr_pc", false,-1, 63,0);
        tracep->declBit(c+170,"SocTop rvcpu1 id3 id_flush", false,-1);
        tracep->declBus(c+472,"SocTop rvcpu1 id3 opcode", false,-1, 6,0);
        tracep->declBus(c+473,"SocTop rvcpu1 id3 rd", false,-1, 4,0);
        tracep->declBus(c+474,"SocTop rvcpu1 id3 funct3", false,-1, 2,0);
        tracep->declBus(c+187,"SocTop rvcpu1 id3 rs1", false,-1, 4,0);
        tracep->declBus(c+475,"SocTop rvcpu1 id3 imm", false,-1, 11,0);
        tracep->declBus(c+476,"SocTop rvcpu1 id3 funct7", false,-1, 6,0);
        tracep->declBus(c+477,"SocTop rvcpu1 id3 rs2", false,-1, 4,0);
        tracep->declBus(c+478,"SocTop rvcpu1 id3 u_imm", false,-1, 19,0);
        tracep->declBus(c+479,"SocTop rvcpu1 id3 s_imm", false,-1, 11,0);
        tracep->declBit(c+188,"SocTop rvcpu1 id3 inst_lui", false,-1);
        tracep->declBit(c+189,"SocTop rvcpu1 id3 inst_auipc", false,-1);
        tracep->declBit(c+190,"SocTop rvcpu1 id3 inst_jal", false,-1);
        tracep->declBit(c+191,"SocTop rvcpu1 id3 inst_jalr", false,-1);
        tracep->declBit(c+192,"SocTop rvcpu1 id3 inst_jump", false,-1);
        tracep->declBit(c+329,"SocTop rvcpu1 id3 inst_addi", false,-1);
        tracep->declBit(c+330,"SocTop rvcpu1 id3 inst_slti", false,-1);
        tracep->declBit(c+331,"SocTop rvcpu1 id3 inst_sltiu", false,-1);
        tracep->declBit(c+332,"SocTop rvcpu1 id3 inst_xori", false,-1);
        tracep->declBit(c+333,"SocTop rvcpu1 id3 inst_ori", false,-1);
        tracep->declBit(c+334,"SocTop rvcpu1 id3 inst_andi", false,-1);
        tracep->declBit(c+335,"SocTop rvcpu1 id3 inst_slli", false,-1);
        tracep->declBit(c+336,"SocTop rvcpu1 id3 inst_srli", false,-1);
        tracep->declBit(c+193,"SocTop rvcpu1 id3 inst_srai", false,-1);
        tracep->declBit(c+194,"SocTop rvcpu1 id3 inst_addiw", false,-1);
        tracep->declBit(c+195,"SocTop rvcpu1 id3 inst_slliw", false,-1);
        tracep->declBit(c+196,"SocTop rvcpu1 id3 inst_srliw", false,-1);
        tracep->declBit(c+197,"SocTop rvcpu1 id3 inst_sraiw", false,-1);
        tracep->declBit(c+198,"SocTop rvcpu1 id3 inst_add", false,-1);
        tracep->declBit(c+199,"SocTop rvcpu1 id3 inst_sub", false,-1);
        tracep->declBit(c+200,"SocTop rvcpu1 id3 inst_sll", false,-1);
        tracep->declBit(c+201,"SocTop rvcpu1 id3 inst_slt", false,-1);
        tracep->declBit(c+202,"SocTop rvcpu1 id3 inst_sltu", false,-1);
        tracep->declBit(c+203,"SocTop rvcpu1 id3 inst_xor", false,-1);
        tracep->declBit(c+204,"SocTop rvcpu1 id3 inst_srl", false,-1);
        tracep->declBit(c+205,"SocTop rvcpu1 id3 inst_sra", false,-1);
        tracep->declBit(c+206,"SocTop rvcpu1 id3 inst_or", false,-1);
        tracep->declBit(c+207,"SocTop rvcpu1 id3 inst_and", false,-1);
        tracep->declBit(c+208,"SocTop rvcpu1 id3 inst_div", false,-1);
        tracep->declBit(c+209,"SocTop rvcpu1 id3 inst_divu", false,-1);
        tracep->declBit(c+210,"SocTop rvcpu1 id3 inst_mul", false,-1);
        tracep->declBit(c+211,"SocTop rvcpu1 id3 inst_mulh", false,-1);
        tracep->declBit(c+212,"SocTop rvcpu1 id3 inst_mulhsu", false,-1);
        tracep->declBit(c+213,"SocTop rvcpu1 id3 inst_mulhu", false,-1);
        tracep->declBit(c+214,"SocTop rvcpu1 id3 inst_rem", false,-1);
        tracep->declBit(c+215,"SocTop rvcpu1 id3 inst_remu", false,-1);
        tracep->declBit(c+216,"SocTop rvcpu1 id3 inst_addw", false,-1);
        tracep->declBit(c+217,"SocTop rvcpu1 id3 inst_subw", false,-1);
        tracep->declBit(c+218,"SocTop rvcpu1 id3 inst_sllw", false,-1);
        tracep->declBit(c+219,"SocTop rvcpu1 id3 inst_srlw", false,-1);
        tracep->declBit(c+220,"SocTop rvcpu1 id3 inst_sraw", false,-1);
        tracep->declBit(c+221,"SocTop rvcpu1 id3 inst_divuw", false,-1);
        tracep->declBit(c+222,"SocTop rvcpu1 id3 inst_divw", false,-1);
        tracep->declBit(c+223,"SocTop rvcpu1 id3 inst_mulw", false,-1);
        tracep->declBit(c+224,"SocTop rvcpu1 id3 inst_remuw", false,-1);
        tracep->declBit(c+225,"SocTop rvcpu1 id3 inst_remw", false,-1);
        tracep->declBit(c+337,"SocTop rvcpu1 id3 inst_beq", false,-1);
        tracep->declBit(c+338,"SocTop rvcpu1 id3 inst_ben", false,-1);
        tracep->declBit(c+339,"SocTop rvcpu1 id3 inst_blt", false,-1);
        tracep->declBit(c+340,"SocTop rvcpu1 id3 inst_bge", false,-1);
        tracep->declBit(c+341,"SocTop rvcpu1 id3 inst_bltu", false,-1);
        tracep->declBit(c+342,"SocTop rvcpu1 id3 inst_bgeu", false,-1);
        tracep->declBit(c+226,"SocTop rvcpu1 id3 inst_csrrw", false,-1);
        tracep->declBit(c+227,"SocTop rvcpu1 id3 inst_csrrs", false,-1);
        tracep->declBit(c+228,"SocTop rvcpu1 id3 inst_csrrc", false,-1);
        tracep->declBit(c+229,"SocTop rvcpu1 id3 inst_csrrwi", false,-1);
        tracep->declBit(c+343,"SocTop rvcpu1 id3 inst_csrrsi", false,-1);
        tracep->declBit(c+344,"SocTop rvcpu1 id3 inst_csrrci", false,-1);
        tracep->declBit(c+230,"SocTop rvcpu1 id3 inst_csr_rs1", false,-1);
        tracep->declBit(c+229,"SocTop rvcpu1 id3 inst_csr_imm", false,-1);
        tracep->declBit(c+345,"SocTop rvcpu1 id3 inst_ecall", false,-1);
        tracep->declBit(c+231,"SocTop rvcpu1 id3 inst_ebreak", false,-1);
        tracep->declBit(c+346,"SocTop rvcpu1 id3 inst_mret", false,-1);
        tracep->declBit(c+841,"SocTop rvcpu1 id3 op1_loda_relate", false,-1);
        tracep->declBit(c+842,"SocTop rvcpu1 id3 op2_loda_relate", false,-1);
        tracep->declBit(c+232,"SocTop rvcpu1 id3 ex_op1", false,-1);
        tracep->declBit(c+233,"SocTop rvcpu1 id3 mem_op1", false,-1);
        tracep->declBit(c+347,"SocTop rvcpu1 id3 ex_op2", false,-1);
        tracep->declBit(c+348,"SocTop rvcpu1 id3 mem_op2", false,-1);
        tracep->declBit(c+349,"SocTop rvcpu1 id3 wb_op1", false,-1);
        tracep->declQuad(c+350,"SocTop rvcpu1 id3 jalr_pc_temp", false,-1, 63,0);
        tracep->declBit(c+352,"SocTop rvcpu1 id3 predict_success", false,-1);
        tracep->declBit(c+792,"SocTop rvcpu1 id_ex4 clk", false,-1);
        tracep->declBit(c+793,"SocTop rvcpu1 id_ex4 rst", false,-1);
        tracep->declBit(c+429,"SocTop rvcpu1 id_ex4 id_ex_bubble", false,-1);
        tracep->declBus(c+171,"SocTop rvcpu1 id_ex4 stall_ctrl", false,-1, 4,0);
        tracep->declBus(c+835,"SocTop rvcpu1 id_ex4 id_inst", false,-1, 31,0);
        tracep->declQuad(c+826,"SocTop rvcpu1 id_ex4 id_pc", false,-1, 63,0);
        tracep->declBus(c+164,"SocTop rvcpu1 id_ex4 id_inst_type", false,-1, 7,0);
        tracep->declBus(c+165,"SocTop rvcpu1 id_ex4 id_inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+166,"SocTop rvcpu1 id_ex4 id_op1", false,-1, 63,0);
        tracep->declQuad(c+824,"SocTop rvcpu1 id_ex4 id_op2", false,-1, 63,0);
        tracep->declBit(c+168,"SocTop rvcpu1 id_ex4 id_rd_ena", false,-1);
        tracep->declBus(c+325,"SocTop rvcpu1 id_ex4 id_rd_addr", false,-1, 4,0);
        tracep->declBus(c+326,"SocTop rvcpu1 id_ex4 id_addr_offset", false,-1, 11,0);
        tracep->declBus(c+828,"SocTop rvcpu1 id_ex4 id_ls_sel", false,-1, 2,0);
        tracep->declBus(c+463,"SocTop rvcpu1 id_ex4 ex_inst", false,-1, 31,0);
        tracep->declQuad(c+445,"SocTop rvcpu1 id_ex4 ex_pc", false,-1, 63,0);
        tracep->declBus(c+447,"SocTop rvcpu1 id_ex4 ex_inst_type", false,-1, 7,0);
        tracep->declBus(c+448,"SocTop rvcpu1 id_ex4 ex_inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+449,"SocTop rvcpu1 id_ex4 ex_op1", false,-1, 63,0);
        tracep->declQuad(c+451,"SocTop rvcpu1 id_ex4 ex_op2", false,-1, 63,0);
        tracep->declBit(c+453,"SocTop rvcpu1 id_ex4 ex_rd_ena", false,-1);
        tracep->declBus(c+430,"SocTop rvcpu1 id_ex4 ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+454,"SocTop rvcpu1 id_ex4 ex_addr_offset", false,-1, 11,0);
        tracep->declBus(c+433,"SocTop rvcpu1 id_ex4 ex_ls_sel", false,-1, 2,0);
        tracep->declBit(c+792,"SocTop rvcpu1 ex5 clk", false,-1);
        tracep->declBit(c+793,"SocTop rvcpu1 ex5 rst", false,-1);
        tracep->declQuad(c+445,"SocTop rvcpu1 ex5 pc_i", false,-1, 63,0);
        tracep->declBus(c+463,"SocTop rvcpu1 ex5 id_ex_inst", false,-1, 31,0);
        tracep->declBus(c+447,"SocTop rvcpu1 ex5 inst_type_i", false,-1, 7,0);
        tracep->declBus(c+448,"SocTop rvcpu1 ex5 inst_opcode_i", false,-1, 7,0);
        tracep->declQuad(c+449,"SocTop rvcpu1 ex5 op1_i", false,-1, 63,0);
        tracep->declQuad(c+451,"SocTop rvcpu1 ex5 op2_i", false,-1, 63,0);
        tracep->declBit(c+453,"SocTop rvcpu1 ex5 rd_ena_i", false,-1);
        tracep->declBus(c+430,"SocTop rvcpu1 ex5 rd_addr_i", false,-1, 4,0);
        tracep->declBus(c+433,"SocTop rvcpu1 ex5 ls_sel_i", false,-1, 2,0);
        tracep->declBus(c+454,"SocTop rvcpu1 ex5 addr_offsel_i", false,-1, 11,0);
        tracep->declBus(c+432,"SocTop rvcpu1 ex5 inst_type_o", false,-1, 7,0);
        tracep->declBit(c+431,"SocTop rvcpu1 ex5 rd_ena_o", false,-1);
        tracep->declBus(c+430,"SocTop rvcpu1 ex5 rd_addr_o", false,-1, 4,0);
        tracep->declQuad(c+157,"SocTop rvcpu1 ex5 rd_data_o", false,-1, 63,0);
        tracep->declQuad(c+833,"SocTop rvcpu1 ex5 ex_pc_o", false,-1, 63,0);
        tracep->declBus(c+836,"SocTop rvcpu1 ex5 ex_inst_o", false,-1, 31,0);
        tracep->declBus(c+433,"SocTop rvcpu1 ex5 ls_sel_o", false,-1, 2,0);
        tracep->declQuad(c+434,"SocTop rvcpu1 ex5 ls_addr_o", false,-1, 63,0);
        tracep->declBit(c+429,"SocTop rvcpu1 ex5 ex_flush", false,-1);
        tracep->declBit(c+429,"SocTop rvcpu1 ex5 branch_pc_ena", false,-1);
        tracep->declQuad(c+436,"SocTop rvcpu1 ex5 branch_pc", false,-1, 63,0);
        tracep->declBit(c+438,"SocTop rvcpu1 ex5 ex_stall_req", false,-1);
        tracep->declBit(c+381,"SocTop rvcpu1 ex5 timer_intr", false,-1);
        tracep->declBit(c+234,"SocTop rvcpu1 ex5 ex_stall", false,-1);
        tracep->declQuad(c+235,"SocTop rvcpu1 ex5 exe_res", false,-1, 63,0);
        tracep->declQuad(c+480,"SocTop rvcpu1 ex5 op2_i_mux", false,-1, 63,0);
        tracep->declQuad(c+482,"SocTop rvcpu1 ex5 op1_sub_op2", false,-1, 63,0);
        tracep->declQuad(c+484,"SocTop rvcpu1 ex5 op1_add_op2", false,-1, 63,0);
        tracep->declQuad(c+486,"SocTop rvcpu1 ex5 op1_addw_op2", false,-1, 63,0);
        tracep->declBit(c+488,"SocTop rvcpu1 ex5 op1_ls_op2", false,-1);
        tracep->declQuad(c+489,"SocTop rvcpu1 ex5 shift_res", false,-1, 63,0);
        tracep->declBus(c+491,"SocTop rvcpu1 ex5 op1_sllw_op2", false,-1, 31,0);
        tracep->declQuad(c+492,"SocTop rvcpu1 ex5 sllw_res", false,-1, 63,0);
        tracep->declBus(c+494,"SocTop rvcpu1 ex5 op1_srlw_op2", false,-1, 31,0);
        tracep->declQuad(c+495,"SocTop rvcpu1 ex5 srlw_res", false,-1, 63,0);
        tracep->declBus(c+497,"SocTop rvcpu1 ex5 op1_sraw_op2", false,-1, 31,0);
        tracep->declQuad(c+498,"SocTop rvcpu1 ex5 sraw_res", false,-1, 63,0);
        tracep->declBus(c+500,"SocTop rvcpu1 ex5 op1_subw_op2", false,-1, 31,0);
        tracep->declQuad(c+501,"SocTop rvcpu1 ex5 subw_res", false,-1, 63,0);
        tracep->declQuad(c+503,"SocTop rvcpu1 ex5 upper_imm", false,-1, 63,0);
        tracep->declBit(c+792,"SocTop rvcpu1 ex5 clk_in", false,-1);
        tracep->declQuad(c+505,"SocTop rvcpu1 ex5 mul_data", false,-1, 63,0);
        tracep->declBit(c+507,"SocTop rvcpu1 ex5 mul_finish_sign", false,-1);
        tracep->declBit(c+508,"SocTop rvcpu1 ex5 mul_ready", false,-1);
        tracep->declQuad(c+509,"SocTop rvcpu1 ex5 divrem_data", false,-1, 63,0);
        tracep->declBit(c+511,"SocTop rvcpu1 ex5 dr_finish_sign", false,-1);
        tracep->declBit(c+512,"SocTop rvcpu1 ex5 dr_ready", false,-1);
        tracep->declQuad(c+513,"SocTop rvcpu1 ex5 op1_divdata", false,-1, 63,0);
        tracep->declQuad(c+515,"SocTop rvcpu1 ex5 op2_divdata", false,-1, 63,0);
        tracep->declBit(c+438,"SocTop rvcpu1 ex5 mul_div_req", false,-1);
        tracep->declBit(c+517,"SocTop rvcpu1 ex5 ex_flush_branch", false,-1);
        tracep->declBit(c+518,"SocTop rvcpu1 ex5 tmr_trap_ena", false,-1);
        tracep->declBus(c+519,"SocTop rvcpu1 ex5 csr_idx", false,-1, 11,0);
        tracep->declQuad(c+520,"SocTop rvcpu1 ex5 read_csr_data", false,-1, 63,0);
        tracep->declBit(c+522,"SocTop rvcpu1 ex5 trap_ena", false,-1);
        tracep->declBit(c+523,"SocTop rvcpu1 ex5 ecall_trap_ena", false,-1);
        tracep->declBit(c+524,"SocTop rvcpu1 ex5 cmt_mret_ena", false,-1);
        tracep->declBit(c+525,"SocTop rvcpu1 ex5 csr_wr_en", false,-1);
        tracep->declBit(c+526,"SocTop rvcpu1 ex5 csr_rd_en", false,-1);
        tracep->declQuad(c+527,"SocTop rvcpu1 ex5 wbck_csr_data", false,-1, 63,0);
        tracep->declQuad(c+529,"SocTop rvcpu1 ex5 trap_mcause_value", false,-1, 63,0);
        tracep->declQuad(c+531,"SocTop rvcpu1 ex5 mask_set_res", false,-1, 63,0);
        tracep->declQuad(c+533,"SocTop rvcpu1 ex5 mask_clear_res", false,-1, 63,0);
        tracep->declBit(c+792,"SocTop rvcpu1 ex5 multiplier1 clk", false,-1);
        tracep->declBit(c+793,"SocTop rvcpu1 ex5 multiplier1 rst", false,-1);
        tracep->declBit(c+508,"SocTop rvcpu1 ex5 multiplier1 mult_ready", false,-1);
        tracep->declBus(c+448,"SocTop rvcpu1 ex5 multiplier1 inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+449,"SocTop rvcpu1 ex5 multiplier1 mult_op1", false,-1, 63,0);
        tracep->declQuad(c+451,"SocTop rvcpu1 ex5 multiplier1 mult_op2", false,-1, 63,0);
        tracep->declQuad(c+505,"SocTop rvcpu1 ex5 multiplier1 product_val", false,-1, 63,0);
        tracep->declBit(c+507,"SocTop rvcpu1 ex5 multiplier1 mult_finish", false,-1);
        tracep->declBit(c+535,"SocTop rvcpu1 ex5 multiplier1 mult_valid", false,-1);
        tracep->declBit(c+536,"SocTop rvcpu1 ex5 multiplier1 op1_signbit", false,-1);
        tracep->declBit(c+537,"SocTop rvcpu1 ex5 multiplier1 op2_signbit", false,-1);
        tracep->declQuad(c+538,"SocTop rvcpu1 ex5 multiplier1 op1_absolute", false,-1, 63,0);
        tracep->declQuad(c+540,"SocTop rvcpu1 ex5 multiplier1 op2_absolute", false,-1, 63,0);
        tracep->declArray(c+542,"SocTop rvcpu1 ex5 multiplier1 multiplcand", false,-1, 127,0);
        tracep->declQuad(c+546,"SocTop rvcpu1 ex5 multiplier1 multipler", false,-1, 63,0);
        tracep->declArray(c+548,"SocTop rvcpu1 ex5 multiplier1 product_lins", false,-1, 127,0);
        tracep->declArray(c+552,"SocTop rvcpu1 ex5 multiplier1 product_temp", false,-1, 127,0);
        tracep->declBit(c+556,"SocTop rvcpu1 ex5 multiplier1 product_signbit", false,-1);
        tracep->declBit(c+792,"SocTop rvcpu1 ex5 divider2 clk", false,-1);
        tracep->declBit(c+793,"SocTop rvcpu1 ex5 divider2 rst", false,-1);
        tracep->declQuad(c+513,"SocTop rvcpu1 ex5 divider2 divisor", false,-1, 63,0);
        tracep->declQuad(c+515,"SocTop rvcpu1 ex5 divider2 dividend", false,-1, 63,0);
        tracep->declBus(c+448,"SocTop rvcpu1 ex5 divider2 inst_opcode", false,-1, 7,0);
        tracep->declBit(c+512,"SocTop rvcpu1 ex5 divider2 div_ready", false,-1);
        tracep->declQuad(c+509,"SocTop rvcpu1 ex5 divider2 div_rem_data", false,-1, 63,0);
        tracep->declBit(c+511,"SocTop rvcpu1 ex5 divider2 div_finish", false,-1);
        tracep->declBit(c+511,"SocTop rvcpu1 ex5 divider2 finish_sign", false,-1);
        tracep->declBit(c+557,"SocTop rvcpu1 ex5 divider2 op1_signbit", false,-1);
        tracep->declBit(c+558,"SocTop rvcpu1 ex5 divider2 op2_signbit", false,-1);
        tracep->declQuad(c+559,"SocTop rvcpu1 ex5 divider2 op1_absolute", false,-1, 63,0);
        tracep->declQuad(c+561,"SocTop rvcpu1 ex5 divider2 op2_absolute", false,-1, 63,0);
        tracep->declBit(c+563,"SocTop rvcpu1 ex5 divider2 div_rem_signbit", false,-1);
        tracep->declBus(c+564,"SocTop rvcpu1 ex5 divider2 counter", false,-1, 7,0);
        tracep->declArray(c+565,"SocTop rvcpu1 ex5 divider2 temp_a", false,-1, 127,0);
        tracep->declArray(c+569,"SocTop rvcpu1 ex5 divider2 temp_b", false,-1, 127,0);
        tracep->declQuad(c+573,"SocTop rvcpu1 ex5 divider2 fan_data", false,-1, 63,0);
        tracep->declBit(c+792,"SocTop rvcpu1 ex5 csr0 clk", false,-1);
        tracep->declBit(c+793,"SocTop rvcpu1 ex5 csr0 rst", false,-1);
        tracep->declQuad(c+445,"SocTop rvcpu1 ex5 csr0 pc_i", false,-1, 63,0);
        tracep->declBit(c+525,"SocTop rvcpu1 ex5 csr0 csr_wr_en", false,-1);
        tracep->declBit(c+526,"SocTop rvcpu1 ex5 csr0 csr_rd_en", false,-1);
        tracep->declBus(c+519,"SocTop rvcpu1 ex5 csr0 csr_idx", false,-1, 11,0);
        tracep->declBit(c+524,"SocTop rvcpu1 ex5 csr0 cmt_mret_ena", false,-1);
        tracep->declBit(c+523,"SocTop rvcpu1 ex5 csr0 ecall_trap_ena", false,-1);
        tracep->declQuad(c+529,"SocTop rvcpu1 ex5 csr0 trap_mcause_value", false,-1, 63,0);
        tracep->declBit(c+381,"SocTop rvcpu1 ex5 csr0 tmr_intr_ena", false,-1);
        tracep->declBit(c+518,"SocTop rvcpu1 ex5 csr0 tmr_trap_ena", false,-1);
        tracep->declQuad(c+520,"SocTop rvcpu1 ex5 csr0 read_csr_data", false,-1, 63,0);
        tracep->declQuad(c+527,"SocTop rvcpu1 ex5 csr0 wbck_csr_data", false,-1, 63,0);
        tracep->declBit(c+234,"SocTop rvcpu1 ex5 csr0 ex_stall", false,-1);
        tracep->declBit(c+575,"SocTop rvcpu1 ex5 csr0 sel_mcycle", false,-1);
        tracep->declBit(c+576,"SocTop rvcpu1 ex5 csr0 rd_mcycle", false,-1);
        tracep->declBit(c+577,"SocTop rvcpu1 ex5 csr0 wr_mcycle", false,-1);
        tracep->declQuad(c+578,"SocTop rvcpu1 ex5 csr0 csr_mcycle", false,-1, 63,0);
        tracep->declBit(c+580,"SocTop rvcpu1 ex5 csr0 sel_mstatus", false,-1);
        tracep->declBit(c+581,"SocTop rvcpu1 ex5 csr0 rd_mstatus", false,-1);
        tracep->declBit(c+582,"SocTop rvcpu1 ex5 csr0 wr_mstatus", false,-1);
        tracep->declBit(c+583,"SocTop rvcpu1 ex5 csr0 mstatus_mpie_ena", false,-1);
        tracep->declBit(c+584,"SocTop rvcpu1 ex5 csr0 mstatus_mpie_nxt", false,-1);
        tracep->declBit(c+585,"SocTop rvcpu1 ex5 csr0 csr_mstatus_mpie", false,-1);
        tracep->declBit(c+583,"SocTop rvcpu1 ex5 csr0 mstatus_mie_ena", false,-1);
        tracep->declBit(c+586,"SocTop rvcpu1 ex5 csr0 mstatus_mie_nxt", false,-1);
        tracep->declBit(c+587,"SocTop rvcpu1 ex5 csr0 csr_mstatus_mie", false,-1);
        tracep->declBit(c+583,"SocTop rvcpu1 ex5 csr0 mstatus_mpp_ena", false,-1);
        tracep->declBus(c+588,"SocTop rvcpu1 ex5 csr0 mstatus_mpp_nxt", false,-1, 1,0);
        tracep->declBus(c+589,"SocTop rvcpu1 ex5 csr0 csr_mstatus_mpp", false,-1, 1,0);
        tracep->declBus(c+854,"SocTop rvcpu1 ex5 csr0 csr_mstatus_xs", false,-1, 1,0);
        tracep->declBus(c+590,"SocTop rvcpu1 ex5 csr0 csr_mstatus_fs", false,-1, 1,0);
        tracep->declBit(c+591,"SocTop rvcpu1 ex5 csr0 csr_mstatus_sd", false,-1);
        tracep->declQuad(c+592,"SocTop rvcpu1 ex5 csr0 csr_mstatus", false,-1, 63,0);
        tracep->declBit(c+594,"SocTop rvcpu1 ex5 csr0 sel_mtvec", false,-1);
        tracep->declBit(c+595,"SocTop rvcpu1 ex5 csr0 rd_mtvec", false,-1);
        tracep->declBit(c+596,"SocTop rvcpu1 ex5 csr0 wr_mtvec", false,-1);
        tracep->declQuad(c+597,"SocTop rvcpu1 ex5 csr0 csr_mtvec_base", false,-1, 63,2);
        tracep->declBus(c+854,"SocTop rvcpu1 ex5 csr0 csr_mtvec_mode", false,-1, 1,0);
        tracep->declQuad(c+599,"SocTop rvcpu1 ex5 csr0 csr_mtvec", false,-1, 63,0);
        tracep->declBit(c+601,"SocTop rvcpu1 ex5 csr0 sel_mepc", false,-1);
        tracep->declBit(c+602,"SocTop rvcpu1 ex5 csr0 rd_mepc", false,-1);
        tracep->declBit(c+603,"SocTop rvcpu1 ex5 csr0 wr_mepc", false,-1);
        tracep->declQuad(c+604,"SocTop rvcpu1 ex5 csr0 csr_mepc", false,-1, 63,0);
        tracep->declBit(c+606,"SocTop rvcpu1 ex5 csr0 sel_mcause", false,-1);
        tracep->declBit(c+607,"SocTop rvcpu1 ex5 csr0 rd_mcause", false,-1);
        tracep->declBit(c+608,"SocTop rvcpu1 ex5 csr0 wr_mcause", false,-1);
        tracep->declBit(c+609,"SocTop rvcpu1 ex5 csr0 csr_mcause_ena", false,-1);
        tracep->declQuad(c+610,"SocTop rvcpu1 ex5 csr0 csr_mcause_nxt", false,-1, 63,0);
        tracep->declQuad(c+612,"SocTop rvcpu1 ex5 csr0 csr_mcause", false,-1, 63,0);
        tracep->declBit(c+614,"SocTop rvcpu1 ex5 csr0 sle_mie", false,-1);
        tracep->declBit(c+615,"SocTop rvcpu1 ex5 csr0 rd_mie", false,-1);
        tracep->declBit(c+616,"SocTop rvcpu1 ex5 csr0 wr_mie", false,-1);
        tracep->declBit(c+617,"SocTop rvcpu1 ex5 csr0 csr_mie_mtie", false,-1);
        tracep->declQuad(c+618,"SocTop rvcpu1 ex5 csr0 csr_mie", false,-1, 63,0);
        tracep->declBit(c+620,"SocTop rvcpu1 ex5 csr0 sel_mip", false,-1);
        tracep->declBit(c+621,"SocTop rvcpu1 ex5 csr0 rd_mip", false,-1);
        tracep->declBit(c+622,"SocTop rvcpu1 ex5 csr0 csr_mip_mtip", false,-1);
        tracep->declQuad(c+623,"SocTop rvcpu1 ex5 csr0 csr_mip", false,-1, 63,0);
        tracep->declBit(c+625,"SocTop rvcpu1 ex5 csr0 sel_mscratch", false,-1);
        tracep->declBit(c+626,"SocTop rvcpu1 ex5 csr0 rd_mscrstch", false,-1);
        tracep->declBit(c+627,"SocTop rvcpu1 ex5 csr0 wr_mscrstch", false,-1);
        tracep->declQuad(c+628,"SocTop rvcpu1 ex5 csr0 csr_mscrstch", false,-1, 63,0);
        tracep->declBit(c+792,"SocTop rvcpu1 ex_mem6 clk", false,-1);
        tracep->declBit(c+793,"SocTop rvcpu1 ex_mem6 rst", false,-1);
        tracep->declQuad(c+833,"SocTop rvcpu1 ex_mem6 ex_mem_pc_i", false,-1, 63,0);
        tracep->declBus(c+836,"SocTop rvcpu1 ex_mem6 ex_mem_inst_i", false,-1, 31,0);
        tracep->declBus(c+171,"SocTop rvcpu1 ex_mem6 stall_ctrl", false,-1, 4,0);
        tracep->declBus(c+432,"SocTop rvcpu1 ex_mem6 ex_inst_type", false,-1, 7,0);
        tracep->declBit(c+431,"SocTop rvcpu1 ex_mem6 ex_rd_ena", false,-1);
        tracep->declQuad(c+157,"SocTop rvcpu1 ex_mem6 ex_rd_data", false,-1, 63,0);
        tracep->declBus(c+430,"SocTop rvcpu1 ex_mem6 ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+433,"SocTop rvcpu1 ex_mem6 ex_ls_sel", false,-1, 2,0);
        tracep->declQuad(c+434,"SocTop rvcpu1 ex_mem6 ex_ls_addr", false,-1, 63,0);
        tracep->declBus(c+455,"SocTop rvcpu1 ex_mem6 mem_inst_type", false,-1, 7,0);
        tracep->declBit(c+440,"SocTop rvcpu1 ex_mem6 mem_rd_ena", false,-1);
        tracep->declQuad(c+456,"SocTop rvcpu1 ex_mem6 mem_rd_data", false,-1, 63,0);
        tracep->declBus(c+439,"SocTop rvcpu1 ex_mem6 mem_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+461,"SocTop rvcpu1 ex_mem6 ex_mem_pc_o", false,-1, 63,0);
        tracep->declBus(c+464,"SocTop rvcpu1 ex_mem6 ex_mem_inst_o", false,-1, 31,0);
        tracep->declBus(c+458,"SocTop rvcpu1 ex_mem6 mem_ls_sel", false,-1, 2,0);
        tracep->declQuad(c+459,"SocTop rvcpu1 ex_mem6 mem_ls_addr", false,-1, 63,0);
        tracep->declBit(c+793,"SocTop rvcpu1 mem7 rst", false,-1);
        tracep->declBus(c+455,"SocTop rvcpu1 mem7 inst_type_i", false,-1, 7,0);
        tracep->declBit(c+440,"SocTop rvcpu1 mem7 rd_ena_i", false,-1);
        tracep->declQuad(c+456,"SocTop rvcpu1 mem7 rd_data_i", false,-1, 63,0);
        tracep->declBus(c+439,"SocTop rvcpu1 mem7 rd_addr_i", false,-1, 4,0);
        tracep->declQuad(c+461,"SocTop rvcpu1 mem7 mem_pc_i", false,-1, 63,0);
        tracep->declBus(c+464,"SocTop rvcpu1 mem7 mem_inst_i", false,-1, 31,0);
        tracep->declQuad(c+459,"SocTop rvcpu1 mem7 ls_addr_i", false,-1, 63,0);
        tracep->declBus(c+458,"SocTop rvcpu1 mem7 ls_sel_i", false,-1, 2,0);
        tracep->declQuad(c+3,"SocTop rvcpu1 mem7 data_addr_o", false,-1, 63,0);
        tracep->declBus(c+5,"SocTop rvcpu1 mem7 wmask_o", false,-1, 7,0);
        tracep->declQuad(c+13,"SocTop rvcpu1 mem7 data_i", false,-1, 63,0);
        tracep->declQuad(c+6,"SocTop rvcpu1 mem7 data_o", false,-1, 63,0);
        tracep->declBit(c+8,"SocTop rvcpu1 mem7 we", false,-1);
        tracep->declBit(c+9,"SocTop rvcpu1 mem7 re", false,-1);
        tracep->declBit(c+317,"SocTop rvcpu1 mem7 mem_finish", false,-1);
        tracep->declBit(c+440,"SocTop rvcpu1 mem7 rd_ena_o", false,-1);
        tracep->declQuad(c+172,"SocTop rvcpu1 mem7 rd_data_o", false,-1, 63,0);
        tracep->declBus(c+439,"SocTop rvcpu1 mem7 rd_addr_o", false,-1, 4,0);
        tracep->declQuad(c+175,"SocTop rvcpu1 mem7 mem_pc_o", false,-1, 63,0);
        tracep->declBus(c+177,"SocTop rvcpu1 mem7 mem_inst_o", false,-1, 31,0);
        tracep->declBit(c+174,"SocTop rvcpu1 mem7 mem_stall_req", false,-1);
        tracep->declQuad(c+353,"SocTop rvcpu1 mem7 load_data", false,-1, 63,0);
        tracep->declBus(c+630,"SocTop rvcpu1 mem7 byte_sel", false,-1, 2,0);
        tracep->declBus(c+631,"SocTop rvcpu1 mem7 half_byte_sel", false,-1, 1,0);
        tracep->declBit(c+632,"SocTop rvcpu1 mem7 word_sel", false,-1);
        tracep->declBus(c+237,"SocTop rvcpu1 mem7 data_byte", false,-1, 7,0);
        tracep->declBus(c+238,"SocTop rvcpu1 mem7 data_half_byte", false,-1, 15,0);
        tracep->declBus(c+239,"SocTop rvcpu1 mem7 data_word", false,-1, 31,0);
        tracep->declQuad(c+240,"SocTop rvcpu1 mem7 store_data", false,-1, 63,0);
        tracep->declBus(c+242,"SocTop rvcpu1 mem7 store_mask", false,-1, 7,0);
        tracep->declQuad(c+843,"SocTop rvcpu1 mem7 sb_data", false,-1, 63,0);
        tracep->declQuad(c+845,"SocTop rvcpu1 mem7 sh_data", false,-1, 63,0);
        tracep->declQuad(c+847,"SocTop rvcpu1 mem7 sw_data", false,-1, 63,0);
        tracep->declBus(c+849,"SocTop rvcpu1 mem7 sb_mask", false,-1, 7,0);
        tracep->declBus(c+850,"SocTop rvcpu1 mem7 sh_mask", false,-1, 7,0);
        tracep->declBus(c+851,"SocTop rvcpu1 mem7 sw_mask", false,-1, 7,0);
        tracep->declBit(c+792,"SocTop rvcpu1 mem_wb8 clk", false,-1);
        tracep->declBit(c+793,"SocTop rvcpu1 mem_wb8 rst", false,-1);
        tracep->declQuad(c+175,"SocTop rvcpu1 mem_wb8 wb_pc_i", false,-1, 63,0);
        tracep->declBus(c+177,"SocTop rvcpu1 mem_wb8 wb_inst_i", false,-1, 31,0);
        tracep->declBus(c+171,"SocTop rvcpu1 mem_wb8 stall_ctrl", false,-1, 4,0);
        tracep->declQuad(c+172,"SocTop rvcpu1 mem_wb8 mem_rd_data", false,-1, 63,0);
        tracep->declBus(c+439,"SocTop rvcpu1 mem_wb8 mem_rd_addr", false,-1, 4,0);
        tracep->declBit(c+440,"SocTop rvcpu1 mem_wb8 mem_rd_ena", false,-1);
        tracep->declQuad(c+443,"SocTop rvcpu1 mem_wb8 wb_rd_data", false,-1, 63,0);
        tracep->declBus(c+441,"SocTop rvcpu1 mem_wb8 wb_rd_addr", false,-1, 4,0);
        tracep->declBit(c+442,"SocTop rvcpu1 mem_wb8 wb_rd_ena", false,-1);
        tracep->declQuad(c+633,"SocTop rvcpu1 mem_wb8 wb_pc_o", false,-1, 63,0);
        tracep->declBus(c+635,"SocTop rvcpu1 mem_wb8 wb_inst_o", false,-1, 31,0);
        tracep->declQuad(c+636,"SocTop rvcpu1 mem_wb8 pc_data1", false,-1, 63,0);
        tracep->declBit(c+638,"SocTop rvcpu1 mem_wb8 difftest_exyn", false,-1);
        tracep->declBit(c+639,"SocTop rvcpu1 mem_wb8 teap_yn", false,-1);
        tracep->declQuad(c+640,"SocTop rvcpu1 mem_wb8 trap_code", false,-1, 63,0);
        tracep->declBit(c+793,"SocTop rvcpu1 ctrl9 rst", false,-1);
        tracep->declBit(c+823,"SocTop rvcpu1 ctrl9 if_stall_req", false,-1);
        tracep->declBit(c+163,"SocTop rvcpu1 ctrl9 id_stall_req", false,-1);
        tracep->declBit(c+438,"SocTop rvcpu1 ctrl9 ex_stall_req", false,-1);
        tracep->declBit(c+174,"SocTop rvcpu1 ctrl9 mem_stall_req", false,-1);
        tracep->declBus(c+171,"SocTop rvcpu1 ctrl9 stall_ctrl", false,-1, 4,0);
        tracep->declBit(c+792,"SocTop rvcpu1 regfile10 clk", false,-1);
        tracep->declBit(c+793,"SocTop rvcpu1 regfile10 rst", false,-1);
        tracep->declBus(c+441,"SocTop rvcpu1 regfile10 waddr", false,-1, 4,0);
        tracep->declQuad(c+443,"SocTop rvcpu1 regfile10 wdata", false,-1, 63,0);
        tracep->declBit(c+442,"SocTop rvcpu1 regfile10 we", false,-1);
        tracep->declBus(c+159,"SocTop rvcpu1 regfile10 raddr1", false,-1, 4,0);
        tracep->declQuad(c+829,"SocTop rvcpu1 regfile10 rdata1", false,-1, 63,0);
        tracep->declBit(c+160,"SocTop rvcpu1 regfile10 re1", false,-1);
        tracep->declBus(c+161,"SocTop rvcpu1 regfile10 raddr2", false,-1, 4,0);
        tracep->declQuad(c+831,"SocTop rvcpu1 regfile10 rdata2", false,-1, 63,0);
        tracep->declBit(c+162,"SocTop rvcpu1 regfile10 re2", false,-1);
        tracep->declBit(c+820,"SocTop rvcpu1 regfile10 x1_read_ena", false,-1);
        tracep->declQuad(c+818,"SocTop rvcpu1 regfile10 x1_data", false,-1, 63,0);
        tracep->declBus(c+156,"SocTop rvcpu1 regfile10 x1_addr", false,-1, 4,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+642+i*2,"SocTop rvcpu1 regfile10 regs", true,(i+0), 63,0);}}
        tracep->declBus(c+706,"SocTop rvcpu1 regfile10 i", false,-1, 31,0);
        tracep->declBit(c+792,"SocTop i_cache2 clk", false,-1);
        tracep->declBit(c+793,"SocTop i_cache2 rst", false,-1);
        tracep->declQuad(c+369,"SocTop i_cache2 inst_addr", false,-1, 63,0);
        tracep->declBit(c+804,"SocTop i_cache2 inst_ready", false,-1);
        tracep->declBit(c+10,"SocTop i_cache2 core_stall", false,-1);
        tracep->declBus(c+11,"SocTop i_cache2 inst_data", false,-1, 31,0);
        tracep->declBit(c+12,"SocTop i_cache2 inst_valid", false,-1);
        tracep->declBit(c+371,"SocTop i_cache2 cache_read_ena", false,-1);
        tracep->declBit(c+374,"SocTop i_cache2 cache_read_resp", false,-1);
        tracep->declQuad(c+372,"SocTop i_cache2 cache_addr", false,-1, 63,0);
        tracep->declQuad(c+378,"SocTop i_cache2 cache_in_data", false,-1, 63,0);
        tracep->declBit(c+380,"SocTop i_cache2 cache_in_valid", false,-1);
        tracep->declBit(c+243,"SocTop i_cache2 icache_if_shankhand", false,-1);
        tracep->declQuad(c+707,"SocTop i_cache2 icache_tag", false,-1, 54,0);
        tracep->declBus(c+709,"SocTop i_cache2 icache_index", false,-1, 5,0);
        tracep->declBus(c+710,"SocTop i_cache2 state_inst", false,-1, 5,0);
        tracep->declBus(c+244,"SocTop i_cache2 state_inst_nxt", false,-1, 5,0);
        tracep->declBit(c+711,"SocTop i_cache2 read_ok_", false,-1);
        tracep->declBit(c+712,"SocTop i_cache2 read_ok", false,-1);
        tracep->declBit(c+245,"SocTop i_cache2 inst_hit_ok", false,-1);
        tracep->declQuad(c+713,"SocTop i_cache2 miss_data", false,-1, 63,0);
        tracep->declBit(c+715,"SocTop i_cache2 miss_ena_o", false,-1);
        tracep->declBit(c+716,"SocTop i_cache2 miss_ena_t", false,-1);
        tracep->declBit(c+717,"SocTop i_cache2 write_i_ok", false,-1);
        tracep->declQuad(c+718,"SocTop i_cache2 i_tag_data1", false,-1, 54,0);
        tracep->declBit(c+720,"SocTop i_cache2 i_tag_user1", false,-1);
        tracep->declQuad(c+721,"SocTop i_cache2 i_tag_data2", false,-1, 54,0);
        tracep->declBit(c+723,"SocTop i_cache2 i_tag_user2", false,-1);
        tracep->declQuad(c+724,"SocTop i_cache2 inst_out_1", false,-1, 63,0);
        tracep->declQuad(c+726,"SocTop i_cache2 inst_out_2", false,-1, 63,0);
        tracep->declBus(c+728,"SocTop i_cache2 i", false,-1, 31,0);
        tracep->declBit(c+792,"SocTop i_cache2 u_tag01 clk", false,-1);
        tracep->declBus(c+709,"SocTop i_cache2 u_tag01 addr_i", false,-1, 5,0);
        tracep->declQuad(c+729,"SocTop i_cache2 u_tag01 data_i", false,-1, 55,0);
        tracep->declBit(c+715,"SocTop i_cache2 u_tag01 write_ena", false,-1);
        tracep->declQuad(c+718,"SocTop i_cache2 u_tag01 tag_data", false,-1, 54,0);
        tracep->declBit(c+720,"SocTop i_cache2 u_tag01 tag_valid", false,-1);
        tracep->declQuad(c+718,"SocTop i_cache2 u_tag01 out_data", false,-1, 54,0);
        tracep->declBit(c+720,"SocTop i_cache2 u_tag01 out_vaild", false,-1);
        tracep->declBit(c+792,"SocTop i_cache2 u_tag02 clk", false,-1);
        tracep->declBus(c+709,"SocTop i_cache2 u_tag02 addr_i", false,-1, 5,0);
        tracep->declQuad(c+729,"SocTop i_cache2 u_tag02 data_i", false,-1, 55,0);
        tracep->declBit(c+716,"SocTop i_cache2 u_tag02 write_ena", false,-1);
        tracep->declQuad(c+721,"SocTop i_cache2 u_tag02 tag_data", false,-1, 54,0);
        tracep->declBit(c+723,"SocTop i_cache2 u_tag02 tag_valid", false,-1);
        tracep->declQuad(c+721,"SocTop i_cache2 u_tag02 out_data", false,-1, 54,0);
        tracep->declBit(c+723,"SocTop i_cache2 u_tag02 out_vaild", false,-1);
        tracep->declBit(c+792,"SocTop i_cache2 u_data01 clk", false,-1);
        tracep->declBus(c+709,"SocTop i_cache2 u_data01 addr_i", false,-1, 5,0);
        tracep->declQuad(c+713,"SocTop i_cache2 u_data01 data_i", false,-1, 63,0);
        tracep->declBit(c+715,"SocTop i_cache2 u_data01 write_ena", false,-1);
        tracep->declQuad(c+724,"SocTop i_cache2 u_data01 data_o", false,-1, 63,0);
        tracep->declQuad(c+724,"SocTop i_cache2 u_data01 out_data", false,-1, 63,0);
        tracep->declBit(c+792,"SocTop i_cache2 u_data02 clk", false,-1);
        tracep->declBus(c+709,"SocTop i_cache2 u_data02 addr_i", false,-1, 5,0);
        tracep->declQuad(c+713,"SocTop i_cache2 u_data02 data_i", false,-1, 63,0);
        tracep->declBit(c+716,"SocTop i_cache2 u_data02 write_ena", false,-1);
        tracep->declQuad(c+726,"SocTop i_cache2 u_data02 data_o", false,-1, 63,0);
        tracep->declQuad(c+726,"SocTop i_cache2 u_data02 out_data", false,-1, 63,0);
        tracep->declBit(c+792,"SocTop d_cache3 clk", false,-1);
        tracep->declBit(c+793,"SocTop d_cache3 rst", false,-1);
        tracep->declQuad(c+3,"SocTop d_cache3 mem_addr_i", false,-1, 63,0);
        tracep->declQuad(c+6,"SocTop d_cache3 mem_data_i", false,-1, 63,0);
        tracep->declBus(c+5,"SocTop d_cache3 mem_strb_i", false,-1, 7,0);
        tracep->declBit(c+9,"SocTop d_cache3 mem_read_valid", false,-1);
        tracep->declBit(c+8,"SocTop d_cache3 mem_write_valid", false,-1);
        tracep->declQuad(c+13,"SocTop d_cache3 mem_data_out", false,-1, 63,0);
        tracep->declBit(c+317,"SocTop d_cache3 mem_data_ready", false,-1);
        tracep->declQuad(c+375,"SocTop d_cache3 in_dcache_data", false,-1, 63,0);
        tracep->declBit(c+377,"SocTop d_cache3 in_dcache_ready", false,-1);
        tracep->declBit(c+320,"SocTop d_cache3 out_dcache_resp", false,-1);
        tracep->declQuad(c+15,"SocTop d_cache3 out_dcache_addr", false,-1, 63,0);
        tracep->declQuad(c+318,"SocTop d_cache3 out_dcache_data", false,-1, 63,0);
        tracep->declBus(c+17,"SocTop d_cache3 out_dcache_type", false,-1, 3,0);
        tracep->declBit(c+355,"SocTop d_cache3 dcache_read_shankhand", false,-1);
        tracep->declBit(c+356,"SocTop d_cache3 dcache_write_shankhand", false,-1);
        tracep->declBit(c+731,"SocTop d_cache3 dcache_read_ready", false,-1);
        tracep->declBit(c+732,"SocTop d_cache3 dcache_write_ready", false,-1);
        tracep->declQuad(c+246,"SocTop d_cache3 dcache_tag", false,-1, 54,0);
        tracep->declBus(c+248,"SocTop d_cache3 dcache_index", false,-1, 5,0);
        tracep->declBus(c+733,"SocTop d_cache3 state_dread", false,-1, 5,0);
        tracep->declBus(c+249,"SocTop d_cache3 state_dread_nxt", false,-1, 5,0);
        tracep->declBit(c+734,"SocTop d_cache3 read_ok_", false,-1);
        tracep->declBit(c+735,"SocTop d_cache3 read_ok", false,-1);
        tracep->declBit(c+250,"SocTop d_cache3 mem_hit_ok", false,-1);
        tracep->declBit(c+357,"SocTop d_cache3 hit_data_ready", false,-1);
        tracep->declBit(c+736,"SocTop d_cache3 dirty_ok", false,-1);
        tracep->declQuad(c+251,"SocTop d_cache3 dirty_out_addr", false,-1, 63,0);
        tracep->declQuad(c+253,"SocTop d_cache3 dirty_out_data", false,-1, 63,0);
        tracep->declBus(c+255,"SocTop d_cache3 dirty_out_type", false,-1, 3,0);
        tracep->declBit(c+256,"SocTop d_cache3 missr_i_ok", false,-1);
        tracep->declBus(c+737,"SocTop d_cache3 missr_out_type", false,-1, 3,0);
        tracep->declQuad(c+257,"SocTop d_cache3 missr_out_addr", false,-1, 63,0);
        tracep->declBus(c+259,"SocTop d_cache3 missr_data_ena1", false,-1, 7,0);
        tracep->declBit(c+260,"SocTop d_cache3 missr_tag_ena1", false,-1);
        tracep->declBus(c+261,"SocTop d_cache3 missr_data_ena2", false,-1, 7,0);
        tracep->declBit(c+262,"SocTop d_cache3 missr_tag_ena2", false,-1);
        tracep->declBit(c+263,"SocTop d_cache3 missr_out_resp", false,-1);
        tracep->declBus(c+738,"SocTop d_cache3 state_dwrite", false,-1, 5,0);
        tracep->declBus(c+264,"SocTop d_cache3 state_dwrite_nxt", false,-1, 5,0);
        tracep->declBit(c+739,"SocTop d_cache3 read_w_ok_", false,-1);
        tracep->declBit(c+740,"SocTop d_cache3 read_w_ok", false,-1);
        tracep->declBit(c+741,"SocTop d_cache3 memw_hit_ok", false,-1);
        tracep->declBus(c+265,"SocTop d_cache3 hitw_data_strb1", false,-1, 7,0);
        tracep->declBus(c+266,"SocTop d_cache3 hitw_data_strb2", false,-1, 7,0);
        tracep->declBit(c+358,"SocTop d_cache3 hitw_data_ready", false,-1);
        tracep->declBit(c+742,"SocTop d_cache3 dirtyw_ok", false,-1);
        tracep->declQuad(c+267,"SocTop d_cache3 dirtyw_out_addr", false,-1, 63,0);
        tracep->declQuad(c+269,"SocTop d_cache3 dirtyw_out_data", false,-1, 63,0);
        tracep->declBus(c+271,"SocTop d_cache3 dirtyw_out_type", false,-1, 3,0);
        tracep->declBit(c+272,"SocTop d_cache3 missw_i_ok", false,-1);
        tracep->declBus(c+743,"SocTop d_cache3 missw_out_type", false,-1, 3,0);
        tracep->declQuad(c+273,"SocTop d_cache3 missw_out_addr", false,-1, 63,0);
        tracep->declBus(c+275,"SocTop d_cache3 missw_data_ena1", false,-1, 7,0);
        tracep->declBit(c+276,"SocTop d_cache3 missw_tag_ena1", false,-1);
        tracep->declBus(c+277,"SocTop d_cache3 missw_data_ena2", false,-1, 7,0);
        tracep->declBit(c+278,"SocTop d_cache3 missw_tag_ena2", false,-1);
        tracep->declBit(c+279,"SocTop d_cache3 missw_out_resp", false,-1);
        tracep->declBus(c+744,"SocTop d_cache3 i", false,-1, 31,0);
        tracep->declBit(c+280,"SocTop d_cache3 tag_ena1", false,-1);
        tracep->declQuad(c+745,"SocTop d_cache3 tag_data1", false,-1, 54,0);
        tracep->declBit(c+747,"SocTop d_cache3 tag_user1", false,-1);
        tracep->declBit(c+281,"SocTop d_cache3 tag_ena2", false,-1);
        tracep->declQuad(c+748,"SocTop d_cache3 tag_data2", false,-1, 54,0);
        tracep->declBit(c+750,"SocTop d_cache3 tag_user2", false,-1);
        tracep->declQuad(c+751,"SocTop d_cache3 out_data1", false,-1, 63,0);
        tracep->declBus(c+282,"SocTop d_cache3 data_ena1", false,-1, 7,0);
        tracep->declQuad(c+283,"SocTop d_cache3 in_rem_data1", false,-1, 63,0);
        tracep->declQuad(c+753,"SocTop d_cache3 out_data2", false,-1, 63,0);
        tracep->declBus(c+285,"SocTop d_cache3 data_ena2", false,-1, 7,0);
        tracep->declQuad(c+283,"SocTop d_cache3 in_ram_data2", false,-1, 63,0);
        tracep->declBit(c+792,"SocTop d_cache3 u_tag0 clk", false,-1);
        tracep->declBus(c+248,"SocTop d_cache3 u_tag0 addr_i", false,-1, 5,0);
        tracep->declQuad(c+286,"SocTop d_cache3 u_tag0 data_i", false,-1, 55,0);
        tracep->declBit(c+280,"SocTop d_cache3 u_tag0 write_ena", false,-1);
        tracep->declQuad(c+745,"SocTop d_cache3 u_tag0 tag_data", false,-1, 54,0);
        tracep->declBit(c+747,"SocTop d_cache3 u_tag0 tag_valid", false,-1);
        tracep->declQuad(c+745,"SocTop d_cache3 u_tag0 out_data", false,-1, 54,0);
        tracep->declBit(c+747,"SocTop d_cache3 u_tag0 out_vaild", false,-1);
        tracep->declBit(c+792,"SocTop d_cache3 u_tag1 clk", false,-1);
        tracep->declBus(c+248,"SocTop d_cache3 u_tag1 addr_i", false,-1, 5,0);
        tracep->declQuad(c+286,"SocTop d_cache3 u_tag1 data_i", false,-1, 55,0);
        tracep->declBit(c+281,"SocTop d_cache3 u_tag1 write_ena", false,-1);
        tracep->declQuad(c+748,"SocTop d_cache3 u_tag1 tag_data", false,-1, 54,0);
        tracep->declBit(c+750,"SocTop d_cache3 u_tag1 tag_valid", false,-1);
        tracep->declQuad(c+748,"SocTop d_cache3 u_tag1 out_data", false,-1, 54,0);
        tracep->declBit(c+750,"SocTop d_cache3 u_tag1 out_vaild", false,-1);
        tracep->declBit(c+792,"SocTop d_cache3 u_data0 clk", false,-1);
        tracep->declBus(c+248,"SocTop d_cache3 u_data0 addr_i", false,-1, 5,0);
        tracep->declQuad(c+283,"SocTop d_cache3 u_data0 data_i", false,-1, 63,0);
        tracep->declBus(c+282,"SocTop d_cache3 u_data0 write_ena", false,-1, 7,0);
        tracep->declQuad(c+751,"SocTop d_cache3 u_data0 data_o", false,-1, 63,0);
        tracep->declQuad(c+751,"SocTop d_cache3 u_data0 out_data", false,-1, 63,0);
        tracep->declBit(c+792,"SocTop d_cache3 u_data1 clk", false,-1);
        tracep->declBus(c+248,"SocTop d_cache3 u_data1 addr_i", false,-1, 5,0);
        tracep->declQuad(c+283,"SocTop d_cache3 u_data1 data_i", false,-1, 63,0);
        tracep->declBus(c+285,"SocTop d_cache3 u_data1 write_ena", false,-1, 7,0);
        tracep->declQuad(c+753,"SocTop d_cache3 u_data1 data_o", false,-1, 63,0);
        tracep->declQuad(c+753,"SocTop d_cache3 u_data1 out_data", false,-1, 63,0);
        tracep->declBit(c+792,"SocTop arbitrate4 clk", false,-1);
        tracep->declBit(c+793,"SocTop arbitrate4 rst", false,-1);
        tracep->declQuad(c+15,"SocTop arbitrate4 d_cache_addr", false,-1, 63,0);
        tracep->declQuad(c+318,"SocTop arbitrate4 d_cache_data", false,-1, 63,0);
        tracep->declBus(c+17,"SocTop arbitrate4 d_cache_type", false,-1, 3,0);
        tracep->declBit(c+320,"SocTop arbitrate4 d_cache_resp", false,-1);
        tracep->declQuad(c+375,"SocTop arbitrate4 d_cache_data_o", false,-1, 63,0);
        tracep->declBit(c+377,"SocTop arbitrate4 d_cache_valid_", false,-1);
        tracep->declQuad(c+372,"SocTop arbitrate4 i_cache_addr", false,-1, 63,0);
        tracep->declBit(c+371,"SocTop arbitrate4 i_cache_ena", false,-1);
        tracep->declBit(c+374,"SocTop arbitrate4 i_cache_resp", false,-1);
        tracep->declQuad(c+378,"SocTop arbitrate4 i_cache_data", false,-1, 63,0);
        tracep->declBit(c+380,"SocTop arbitrate4 i_cache_valid_", false,-1);
        tracep->declBus(c+382,"SocTop arbitrate4 axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+383,"SocTop arbitrate4 axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+385,"SocTop arbitrate4 axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+386,"SocTop arbitrate4 axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+387,"SocTop arbitrate4 axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+388,"SocTop arbitrate4 axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+389,"SocTop arbitrate4 axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+390,"SocTop arbitrate4 axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+391,"SocTop arbitrate4 axi_aw_valid", false,-1);
        tracep->declBit(c+805,"SocTop arbitrate4 axi_aw_ready", false,-1);
        tracep->declQuad(c+392,"SocTop arbitrate4 axi_w_data", false,-1, 63,0);
        tracep->declBus(c+394,"SocTop arbitrate4 axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+395,"SocTop arbitrate4 axi_w_last", false,-1);
        tracep->declBit(c+396,"SocTop arbitrate4 axi_w_valid", false,-1);
        tracep->declBit(c+806,"SocTop arbitrate4 axi_w_ready", false,-1);
        tracep->declBus(c+807,"SocTop arbitrate4 axi_b_id", false,-1, 3,0);
        tracep->declBus(c+808,"SocTop arbitrate4 axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+809,"SocTop arbitrate4 axi_b_valid", false,-1);
        tracep->declBit(c+853,"SocTop arbitrate4 axi_b_ready", false,-1);
        tracep->declBus(c+397,"SocTop arbitrate4 axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+398,"SocTop arbitrate4 axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+400,"SocTop arbitrate4 axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+401,"SocTop arbitrate4 axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+402,"SocTop arbitrate4 axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+403,"SocTop arbitrate4 axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+404,"SocTop arbitrate4 axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+405,"SocTop arbitrate4 axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+406,"SocTop arbitrate4 axi_ar_valid", false,-1);
        tracep->declBit(c+18,"SocTop arbitrate4 axi_ar_ready", false,-1);
        tracep->declBus(c+19,"SocTop arbitrate4 axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+20,"SocTop arbitrate4 axi_r_data", false,-1, 63,0);
        tracep->declBus(c+22,"SocTop arbitrate4 axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+23,"SocTop arbitrate4 axi_r_last", false,-1);
        tracep->declBit(c+23,"SocTop arbitrate4 axi_r_valid", false,-1);
        tracep->declBit(c+407,"SocTop arbitrate4 axi_r_ready", false,-1);
        tracep->declBit(c+288,"SocTop arbitrate4 read_dcache_shankhand", false,-1);
        tracep->declBit(c+289,"SocTop arbitrate4 write_dcache_shankhand", false,-1);
        tracep->declBit(c+290,"SocTop arbitrate4 read_icache_shankhand", false,-1);
        tracep->declBus(c+755,"SocTop arbitrate4 arbitrate_state", false,-1, 2,0);
        tracep->declBus(c+291,"SocTop arbitrate4 arbitrate_state_nxt", false,-1, 2,0);
        tracep->declBit(c+292,"SocTop arbitrate4 dread_success", false,-1);
        tracep->declBit(c+293,"SocTop arbitrate4 dwrite_success", false,-1);
        tracep->declBit(c+294,"SocTop arbitrate4 iread_success", false,-1);
        tracep->declBus(c+756,"SocTop arbitrate4 dread_ar_id", false,-1, 3,0);
        tracep->declQuad(c+757,"SocTop arbitrate4 dread_ar_addr", false,-1, 63,0);
        tracep->declBus(c+759,"SocTop arbitrate4 dread_ar_len", false,-1, 7,0);
        tracep->declBus(c+760,"SocTop arbitrate4 dread_ar_size", false,-1, 2,0);
        tracep->declBus(c+761,"SocTop arbitrate4 dread_ar_burst", false,-1, 1,0);
        tracep->declBus(c+762,"SocTop arbitrate4 dread_ar_cache", false,-1, 3,0);
        tracep->declBus(c+763,"SocTop arbitrate4 dread_ar_prot", false,-1, 2,0);
        tracep->declBus(c+764,"SocTop arbitrate4 dread_ar_qos", false,-1, 3,0);
        tracep->declBit(c+765,"SocTop arbitrate4 dread_ar_valid", false,-1);
        tracep->declBit(c+766,"SocTop arbitrate4 dread_cache_valid", false,-1);
        tracep->declBit(c+295,"SocTop arbitrate4 dread_arshankhand", false,-1);
        tracep->declBit(c+853,"SocTop arbitrate4 dread_r_ready", false,-1);
        tracep->declBus(c+767,"SocTop arbitrate4 iread_ar_id", false,-1, 3,0);
        tracep->declQuad(c+768,"SocTop arbitrate4 iread_ar_addr", false,-1, 63,0);
        tracep->declBus(c+770,"SocTop arbitrate4 iread_ar_len", false,-1, 7,0);
        tracep->declBus(c+771,"SocTop arbitrate4 iread_ar_size", false,-1, 2,0);
        tracep->declBus(c+772,"SocTop arbitrate4 iread_ar_burst", false,-1, 1,0);
        tracep->declBus(c+773,"SocTop arbitrate4 iread_ar_cache", false,-1, 3,0);
        tracep->declBus(c+774,"SocTop arbitrate4 iread_ar_prot", false,-1, 2,0);
        tracep->declBus(c+775,"SocTop arbitrate4 iread_ar_qos", false,-1, 3,0);
        tracep->declBit(c+776,"SocTop arbitrate4 iread_ar_valid", false,-1);
        tracep->declBit(c+380,"SocTop arbitrate4 iread_cache_valid", false,-1);
        tracep->declBit(c+853,"SocTop arbitrate4 iread_r_ready", false,-1);
        tracep->declBit(c+296,"SocTop arbitrate4 iread_arshankhand", false,-1);
        tracep->declBus(c+382,"SocTop arbitrate4 dwrite_aw_id", false,-1, 3,0);
        tracep->declQuad(c+383,"SocTop arbitrate4 dwrite_aw_addr", false,-1, 63,0);
        tracep->declBus(c+385,"SocTop arbitrate4 dwrite_aw_len", false,-1, 7,0);
        tracep->declBus(c+386,"SocTop arbitrate4 dwrite_aw_size", false,-1, 2,0);
        tracep->declBus(c+387,"SocTop arbitrate4 dwrite_aw_burst", false,-1, 1,0);
        tracep->declBus(c+388,"SocTop arbitrate4 dwrite_aw_cache", false,-1, 3,0);
        tracep->declBus(c+389,"SocTop arbitrate4 dwrite_aw_port", false,-1, 2,0);
        tracep->declBus(c+390,"SocTop arbitrate4 dwrite_aw_qos", false,-1, 3,0);
        tracep->declBit(c+391,"SocTop arbitrate4 dwrite_aw_valid", false,-1);
        tracep->declQuad(c+392,"SocTop arbitrate4 dwrite_w_data", false,-1, 63,0);
        tracep->declBus(c+394,"SocTop arbitrate4 dwrite_w_strb", false,-1, 7,0);
        tracep->declBit(c+395,"SocTop arbitrate4 dwrite_w_last", false,-1);
        tracep->declBit(c+396,"SocTop arbitrate4 dwrite_w_valid", false,-1);
        tracep->declBit(c+777,"SocTop arbitrate4 dwrite_cache_valid", false,-1);
        tracep->declBit(c+853,"SocTop arbitrate4 dwrite_b_ready", false,-1);
        tracep->declBit(c+297,"SocTop arbitrate4 dwrite_awshankhand", false,-1);
        tracep->declBit(c+298,"SocTop arbitrate4 dwrite_wshankhand", false,-1);
        tracep->declBit(c+792,"SocTop axi_mnq4 clk", false,-1);
        tracep->declBit(c+793,"SocTop axi_mnq4 rst", false,-1);
        tracep->declBus(c+65,"SocTop axi_mnq4 s_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+66,"SocTop axi_mnq4 s_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+68,"SocTop axi_mnq4 s_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+69,"SocTop axi_mnq4 s_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+70,"SocTop axi_mnq4 s_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+71,"SocTop axi_mnq4 s_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+72,"SocTop axi_mnq4 s_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+73,"SocTop axi_mnq4 s_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+75,"SocTop axi_mnq4 s_axi_aw_valid", false,-1);
        tracep->declBit(c+74,"SocTop axi_mnq4 s_axi_aw_ready", false,-1);
        tracep->declQuad(c+76,"SocTop axi_mnq4 s_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+78,"SocTop axi_mnq4 s_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+79,"SocTop axi_mnq4 s_axi_w_last", false,-1);
        tracep->declBit(c+80,"SocTop axi_mnq4 s_axi_w_valid", false,-1);
        tracep->declBit(c+81,"SocTop axi_mnq4 s_axi_w_ready", false,-1);
        tracep->declBus(c+65,"SocTop axi_mnq4 s_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+854,"SocTop axi_mnq4 s_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+412,"SocTop axi_mnq4 s_axi_b_valid", false,-1);
        tracep->declBit(c+82,"SocTop axi_mnq4 s_axi_b_ready", false,-1);
        tracep->declBus(c+83,"SocTop axi_mnq4 s_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+84,"SocTop axi_mnq4 s_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+86,"SocTop axi_mnq4 s_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+87,"SocTop axi_mnq4 s_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+88,"SocTop axi_mnq4 s_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+89,"SocTop axi_mnq4 s_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+90,"SocTop axi_mnq4 s_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+91,"SocTop axi_mnq4 s_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+92,"SocTop axi_mnq4 s_axi_ar_valid", false,-1);
        tracep->declBit(c+413,"SocTop axi_mnq4 s_axi_ar_ready", false,-1);
        tracep->declBus(c+414,"SocTop axi_mnq4 s_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+816,"SocTop axi_mnq4 s_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+854,"SocTop axi_mnq4 s_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+415,"SocTop axi_mnq4 s_axi_r_last", false,-1);
        tracep->declBit(c+416,"SocTop axi_mnq4 s_axi_r_valid", false,-1);
        tracep->declBit(c+93,"SocTop axi_mnq4 s_axi_r_ready", false,-1);
        tracep->declBit(c+153,"SocTop axi_mnq4 mnq_read_ena", false,-1);
        tracep->declQuad(c+154,"SocTop axi_mnq4 addr_oup", false,-1, 63,0);
        tracep->declQuad(c+797,"SocTop axi_mnq4 mnq_data_in", false,-1, 63,0);
        tracep->declBit(c+412,"SocTop axi_mnq4 write_ram_ena", false,-1);
        tracep->declQuad(c+424,"SocTop axi_mnq4 write_ram_data", false,-1, 63,0);
        tracep->declQuad(c+422,"SocTop axi_mnq4 write_ram_addr", false,-1, 63,0);
        tracep->declBit(c+299,"SocTop axi_mnq4 aw_shankhand", false,-1);
        tracep->declBit(c+300,"SocTop axi_mnq4 w_shankhand", false,-1);
        tracep->declBit(c+359,"SocTop axi_mnq4 b_shankhand", false,-1);
        tracep->declBus(c+778,"SocTop axi_mnq4 s_write_state", false,-1, 1,0);
        tracep->declBus(c+301,"SocTop axi_mnq4 s_write_state_nxt", false,-1, 1,0);
        tracep->declBit(c+302,"SocTop axi_mnq4 ar_shankhand", false,-1);
        tracep->declBit(c+360,"SocTop axi_mnq4 r_shankhand", false,-1);
        tracep->declBus(c+779,"SocTop axi_mnq4 s_read_state", false,-1, 1,0);
        tracep->declBus(c+303,"SocTop axi_mnq4 s_read_state_nxt", false,-1, 1,0);
        tracep->declQuad(c+780,"SocTop axi_mnq4 write_data_reg", false,-1, 63,0);
        tracep->declQuad(c+782,"SocTop axi_mnq4 write_addr_reg", false,-1, 63,0);
        tracep->declBus(c+784,"SocTop axi_mnq4 r_s_axi_ar_id", false,-1, 3,0);
        tracep->declBit(c+792,"SocTop soc_axi45 clk", false,-1);
        tracep->declBit(c+793,"SocTop soc_axi45 rst", false,-1);
        tracep->declBus(c+867,"SocTop soc_axi45 prot_chose_write", false,-1, 2,0);
        tracep->declBus(c+867,"SocTop soc_axi45 prot_chose_read", false,-1, 2,0);
        tracep->declBus(c+382,"SocTop soc_axi45 master_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+383,"SocTop soc_axi45 master_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+385,"SocTop soc_axi45 master_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+386,"SocTop soc_axi45 master_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+387,"SocTop soc_axi45 master_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+388,"SocTop soc_axi45 master_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+389,"SocTop soc_axi45 master_axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+390,"SocTop soc_axi45 master_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+391,"SocTop soc_axi45 master_axi_aw_valid", false,-1);
        tracep->declBit(c+805,"SocTop soc_axi45 master_axi_aw_ready", false,-1);
        tracep->declQuad(c+392,"SocTop soc_axi45 master_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+394,"SocTop soc_axi45 master_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+395,"SocTop soc_axi45 master_axi_w_last", false,-1);
        tracep->declBit(c+396,"SocTop soc_axi45 master_axi_w_valid", false,-1);
        tracep->declBit(c+806,"SocTop soc_axi45 master_axi_w_ready", false,-1);
        tracep->declBus(c+807,"SocTop soc_axi45 master_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+808,"SocTop soc_axi45 master_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+853,"SocTop soc_axi45 master_axi_b_ready", false,-1);
        tracep->declBit(c+809,"SocTop soc_axi45 master_axi_b_valid", false,-1);
        tracep->declBus(c+397,"SocTop soc_axi45 master_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+398,"SocTop soc_axi45 master_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+400,"SocTop soc_axi45 master_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+401,"SocTop soc_axi45 master_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+402,"SocTop soc_axi45 master_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+403,"SocTop soc_axi45 master_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+404,"SocTop soc_axi45 master_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+405,"SocTop soc_axi45 master_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+406,"SocTop soc_axi45 master_axi_ar_valid", false,-1);
        tracep->declBit(c+18,"SocTop soc_axi45 master_axi_ar_ready", false,-1);
        tracep->declBus(c+19,"SocTop soc_axi45 master_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+20,"SocTop soc_axi45 master_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+22,"SocTop soc_axi45 master_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+23,"SocTop soc_axi45 master_axi_r_last", false,-1);
        tracep->declBit(c+23,"SocTop soc_axi45 master_axi_r_valid", false,-1);
        tracep->declBit(c+407,"SocTop soc_axi45 master_axi_r_ready", false,-1);
        tracep->declBus(c+24,"SocTop soc_axi45 slave_axi_aw_id", false,-1, 11,0);
        tracep->declArray(c+25,"SocTop soc_axi45 slave_axi_aw_addr", false,-1, 191,0);
        tracep->declBus(c+31,"SocTop soc_axi45 slave_axi_aw_len", false,-1, 23,0);
        tracep->declBus(c+32,"SocTop soc_axi45 slave_axi_aw_size", false,-1, 8,0);
        tracep->declBus(c+33,"SocTop soc_axi45 slave_axi_aw_burst", false,-1, 5,0);
        tracep->declBus(c+34,"SocTop soc_axi45 slave_axi_aw_cache", false,-1, 11,0);
        tracep->declBus(c+35,"SocTop soc_axi45 slave_axi_aw_prot", false,-1, 8,0);
        tracep->declBus(c+36,"SocTop soc_axi45 slave_axi_aw_qos", false,-1, 11,0);
        tracep->declBus(c+37,"SocTop soc_axi45 slave_axi_aw_valid", false,-1, 2,0);
        tracep->declBus(c+38,"SocTop soc_axi45 slave_axi_aw_ready", false,-1, 2,0);
        tracep->declArray(c+39,"SocTop soc_axi45 slave_axi_w_data", false,-1, 191,0);
        tracep->declBus(c+45,"SocTop soc_axi45 slave_axi_w_strb", false,-1, 23,0);
        tracep->declBus(c+46,"SocTop soc_axi45 slave_axi_w_last", false,-1, 2,0);
        tracep->declBus(c+47,"SocTop soc_axi45 slave_axi_w_valid", false,-1, 2,0);
        tracep->declBus(c+48,"SocTop soc_axi45 slave_axi_w_ready", false,-1, 2,0);
        tracep->declBus(c+321,"SocTop soc_axi45 slave_axi_b_id", false,-1, 11,0);
        tracep->declBus(c+408,"SocTop soc_axi45 slave_axi_b_resp", false,-1, 5,0);
        tracep->declBus(c+409,"SocTop soc_axi45 slave_axi_b_valid", false,-1, 2,0);
        tracep->declBus(c+49,"SocTop soc_axi45 slave_axi_b_ready", false,-1, 2,0);
        tracep->declBus(c+50,"SocTop soc_axi45 slave_axi_ar_id", false,-1, 11,0);
        tracep->declArray(c+51,"SocTop soc_axi45 slave_axi_ar_addr", false,-1, 191,0);
        tracep->declBus(c+57,"SocTop soc_axi45 slave_axi_ar_len", false,-1, 23,0);
        tracep->declBus(c+58,"SocTop soc_axi45 slave_axi_ar_size", false,-1, 8,0);
        tracep->declBus(c+59,"SocTop soc_axi45 slave_axi_ar_burst", false,-1, 5,0);
        tracep->declBus(c+60,"SocTop soc_axi45 slave_axi_ar_cache", false,-1, 11,0);
        tracep->declBus(c+61,"SocTop soc_axi45 slave_axi_ar_prot", false,-1, 8,0);
        tracep->declBus(c+62,"SocTop soc_axi45 slave_axi_ar_qos", false,-1, 11,0);
        tracep->declBus(c+63,"SocTop soc_axi45 slave_axi_ar_valid", false,-1, 2,0);
        tracep->declBus(c+322,"SocTop soc_axi45 slave_axi_ar_ready", false,-1, 2,0);
        tracep->declBus(c+323,"SocTop soc_axi45 slave_axi_r_id", false,-1, 11,0);
        tracep->declArray(c+810,"SocTop soc_axi45 slave_axi_r_data", false,-1, 191,0);
        tracep->declBus(c+1,"SocTop soc_axi45 slave_axi_r_resp", false,-1, 5,0);
        tracep->declBus(c+410,"SocTop soc_axi45 slave_axi_r_last", false,-1, 2,0);
        tracep->declBus(c+411,"SocTop soc_axi45 slave_axi_r_valid", false,-1, 2,0);
        tracep->declBus(c+64,"SocTop soc_axi45 slave_axi_r_ready", false,-1, 2,0);
        tracep->declBus(c+852,"SocTop soc_axi45 SLAVE_NUM", false,-1, 31,0);
        tracep->declBit(c+792,"SocTop time_axi6 clk", false,-1);
        tracep->declBit(c+793,"SocTop time_axi6 rst", false,-1);
        tracep->declBit(c+381,"SocTop time_axi6 time_interrupt", false,-1);
        tracep->declBus(c+94,"SocTop time_axi6 time_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+95,"SocTop time_axi6 time_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+97,"SocTop time_axi6 time_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+98,"SocTop time_axi6 time_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+99,"SocTop time_axi6 time_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+100,"SocTop time_axi6 time_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+101,"SocTop time_axi6 time_axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+102,"SocTop time_axi6 time_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+104,"SocTop time_axi6 time_axi_aw_valid", false,-1);
        tracep->declBit(c+103,"SocTop time_axi6 time_axi_aw_ready", false,-1);
        tracep->declQuad(c+105,"SocTop time_axi6 time_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+107,"SocTop time_axi6 time_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+108,"SocTop time_axi6 time_axi_w_last", false,-1);
        tracep->declBit(c+109,"SocTop time_axi6 time_axi_w_valid", false,-1);
        tracep->declBit(c+110,"SocTop time_axi6 time_axi_w_ready", false,-1);
        tracep->declBus(c+417,"SocTop time_axi6 time_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+418,"SocTop time_axi6 time_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+419,"SocTop time_axi6 time_axi_b_valid", false,-1);
        tracep->declBit(c+111,"SocTop time_axi6 time_axi_b_ready", false,-1);
        tracep->declBus(c+112,"SocTop time_axi6 time_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+113,"SocTop time_axi6 time_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+115,"SocTop time_axi6 time_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+116,"SocTop time_axi6 time_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+117,"SocTop time_axi6 time_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+118,"SocTop time_axi6 time_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+119,"SocTop time_axi6 time_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+120,"SocTop time_axi6 time_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+121,"SocTop time_axi6 time_axi_ar_valid", false,-1);
        tracep->declBit(c+122,"SocTop time_axi6 time_axi_ar_ready", false,-1);
        tracep->declBus(c+324,"SocTop time_axi6 time_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+123,"SocTop time_axi6 time_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+2,"SocTop time_axi6 time_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+420,"SocTop time_axi6 time_axi_r_last", false,-1);
        tracep->declBit(c+421,"SocTop time_axi6 time_axi_r_valid", false,-1);
        tracep->declBit(c+125,"SocTop time_axi6 time_axi_r_ready", false,-1);
        tracep->declQuad(c+785,"SocTop time_axi6 car_mtime_l", false,-1, 63,0);
        tracep->declQuad(c+787,"SocTop time_axi6 csr_mtime_h", false,-1, 63,0);
        tracep->declQuad(c+361,"SocTop time_axi6 csr_mtime_l_nxt", false,-1, 63,0);
        tracep->declQuad(c+363,"SocTop time_axi6 csr_mtime_h_nxt", false,-1, 63,0);
        tracep->declBit(c+304,"SocTop time_axi6 csr_mtime_l_r_ena", false,-1);
        tracep->declBit(c+305,"SocTop time_axi6 csr_mtime_h_r_ena", false,-1);
        tracep->declBit(c+306,"SocTop time_axi6 csr_mtime_l_w_ena", false,-1);
        tracep->declBit(c+307,"SocTop time_axi6 csr_mtime_h_w_ena", false,-1);
        tracep->declQuad(c+308,"SocTop time_axi6 wmask", false,-1, 63,0);
        tracep->declBit(c+310,"SocTop time_axi6 aw_shakehand", false,-1);
        tracep->declBit(c+311,"SocTop time_axi6 w_shakehand", false,-1);
        tracep->declBit(c+365,"SocTop time_axi6 b_shankhand", false,-1);
        tracep->declBit(c+312,"SocTop time_axi6 mode_right", false,-1);
        tracep->declBus(c+789,"SocTop time_axi6 state_time_m", false,-1, 1,0);
        tracep->declBus(c+313,"SocTop time_axi6 state_time_m_nxt", false,-1, 1,0);
        tracep->declBus(c+790,"SocTop time_axi6 time_reg_id", false,-1, 3,0);
        tracep->declBus(c+418,"SocTop time_axi6 time_reg_resp", false,-1, 1,0);
        tracep->declBit(c+314,"SocTop time_axi6 mode_right_r", false,-1);
        tracep->declBit(c+315,"SocTop time_axi6 ar_shakehand", false,-1);
        tracep->declBit(c+366,"SocTop time_axi6 r_shankhand", false,-1);
        tracep->declQuad(c+367,"SocTop time_axi6 time_csr_link", false,-1, 63,0);
        tracep->declBus(c+791,"SocTop time_axi6 state_time_r", false,-1, 1,0);
        tracep->declBus(c+316,"SocTop time_axi6 state_time_r_nxt", false,-1, 1,0);
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
    VlWide<4>/*127:0*/ __Vtemp44;
    VlWide<6>/*191:0*/ __Vtemp46;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,((((IData)(vlSelf->SocTop__DOT__tim_axi_r_resp) 
                                    << 2U) | (IData)(vlSelf->SocTop__DOT__io_axi_r_resp))),6);
        tracep->fullCData(oldp+2,(vlSelf->SocTop__DOT__tim_axi_r_resp),2);
        tracep->fullQData(oldp+3,(vlSelf->SocTop__DOT__rvcpu_data_addr),64);
        tracep->fullCData(oldp+5,(vlSelf->SocTop__DOT__rvcpu_wmask),8);
        tracep->fullQData(oldp+6,(vlSelf->SocTop__DOT__rvcpu_data_o),64);
        tracep->fullBit(oldp+8,(vlSelf->SocTop__DOT__rvcpu_we));
        tracep->fullBit(oldp+9,(vlSelf->SocTop__DOT__rvcpu_re));
        tracep->fullBit(oldp+10,(vlSelf->SocTop__DOT__core_stall_l));
        tracep->fullIData(oldp+11,(vlSelf->SocTop__DOT__i_cache_inst_data),32);
        tracep->fullBit(oldp+12,(vlSelf->SocTop__DOT__i_cache_inst_valid));
        tracep->fullQData(oldp+13,(vlSelf->SocTop__DOT__d_cache_data_out),64);
        tracep->fullQData(oldp+15,(vlSelf->SocTop__DOT__d_cache_out_addr),64);
        tracep->fullCData(oldp+17,(vlSelf->SocTop__DOT__d_cache_out_type),4);
        tracep->fullBit(oldp+18,(vlSelf->SocTop__DOT__t_axi_ar_ready));
        tracep->fullCData(oldp+19,(vlSelf->SocTop__DOT__t_axi_r_id),4);
        tracep->fullQData(oldp+20,(vlSelf->SocTop__DOT__t_axi_r_data),64);
        tracep->fullCData(oldp+22,(vlSelf->SocTop__DOT__t_axi_r_resp),2);
        tracep->fullBit(oldp+23,(vlSelf->SocTop__DOT__t_axi_r_valid));
        tracep->fullSData(oldp+24,(vlSelf->SocTop__DOT__add_axi_aw_id),12);
        tracep->fullWData(oldp+25,(vlSelf->SocTop__DOT__add_axi_aw_addr),192);
        tracep->fullIData(oldp+31,(vlSelf->SocTop__DOT__add_axi_aw_len),24);
        tracep->fullSData(oldp+32,(vlSelf->SocTop__DOT__add_axi_aw_size),9);
        tracep->fullCData(oldp+33,(vlSelf->SocTop__DOT__add_axi_aw_burst),6);
        tracep->fullSData(oldp+34,(vlSelf->SocTop__DOT__add_axi_aw_cache),12);
        tracep->fullSData(oldp+35,(vlSelf->SocTop__DOT__add_axi_aw_prot),9);
        tracep->fullSData(oldp+36,(vlSelf->SocTop__DOT__add_axi_aw_qos),12);
        tracep->fullCData(oldp+37,(vlSelf->SocTop__DOT__add_axi_aw_valid),3);
        tracep->fullCData(oldp+38,((((IData)(vlSelf->SocTop__DOT__soc_axi_aw_ready) 
                                     << 2U) | (((IData)(vlSelf->SocTop__DOT__tim_axi_aw_ready) 
                                                << 1U) 
                                               | (IData)(vlSelf->SocTop__DOT__io_axi_aw_ready)))),3);
        tracep->fullWData(oldp+39,(vlSelf->SocTop__DOT__add_axi_w_data),192);
        tracep->fullIData(oldp+45,(vlSelf->SocTop__DOT__add_axi_w_strb),24);
        tracep->fullCData(oldp+46,(vlSelf->SocTop__DOT__add_axi_w_last),3);
        tracep->fullCData(oldp+47,(vlSelf->SocTop__DOT__add_axi_w_valid),3);
        tracep->fullCData(oldp+48,((((IData)(vlSelf->SocTop__DOT__soc_axi_w_ready) 
                                     << 2U) | (((IData)(vlSelf->SocTop__DOT__tim_axi_w_ready) 
                                                << 1U) 
                                               | (IData)(vlSelf->SocTop__DOT__io_axi_w_ready)))),3);
        tracep->fullCData(oldp+49,(vlSelf->SocTop__DOT__add_axi_b_ready),3);
        tracep->fullSData(oldp+50,(vlSelf->SocTop__DOT__add_axi_ar_id),12);
        tracep->fullWData(oldp+51,(vlSelf->SocTop__DOT__add_axi_ar_addr),192);
        tracep->fullIData(oldp+57,(vlSelf->SocTop__DOT__add_axi_ar_len),24);
        tracep->fullSData(oldp+58,(vlSelf->SocTop__DOT__add_axi_ar_size),9);
        tracep->fullCData(oldp+59,(vlSelf->SocTop__DOT__add_axi_ar_burst),6);
        tracep->fullSData(oldp+60,(vlSelf->SocTop__DOT__add_axi_ar_cache),12);
        tracep->fullSData(oldp+61,(vlSelf->SocTop__DOT__add_axi_ar_prot),9);
        tracep->fullSData(oldp+62,(vlSelf->SocTop__DOT__add_axi_ar_qos),12);
        tracep->fullCData(oldp+63,(vlSelf->SocTop__DOT__add_axi_ar_valid),3);
        tracep->fullCData(oldp+64,(vlSelf->SocTop__DOT__add_axi_r_ready),3);
        tracep->fullCData(oldp+65,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_id) 
                                            >> 8U))),4);
        tracep->fullQData(oldp+66,((((QData)((IData)(
                                                     vlSelf->SocTop__DOT__add_axi_aw_addr[5U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SocTop__DOT__add_axi_aw_addr[4U])))),64);
        tracep->fullCData(oldp+68,((0xffU & (vlSelf->SocTop__DOT__add_axi_aw_len 
                                             >> 0x10U))),8);
        tracep->fullCData(oldp+69,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_size) 
                                          >> 6U))),3);
        tracep->fullCData(oldp+70,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_burst) 
                                          >> 4U))),2);
        tracep->fullCData(oldp+71,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_cache) 
                                            >> 8U))),4);
        tracep->fullCData(oldp+72,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_prot) 
                                          >> 6U))),3);
        tracep->fullCData(oldp+73,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_qos) 
                                            >> 8U))),4);
        tracep->fullBit(oldp+74,(vlSelf->SocTop__DOT__soc_axi_aw_ready));
        tracep->fullBit(oldp+75,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                        >> 2U))));
        tracep->fullQData(oldp+76,((((QData)((IData)(
                                                     vlSelf->SocTop__DOT__add_axi_w_data[5U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SocTop__DOT__add_axi_w_data[4U])))),64);
        tracep->fullCData(oldp+78,((0xffU & (vlSelf->SocTop__DOT__add_axi_w_strb 
                                             >> 0x10U))),8);
        tracep->fullBit(oldp+79,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_last) 
                                        >> 2U))));
        tracep->fullBit(oldp+80,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                        >> 2U))));
        tracep->fullBit(oldp+81,(vlSelf->SocTop__DOT__soc_axi_w_ready));
        tracep->fullBit(oldp+82,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                        >> 2U))));
        tracep->fullCData(oldp+83,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                            >> 8U))),4);
        tracep->fullQData(oldp+84,((((QData)((IData)(
                                                     vlSelf->SocTop__DOT__add_axi_ar_addr[5U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SocTop__DOT__add_axi_ar_addr[4U])))),64);
        tracep->fullCData(oldp+86,((0xffU & (vlSelf->SocTop__DOT__add_axi_ar_len 
                                             >> 0x10U))),8);
        tracep->fullCData(oldp+87,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_size) 
                                          >> 6U))),3);
        tracep->fullCData(oldp+88,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_burst) 
                                          >> 4U))),2);
        tracep->fullCData(oldp+89,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_cache) 
                                            >> 8U))),4);
        tracep->fullCData(oldp+90,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_prot) 
                                          >> 6U))),3);
        tracep->fullCData(oldp+91,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_qos) 
                                            >> 8U))),4);
        tracep->fullBit(oldp+92,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                                        >> 2U))));
        tracep->fullBit(oldp+93,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                        >> 2U))));
        tracep->fullCData(oldp+94,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_id) 
                                            >> 4U))),4);
        tracep->fullQData(oldp+95,((((QData)((IData)(
                                                     vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))),64);
        tracep->fullCData(oldp+97,((0xffU & (vlSelf->SocTop__DOT__add_axi_aw_len 
                                             >> 8U))),8);
        tracep->fullCData(oldp+98,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_size) 
                                          >> 3U))),3);
        tracep->fullCData(oldp+99,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_burst) 
                                          >> 2U))),2);
        tracep->fullCData(oldp+100,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_cache) 
                                             >> 4U))),4);
        tracep->fullCData(oldp+101,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_prot) 
                                           >> 3U))),3);
        tracep->fullCData(oldp+102,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_qos) 
                                             >> 4U))),4);
        tracep->fullBit(oldp+103,(vlSelf->SocTop__DOT__tim_axi_aw_ready));
        tracep->fullBit(oldp+104,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                         >> 1U))));
        tracep->fullQData(oldp+105,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_w_data[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_w_data[2U])))),64);
        tracep->fullCData(oldp+107,((0xffU & (vlSelf->SocTop__DOT__add_axi_w_strb 
                                              >> 8U))),8);
        tracep->fullBit(oldp+108,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_last) 
                                         >> 1U))));
        tracep->fullBit(oldp+109,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                         >> 1U))));
        tracep->fullBit(oldp+110,(vlSelf->SocTop__DOT__tim_axi_w_ready));
        tracep->fullBit(oldp+111,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                         >> 1U))));
        tracep->fullCData(oldp+112,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                             >> 4U))),4);
        tracep->fullQData(oldp+113,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))),64);
        tracep->fullCData(oldp+115,((0xffU & (vlSelf->SocTop__DOT__add_axi_ar_len 
                                              >> 8U))),8);
        tracep->fullCData(oldp+116,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_size) 
                                           >> 3U))),3);
        tracep->fullCData(oldp+117,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_burst) 
                                           >> 2U))),2);
        tracep->fullCData(oldp+118,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_cache) 
                                             >> 4U))),4);
        tracep->fullCData(oldp+119,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_prot) 
                                           >> 3U))),3);
        tracep->fullCData(oldp+120,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_qos) 
                                             >> 4U))),4);
        tracep->fullBit(oldp+121,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                                         >> 1U))));
        tracep->fullBit(oldp+122,(vlSelf->SocTop__DOT__tim_axi_ar_ready));
        tracep->fullQData(oldp+123,(vlSelf->SocTop__DOT__tim_axi_r_data),64);
        tracep->fullBit(oldp+125,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                         >> 1U))));
        tracep->fullCData(oldp+126,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_id))),4);
        tracep->fullQData(oldp+127,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_aw_addr[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_aw_addr[0U])))),64);
        tracep->fullCData(oldp+129,((0xffU & vlSelf->SocTop__DOT__add_axi_aw_len)),8);
        tracep->fullCData(oldp+130,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_size))),3);
        tracep->fullCData(oldp+131,((3U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_burst))),2);
        tracep->fullCData(oldp+132,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_cache))),4);
        tracep->fullCData(oldp+133,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_prot))),3);
        tracep->fullCData(oldp+134,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_qos))),4);
        tracep->fullBit(oldp+135,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_valid))));
        tracep->fullQData(oldp+136,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_w_data[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_w_data[0U])))),64);
        tracep->fullCData(oldp+138,((0xffU & vlSelf->SocTop__DOT__add_axi_w_strb)),8);
        tracep->fullBit(oldp+139,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_w_last))));
        tracep->fullBit(oldp+140,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_w_valid))));
        tracep->fullBit(oldp+141,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_b_ready))));
        tracep->fullCData(oldp+142,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_id))),4);
        tracep->fullQData(oldp+143,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_ar_addr[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_ar_addr[0U])))),64);
        tracep->fullCData(oldp+145,((0xffU & vlSelf->SocTop__DOT__add_axi_ar_len)),8);
        tracep->fullCData(oldp+146,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_size))),3);
        tracep->fullCData(oldp+147,((3U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_burst))),2);
        tracep->fullCData(oldp+148,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_cache))),4);
        tracep->fullCData(oldp+149,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_prot))),3);
        tracep->fullCData(oldp+150,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_qos))),4);
        tracep->fullBit(oldp+151,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_valid))));
        tracep->fullBit(oldp+152,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_r_ready))));
        tracep->fullBit(oldp+153,(vlSelf->SocTop__DOT__axi_mnq4__DOT__ar_shankhand));
        tracep->fullQData(oldp+154,(((IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__ar_shankhand)
                                      ? (((QData)((IData)(
                                                          vlSelf->SocTop__DOT__add_axi_ar_addr[5U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->SocTop__DOT__add_axi_ar_addr[4U])))
                                      : 0ULL)),64);
        tracep->fullCData(oldp+156,((0x1fU & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                              >> 0xfU))),5);
        tracep->fullQData(oldp+157,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_data),64);
        tracep->fullCData(oldp+159,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1),5);
        tracep->fullBit(oldp+160,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1));
        tracep->fullCData(oldp+161,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2),5);
        tracep->fullBit(oldp+162,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2));
        tracep->fullBit(oldp+163,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ctrl_req));
        tracep->fullCData(oldp+164,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type),8);
        tracep->fullCData(oldp+165,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode),8);
        tracep->fullQData(oldp+166,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op),64);
        tracep->fullBit(oldp+168,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_ena));
        tracep->fullBit(oldp+169,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_pip_jalrena));
        tracep->fullBit(oldp+170,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_if_flush));
        tracep->fullCData(oldp+171,(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl),5);
        tracep->fullQData(oldp+172,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_id_data),64);
        tracep->fullBit(oldp+174,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_ctrl_req));
        tracep->fullQData(oldp+175,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_pc),64);
        tracep->fullIData(oldp+177,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_inst),32);
        tracep->fullIData(oldp+178,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm),20);
        tracep->fullSData(oldp+179,((vlSelf->SocTop__DOT__i_cache_inst_data 
                                     >> 0x14U)),12);
        tracep->fullSData(oldp+180,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm),12);
        tracep->fullCData(oldp+181,((0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)),7);
        tracep->fullBit(oldp+182,((IData)((0x6fU == 
                                           (0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)))));
        tracep->fullBit(oldp+183,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr));
        tracep->fullBit(oldp+184,((IData)((0x63U == 
                                           (0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)))));
        tracep->fullQData(oldp+185,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc),64);
        tracep->fullCData(oldp+187,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__rs1),5);
        tracep->fullBit(oldp+188,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui));
        tracep->fullBit(oldp+189,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc));
        tracep->fullBit(oldp+190,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal));
        tracep->fullBit(oldp+191,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr));
        tracep->fullBit(oldp+192,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jump));
        tracep->fullBit(oldp+193,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srai));
        tracep->fullBit(oldp+194,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addiw));
        tracep->fullBit(oldp+195,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slliw));
        tracep->fullBit(oldp+196,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srliw));
        tracep->fullBit(oldp+197,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraiw));
        tracep->fullBit(oldp+198,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_add));
        tracep->fullBit(oldp+199,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sub));
        tracep->fullBit(oldp+200,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sll));
        tracep->fullBit(oldp+201,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slt));
        tracep->fullBit(oldp+202,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sltu));
        tracep->fullBit(oldp+203,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_xor));
        tracep->fullBit(oldp+204,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srl));
        tracep->fullBit(oldp+205,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sra));
        tracep->fullBit(oldp+206,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_or));
        tracep->fullBit(oldp+207,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_and));
        tracep->fullBit(oldp+208,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_div));
        tracep->fullBit(oldp+209,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divu));
        tracep->fullBit(oldp+210,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mul));
        tracep->fullBit(oldp+211,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulh));
        tracep->fullBit(oldp+212,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulhsu));
        tracep->fullBit(oldp+213,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulhu));
        tracep->fullBit(oldp+214,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_rem));
        tracep->fullBit(oldp+215,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remu));
        tracep->fullBit(oldp+216,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addw));
        tracep->fullBit(oldp+217,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_subw));
        tracep->fullBit(oldp+218,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sllw));
        tracep->fullBit(oldp+219,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srlw));
        tracep->fullBit(oldp+220,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraw));
        tracep->fullBit(oldp+221,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divuw));
        tracep->fullBit(oldp+222,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divw));
        tracep->fullBit(oldp+223,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulw));
        tracep->fullBit(oldp+224,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remuw));
        tracep->fullBit(oldp+225,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remw));
        tracep->fullBit(oldp+226,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw));
        tracep->fullBit(oldp+227,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs));
        tracep->fullBit(oldp+228,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc));
        tracep->fullBit(oldp+229,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrwi));
        tracep->fullBit(oldp+230,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc))));
        tracep->fullBit(oldp+231,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak));
        tracep->fullBit(oldp+232,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1));
        tracep->fullBit(oldp+233,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1));
        tracep->fullBit(oldp+234,((1U & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl) 
                                         >> 3U))));
        tracep->fullQData(oldp+235,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__exe_res),64);
        tracep->fullCData(oldp+237,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_byte),8);
        tracep->fullSData(oldp+238,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte),16);
        tracep->fullIData(oldp+239,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word),32);
        tracep->fullQData(oldp+240,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_data),64);
        tracep->fullCData(oldp+242,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_mask),8);
        tracep->fullBit(oldp+243,(vlSelf->SocTop__DOT__i_cache2__DOT__icache_if_shankhand));
        tracep->fullCData(oldp+244,(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst_nxt),6);
        tracep->fullBit(oldp+245,(vlSelf->SocTop__DOT__i_cache2__DOT__inst_hit_ok));
        tracep->fullQData(oldp+246,((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                     >> 9U)),55);
        tracep->fullCData(oldp+248,((0x3fU & (IData)(
                                                     (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                      >> 3U)))),6);
        tracep->fullCData(oldp+249,(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread_nxt),6);
        tracep->fullBit(oldp+250,(vlSelf->SocTop__DOT__d_cache3__DOT__mem_hit_ok));
        tracep->fullQData(oldp+251,(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_addr),64);
        tracep->fullQData(oldp+253,(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_data),64);
        tracep->fullCData(oldp+255,(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_type),4);
        tracep->fullBit(oldp+256,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_i_ok));
        tracep->fullQData(oldp+257,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_addr),64);
        tracep->fullCData(oldp+259,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_data_ena1),8);
        tracep->fullBit(oldp+260,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_tag_ena1));
        tracep->fullCData(oldp+261,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_data_ena2),8);
        tracep->fullBit(oldp+262,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_tag_ena2));
        tracep->fullBit(oldp+263,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_resp));
        tracep->fullCData(oldp+264,(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite_nxt),6);
        tracep->fullCData(oldp+265,(vlSelf->SocTop__DOT__d_cache3__DOT__hitw_data_strb1),8);
        tracep->fullCData(oldp+266,(vlSelf->SocTop__DOT__d_cache3__DOT__hitw_data_strb2),8);
        tracep->fullQData(oldp+267,(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_addr),64);
        tracep->fullQData(oldp+269,(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_data),64);
        tracep->fullCData(oldp+271,(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_type),4);
        tracep->fullBit(oldp+272,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_i_ok));
        tracep->fullQData(oldp+273,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_addr),64);
        tracep->fullCData(oldp+275,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_data_ena1),8);
        tracep->fullBit(oldp+276,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_tag_ena1));
        tracep->fullCData(oldp+277,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_data_ena2),8);
        tracep->fullBit(oldp+278,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_tag_ena2));
        tracep->fullBit(oldp+279,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_resp));
        tracep->fullBit(oldp+280,(vlSelf->SocTop__DOT__d_cache3__DOT__tag_ena1));
        tracep->fullBit(oldp+281,(vlSelf->SocTop__DOT__d_cache3__DOT__tag_ena2));
        tracep->fullCData(oldp+282,(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena1),8);
        tracep->fullQData(oldp+283,(vlSelf->SocTop__DOT__d_cache3__DOT__in_rem_data1),64);
        tracep->fullCData(oldp+285,(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena2),8);
        tracep->fullQData(oldp+286,((0x80000000000000ULL 
                                     | (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                        >> 9U))),56);
        tracep->fullBit(oldp+288,(((~ (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__read_icache_shankhand)) 
                                   & ((2U == (IData)(vlSelf->SocTop__DOT__d_cache_out_type)) 
                                      | (8U == (IData)(vlSelf->SocTop__DOT__d_cache_out_type))))));
        tracep->fullBit(oldp+289,(vlSelf->SocTop__DOT__arbitrate4__DOT__write_dcache_shankhand));
        tracep->fullBit(oldp+290,(vlSelf->SocTop__DOT__arbitrate4__DOT__read_icache_shankhand));
        tracep->fullCData(oldp+291,(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state_nxt),3);
        tracep->fullBit(oldp+292,(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_success));
        tracep->fullBit(oldp+293,(vlSelf->SocTop__DOT__arbitrate4__DOT__dwrite_success));
        tracep->fullBit(oldp+294,(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_success));
        tracep->fullBit(oldp+295,(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_arshankhand));
        tracep->fullBit(oldp+296,(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_arshankhand));
        tracep->fullBit(oldp+297,(vlSelf->SocTop__DOT__arbitrate4__DOT__dwrite_awshankhand));
        tracep->fullBit(oldp+298,(vlSelf->SocTop__DOT__arbitrate4__DOT__dwrite_wshankhand));
        tracep->fullBit(oldp+299,((((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                    >> 2U) & (IData)(vlSelf->SocTop__DOT__soc_axi_aw_ready))));
        tracep->fullBit(oldp+300,((((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                    >> 2U) & (IData)(vlSelf->SocTop__DOT__soc_axi_w_ready))));
        tracep->fullCData(oldp+301,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state_nxt),2);
        tracep->fullBit(oldp+302,(vlSelf->SocTop__DOT__axi_mnq4__DOT__ar_shankhand));
        tracep->fullCData(oldp+303,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state_nxt),2);
        tracep->fullBit(oldp+304,((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                    & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__ar_shakehand)) 
                                   & (0x2004000ULL 
                                      == (((QData)((IData)(
                                                           vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))))));
        tracep->fullBit(oldp+305,((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                    & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__ar_shakehand)) 
                                   & (0x200bff8ULL 
                                      == (((QData)((IData)(
                                                           vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))))));
        tracep->fullBit(oldp+306,(((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                     & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__w_shakehand)) 
                                    & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__aw_shakehand)) 
                                   & (0x2004000ULL 
                                      == (((QData)((IData)(
                                                           vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))))));
        tracep->fullBit(oldp+307,(((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                     & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__w_shakehand)) 
                                    & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__aw_shakehand)) 
                                   & (0x200bff8ULL 
                                      == (((QData)((IData)(
                                                           vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))))));
        tracep->fullQData(oldp+308,(vlSelf->SocTop__DOT__time_axi6__DOT__wmask),64);
        tracep->fullBit(oldp+310,(vlSelf->SocTop__DOT__time_axi6__DOT__aw_shakehand));
        tracep->fullBit(oldp+311,(vlSelf->SocTop__DOT__time_axi6__DOT__w_shakehand));
        tracep->fullBit(oldp+312,(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right));
        tracep->fullCData(oldp+313,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m_nxt),2);
        tracep->fullBit(oldp+314,((IData)(((((((0U 
                                                == 
                                                (0xff00U 
                                                 & vlSelf->SocTop__DOT__add_axi_ar_len)) 
                                               & (0x30U 
                                                  == 
                                                  (0x38U 
                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_ar_size)))) 
                                              & (4U 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->SocTop__DOT__add_axi_ar_burst)))) 
                                             & (0U 
                                                == 
                                                (0xf0U 
                                                 & (IData)(vlSelf->SocTop__DOT__add_axi_ar_cache)))) 
                                            & (0U == 
                                               (0x38U 
                                                & (IData)(vlSelf->SocTop__DOT__add_axi_ar_prot)))) 
                                           & (0U == 
                                              (0xf0U 
                                               & (IData)(vlSelf->SocTop__DOT__add_axi_ar_qos)))))));
        tracep->fullBit(oldp+315,(vlSelf->SocTop__DOT__time_axi6__DOT__ar_shakehand));
        tracep->fullCData(oldp+316,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r_nxt),2);
        tracep->fullBit(oldp+317,(((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                                    ? ((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
                                       & (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                                            == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                >> 9U)) 
                                           & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild)) 
                                          | ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                                              == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                  >> 9U)) 
                                             & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))))
                                    : ((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                                       & ((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                                          & (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                                               == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                   >> 9U)) 
                                              & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild)) 
                                             | ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                                                 == 
                                                 (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                  >> 9U)) 
                                                & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))))))));
        tracep->fullQData(oldp+318,(((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                                      ? vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_data
                                      : ((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                                          ? vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_data
                                          : 0ULL))),64);
        tracep->fullBit(oldp+320,(((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                                    ? (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_resp)
                                    : ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                                       & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_resp)))));
        tracep->fullSData(oldp+321,(((0xf00U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_id)) 
                                     | ((((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m))
                                           ? (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__time_reg_id)
                                           : 0U) << 4U) 
                                        | (IData)(vlSelf->SocTop__DOT__io_axi_b_id)))),12);
        tracep->fullCData(oldp+322,((((IData)(vlSelf->SocTop__DOT__soc_axi_ar_ready) 
                                      << 2U) | (((IData)(vlSelf->SocTop__DOT__tim_axi_ar_ready) 
                                                 << 1U) 
                                                | (IData)(vlSelf->SocTop__DOT__io_axi_ar_ready)))),3);
        tracep->fullSData(oldp+323,(((((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                        ? (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__r_s_axi_ar_id)
                                        : 0U) << 8U) 
                                     | ((((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r))
                                           ? (0xfU 
                                              & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                                 >> 4U))
                                           : 0U) << 4U) 
                                        | (IData)(vlSelf->SocTop__DOT__io_axi_r_id)))),12);
        tracep->fullCData(oldp+324,(((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r))
                                      ? (0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                                 >> 4U))
                                      : 0U)),4);
        tracep->fullCData(oldp+325,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_ena)
                                      ? ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak)
                                          ? 0xbU : 
                                         (0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                   >> 7U)))
                                      : 0U)),5);
        tracep->fullSData(oldp+326,((0xfffU & ((2U 
                                                & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))
                                                ? (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                   >> 0x14U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))
                                                    ? 
                                                   ((0xfe0U 
                                                     & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                        >> 0x14U)) 
                                                    | (0x1fU 
                                                       & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                          >> 7U)))
                                                    : 0U)))),12);
        tracep->fullQData(oldp+327,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr)
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
        tracep->fullBit(oldp+329,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+330,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x2000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+331,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x3000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+332,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x4000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+333,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+334,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+335,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x1000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+336,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x5000U 
                                                    == 
                                                    (0x40007000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+337,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+338,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x1000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+339,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x4000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+340,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x5000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+341,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+342,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+343,((1U & (IData)(((0x80U 
                                                  == 
                                                  (0x80U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+344,((1U & (IData)(((0x80U 
                                                  == 
                                                  (0x80U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+345,(((IData)(((0x80U 
                                             == (0x80U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                            & (0U == 
                                               (0x7000U 
                                                & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                   & (0U == (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                             >> 0x14U)))));
        tracep->fullBit(oldp+346,(((IData)(((0x80U 
                                             == (0x80U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                            & (0U == 
                                               (0x7000U 
                                                & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                   & (0x18U == (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+347,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr) 
                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena))));
        tracep->fullBit(oldp+348,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr) 
                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena))));
        tracep->fullBit(oldp+349,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))));
        tracep->fullQData(oldp+350,(((((- (QData)((IData)(
                                                          (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                           >> 0x1fU)))) 
                                       << 0xcU) | (QData)((IData)(
                                                                  (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                   >> 0x14U)))) 
                                     + vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op)),64);
        tracep->fullBit(oldp+352,((1U & (((~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1)) 
                                          & (~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1))) 
                                         & (~ (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                                == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                               & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena)))))));
        tracep->fullQData(oldp+353,(((2U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type))
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
        tracep->fullBit(oldp+355,(((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                   & (1U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)))));
        tracep->fullBit(oldp+356,(((IData)(vlSelf->SocTop__DOT__rvcpu_we) 
                                   & (1U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)))));
        tracep->fullBit(oldp+357,(((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
                                   & (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                                        == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                            >> 9U)) 
                                       & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild)) 
                                      | ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                                          == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                              >> 9U)) 
                                         & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))))));
        tracep->fullBit(oldp+358,(((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                                   & (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                                        == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                            >> 9U)) 
                                       & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild)) 
                                      | ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                                          == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                              >> 9U)) 
                                         & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))))));
        tracep->fullBit(oldp+359,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state)) 
                                   & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                      >> 2U))));
        tracep->fullBit(oldp+360,((((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                    >> 2U) & (2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)))));
        tracep->fullQData(oldp+361,((((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                        & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__w_shakehand)) 
                                       & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__aw_shakehand)) 
                                      & (0x2004000ULL 
                                         == (((QData)((IData)(
                                                              vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))))
                                      ? (vlSelf->SocTop__DOT__time_axi6__DOT__wmask 
                                         & (((QData)((IData)(
                                                             vlSelf->SocTop__DOT__add_axi_w_data[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->SocTop__DOT__add_axi_w_data[2U]))))
                                      : (1ULL + vlSelf->SocTop__DOT__time_axi6__DOT__car_mtime_l))),64);
        tracep->fullQData(oldp+363,((((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                        & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__w_shakehand)) 
                                       & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__aw_shakehand)) 
                                      & (0x200bff8ULL 
                                         == (((QData)((IData)(
                                                              vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))))
                                      ? (vlSelf->SocTop__DOT__time_axi6__DOT__wmask 
                                         & (((QData)((IData)(
                                                             vlSelf->SocTop__DOT__add_axi_w_data[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->SocTop__DOT__add_axi_w_data[2U]))))
                                      : vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h)),64);
        tracep->fullBit(oldp+365,(((IData)(vlSelf->SocTop__DOT__tim_axi_b_valid) 
                                   & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                      >> 1U))));
        tracep->fullBit(oldp+366,(((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r)) 
                                   & ((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                      >> 1U))));
        tracep->fullQData(oldp+367,(((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                       & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__ar_shakehand)) 
                                      & (0x2004000ULL 
                                         == (((QData)((IData)(
                                                              vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))))
                                      ? vlSelf->SocTop__DOT__time_axi6__DOT__car_mtime_l
                                      : ((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                           & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__ar_shakehand)) 
                                          & (0x200bff8ULL 
                                             == (((QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))))
                                          ? vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h
                                          : 0ULL))),64);
        tracep->fullQData(oldp+369,(vlSelf->SocTop__DOT__rvcpu_inst_addr),64);
        tracep->fullBit(oldp+371,(vlSelf->SocTop__DOT__i_cache_read_ena));
        tracep->fullQData(oldp+372,(vlSelf->SocTop__DOT__i_cache_addr),64);
        tracep->fullBit(oldp+374,(vlSelf->SocTop__DOT__i_caceh_resp));
        tracep->fullQData(oldp+375,(vlSelf->SocTop__DOT__arbitrate_d_data),64);
        tracep->fullBit(oldp+377,(vlSelf->SocTop__DOT__arbitrate_d_ok));
        tracep->fullQData(oldp+378,(vlSelf->SocTop__DOT__arbitrate_i_data),64);
        tracep->fullBit(oldp+380,(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_cache_valid));
        tracep->fullBit(oldp+381,((vlSelf->SocTop__DOT__time_axi6__DOT__car_mtime_l 
                                   > vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h)));
        tracep->fullCData(oldp+382,(vlSelf->SocTop__DOT__arbitrate4__DOT__dwrite_aw_id),4);
        tracep->fullQData(oldp+383,(vlSelf->SocTop__DOT__arbitrate4__DOT__dwrite_aw_addr),64);
        tracep->fullCData(oldp+385,(vlSelf->SocTop__DOT__arbitrate4__DOT__dwrite_aw_len),8);
        tracep->fullCData(oldp+386,(vlSelf->SocTop__DOT__arbitrate4__DOT__dwrite_aw_size),3);
        tracep->fullCData(oldp+387,(vlSelf->SocTop__DOT__arbitrate4__DOT__dwrite_aw_burst),2);
        tracep->fullCData(oldp+388,(vlSelf->SocTop__DOT__arbitrate4__DOT__dwrite_aw_cache),4);
        tracep->fullCData(oldp+389,(vlSelf->SocTop__DOT__arbitrate4__DOT__dwrite_aw_port),3);
        tracep->fullCData(oldp+390,(vlSelf->SocTop__DOT__arbitrate4__DOT__dwrite_aw_qos),4);
        tracep->fullBit(oldp+391,(vlSelf->SocTop__DOT__arbitrate4__DOT__dwrite_aw_valid));
        tracep->fullQData(oldp+392,(vlSelf->SocTop__DOT__arbitrate4__DOT__dwrite_w_data),64);
        tracep->fullCData(oldp+394,(vlSelf->SocTop__DOT__arbitrate4__DOT__dwrite_w_strb),8);
        tracep->fullBit(oldp+395,(vlSelf->SocTop__DOT__arbitrate4__DOT__dwrite_w_last));
        tracep->fullBit(oldp+396,(vlSelf->SocTop__DOT__arbitrate4__DOT__dwrite_w_valid));
        tracep->fullCData(oldp+397,(((4U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state))
                                      ? (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_ar_id)
                                      : ((5U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state))
                                          ? (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_ar_id)
                                          : 0U))),4);
        tracep->fullQData(oldp+398,(((4U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state))
                                      ? vlSelf->SocTop__DOT__arbitrate4__DOT__iread_ar_addr
                                      : ((5U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state))
                                          ? vlSelf->SocTop__DOT__arbitrate4__DOT__dread_ar_addr
                                          : 0ULL))),64);
        tracep->fullCData(oldp+400,(((4U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state))
                                      ? (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_ar_len)
                                      : ((5U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state))
                                          ? (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_ar_len)
                                          : 0U))),8);
        tracep->fullCData(oldp+401,(((4U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state))
                                      ? (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_ar_size)
                                      : ((5U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state))
                                          ? (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_ar_size)
                                          : 3U))),3);
        tracep->fullCData(oldp+402,(((4U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state))
                                      ? (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_ar_burst)
                                      : ((5U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state))
                                          ? (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_ar_burst)
                                          : 1U))),2);
        tracep->fullCData(oldp+403,(((4U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state))
                                      ? (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_ar_cache)
                                      : ((5U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state))
                                          ? (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_ar_cache)
                                          : 2U))),4);
        tracep->fullCData(oldp+404,(((4U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state))
                                      ? (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_ar_prot)
                                      : ((5U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state))
                                          ? (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_ar_prot)
                                          : 0U))),3);
        tracep->fullCData(oldp+405,(((4U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state))
                                      ? (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_ar_qos)
                                      : ((5U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state))
                                          ? (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_ar_qos)
                                          : 0U))),4);
        tracep->fullBit(oldp+406,(((4U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state))
                                    ? (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_ar_valid)
                                    : ((5U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state)) 
                                       & (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_ar_valid)))));
        tracep->fullBit(oldp+407,(((4U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state)) 
                                   | (5U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state)))));
        tracep->fullCData(oldp+408,((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__time_reg_resp) 
                                      << 2U) | (IData)(vlSelf->SocTop__DOT__io_axi_b_resp))),6);
        tracep->fullCData(oldp+409,((((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state)) 
                                      << 2U) | (((IData)(vlSelf->SocTop__DOT__tim_axi_b_valid) 
                                                 << 1U) 
                                                | (IData)(vlSelf->SocTop__DOT__io_axi_b_valid)))),3);
        tracep->fullCData(oldp+410,((((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)) 
                                      << 2U) | (((IData)(vlSelf->SocTop__DOT__tim_axi_r_last) 
                                                 << 1U) 
                                                | (IData)(vlSelf->SocTop__DOT__io_axi_r_last)))),3);
        tracep->fullCData(oldp+411,((((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)) 
                                      << 2U) | (((2U 
                                                  == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r)) 
                                                 << 1U) 
                                                | (IData)(vlSelf->SocTop__DOT__io_axi_r_valid)))),3);
        tracep->fullBit(oldp+412,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))));
        tracep->fullBit(oldp+413,(vlSelf->SocTop__DOT__soc_axi_ar_ready));
        tracep->fullCData(oldp+414,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                      ? (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__r_s_axi_ar_id)
                                      : 0U)),4);
        tracep->fullBit(oldp+415,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))));
        tracep->fullBit(oldp+416,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))));
        tracep->fullCData(oldp+417,(((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m))
                                      ? (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__time_reg_id)
                                      : 0U)),4);
        tracep->fullCData(oldp+418,(vlSelf->SocTop__DOT__time_axi6__DOT__time_reg_resp),2);
        tracep->fullBit(oldp+419,(vlSelf->SocTop__DOT__tim_axi_b_valid));
        tracep->fullBit(oldp+420,(vlSelf->SocTop__DOT__tim_axi_r_last));
        tracep->fullBit(oldp+421,((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r))));
        tracep->fullQData(oldp+422,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))
                                      ? vlSelf->SocTop__DOT__axi_mnq4__DOT__write_addr_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+424,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))
                                      ? vlSelf->SocTop__DOT__axi_mnq4__DOT__write_data_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+426,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc),64);
        tracep->fullIData(oldp+428,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst),32);
        tracep->fullBit(oldp+429,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena));
        tracep->fullCData(oldp+430,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr),5);
        tracep->fullBit(oldp+431,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena));
        tracep->fullCData(oldp+432,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type),8);
        tracep->fullCData(oldp+433,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_sel),3);
        tracep->fullQData(oldp+434,(((IData)((0U != 
                                              (3U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type))))
                                      ? (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                         + (((- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset) 
                                                                    >> 0xbU))))) 
                                             << 0xcU) 
                                            | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset))))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+436,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena))
                                      ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data
                                      : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch)
                                          ? (4ULL + vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc)
                                          : 0ULL))),64);
        tracep->fullBit(oldp+438,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_div_req));
        tracep->fullCData(oldp+439,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr),5);
        tracep->fullBit(oldp+440,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena));
        tracep->fullCData(oldp+441,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr),5);
        tracep->fullBit(oldp+442,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena));
        tracep->fullQData(oldp+443,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data),64);
        tracep->fullQData(oldp+445,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc),64);
        tracep->fullCData(oldp+447,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type),8);
        tracep->fullCData(oldp+448,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode),8);
        tracep->fullQData(oldp+449,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1),64);
        tracep->fullQData(oldp+451,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2),64);
        tracep->fullBit(oldp+453,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdena));
        tracep->fullSData(oldp+454,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset),12);
        tracep->fullCData(oldp+455,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type),8);
        tracep->fullQData(oldp+456,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data),64);
        tracep->fullCData(oldp+458,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel),3);
        tracep->fullQData(oldp+459,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr),64);
        tracep->fullQData(oldp+461,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_pc),64);
        tracep->fullIData(oldp+463,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_ex_inst),32);
        tracep->fullIData(oldp+464,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_inst),32);
        tracep->fullBit(oldp+465,(vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__ex_pc_change));
        tracep->fullBit(oldp+466,(vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__id_pc_change));
        tracep->fullQData(oldp+467,(vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__pc_ex),64);
        tracep->fullQData(oldp+469,(vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__pc_id),64);
        tracep->fullBit(oldp+471,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id2__DOT__fl_bub_temp));
        tracep->fullCData(oldp+472,((0x7fU & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)),7);
        tracep->fullCData(oldp+473,((0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+474,((7U & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                           >> 0xcU))),3);
        tracep->fullSData(oldp+475,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                     >> 0x14U)),12);
        tracep->fullCData(oldp+476,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+477,((0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                              >> 0x14U))),5);
        tracep->fullIData(oldp+478,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                     >> 0xcU)),20);
        tracep->fullSData(oldp+479,(((0xfe0U & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                 >> 7U)))),12);
        tracep->fullQData(oldp+480,((1ULL + (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))),64);
        tracep->fullQData(oldp+482,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sub_op2),64);
        tracep->fullQData(oldp+484,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2),64);
        tracep->fullQData(oldp+486,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_addw_op2),64);
        tracep->fullBit(oldp+488,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_ls_op2));
        tracep->fullQData(oldp+489,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__shift_res),64);
        tracep->fullIData(oldp+491,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sllw_op2),32);
        tracep->fullQData(oldp+492,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sllw_res),64);
        tracep->fullIData(oldp+494,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_srlw_op2),32);
        tracep->fullQData(oldp+495,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__srlw_res),64);
        tracep->fullIData(oldp+497,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sraw_op2),32);
        tracep->fullQData(oldp+498,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sraw_res),64);
        tracep->fullIData(oldp+500,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2),32);
        tracep->fullQData(oldp+501,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2)))),64);
        tracep->fullQData(oldp+503,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__upper_imm),64);
        tracep->fullQData(oldp+505,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_data),64);
        tracep->fullBit(oldp+507,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_finish_sign));
        tracep->fullBit(oldp+508,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_ready));
        tracep->fullQData(oldp+509,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divrem_data),64);
        tracep->fullBit(oldp+511,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__finish_sign));
        tracep->fullBit(oldp+512,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__dr_ready));
        tracep->fullQData(oldp+513,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_divdata),64);
        tracep->fullQData(oldp+515,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op2_divdata),64);
        tracep->fullBit(oldp+517,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch));
        tracep->fullBit(oldp+518,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena));
        tracep->fullSData(oldp+519,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx),12);
        tracep->fullQData(oldp+520,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data),64);
        tracep->fullBit(oldp+522,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena));
        tracep->fullBit(oldp+523,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena));
        tracep->fullBit(oldp+524,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena));
        tracep->fullBit(oldp+525,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en));
        tracep->fullBit(oldp+526,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en));
        tracep->fullQData(oldp+527,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data),64);
        tracep->fullQData(oldp+529,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value),64);
        tracep->fullQData(oldp+531,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
                                     | vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1)),64);
        tracep->fullQData(oldp+533,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
                                     & (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1))),64);
        tracep->fullBit(oldp+535,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__mult_valid));
        tracep->fullBit(oldp+536,((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                 >> 0x3fU)))));
        tracep->fullBit(oldp+537,((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2 
                                                 >> 0x3fU)))));
        tracep->fullQData(oldp+538,(((1U & (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                    >> 0x3fU)))
                                      ? (1ULL + (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1))
                                      : vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1)),64);
        tracep->fullQData(oldp+540,(((1U & (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2 
                                                    >> 0x3fU)))
                                      ? (1ULL + (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))
                                      : vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)),64);
        tracep->fullWData(oldp+542,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand),128);
        tracep->fullQData(oldp+546,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multipler),64);
        if ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multipler))) {
            __Vtemp44[0U] = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[0U];
            __Vtemp44[1U] = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[1U];
            __Vtemp44[2U] = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[2U];
            __Vtemp44[3U] = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[3U];
        } else {
            __Vtemp44[0U] = 0U;
            __Vtemp44[1U] = 0U;
            __Vtemp44[2U] = 0U;
            __Vtemp44[3U] = 0U;
        }
        tracep->fullWData(oldp+548,(__Vtemp44),128);
        tracep->fullWData(oldp+552,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp),128);
        tracep->fullBit(oldp+556,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_signbit));
        tracep->fullBit(oldp+557,((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_divdata 
                                                 >> 0x3fU)))));
        tracep->fullBit(oldp+558,((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op2_divdata 
                                                 >> 0x3fU)))));
        tracep->fullQData(oldp+559,(((1U & (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_divdata 
                                                    >> 0x3fU)))
                                      ? (1ULL + (~ vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_divdata))
                                      : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_divdata)),64);
        tracep->fullQData(oldp+561,(((1U & (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op2_divdata 
                                                    >> 0x3fU)))
                                      ? (1ULL + (~ vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op2_divdata))
                                      : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op2_divdata)),64);
        tracep->fullBit(oldp+563,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__div_rem_signbit));
        tracep->fullCData(oldp+564,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__counter),8);
        tracep->fullWData(oldp+565,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a),128);
        tracep->fullWData(oldp+569,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_b),128);
        tracep->fullQData(oldp+573,((1ULL + (~ (((QData)((IData)(
                                                                 vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[0U])))))),64);
        tracep->fullBit(oldp+575,((0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+576,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en) 
                                   & (0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)))));
        tracep->fullBit(oldp+577,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en) 
                                   & (0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)))));
        tracep->fullQData(oldp+578,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcycle),64);
        tracep->fullBit(oldp+580,((0x300U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+581,(((0x300U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+582,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus));
        tracep->fullBit(oldp+583,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_ena));
        tracep->fullBit(oldp+584,((1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                          | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                          ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)
                                          : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena) 
                                             | ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                 ? (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                            >> 7U))
                                                 : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)))))));
        tracep->fullBit(oldp+585,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie));
        tracep->fullBit(oldp+586,((1U & ((~ ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                             | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))) 
                                         & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)
                                             ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)
                                             : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                 ? (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                            >> 3U))
                                                 : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)))))));
        tracep->fullBit(oldp+587,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie));
        tracep->fullCData(oldp+588,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                      ? 3U : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                      ? (IData)(
                                                                (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                                 >> 0xbU))
                                                      : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp)))))),2);
        tracep->fullCData(oldp+589,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp),2);
        tracep->fullCData(oldp+590,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs),2);
        tracep->fullBit(oldp+591,((3U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs))));
        tracep->fullQData(oldp+592,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus),64);
        tracep->fullBit(oldp+594,((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+595,(((((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en)) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
        tracep->fullBit(oldp+596,(((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
        tracep->fullQData(oldp+597,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base),62);
        tracep->fullQData(oldp+599,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base 
                                     << 2U)),64);
        tracep->fullBit(oldp+601,((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+602,((((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena))));
        tracep->fullBit(oldp+603,(((((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en)) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
        tracep->fullQData(oldp+604,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mepc),64);
        tracep->fullBit(oldp+606,((0x342U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+607,(((0x342U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+608,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause));
        tracep->fullBit(oldp+609,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
        tracep->fullQData(oldp+610,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                      ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value
                                      : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause)
                                          ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data
                                          : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause))),64);
        tracep->fullQData(oldp+612,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause),64);
        tracep->fullBit(oldp+614,((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+615,(((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+616,(((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
        tracep->fullBit(oldp+617,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie));
        tracep->fullQData(oldp+618,(((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie)) 
                                     << 7U)),64);
        tracep->fullBit(oldp+620,((0x344U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+621,(((0x344U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+622,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip));
        tracep->fullQData(oldp+623,((QData)((IData)(
                                                    ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip) 
                                                     << 7U)))),64);
        tracep->fullBit(oldp+625,((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+626,(((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+627,(((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
        tracep->fullQData(oldp+628,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mscrstch),64);
        tracep->fullCData(oldp+630,((7U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))),3);
        tracep->fullCData(oldp+631,((3U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                   >> 1U)))),2);
        tracep->fullBit(oldp+632,((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                 >> 2U)))));
        tracep->fullQData(oldp+633,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_pc_o),64);
        tracep->fullIData(oldp+635,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o),32);
        tracep->fullQData(oldp+636,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__pc_data1),64);
        tracep->fullBit(oldp+638,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_exyn));
        tracep->fullBit(oldp+639,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__teap_yn));
        tracep->fullQData(oldp+640,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__trap_code),64);
        tracep->fullQData(oldp+642,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[0]),64);
        tracep->fullQData(oldp+644,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[1]),64);
        tracep->fullQData(oldp+646,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[2]),64);
        tracep->fullQData(oldp+648,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[3]),64);
        tracep->fullQData(oldp+650,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[4]),64);
        tracep->fullQData(oldp+652,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[5]),64);
        tracep->fullQData(oldp+654,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[6]),64);
        tracep->fullQData(oldp+656,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[7]),64);
        tracep->fullQData(oldp+658,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[8]),64);
        tracep->fullQData(oldp+660,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[9]),64);
        tracep->fullQData(oldp+662,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[10]),64);
        tracep->fullQData(oldp+664,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[11]),64);
        tracep->fullQData(oldp+666,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[12]),64);
        tracep->fullQData(oldp+668,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[13]),64);
        tracep->fullQData(oldp+670,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[14]),64);
        tracep->fullQData(oldp+672,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[15]),64);
        tracep->fullQData(oldp+674,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[16]),64);
        tracep->fullQData(oldp+676,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[17]),64);
        tracep->fullQData(oldp+678,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[18]),64);
        tracep->fullQData(oldp+680,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[19]),64);
        tracep->fullQData(oldp+682,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[20]),64);
        tracep->fullQData(oldp+684,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[21]),64);
        tracep->fullQData(oldp+686,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[22]),64);
        tracep->fullQData(oldp+688,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[23]),64);
        tracep->fullQData(oldp+690,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[24]),64);
        tracep->fullQData(oldp+692,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[25]),64);
        tracep->fullQData(oldp+694,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[26]),64);
        tracep->fullQData(oldp+696,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[27]),64);
        tracep->fullQData(oldp+698,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[28]),64);
        tracep->fullQData(oldp+700,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[29]),64);
        tracep->fullQData(oldp+702,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[30]),64);
        tracep->fullQData(oldp+704,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[31]),64);
        tracep->fullIData(oldp+706,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__i),32);
        tracep->fullQData(oldp+707,((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                     >> 9U)),55);
        tracep->fullCData(oldp+709,((0x3fU & (IData)(
                                                     (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                                      >> 3U)))),6);
        tracep->fullCData(oldp+710,(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst),6);
        tracep->fullBit(oldp+711,((0x20U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst))));
        tracep->fullBit(oldp+712,(vlSelf->SocTop__DOT__i_cache2__DOT__read_ok));
        tracep->fullQData(oldp+713,(vlSelf->SocTop__DOT__i_cache2__DOT__miss_data),64);
        tracep->fullBit(oldp+715,(vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_o));
        tracep->fullBit(oldp+716,(vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_t));
        tracep->fullBit(oldp+717,(vlSelf->SocTop__DOT__i_cache2__DOT__write_i_ok));
        tracep->fullQData(oldp+718,(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__out_data),55);
        tracep->fullBit(oldp+720,(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__out_vaild));
        tracep->fullQData(oldp+721,(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__out_data),55);
        tracep->fullBit(oldp+723,(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__out_vaild));
        tracep->fullQData(oldp+724,(vlSelf->SocTop__DOT__i_cache2__DOT__u_data01__DOT__out_data),64);
        tracep->fullQData(oldp+726,(vlSelf->SocTop__DOT__i_cache2__DOT__u_data02__DOT__out_data),64);
        tracep->fullIData(oldp+728,(vlSelf->SocTop__DOT__i_cache2__DOT__i),32);
        tracep->fullQData(oldp+729,((0x80000000000000ULL 
                                     | (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                        >> 9U))),56);
        tracep->fullBit(oldp+731,((1U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))));
        tracep->fullBit(oldp+732,((1U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))));
        tracep->fullCData(oldp+733,(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread),6);
        tracep->fullBit(oldp+734,((2U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))));
        tracep->fullBit(oldp+735,(vlSelf->SocTop__DOT__d_cache3__DOT__read_ok));
        tracep->fullBit(oldp+736,(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_ok));
        tracep->fullCData(oldp+737,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_type),4);
        tracep->fullCData(oldp+738,(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite),6);
        tracep->fullBit(oldp+739,((2U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))));
        tracep->fullBit(oldp+740,(vlSelf->SocTop__DOT__d_cache3__DOT__read_w_ok));
        tracep->fullBit(oldp+741,((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))));
        tracep->fullBit(oldp+742,(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_ok));
        tracep->fullCData(oldp+743,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_type),4);
        tracep->fullIData(oldp+744,(vlSelf->SocTop__DOT__d_cache3__DOT__i),32);
        tracep->fullQData(oldp+745,(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data),55);
        tracep->fullBit(oldp+747,(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild));
        tracep->fullQData(oldp+748,(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data),55);
        tracep->fullBit(oldp+750,(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild));
        tracep->fullQData(oldp+751,(vlSelf->SocTop__DOT__d_cache3__DOT__u_data0__DOT__out_data),64);
        tracep->fullQData(oldp+753,(vlSelf->SocTop__DOT__d_cache3__DOT__u_data1__DOT__out_data),64);
        tracep->fullCData(oldp+755,(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state),3);
        tracep->fullCData(oldp+756,(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_ar_id),4);
        tracep->fullQData(oldp+757,(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_ar_addr),64);
        tracep->fullCData(oldp+759,(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_ar_len),8);
        tracep->fullCData(oldp+760,(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_ar_size),3);
        tracep->fullCData(oldp+761,(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_ar_burst),2);
        tracep->fullCData(oldp+762,(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_ar_cache),4);
        tracep->fullCData(oldp+763,(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_ar_prot),3);
        tracep->fullCData(oldp+764,(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_ar_qos),4);
        tracep->fullBit(oldp+765,(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_ar_valid));
        tracep->fullBit(oldp+766,(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_cache_valid));
        tracep->fullCData(oldp+767,(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_ar_id),4);
        tracep->fullQData(oldp+768,(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_ar_addr),64);
        tracep->fullCData(oldp+770,(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_ar_len),8);
        tracep->fullCData(oldp+771,(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_ar_size),3);
        tracep->fullCData(oldp+772,(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_ar_burst),2);
        tracep->fullCData(oldp+773,(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_ar_cache),4);
        tracep->fullCData(oldp+774,(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_ar_prot),3);
        tracep->fullCData(oldp+775,(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_ar_qos),4);
        tracep->fullBit(oldp+776,(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_ar_valid));
        tracep->fullBit(oldp+777,(vlSelf->SocTop__DOT__arbitrate4__DOT__dwrite_cache_valid));
        tracep->fullCData(oldp+778,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state),2);
        tracep->fullCData(oldp+779,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state),2);
        tracep->fullQData(oldp+780,(vlSelf->SocTop__DOT__axi_mnq4__DOT__write_data_reg),64);
        tracep->fullQData(oldp+782,(vlSelf->SocTop__DOT__axi_mnq4__DOT__write_addr_reg),64);
        tracep->fullCData(oldp+784,(vlSelf->SocTop__DOT__axi_mnq4__DOT__r_s_axi_ar_id),4);
        tracep->fullQData(oldp+785,(vlSelf->SocTop__DOT__time_axi6__DOT__car_mtime_l),64);
        tracep->fullQData(oldp+787,(vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h),64);
        tracep->fullCData(oldp+789,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m),2);
        tracep->fullCData(oldp+790,(vlSelf->SocTop__DOT__time_axi6__DOT__time_reg_id),4);
        tracep->fullCData(oldp+791,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r),2);
        tracep->fullBit(oldp+792,(vlSelf->clk));
        tracep->fullBit(oldp+793,(vlSelf->rst));
        tracep->fullBit(oldp+794,(vlSelf->read_ena_sign_));
        tracep->fullQData(oldp+795,(vlSelf->out_addr_outp),64);
        tracep->fullQData(oldp+797,(vlSelf->read_data_sign_),64);
        tracep->fullBit(oldp+799,(vlSelf->out_write_ram_ena));
        tracep->fullQData(oldp+800,(vlSelf->out_write_ram_data),64);
        tracep->fullQData(oldp+802,(vlSelf->out_write_ram_addr),64);
        tracep->fullBit(oldp+804,((1U & (~ (IData)(vlSelf->rst)))));
        tracep->fullBit(oldp+805,(((~ (IData)(vlSelf->rst)) 
                                   & (IData)(vlSelf->SocTop__DOT__soc_axi_aw_ready))));
        tracep->fullBit(oldp+806,(((~ (IData)(vlSelf->rst)) 
                                   & (IData)(vlSelf->SocTop__DOT__soc_axi_w_ready))));
        tracep->fullCData(oldp+807,(((IData)(vlSelf->rst)
                                      ? 0U : (0xfU 
                                              & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_id) 
                                                 >> 8U)))),4);
        tracep->fullCData(oldp+808,(((IData)(vlSelf->rst)
                                      ? 0U : (3U & 
                                              ((0xfffffffU 
                                                & ((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__time_reg_resp) 
                                                   >> 2U)) 
                                               | ((IData)(vlSelf->SocTop__DOT__io_axi_b_resp) 
                                                  >> 4U))))),2);
        tracep->fullBit(oldp+809,(((~ (IData)(vlSelf->rst)) 
                                   & (2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state)))));
        __Vtemp46[0U] = (IData)(vlSelf->SocTop__DOT__io_axi_r_data);
        __Vtemp46[1U] = (IData)((vlSelf->SocTop__DOT__io_axi_r_data 
                                 >> 0x20U));
        __Vtemp46[2U] = (IData)(vlSelf->SocTop__DOT__tim_axi_r_data);
        __Vtemp46[3U] = (IData)((vlSelf->SocTop__DOT__tim_axi_r_data 
                                 >> 0x20U));
        __Vtemp46[4U] = (IData)(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                  ? vlSelf->read_data_sign_
                                  : 0ULL));
        __Vtemp46[5U] = (IData)((((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                   ? vlSelf->read_data_sign_
                                   : 0ULL) >> 0x20U));
        tracep->fullWData(oldp+810,(__Vtemp46),192);
        tracep->fullQData(oldp+816,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                      ? vlSelf->read_data_sign_
                                      : 0ULL)),64);
        tracep->fullQData(oldp+818,(((1U & ((~ (IData)(vlSelf->rst)) 
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
        tracep->fullBit(oldp+820,(((IData)(vlSelf->rst)
                                    ? 0U : (1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)))));
        tracep->fullQData(oldp+821,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
                                                 ? 
                                                (0xfffffffffffffffeULL 
                                                 & vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc)
                                                 : vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc))),64);
        tracep->fullBit(oldp+823,(((~ (IData)(vlSelf->rst)) 
                                   & (IData)(vlSelf->SocTop__DOT__i_cache_inst_valid))));
        tracep->fullQData(oldp+824,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2)
                                                 ? 
                                                ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr) 
                                                   == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena))
                                                  ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_data
                                                  : 
                                                 ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr) 
                                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena))
                                                   ? vlSelf->SocTop__DOT__rvcpu1__DOT__mem_id_data
                                                   : 
                                                  (((~ (IData)(vlSelf->rst)) 
                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2))
                                                    ? 
                                                   ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                                      == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                                     ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                                     : 
                                                    vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                                    [vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2])
                                                    : 0ULL)))
                                                 : 
                                                ((IData)(
                                                         (0U 
                                                          != 
                                                          (0xb0U 
                                                           & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))))
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                       >> 0x1fU)))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                     >> 0x14U))))
                                                  : 
                                                 (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui) 
                                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                        >> 0x1fU)))) 
                                                    << 0x14U) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                      >> 0xcU))))
                                                   : 
                                                  ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jump)
                                                    ? vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc
                                                    : 0ULL)))))),64);
        tracep->fullQData(oldp+826,(((IData)(vlSelf->rst)
                                      ? 0ULL : vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc)),64);
        tracep->fullCData(oldp+828,(((IData)(vlSelf->rst)
                                      ? 0U : (7U & 
                                              (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                               >> 0xcU)))),3);
        tracep->fullQData(oldp+829,((((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1))
                                      ? ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                           == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                          & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                          ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                          : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                         [vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1])
                                      : 0ULL)),64);
        tracep->fullQData(oldp+831,((((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2))
                                      ? ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                           == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                          & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                          ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                          : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                         [vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2])
                                      : 0ULL)),64);
        tracep->fullQData(oldp+833,(((IData)(vlSelf->rst)
                                      ? 0ULL : vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc)),64);
        tracep->fullIData(oldp+835,(((IData)(vlSelf->rst)
                                      ? 0U : vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)),32);
        tracep->fullIData(oldp+836,(((IData)(vlSelf->rst)
                                      ? 0U : vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_ex_inst)),32);
        tracep->fullQData(oldp+837,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
                                      ? ((1U & ((~ (IData)(vlSelf->rst)) 
                                                & ((IData)(vlSelf->rst)
                                                    ? 0U
                                                    : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr))))
                                          ? ((((0x1fU 
                                                & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                                   >> 0xfU)) 
                                               == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr)) 
                                              & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                              ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                              : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                             [(0x1fU 
                                               & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                                  >> 0xfU))])
                                          : 0ULL) : vlSelf->SocTop__DOT__rvcpu_inst_addr)),64);
        tracep->fullQData(oldp+839,(((IData)((0x6fU 
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
                                              : ((IData)(vlSelf->rst)
                                                  ? 0ULL
                                                  : 4ULL))))),64);
        tracep->fullBit(oldp+841,(((IData)(vlSelf->rst)
                                    ? 0U : (1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1) 
                                                   & (2U 
                                                      == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                  & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1) 
                                                     == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)))))));
        tracep->fullBit(oldp+842,(((IData)(vlSelf->rst)
                                    ? 0U : (1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2) 
                                                   & (2U 
                                                      == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                  & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2) 
                                                     == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)))))));
        tracep->fullQData(oldp+843,(((IData)(vlSelf->rst)
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
        tracep->fullQData(oldp+845,(((IData)(vlSelf->rst)
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
        tracep->fullQData(oldp+847,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((1U 
                                                 & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                            >> 2U)))
                                                 ? 
                                                ((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)) 
                                                 << 0x20U)
                                                 : (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data))))),64);
        tracep->fullCData(oldp+849,(((IData)(vlSelf->rst)
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
        tracep->fullCData(oldp+850,(((IData)(vlSelf->rst)
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
        tracep->fullCData(oldp+851,(((IData)(vlSelf->rst)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                             >> 2U)))
                                               ? 0xf0U
                                               : 0xfU))),8);
        tracep->fullIData(oldp+852,(3U),32);
        tracep->fullBit(oldp+853,(1U));
        tracep->fullCData(oldp+854,(0U),2);
        tracep->fullBit(oldp+855,(vlSelf->SocTop__DOT__io_axi_aw_ready));
        tracep->fullBit(oldp+856,(vlSelf->SocTop__DOT__io_axi_w_ready));
        tracep->fullCData(oldp+857,(vlSelf->SocTop__DOT__io_axi_b_id),4);
        tracep->fullCData(oldp+858,(vlSelf->SocTop__DOT__io_axi_b_resp),2);
        tracep->fullBit(oldp+859,(vlSelf->SocTop__DOT__io_axi_b_valid));
        tracep->fullBit(oldp+860,(vlSelf->SocTop__DOT__io_axi_ar_ready));
        tracep->fullCData(oldp+861,(vlSelf->SocTop__DOT__io_axi_r_id),4);
        tracep->fullQData(oldp+862,(vlSelf->SocTop__DOT__io_axi_r_data),64);
        tracep->fullCData(oldp+864,(vlSelf->SocTop__DOT__io_axi_r_resp),2);
        tracep->fullBit(oldp+865,(vlSelf->SocTop__DOT__io_axi_r_last));
        tracep->fullBit(oldp+866,(vlSelf->SocTop__DOT__io_axi_r_valid));
        tracep->fullCData(oldp+867,(4U),3);
    }
}
