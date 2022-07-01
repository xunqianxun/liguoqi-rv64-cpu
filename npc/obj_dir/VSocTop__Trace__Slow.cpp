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
        tracep->declBit(c+666,"clk", false,-1);
        tracep->declBit(c+667,"rst", false,-1);
        tracep->declBit(c+668,"out_read_ram_ena", false,-1);
        tracep->declBit(c+669,"out_read_inst_ena", false,-1);
        tracep->declQuad(c+670,"out_addr_outp", false,-1, 63,0);
        tracep->declBus(c+672,"in_inst_data_in", false,-1, 31,0);
        tracep->declQuad(c+673,"in_ram_data_in", false,-1, 63,0);
        tracep->declBit(c+675,"out_write_ram_ena", false,-1);
        tracep->declQuad(c+676,"out_write_ram_data", false,-1, 63,0);
        tracep->declQuad(c+678,"out_write_ram_addr", false,-1, 63,0);
        tracep->declBit(c+666,"SocTop clk", false,-1);
        tracep->declBit(c+667,"SocTop rst", false,-1);
        tracep->declBit(c+668,"SocTop out_read_ram_ena", false,-1);
        tracep->declBit(c+669,"SocTop out_read_inst_ena", false,-1);
        tracep->declQuad(c+670,"SocTop out_addr_outp", false,-1, 63,0);
        tracep->declBus(c+672,"SocTop in_inst_data_in", false,-1, 31,0);
        tracep->declQuad(c+673,"SocTop in_ram_data_in", false,-1, 63,0);
        tracep->declBit(c+675,"SocTop out_write_ram_ena", false,-1);
        tracep->declQuad(c+676,"SocTop out_write_ram_data", false,-1, 63,0);
        tracep->declQuad(c+678,"SocTop out_write_ram_addr", false,-1, 63,0);
        tracep->declBus(c+716,"SocTop SLAVE_NUM", false,-1, 31,0);
        tracep->declBit(c+666,"SocTop aclk", false,-1);
        tracep->declQuad(c+634,"SocTop rvcpu_inst_addr", false,-1, 63,0);
        tracep->declBit(c+667,"SocTop rvcpu_inst_ena", false,-1);
        tracep->declQuad(c+5,"SocTop rvcpu_data_addr", false,-1, 63,0);
        tracep->declBus(c+7,"SocTop rvcpu_wmask", false,-1, 7,0);
        tracep->declQuad(c+8,"SocTop rvcpu_data_o", false,-1, 63,0);
        tracep->declBit(c+10,"SocTop rvcpu_we", false,-1);
        tracep->declBit(c+11,"SocTop rvcpu_re", false,-1);
        tracep->declBus(c+12,"SocTop i_cache_inst_data", false,-1, 31,0);
        tracep->declBit(c+13,"SocTop i_cache_inst_valid", false,-1);
        tracep->declBit(c+14,"SocTop i_cache_read_ena", false,-1);
        tracep->declQuad(c+680,"SocTop i_cache_addr", false,-1, 63,0);
        tracep->declBit(c+15,"SocTop i_cache_ready", false,-1);
        tracep->declQuad(c+16,"SocTop d_cache_data_out", false,-1, 63,0);
        tracep->declBit(c+682,"SocTop d_cache_mem_finish", false,-1);
        tracep->declQuad(c+5,"SocTop d_cache_out_addr", false,-1, 63,0);
        tracep->declQuad(c+683,"SocTop d_cache_out_data", false,-1, 63,0);
        tracep->declBit(c+18,"SocTop d_cache_read_ena", false,-1);
        tracep->declBit(c+685,"SocTop d_cache_write_ena", false,-1);
        tracep->declQuad(c+200,"SocTop arbitrate_d_data", false,-1, 63,0);
        tracep->declBit(c+636,"SocTop arbitrate_d_ok", false,-1);
        tracep->declBus(c+202,"SocTop arbitrate_i_data", false,-1, 31,0);
        tracep->declBit(c+637,"SocTop arbitrate_i_ok", false,-1);
        tracep->declBit(c+19,"SocTop arbitrate_ti_sign", false,-1);
        tracep->declBit(c+20,"SocTop time_init_sign", false,-1);
        tracep->declBus(c+717,"SocTop t_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+21,"SocTop t_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+718,"SocTop t_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+719,"SocTop t_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+720,"SocTop t_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+721,"SocTop t_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+722,"SocTop t_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+717,"SocTop t_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+203,"SocTop t_axi_aw_ready", false,-1);
        tracep->declBit(c+23,"SocTop t_axi_aw_valid", false,-1);
        tracep->declQuad(c+24,"SocTop t_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+204,"SocTop t_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+723,"SocTop t_axi_w_last", false,-1);
        tracep->declBit(c+205,"SocTop t_axi_w_valid", false,-1);
        tracep->declBit(c+206,"SocTop t_axi_w_ready", false,-1);
        tracep->declBus(c+207,"SocTop t_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+208,"SocTop t_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+209,"SocTop t_axi_b_valid", false,-1);
        tracep->declBit(c+723,"SocTop t_axi_b_ready", false,-1);
        tracep->declBus(c+26,"SocTop t_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+27,"SocTop t_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+718,"SocTop t_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+719,"SocTop t_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+720,"SocTop t_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+721,"SocTop t_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+722,"SocTop t_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+717,"SocTop t_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+29,"SocTop t_axi_ar_valid", false,-1);
        tracep->declBit(c+210,"SocTop t_axi_ar_ready", false,-1);
        tracep->declBus(c+638,"SocTop t_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+211,"SocTop t_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+639,"SocTop t_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+640,"SocTop t_axi_r_last", false,-1);
        tracep->declBit(c+213,"SocTop t_axi_r_valid", false,-1);
        tracep->declBit(c+723,"SocTop t_axi_r_ready", false,-1);
        tracep->declBus(c+214,"SocTop add_axi_aw_id", false,-1, 11,0);
        tracep->declArray(c+215,"SocTop add_axi_aw_addr", false,-1, 191,0);
        tracep->declBus(c+221,"SocTop add_axi_aw_len", false,-1, 23,0);
        tracep->declBus(c+222,"SocTop add_axi_aw_size", false,-1, 8,0);
        tracep->declBus(c+223,"SocTop add_axi_aw_burst", false,-1, 5,0);
        tracep->declBus(c+224,"SocTop add_axi_aw_cache", false,-1, 11,0);
        tracep->declBus(c+225,"SocTop add_axi_aw_prot", false,-1, 8,0);
        tracep->declBus(c+226,"SocTop add_axi_aw_qos", false,-1, 11,0);
        tracep->declBus(c+227,"SocTop add_axi_aw_valid", false,-1, 2,0);
        tracep->declBus(c+228,"SocTop add_axi_aw_ready", false,-1, 2,0);
        tracep->declArray(c+229,"SocTop add_axi_w_data", false,-1, 191,0);
        tracep->declBus(c+235,"SocTop add_axi_w_strb", false,-1, 23,0);
        tracep->declBus(c+236,"SocTop add_axi_w_last", false,-1, 2,0);
        tracep->declBus(c+237,"SocTop add_axi_w_valid", false,-1, 2,0);
        tracep->declBus(c+238,"SocTop add_axi_w_ready", false,-1, 2,0);
        tracep->declBus(c+30,"SocTop add_axi_b_id", false,-1, 11,0);
        tracep->declBus(c+1,"SocTop add_axi_b_resp", false,-1, 5,0);
        tracep->declBus(c+31,"SocTop add_axi_b_valid", false,-1, 2,0);
        tracep->declBus(c+239,"SocTop add_axi_b_ready", false,-1, 2,0);
        tracep->declBus(c+240,"SocTop add_axi_ar_id", false,-1, 11,0);
        tracep->declArray(c+241,"SocTop add_axi_ar_addr", false,-1, 191,0);
        tracep->declBus(c+247,"SocTop add_axi_ar_len", false,-1, 23,0);
        tracep->declBus(c+248,"SocTop add_axi_ar_size", false,-1, 8,0);
        tracep->declBus(c+249,"SocTop add_axi_ar_burst", false,-1, 5,0);
        tracep->declBus(c+250,"SocTop add_axi_ar_cache", false,-1, 11,0);
        tracep->declBus(c+251,"SocTop add_axi_ar_prot", false,-1, 8,0);
        tracep->declBus(c+252,"SocTop add_axi_ar_qos", false,-1, 11,0);
        tracep->declBus(c+253,"SocTop add_axi_ar_valid", false,-1, 2,0);
        tracep->declBus(c+254,"SocTop add_axi_ar_ready", false,-1, 2,0);
        tracep->declBus(c+641,"SocTop add_axi_r_id", false,-1, 11,0);
        tracep->declArray(c+32,"SocTop add_axi_r_data", false,-1, 191,0);
        tracep->declBus(c+2,"SocTop add_axi_r_resp", false,-1, 5,0);
        tracep->declBus(c+642,"SocTop add_axi_r_last", false,-1, 2,0);
        tracep->declBus(c+255,"SocTop add_axi_r_valid", false,-1, 2,0);
        tracep->declBus(c+256,"SocTop add_axi_r_ready", false,-1, 2,0);
        tracep->declBus(c+257,"SocTop soc_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+258,"SocTop soc_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+260,"SocTop soc_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+261,"SocTop soc_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+262,"SocTop soc_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+263,"SocTop soc_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+264,"SocTop soc_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+265,"SocTop soc_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+266,"SocTop soc_axi_aw_ready", false,-1);
        tracep->declBit(c+267,"SocTop soc_axi_aw_valid", false,-1);
        tracep->declQuad(c+268,"SocTop soc_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+270,"SocTop soc_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+271,"SocTop soc_axi_w_last", false,-1);
        tracep->declBit(c+272,"SocTop soc_axi_w_valid", false,-1);
        tracep->declBit(c+273,"SocTop soc_axi_w_ready", false,-1);
        tracep->declBus(c+257,"SocTop soc_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+724,"SocTop soc_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+274,"SocTop soc_axi_b_valid", false,-1);
        tracep->declBit(c+275,"SocTop soc_axi_b_ready", false,-1);
        tracep->declBus(c+276,"SocTop soc_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+277,"SocTop soc_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+279,"SocTop soc_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+280,"SocTop soc_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+281,"SocTop soc_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+282,"SocTop soc_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+283,"SocTop soc_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+284,"SocTop soc_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+285,"SocTop soc_axi_ar_valid", false,-1);
        tracep->declBit(c+286,"SocTop soc_axi_ar_ready", false,-1);
        tracep->declBus(c+287,"SocTop soc_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+686,"SocTop soc_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+724,"SocTop soc_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+288,"SocTop soc_axi_r_last", false,-1);
        tracep->declBit(c+289,"SocTop soc_axi_r_valid", false,-1);
        tracep->declBit(c+290,"SocTop soc_axi_r_ready", false,-1);
        tracep->declBus(c+291,"SocTop tim_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+292,"SocTop tim_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+294,"SocTop tim_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+295,"SocTop tim_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+296,"SocTop tim_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+297,"SocTop tim_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+298,"SocTop tim_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+299,"SocTop tim_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+300,"SocTop tim_axi_aw_ready", false,-1);
        tracep->declBit(c+301,"SocTop tim_axi_aw_valid", false,-1);
        tracep->declQuad(c+302,"SocTop tim_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+304,"SocTop tim_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+305,"SocTop tim_axi_w_last", false,-1);
        tracep->declBit(c+306,"SocTop tim_axi_w_valid", false,-1);
        tracep->declBit(c+307,"SocTop tim_axi_w_ready", false,-1);
        tracep->declBus(c+165,"SocTop tim_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+3,"SocTop tim_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+38,"SocTop tim_axi_b_valid", false,-1);
        tracep->declBit(c+308,"SocTop tim_axi_b_ready", false,-1);
        tracep->declBus(c+309,"SocTop tim_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+310,"SocTop tim_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+312,"SocTop tim_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+313,"SocTop tim_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+314,"SocTop tim_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+315,"SocTop tim_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+316,"SocTop tim_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+317,"SocTop tim_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+318,"SocTop tim_axi_ar_valid", false,-1);
        tracep->declBit(c+319,"SocTop tim_axi_ar_ready", false,-1);
        tracep->declBus(c+320,"SocTop tim_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+39,"SocTop tim_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+4,"SocTop tim_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+321,"SocTop tim_axi_r_last", false,-1);
        tracep->declBit(c+725,"SocTop tim_axi_r_valid", false,-1);
        tracep->declBit(c+322,"SocTop tim_axi_r_ready", false,-1);
        tracep->declBus(c+323,"SocTop io_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+324,"SocTop io_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+326,"SocTop io_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+327,"SocTop io_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+328,"SocTop io_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+329,"SocTop io_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+330,"SocTop io_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+331,"SocTop io_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+726,"SocTop io_axi_aw_ready", false,-1);
        tracep->declBit(c+332,"SocTop io_axi_aw_valid", false,-1);
        tracep->declQuad(c+333,"SocTop io_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+335,"SocTop io_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+336,"SocTop io_axi_w_last", false,-1);
        tracep->declBit(c+337,"SocTop io_axi_w_valid", false,-1);
        tracep->declBit(c+727,"SocTop io_axi_w_ready", false,-1);
        tracep->declBus(c+728,"SocTop io_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+729,"SocTop io_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+730,"SocTop io_axi_b_valid", false,-1);
        tracep->declBit(c+338,"SocTop io_axi_b_ready", false,-1);
        tracep->declBus(c+339,"SocTop io_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+340,"SocTop io_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+342,"SocTop io_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+343,"SocTop io_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+344,"SocTop io_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+345,"SocTop io_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+346,"SocTop io_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+347,"SocTop io_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+348,"SocTop io_axi_ar_valid", false,-1);
        tracep->declBit(c+731,"SocTop io_axi_ar_ready", false,-1);
        tracep->declBus(c+732,"SocTop io_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+733,"SocTop io_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+735,"SocTop io_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+736,"SocTop io_axi_r_last", false,-1);
        tracep->declBit(c+737,"SocTop io_axi_r_valid", false,-1);
        tracep->declBit(c+349,"SocTop io_axi_r_ready", false,-1);
        tracep->declBus(c+738,"SocTop d_cache_mask_gd", false,-1, 7,0);
        tracep->declBit(c+350,"SocTop read_ram_sign", false,-1);
        tracep->declBit(c+351,"SocTop read_inst_sign", false,-1);
        tracep->declQuad(c+352,"SocTop addr_oup_sign", false,-1, 63,0);
        tracep->declBus(c+672,"SocTop inst_data_sign", false,-1, 31,0);
        tracep->declQuad(c+673,"SocTop ram_data_sign", false,-1, 63,0);
        tracep->declBit(c+274,"SocTop write_ena_sign", false,-1);
        tracep->declQuad(c+354,"SocTop write_addr_sign", false,-1, 63,0);
        tracep->declQuad(c+356,"SocTop write_data_sign", false,-1, 63,0);
        tracep->declBus(c+41,"SocTop prot_chose_write", false,-1, 2,0);
        tracep->declBus(c+42,"SocTop prot_chose_read", false,-1, 2,0);
        tracep->declBit(c+666,"SocTop rvcpu1 clk", false,-1);
        tracep->declBit(c+667,"SocTop rvcpu1 rst", false,-1);
        tracep->declQuad(c+634,"SocTop rvcpu1 inst_addr", false,-1, 63,0);
        tracep->declBit(c+667,"SocTop rvcpu1 inst_ena", false,-1);
        tracep->declBit(c+15,"SocTop rvcpu1 inst_ready", false,-1);
        tracep->declBus(c+12,"SocTop rvcpu1 inst", false,-1, 31,0);
        tracep->declBit(c+13,"SocTop rvcpu1 bui_inst_valid", false,-1);
        tracep->declQuad(c+5,"SocTop rvcpu1 data_addr", false,-1, 63,0);
        tracep->declBus(c+7,"SocTop rvcpu1 wmask", false,-1, 7,0);
        tracep->declQuad(c+8,"SocTop rvcpu1 data_o", false,-1, 63,0);
        tracep->declQuad(c+16,"SocTop rvcpu1 data_i", false,-1, 63,0);
        tracep->declBit(c+10,"SocTop rvcpu1 we", false,-1);
        tracep->declBit(c+11,"SocTop rvcpu1 re", false,-1);
        tracep->declBit(c+682,"SocTop rvcpu1 mem_finish", false,-1);
        tracep->declBit(c+20,"SocTop rvcpu1 timer_intr", false,-1);
        tracep->declQuad(c+688,"SocTop rvcpu1 pip_regfile_x1", false,-1, 63,0);
        tracep->declBit(c+690,"SocTop rvcpu1 pip_refflie_x1_ena", false,-1);
        tracep->declBus(c+43,"SocTop rvcpu1 pip_regfile_x1_addr", false,-1, 4,0);
        tracep->declQuad(c+691,"SocTop rvcpu1 pip_pc", false,-1, 63,0);
        tracep->declBit(c+44,"SocTop rvcpu1 if_stall_req", false,-1);
        tracep->declQuad(c+358,"SocTop rvcpu1 if_id_pc", false,-1, 63,0);
        tracep->declBus(c+360,"SocTop rvcpu1 if_id_inst", false,-1, 31,0);
        tracep->declBit(c+361,"SocTop rvcpu1 ex_flush", false,-1);
        tracep->declQuad(c+45,"SocTop rvcpu1 ex_id_rd_data", false,-1, 63,0);
        tracep->declBus(c+362,"SocTop rvcpu1 ex_id_rd_addr", false,-1, 4,0);
        tracep->declBit(c+363,"SocTop rvcpu1 ex_id_rd_ena", false,-1);
        tracep->declBus(c+364,"SocTop rvcpu1 ex_id_rd_type", false,-1, 7,0);
        tracep->declBus(c+365,"SocTop rvcpu1 ex_mem_sel", false,-1, 2,0);
        tracep->declQuad(c+366,"SocTop rvcpu1 ex_mem_addr", false,-1, 63,0);
        tracep->declBit(c+361,"SocTop rvcpu1 ex_pc_branchena", false,-1);
        tracep->declQuad(c+368,"SocTop rvcpu1 ex_pc_branchpc", false,-1, 63,0);
        tracep->declBit(c+166,"SocTop rvcpu1 ex_ctrl_req", false,-1);
        tracep->declBus(c+47,"SocTop rvcpu1 id_reg_addr1", false,-1, 4,0);
        tracep->declBit(c+48,"SocTop rvcpu1 id_reg_ena1", false,-1);
        tracep->declBus(c+49,"SocTop rvcpu1 id_reg_addr2", false,-1, 4,0);
        tracep->declBit(c+50,"SocTop rvcpu1 id_reg_ena2", false,-1);
        tracep->declBit(c+693,"SocTop rvcpu1 id_ctrl_req", false,-1);
        tracep->declBus(c+51,"SocTop rvcpu1 id_ex_type", false,-1, 7,0);
        tracep->declBus(c+52,"SocTop rvcpu1 id_ex_opcode", false,-1, 7,0);
        tracep->declQuad(c+53,"SocTop rvcpu1 id_ex_op", false,-1, 63,0);
        tracep->declQuad(c+55,"SocTop rvcpu1 id_ex_op2", false,-1, 63,0);
        tracep->declBit(c+57,"SocTop rvcpu1 id_ex_rd_ena", false,-1);
        tracep->declBus(c+58,"SocTop rvcpu1 id_ex_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+59,"SocTop rvcpu1 id_ex_pc", false,-1, 63,0);
        tracep->declBus(c+61,"SocTop rvcpu1 id_ex_s_offset", false,-1, 11,0);
        tracep->declBus(c+62,"SocTop rvcpu1 id_ex_memsel", false,-1, 2,0);
        tracep->declQuad(c+167,"SocTop rvcpu1 id_pip_jalrpc", false,-1, 63,0);
        tracep->declBit(c+63,"SocTop rvcpu1 id_pip_jalrena", false,-1);
        tracep->declBit(c+64,"SocTop rvcpu1 id_if_flush", false,-1);
        tracep->declBus(c+65,"SocTop rvcpu1 stall_ctrl", false,-1, 4,0);
        tracep->declQuad(c+694,"SocTop rvcpu1 regs_id_data1", false,-1, 63,0);
        tracep->declQuad(c+696,"SocTop rvcpu1 regs_id_data2", false,-1, 63,0);
        tracep->declQuad(c+66,"SocTop rvcpu1 mem_id_data", false,-1, 63,0);
        tracep->declBus(c+370,"SocTop rvcpu1 mem_id_addr", false,-1, 4,0);
        tracep->declBit(c+371,"SocTop rvcpu1 mem_id_ena", false,-1);
        tracep->declBit(c+698,"SocTop rvcpu1 mem_ctrl_req", false,-1);
        tracep->declBus(c+372,"SocTop rvcpu1 wb_id_addr", false,-1, 4,0);
        tracep->declBit(c+373,"SocTop rvcpu1 wb_id_ena", false,-1);
        tracep->declQuad(c+374,"SocTop rvcpu1 wb_regfile_data", false,-1, 63,0);
        tracep->declQuad(c+376,"SocTop rvcpu1 idex_ex_pc", false,-1, 63,0);
        tracep->declBus(c+378,"SocTop rvcpu1 idex_ex_type", false,-1, 7,0);
        tracep->declBus(c+379,"SocTop rvcpu1 idex_ex_opcode", false,-1, 7,0);
        tracep->declQuad(c+380,"SocTop rvcpu1 idex_ex_op1", false,-1, 63,0);
        tracep->declQuad(c+382,"SocTop rvcpu1 idex_ex_op2", false,-1, 63,0);
        tracep->declBit(c+384,"SocTop rvcpu1 idex_ex_rdena", false,-1);
        tracep->declBus(c+362,"SocTop rvcpu1 idex_ex_rdaddr", false,-1, 4,0);
        tracep->declBus(c+385,"SocTop rvcpu1 idex_ex_offset", false,-1, 11,0);
        tracep->declBus(c+365,"SocTop rvcpu1 idex_ex_sel", false,-1, 2,0);
        tracep->declBus(c+386,"SocTop rvcpu1 exmem_mem_type", false,-1, 7,0);
        tracep->declBit(c+371,"SocTop rvcpu1 exmem_mem_ena", false,-1);
        tracep->declQuad(c+387,"SocTop rvcpu1 exmem_mem_data", false,-1, 63,0);
        tracep->declBus(c+370,"SocTop rvcpu1 exmem_mem_addr", false,-1, 4,0);
        tracep->declBus(c+389,"SocTop rvcpu1 exmem_mem_sel", false,-1, 2,0);
        tracep->declQuad(c+390,"SocTop rvcpu1 exmem_mem_lsaddr", false,-1, 63,0);
        tracep->declQuad(c+68,"SocTop rvcpu1 ex_ex_mem_pc", false,-1, 63,0);
        tracep->declQuad(c+392,"SocTop rvcpu1 ex_mem_mem_pc", false,-1, 63,0);
        tracep->declQuad(c+70,"SocTop rvcpu1 mem_mem_wb_pc", false,-1, 63,0);
        tracep->declBus(c+72,"SocTop rvcpu1 id_id_ex_inst", false,-1, 31,0);
        tracep->declBus(c+394,"SocTop rvcpu1 id_ex_ex_inst", false,-1, 31,0);
        tracep->declBus(c+73,"SocTop rvcpu1 ex_ex_mem_inst", false,-1, 31,0);
        tracep->declBus(c+395,"SocTop rvcpu1 ex_mem_mem_inst", false,-1, 31,0);
        tracep->declBus(c+74,"SocTop rvcpu1 mem_mem_wb_inst", false,-1, 31,0);
        tracep->declBit(c+667,"SocTop rvcpu1 pip_fore0 rst", false,-1);
        tracep->declQuad(c+634,"SocTop rvcpu1 pip_fore0 pc_i", false,-1, 63,0);
        tracep->declBus(c+12,"SocTop rvcpu1 pip_fore0 inst", false,-1, 31,0);
        tracep->declQuad(c+688,"SocTop rvcpu1 pip_fore0 x1_data", false,-1, 63,0);
        tracep->declQuad(c+691,"SocTop rvcpu1 pip_fore0 pc_o", false,-1, 63,0);
        tracep->declBus(c+43,"SocTop rvcpu1 pip_fore0 x1_addr", false,-1, 4,0);
        tracep->declBit(c+690,"SocTop rvcpu1 pip_fore0 x1_ena", false,-1);
        tracep->declBus(c+75,"SocTop rvcpu1 pip_fore0 j_imm", false,-1, 20,1);
        tracep->declBus(c+76,"SocTop rvcpu1 pip_fore0 i_imm", false,-1, 11,0);
        tracep->declBus(c+77,"SocTop rvcpu1 pip_fore0 b_imm", false,-1, 12,1);
        tracep->declBus(c+78,"SocTop rvcpu1 pip_fore0 opcode", false,-1, 6,0);
        tracep->declBit(c+79,"SocTop rvcpu1 pip_fore0 inst_jal", false,-1);
        tracep->declBit(c+80,"SocTop rvcpu1 pip_fore0 inst_jalr", false,-1);
        tracep->declBit(c+81,"SocTop rvcpu1 pip_fore0 inst_bxx", false,-1);
        tracep->declQuad(c+82,"SocTop rvcpu1 pip_fore0 operand1", false,-1, 63,0);
        tracep->declQuad(c+84,"SocTop rvcpu1 pip_fore0 operand2", false,-1, 63,0);
        tracep->declQuad(c+86,"SocTop rvcpu1 pip_fore0 j_pc", false,-1, 63,0);
        tracep->declBit(c+666,"SocTop rvcpu1 pc1 clk", false,-1);
        tracep->declBit(c+667,"SocTop rvcpu1 pc1 rst", false,-1);
        tracep->declQuad(c+691,"SocTop rvcpu1 pc1 static_pc_i", false,-1, 63,0);
        tracep->declQuad(c+167,"SocTop rvcpu1 pc1 id_pc_i", false,-1, 63,0);
        tracep->declBit(c+63,"SocTop rvcpu1 pc1 id_pc_ena", false,-1);
        tracep->declQuad(c+368,"SocTop rvcpu1 pc1 ex_pc_i", false,-1, 63,0);
        tracep->declBit(c+361,"SocTop rvcpu1 pc1 ex_pc_ena", false,-1);
        tracep->declBit(c+88,"SocTop rvcpu1 pc1 pc_stall", false,-1);
        tracep->declQuad(c+634,"SocTop rvcpu1 pc1 pc", false,-1, 63,0);
        tracep->declBit(c+667,"SocTop rvcpu1 pc1 ce", false,-1);
        tracep->declBit(c+666,"SocTop rvcpu1 if_id2 clk", false,-1);
        tracep->declBit(c+667,"SocTop rvcpu1 if_id2 rst", false,-1);
        tracep->declQuad(c+634,"SocTop rvcpu1 if_id2 if_pc", false,-1, 63,0);
        tracep->declBus(c+12,"SocTop rvcpu1 if_id2 if_inst", false,-1, 31,0);
        tracep->declBit(c+361,"SocTop rvcpu1 if_id2 if_id_flush", false,-1);
        tracep->declBit(c+64,"SocTop rvcpu1 if_id2 if_id_bubble", false,-1);
        tracep->declBit(c+13,"SocTop rvcpu1 if_id2 if_inst_valid", false,-1);
        tracep->declBit(c+15,"SocTop rvcpu1 if_id2 if_inst_ready", false,-1);
        tracep->declBus(c+65,"SocTop rvcpu1 if_id2 stall_ctrl", false,-1, 4,0);
        tracep->declBit(c+44,"SocTop rvcpu1 if_id2 if_stall_req", false,-1);
        tracep->declQuad(c+358,"SocTop rvcpu1 if_id2 id_pc", false,-1, 63,0);
        tracep->declBus(c+360,"SocTop rvcpu1 if_id2 id_inst", false,-1, 31,0);
        tracep->declBit(c+667,"SocTop rvcpu1 id3 rst", false,-1);
        tracep->declBus(c+360,"SocTop rvcpu1 id3 inst_i", false,-1, 31,0);
        tracep->declQuad(c+358,"SocTop rvcpu1 id3 pc_i", false,-1, 63,0);
        tracep->declQuad(c+694,"SocTop rvcpu1 id3 op1_data_i", false,-1, 63,0);
        tracep->declQuad(c+696,"SocTop rvcpu1 id3 op2_data_i", false,-1, 63,0);
        tracep->declBus(c+47,"SocTop rvcpu1 id3 op1_addr_o", false,-1, 4,0);
        tracep->declBus(c+49,"SocTop rvcpu1 id3 op2_addr_o", false,-1, 4,0);
        tracep->declBit(c+48,"SocTop rvcpu1 id3 op1_read_o", false,-1);
        tracep->declBit(c+50,"SocTop rvcpu1 id3 op2_read_o", false,-1);
        tracep->declQuad(c+45,"SocTop rvcpu1 id3 ex_rd_data", false,-1, 63,0);
        tracep->declBus(c+362,"SocTop rvcpu1 id3 ex_rd_addr", false,-1, 4,0);
        tracep->declBit(c+363,"SocTop rvcpu1 id3 ex_rd_ena", false,-1);
        tracep->declBus(c+364,"SocTop rvcpu1 id3 ex_inst_type", false,-1, 7,0);
        tracep->declQuad(c+66,"SocTop rvcpu1 id3 mem_rd_data", false,-1, 63,0);
        tracep->declBus(c+370,"SocTop rvcpu1 id3 mem_rd_addr", false,-1, 4,0);
        tracep->declBit(c+371,"SocTop rvcpu1 id3 mem_rd_ena", false,-1);
        tracep->declBit(c+373,"SocTop rvcpu1 id3 wb_rd_ena", false,-1);
        tracep->declBus(c+372,"SocTop rvcpu1 id3 wb_rd_addr", false,-1, 4,0);
        tracep->declBit(c+693,"SocTop rvcpu1 id3 id_stall_req", false,-1);
        tracep->declBit(c+44,"SocTop rvcpu1 id3 if_stall_req", false,-1);
        tracep->declBus(c+51,"SocTop rvcpu1 id3 inst_type", false,-1, 7,0);
        tracep->declBus(c+52,"SocTop rvcpu1 id3 inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+53,"SocTop rvcpu1 id3 op1_o", false,-1, 63,0);
        tracep->declQuad(c+55,"SocTop rvcpu1 id3 op2_o", false,-1, 63,0);
        tracep->declBit(c+57,"SocTop rvcpu1 id3 rd_w_ena", false,-1);
        tracep->declBus(c+58,"SocTop rvcpu1 id3 rd_w_addr", false,-1, 4,0);
        tracep->declQuad(c+59,"SocTop rvcpu1 id3 pc_o", false,-1, 63,0);
        tracep->declBus(c+72,"SocTop rvcpu1 id3 inst_o", false,-1, 31,0);
        tracep->declBus(c+61,"SocTop rvcpu1 id3 store_addr_offset", false,-1, 11,0);
        tracep->declBus(c+62,"SocTop rvcpu1 id3 mem_op_sel", false,-1, 2,0);
        tracep->declBit(c+63,"SocTop rvcpu1 id3 jalr_pc_ena", false,-1);
        tracep->declQuad(c+167,"SocTop rvcpu1 id3 jalr_pc", false,-1, 63,0);
        tracep->declBit(c+64,"SocTop rvcpu1 id3 id_flush", false,-1);
        tracep->declBus(c+396,"SocTop rvcpu1 id3 opcode", false,-1, 6,0);
        tracep->declBus(c+397,"SocTop rvcpu1 id3 rd", false,-1, 4,0);
        tracep->declBus(c+398,"SocTop rvcpu1 id3 funct3", false,-1, 2,0);
        tracep->declBus(c+89,"SocTop rvcpu1 id3 rs1", false,-1, 4,0);
        tracep->declBus(c+399,"SocTop rvcpu1 id3 imm", false,-1, 11,0);
        tracep->declBus(c+400,"SocTop rvcpu1 id3 funct7", false,-1, 6,0);
        tracep->declBus(c+401,"SocTop rvcpu1 id3 rs2", false,-1, 4,0);
        tracep->declBus(c+402,"SocTop rvcpu1 id3 u_imm", false,-1, 19,0);
        tracep->declBus(c+403,"SocTop rvcpu1 id3 s_imm", false,-1, 11,0);
        tracep->declBit(c+90,"SocTop rvcpu1 id3 inst_lui", false,-1);
        tracep->declBit(c+91,"SocTop rvcpu1 id3 inst_auipc", false,-1);
        tracep->declBit(c+92,"SocTop rvcpu1 id3 inst_jal", false,-1);
        tracep->declBit(c+93,"SocTop rvcpu1 id3 inst_jalr", false,-1);
        tracep->declBit(c+94,"SocTop rvcpu1 id3 inst_jump", false,-1);
        tracep->declBit(c+169,"SocTop rvcpu1 id3 inst_addi", false,-1);
        tracep->declBit(c+170,"SocTop rvcpu1 id3 inst_slti", false,-1);
        tracep->declBit(c+171,"SocTop rvcpu1 id3 inst_sltiu", false,-1);
        tracep->declBit(c+172,"SocTop rvcpu1 id3 inst_xori", false,-1);
        tracep->declBit(c+173,"SocTop rvcpu1 id3 inst_ori", false,-1);
        tracep->declBit(c+174,"SocTop rvcpu1 id3 inst_andi", false,-1);
        tracep->declBit(c+175,"SocTop rvcpu1 id3 inst_slli", false,-1);
        tracep->declBit(c+176,"SocTop rvcpu1 id3 inst_srli", false,-1);
        tracep->declBit(c+95,"SocTop rvcpu1 id3 inst_srai", false,-1);
        tracep->declBit(c+96,"SocTop rvcpu1 id3 inst_addiw", false,-1);
        tracep->declBit(c+97,"SocTop rvcpu1 id3 inst_slliw", false,-1);
        tracep->declBit(c+98,"SocTop rvcpu1 id3 inst_srliw", false,-1);
        tracep->declBit(c+99,"SocTop rvcpu1 id3 inst_sraiw", false,-1);
        tracep->declBit(c+100,"SocTop rvcpu1 id3 inst_add", false,-1);
        tracep->declBit(c+101,"SocTop rvcpu1 id3 inst_sub", false,-1);
        tracep->declBit(c+102,"SocTop rvcpu1 id3 inst_sll", false,-1);
        tracep->declBit(c+103,"SocTop rvcpu1 id3 inst_slt", false,-1);
        tracep->declBit(c+104,"SocTop rvcpu1 id3 inst_sltu", false,-1);
        tracep->declBit(c+105,"SocTop rvcpu1 id3 inst_xor", false,-1);
        tracep->declBit(c+106,"SocTop rvcpu1 id3 inst_srl", false,-1);
        tracep->declBit(c+107,"SocTop rvcpu1 id3 inst_sra", false,-1);
        tracep->declBit(c+108,"SocTop rvcpu1 id3 inst_or", false,-1);
        tracep->declBit(c+109,"SocTop rvcpu1 id3 inst_and", false,-1);
        tracep->declBit(c+110,"SocTop rvcpu1 id3 inst_addw", false,-1);
        tracep->declBit(c+111,"SocTop rvcpu1 id3 inst_subw", false,-1);
        tracep->declBit(c+112,"SocTop rvcpu1 id3 inst_sllw", false,-1);
        tracep->declBit(c+113,"SocTop rvcpu1 id3 inst_srlw", false,-1);
        tracep->declBit(c+114,"SocTop rvcpu1 id3 inst_sraw", false,-1);
        tracep->declBit(c+177,"SocTop rvcpu1 id3 inst_beq", false,-1);
        tracep->declBit(c+178,"SocTop rvcpu1 id3 inst_ben", false,-1);
        tracep->declBit(c+179,"SocTop rvcpu1 id3 inst_blt", false,-1);
        tracep->declBit(c+180,"SocTop rvcpu1 id3 inst_bge", false,-1);
        tracep->declBit(c+181,"SocTop rvcpu1 id3 inst_bltu", false,-1);
        tracep->declBit(c+182,"SocTop rvcpu1 id3 inst_bgeu", false,-1);
        tracep->declBit(c+115,"SocTop rvcpu1 id3 inst_csrrw", false,-1);
        tracep->declBit(c+116,"SocTop rvcpu1 id3 inst_csrrs", false,-1);
        tracep->declBit(c+117,"SocTop rvcpu1 id3 inst_csrrc", false,-1);
        tracep->declBit(c+118,"SocTop rvcpu1 id3 inst_csrrwi", false,-1);
        tracep->declBit(c+183,"SocTop rvcpu1 id3 inst_csrrsi", false,-1);
        tracep->declBit(c+184,"SocTop rvcpu1 id3 inst_csrrci", false,-1);
        tracep->declBit(c+119,"SocTop rvcpu1 id3 inst_csr_rs1", false,-1);
        tracep->declBit(c+118,"SocTop rvcpu1 id3 inst_csr_imm", false,-1);
        tracep->declBit(c+185,"SocTop rvcpu1 id3 inst_ecall", false,-1);
        tracep->declBit(c+120,"SocTop rvcpu1 id3 inst_ebreak", false,-1);
        tracep->declBit(c+186,"SocTop rvcpu1 id3 inst_mret", false,-1);
        tracep->declBit(c+699,"SocTop rvcpu1 id3 op1_loda_relate", false,-1);
        tracep->declBit(c+700,"SocTop rvcpu1 id3 op2_loda_relate", false,-1);
        tracep->declBit(c+121,"SocTop rvcpu1 id3 ex_op1", false,-1);
        tracep->declBit(c+122,"SocTop rvcpu1 id3 mem_op1", false,-1);
        tracep->declBit(c+187,"SocTop rvcpu1 id3 ex_op2", false,-1);
        tracep->declBit(c+188,"SocTop rvcpu1 id3 mem_op2", false,-1);
        tracep->declBit(c+189,"SocTop rvcpu1 id3 wb_op1", false,-1);
        tracep->declQuad(c+190,"SocTop rvcpu1 id3 jalr_pc_temp", false,-1, 63,0);
        tracep->declBit(c+192,"SocTop rvcpu1 id3 predict_success", false,-1);
        tracep->declBit(c+666,"SocTop rvcpu1 id_ex4 clk", false,-1);
        tracep->declBit(c+667,"SocTop rvcpu1 id_ex4 rst", false,-1);
        tracep->declBit(c+361,"SocTop rvcpu1 id_ex4 id_ex_bubble", false,-1);
        tracep->declBus(c+65,"SocTop rvcpu1 id_ex4 stall_ctrl", false,-1, 4,0);
        tracep->declBus(c+72,"SocTop rvcpu1 id_ex4 id_inst", false,-1, 31,0);
        tracep->declQuad(c+59,"SocTop rvcpu1 id_ex4 id_pc", false,-1, 63,0);
        tracep->declBus(c+51,"SocTop rvcpu1 id_ex4 id_inst_type", false,-1, 7,0);
        tracep->declBus(c+52,"SocTop rvcpu1 id_ex4 id_inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+53,"SocTop rvcpu1 id_ex4 id_op1", false,-1, 63,0);
        tracep->declQuad(c+55,"SocTop rvcpu1 id_ex4 id_op2", false,-1, 63,0);
        tracep->declBit(c+57,"SocTop rvcpu1 id_ex4 id_rd_ena", false,-1);
        tracep->declBus(c+58,"SocTop rvcpu1 id_ex4 id_rd_addr", false,-1, 4,0);
        tracep->declBus(c+61,"SocTop rvcpu1 id_ex4 id_addr_offset", false,-1, 11,0);
        tracep->declBus(c+62,"SocTop rvcpu1 id_ex4 id_ls_sel", false,-1, 2,0);
        tracep->declBus(c+394,"SocTop rvcpu1 id_ex4 ex_inst", false,-1, 31,0);
        tracep->declQuad(c+376,"SocTop rvcpu1 id_ex4 ex_pc", false,-1, 63,0);
        tracep->declBus(c+378,"SocTop rvcpu1 id_ex4 ex_inst_type", false,-1, 7,0);
        tracep->declBus(c+379,"SocTop rvcpu1 id_ex4 ex_inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+380,"SocTop rvcpu1 id_ex4 ex_op1", false,-1, 63,0);
        tracep->declQuad(c+382,"SocTop rvcpu1 id_ex4 ex_op2", false,-1, 63,0);
        tracep->declBit(c+384,"SocTop rvcpu1 id_ex4 ex_rd_ena", false,-1);
        tracep->declBus(c+362,"SocTop rvcpu1 id_ex4 ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+385,"SocTop rvcpu1 id_ex4 ex_addr_offset", false,-1, 11,0);
        tracep->declBus(c+365,"SocTop rvcpu1 id_ex4 ex_ls_sel", false,-1, 2,0);
        tracep->declBit(c+666,"SocTop rvcpu1 ex5 clk", false,-1);
        tracep->declBit(c+667,"SocTop rvcpu1 ex5 rst", false,-1);
        tracep->declQuad(c+376,"SocTop rvcpu1 ex5 pc_i", false,-1, 63,0);
        tracep->declBus(c+394,"SocTop rvcpu1 ex5 id_ex_inst", false,-1, 31,0);
        tracep->declBus(c+378,"SocTop rvcpu1 ex5 inst_type_i", false,-1, 7,0);
        tracep->declBus(c+379,"SocTop rvcpu1 ex5 inst_opcode_i", false,-1, 7,0);
        tracep->declQuad(c+380,"SocTop rvcpu1 ex5 op1_i", false,-1, 63,0);
        tracep->declQuad(c+382,"SocTop rvcpu1 ex5 op2_i", false,-1, 63,0);
        tracep->declBit(c+384,"SocTop rvcpu1 ex5 rd_ena_i", false,-1);
        tracep->declBus(c+362,"SocTop rvcpu1 ex5 rd_addr_i", false,-1, 4,0);
        tracep->declBus(c+365,"SocTop rvcpu1 ex5 ls_sel_i", false,-1, 2,0);
        tracep->declBus(c+385,"SocTop rvcpu1 ex5 addr_offsel_i", false,-1, 11,0);
        tracep->declBus(c+364,"SocTop rvcpu1 ex5 inst_type_o", false,-1, 7,0);
        tracep->declBit(c+363,"SocTop rvcpu1 ex5 rd_ena_o", false,-1);
        tracep->declBus(c+362,"SocTop rvcpu1 ex5 rd_addr_o", false,-1, 4,0);
        tracep->declQuad(c+45,"SocTop rvcpu1 ex5 rd_data_o", false,-1, 63,0);
        tracep->declQuad(c+68,"SocTop rvcpu1 ex5 ex_pc_o", false,-1, 63,0);
        tracep->declBus(c+73,"SocTop rvcpu1 ex5 ex_inst_o", false,-1, 31,0);
        tracep->declBus(c+365,"SocTop rvcpu1 ex5 ls_sel_o", false,-1, 2,0);
        tracep->declQuad(c+366,"SocTop rvcpu1 ex5 ls_addr_o", false,-1, 63,0);
        tracep->declBit(c+361,"SocTop rvcpu1 ex5 ex_flush", false,-1);
        tracep->declBit(c+361,"SocTop rvcpu1 ex5 branch_pc_ena", false,-1);
        tracep->declQuad(c+368,"SocTop rvcpu1 ex5 branch_pc", false,-1, 63,0);
        tracep->declBit(c+44,"SocTop rvcpu1 ex5 if_stell_req", false,-1);
        tracep->declBit(c+166,"SocTop rvcpu1 ex5 ex_stall_req", false,-1);
        tracep->declBit(c+20,"SocTop rvcpu1 ex5 timer_intr", false,-1);
        tracep->declBit(c+123,"SocTop rvcpu1 ex5 ex_stall", false,-1);
        tracep->declQuad(c+124,"SocTop rvcpu1 ex5 exe_res", false,-1, 63,0);
        tracep->declQuad(c+404,"SocTop rvcpu1 ex5 op2_i_mux", false,-1, 63,0);
        tracep->declQuad(c+406,"SocTop rvcpu1 ex5 op1_sub_op2", false,-1, 63,0);
        tracep->declQuad(c+408,"SocTop rvcpu1 ex5 op1_add_op2", false,-1, 63,0);
        tracep->declQuad(c+410,"SocTop rvcpu1 ex5 op1_addw_op2", false,-1, 63,0);
        tracep->declBit(c+412,"SocTop rvcpu1 ex5 op1_ls_op2", false,-1);
        tracep->declQuad(c+413,"SocTop rvcpu1 ex5 shift_res", false,-1, 63,0);
        tracep->declBus(c+415,"SocTop rvcpu1 ex5 op1_sllw_op2", false,-1, 31,0);
        tracep->declQuad(c+416,"SocTop rvcpu1 ex5 sllw_res", false,-1, 63,0);
        tracep->declBus(c+418,"SocTop rvcpu1 ex5 op1_srlw_op2", false,-1, 31,0);
        tracep->declQuad(c+419,"SocTop rvcpu1 ex5 srlw_res", false,-1, 63,0);
        tracep->declBus(c+421,"SocTop rvcpu1 ex5 op1_sraw_op2", false,-1, 31,0);
        tracep->declQuad(c+422,"SocTop rvcpu1 ex5 sraw_res", false,-1, 63,0);
        tracep->declBus(c+424,"SocTop rvcpu1 ex5 op1_subw_op2", false,-1, 31,0);
        tracep->declQuad(c+425,"SocTop rvcpu1 ex5 subw_res", false,-1, 63,0);
        tracep->declQuad(c+427,"SocTop rvcpu1 ex5 upper_imm", false,-1, 63,0);
        tracep->declBit(c+429,"SocTop rvcpu1 ex5 ex_flush_branch", false,-1);
        tracep->declBit(c+430,"SocTop rvcpu1 ex5 tmr_trap_ena", false,-1);
        tracep->declBus(c+431,"SocTop rvcpu1 ex5 csr_idx", false,-1, 11,0);
        tracep->declQuad(c+432,"SocTop rvcpu1 ex5 read_csr_data", false,-1, 63,0);
        tracep->declBit(c+434,"SocTop rvcpu1 ex5 trap_ena", false,-1);
        tracep->declBit(c+435,"SocTop rvcpu1 ex5 ecall_trap_ena", false,-1);
        tracep->declBit(c+436,"SocTop rvcpu1 ex5 cmt_mret_ena", false,-1);
        tracep->declBit(c+437,"SocTop rvcpu1 ex5 csr_wr_en", false,-1);
        tracep->declBit(c+438,"SocTop rvcpu1 ex5 csr_rd_en", false,-1);
        tracep->declQuad(c+439,"SocTop rvcpu1 ex5 wbck_csr_data", false,-1, 63,0);
        tracep->declQuad(c+441,"SocTop rvcpu1 ex5 trap_mcause_value", false,-1, 63,0);
        tracep->declQuad(c+443,"SocTop rvcpu1 ex5 mask_set_res", false,-1, 63,0);
        tracep->declQuad(c+445,"SocTop rvcpu1 ex5 mask_clear_res", false,-1, 63,0);
        tracep->declBit(c+666,"SocTop rvcpu1 ex5 csr0 clk", false,-1);
        tracep->declBit(c+667,"SocTop rvcpu1 ex5 csr0 rst", false,-1);
        tracep->declQuad(c+376,"SocTop rvcpu1 ex5 csr0 pc_i", false,-1, 63,0);
        tracep->declBit(c+437,"SocTop rvcpu1 ex5 csr0 csr_wr_en", false,-1);
        tracep->declBit(c+438,"SocTop rvcpu1 ex5 csr0 csr_rd_en", false,-1);
        tracep->declBus(c+431,"SocTop rvcpu1 ex5 csr0 csr_idx", false,-1, 11,0);
        tracep->declBit(c+436,"SocTop rvcpu1 ex5 csr0 cmt_mret_ena", false,-1);
        tracep->declBit(c+435,"SocTop rvcpu1 ex5 csr0 ecall_trap_ena", false,-1);
        tracep->declQuad(c+441,"SocTop rvcpu1 ex5 csr0 trap_mcause_value", false,-1, 63,0);
        tracep->declBit(c+20,"SocTop rvcpu1 ex5 csr0 tmr_intr_ena", false,-1);
        tracep->declBit(c+430,"SocTop rvcpu1 ex5 csr0 tmr_trap_ena", false,-1);
        tracep->declQuad(c+432,"SocTop rvcpu1 ex5 csr0 read_csr_data", false,-1, 63,0);
        tracep->declQuad(c+439,"SocTop rvcpu1 ex5 csr0 wbck_csr_data", false,-1, 63,0);
        tracep->declBit(c+123,"SocTop rvcpu1 ex5 csr0 ex_stall", false,-1);
        tracep->declBit(c+447,"SocTop rvcpu1 ex5 csr0 sel_mcycle", false,-1);
        tracep->declBit(c+448,"SocTop rvcpu1 ex5 csr0 rd_mcycle", false,-1);
        tracep->declBit(c+449,"SocTop rvcpu1 ex5 csr0 wr_mcycle", false,-1);
        tracep->declQuad(c+450,"SocTop rvcpu1 ex5 csr0 csr_mcycle", false,-1, 63,0);
        tracep->declBit(c+452,"SocTop rvcpu1 ex5 csr0 sel_mstatus", false,-1);
        tracep->declBit(c+453,"SocTop rvcpu1 ex5 csr0 rd_mstatus", false,-1);
        tracep->declBit(c+454,"SocTop rvcpu1 ex5 csr0 wr_mstatus", false,-1);
        tracep->declBit(c+455,"SocTop rvcpu1 ex5 csr0 mstatus_mpie_ena", false,-1);
        tracep->declBit(c+456,"SocTop rvcpu1 ex5 csr0 mstatus_mpie_nxt", false,-1);
        tracep->declBit(c+457,"SocTop rvcpu1 ex5 csr0 csr_mstatus_mpie", false,-1);
        tracep->declBit(c+455,"SocTop rvcpu1 ex5 csr0 mstatus_mie_ena", false,-1);
        tracep->declBit(c+458,"SocTop rvcpu1 ex5 csr0 mstatus_mie_nxt", false,-1);
        tracep->declBit(c+459,"SocTop rvcpu1 ex5 csr0 csr_mstatus_mie", false,-1);
        tracep->declBit(c+455,"SocTop rvcpu1 ex5 csr0 mstatus_mpp_ena", false,-1);
        tracep->declBus(c+460,"SocTop rvcpu1 ex5 csr0 mstatus_mpp_nxt", false,-1, 1,0);
        tracep->declBus(c+461,"SocTop rvcpu1 ex5 csr0 csr_mstatus_mpp", false,-1, 1,0);
        tracep->declBus(c+724,"SocTop rvcpu1 ex5 csr0 csr_mstatus_xs", false,-1, 1,0);
        tracep->declBus(c+462,"SocTop rvcpu1 ex5 csr0 csr_mstatus_fs", false,-1, 1,0);
        tracep->declBit(c+463,"SocTop rvcpu1 ex5 csr0 csr_mstatus_sd", false,-1);
        tracep->declQuad(c+464,"SocTop rvcpu1 ex5 csr0 csr_mstatus", false,-1, 63,0);
        tracep->declBit(c+466,"SocTop rvcpu1 ex5 csr0 sel_mtvec", false,-1);
        tracep->declBit(c+467,"SocTop rvcpu1 ex5 csr0 rd_mtvec", false,-1);
        tracep->declBit(c+468,"SocTop rvcpu1 ex5 csr0 wr_mtvec", false,-1);
        tracep->declQuad(c+469,"SocTop rvcpu1 ex5 csr0 csr_mtvec_base", false,-1, 63,2);
        tracep->declBus(c+724,"SocTop rvcpu1 ex5 csr0 csr_mtvec_mode", false,-1, 1,0);
        tracep->declQuad(c+471,"SocTop rvcpu1 ex5 csr0 csr_mtvec", false,-1, 63,0);
        tracep->declBit(c+473,"SocTop rvcpu1 ex5 csr0 sel_mepc", false,-1);
        tracep->declBit(c+474,"SocTop rvcpu1 ex5 csr0 rd_mepc", false,-1);
        tracep->declBit(c+475,"SocTop rvcpu1 ex5 csr0 wr_mepc", false,-1);
        tracep->declQuad(c+476,"SocTop rvcpu1 ex5 csr0 csr_mepc", false,-1, 63,0);
        tracep->declBit(c+478,"SocTop rvcpu1 ex5 csr0 sel_mcause", false,-1);
        tracep->declBit(c+479,"SocTop rvcpu1 ex5 csr0 rd_mcause", false,-1);
        tracep->declBit(c+480,"SocTop rvcpu1 ex5 csr0 wr_mcause", false,-1);
        tracep->declBit(c+481,"SocTop rvcpu1 ex5 csr0 csr_mcause_ena", false,-1);
        tracep->declQuad(c+482,"SocTop rvcpu1 ex5 csr0 csr_mcause_nxt", false,-1, 63,0);
        tracep->declQuad(c+484,"SocTop rvcpu1 ex5 csr0 csr_mcause", false,-1, 63,0);
        tracep->declBit(c+486,"SocTop rvcpu1 ex5 csr0 sle_mie", false,-1);
        tracep->declBit(c+487,"SocTop rvcpu1 ex5 csr0 rd_mie", false,-1);
        tracep->declBit(c+488,"SocTop rvcpu1 ex5 csr0 wr_mie", false,-1);
        tracep->declBit(c+489,"SocTop rvcpu1 ex5 csr0 csr_mie_mtie", false,-1);
        tracep->declQuad(c+490,"SocTop rvcpu1 ex5 csr0 csr_mie", false,-1, 63,0);
        tracep->declBit(c+492,"SocTop rvcpu1 ex5 csr0 sel_mip", false,-1);
        tracep->declBit(c+493,"SocTop rvcpu1 ex5 csr0 rd_mip", false,-1);
        tracep->declBit(c+494,"SocTop rvcpu1 ex5 csr0 csr_mip_mtip", false,-1);
        tracep->declQuad(c+495,"SocTop rvcpu1 ex5 csr0 csr_mip", false,-1, 63,0);
        tracep->declBit(c+497,"SocTop rvcpu1 ex5 csr0 sel_mscratch", false,-1);
        tracep->declBit(c+498,"SocTop rvcpu1 ex5 csr0 rd_mscrstch", false,-1);
        tracep->declBit(c+499,"SocTop rvcpu1 ex5 csr0 wr_mscrstch", false,-1);
        tracep->declQuad(c+500,"SocTop rvcpu1 ex5 csr0 csr_mscrstch", false,-1, 63,0);
        tracep->declBit(c+666,"SocTop rvcpu1 ex_mem6 clk", false,-1);
        tracep->declBit(c+667,"SocTop rvcpu1 ex_mem6 rst", false,-1);
        tracep->declQuad(c+68,"SocTop rvcpu1 ex_mem6 ex_mem_pc_i", false,-1, 63,0);
        tracep->declBus(c+73,"SocTop rvcpu1 ex_mem6 ex_mem_inst_i", false,-1, 31,0);
        tracep->declBus(c+65,"SocTop rvcpu1 ex_mem6 stall_ctrl", false,-1, 4,0);
        tracep->declBus(c+364,"SocTop rvcpu1 ex_mem6 ex_inst_type", false,-1, 7,0);
        tracep->declBit(c+363,"SocTop rvcpu1 ex_mem6 ex_rd_ena", false,-1);
        tracep->declQuad(c+45,"SocTop rvcpu1 ex_mem6 ex_rd_data", false,-1, 63,0);
        tracep->declBus(c+362,"SocTop rvcpu1 ex_mem6 ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+365,"SocTop rvcpu1 ex_mem6 ex_ls_sel", false,-1, 2,0);
        tracep->declQuad(c+366,"SocTop rvcpu1 ex_mem6 ex_ls_addr", false,-1, 63,0);
        tracep->declBus(c+386,"SocTop rvcpu1 ex_mem6 mem_inst_type", false,-1, 7,0);
        tracep->declBit(c+371,"SocTop rvcpu1 ex_mem6 mem_rd_ena", false,-1);
        tracep->declQuad(c+387,"SocTop rvcpu1 ex_mem6 mem_rd_data", false,-1, 63,0);
        tracep->declBus(c+370,"SocTop rvcpu1 ex_mem6 mem_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+392,"SocTop rvcpu1 ex_mem6 ex_mem_pc_o", false,-1, 63,0);
        tracep->declBus(c+395,"SocTop rvcpu1 ex_mem6 ex_mem_inst_o", false,-1, 31,0);
        tracep->declBus(c+389,"SocTop rvcpu1 ex_mem6 mem_ls_sel", false,-1, 2,0);
        tracep->declQuad(c+390,"SocTop rvcpu1 ex_mem6 mem_ls_addr", false,-1, 63,0);
        tracep->declBit(c+667,"SocTop rvcpu1 mem7 rst", false,-1);
        tracep->declBus(c+386,"SocTop rvcpu1 mem7 inst_type_i", false,-1, 7,0);
        tracep->declBit(c+371,"SocTop rvcpu1 mem7 rd_ena_i", false,-1);
        tracep->declQuad(c+387,"SocTop rvcpu1 mem7 rd_data_i", false,-1, 63,0);
        tracep->declBus(c+370,"SocTop rvcpu1 mem7 rd_addr_i", false,-1, 4,0);
        tracep->declQuad(c+392,"SocTop rvcpu1 mem7 mem_pc_i", false,-1, 63,0);
        tracep->declBus(c+395,"SocTop rvcpu1 mem7 mem_inst_i", false,-1, 31,0);
        tracep->declQuad(c+390,"SocTop rvcpu1 mem7 ls_addr_i", false,-1, 63,0);
        tracep->declBus(c+389,"SocTop rvcpu1 mem7 ls_sel_i", false,-1, 2,0);
        tracep->declQuad(c+5,"SocTop rvcpu1 mem7 data_addr_o", false,-1, 63,0);
        tracep->declBus(c+7,"SocTop rvcpu1 mem7 wmask_o", false,-1, 7,0);
        tracep->declQuad(c+16,"SocTop rvcpu1 mem7 data_i", false,-1, 63,0);
        tracep->declQuad(c+8,"SocTop rvcpu1 mem7 data_o", false,-1, 63,0);
        tracep->declBit(c+10,"SocTop rvcpu1 mem7 we", false,-1);
        tracep->declBit(c+11,"SocTop rvcpu1 mem7 re", false,-1);
        tracep->declBit(c+682,"SocTop rvcpu1 mem7 mem_finish", false,-1);
        tracep->declBit(c+371,"SocTop rvcpu1 mem7 rd_ena_o", false,-1);
        tracep->declQuad(c+66,"SocTop rvcpu1 mem7 rd_data_o", false,-1, 63,0);
        tracep->declBus(c+370,"SocTop rvcpu1 mem7 rd_addr_o", false,-1, 4,0);
        tracep->declQuad(c+70,"SocTop rvcpu1 mem7 mem_pc_o", false,-1, 63,0);
        tracep->declBus(c+74,"SocTop rvcpu1 mem7 mem_inst_o", false,-1, 31,0);
        tracep->declBit(c+698,"SocTop rvcpu1 mem7 mem_stall_req", false,-1);
        tracep->declQuad(c+193,"SocTop rvcpu1 mem7 load_data", false,-1, 63,0);
        tracep->declBus(c+502,"SocTop rvcpu1 mem7 byte_sel", false,-1, 2,0);
        tracep->declBus(c+503,"SocTop rvcpu1 mem7 half_byte_sel", false,-1, 1,0);
        tracep->declBit(c+504,"SocTop rvcpu1 mem7 word_sel", false,-1);
        tracep->declBus(c+126,"SocTop rvcpu1 mem7 data_byte", false,-1, 7,0);
        tracep->declBus(c+127,"SocTop rvcpu1 mem7 data_half_byte", false,-1, 15,0);
        tracep->declBus(c+128,"SocTop rvcpu1 mem7 data_word", false,-1, 31,0);
        tracep->declQuad(c+129,"SocTop rvcpu1 mem7 store_data", false,-1, 63,0);
        tracep->declBus(c+131,"SocTop rvcpu1 mem7 store_mask", false,-1, 7,0);
        tracep->declQuad(c+701,"SocTop rvcpu1 mem7 sb_data", false,-1, 63,0);
        tracep->declQuad(c+703,"SocTop rvcpu1 mem7 sh_data", false,-1, 63,0);
        tracep->declQuad(c+705,"SocTop rvcpu1 mem7 sw_data", false,-1, 63,0);
        tracep->declBus(c+707,"SocTop rvcpu1 mem7 sb_mask", false,-1, 7,0);
        tracep->declBus(c+708,"SocTop rvcpu1 mem7 sh_mask", false,-1, 7,0);
        tracep->declBus(c+709,"SocTop rvcpu1 mem7 sw_mask", false,-1, 7,0);
        tracep->declBit(c+666,"SocTop rvcpu1 mem_wb8 clk", false,-1);
        tracep->declBit(c+667,"SocTop rvcpu1 mem_wb8 rst", false,-1);
        tracep->declQuad(c+70,"SocTop rvcpu1 mem_wb8 wb_pc_i", false,-1, 63,0);
        tracep->declBus(c+74,"SocTop rvcpu1 mem_wb8 wb_inst_i", false,-1, 31,0);
        tracep->declBus(c+65,"SocTop rvcpu1 mem_wb8 stall_ctrl", false,-1, 4,0);
        tracep->declQuad(c+66,"SocTop rvcpu1 mem_wb8 mem_rd_data", false,-1, 63,0);
        tracep->declBus(c+370,"SocTop rvcpu1 mem_wb8 mem_rd_addr", false,-1, 4,0);
        tracep->declBit(c+371,"SocTop rvcpu1 mem_wb8 mem_rd_ena", false,-1);
        tracep->declQuad(c+374,"SocTop rvcpu1 mem_wb8 wb_rd_data", false,-1, 63,0);
        tracep->declBus(c+372,"SocTop rvcpu1 mem_wb8 wb_rd_addr", false,-1, 4,0);
        tracep->declBit(c+373,"SocTop rvcpu1 mem_wb8 wb_rd_ena", false,-1);
        tracep->declQuad(c+505,"SocTop rvcpu1 mem_wb8 wb_pc_o", false,-1, 63,0);
        tracep->declBus(c+507,"SocTop rvcpu1 mem_wb8 wb_inst_o", false,-1, 31,0);
        tracep->declQuad(c+508,"SocTop rvcpu1 mem_wb8 pc_data1", false,-1, 63,0);
        tracep->declBit(c+510,"SocTop rvcpu1 mem_wb8 difftest_exyn", false,-1);
        tracep->declBit(c+511,"SocTop rvcpu1 mem_wb8 teap_yn", false,-1);
        tracep->declQuad(c+512,"SocTop rvcpu1 mem_wb8 trap_code", false,-1, 63,0);
        tracep->declBit(c+667,"SocTop rvcpu1 ctrl9 rst", false,-1);
        tracep->declBit(c+44,"SocTop rvcpu1 ctrl9 if_stall_req", false,-1);
        tracep->declBit(c+693,"SocTop rvcpu1 ctrl9 id_stall_req", false,-1);
        tracep->declBit(c+166,"SocTop rvcpu1 ctrl9 ex_stall_req", false,-1);
        tracep->declBit(c+698,"SocTop rvcpu1 ctrl9 mem_stall_req", false,-1);
        tracep->declBus(c+65,"SocTop rvcpu1 ctrl9 stall_ctrl", false,-1, 4,0);
        tracep->declBit(c+666,"SocTop rvcpu1 regfile10 clk", false,-1);
        tracep->declBit(c+667,"SocTop rvcpu1 regfile10 rst", false,-1);
        tracep->declBus(c+372,"SocTop rvcpu1 regfile10 waddr", false,-1, 4,0);
        tracep->declQuad(c+374,"SocTop rvcpu1 regfile10 wdata", false,-1, 63,0);
        tracep->declBit(c+373,"SocTop rvcpu1 regfile10 we", false,-1);
        tracep->declBus(c+47,"SocTop rvcpu1 regfile10 raddr1", false,-1, 4,0);
        tracep->declQuad(c+694,"SocTop rvcpu1 regfile10 rdata1", false,-1, 63,0);
        tracep->declBit(c+48,"SocTop rvcpu1 regfile10 re1", false,-1);
        tracep->declBus(c+49,"SocTop rvcpu1 regfile10 raddr2", false,-1, 4,0);
        tracep->declQuad(c+696,"SocTop rvcpu1 regfile10 rdata2", false,-1, 63,0);
        tracep->declBit(c+50,"SocTop rvcpu1 regfile10 re2", false,-1);
        tracep->declBit(c+690,"SocTop rvcpu1 regfile10 x1_read_ena", false,-1);
        tracep->declQuad(c+688,"SocTop rvcpu1 regfile10 x1_data", false,-1, 63,0);
        tracep->declBus(c+43,"SocTop rvcpu1 regfile10 x1_addr", false,-1, 4,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+514+i*2,"SocTop rvcpu1 regfile10 regs", true,(i+0), 63,0);}}
        tracep->declBus(c+578,"SocTop rvcpu1 regfile10 i", false,-1, 31,0);
        tracep->declBit(c+666,"SocTop i_cache12 clk", false,-1);
        tracep->declBit(c+667,"SocTop i_cache12 rst", false,-1);
        tracep->declQuad(c+634,"SocTop i_cache12 inst_addr", false,-1, 63,0);
        tracep->declBit(c+667,"SocTop i_cache12 inst_ena", false,-1);
        tracep->declBit(c+15,"SocTop i_cache12 inst_ready", false,-1);
        tracep->declBus(c+12,"SocTop i_cache12 inst_data", false,-1, 31,0);
        tracep->declBit(c+13,"SocTop i_cache12 inst_valid", false,-1);
        tracep->declBit(c+14,"SocTop i_cache12 cache_read_ena", false,-1);
        tracep->declQuad(c+680,"SocTop i_cache12 cache_addr", false,-1, 63,0);
        tracep->declBus(c+202,"SocTop i_cache12 cache_or_data", false,-1, 31,0);
        tracep->declBit(c+637,"SocTop i_cache12 cache_in_ok", false,-1);
        tracep->declBit(c+19,"SocTop i_cache12 axi_working_ti", false,-1);
        tracep->declQuad(c+643,"SocTop i_cache12 i_in_teg", false,-1, 54,0);
        tracep->declBus(c+132,"SocTop i_cache12 state_inst", false,-1, 5,0);
        tracep->declBit(c+621,"SocTop i_cache12 inst_hit_ok", false,-1);
        tracep->declBit(c+622,"SocTop i_cache12 write_i_ok", false,-1);
        tracep->declBit(c+710,"SocTop i_cache12 state_sign", false,-1);
        tracep->declBit(c+623,"SocTop i_cache12 inst_in_cache1", false,-1);
        tracep->declBit(c+624,"SocTop i_cache12 inst_in_cache2", false,-1);
        tracep->declBit(c+625,"SocTop i_cache12 inst_write_cache", false,-1);
        tracep->declBit(c+645,"SocTop i_cache12 inst_chose1", false,-1);
        tracep->declBit(c+646,"SocTop i_cache12 inst_chose2", false,-1);
        tracep->declQuad(c+579,"SocTop i_cache12 addr_lock_reg", false,-1, 63,0);
        tracep->declBus(c+647,"SocTop i_cache12 i_cache_addr1", false,-1, 5,0);
        tracep->declQuad(c+648,"SocTop i_cache12 i_cache_tag1", false,-1, 55,0);
        tracep->declBit(c+133,"SocTop i_cache12 i_tag_ena1", false,-1);
        tracep->declQuad(c+650,"SocTop i_cache12 i_tag_data1", false,-1, 54,0);
        tracep->declBit(c+652,"SocTop i_cache12 i_tag_user1", false,-1);
        tracep->declBus(c+647,"SocTop i_cache12 i_cache_addr2", false,-1, 5,0);
        tracep->declQuad(c+648,"SocTop i_cache12 i_cache_tag2", false,-1, 55,0);
        tracep->declBit(c+134,"SocTop i_cache12 i_tag_ena2", false,-1);
        tracep->declQuad(c+653,"SocTop i_cache12 i_tag_data2", false,-1, 54,0);
        tracep->declBit(c+655,"SocTop i_cache12 i_tag_user2", false,-1);
        tracep->declBus(c+647,"SocTop i_cache12 i_addrdata1", false,-1, 5,0);
        tracep->declBus(c+711,"SocTop i_cache12 i_in_data1", false,-1, 31,0);
        tracep->declBit(c+739,"SocTop i_cache12 i_data_ena1", false,-1);
        tracep->declBus(c+581,"SocTop i_cache12 i_out_data1", false,-1, 31,0);
        tracep->declBus(c+647,"SocTop i_cache12 i_addrdata2", false,-1, 5,0);
        tracep->declBus(c+712,"SocTop i_cache12 i_in_data2", false,-1, 31,0);
        tracep->declBit(c+739,"SocTop i_cache12 i_data_ena2", false,-1);
        tracep->declBus(c+582,"SocTop i_cache12 i_out_data2", false,-1, 31,0);
        tracep->declBus(c+647,"SocTop i_cache12 i_count_addr", false,-1, 5,0);
        tracep->declBus(c+583,"SocTop i_cache12 i", false,-1, 31,0);
        tracep->declBit(c+666,"SocTop i_cache12 u_tag01 clk", false,-1);
        tracep->declBus(c+647,"SocTop i_cache12 u_tag01 addr_i", false,-1, 5,0);
        tracep->declQuad(c+648,"SocTop i_cache12 u_tag01 data_i", false,-1, 55,0);
        tracep->declBit(c+133,"SocTop i_cache12 u_tag01 write_ena", false,-1);
        tracep->declQuad(c+650,"SocTop i_cache12 u_tag01 tag_data", false,-1, 54,0);
        tracep->declBit(c+652,"SocTop i_cache12 u_tag01 tag_valid", false,-1);
        tracep->declQuad(c+650,"SocTop i_cache12 u_tag01 out_data", false,-1, 54,0);
        tracep->declBit(c+652,"SocTop i_cache12 u_tag01 out_vaild", false,-1);
        tracep->declBit(c+666,"SocTop i_cache12 u_tag02 clk", false,-1);
        tracep->declBus(c+647,"SocTop i_cache12 u_tag02 addr_i", false,-1, 5,0);
        tracep->declQuad(c+648,"SocTop i_cache12 u_tag02 data_i", false,-1, 55,0);
        tracep->declBit(c+134,"SocTop i_cache12 u_tag02 write_ena", false,-1);
        tracep->declQuad(c+653,"SocTop i_cache12 u_tag02 tag_data", false,-1, 54,0);
        tracep->declBit(c+655,"SocTop i_cache12 u_tag02 tag_valid", false,-1);
        tracep->declQuad(c+653,"SocTop i_cache12 u_tag02 out_data", false,-1, 54,0);
        tracep->declBit(c+655,"SocTop i_cache12 u_tag02 out_vaild", false,-1);
        tracep->declBit(c+666,"SocTop i_cache12 u_data01 clk", false,-1);
        tracep->declBus(c+647,"SocTop i_cache12 u_data01 addr_i", false,-1, 5,0);
        tracep->declBus(c+711,"SocTop i_cache12 u_data01 data_i", false,-1, 31,0);
        tracep->declBit(c+739,"SocTop i_cache12 u_data01 write_ena", false,-1);
        tracep->declBus(c+581,"SocTop i_cache12 u_data01 data_o", false,-1, 31,0);
        tracep->declBus(c+581,"SocTop i_cache12 u_data01 out_data", false,-1, 31,0);
        tracep->declBit(c+666,"SocTop i_cache12 u_data02 clk", false,-1);
        tracep->declBus(c+647,"SocTop i_cache12 u_data02 addr_i", false,-1, 5,0);
        tracep->declBus(c+712,"SocTop i_cache12 u_data02 data_i", false,-1, 31,0);
        tracep->declBit(c+739,"SocTop i_cache12 u_data02 write_ena", false,-1);
        tracep->declBus(c+582,"SocTop i_cache12 u_data02 data_o", false,-1, 31,0);
        tracep->declBus(c+582,"SocTop i_cache12 u_data02 out_data", false,-1, 31,0);
        tracep->declBit(c+666,"SocTop d_cache13 clk", false,-1);
        tracep->declBit(c+667,"SocTop d_cache13 rst", false,-1);
        tracep->declQuad(c+5,"SocTop d_cache13 mem_addr_i", false,-1, 63,0);
        tracep->declQuad(c+8,"SocTop d_cache13 mem_data_i", false,-1, 63,0);
        tracep->declBus(c+7,"SocTop d_cache13 mem_mask_i", false,-1, 7,0);
        tracep->declBit(c+11,"SocTop d_cache13 mem_data_read_ena", false,-1);
        tracep->declBit(c+10,"SocTop d_cache13 mem_data_writ_ena", false,-1);
        tracep->declQuad(c+16,"SocTop d_cache13 mem_data_out_cpu", false,-1, 63,0);
        tracep->declBit(c+682,"SocTop d_cache13 mem_data_finish", false,-1);
        tracep->declQuad(c+200,"SocTop d_cache13 in_dcache_data", false,-1, 63,0);
        tracep->declBit(c+636,"SocTop d_cache13 in_dcache_ok", false,-1);
        tracep->declQuad(c+5,"SocTop d_cache13 out_dcache_addr", false,-1, 63,0);
        tracep->declQuad(c+683,"SocTop d_cache13 out_dcache_data", false,-1, 63,0);
        tracep->declBit(c+18,"SocTop d_cache13 outr_dcache_ena", false,-1);
        tracep->declBit(c+685,"SocTop d_cache13 outw_dcache_ena", false,-1);
        tracep->declBus(c+135,"SocTop d_cache13 count_addr", false,-1, 5,0);
        tracep->declBit(c+136,"SocTop d_cache13 wirte_chose1", false,-1);
        tracep->declBit(c+137,"SocTop d_cache13 wirte_chose2", false,-1);
        tracep->declBus(c+138,"SocTop d_cache13 state_store", false,-1, 5,0);
        tracep->declBit(c+713,"SocTop d_cache13 store_ok", false,-1);
        tracep->declBit(c+626,"SocTop d_cache13 write_ok", false,-1);
        tracep->declBit(c+656,"SocTop d_cache13 wbck_ok", false,-1);
        tracep->declQuad(c+139,"SocTop d_cache13 in_teg", false,-1, 54,0);
        tracep->declBit(c+627,"SocTop d_cache13 write_incache", false,-1);
        tracep->declBit(c+628,"SocTop d_cache13 w_incache_ena1", false,-1);
        tracep->declBit(c+629,"SocTop d_cache13 w_incache_ena2", false,-1);
        tracep->declBus(c+141,"SocTop d_cache13 state_load", false,-1, 5,0);
        tracep->declBit(c+714,"SocTop d_cache13 load_ok", false,-1);
        tracep->declBit(c+657,"SocTop d_cache13 load_bc_ok", false,-1);
        tracep->declBit(c+630,"SocTop d_cache13 write_l_ok", false,-1);
        tracep->declBus(c+142,"SocTop d_cache13 count_addr2", false,-1, 5,0);
        tracep->declBit(c+715,"SocTop d_cache13 wbck_load_chose1", false,-1);
        tracep->declBit(c+631,"SocTop d_cache13 load_in_cache1", false,-1);
        tracep->declBit(c+632,"SocTop d_cache13 load_in_cache2", false,-1);
        tracep->declBit(c+633,"SocTop d_cache13 read_cache", false,-1);
        tracep->declBus(c+142,"SocTop d_cache13 count_a", false,-1, 5,0);
        tracep->declBus(c+584,"SocTop d_cache13 i", false,-1, 31,0);
        tracep->declBus(c+142,"SocTop d_cache13 dirty_addr", false,-1, 5,0);
        tracep->declBus(c+142,"SocTop d_cache13 addrtag1", false,-1, 5,0);
        tracep->declQuad(c+143,"SocTop d_cache13 datatag1", false,-1, 55,0);
        tracep->declBit(c+145,"SocTop d_cache13 tag_ena1", false,-1);
        tracep->declQuad(c+658,"SocTop d_cache13 tag_data1", false,-1, 54,0);
        tracep->declBit(c+660,"SocTop d_cache13 tag_user1", false,-1);
        tracep->declBus(c+142,"SocTop d_cache13 addrtag2", false,-1, 5,0);
        tracep->declQuad(c+143,"SocTop d_cache13 datatag2", false,-1, 55,0);
        tracep->declBit(c+146,"SocTop d_cache13 tag_ena2", false,-1);
        tracep->declQuad(c+661,"SocTop d_cache13 tag_data2", false,-1, 54,0);
        tracep->declBit(c+663,"SocTop d_cache13 tag_user2", false,-1);
        tracep->declBus(c+147,"SocTop d_cache13 addrdata1", false,-1, 5,0);
        tracep->declQuad(c+148,"SocTop d_cache13 in_data1", false,-1, 63,0);
        tracep->declBus(c+150,"SocTop d_cache13 data_ena1", false,-1, 7,0);
        tracep->declQuad(c+585,"SocTop d_cache13 out_data1", false,-1, 63,0);
        tracep->declBus(c+147,"SocTop d_cache13 addrdata2", false,-1, 5,0);
        tracep->declQuad(c+151,"SocTop d_cache13 in_data2", false,-1, 63,0);
        tracep->declBus(c+153,"SocTop d_cache13 data_ena2", false,-1, 7,0);
        tracep->declQuad(c+587,"SocTop d_cache13 out_data2", false,-1, 63,0);
        tracep->declBit(c+666,"SocTop d_cache13 u_tag0 clk", false,-1);
        tracep->declBus(c+142,"SocTop d_cache13 u_tag0 addr_i", false,-1, 5,0);
        tracep->declQuad(c+143,"SocTop d_cache13 u_tag0 data_i", false,-1, 55,0);
        tracep->declBit(c+145,"SocTop d_cache13 u_tag0 write_ena", false,-1);
        tracep->declQuad(c+658,"SocTop d_cache13 u_tag0 tag_data", false,-1, 54,0);
        tracep->declBit(c+660,"SocTop d_cache13 u_tag0 tag_valid", false,-1);
        tracep->declQuad(c+658,"SocTop d_cache13 u_tag0 out_data", false,-1, 54,0);
        tracep->declBit(c+660,"SocTop d_cache13 u_tag0 out_vaild", false,-1);
        tracep->declBit(c+666,"SocTop d_cache13 u_tag1 clk", false,-1);
        tracep->declBus(c+142,"SocTop d_cache13 u_tag1 addr_i", false,-1, 5,0);
        tracep->declQuad(c+143,"SocTop d_cache13 u_tag1 data_i", false,-1, 55,0);
        tracep->declBit(c+146,"SocTop d_cache13 u_tag1 write_ena", false,-1);
        tracep->declQuad(c+661,"SocTop d_cache13 u_tag1 tag_data", false,-1, 54,0);
        tracep->declBit(c+663,"SocTop d_cache13 u_tag1 tag_valid", false,-1);
        tracep->declQuad(c+661,"SocTop d_cache13 u_tag1 out_data", false,-1, 54,0);
        tracep->declBit(c+663,"SocTop d_cache13 u_tag1 out_vaild", false,-1);
        tracep->declBit(c+666,"SocTop d_cache13 u_data0 clk", false,-1);
        tracep->declBus(c+147,"SocTop d_cache13 u_data0 addr_i", false,-1, 5,0);
        tracep->declQuad(c+148,"SocTop d_cache13 u_data0 data_i", false,-1, 63,0);
        tracep->declBus(c+150,"SocTop d_cache13 u_data0 write_ena", false,-1, 7,0);
        tracep->declQuad(c+585,"SocTop d_cache13 u_data0 data_o", false,-1, 63,0);
        tracep->declQuad(c+585,"SocTop d_cache13 u_data0 out_data", false,-1, 63,0);
        tracep->declBit(c+666,"SocTop d_cache13 u_data1 clk", false,-1);
        tracep->declBus(c+147,"SocTop d_cache13 u_data1 addr_i", false,-1, 5,0);
        tracep->declQuad(c+151,"SocTop d_cache13 u_data1 data_i", false,-1, 63,0);
        tracep->declBus(c+153,"SocTop d_cache13 u_data1 write_ena", false,-1, 7,0);
        tracep->declQuad(c+587,"SocTop d_cache13 u_data1 data_o", false,-1, 63,0);
        tracep->declQuad(c+587,"SocTop d_cache13 u_data1 out_data", false,-1, 63,0);
        tracep->declBit(c+666,"SocTop arbitrate4 clk", false,-1);
        tracep->declBit(c+667,"SocTop arbitrate4 rst", false,-1);
        tracep->declQuad(c+5,"SocTop arbitrate4 d_cache_addr", false,-1, 63,0);
        tracep->declQuad(c+683,"SocTop arbitrate4 d_cache_data", false,-1, 63,0);
        tracep->declBit(c+18,"SocTop arbitrate4 d_cache_read_ena", false,-1);
        tracep->declBit(c+685,"SocTop arbitrate4 d_cache_write_ena", false,-1);
        tracep->declBus(c+738,"SocTop arbitrate4 d_cache_mask", false,-1, 7,0);
        tracep->declQuad(c+200,"SocTop arbitrate4 d_cache_data_o", false,-1, 63,0);
        tracep->declBit(c+636,"SocTop arbitrate4 d_cache_ok", false,-1);
        tracep->declQuad(c+680,"SocTop arbitrate4 i_cache_addr", false,-1, 63,0);
        tracep->declBit(c+14,"SocTop arbitrate4 i_cache_ena", false,-1);
        tracep->declBus(c+202,"SocTop arbitrate4 i_cache_data_o", false,-1, 31,0);
        tracep->declBit(c+637,"SocTop arbitrate4 i_cache_ok", false,-1);
        tracep->declBit(c+19,"SocTop arbitrate4 axi_working_ti", false,-1);
        tracep->declBus(c+717,"SocTop arbitrate4 axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+21,"SocTop arbitrate4 axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+718,"SocTop arbitrate4 axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+719,"SocTop arbitrate4 axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+720,"SocTop arbitrate4 axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+721,"SocTop arbitrate4 axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+722,"SocTop arbitrate4 axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+717,"SocTop arbitrate4 axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+23,"SocTop arbitrate4 axi_aw_valid", false,-1);
        tracep->declBit(c+203,"SocTop arbitrate4 axi_aw_ready", false,-1);
        tracep->declQuad(c+24,"SocTop arbitrate4 axi_w_data", false,-1, 63,0);
        tracep->declBus(c+204,"SocTop arbitrate4 axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+723,"SocTop arbitrate4 axi_w_last", false,-1);
        tracep->declBit(c+205,"SocTop arbitrate4 axi_w_valid", false,-1);
        tracep->declBit(c+206,"SocTop arbitrate4 axi_w_ready", false,-1);
        tracep->declBus(c+207,"SocTop arbitrate4 axi_b_id", false,-1, 3,0);
        tracep->declBus(c+208,"SocTop arbitrate4 axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+209,"SocTop arbitrate4 axi_b_valid", false,-1);
        tracep->declBit(c+723,"SocTop arbitrate4 axi_b_ready", false,-1);
        tracep->declBus(c+26,"SocTop arbitrate4 axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+27,"SocTop arbitrate4 axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+718,"SocTop arbitrate4 axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+719,"SocTop arbitrate4 axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+720,"SocTop arbitrate4 axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+721,"SocTop arbitrate4 axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+722,"SocTop arbitrate4 axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+717,"SocTop arbitrate4 axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+29,"SocTop arbitrate4 axi_ar_valid", false,-1);
        tracep->declBit(c+210,"SocTop arbitrate4 axi_ar_ready", false,-1);
        tracep->declBus(c+638,"SocTop arbitrate4 axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+211,"SocTop arbitrate4 axi_r_data", false,-1, 63,0);
        tracep->declBus(c+639,"SocTop arbitrate4 axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+640,"SocTop arbitrate4 axi_r_last", false,-1);
        tracep->declBit(c+213,"SocTop arbitrate4 axi_r_valid", false,-1);
        tracep->declBit(c+723,"SocTop arbitrate4 axi_r_ready", false,-1);
        tracep->declBit(c+195,"SocTop arbitrate4 aw_shankhand", false,-1);
        tracep->declBit(c+589,"SocTop arbitrate4 w_shankhand", false,-1);
        tracep->declBit(c+590,"SocTop arbitrate4 b_shankhand", false,-1);
        tracep->declBit(c+591,"SocTop arbitrate4 b_success", false,-1);
        tracep->declBus(c+592,"SocTop arbitrate4 transfor_state", false,-1, 1,0);
        tracep->declBus(c+154,"SocTop arbitrate4 transfor_state_nex", false,-1, 1,0);
        tracep->declBit(c+213,"SocTop arbitrate4 r_shankhand", false,-1);
        tracep->declBit(c+196,"SocTop arbitrate4 d_cache_ar_shankhand", false,-1);
        tracep->declBit(c+197,"SocTop arbitrate4 i_cache_ar_shankhand", false,-1);
        tracep->declBit(c+664,"SocTop arbitrate4 d_cache_r_shankhand", false,-1);
        tracep->declBit(c+665,"SocTop arbitrate4 i_cache_r_shankhand", false,-1);
        tracep->declBit(c+155,"SocTop arbitrate4 arb_sign", false,-1);
        tracep->declBit(c+156,"SocTop arbitrate4 i_cache_valid", false,-1);
        tracep->declBit(c+157,"SocTop arbitrate4 d_cache_valid", false,-1);
        tracep->declBus(c+593,"SocTop arbitrate4 i_cache_state", false,-1, 1,0);
        tracep->declBus(c+158,"SocTop arbitrate4 i_cache_state_nxt", false,-1, 1,0);
        tracep->declBus(c+594,"SocTop arbitrate4 d_cache_state", false,-1, 1,0);
        tracep->declBus(c+159,"SocTop arbitrate4 d_cache_state_nxt", false,-1, 1,0);
        tracep->declBit(c+637,"SocTop arbitrate4 i_cache_okreg", false,-1);
        tracep->declBit(c+595,"SocTop arbitrate4 d_cache_okreg", false,-1);
        tracep->declBus(c+202,"SocTop arbitrate4 i_cache_data_oupt", false,-1, 31,0);
        tracep->declQuad(c+200,"SocTop arbitrate4 d_cache_data_outp", false,-1, 63,0);
        tracep->declBit(c+666,"SocTop axi_mnq4 clk", false,-1);
        tracep->declBit(c+667,"SocTop axi_mnq4 rst", false,-1);
        tracep->declBus(c+257,"SocTop axi_mnq4 s_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+258,"SocTop axi_mnq4 s_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+260,"SocTop axi_mnq4 s_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+261,"SocTop axi_mnq4 s_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+262,"SocTop axi_mnq4 s_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+263,"SocTop axi_mnq4 s_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+264,"SocTop axi_mnq4 s_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+265,"SocTop axi_mnq4 s_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+267,"SocTop axi_mnq4 s_axi_aw_valid", false,-1);
        tracep->declBit(c+266,"SocTop axi_mnq4 s_axi_aw_ready", false,-1);
        tracep->declQuad(c+268,"SocTop axi_mnq4 s_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+270,"SocTop axi_mnq4 s_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+271,"SocTop axi_mnq4 s_axi_w_last", false,-1);
        tracep->declBit(c+272,"SocTop axi_mnq4 s_axi_w_valid", false,-1);
        tracep->declBit(c+273,"SocTop axi_mnq4 s_axi_w_ready", false,-1);
        tracep->declBus(c+257,"SocTop axi_mnq4 s_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+724,"SocTop axi_mnq4 s_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+274,"SocTop axi_mnq4 s_axi_b_valid", false,-1);
        tracep->declBit(c+275,"SocTop axi_mnq4 s_axi_b_ready", false,-1);
        tracep->declBus(c+276,"SocTop axi_mnq4 s_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+277,"SocTop axi_mnq4 s_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+279,"SocTop axi_mnq4 s_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+280,"SocTop axi_mnq4 s_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+281,"SocTop axi_mnq4 s_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+282,"SocTop axi_mnq4 s_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+283,"SocTop axi_mnq4 s_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+284,"SocTop axi_mnq4 s_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+285,"SocTop axi_mnq4 s_axi_ar_valid", false,-1);
        tracep->declBit(c+286,"SocTop axi_mnq4 s_axi_ar_ready", false,-1);
        tracep->declBus(c+287,"SocTop axi_mnq4 s_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+686,"SocTop axi_mnq4 s_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+724,"SocTop axi_mnq4 s_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+288,"SocTop axi_mnq4 s_axi_r_last", false,-1);
        tracep->declBit(c+289,"SocTop axi_mnq4 s_axi_r_valid", false,-1);
        tracep->declBit(c+290,"SocTop axi_mnq4 s_axi_r_ready", false,-1);
        tracep->declBit(c+350,"SocTop axi_mnq4 read_ram_ena", false,-1);
        tracep->declBit(c+351,"SocTop axi_mnq4 read_inst_ena", false,-1);
        tracep->declQuad(c+352,"SocTop axi_mnq4 addr_oup", false,-1, 63,0);
        tracep->declBus(c+672,"SocTop axi_mnq4 inst_data_in", false,-1, 31,0);
        tracep->declQuad(c+673,"SocTop axi_mnq4 ram_data_in", false,-1, 63,0);
        tracep->declBit(c+274,"SocTop axi_mnq4 write_ram_ena", false,-1);
        tracep->declQuad(c+356,"SocTop axi_mnq4 write_ram_data", false,-1, 63,0);
        tracep->declQuad(c+354,"SocTop axi_mnq4 write_ram_addr", false,-1, 63,0);
        tracep->declBit(c+596,"SocTop axi_mnq4 aw_shankhand", false,-1);
        tracep->declBit(c+597,"SocTop axi_mnq4 w_shankhand", false,-1);
        tracep->declBit(c+598,"SocTop axi_mnq4 b_shankhand", false,-1);
        tracep->declBus(c+599,"SocTop axi_mnq4 s_write_state", false,-1, 1,0);
        tracep->declBus(c+600,"SocTop axi_mnq4 s_write_state_nxt", false,-1, 1,0);
        tracep->declBit(c+601,"SocTop axi_mnq4 ar_shankhand", false,-1);
        tracep->declBit(c+602,"SocTop axi_mnq4 r_shankhand", false,-1);
        tracep->declBus(c+603,"SocTop axi_mnq4 s_read_state", false,-1, 1,0);
        tracep->declBus(c+604,"SocTop axi_mnq4 s_read_state_nxt", false,-1, 1,0);
        tracep->declQuad(c+605,"SocTop axi_mnq4 read_addr_reg", false,-1, 63,0);
        tracep->declQuad(c+607,"SocTop axi_mnq4 write_data_reg", false,-1, 63,0);
        tracep->declQuad(c+609,"SocTop axi_mnq4 write_addr_reg", false,-1, 63,0);
        tracep->declBit(c+666,"SocTop soc_axi45 clk", false,-1);
        tracep->declBit(c+667,"SocTop soc_axi45 rst", false,-1);
        tracep->declBus(c+41,"SocTop soc_axi45 prot_chose_write", false,-1, 2,0);
        tracep->declBus(c+42,"SocTop soc_axi45 prot_chose_read", false,-1, 2,0);
        tracep->declBus(c+717,"SocTop soc_axi45 master_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+21,"SocTop soc_axi45 master_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+718,"SocTop soc_axi45 master_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+719,"SocTop soc_axi45 master_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+720,"SocTop soc_axi45 master_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+721,"SocTop soc_axi45 master_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+722,"SocTop soc_axi45 master_axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+717,"SocTop soc_axi45 master_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+23,"SocTop soc_axi45 master_axi_aw_valid", false,-1);
        tracep->declBit(c+203,"SocTop soc_axi45 master_axi_aw_ready", false,-1);
        tracep->declQuad(c+24,"SocTop soc_axi45 master_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+204,"SocTop soc_axi45 master_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+723,"SocTop soc_axi45 master_axi_w_last", false,-1);
        tracep->declBit(c+205,"SocTop soc_axi45 master_axi_w_valid", false,-1);
        tracep->declBit(c+206,"SocTop soc_axi45 master_axi_w_ready", false,-1);
        tracep->declBus(c+207,"SocTop soc_axi45 master_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+208,"SocTop soc_axi45 master_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+723,"SocTop soc_axi45 master_axi_b_ready", false,-1);
        tracep->declBit(c+209,"SocTop soc_axi45 master_axi_b_valid", false,-1);
        tracep->declBus(c+26,"SocTop soc_axi45 master_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+27,"SocTop soc_axi45 master_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+718,"SocTop soc_axi45 master_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+719,"SocTop soc_axi45 master_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+720,"SocTop soc_axi45 master_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+721,"SocTop soc_axi45 master_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+722,"SocTop soc_axi45 master_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+717,"SocTop soc_axi45 master_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+29,"SocTop soc_axi45 master_axi_ar_valid", false,-1);
        tracep->declBit(c+210,"SocTop soc_axi45 master_axi_ar_ready", false,-1);
        tracep->declBus(c+638,"SocTop soc_axi45 master_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+211,"SocTop soc_axi45 master_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+639,"SocTop soc_axi45 master_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+640,"SocTop soc_axi45 master_axi_r_last", false,-1);
        tracep->declBit(c+213,"SocTop soc_axi45 master_axi_r_valid", false,-1);
        tracep->declBit(c+723,"SocTop soc_axi45 master_axi_r_ready", false,-1);
        tracep->declBus(c+214,"SocTop soc_axi45 slave_axi_aw_id", false,-1, 11,0);
        tracep->declArray(c+215,"SocTop soc_axi45 slave_axi_aw_addr", false,-1, 191,0);
        tracep->declBus(c+221,"SocTop soc_axi45 slave_axi_aw_len", false,-1, 23,0);
        tracep->declBus(c+222,"SocTop soc_axi45 slave_axi_aw_size", false,-1, 8,0);
        tracep->declBus(c+223,"SocTop soc_axi45 slave_axi_aw_burst", false,-1, 5,0);
        tracep->declBus(c+224,"SocTop soc_axi45 slave_axi_aw_cache", false,-1, 11,0);
        tracep->declBus(c+225,"SocTop soc_axi45 slave_axi_aw_prot", false,-1, 8,0);
        tracep->declBus(c+226,"SocTop soc_axi45 slave_axi_aw_qos", false,-1, 11,0);
        tracep->declBus(c+227,"SocTop soc_axi45 slave_axi_aw_valid", false,-1, 2,0);
        tracep->declBus(c+228,"SocTop soc_axi45 slave_axi_aw_ready", false,-1, 2,0);
        tracep->declArray(c+229,"SocTop soc_axi45 slave_axi_w_data", false,-1, 191,0);
        tracep->declBus(c+235,"SocTop soc_axi45 slave_axi_w_strb", false,-1, 23,0);
        tracep->declBus(c+236,"SocTop soc_axi45 slave_axi_w_last", false,-1, 2,0);
        tracep->declBus(c+237,"SocTop soc_axi45 slave_axi_w_valid", false,-1, 2,0);
        tracep->declBus(c+238,"SocTop soc_axi45 slave_axi_w_ready", false,-1, 2,0);
        tracep->declBus(c+30,"SocTop soc_axi45 slave_axi_b_id", false,-1, 11,0);
        tracep->declBus(c+1,"SocTop soc_axi45 slave_axi_b_resp", false,-1, 5,0);
        tracep->declBus(c+31,"SocTop soc_axi45 slave_axi_b_valid", false,-1, 2,0);
        tracep->declBus(c+239,"SocTop soc_axi45 slave_axi_b_ready", false,-1, 2,0);
        tracep->declBus(c+240,"SocTop soc_axi45 slave_axi_ar_id", false,-1, 11,0);
        tracep->declArray(c+241,"SocTop soc_axi45 slave_axi_ar_addr", false,-1, 191,0);
        tracep->declBus(c+247,"SocTop soc_axi45 slave_axi_ar_len", false,-1, 23,0);
        tracep->declBus(c+248,"SocTop soc_axi45 slave_axi_ar_size", false,-1, 8,0);
        tracep->declBus(c+249,"SocTop soc_axi45 slave_axi_ar_burst", false,-1, 5,0);
        tracep->declBus(c+250,"SocTop soc_axi45 slave_axi_ar_cache", false,-1, 11,0);
        tracep->declBus(c+251,"SocTop soc_axi45 slave_axi_ar_prot", false,-1, 8,0);
        tracep->declBus(c+252,"SocTop soc_axi45 slave_axi_ar_qos", false,-1, 11,0);
        tracep->declBus(c+253,"SocTop soc_axi45 slave_axi_ar_valid", false,-1, 2,0);
        tracep->declBus(c+254,"SocTop soc_axi45 slave_axi_ar_ready", false,-1, 2,0);
        tracep->declBus(c+641,"SocTop soc_axi45 slave_axi_r_id", false,-1, 11,0);
        tracep->declArray(c+32,"SocTop soc_axi45 slave_axi_r_data", false,-1, 191,0);
        tracep->declBus(c+2,"SocTop soc_axi45 slave_axi_r_resp", false,-1, 5,0);
        tracep->declBus(c+642,"SocTop soc_axi45 slave_axi_r_last", false,-1, 2,0);
        tracep->declBus(c+255,"SocTop soc_axi45 slave_axi_r_valid", false,-1, 2,0);
        tracep->declBus(c+256,"SocTop soc_axi45 slave_axi_r_ready", false,-1, 2,0);
        tracep->declBus(c+716,"SocTop soc_axi45 SLAVE_NUM", false,-1, 31,0);
        tracep->declBit(c+666,"SocTop time_axi6 clk", false,-1);
        tracep->declBit(c+667,"SocTop time_axi6 rst", false,-1);
        tracep->declBit(c+20,"SocTop time_axi6 time_interrupt", false,-1);
        tracep->declBus(c+291,"SocTop time_axi6 time_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+292,"SocTop time_axi6 time_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+294,"SocTop time_axi6 time_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+295,"SocTop time_axi6 time_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+296,"SocTop time_axi6 time_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+297,"SocTop time_axi6 time_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+298,"SocTop time_axi6 time_axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+299,"SocTop time_axi6 time_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+301,"SocTop time_axi6 time_axi_aw_valid", false,-1);
        tracep->declBit(c+300,"SocTop time_axi6 time_axi_aw_ready", false,-1);
        tracep->declQuad(c+302,"SocTop time_axi6 time_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+304,"SocTop time_axi6 time_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+305,"SocTop time_axi6 time_axi_w_last", false,-1);
        tracep->declBit(c+306,"SocTop time_axi6 time_axi_w_valid", false,-1);
        tracep->declBit(c+307,"SocTop time_axi6 time_axi_w_ready", false,-1);
        tracep->declBus(c+165,"SocTop time_axi6 time_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+3,"SocTop time_axi6 time_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+38,"SocTop time_axi6 time_axi_b_valid", false,-1);
        tracep->declBit(c+308,"SocTop time_axi6 time_axi_b_ready", false,-1);
        tracep->declBus(c+309,"SocTop time_axi6 time_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+310,"SocTop time_axi6 time_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+312,"SocTop time_axi6 time_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+313,"SocTop time_axi6 time_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+314,"SocTop time_axi6 time_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+315,"SocTop time_axi6 time_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+316,"SocTop time_axi6 time_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+317,"SocTop time_axi6 time_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+318,"SocTop time_axi6 time_axi_ar_valid", false,-1);
        tracep->declBit(c+319,"SocTop time_axi6 time_axi_ar_ready", false,-1);
        tracep->declBus(c+320,"SocTop time_axi6 time_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+39,"SocTop time_axi6 time_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+4,"SocTop time_axi6 time_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+321,"SocTop time_axi6 time_axi_r_last", false,-1);
        tracep->declBit(c+725,"SocTop time_axi6 time_axi_r_valid", false,-1);
        tracep->declBit(c+322,"SocTop time_axi6 time_axi_r_ready", false,-1);
        tracep->declQuad(c+160,"SocTop time_axi6 car_mtime_l", false,-1, 63,0);
        tracep->declQuad(c+162,"SocTop time_axi6 csr_mtime_h", false,-1, 63,0);
        tracep->declBit(c+740,"SocTop time_axi6 csr_mtime_l_r_ena", false,-1);
        tracep->declBit(c+741,"SocTop time_axi6 csr_mtine_h_r_ena", false,-1);
        tracep->declBit(c+611,"SocTop time_axi6 csr_mtime_l_w_ena", false,-1);
        tracep->declBit(c+612,"SocTop time_axi6 csr_mtime_h_w_ena", false,-1);
        tracep->declBit(c+613,"SocTop time_axi6 aw_shakehand", false,-1);
        tracep->declBit(c+614,"SocTop time_axi6 w_shakehand", false,-1);
        tracep->declBit(c+615,"SocTop time_axi6 mode_right", false,-1);
        tracep->declBus(c+616,"SocTop time_axi6 state_time_m", false,-1, 1,0);
        tracep->declBus(c+164,"SocTop time_axi6 state_time_m_nxt", false,-1, 1,0);
        tracep->declBit(c+617,"SocTop time_axi6 mode_right_r", false,-1);
        tracep->declBit(c+618,"SocTop time_axi6 ar_shakehand", false,-1);
        tracep->declQuad(c+198,"SocTop time_axi6 time_csr_link", false,-1, 63,0);
        tracep->declBus(c+619,"SocTop time_axi6 state_time_r", false,-1, 1,0);
        tracep->declBus(c+620,"SocTop time_axi6 state_time_r_nxt", false,-1, 1,0);
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
        tracep->fullCData(oldp+1,(vlSelf->SocTop__DOT__add_axi_b_resp),6);
        tracep->fullCData(oldp+2,(vlSelf->SocTop__DOT__add_axi_r_resp),6);
        tracep->fullCData(oldp+3,(vlSelf->SocTop__DOT__tim_axi_b_resp),2);
        tracep->fullCData(oldp+4,(vlSelf->SocTop__DOT__tim_axi_r_resp),2);
        tracep->fullQData(oldp+5,(vlSelf->SocTop__DOT__rvcpu_data_addr),64);
        tracep->fullCData(oldp+7,(vlSelf->SocTop__DOT__rvcpu_wmask),8);
        tracep->fullQData(oldp+8,(vlSelf->SocTop__DOT__rvcpu_data_o),64);
        tracep->fullBit(oldp+10,(vlSelf->SocTop__DOT__rvcpu_we));
        tracep->fullBit(oldp+11,(vlSelf->SocTop__DOT__rvcpu_re));
        tracep->fullIData(oldp+12,(vlSelf->SocTop__DOT__i_cache_inst_data),32);
        tracep->fullBit(oldp+13,((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_ti_sign)))));
        tracep->fullBit(oldp+14,(vlSelf->SocTop__DOT__i_cache_read_ena));
        tracep->fullBit(oldp+15,((1U & (~ ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl) 
                                           >> 1U)))));
        tracep->fullQData(oldp+16,(vlSelf->SocTop__DOT__d_cache_data_out),64);
        tracep->fullBit(oldp+18,(vlSelf->SocTop__DOT__d_cache_read_ena));
        tracep->fullBit(oldp+19,(vlSelf->SocTop__DOT__arbitrate_ti_sign));
        tracep->fullBit(oldp+20,((vlSelf->SocTop__DOT__time_axi6__DOT__car_mtime_l 
                                  > vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h)));
        tracep->fullQData(oldp+21,(vlSelf->SocTop__DOT__t_axi_aw_addr),64);
        tracep->fullBit(oldp+23,(vlSelf->SocTop__DOT__t_axi_aw_valid));
        tracep->fullQData(oldp+24,(vlSelf->SocTop__DOT__t_axi_w_data),64);
        tracep->fullCData(oldp+26,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid)
                                     ? 1U : 0U)),4);
        tracep->fullQData(oldp+27,(vlSelf->SocTop__DOT__t_axi_ar_addr),64);
        tracep->fullBit(oldp+29,(vlSelf->SocTop__DOT__t_axi_ar_valid));
        tracep->fullSData(oldp+30,(vlSelf->SocTop__DOT__add_axi_b_id),12);
        tracep->fullCData(oldp+31,(vlSelf->SocTop__DOT__add_axi_b_valid),3);
        tracep->fullWData(oldp+32,(vlSelf->SocTop__DOT__add_axi_r_data),192);
        tracep->fullBit(oldp+38,(vlSelf->SocTop__DOT__tim_axi_b_valid));
        tracep->fullQData(oldp+39,(vlSelf->SocTop__DOT__tim_axi_r_data),64);
        tracep->fullCData(oldp+41,(vlSelf->SocTop__DOT__prot_chose_write),3);
        tracep->fullCData(oldp+42,(vlSelf->SocTop__DOT__prot_chose_read),3);
        tracep->fullCData(oldp+43,((0x1fU & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                             >> 0xfU))),5);
        tracep->fullBit(oldp+44,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_stall_req));
        tracep->fullQData(oldp+45,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_data),64);
        tracep->fullCData(oldp+47,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1),5);
        tracep->fullBit(oldp+48,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1));
        tracep->fullCData(oldp+49,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2),5);
        tracep->fullBit(oldp+50,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2));
        tracep->fullCData(oldp+51,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type),8);
        tracep->fullCData(oldp+52,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode),8);
        tracep->fullQData(oldp+53,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op),64);
        tracep->fullQData(oldp+55,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op2),64);
        tracep->fullBit(oldp+57,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_ena));
        tracep->fullCData(oldp+58,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_addr),5);
        tracep->fullQData(oldp+59,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_pc),64);
        tracep->fullSData(oldp+61,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_s_offset),12);
        tracep->fullCData(oldp+62,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_memsel),3);
        tracep->fullBit(oldp+63,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_pip_jalrena));
        tracep->fullBit(oldp+64,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_if_flush));
        tracep->fullCData(oldp+65,(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl),5);
        tracep->fullQData(oldp+66,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_id_data),64);
        tracep->fullQData(oldp+68,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_ex_mem_pc),64);
        tracep->fullQData(oldp+70,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_pc),64);
        tracep->fullIData(oldp+72,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_id_ex_inst),32);
        tracep->fullIData(oldp+73,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_ex_mem_inst),32);
        tracep->fullIData(oldp+74,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_inst),32);
        tracep->fullIData(oldp+75,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm),20);
        tracep->fullSData(oldp+76,((vlSelf->SocTop__DOT__i_cache_inst_data 
                                    >> 0x14U)),12);
        tracep->fullSData(oldp+77,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm),12);
        tracep->fullCData(oldp+78,((0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)),7);
        tracep->fullBit(oldp+79,((IData)((0x6fU == 
                                          (0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)))));
        tracep->fullBit(oldp+80,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr));
        tracep->fullBit(oldp+81,((IData)((0x63U == 
                                          (0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)))));
        tracep->fullQData(oldp+82,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__operand1),64);
        tracep->fullQData(oldp+84,(((IData)((0x6fU 
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
        tracep->fullQData(oldp+86,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc),64);
        tracep->fullBit(oldp+88,((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))));
        tracep->fullCData(oldp+89,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__rs1),5);
        tracep->fullBit(oldp+90,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui));
        tracep->fullBit(oldp+91,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc));
        tracep->fullBit(oldp+92,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal));
        tracep->fullBit(oldp+93,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr));
        tracep->fullBit(oldp+94,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jump));
        tracep->fullBit(oldp+95,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srai));
        tracep->fullBit(oldp+96,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addiw));
        tracep->fullBit(oldp+97,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slliw));
        tracep->fullBit(oldp+98,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srliw));
        tracep->fullBit(oldp+99,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraiw));
        tracep->fullBit(oldp+100,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_add));
        tracep->fullBit(oldp+101,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sub));
        tracep->fullBit(oldp+102,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sll));
        tracep->fullBit(oldp+103,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slt));
        tracep->fullBit(oldp+104,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sltu));
        tracep->fullBit(oldp+105,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_xor));
        tracep->fullBit(oldp+106,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srl));
        tracep->fullBit(oldp+107,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sra));
        tracep->fullBit(oldp+108,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_or));
        tracep->fullBit(oldp+109,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_and));
        tracep->fullBit(oldp+110,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addw));
        tracep->fullBit(oldp+111,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_subw));
        tracep->fullBit(oldp+112,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sllw));
        tracep->fullBit(oldp+113,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srlw));
        tracep->fullBit(oldp+114,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraw));
        tracep->fullBit(oldp+115,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw));
        tracep->fullBit(oldp+116,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs));
        tracep->fullBit(oldp+117,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc));
        tracep->fullBit(oldp+118,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrwi));
        tracep->fullBit(oldp+119,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc))));
        tracep->fullBit(oldp+120,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak));
        tracep->fullBit(oldp+121,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1));
        tracep->fullBit(oldp+122,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1));
        tracep->fullBit(oldp+123,((1U & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl) 
                                         >> 3U))));
        tracep->fullQData(oldp+124,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__exe_res),64);
        tracep->fullCData(oldp+126,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_byte),8);
        tracep->fullSData(oldp+127,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte),16);
        tracep->fullIData(oldp+128,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word),32);
        tracep->fullQData(oldp+129,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_data),64);
        tracep->fullCData(oldp+131,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_mask),8);
        tracep->fullCData(oldp+132,(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst),6);
        tracep->fullBit(oldp+133,(vlSelf->SocTop__DOT__i_cache12__DOT__i_tag_ena1));
        tracep->fullBit(oldp+134,(vlSelf->SocTop__DOT__i_cache12__DOT__i_tag_ena2));
        tracep->fullCData(oldp+135,(vlSelf->SocTop__DOT__d_cache13__DOT__count_addr),6);
        tracep->fullBit(oldp+136,(vlSelf->SocTop__DOT__d_cache13__DOT__wirte_chose1));
        tracep->fullBit(oldp+137,(vlSelf->SocTop__DOT__d_cache13__DOT__wirte_chose2));
        tracep->fullCData(oldp+138,(vlSelf->SocTop__DOT__d_cache13__DOT__state_store),6);
        tracep->fullQData(oldp+139,((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                     >> 9U)),55);
        tracep->fullCData(oldp+141,(vlSelf->SocTop__DOT__d_cache13__DOT__state_load),6);
        tracep->fullCData(oldp+142,((0x3fU & (IData)(
                                                     (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                      >> 3U)))),6);
        tracep->fullQData(oldp+143,((0x80000000000000ULL 
                                     | (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                        >> 9U))),56);
        tracep->fullBit(oldp+145,(vlSelf->SocTop__DOT__d_cache13__DOT__tag_ena1));
        tracep->fullBit(oldp+146,(vlSelf->SocTop__DOT__d_cache13__DOT__tag_ena2));
        tracep->fullCData(oldp+147,((0x3fU & (IData)(
                                                     (vlSelf->SocTop__DOT__rvcpu_data_o 
                                                      >> 3U)))),6);
        tracep->fullQData(oldp+148,(vlSelf->SocTop__DOT__d_cache13__DOT__in_data1),64);
        tracep->fullCData(oldp+150,(vlSelf->SocTop__DOT__d_cache13__DOT__data_ena1),8);
        tracep->fullQData(oldp+151,(vlSelf->SocTop__DOT__d_cache13__DOT__in_data2),64);
        tracep->fullCData(oldp+153,(vlSelf->SocTop__DOT__d_cache13__DOT__data_ena2),8);
        tracep->fullCData(oldp+154,(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state_nex),2);
        tracep->fullBit(oldp+155,(((IData)(vlSelf->SocTop__DOT__i_cache_read_ena) 
                                   & (IData)(vlSelf->SocTop__DOT__d_cache_read_ena))));
        tracep->fullBit(oldp+156,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid));
        tracep->fullBit(oldp+157,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_valid));
        tracep->fullCData(oldp+158,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_state_nxt),2);
        tracep->fullCData(oldp+159,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_state_nxt),2);
        tracep->fullQData(oldp+160,(vlSelf->SocTop__DOT__time_axi6__DOT__car_mtime_l),64);
        tracep->fullQData(oldp+162,(vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h),64);
        tracep->fullCData(oldp+164,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m_nxt),2);
        tracep->fullCData(oldp+165,(((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m_nxt))
                                      ? (0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_id) 
                                                 >> 4U))
                                      : 0U)),4);
        tracep->fullBit(oldp+166,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__if_stall_req))));
        tracep->fullQData(oldp+167,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr)
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
        tracep->fullBit(oldp+169,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+170,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x2000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+171,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x3000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+172,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x4000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+173,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+174,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+175,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x1000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+176,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x5000U 
                                                    == 
                                                    (0x40007000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+177,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+178,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x1000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+179,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x4000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+180,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x5000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+181,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+182,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+183,((1U & (IData)(((0x80U 
                                                  == 
                                                  (0x80U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+184,((1U & (IData)(((0x80U 
                                                  == 
                                                  (0x80U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+185,(((IData)(((0x80U 
                                             == (0x80U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                            & (0U == 
                                               (0x7000U 
                                                & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                   & (0U == (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                             >> 0x14U)))));
        tracep->fullBit(oldp+186,(((IData)(((0x80U 
                                             == (0x80U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                            & (0U == 
                                               (0x7000U 
                                                & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                   & (0x18U == (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+187,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr) 
                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena))));
        tracep->fullBit(oldp+188,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr) 
                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena))));
        tracep->fullBit(oldp+189,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))));
        tracep->fullQData(oldp+190,(((((- (QData)((IData)(
                                                          (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                           >> 0x1fU)))) 
                                       << 0xcU) | (QData)((IData)(
                                                                  (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                   >> 0x14U)))) 
                                     + vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op)),64);
        tracep->fullBit(oldp+192,((1U & (((~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1)) 
                                          & (~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1))) 
                                         & (~ (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                                == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                               & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena)))))));
        tracep->fullQData(oldp+193,(((2U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type))
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
        tracep->fullBit(oldp+195,(((IData)(vlSelf->SocTop__DOT__t_axi_aw_valid) 
                                   & (IData)(vlSelf->SocTop__DOT__t_axi_aw_ready))));
        tracep->fullBit(oldp+196,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_valid) 
                                   & (IData)(vlSelf->SocTop__DOT__t_axi_ar_ready))));
        tracep->fullBit(oldp+197,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid) 
                                   & (IData)(vlSelf->SocTop__DOT__t_axi_ar_ready))));
        tracep->fullQData(oldp+198,(((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_l_w_ena)
                                      ? vlSelf->SocTop__DOT__time_axi6__DOT__car_mtime_l
                                      : ((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h_w_ena)
                                          ? vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h
                                          : 0ULL))),64);
        tracep->fullQData(oldp+200,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_data_outp),64);
        tracep->fullIData(oldp+202,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_data_oupt),32);
        tracep->fullBit(oldp+203,(vlSelf->SocTop__DOT__t_axi_aw_ready));
        tracep->fullCData(oldp+204,(vlSelf->SocTop__DOT__t_axi_w_strb),8);
        tracep->fullBit(oldp+205,(vlSelf->SocTop__DOT__t_axi_w_valid));
        tracep->fullBit(oldp+206,(vlSelf->SocTop__DOT__t_axi_w_ready));
        tracep->fullCData(oldp+207,(vlSelf->SocTop__DOT__t_axi_b_id),4);
        tracep->fullCData(oldp+208,(vlSelf->SocTop__DOT__t_axi_b_resp),2);
        tracep->fullBit(oldp+209,(vlSelf->SocTop__DOT__t_axi_b_valid));
        tracep->fullBit(oldp+210,(vlSelf->SocTop__DOT__t_axi_ar_ready));
        tracep->fullQData(oldp+211,(vlSelf->SocTop__DOT__t_axi_r_data),64);
        tracep->fullBit(oldp+213,(vlSelf->SocTop__DOT__t_axi_r_valid));
        tracep->fullSData(oldp+214,(vlSelf->SocTop__DOT__add_axi_aw_id),12);
        tracep->fullWData(oldp+215,(vlSelf->SocTop__DOT__add_axi_aw_addr),192);
        tracep->fullIData(oldp+221,(vlSelf->SocTop__DOT__add_axi_aw_len),24);
        tracep->fullSData(oldp+222,(vlSelf->SocTop__DOT__add_axi_aw_size),9);
        tracep->fullCData(oldp+223,(vlSelf->SocTop__DOT__add_axi_aw_burst),6);
        tracep->fullSData(oldp+224,(vlSelf->SocTop__DOT__add_axi_aw_cache),12);
        tracep->fullSData(oldp+225,(vlSelf->SocTop__DOT__add_axi_aw_prot),9);
        tracep->fullSData(oldp+226,(vlSelf->SocTop__DOT__add_axi_aw_qos),12);
        tracep->fullCData(oldp+227,(vlSelf->SocTop__DOT__add_axi_aw_valid),3);
        tracep->fullCData(oldp+228,(vlSelf->SocTop__DOT__add_axi_aw_ready),3);
        tracep->fullWData(oldp+229,(vlSelf->SocTop__DOT__add_axi_w_data),192);
        tracep->fullIData(oldp+235,(vlSelf->SocTop__DOT__add_axi_w_strb),24);
        tracep->fullCData(oldp+236,(vlSelf->SocTop__DOT__add_axi_w_last),3);
        tracep->fullCData(oldp+237,(vlSelf->SocTop__DOT__add_axi_w_valid),3);
        tracep->fullCData(oldp+238,(vlSelf->SocTop__DOT__add_axi_w_ready),3);
        tracep->fullCData(oldp+239,(vlSelf->SocTop__DOT__add_axi_b_ready),3);
        tracep->fullSData(oldp+240,(vlSelf->SocTop__DOT__add_axi_ar_id),12);
        tracep->fullWData(oldp+241,(vlSelf->SocTop__DOT__add_axi_ar_addr),192);
        tracep->fullIData(oldp+247,(vlSelf->SocTop__DOT__add_axi_ar_len),24);
        tracep->fullSData(oldp+248,(vlSelf->SocTop__DOT__add_axi_ar_size),9);
        tracep->fullCData(oldp+249,(vlSelf->SocTop__DOT__add_axi_ar_burst),6);
        tracep->fullSData(oldp+250,(vlSelf->SocTop__DOT__add_axi_ar_cache),12);
        tracep->fullSData(oldp+251,(vlSelf->SocTop__DOT__add_axi_ar_prot),9);
        tracep->fullSData(oldp+252,(vlSelf->SocTop__DOT__add_axi_ar_qos),12);
        tracep->fullCData(oldp+253,(vlSelf->SocTop__DOT__add_axi_ar_valid),3);
        tracep->fullCData(oldp+254,(vlSelf->SocTop__DOT__add_axi_ar_ready),3);
        tracep->fullCData(oldp+255,(vlSelf->SocTop__DOT__add_axi_r_valid),3);
        tracep->fullCData(oldp+256,(vlSelf->SocTop__DOT__add_axi_r_ready),3);
        tracep->fullCData(oldp+257,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_id) 
                                             >> 8U))),4);
        tracep->fullQData(oldp+258,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_aw_addr[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_aw_addr[4U])))),64);
        tracep->fullCData(oldp+260,((0xffU & (vlSelf->SocTop__DOT__add_axi_aw_len 
                                              >> 0x10U))),8);
        tracep->fullCData(oldp+261,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_size) 
                                           >> 6U))),3);
        tracep->fullCData(oldp+262,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_burst) 
                                           >> 4U))),2);
        tracep->fullCData(oldp+263,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_cache) 
                                             >> 8U))),4);
        tracep->fullCData(oldp+264,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_prot) 
                                           >> 6U))),3);
        tracep->fullCData(oldp+265,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_qos) 
                                             >> 8U))),4);
        tracep->fullBit(oldp+266,(vlSelf->SocTop__DOT__soc_axi_aw_ready));
        tracep->fullBit(oldp+267,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                         >> 2U))));
        tracep->fullQData(oldp+268,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_w_data[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_w_data[4U])))),64);
        tracep->fullCData(oldp+270,((0xffU & (vlSelf->SocTop__DOT__add_axi_w_strb 
                                              >> 0x10U))),8);
        tracep->fullBit(oldp+271,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_last) 
                                         >> 2U))));
        tracep->fullBit(oldp+272,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                         >> 2U))));
        tracep->fullBit(oldp+273,(vlSelf->SocTop__DOT__soc_axi_w_ready));
        tracep->fullBit(oldp+274,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))));
        tracep->fullBit(oldp+275,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                         >> 2U))));
        tracep->fullCData(oldp+276,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                             >> 8U))),4);
        tracep->fullQData(oldp+277,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_ar_addr[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_ar_addr[4U])))),64);
        tracep->fullCData(oldp+279,((0xffU & (vlSelf->SocTop__DOT__add_axi_ar_len 
                                              >> 0x10U))),8);
        tracep->fullCData(oldp+280,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_size) 
                                           >> 6U))),3);
        tracep->fullCData(oldp+281,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_burst) 
                                           >> 4U))),2);
        tracep->fullCData(oldp+282,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_cache) 
                                             >> 8U))),4);
        tracep->fullCData(oldp+283,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_prot) 
                                           >> 6U))),3);
        tracep->fullCData(oldp+284,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_qos) 
                                             >> 8U))),4);
        tracep->fullBit(oldp+285,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                                         >> 2U))));
        tracep->fullBit(oldp+286,(vlSelf->SocTop__DOT__soc_axi_ar_ready));
        tracep->fullCData(oldp+287,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                      ? (0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                                 >> 8U))
                                      : 0U)),4);
        tracep->fullBit(oldp+288,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))));
        tracep->fullBit(oldp+289,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))));
        tracep->fullBit(oldp+290,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                         >> 2U))));
        tracep->fullCData(oldp+291,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_id) 
                                             >> 4U))),4);
        tracep->fullQData(oldp+292,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))),64);
        tracep->fullCData(oldp+294,((0xffU & (vlSelf->SocTop__DOT__add_axi_aw_len 
                                              >> 8U))),8);
        tracep->fullCData(oldp+295,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_size) 
                                           >> 3U))),3);
        tracep->fullCData(oldp+296,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_burst) 
                                           >> 2U))),2);
        tracep->fullCData(oldp+297,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_cache) 
                                             >> 4U))),4);
        tracep->fullCData(oldp+298,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_prot) 
                                           >> 3U))),3);
        tracep->fullCData(oldp+299,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_qos) 
                                             >> 4U))),4);
        tracep->fullBit(oldp+300,(vlSelf->SocTop__DOT__tim_axi_aw_ready));
        tracep->fullBit(oldp+301,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                         >> 1U))));
        tracep->fullQData(oldp+302,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_w_data[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_w_data[2U])))),64);
        tracep->fullCData(oldp+304,((0xffU & (vlSelf->SocTop__DOT__add_axi_w_strb 
                                              >> 8U))),8);
        tracep->fullBit(oldp+305,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_last) 
                                         >> 1U))));
        tracep->fullBit(oldp+306,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                         >> 1U))));
        tracep->fullBit(oldp+307,(vlSelf->SocTop__DOT__tim_axi_w_ready));
        tracep->fullBit(oldp+308,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                         >> 1U))));
        tracep->fullCData(oldp+309,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                             >> 4U))),4);
        tracep->fullQData(oldp+310,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))),64);
        tracep->fullCData(oldp+312,((0xffU & (vlSelf->SocTop__DOT__add_axi_ar_len 
                                              >> 8U))),8);
        tracep->fullCData(oldp+313,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_size) 
                                           >> 3U))),3);
        tracep->fullCData(oldp+314,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_burst) 
                                           >> 2U))),2);
        tracep->fullCData(oldp+315,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_cache) 
                                             >> 4U))),4);
        tracep->fullCData(oldp+316,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_prot) 
                                           >> 3U))),3);
        tracep->fullCData(oldp+317,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_qos) 
                                             >> 4U))),4);
        tracep->fullBit(oldp+318,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                                         >> 1U))));
        tracep->fullBit(oldp+319,(vlSelf->SocTop__DOT__tim_axi_ar_ready));
        tracep->fullCData(oldp+320,(((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r))
                                      ? (0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                                 >> 4U))
                                      : 0U)),4);
        tracep->fullBit(oldp+321,(vlSelf->SocTop__DOT__tim_axi_r_last));
        tracep->fullBit(oldp+322,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                         >> 1U))));
        tracep->fullCData(oldp+323,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_id))),4);
        tracep->fullQData(oldp+324,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_aw_addr[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_aw_addr[0U])))),64);
        tracep->fullCData(oldp+326,((0xffU & vlSelf->SocTop__DOT__add_axi_aw_len)),8);
        tracep->fullCData(oldp+327,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_size))),3);
        tracep->fullCData(oldp+328,((3U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_burst))),2);
        tracep->fullCData(oldp+329,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_cache))),4);
        tracep->fullCData(oldp+330,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_prot))),3);
        tracep->fullCData(oldp+331,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_qos))),4);
        tracep->fullBit(oldp+332,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_valid))));
        tracep->fullQData(oldp+333,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_w_data[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_w_data[0U])))),64);
        tracep->fullCData(oldp+335,((0xffU & vlSelf->SocTop__DOT__add_axi_w_strb)),8);
        tracep->fullBit(oldp+336,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_w_last))));
        tracep->fullBit(oldp+337,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_w_valid))));
        tracep->fullBit(oldp+338,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_b_ready))));
        tracep->fullCData(oldp+339,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_id))),4);
        tracep->fullQData(oldp+340,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_ar_addr[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_ar_addr[0U])))),64);
        tracep->fullCData(oldp+342,((0xffU & vlSelf->SocTop__DOT__add_axi_ar_len)),8);
        tracep->fullCData(oldp+343,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_size))),3);
        tracep->fullCData(oldp+344,((3U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_burst))),2);
        tracep->fullCData(oldp+345,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_cache))),4);
        tracep->fullCData(oldp+346,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_prot))),3);
        tracep->fullCData(oldp+347,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_qos))),4);
        tracep->fullBit(oldp+348,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_valid))));
        tracep->fullBit(oldp+349,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_r_ready))));
        tracep->fullBit(oldp+350,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)) 
                                   & (0U == (0xfU & 
                                             ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                              >> 8U))))));
        tracep->fullBit(oldp+351,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)) 
                                   & (1U == (0xfU & 
                                             ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                              >> 8U))))));
        tracep->fullQData(oldp+352,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                      ? vlSelf->SocTop__DOT__axi_mnq4__DOT__read_addr_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+354,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))
                                      ? vlSelf->SocTop__DOT__axi_mnq4__DOT__write_addr_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+356,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))
                                      ? vlSelf->SocTop__DOT__axi_mnq4__DOT__write_data_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+358,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc),64);
        tracep->fullIData(oldp+360,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst),32);
        tracep->fullBit(oldp+361,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena));
        tracep->fullCData(oldp+362,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr),5);
        tracep->fullBit(oldp+363,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena));
        tracep->fullCData(oldp+364,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type),8);
        tracep->fullCData(oldp+365,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_sel),3);
        tracep->fullQData(oldp+366,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_addr),64);
        tracep->fullQData(oldp+368,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena))
                                      ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data
                                      : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch)
                                          ? (4ULL + vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc)
                                          : 0ULL))),64);
        tracep->fullCData(oldp+370,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr),5);
        tracep->fullBit(oldp+371,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena));
        tracep->fullCData(oldp+372,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr),5);
        tracep->fullBit(oldp+373,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena));
        tracep->fullQData(oldp+374,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data),64);
        tracep->fullQData(oldp+376,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc),64);
        tracep->fullCData(oldp+378,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type),8);
        tracep->fullCData(oldp+379,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode),8);
        tracep->fullQData(oldp+380,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1),64);
        tracep->fullQData(oldp+382,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2),64);
        tracep->fullBit(oldp+384,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdena));
        tracep->fullSData(oldp+385,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset),12);
        tracep->fullCData(oldp+386,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type),8);
        tracep->fullQData(oldp+387,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data),64);
        tracep->fullCData(oldp+389,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel),3);
        tracep->fullQData(oldp+390,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr),64);
        tracep->fullQData(oldp+392,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_pc),64);
        tracep->fullIData(oldp+394,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_ex_inst),32);
        tracep->fullIData(oldp+395,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_inst),32);
        tracep->fullCData(oldp+396,((0x7fU & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)),7);
        tracep->fullCData(oldp+397,((0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+398,((7U & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                           >> 0xcU))),3);
        tracep->fullSData(oldp+399,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                     >> 0x14U)),12);
        tracep->fullCData(oldp+400,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+401,((0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                              >> 0x14U))),5);
        tracep->fullIData(oldp+402,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                     >> 0xcU)),20);
        tracep->fullSData(oldp+403,(((0xfe0U & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                 >> 7U)))),12);
        tracep->fullQData(oldp+404,((1ULL + (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))),64);
        tracep->fullQData(oldp+406,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sub_op2),64);
        tracep->fullQData(oldp+408,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2),64);
        tracep->fullQData(oldp+410,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_addw_op2),64);
        tracep->fullBit(oldp+412,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_ls_op2));
        tracep->fullQData(oldp+413,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__shift_res),64);
        tracep->fullIData(oldp+415,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sllw_op2),32);
        tracep->fullQData(oldp+416,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sllw_res),64);
        tracep->fullIData(oldp+418,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_srlw_op2),32);
        tracep->fullQData(oldp+419,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__srlw_res),64);
        tracep->fullIData(oldp+421,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sraw_op2),32);
        tracep->fullQData(oldp+422,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sraw_res),64);
        tracep->fullIData(oldp+424,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2),32);
        tracep->fullQData(oldp+425,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2)))),64);
        tracep->fullQData(oldp+427,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__upper_imm),64);
        tracep->fullBit(oldp+429,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch));
        tracep->fullBit(oldp+430,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena));
        tracep->fullSData(oldp+431,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx),12);
        tracep->fullQData(oldp+432,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data),64);
        tracep->fullBit(oldp+434,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena));
        tracep->fullBit(oldp+435,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena));
        tracep->fullBit(oldp+436,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena));
        tracep->fullBit(oldp+437,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en));
        tracep->fullBit(oldp+438,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en));
        tracep->fullQData(oldp+439,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data),64);
        tracep->fullQData(oldp+441,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value),64);
        tracep->fullQData(oldp+443,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
                                     | vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1)),64);
        tracep->fullQData(oldp+445,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
                                     & (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1))),64);
        tracep->fullBit(oldp+447,((0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+448,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en) 
                                   & (0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)))));
        tracep->fullBit(oldp+449,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en) 
                                   & (0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)))));
        tracep->fullQData(oldp+450,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcycle),64);
        tracep->fullBit(oldp+452,((0x300U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+453,(((0x300U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+454,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus));
        tracep->fullBit(oldp+455,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_ena));
        tracep->fullBit(oldp+456,((1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                          | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                          ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)
                                          : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena) 
                                             | ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                 ? (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                            >> 7U))
                                                 : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)))))));
        tracep->fullBit(oldp+457,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie));
        tracep->fullBit(oldp+458,((1U & ((~ ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                             | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))) 
                                         & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)
                                             ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)
                                             : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                 ? (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                            >> 3U))
                                                 : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)))))));
        tracep->fullBit(oldp+459,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie));
        tracep->fullCData(oldp+460,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                      ? 3U : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                      ? (IData)(
                                                                (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                                 >> 0xbU))
                                                      : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp)))))),2);
        tracep->fullCData(oldp+461,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp),2);
        tracep->fullCData(oldp+462,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs),2);
        tracep->fullBit(oldp+463,((3U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs))));
        tracep->fullQData(oldp+464,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus),64);
        tracep->fullBit(oldp+466,((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+467,(((((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en)) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
        tracep->fullBit(oldp+468,(((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
        tracep->fullQData(oldp+469,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base),62);
        tracep->fullQData(oldp+471,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base 
                                     << 2U)),64);
        tracep->fullBit(oldp+473,((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+474,((((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena))));
        tracep->fullBit(oldp+475,(((((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en)) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
        tracep->fullQData(oldp+476,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mepc),64);
        tracep->fullBit(oldp+478,((0x342U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+479,(((0x342U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+480,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause));
        tracep->fullBit(oldp+481,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
        tracep->fullQData(oldp+482,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                      ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value
                                      : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause)
                                          ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data
                                          : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause))),64);
        tracep->fullQData(oldp+484,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause),64);
        tracep->fullBit(oldp+486,((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+487,(((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+488,(((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
        tracep->fullBit(oldp+489,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie));
        tracep->fullQData(oldp+490,(((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie)) 
                                     << 7U)),64);
        tracep->fullBit(oldp+492,((0x344U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+493,(((0x344U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+494,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip));
        tracep->fullQData(oldp+495,((QData)((IData)(
                                                    ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip) 
                                                     << 7U)))),64);
        tracep->fullBit(oldp+497,((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+498,(((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+499,(((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
        tracep->fullQData(oldp+500,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mscrstch),64);
        tracep->fullCData(oldp+502,((7U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))),3);
        tracep->fullCData(oldp+503,((3U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                   >> 1U)))),2);
        tracep->fullBit(oldp+504,((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                 >> 2U)))));
        tracep->fullQData(oldp+505,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_pc_o),64);
        tracep->fullIData(oldp+507,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o),32);
        tracep->fullQData(oldp+508,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__pc_data1),64);
        tracep->fullBit(oldp+510,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_exyn));
        tracep->fullBit(oldp+511,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__teap_yn));
        tracep->fullQData(oldp+512,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__trap_code),64);
        tracep->fullQData(oldp+514,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[0]),64);
        tracep->fullQData(oldp+516,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[1]),64);
        tracep->fullQData(oldp+518,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[2]),64);
        tracep->fullQData(oldp+520,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[3]),64);
        tracep->fullQData(oldp+522,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[4]),64);
        tracep->fullQData(oldp+524,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[5]),64);
        tracep->fullQData(oldp+526,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[6]),64);
        tracep->fullQData(oldp+528,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[7]),64);
        tracep->fullQData(oldp+530,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[8]),64);
        tracep->fullQData(oldp+532,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[9]),64);
        tracep->fullQData(oldp+534,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[10]),64);
        tracep->fullQData(oldp+536,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[11]),64);
        tracep->fullQData(oldp+538,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[12]),64);
        tracep->fullQData(oldp+540,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[13]),64);
        tracep->fullQData(oldp+542,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[14]),64);
        tracep->fullQData(oldp+544,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[15]),64);
        tracep->fullQData(oldp+546,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[16]),64);
        tracep->fullQData(oldp+548,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[17]),64);
        tracep->fullQData(oldp+550,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[18]),64);
        tracep->fullQData(oldp+552,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[19]),64);
        tracep->fullQData(oldp+554,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[20]),64);
        tracep->fullQData(oldp+556,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[21]),64);
        tracep->fullQData(oldp+558,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[22]),64);
        tracep->fullQData(oldp+560,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[23]),64);
        tracep->fullQData(oldp+562,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[24]),64);
        tracep->fullQData(oldp+564,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[25]),64);
        tracep->fullQData(oldp+566,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[26]),64);
        tracep->fullQData(oldp+568,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[27]),64);
        tracep->fullQData(oldp+570,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[28]),64);
        tracep->fullQData(oldp+572,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[29]),64);
        tracep->fullQData(oldp+574,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[30]),64);
        tracep->fullQData(oldp+576,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[31]),64);
        tracep->fullIData(oldp+578,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__i),32);
        tracep->fullQData(oldp+579,(vlSelf->SocTop__DOT__i_cache12__DOT__addr_lock_reg),64);
        tracep->fullIData(oldp+581,(vlSelf->SocTop__DOT__i_cache12__DOT__u_data01__DOT__out_data),32);
        tracep->fullIData(oldp+582,(vlSelf->SocTop__DOT__i_cache12__DOT__u_data02__DOT__out_data),32);
        tracep->fullIData(oldp+583,(vlSelf->SocTop__DOT__i_cache12__DOT__i),32);
        tracep->fullIData(oldp+584,(vlSelf->SocTop__DOT__d_cache13__DOT__i),32);
        tracep->fullQData(oldp+585,(vlSelf->SocTop__DOT__d_cache13__DOT__u_data0__DOT__out_data),64);
        tracep->fullQData(oldp+587,(vlSelf->SocTop__DOT__d_cache13__DOT__u_data1__DOT__out_data),64);
        tracep->fullBit(oldp+589,(((IData)(vlSelf->SocTop__DOT__t_axi_w_valid) 
                                   & (IData)(vlSelf->SocTop__DOT__t_axi_w_ready))));
        tracep->fullBit(oldp+590,(vlSelf->SocTop__DOT__arbitrate4__DOT__b_shankhand));
        tracep->fullBit(oldp+591,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__b_shankhand) 
                                   & (0U == (IData)(vlSelf->SocTop__DOT__t_axi_b_resp)))));
        tracep->fullCData(oldp+592,(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state),2);
        tracep->fullCData(oldp+593,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_state),2);
        tracep->fullCData(oldp+594,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_state),2);
        tracep->fullBit(oldp+595,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_okreg));
        tracep->fullBit(oldp+596,((((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                    >> 2U) & (IData)(vlSelf->SocTop__DOT__soc_axi_aw_ready))));
        tracep->fullBit(oldp+597,((((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                    >> 2U) & (IData)(vlSelf->SocTop__DOT__soc_axi_w_ready))));
        tracep->fullBit(oldp+598,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state)) 
                                   & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                      >> 2U))));
        tracep->fullCData(oldp+599,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state),2);
        tracep->fullCData(oldp+600,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state_nxt),2);
        tracep->fullBit(oldp+601,((((((IData)(vlSelf->SocTop__DOT__soc_axi_ar_ready) 
                                      & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                                         >> 2U)) & 
                                     (0U == (0xffU 
                                             & (vlSelf->SocTop__DOT__add_axi_ar_len 
                                                >> 0x10U)))) 
                                    & (3U == (7U & 
                                              ((IData)(vlSelf->SocTop__DOT__add_axi_ar_size) 
                                               >> 6U)))) 
                                   & (1U == (3U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_burst) 
                                                   >> 4U))))));
        tracep->fullBit(oldp+602,((((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                    >> 2U) & (2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)))));
        tracep->fullCData(oldp+603,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state),2);
        tracep->fullCData(oldp+604,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state_nxt),2);
        tracep->fullQData(oldp+605,(vlSelf->SocTop__DOT__axi_mnq4__DOT__read_addr_reg),64);
        tracep->fullQData(oldp+607,(vlSelf->SocTop__DOT__axi_mnq4__DOT__write_data_reg),64);
        tracep->fullQData(oldp+609,(vlSelf->SocTop__DOT__axi_mnq4__DOT__write_addr_reg),64);
        tracep->fullBit(oldp+611,(vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_l_w_ena));
        tracep->fullBit(oldp+612,(vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h_w_ena));
        tracep->fullBit(oldp+613,(vlSelf->SocTop__DOT__time_axi6__DOT__aw_shakehand));
        tracep->fullBit(oldp+614,(vlSelf->SocTop__DOT__time_axi6__DOT__w_shakehand));
        tracep->fullBit(oldp+615,(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right));
        tracep->fullCData(oldp+616,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m),2);
        tracep->fullBit(oldp+617,((IData)(((((((0U 
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
        tracep->fullBit(oldp+618,(vlSelf->SocTop__DOT__time_axi6__DOT__ar_shakehand));
        tracep->fullCData(oldp+619,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r),2);
        tracep->fullCData(oldp+620,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r_nxt),2);
        tracep->fullBit(oldp+621,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_hit_ok));
        tracep->fullBit(oldp+622,(vlSelf->SocTop__DOT__i_cache12__DOT__write_i_ok));
        tracep->fullBit(oldp+623,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_in_cache1));
        tracep->fullBit(oldp+624,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_in_cache2));
        tracep->fullBit(oldp+625,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_write_cache));
        tracep->fullBit(oldp+626,(vlSelf->SocTop__DOT__d_cache13__DOT__write_ok));
        tracep->fullBit(oldp+627,(vlSelf->SocTop__DOT__d_cache13__DOT__write_incache));
        tracep->fullBit(oldp+628,(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena1));
        tracep->fullBit(oldp+629,(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena2));
        tracep->fullBit(oldp+630,(vlSelf->SocTop__DOT__d_cache13__DOT__write_l_ok));
        tracep->fullBit(oldp+631,(vlSelf->SocTop__DOT__d_cache13__DOT__load_in_cache1));
        tracep->fullBit(oldp+632,(vlSelf->SocTop__DOT__d_cache13__DOT__load_in_cache2));
        tracep->fullBit(oldp+633,(vlSelf->SocTop__DOT__d_cache13__DOT__read_cache));
        tracep->fullQData(oldp+634,(vlSelf->SocTop__DOT__rvcpu_inst_addr),64);
        tracep->fullBit(oldp+636,(vlSelf->SocTop__DOT__arbitrate_d_ok));
        tracep->fullBit(oldp+637,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_okreg));
        tracep->fullCData(oldp+638,(vlSelf->SocTop__DOT__t_axi_r_id),4);
        tracep->fullCData(oldp+639,(vlSelf->SocTop__DOT__t_axi_r_resp),2);
        tracep->fullBit(oldp+640,(vlSelf->SocTop__DOT__t_axi_r_last));
        tracep->fullSData(oldp+641,(vlSelf->SocTop__DOT__add_axi_r_id),12);
        tracep->fullCData(oldp+642,(vlSelf->SocTop__DOT__add_axi_r_last),3);
        tracep->fullQData(oldp+643,((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                     >> 9U)),55);
        tracep->fullBit(oldp+645,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_chose1));
        tracep->fullBit(oldp+646,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_chose2));
        tracep->fullCData(oldp+647,((0x3fU & (IData)(
                                                     (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                                      >> 3U)))),6);
        tracep->fullQData(oldp+648,((0x80000000000000ULL 
                                     | (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                        >> 9U))),56);
        tracep->fullQData(oldp+650,(vlSelf->SocTop__DOT__i_cache12__DOT__u_tag01__DOT__out_data),55);
        tracep->fullBit(oldp+652,(vlSelf->SocTop__DOT__i_cache12__DOT__u_tag01__DOT__out_vaild));
        tracep->fullQData(oldp+653,(vlSelf->SocTop__DOT__i_cache12__DOT__u_tag02__DOT__out_data),55);
        tracep->fullBit(oldp+655,(vlSelf->SocTop__DOT__i_cache12__DOT__u_tag02__DOT__out_vaild));
        tracep->fullBit(oldp+656,(vlSelf->SocTop__DOT__d_cache13__DOT__wbck_ok));
        tracep->fullBit(oldp+657,(vlSelf->SocTop__DOT__d_cache13__DOT__load_bc_ok));
        tracep->fullQData(oldp+658,(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_data),55);
        tracep->fullBit(oldp+660,(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_vaild));
        tracep->fullQData(oldp+661,(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_data),55);
        tracep->fullBit(oldp+663,(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_vaild));
        tracep->fullBit(oldp+664,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_r_shankhand));
        tracep->fullBit(oldp+665,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_r_shankhand));
        tracep->fullBit(oldp+666,(vlSelf->clk));
        tracep->fullBit(oldp+667,(vlSelf->rst));
        tracep->fullBit(oldp+668,(vlSelf->out_read_ram_ena));
        tracep->fullBit(oldp+669,(vlSelf->out_read_inst_ena));
        tracep->fullQData(oldp+670,(vlSelf->out_addr_outp),64);
        tracep->fullIData(oldp+672,(vlSelf->in_inst_data_in),32);
        tracep->fullQData(oldp+673,(vlSelf->in_ram_data_in),64);
        tracep->fullBit(oldp+675,(vlSelf->out_write_ram_ena));
        tracep->fullQData(oldp+676,(vlSelf->out_write_ram_data),64);
        tracep->fullQData(oldp+678,(vlSelf->out_write_ram_addr),64);
        tracep->fullQData(oldp+680,(((IData)(vlSelf->SocTop__DOT__arbitrate_ti_sign)
                                      ? vlSelf->SocTop__DOT__i_cache12__DOT__addr_lock_reg
                                      : vlSelf->SocTop__DOT__rvcpu_inst_addr)),64);
        tracep->fullBit(oldp+682,((((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                    & (4U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load))) 
                                   | ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__read_cache) 
                                      | (((IData)(vlSelf->SocTop__DOT__rvcpu_we) 
                                          & (4U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store))) 
                                         | (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__write_incache))))));
        tracep->fullQData(oldp+683,((((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
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
        tracep->fullBit(oldp+685,((((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                    & (0x20U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load))) 
                                   | (vlSelf->SocTop__DOT__d_cache13__DOT__dirty1
                                      [vlSelf->SocTop__DOT__d_cache13__DOT__count_addr] 
                                      & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                         [vlSelf->SocTop__DOT__d_cache13__DOT__count_addr] 
                                         >= vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                         [vlSelf->SocTop__DOT__d_cache13__DOT__count_addr])))));
        tracep->fullQData(oldp+686,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                      ? ((0U == (0xfU 
                                                 & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                                    >> 8U)))
                                          ? vlSelf->in_ram_data_in
                                          : (QData)((IData)(vlSelf->in_inst_data_in)))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+688,(((1U & ((~ (IData)(vlSelf->rst)) 
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
        tracep->fullBit(oldp+690,(((IData)(vlSelf->rst)
                                    ? 0U : (1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)))));
        tracep->fullQData(oldp+691,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
                                                 ? 
                                                (0xfffffffffffffffeULL 
                                                 & vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc)
                                                 : vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc))),64);
        tracep->fullBit(oldp+693,(((IData)(vlSelf->rst)
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
        tracep->fullQData(oldp+694,((((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1))
                                      ? ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                           == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                          & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                          ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                          : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                         [vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1])
                                      : 0ULL)),64);
        tracep->fullQData(oldp+696,((((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2))
                                      ? ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                           == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                          & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                          ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                          : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                         [vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2])
                                      : 0ULL)),64);
        tracep->fullBit(oldp+698,(((~ (IData)(vlSelf->rst)) 
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
        tracep->fullBit(oldp+699,(((IData)(vlSelf->rst)
                                    ? 0U : (1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1) 
                                                   & (2U 
                                                      == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                  & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1) 
                                                     == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)))))));
        tracep->fullBit(oldp+700,(((IData)(vlSelf->rst)
                                    ? 0U : (1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2) 
                                                   & (2U 
                                                      == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                  & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2) 
                                                     == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)))))));
        tracep->fullQData(oldp+701,(((IData)(vlSelf->rst)
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
        tracep->fullQData(oldp+703,(((IData)(vlSelf->rst)
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
        tracep->fullQData(oldp+705,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((1U 
                                                 & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                            >> 2U)))
                                                 ? 
                                                ((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)) 
                                                 << 0x20U)
                                                 : (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data))))),64);
        tracep->fullCData(oldp+707,(((IData)(vlSelf->rst)
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
        tracep->fullCData(oldp+708,(((IData)(vlSelf->rst)
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
        tracep->fullCData(oldp+709,(((IData)(vlSelf->rst)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                             >> 2U)))
                                               ? 0xf0U
                                               : 0xfU))),8);
        tracep->fullBit(oldp+710,((1U & ((~ (IData)(vlSelf->rst)) 
                                         & (~ ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl) 
                                               >> 1U))))));
        tracep->fullIData(oldp+711,(((((0x10U == (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst)) 
                                       & (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_okreg)) 
                                      & (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__inst_chose1))
                                      ? vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_data_oupt
                                      : 0U)),32);
        tracep->fullIData(oldp+712,(((((0x10U == (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst)) 
                                       & (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_okreg)) 
                                      & (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__inst_chose2))
                                      ? vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_data_oupt
                                      : 0U)),32);
        tracep->fullBit(oldp+713,(vlSelf->SocTop__DOT__d_cache13__DOT__store_ok));
        tracep->fullBit(oldp+714,(vlSelf->SocTop__DOT__d_cache13__DOT__load_ok));
        tracep->fullBit(oldp+715,((vlSelf->SocTop__DOT__d_cache13__DOT__dirty1
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
        tracep->fullIData(oldp+716,(3U),32);
        tracep->fullCData(oldp+717,(0U),4);
        tracep->fullCData(oldp+718,(0U),8);
        tracep->fullCData(oldp+719,(3U),3);
        tracep->fullCData(oldp+720,(1U),2);
        tracep->fullCData(oldp+721,(2U),4);
        tracep->fullCData(oldp+722,(0U),3);
        tracep->fullBit(oldp+723,(1U));
        tracep->fullCData(oldp+724,(0U),2);
        tracep->fullBit(oldp+725,(vlSelf->SocTop__DOT__tim_axi_r_valid));
        tracep->fullBit(oldp+726,(vlSelf->SocTop__DOT__io_axi_aw_ready));
        tracep->fullBit(oldp+727,(vlSelf->SocTop__DOT__io_axi_w_ready));
        tracep->fullCData(oldp+728,(vlSelf->SocTop__DOT__io_axi_b_id),4);
        tracep->fullCData(oldp+729,(vlSelf->SocTop__DOT__io_axi_b_resp),2);
        tracep->fullBit(oldp+730,(vlSelf->SocTop__DOT__io_axi_b_valid));
        tracep->fullBit(oldp+731,(vlSelf->SocTop__DOT__io_axi_ar_ready));
        tracep->fullCData(oldp+732,(vlSelf->SocTop__DOT__io_axi_r_id),4);
        tracep->fullQData(oldp+733,(vlSelf->SocTop__DOT__io_axi_r_data),64);
        tracep->fullCData(oldp+735,(vlSelf->SocTop__DOT__io_axi_r_resp),2);
        tracep->fullBit(oldp+736,(vlSelf->SocTop__DOT__io_axi_r_last));
        tracep->fullBit(oldp+737,(vlSelf->SocTop__DOT__io_axi_r_valid));
        tracep->fullCData(oldp+738,(0xffU),8);
        tracep->fullBit(oldp+739,(0U));
        tracep->fullBit(oldp+740,(vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_l_r_ena));
        tracep->fullBit(oldp+741,(vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtine_h_r_ena));
    }
}
