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
        tracep->declBit(c+677,"clk", false,-1);
        tracep->declBit(c+678,"rst", false,-1);
        tracep->declBit(c+679,"out_read_ram_ena", false,-1);
        tracep->declBit(c+680,"out_read_inst_ena", false,-1);
        tracep->declQuad(c+681,"out_addr_outp", false,-1, 63,0);
        tracep->declBus(c+683,"in_inst_data_in", false,-1, 31,0);
        tracep->declQuad(c+684,"in_ram_data_in", false,-1, 63,0);
        tracep->declBit(c+686,"out_write_ram_ena", false,-1);
        tracep->declQuad(c+687,"out_write_ram_data", false,-1, 63,0);
        tracep->declQuad(c+689,"out_write_ram_addr", false,-1, 63,0);
        tracep->declBit(c+677,"SocTop clk", false,-1);
        tracep->declBit(c+678,"SocTop rst", false,-1);
        tracep->declBit(c+679,"SocTop out_read_ram_ena", false,-1);
        tracep->declBit(c+680,"SocTop out_read_inst_ena", false,-1);
        tracep->declQuad(c+681,"SocTop out_addr_outp", false,-1, 63,0);
        tracep->declBus(c+683,"SocTop in_inst_data_in", false,-1, 31,0);
        tracep->declQuad(c+684,"SocTop in_ram_data_in", false,-1, 63,0);
        tracep->declBit(c+686,"SocTop out_write_ram_ena", false,-1);
        tracep->declQuad(c+687,"SocTop out_write_ram_data", false,-1, 63,0);
        tracep->declQuad(c+689,"SocTop out_write_ram_addr", false,-1, 63,0);
        tracep->declBus(c+727,"SocTop SLAVE_NUM", false,-1, 31,0);
        tracep->declBit(c+677,"SocTop aclk", false,-1);
        tracep->declQuad(c+645,"SocTop rvcpu_inst_addr", false,-1, 63,0);
        tracep->declBit(c+678,"SocTop rvcpu_inst_ena", false,-1);
        tracep->declQuad(c+5,"SocTop rvcpu_data_addr", false,-1, 63,0);
        tracep->declBus(c+7,"SocTop rvcpu_wmask", false,-1, 7,0);
        tracep->declQuad(c+8,"SocTop rvcpu_data_o", false,-1, 63,0);
        tracep->declBit(c+10,"SocTop rvcpu_we", false,-1);
        tracep->declBit(c+11,"SocTop rvcpu_re", false,-1);
        tracep->declBus(c+12,"SocTop i_cache_inst_data", false,-1, 31,0);
        tracep->declBit(c+13,"SocTop i_cache_inst_valid", false,-1);
        tracep->declBit(c+14,"SocTop i_cache_read_ena", false,-1);
        tracep->declQuad(c+691,"SocTop i_cache_addr", false,-1, 63,0);
        tracep->declBit(c+15,"SocTop i_cache_ready", false,-1);
        tracep->declQuad(c+16,"SocTop d_cache_data_out", false,-1, 63,0);
        tracep->declBit(c+693,"SocTop d_cache_mem_finish", false,-1);
        tracep->declQuad(c+5,"SocTop d_cache_out_addr", false,-1, 63,0);
        tracep->declQuad(c+694,"SocTop d_cache_out_data", false,-1, 63,0);
        tracep->declBit(c+18,"SocTop d_cache_read_ena", false,-1);
        tracep->declBit(c+696,"SocTop d_cache_write_ena", false,-1);
        tracep->declQuad(c+192,"SocTop arbitrate_d_data", false,-1, 63,0);
        tracep->declBit(c+647,"SocTop arbitrate_d_ok", false,-1);
        tracep->declBus(c+194,"SocTop arbitrate_i_data", false,-1, 31,0);
        tracep->declBit(c+648,"SocTop arbitrate_i_ok", false,-1);
        tracep->declBit(c+19,"SocTop arbitrate_ti_sign", false,-1);
        tracep->declBit(c+195,"SocTop time_init_sign", false,-1);
        tracep->declBus(c+728,"SocTop t_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+20,"SocTop t_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+729,"SocTop t_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+730,"SocTop t_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+731,"SocTop t_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+732,"SocTop t_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+733,"SocTop t_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+728,"SocTop t_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+196,"SocTop t_axi_aw_ready", false,-1);
        tracep->declBit(c+22,"SocTop t_axi_aw_valid", false,-1);
        tracep->declQuad(c+23,"SocTop t_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+197,"SocTop t_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+734,"SocTop t_axi_w_last", false,-1);
        tracep->declBit(c+198,"SocTop t_axi_w_valid", false,-1);
        tracep->declBit(c+199,"SocTop t_axi_w_ready", false,-1);
        tracep->declBus(c+200,"SocTop t_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+201,"SocTop t_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+202,"SocTop t_axi_b_valid", false,-1);
        tracep->declBit(c+734,"SocTop t_axi_b_ready", false,-1);
        tracep->declBus(c+25,"SocTop t_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+26,"SocTop t_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+729,"SocTop t_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+730,"SocTop t_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+731,"SocTop t_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+732,"SocTop t_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+733,"SocTop t_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+728,"SocTop t_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+28,"SocTop t_axi_ar_valid", false,-1);
        tracep->declBit(c+203,"SocTop t_axi_ar_ready", false,-1);
        tracep->declBus(c+649,"SocTop t_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+204,"SocTop t_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+650,"SocTop t_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+651,"SocTop t_axi_r_last", false,-1);
        tracep->declBit(c+206,"SocTop t_axi_r_valid", false,-1);
        tracep->declBit(c+734,"SocTop t_axi_r_ready", false,-1);
        tracep->declBus(c+207,"SocTop add_axi_aw_id", false,-1, 11,0);
        tracep->declArray(c+208,"SocTop add_axi_aw_addr", false,-1, 191,0);
        tracep->declBus(c+214,"SocTop add_axi_aw_len", false,-1, 23,0);
        tracep->declBus(c+215,"SocTop add_axi_aw_size", false,-1, 8,0);
        tracep->declBus(c+216,"SocTop add_axi_aw_burst", false,-1, 5,0);
        tracep->declBus(c+217,"SocTop add_axi_aw_cache", false,-1, 11,0);
        tracep->declBus(c+218,"SocTop add_axi_aw_prot", false,-1, 8,0);
        tracep->declBus(c+219,"SocTop add_axi_aw_qos", false,-1, 11,0);
        tracep->declBus(c+220,"SocTop add_axi_aw_valid", false,-1, 2,0);
        tracep->declBus(c+221,"SocTop add_axi_aw_ready", false,-1, 2,0);
        tracep->declArray(c+222,"SocTop add_axi_w_data", false,-1, 191,0);
        tracep->declBus(c+228,"SocTop add_axi_w_strb", false,-1, 23,0);
        tracep->declBus(c+229,"SocTop add_axi_w_last", false,-1, 2,0);
        tracep->declBus(c+230,"SocTop add_axi_w_valid", false,-1, 2,0);
        tracep->declBus(c+231,"SocTop add_axi_w_ready", false,-1, 2,0);
        tracep->declBus(c+29,"SocTop add_axi_b_id", false,-1, 11,0);
        tracep->declBus(c+1,"SocTop add_axi_b_resp", false,-1, 5,0);
        tracep->declBus(c+30,"SocTop add_axi_b_valid", false,-1, 2,0);
        tracep->declBus(c+232,"SocTop add_axi_b_ready", false,-1, 2,0);
        tracep->declBus(c+233,"SocTop add_axi_ar_id", false,-1, 11,0);
        tracep->declArray(c+234,"SocTop add_axi_ar_addr", false,-1, 191,0);
        tracep->declBus(c+240,"SocTop add_axi_ar_len", false,-1, 23,0);
        tracep->declBus(c+241,"SocTop add_axi_ar_size", false,-1, 8,0);
        tracep->declBus(c+242,"SocTop add_axi_ar_burst", false,-1, 5,0);
        tracep->declBus(c+243,"SocTop add_axi_ar_cache", false,-1, 11,0);
        tracep->declBus(c+244,"SocTop add_axi_ar_prot", false,-1, 8,0);
        tracep->declBus(c+245,"SocTop add_axi_ar_qos", false,-1, 11,0);
        tracep->declBus(c+246,"SocTop add_axi_ar_valid", false,-1, 2,0);
        tracep->declBus(c+247,"SocTop add_axi_ar_ready", false,-1, 2,0);
        tracep->declBus(c+652,"SocTop add_axi_r_id", false,-1, 11,0);
        tracep->declArray(c+31,"SocTop add_axi_r_data", false,-1, 191,0);
        tracep->declBus(c+2,"SocTop add_axi_r_resp", false,-1, 5,0);
        tracep->declBus(c+653,"SocTop add_axi_r_last", false,-1, 2,0);
        tracep->declBus(c+248,"SocTop add_axi_r_valid", false,-1, 2,0);
        tracep->declBus(c+249,"SocTop add_axi_r_ready", false,-1, 2,0);
        tracep->declBus(c+250,"SocTop soc_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+251,"SocTop soc_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+253,"SocTop soc_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+254,"SocTop soc_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+255,"SocTop soc_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+256,"SocTop soc_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+257,"SocTop soc_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+258,"SocTop soc_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+259,"SocTop soc_axi_aw_ready", false,-1);
        tracep->declBit(c+260,"SocTop soc_axi_aw_valid", false,-1);
        tracep->declQuad(c+261,"SocTop soc_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+263,"SocTop soc_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+264,"SocTop soc_axi_w_last", false,-1);
        tracep->declBit(c+265,"SocTop soc_axi_w_valid", false,-1);
        tracep->declBit(c+266,"SocTop soc_axi_w_ready", false,-1);
        tracep->declBus(c+250,"SocTop soc_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+735,"SocTop soc_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+267,"SocTop soc_axi_b_valid", false,-1);
        tracep->declBit(c+268,"SocTop soc_axi_b_ready", false,-1);
        tracep->declBus(c+269,"SocTop soc_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+270,"SocTop soc_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+272,"SocTop soc_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+273,"SocTop soc_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+274,"SocTop soc_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+275,"SocTop soc_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+276,"SocTop soc_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+277,"SocTop soc_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+278,"SocTop soc_axi_ar_valid", false,-1);
        tracep->declBit(c+279,"SocTop soc_axi_ar_ready", false,-1);
        tracep->declBus(c+280,"SocTop soc_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+697,"SocTop soc_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+735,"SocTop soc_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+281,"SocTop soc_axi_r_last", false,-1);
        tracep->declBit(c+282,"SocTop soc_axi_r_valid", false,-1);
        tracep->declBit(c+283,"SocTop soc_axi_r_ready", false,-1);
        tracep->declBus(c+284,"SocTop tim_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+285,"SocTop tim_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+287,"SocTop tim_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+288,"SocTop tim_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+289,"SocTop tim_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+290,"SocTop tim_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+291,"SocTop tim_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+292,"SocTop tim_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+293,"SocTop tim_axi_aw_ready", false,-1);
        tracep->declBit(c+294,"SocTop tim_axi_aw_valid", false,-1);
        tracep->declQuad(c+295,"SocTop tim_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+297,"SocTop tim_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+298,"SocTop tim_axi_w_last", false,-1);
        tracep->declBit(c+299,"SocTop tim_axi_w_valid", false,-1);
        tracep->declBit(c+300,"SocTop tim_axi_w_ready", false,-1);
        tracep->declBus(c+158,"SocTop tim_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+3,"SocTop tim_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+37,"SocTop tim_axi_b_valid", false,-1);
        tracep->declBit(c+301,"SocTop tim_axi_b_ready", false,-1);
        tracep->declBus(c+302,"SocTop tim_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+303,"SocTop tim_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+305,"SocTop tim_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+306,"SocTop tim_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+307,"SocTop tim_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+308,"SocTop tim_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+309,"SocTop tim_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+310,"SocTop tim_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+311,"SocTop tim_axi_ar_valid", false,-1);
        tracep->declBit(c+312,"SocTop tim_axi_ar_ready", false,-1);
        tracep->declBus(c+313,"SocTop tim_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+314,"SocTop tim_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+4,"SocTop tim_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+316,"SocTop tim_axi_r_last", false,-1);
        tracep->declBit(c+317,"SocTop tim_axi_r_valid", false,-1);
        tracep->declBit(c+318,"SocTop tim_axi_r_ready", false,-1);
        tracep->declBus(c+319,"SocTop io_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+320,"SocTop io_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+322,"SocTop io_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+323,"SocTop io_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+324,"SocTop io_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+325,"SocTop io_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+326,"SocTop io_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+327,"SocTop io_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+736,"SocTop io_axi_aw_ready", false,-1);
        tracep->declBit(c+328,"SocTop io_axi_aw_valid", false,-1);
        tracep->declQuad(c+329,"SocTop io_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+331,"SocTop io_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+332,"SocTop io_axi_w_last", false,-1);
        tracep->declBit(c+333,"SocTop io_axi_w_valid", false,-1);
        tracep->declBit(c+737,"SocTop io_axi_w_ready", false,-1);
        tracep->declBus(c+738,"SocTop io_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+739,"SocTop io_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+740,"SocTop io_axi_b_valid", false,-1);
        tracep->declBit(c+334,"SocTop io_axi_b_ready", false,-1);
        tracep->declBus(c+335,"SocTop io_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+336,"SocTop io_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+338,"SocTop io_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+339,"SocTop io_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+340,"SocTop io_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+341,"SocTop io_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+342,"SocTop io_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+343,"SocTop io_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+344,"SocTop io_axi_ar_valid", false,-1);
        tracep->declBit(c+741,"SocTop io_axi_ar_ready", false,-1);
        tracep->declBus(c+742,"SocTop io_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+743,"SocTop io_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+745,"SocTop io_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+746,"SocTop io_axi_r_last", false,-1);
        tracep->declBit(c+747,"SocTop io_axi_r_valid", false,-1);
        tracep->declBit(c+345,"SocTop io_axi_r_ready", false,-1);
        tracep->declBus(c+748,"SocTop d_cache_mask_gd", false,-1, 7,0);
        tracep->declBit(c+346,"SocTop read_ram_sign", false,-1);
        tracep->declBit(c+347,"SocTop read_inst_sign", false,-1);
        tracep->declQuad(c+348,"SocTop addr_oup_sign", false,-1, 63,0);
        tracep->declBus(c+683,"SocTop inst_data_sign", false,-1, 31,0);
        tracep->declQuad(c+684,"SocTop ram_data_sign", false,-1, 63,0);
        tracep->declBit(c+267,"SocTop write_ena_sign", false,-1);
        tracep->declQuad(c+350,"SocTop write_addr_sign", false,-1, 63,0);
        tracep->declQuad(c+352,"SocTop write_data_sign", false,-1, 63,0);
        tracep->declBus(c+38,"SocTop prot_chose_write", false,-1, 2,0);
        tracep->declBus(c+39,"SocTop prot_chose_read", false,-1, 2,0);
        tracep->declBit(c+677,"SocTop rvcpu1 clk", false,-1);
        tracep->declBit(c+678,"SocTop rvcpu1 rst", false,-1);
        tracep->declQuad(c+645,"SocTop rvcpu1 inst_addr", false,-1, 63,0);
        tracep->declBit(c+678,"SocTop rvcpu1 inst_ena", false,-1);
        tracep->declBit(c+15,"SocTop rvcpu1 inst_ready", false,-1);
        tracep->declBus(c+12,"SocTop rvcpu1 inst", false,-1, 31,0);
        tracep->declBit(c+13,"SocTop rvcpu1 bui_inst_valid", false,-1);
        tracep->declQuad(c+5,"SocTop rvcpu1 data_addr", false,-1, 63,0);
        tracep->declBus(c+7,"SocTop rvcpu1 wmask", false,-1, 7,0);
        tracep->declQuad(c+8,"SocTop rvcpu1 data_o", false,-1, 63,0);
        tracep->declQuad(c+16,"SocTop rvcpu1 data_i", false,-1, 63,0);
        tracep->declBit(c+10,"SocTop rvcpu1 we", false,-1);
        tracep->declBit(c+11,"SocTop rvcpu1 re", false,-1);
        tracep->declBit(c+693,"SocTop rvcpu1 mem_finish", false,-1);
        tracep->declBit(c+195,"SocTop rvcpu1 timer_intr", false,-1);
        tracep->declQuad(c+699,"SocTop rvcpu1 pip_regfile_x1", false,-1, 63,0);
        tracep->declBit(c+701,"SocTop rvcpu1 pip_refflie_x1_ena", false,-1);
        tracep->declBus(c+40,"SocTop rvcpu1 pip_regfile_x1_addr", false,-1, 4,0);
        tracep->declQuad(c+702,"SocTop rvcpu1 pip_pc", false,-1, 63,0);
        tracep->declBit(c+41,"SocTop rvcpu1 if_stall_req", false,-1);
        tracep->declQuad(c+354,"SocTop rvcpu1 if_id_pc", false,-1, 63,0);
        tracep->declBus(c+356,"SocTop rvcpu1 if_id_inst", false,-1, 31,0);
        tracep->declBit(c+357,"SocTop rvcpu1 ex_flush", false,-1);
        tracep->declQuad(c+42,"SocTop rvcpu1 ex_id_rd_data", false,-1, 63,0);
        tracep->declBus(c+358,"SocTop rvcpu1 ex_id_rd_addr", false,-1, 4,0);
        tracep->declBit(c+359,"SocTop rvcpu1 ex_id_rd_ena", false,-1);
        tracep->declBus(c+360,"SocTop rvcpu1 ex_id_rd_type", false,-1, 7,0);
        tracep->declBus(c+361,"SocTop rvcpu1 ex_mem_sel", false,-1, 2,0);
        tracep->declQuad(c+362,"SocTop rvcpu1 ex_mem_addr", false,-1, 63,0);
        tracep->declBit(c+357,"SocTop rvcpu1 ex_pc_branchena", false,-1);
        tracep->declQuad(c+364,"SocTop rvcpu1 ex_pc_branchpc", false,-1, 63,0);
        tracep->declBit(c+159,"SocTop rvcpu1 ex_ctrl_req", false,-1);
        tracep->declBus(c+44,"SocTop rvcpu1 id_reg_addr1", false,-1, 4,0);
        tracep->declBit(c+45,"SocTop rvcpu1 id_reg_ena1", false,-1);
        tracep->declBus(c+46,"SocTop rvcpu1 id_reg_addr2", false,-1, 4,0);
        tracep->declBit(c+47,"SocTop rvcpu1 id_reg_ena2", false,-1);
        tracep->declBit(c+704,"SocTop rvcpu1 id_ctrl_req", false,-1);
        tracep->declBus(c+48,"SocTop rvcpu1 id_ex_type", false,-1, 7,0);
        tracep->declBus(c+49,"SocTop rvcpu1 id_ex_opcode", false,-1, 7,0);
        tracep->declQuad(c+50,"SocTop rvcpu1 id_ex_op", false,-1, 63,0);
        tracep->declQuad(c+52,"SocTop rvcpu1 id_ex_op2", false,-1, 63,0);
        tracep->declBit(c+54,"SocTop rvcpu1 id_ex_rd_ena", false,-1);
        tracep->declBus(c+55,"SocTop rvcpu1 id_ex_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+56,"SocTop rvcpu1 id_ex_pc", false,-1, 63,0);
        tracep->declBus(c+58,"SocTop rvcpu1 id_ex_s_offset", false,-1, 11,0);
        tracep->declBus(c+59,"SocTop rvcpu1 id_ex_memsel", false,-1, 2,0);
        tracep->declQuad(c+160,"SocTop rvcpu1 id_pip_jalrpc", false,-1, 63,0);
        tracep->declBit(c+60,"SocTop rvcpu1 id_pip_jalrena", false,-1);
        tracep->declBit(c+61,"SocTop rvcpu1 id_if_flush", false,-1);
        tracep->declBus(c+62,"SocTop rvcpu1 stall_ctrl", false,-1, 4,0);
        tracep->declQuad(c+705,"SocTop rvcpu1 regs_id_data1", false,-1, 63,0);
        tracep->declQuad(c+707,"SocTop rvcpu1 regs_id_data2", false,-1, 63,0);
        tracep->declQuad(c+63,"SocTop rvcpu1 mem_id_data", false,-1, 63,0);
        tracep->declBus(c+366,"SocTop rvcpu1 mem_id_addr", false,-1, 4,0);
        tracep->declBit(c+367,"SocTop rvcpu1 mem_id_ena", false,-1);
        tracep->declBit(c+709,"SocTop rvcpu1 mem_ctrl_req", false,-1);
        tracep->declBus(c+368,"SocTop rvcpu1 wb_id_addr", false,-1, 4,0);
        tracep->declBit(c+369,"SocTop rvcpu1 wb_id_ena", false,-1);
        tracep->declQuad(c+370,"SocTop rvcpu1 wb_regfile_data", false,-1, 63,0);
        tracep->declQuad(c+372,"SocTop rvcpu1 idex_ex_pc", false,-1, 63,0);
        tracep->declBus(c+374,"SocTop rvcpu1 idex_ex_type", false,-1, 7,0);
        tracep->declBus(c+375,"SocTop rvcpu1 idex_ex_opcode", false,-1, 7,0);
        tracep->declQuad(c+376,"SocTop rvcpu1 idex_ex_op1", false,-1, 63,0);
        tracep->declQuad(c+378,"SocTop rvcpu1 idex_ex_op2", false,-1, 63,0);
        tracep->declBit(c+380,"SocTop rvcpu1 idex_ex_rdena", false,-1);
        tracep->declBus(c+358,"SocTop rvcpu1 idex_ex_rdaddr", false,-1, 4,0);
        tracep->declBus(c+381,"SocTop rvcpu1 idex_ex_offset", false,-1, 11,0);
        tracep->declBus(c+361,"SocTop rvcpu1 idex_ex_sel", false,-1, 2,0);
        tracep->declBus(c+382,"SocTop rvcpu1 exmem_mem_type", false,-1, 7,0);
        tracep->declBit(c+367,"SocTop rvcpu1 exmem_mem_ena", false,-1);
        tracep->declQuad(c+383,"SocTop rvcpu1 exmem_mem_data", false,-1, 63,0);
        tracep->declBus(c+366,"SocTop rvcpu1 exmem_mem_addr", false,-1, 4,0);
        tracep->declBus(c+385,"SocTop rvcpu1 exmem_mem_sel", false,-1, 2,0);
        tracep->declQuad(c+386,"SocTop rvcpu1 exmem_mem_lsaddr", false,-1, 63,0);
        tracep->declQuad(c+65,"SocTop rvcpu1 ex_ex_mem_pc", false,-1, 63,0);
        tracep->declQuad(c+388,"SocTop rvcpu1 ex_mem_mem_pc", false,-1, 63,0);
        tracep->declQuad(c+67,"SocTop rvcpu1 mem_mem_wb_pc", false,-1, 63,0);
        tracep->declBus(c+69,"SocTop rvcpu1 id_id_ex_inst", false,-1, 31,0);
        tracep->declBus(c+390,"SocTop rvcpu1 id_ex_ex_inst", false,-1, 31,0);
        tracep->declBus(c+70,"SocTop rvcpu1 ex_ex_mem_inst", false,-1, 31,0);
        tracep->declBus(c+391,"SocTop rvcpu1 ex_mem_mem_inst", false,-1, 31,0);
        tracep->declBus(c+71,"SocTop rvcpu1 mem_mem_wb_inst", false,-1, 31,0);
        tracep->declBit(c+678,"SocTop rvcpu1 pip_fore0 rst", false,-1);
        tracep->declQuad(c+645,"SocTop rvcpu1 pip_fore0 pc_i", false,-1, 63,0);
        tracep->declBus(c+12,"SocTop rvcpu1 pip_fore0 inst", false,-1, 31,0);
        tracep->declQuad(c+699,"SocTop rvcpu1 pip_fore0 x1_data", false,-1, 63,0);
        tracep->declQuad(c+702,"SocTop rvcpu1 pip_fore0 pc_o", false,-1, 63,0);
        tracep->declBus(c+40,"SocTop rvcpu1 pip_fore0 x1_addr", false,-1, 4,0);
        tracep->declBit(c+701,"SocTop rvcpu1 pip_fore0 x1_ena", false,-1);
        tracep->declBus(c+72,"SocTop rvcpu1 pip_fore0 j_imm", false,-1, 20,1);
        tracep->declBus(c+73,"SocTop rvcpu1 pip_fore0 i_imm", false,-1, 11,0);
        tracep->declBus(c+74,"SocTop rvcpu1 pip_fore0 b_imm", false,-1, 12,1);
        tracep->declBus(c+75,"SocTop rvcpu1 pip_fore0 opcode", false,-1, 6,0);
        tracep->declBit(c+76,"SocTop rvcpu1 pip_fore0 inst_jal", false,-1);
        tracep->declBit(c+77,"SocTop rvcpu1 pip_fore0 inst_jalr", false,-1);
        tracep->declBit(c+78,"SocTop rvcpu1 pip_fore0 inst_bxx", false,-1);
        tracep->declQuad(c+79,"SocTop rvcpu1 pip_fore0 operand1", false,-1, 63,0);
        tracep->declQuad(c+81,"SocTop rvcpu1 pip_fore0 operand2", false,-1, 63,0);
        tracep->declQuad(c+83,"SocTop rvcpu1 pip_fore0 j_pc", false,-1, 63,0);
        tracep->declBit(c+677,"SocTop rvcpu1 pc1 clk", false,-1);
        tracep->declBit(c+678,"SocTop rvcpu1 pc1 rst", false,-1);
        tracep->declQuad(c+702,"SocTop rvcpu1 pc1 static_pc_i", false,-1, 63,0);
        tracep->declQuad(c+160,"SocTop rvcpu1 pc1 id_pc_i", false,-1, 63,0);
        tracep->declBit(c+60,"SocTop rvcpu1 pc1 id_pc_ena", false,-1);
        tracep->declQuad(c+364,"SocTop rvcpu1 pc1 ex_pc_i", false,-1, 63,0);
        tracep->declBit(c+357,"SocTop rvcpu1 pc1 ex_pc_ena", false,-1);
        tracep->declBit(c+85,"SocTop rvcpu1 pc1 pc_stall", false,-1);
        tracep->declQuad(c+645,"SocTop rvcpu1 pc1 pc", false,-1, 63,0);
        tracep->declBit(c+678,"SocTop rvcpu1 pc1 ce", false,-1);
        tracep->declBit(c+677,"SocTop rvcpu1 if_id2 clk", false,-1);
        tracep->declBit(c+678,"SocTop rvcpu1 if_id2 rst", false,-1);
        tracep->declQuad(c+645,"SocTop rvcpu1 if_id2 if_pc", false,-1, 63,0);
        tracep->declBus(c+12,"SocTop rvcpu1 if_id2 if_inst", false,-1, 31,0);
        tracep->declBit(c+357,"SocTop rvcpu1 if_id2 if_id_flush", false,-1);
        tracep->declBit(c+61,"SocTop rvcpu1 if_id2 if_id_bubble", false,-1);
        tracep->declBit(c+13,"SocTop rvcpu1 if_id2 if_inst_valid", false,-1);
        tracep->declBit(c+15,"SocTop rvcpu1 if_id2 if_inst_ready", false,-1);
        tracep->declBus(c+62,"SocTop rvcpu1 if_id2 stall_ctrl", false,-1, 4,0);
        tracep->declBit(c+41,"SocTop rvcpu1 if_id2 if_stall_req", false,-1);
        tracep->declQuad(c+354,"SocTop rvcpu1 if_id2 id_pc", false,-1, 63,0);
        tracep->declBus(c+356,"SocTop rvcpu1 if_id2 id_inst", false,-1, 31,0);
        tracep->declBit(c+678,"SocTop rvcpu1 id3 rst", false,-1);
        tracep->declBus(c+356,"SocTop rvcpu1 id3 inst_i", false,-1, 31,0);
        tracep->declQuad(c+354,"SocTop rvcpu1 id3 pc_i", false,-1, 63,0);
        tracep->declQuad(c+705,"SocTop rvcpu1 id3 op1_data_i", false,-1, 63,0);
        tracep->declQuad(c+707,"SocTop rvcpu1 id3 op2_data_i", false,-1, 63,0);
        tracep->declBus(c+44,"SocTop rvcpu1 id3 op1_addr_o", false,-1, 4,0);
        tracep->declBus(c+46,"SocTop rvcpu1 id3 op2_addr_o", false,-1, 4,0);
        tracep->declBit(c+45,"SocTop rvcpu1 id3 op1_read_o", false,-1);
        tracep->declBit(c+47,"SocTop rvcpu1 id3 op2_read_o", false,-1);
        tracep->declQuad(c+42,"SocTop rvcpu1 id3 ex_rd_data", false,-1, 63,0);
        tracep->declBus(c+358,"SocTop rvcpu1 id3 ex_rd_addr", false,-1, 4,0);
        tracep->declBit(c+359,"SocTop rvcpu1 id3 ex_rd_ena", false,-1);
        tracep->declBus(c+360,"SocTop rvcpu1 id3 ex_inst_type", false,-1, 7,0);
        tracep->declQuad(c+63,"SocTop rvcpu1 id3 mem_rd_data", false,-1, 63,0);
        tracep->declBus(c+366,"SocTop rvcpu1 id3 mem_rd_addr", false,-1, 4,0);
        tracep->declBit(c+367,"SocTop rvcpu1 id3 mem_rd_ena", false,-1);
        tracep->declBit(c+369,"SocTop rvcpu1 id3 wb_rd_ena", false,-1);
        tracep->declBus(c+368,"SocTop rvcpu1 id3 wb_rd_addr", false,-1, 4,0);
        tracep->declBit(c+704,"SocTop rvcpu1 id3 id_stall_req", false,-1);
        tracep->declBit(c+41,"SocTop rvcpu1 id3 if_stall_req", false,-1);
        tracep->declBus(c+48,"SocTop rvcpu1 id3 inst_type", false,-1, 7,0);
        tracep->declBus(c+49,"SocTop rvcpu1 id3 inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+50,"SocTop rvcpu1 id3 op1_o", false,-1, 63,0);
        tracep->declQuad(c+52,"SocTop rvcpu1 id3 op2_o", false,-1, 63,0);
        tracep->declBit(c+54,"SocTop rvcpu1 id3 rd_w_ena", false,-1);
        tracep->declBus(c+55,"SocTop rvcpu1 id3 rd_w_addr", false,-1, 4,0);
        tracep->declQuad(c+56,"SocTop rvcpu1 id3 pc_o", false,-1, 63,0);
        tracep->declBus(c+69,"SocTop rvcpu1 id3 inst_o", false,-1, 31,0);
        tracep->declBus(c+58,"SocTop rvcpu1 id3 store_addr_offset", false,-1, 11,0);
        tracep->declBus(c+59,"SocTop rvcpu1 id3 mem_op_sel", false,-1, 2,0);
        tracep->declBit(c+60,"SocTop rvcpu1 id3 jalr_pc_ena", false,-1);
        tracep->declQuad(c+160,"SocTop rvcpu1 id3 jalr_pc", false,-1, 63,0);
        tracep->declBit(c+61,"SocTop rvcpu1 id3 id_flush", false,-1);
        tracep->declBus(c+392,"SocTop rvcpu1 id3 opcode", false,-1, 6,0);
        tracep->declBus(c+393,"SocTop rvcpu1 id3 rd", false,-1, 4,0);
        tracep->declBus(c+394,"SocTop rvcpu1 id3 funct3", false,-1, 2,0);
        tracep->declBus(c+86,"SocTop rvcpu1 id3 rs1", false,-1, 4,0);
        tracep->declBus(c+395,"SocTop rvcpu1 id3 imm", false,-1, 11,0);
        tracep->declBus(c+396,"SocTop rvcpu1 id3 funct7", false,-1, 6,0);
        tracep->declBus(c+397,"SocTop rvcpu1 id3 rs2", false,-1, 4,0);
        tracep->declBus(c+398,"SocTop rvcpu1 id3 u_imm", false,-1, 19,0);
        tracep->declBus(c+399,"SocTop rvcpu1 id3 s_imm", false,-1, 11,0);
        tracep->declBit(c+87,"SocTop rvcpu1 id3 inst_lui", false,-1);
        tracep->declBit(c+88,"SocTop rvcpu1 id3 inst_auipc", false,-1);
        tracep->declBit(c+89,"SocTop rvcpu1 id3 inst_jal", false,-1);
        tracep->declBit(c+90,"SocTop rvcpu1 id3 inst_jalr", false,-1);
        tracep->declBit(c+91,"SocTop rvcpu1 id3 inst_jump", false,-1);
        tracep->declBit(c+162,"SocTop rvcpu1 id3 inst_addi", false,-1);
        tracep->declBit(c+163,"SocTop rvcpu1 id3 inst_slti", false,-1);
        tracep->declBit(c+164,"SocTop rvcpu1 id3 inst_sltiu", false,-1);
        tracep->declBit(c+165,"SocTop rvcpu1 id3 inst_xori", false,-1);
        tracep->declBit(c+166,"SocTop rvcpu1 id3 inst_ori", false,-1);
        tracep->declBit(c+167,"SocTop rvcpu1 id3 inst_andi", false,-1);
        tracep->declBit(c+168,"SocTop rvcpu1 id3 inst_slli", false,-1);
        tracep->declBit(c+169,"SocTop rvcpu1 id3 inst_srli", false,-1);
        tracep->declBit(c+92,"SocTop rvcpu1 id3 inst_srai", false,-1);
        tracep->declBit(c+93,"SocTop rvcpu1 id3 inst_addiw", false,-1);
        tracep->declBit(c+94,"SocTop rvcpu1 id3 inst_slliw", false,-1);
        tracep->declBit(c+95,"SocTop rvcpu1 id3 inst_srliw", false,-1);
        tracep->declBit(c+96,"SocTop rvcpu1 id3 inst_sraiw", false,-1);
        tracep->declBit(c+97,"SocTop rvcpu1 id3 inst_add", false,-1);
        tracep->declBit(c+98,"SocTop rvcpu1 id3 inst_sub", false,-1);
        tracep->declBit(c+99,"SocTop rvcpu1 id3 inst_sll", false,-1);
        tracep->declBit(c+100,"SocTop rvcpu1 id3 inst_slt", false,-1);
        tracep->declBit(c+101,"SocTop rvcpu1 id3 inst_sltu", false,-1);
        tracep->declBit(c+102,"SocTop rvcpu1 id3 inst_xor", false,-1);
        tracep->declBit(c+103,"SocTop rvcpu1 id3 inst_srl", false,-1);
        tracep->declBit(c+104,"SocTop rvcpu1 id3 inst_sra", false,-1);
        tracep->declBit(c+105,"SocTop rvcpu1 id3 inst_or", false,-1);
        tracep->declBit(c+106,"SocTop rvcpu1 id3 inst_and", false,-1);
        tracep->declBit(c+107,"SocTop rvcpu1 id3 inst_addw", false,-1);
        tracep->declBit(c+108,"SocTop rvcpu1 id3 inst_subw", false,-1);
        tracep->declBit(c+109,"SocTop rvcpu1 id3 inst_sllw", false,-1);
        tracep->declBit(c+110,"SocTop rvcpu1 id3 inst_srlw", false,-1);
        tracep->declBit(c+111,"SocTop rvcpu1 id3 inst_sraw", false,-1);
        tracep->declBit(c+170,"SocTop rvcpu1 id3 inst_beq", false,-1);
        tracep->declBit(c+171,"SocTop rvcpu1 id3 inst_ben", false,-1);
        tracep->declBit(c+172,"SocTop rvcpu1 id3 inst_blt", false,-1);
        tracep->declBit(c+173,"SocTop rvcpu1 id3 inst_bge", false,-1);
        tracep->declBit(c+174,"SocTop rvcpu1 id3 inst_bltu", false,-1);
        tracep->declBit(c+175,"SocTop rvcpu1 id3 inst_bgeu", false,-1);
        tracep->declBit(c+112,"SocTop rvcpu1 id3 inst_csrrw", false,-1);
        tracep->declBit(c+113,"SocTop rvcpu1 id3 inst_csrrs", false,-1);
        tracep->declBit(c+114,"SocTop rvcpu1 id3 inst_csrrc", false,-1);
        tracep->declBit(c+115,"SocTop rvcpu1 id3 inst_csrrwi", false,-1);
        tracep->declBit(c+176,"SocTop rvcpu1 id3 inst_csrrsi", false,-1);
        tracep->declBit(c+177,"SocTop rvcpu1 id3 inst_csrrci", false,-1);
        tracep->declBit(c+116,"SocTop rvcpu1 id3 inst_csr_rs1", false,-1);
        tracep->declBit(c+115,"SocTop rvcpu1 id3 inst_csr_imm", false,-1);
        tracep->declBit(c+178,"SocTop rvcpu1 id3 inst_ecall", false,-1);
        tracep->declBit(c+117,"SocTop rvcpu1 id3 inst_ebreak", false,-1);
        tracep->declBit(c+179,"SocTop rvcpu1 id3 inst_mret", false,-1);
        tracep->declBit(c+710,"SocTop rvcpu1 id3 op1_loda_relate", false,-1);
        tracep->declBit(c+711,"SocTop rvcpu1 id3 op2_loda_relate", false,-1);
        tracep->declBit(c+118,"SocTop rvcpu1 id3 ex_op1", false,-1);
        tracep->declBit(c+119,"SocTop rvcpu1 id3 mem_op1", false,-1);
        tracep->declBit(c+180,"SocTop rvcpu1 id3 ex_op2", false,-1);
        tracep->declBit(c+181,"SocTop rvcpu1 id3 mem_op2", false,-1);
        tracep->declBit(c+182,"SocTop rvcpu1 id3 wb_op1", false,-1);
        tracep->declQuad(c+183,"SocTop rvcpu1 id3 jalr_pc_temp", false,-1, 63,0);
        tracep->declBit(c+185,"SocTop rvcpu1 id3 predict_success", false,-1);
        tracep->declBit(c+677,"SocTop rvcpu1 id_ex4 clk", false,-1);
        tracep->declBit(c+678,"SocTop rvcpu1 id_ex4 rst", false,-1);
        tracep->declBit(c+357,"SocTop rvcpu1 id_ex4 id_ex_bubble", false,-1);
        tracep->declBus(c+62,"SocTop rvcpu1 id_ex4 stall_ctrl", false,-1, 4,0);
        tracep->declBus(c+69,"SocTop rvcpu1 id_ex4 id_inst", false,-1, 31,0);
        tracep->declQuad(c+56,"SocTop rvcpu1 id_ex4 id_pc", false,-1, 63,0);
        tracep->declBus(c+48,"SocTop rvcpu1 id_ex4 id_inst_type", false,-1, 7,0);
        tracep->declBus(c+49,"SocTop rvcpu1 id_ex4 id_inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+50,"SocTop rvcpu1 id_ex4 id_op1", false,-1, 63,0);
        tracep->declQuad(c+52,"SocTop rvcpu1 id_ex4 id_op2", false,-1, 63,0);
        tracep->declBit(c+54,"SocTop rvcpu1 id_ex4 id_rd_ena", false,-1);
        tracep->declBus(c+55,"SocTop rvcpu1 id_ex4 id_rd_addr", false,-1, 4,0);
        tracep->declBus(c+58,"SocTop rvcpu1 id_ex4 id_addr_offset", false,-1, 11,0);
        tracep->declBus(c+59,"SocTop rvcpu1 id_ex4 id_ls_sel", false,-1, 2,0);
        tracep->declBus(c+390,"SocTop rvcpu1 id_ex4 ex_inst", false,-1, 31,0);
        tracep->declQuad(c+372,"SocTop rvcpu1 id_ex4 ex_pc", false,-1, 63,0);
        tracep->declBus(c+374,"SocTop rvcpu1 id_ex4 ex_inst_type", false,-1, 7,0);
        tracep->declBus(c+375,"SocTop rvcpu1 id_ex4 ex_inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+376,"SocTop rvcpu1 id_ex4 ex_op1", false,-1, 63,0);
        tracep->declQuad(c+378,"SocTop rvcpu1 id_ex4 ex_op2", false,-1, 63,0);
        tracep->declBit(c+380,"SocTop rvcpu1 id_ex4 ex_rd_ena", false,-1);
        tracep->declBus(c+358,"SocTop rvcpu1 id_ex4 ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+381,"SocTop rvcpu1 id_ex4 ex_addr_offset", false,-1, 11,0);
        tracep->declBus(c+361,"SocTop rvcpu1 id_ex4 ex_ls_sel", false,-1, 2,0);
        tracep->declBit(c+677,"SocTop rvcpu1 ex5 clk", false,-1);
        tracep->declBit(c+678,"SocTop rvcpu1 ex5 rst", false,-1);
        tracep->declQuad(c+372,"SocTop rvcpu1 ex5 pc_i", false,-1, 63,0);
        tracep->declBus(c+390,"SocTop rvcpu1 ex5 id_ex_inst", false,-1, 31,0);
        tracep->declBus(c+374,"SocTop rvcpu1 ex5 inst_type_i", false,-1, 7,0);
        tracep->declBus(c+375,"SocTop rvcpu1 ex5 inst_opcode_i", false,-1, 7,0);
        tracep->declQuad(c+376,"SocTop rvcpu1 ex5 op1_i", false,-1, 63,0);
        tracep->declQuad(c+378,"SocTop rvcpu1 ex5 op2_i", false,-1, 63,0);
        tracep->declBit(c+380,"SocTop rvcpu1 ex5 rd_ena_i", false,-1);
        tracep->declBus(c+358,"SocTop rvcpu1 ex5 rd_addr_i", false,-1, 4,0);
        tracep->declBus(c+361,"SocTop rvcpu1 ex5 ls_sel_i", false,-1, 2,0);
        tracep->declBus(c+381,"SocTop rvcpu1 ex5 addr_offsel_i", false,-1, 11,0);
        tracep->declBus(c+360,"SocTop rvcpu1 ex5 inst_type_o", false,-1, 7,0);
        tracep->declBit(c+359,"SocTop rvcpu1 ex5 rd_ena_o", false,-1);
        tracep->declBus(c+358,"SocTop rvcpu1 ex5 rd_addr_o", false,-1, 4,0);
        tracep->declQuad(c+42,"SocTop rvcpu1 ex5 rd_data_o", false,-1, 63,0);
        tracep->declQuad(c+65,"SocTop rvcpu1 ex5 ex_pc_o", false,-1, 63,0);
        tracep->declBus(c+70,"SocTop rvcpu1 ex5 ex_inst_o", false,-1, 31,0);
        tracep->declBus(c+361,"SocTop rvcpu1 ex5 ls_sel_o", false,-1, 2,0);
        tracep->declQuad(c+362,"SocTop rvcpu1 ex5 ls_addr_o", false,-1, 63,0);
        tracep->declBit(c+357,"SocTop rvcpu1 ex5 ex_flush", false,-1);
        tracep->declBit(c+357,"SocTop rvcpu1 ex5 branch_pc_ena", false,-1);
        tracep->declQuad(c+364,"SocTop rvcpu1 ex5 branch_pc", false,-1, 63,0);
        tracep->declBit(c+41,"SocTop rvcpu1 ex5 if_stell_req", false,-1);
        tracep->declBit(c+159,"SocTop rvcpu1 ex5 ex_stall_req", false,-1);
        tracep->declBit(c+195,"SocTop rvcpu1 ex5 timer_intr", false,-1);
        tracep->declBit(c+120,"SocTop rvcpu1 ex5 ex_stall", false,-1);
        tracep->declQuad(c+121,"SocTop rvcpu1 ex5 exe_res", false,-1, 63,0);
        tracep->declQuad(c+400,"SocTop rvcpu1 ex5 op2_i_mux", false,-1, 63,0);
        tracep->declQuad(c+402,"SocTop rvcpu1 ex5 op1_sub_op2", false,-1, 63,0);
        tracep->declQuad(c+404,"SocTop rvcpu1 ex5 op1_add_op2", false,-1, 63,0);
        tracep->declQuad(c+406,"SocTop rvcpu1 ex5 op1_addw_op2", false,-1, 63,0);
        tracep->declBit(c+408,"SocTop rvcpu1 ex5 op1_ls_op2", false,-1);
        tracep->declQuad(c+409,"SocTop rvcpu1 ex5 shift_res", false,-1, 63,0);
        tracep->declBus(c+411,"SocTop rvcpu1 ex5 op1_sllw_op2", false,-1, 31,0);
        tracep->declQuad(c+412,"SocTop rvcpu1 ex5 sllw_res", false,-1, 63,0);
        tracep->declBus(c+414,"SocTop rvcpu1 ex5 op1_srlw_op2", false,-1, 31,0);
        tracep->declQuad(c+415,"SocTop rvcpu1 ex5 srlw_res", false,-1, 63,0);
        tracep->declBus(c+417,"SocTop rvcpu1 ex5 op1_sraw_op2", false,-1, 31,0);
        tracep->declQuad(c+418,"SocTop rvcpu1 ex5 sraw_res", false,-1, 63,0);
        tracep->declBus(c+420,"SocTop rvcpu1 ex5 op1_subw_op2", false,-1, 31,0);
        tracep->declQuad(c+421,"SocTop rvcpu1 ex5 subw_res", false,-1, 63,0);
        tracep->declQuad(c+423,"SocTop rvcpu1 ex5 upper_imm", false,-1, 63,0);
        tracep->declBit(c+425,"SocTop rvcpu1 ex5 ex_flush_branch", false,-1);
        tracep->declBit(c+426,"SocTop rvcpu1 ex5 tmr_trap_ena", false,-1);
        tracep->declBus(c+427,"SocTop rvcpu1 ex5 csr_idx", false,-1, 11,0);
        tracep->declQuad(c+428,"SocTop rvcpu1 ex5 read_csr_data", false,-1, 63,0);
        tracep->declBit(c+430,"SocTop rvcpu1 ex5 trap_ena", false,-1);
        tracep->declBit(c+431,"SocTop rvcpu1 ex5 ecall_trap_ena", false,-1);
        tracep->declBit(c+432,"SocTop rvcpu1 ex5 cmt_mret_ena", false,-1);
        tracep->declBit(c+433,"SocTop rvcpu1 ex5 csr_wr_en", false,-1);
        tracep->declBit(c+434,"SocTop rvcpu1 ex5 csr_rd_en", false,-1);
        tracep->declQuad(c+435,"SocTop rvcpu1 ex5 wbck_csr_data", false,-1, 63,0);
        tracep->declQuad(c+437,"SocTop rvcpu1 ex5 trap_mcause_value", false,-1, 63,0);
        tracep->declQuad(c+439,"SocTop rvcpu1 ex5 mask_set_res", false,-1, 63,0);
        tracep->declQuad(c+441,"SocTop rvcpu1 ex5 mask_clear_res", false,-1, 63,0);
        tracep->declBit(c+677,"SocTop rvcpu1 ex5 csr0 clk", false,-1);
        tracep->declBit(c+678,"SocTop rvcpu1 ex5 csr0 rst", false,-1);
        tracep->declQuad(c+372,"SocTop rvcpu1 ex5 csr0 pc_i", false,-1, 63,0);
        tracep->declBit(c+433,"SocTop rvcpu1 ex5 csr0 csr_wr_en", false,-1);
        tracep->declBit(c+434,"SocTop rvcpu1 ex5 csr0 csr_rd_en", false,-1);
        tracep->declBus(c+427,"SocTop rvcpu1 ex5 csr0 csr_idx", false,-1, 11,0);
        tracep->declBit(c+432,"SocTop rvcpu1 ex5 csr0 cmt_mret_ena", false,-1);
        tracep->declBit(c+431,"SocTop rvcpu1 ex5 csr0 ecall_trap_ena", false,-1);
        tracep->declQuad(c+437,"SocTop rvcpu1 ex5 csr0 trap_mcause_value", false,-1, 63,0);
        tracep->declBit(c+195,"SocTop rvcpu1 ex5 csr0 tmr_intr_ena", false,-1);
        tracep->declBit(c+426,"SocTop rvcpu1 ex5 csr0 tmr_trap_ena", false,-1);
        tracep->declQuad(c+428,"SocTop rvcpu1 ex5 csr0 read_csr_data", false,-1, 63,0);
        tracep->declQuad(c+435,"SocTop rvcpu1 ex5 csr0 wbck_csr_data", false,-1, 63,0);
        tracep->declBit(c+120,"SocTop rvcpu1 ex5 csr0 ex_stall", false,-1);
        tracep->declBit(c+443,"SocTop rvcpu1 ex5 csr0 sel_mcycle", false,-1);
        tracep->declBit(c+444,"SocTop rvcpu1 ex5 csr0 rd_mcycle", false,-1);
        tracep->declBit(c+445,"SocTop rvcpu1 ex5 csr0 wr_mcycle", false,-1);
        tracep->declQuad(c+446,"SocTop rvcpu1 ex5 csr0 csr_mcycle", false,-1, 63,0);
        tracep->declBit(c+448,"SocTop rvcpu1 ex5 csr0 sel_mstatus", false,-1);
        tracep->declBit(c+449,"SocTop rvcpu1 ex5 csr0 rd_mstatus", false,-1);
        tracep->declBit(c+450,"SocTop rvcpu1 ex5 csr0 wr_mstatus", false,-1);
        tracep->declBit(c+451,"SocTop rvcpu1 ex5 csr0 mstatus_mpie_ena", false,-1);
        tracep->declBit(c+452,"SocTop rvcpu1 ex5 csr0 mstatus_mpie_nxt", false,-1);
        tracep->declBit(c+453,"SocTop rvcpu1 ex5 csr0 csr_mstatus_mpie", false,-1);
        tracep->declBit(c+451,"SocTop rvcpu1 ex5 csr0 mstatus_mie_ena", false,-1);
        tracep->declBit(c+454,"SocTop rvcpu1 ex5 csr0 mstatus_mie_nxt", false,-1);
        tracep->declBit(c+455,"SocTop rvcpu1 ex5 csr0 csr_mstatus_mie", false,-1);
        tracep->declBit(c+451,"SocTop rvcpu1 ex5 csr0 mstatus_mpp_ena", false,-1);
        tracep->declBus(c+456,"SocTop rvcpu1 ex5 csr0 mstatus_mpp_nxt", false,-1, 1,0);
        tracep->declBus(c+457,"SocTop rvcpu1 ex5 csr0 csr_mstatus_mpp", false,-1, 1,0);
        tracep->declBus(c+735,"SocTop rvcpu1 ex5 csr0 csr_mstatus_xs", false,-1, 1,0);
        tracep->declBus(c+458,"SocTop rvcpu1 ex5 csr0 csr_mstatus_fs", false,-1, 1,0);
        tracep->declBit(c+459,"SocTop rvcpu1 ex5 csr0 csr_mstatus_sd", false,-1);
        tracep->declQuad(c+460,"SocTop rvcpu1 ex5 csr0 csr_mstatus", false,-1, 63,0);
        tracep->declBit(c+462,"SocTop rvcpu1 ex5 csr0 sel_mtvec", false,-1);
        tracep->declBit(c+463,"SocTop rvcpu1 ex5 csr0 rd_mtvec", false,-1);
        tracep->declBit(c+464,"SocTop rvcpu1 ex5 csr0 wr_mtvec", false,-1);
        tracep->declQuad(c+465,"SocTop rvcpu1 ex5 csr0 csr_mtvec_base", false,-1, 63,2);
        tracep->declBus(c+735,"SocTop rvcpu1 ex5 csr0 csr_mtvec_mode", false,-1, 1,0);
        tracep->declQuad(c+467,"SocTop rvcpu1 ex5 csr0 csr_mtvec", false,-1, 63,0);
        tracep->declBit(c+469,"SocTop rvcpu1 ex5 csr0 sel_mepc", false,-1);
        tracep->declBit(c+470,"SocTop rvcpu1 ex5 csr0 rd_mepc", false,-1);
        tracep->declBit(c+471,"SocTop rvcpu1 ex5 csr0 wr_mepc", false,-1);
        tracep->declQuad(c+472,"SocTop rvcpu1 ex5 csr0 csr_mepc", false,-1, 63,0);
        tracep->declBit(c+474,"SocTop rvcpu1 ex5 csr0 sel_mcause", false,-1);
        tracep->declBit(c+475,"SocTop rvcpu1 ex5 csr0 rd_mcause", false,-1);
        tracep->declBit(c+476,"SocTop rvcpu1 ex5 csr0 wr_mcause", false,-1);
        tracep->declBit(c+477,"SocTop rvcpu1 ex5 csr0 csr_mcause_ena", false,-1);
        tracep->declQuad(c+478,"SocTop rvcpu1 ex5 csr0 csr_mcause_nxt", false,-1, 63,0);
        tracep->declQuad(c+480,"SocTop rvcpu1 ex5 csr0 csr_mcause", false,-1, 63,0);
        tracep->declBit(c+482,"SocTop rvcpu1 ex5 csr0 sle_mie", false,-1);
        tracep->declBit(c+483,"SocTop rvcpu1 ex5 csr0 rd_mie", false,-1);
        tracep->declBit(c+484,"SocTop rvcpu1 ex5 csr0 wr_mie", false,-1);
        tracep->declBit(c+485,"SocTop rvcpu1 ex5 csr0 csr_mie_mtie", false,-1);
        tracep->declQuad(c+486,"SocTop rvcpu1 ex5 csr0 csr_mie", false,-1, 63,0);
        tracep->declBit(c+488,"SocTop rvcpu1 ex5 csr0 sel_mip", false,-1);
        tracep->declBit(c+489,"SocTop rvcpu1 ex5 csr0 rd_mip", false,-1);
        tracep->declBit(c+490,"SocTop rvcpu1 ex5 csr0 csr_mip_mtip", false,-1);
        tracep->declQuad(c+491,"SocTop rvcpu1 ex5 csr0 csr_mip", false,-1, 63,0);
        tracep->declBit(c+493,"SocTop rvcpu1 ex5 csr0 sel_mscratch", false,-1);
        tracep->declBit(c+494,"SocTop rvcpu1 ex5 csr0 rd_mscrstch", false,-1);
        tracep->declBit(c+495,"SocTop rvcpu1 ex5 csr0 wr_mscrstch", false,-1);
        tracep->declQuad(c+496,"SocTop rvcpu1 ex5 csr0 csr_mscrstch", false,-1, 63,0);
        tracep->declBit(c+677,"SocTop rvcpu1 ex_mem6 clk", false,-1);
        tracep->declBit(c+678,"SocTop rvcpu1 ex_mem6 rst", false,-1);
        tracep->declQuad(c+65,"SocTop rvcpu1 ex_mem6 ex_mem_pc_i", false,-1, 63,0);
        tracep->declBus(c+70,"SocTop rvcpu1 ex_mem6 ex_mem_inst_i", false,-1, 31,0);
        tracep->declBus(c+62,"SocTop rvcpu1 ex_mem6 stall_ctrl", false,-1, 4,0);
        tracep->declBus(c+360,"SocTop rvcpu1 ex_mem6 ex_inst_type", false,-1, 7,0);
        tracep->declBit(c+359,"SocTop rvcpu1 ex_mem6 ex_rd_ena", false,-1);
        tracep->declQuad(c+42,"SocTop rvcpu1 ex_mem6 ex_rd_data", false,-1, 63,0);
        tracep->declBus(c+358,"SocTop rvcpu1 ex_mem6 ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+361,"SocTop rvcpu1 ex_mem6 ex_ls_sel", false,-1, 2,0);
        tracep->declQuad(c+362,"SocTop rvcpu1 ex_mem6 ex_ls_addr", false,-1, 63,0);
        tracep->declBus(c+382,"SocTop rvcpu1 ex_mem6 mem_inst_type", false,-1, 7,0);
        tracep->declBit(c+367,"SocTop rvcpu1 ex_mem6 mem_rd_ena", false,-1);
        tracep->declQuad(c+383,"SocTop rvcpu1 ex_mem6 mem_rd_data", false,-1, 63,0);
        tracep->declBus(c+366,"SocTop rvcpu1 ex_mem6 mem_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+388,"SocTop rvcpu1 ex_mem6 ex_mem_pc_o", false,-1, 63,0);
        tracep->declBus(c+391,"SocTop rvcpu1 ex_mem6 ex_mem_inst_o", false,-1, 31,0);
        tracep->declBus(c+385,"SocTop rvcpu1 ex_mem6 mem_ls_sel", false,-1, 2,0);
        tracep->declQuad(c+386,"SocTop rvcpu1 ex_mem6 mem_ls_addr", false,-1, 63,0);
        tracep->declBit(c+678,"SocTop rvcpu1 mem7 rst", false,-1);
        tracep->declBus(c+382,"SocTop rvcpu1 mem7 inst_type_i", false,-1, 7,0);
        tracep->declBit(c+367,"SocTop rvcpu1 mem7 rd_ena_i", false,-1);
        tracep->declQuad(c+383,"SocTop rvcpu1 mem7 rd_data_i", false,-1, 63,0);
        tracep->declBus(c+366,"SocTop rvcpu1 mem7 rd_addr_i", false,-1, 4,0);
        tracep->declQuad(c+388,"SocTop rvcpu1 mem7 mem_pc_i", false,-1, 63,0);
        tracep->declBus(c+391,"SocTop rvcpu1 mem7 mem_inst_i", false,-1, 31,0);
        tracep->declQuad(c+386,"SocTop rvcpu1 mem7 ls_addr_i", false,-1, 63,0);
        tracep->declBus(c+385,"SocTop rvcpu1 mem7 ls_sel_i", false,-1, 2,0);
        tracep->declQuad(c+5,"SocTop rvcpu1 mem7 data_addr_o", false,-1, 63,0);
        tracep->declBus(c+7,"SocTop rvcpu1 mem7 wmask_o", false,-1, 7,0);
        tracep->declQuad(c+16,"SocTop rvcpu1 mem7 data_i", false,-1, 63,0);
        tracep->declQuad(c+8,"SocTop rvcpu1 mem7 data_o", false,-1, 63,0);
        tracep->declBit(c+10,"SocTop rvcpu1 mem7 we", false,-1);
        tracep->declBit(c+11,"SocTop rvcpu1 mem7 re", false,-1);
        tracep->declBit(c+693,"SocTop rvcpu1 mem7 mem_finish", false,-1);
        tracep->declBit(c+367,"SocTop rvcpu1 mem7 rd_ena_o", false,-1);
        tracep->declQuad(c+63,"SocTop rvcpu1 mem7 rd_data_o", false,-1, 63,0);
        tracep->declBus(c+366,"SocTop rvcpu1 mem7 rd_addr_o", false,-1, 4,0);
        tracep->declQuad(c+67,"SocTop rvcpu1 mem7 mem_pc_o", false,-1, 63,0);
        tracep->declBus(c+71,"SocTop rvcpu1 mem7 mem_inst_o", false,-1, 31,0);
        tracep->declBit(c+709,"SocTop rvcpu1 mem7 mem_stall_req", false,-1);
        tracep->declQuad(c+186,"SocTop rvcpu1 mem7 load_data", false,-1, 63,0);
        tracep->declBus(c+498,"SocTop rvcpu1 mem7 byte_sel", false,-1, 2,0);
        tracep->declBus(c+499,"SocTop rvcpu1 mem7 half_byte_sel", false,-1, 1,0);
        tracep->declBit(c+500,"SocTop rvcpu1 mem7 word_sel", false,-1);
        tracep->declBus(c+123,"SocTop rvcpu1 mem7 data_byte", false,-1, 7,0);
        tracep->declBus(c+124,"SocTop rvcpu1 mem7 data_half_byte", false,-1, 15,0);
        tracep->declBus(c+125,"SocTop rvcpu1 mem7 data_word", false,-1, 31,0);
        tracep->declQuad(c+126,"SocTop rvcpu1 mem7 store_data", false,-1, 63,0);
        tracep->declBus(c+128,"SocTop rvcpu1 mem7 store_mask", false,-1, 7,0);
        tracep->declQuad(c+712,"SocTop rvcpu1 mem7 sb_data", false,-1, 63,0);
        tracep->declQuad(c+714,"SocTop rvcpu1 mem7 sh_data", false,-1, 63,0);
        tracep->declQuad(c+716,"SocTop rvcpu1 mem7 sw_data", false,-1, 63,0);
        tracep->declBus(c+718,"SocTop rvcpu1 mem7 sb_mask", false,-1, 7,0);
        tracep->declBus(c+719,"SocTop rvcpu1 mem7 sh_mask", false,-1, 7,0);
        tracep->declBus(c+720,"SocTop rvcpu1 mem7 sw_mask", false,-1, 7,0);
        tracep->declBit(c+677,"SocTop rvcpu1 mem_wb8 clk", false,-1);
        tracep->declBit(c+678,"SocTop rvcpu1 mem_wb8 rst", false,-1);
        tracep->declQuad(c+67,"SocTop rvcpu1 mem_wb8 wb_pc_i", false,-1, 63,0);
        tracep->declBus(c+71,"SocTop rvcpu1 mem_wb8 wb_inst_i", false,-1, 31,0);
        tracep->declBus(c+62,"SocTop rvcpu1 mem_wb8 stall_ctrl", false,-1, 4,0);
        tracep->declQuad(c+63,"SocTop rvcpu1 mem_wb8 mem_rd_data", false,-1, 63,0);
        tracep->declBus(c+366,"SocTop rvcpu1 mem_wb8 mem_rd_addr", false,-1, 4,0);
        tracep->declBit(c+367,"SocTop rvcpu1 mem_wb8 mem_rd_ena", false,-1);
        tracep->declQuad(c+370,"SocTop rvcpu1 mem_wb8 wb_rd_data", false,-1, 63,0);
        tracep->declBus(c+368,"SocTop rvcpu1 mem_wb8 wb_rd_addr", false,-1, 4,0);
        tracep->declBit(c+369,"SocTop rvcpu1 mem_wb8 wb_rd_ena", false,-1);
        tracep->declQuad(c+501,"SocTop rvcpu1 mem_wb8 wb_pc_o", false,-1, 63,0);
        tracep->declBus(c+503,"SocTop rvcpu1 mem_wb8 wb_inst_o", false,-1, 31,0);
        tracep->declQuad(c+504,"SocTop rvcpu1 mem_wb8 pc_data1", false,-1, 63,0);
        tracep->declBit(c+506,"SocTop rvcpu1 mem_wb8 difftest_exyn", false,-1);
        tracep->declBit(c+507,"SocTop rvcpu1 mem_wb8 teap_yn", false,-1);
        tracep->declQuad(c+508,"SocTop rvcpu1 mem_wb8 trap_code", false,-1, 63,0);
        tracep->declBit(c+678,"SocTop rvcpu1 ctrl9 rst", false,-1);
        tracep->declBit(c+41,"SocTop rvcpu1 ctrl9 if_stall_req", false,-1);
        tracep->declBit(c+704,"SocTop rvcpu1 ctrl9 id_stall_req", false,-1);
        tracep->declBit(c+159,"SocTop rvcpu1 ctrl9 ex_stall_req", false,-1);
        tracep->declBit(c+709,"SocTop rvcpu1 ctrl9 mem_stall_req", false,-1);
        tracep->declBus(c+62,"SocTop rvcpu1 ctrl9 stall_ctrl", false,-1, 4,0);
        tracep->declBit(c+677,"SocTop rvcpu1 regfile10 clk", false,-1);
        tracep->declBit(c+678,"SocTop rvcpu1 regfile10 rst", false,-1);
        tracep->declBus(c+368,"SocTop rvcpu1 regfile10 waddr", false,-1, 4,0);
        tracep->declQuad(c+370,"SocTop rvcpu1 regfile10 wdata", false,-1, 63,0);
        tracep->declBit(c+369,"SocTop rvcpu1 regfile10 we", false,-1);
        tracep->declBus(c+44,"SocTop rvcpu1 regfile10 raddr1", false,-1, 4,0);
        tracep->declQuad(c+705,"SocTop rvcpu1 regfile10 rdata1", false,-1, 63,0);
        tracep->declBit(c+45,"SocTop rvcpu1 regfile10 re1", false,-1);
        tracep->declBus(c+46,"SocTop rvcpu1 regfile10 raddr2", false,-1, 4,0);
        tracep->declQuad(c+707,"SocTop rvcpu1 regfile10 rdata2", false,-1, 63,0);
        tracep->declBit(c+47,"SocTop rvcpu1 regfile10 re2", false,-1);
        tracep->declBit(c+701,"SocTop rvcpu1 regfile10 x1_read_ena", false,-1);
        tracep->declQuad(c+699,"SocTop rvcpu1 regfile10 x1_data", false,-1, 63,0);
        tracep->declBus(c+40,"SocTop rvcpu1 regfile10 x1_addr", false,-1, 4,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+510+i*2,"SocTop rvcpu1 regfile10 regs", true,(i+0), 63,0);}}
        tracep->declBus(c+574,"SocTop rvcpu1 regfile10 i", false,-1, 31,0);
        tracep->declBit(c+677,"SocTop i_cache12 clk", false,-1);
        tracep->declBit(c+678,"SocTop i_cache12 rst", false,-1);
        tracep->declQuad(c+645,"SocTop i_cache12 inst_addr", false,-1, 63,0);
        tracep->declBit(c+678,"SocTop i_cache12 inst_ena", false,-1);
        tracep->declBit(c+15,"SocTop i_cache12 inst_ready", false,-1);
        tracep->declBus(c+12,"SocTop i_cache12 inst_data", false,-1, 31,0);
        tracep->declBit(c+13,"SocTop i_cache12 inst_valid", false,-1);
        tracep->declBit(c+14,"SocTop i_cache12 cache_read_ena", false,-1);
        tracep->declQuad(c+691,"SocTop i_cache12 cache_addr", false,-1, 63,0);
        tracep->declBus(c+194,"SocTop i_cache12 cache_or_data", false,-1, 31,0);
        tracep->declBit(c+648,"SocTop i_cache12 cache_in_ok", false,-1);
        tracep->declBit(c+19,"SocTop i_cache12 axi_working_ti", false,-1);
        tracep->declQuad(c+654,"SocTop i_cache12 i_in_teg", false,-1, 54,0);
        tracep->declBus(c+129,"SocTop i_cache12 state_inst", false,-1, 5,0);
        tracep->declBit(c+632,"SocTop i_cache12 inst_hit_ok", false,-1);
        tracep->declBit(c+633,"SocTop i_cache12 write_i_ok", false,-1);
        tracep->declBit(c+721,"SocTop i_cache12 state_sign", false,-1);
        tracep->declBit(c+634,"SocTop i_cache12 inst_in_cache1", false,-1);
        tracep->declBit(c+635,"SocTop i_cache12 inst_in_cache2", false,-1);
        tracep->declBit(c+636,"SocTop i_cache12 inst_write_cache", false,-1);
        tracep->declBit(c+656,"SocTop i_cache12 inst_chose1", false,-1);
        tracep->declBit(c+657,"SocTop i_cache12 inst_chose2", false,-1);
        tracep->declQuad(c+575,"SocTop i_cache12 addr_lock_reg", false,-1, 63,0);
        tracep->declBus(c+658,"SocTop i_cache12 i_cache_addr1", false,-1, 5,0);
        tracep->declQuad(c+659,"SocTop i_cache12 i_cache_tag1", false,-1, 55,0);
        tracep->declBit(c+130,"SocTop i_cache12 i_tag_ena1", false,-1);
        tracep->declQuad(c+661,"SocTop i_cache12 i_tag_data1", false,-1, 54,0);
        tracep->declBit(c+663,"SocTop i_cache12 i_tag_user1", false,-1);
        tracep->declBus(c+658,"SocTop i_cache12 i_cache_addr2", false,-1, 5,0);
        tracep->declQuad(c+659,"SocTop i_cache12 i_cache_tag2", false,-1, 55,0);
        tracep->declBit(c+131,"SocTop i_cache12 i_tag_ena2", false,-1);
        tracep->declQuad(c+664,"SocTop i_cache12 i_tag_data2", false,-1, 54,0);
        tracep->declBit(c+666,"SocTop i_cache12 i_tag_user2", false,-1);
        tracep->declBus(c+658,"SocTop i_cache12 i_addrdata1", false,-1, 5,0);
        tracep->declBus(c+722,"SocTop i_cache12 i_in_data1", false,-1, 31,0);
        tracep->declBit(c+749,"SocTop i_cache12 i_data_ena1", false,-1);
        tracep->declBus(c+577,"SocTop i_cache12 i_out_data1", false,-1, 31,0);
        tracep->declBus(c+658,"SocTop i_cache12 i_addrdata2", false,-1, 5,0);
        tracep->declBus(c+723,"SocTop i_cache12 i_in_data2", false,-1, 31,0);
        tracep->declBit(c+749,"SocTop i_cache12 i_data_ena2", false,-1);
        tracep->declBus(c+578,"SocTop i_cache12 i_out_data2", false,-1, 31,0);
        tracep->declBus(c+658,"SocTop i_cache12 i_count_addr", false,-1, 5,0);
        tracep->declBus(c+579,"SocTop i_cache12 i", false,-1, 31,0);
        tracep->declBit(c+677,"SocTop i_cache12 u_tag01 clk", false,-1);
        tracep->declBus(c+658,"SocTop i_cache12 u_tag01 addr_i", false,-1, 5,0);
        tracep->declQuad(c+659,"SocTop i_cache12 u_tag01 data_i", false,-1, 55,0);
        tracep->declBit(c+130,"SocTop i_cache12 u_tag01 write_ena", false,-1);
        tracep->declQuad(c+661,"SocTop i_cache12 u_tag01 tag_data", false,-1, 54,0);
        tracep->declBit(c+663,"SocTop i_cache12 u_tag01 tag_valid", false,-1);
        tracep->declQuad(c+661,"SocTop i_cache12 u_tag01 out_data", false,-1, 54,0);
        tracep->declBit(c+663,"SocTop i_cache12 u_tag01 out_vaild", false,-1);
        tracep->declBit(c+677,"SocTop i_cache12 u_tag02 clk", false,-1);
        tracep->declBus(c+658,"SocTop i_cache12 u_tag02 addr_i", false,-1, 5,0);
        tracep->declQuad(c+659,"SocTop i_cache12 u_tag02 data_i", false,-1, 55,0);
        tracep->declBit(c+131,"SocTop i_cache12 u_tag02 write_ena", false,-1);
        tracep->declQuad(c+664,"SocTop i_cache12 u_tag02 tag_data", false,-1, 54,0);
        tracep->declBit(c+666,"SocTop i_cache12 u_tag02 tag_valid", false,-1);
        tracep->declQuad(c+664,"SocTop i_cache12 u_tag02 out_data", false,-1, 54,0);
        tracep->declBit(c+666,"SocTop i_cache12 u_tag02 out_vaild", false,-1);
        tracep->declBit(c+677,"SocTop i_cache12 u_data01 clk", false,-1);
        tracep->declBus(c+658,"SocTop i_cache12 u_data01 addr_i", false,-1, 5,0);
        tracep->declBus(c+722,"SocTop i_cache12 u_data01 data_i", false,-1, 31,0);
        tracep->declBit(c+749,"SocTop i_cache12 u_data01 write_ena", false,-1);
        tracep->declBus(c+577,"SocTop i_cache12 u_data01 data_o", false,-1, 31,0);
        tracep->declBus(c+577,"SocTop i_cache12 u_data01 out_data", false,-1, 31,0);
        tracep->declBit(c+677,"SocTop i_cache12 u_data02 clk", false,-1);
        tracep->declBus(c+658,"SocTop i_cache12 u_data02 addr_i", false,-1, 5,0);
        tracep->declBus(c+723,"SocTop i_cache12 u_data02 data_i", false,-1, 31,0);
        tracep->declBit(c+749,"SocTop i_cache12 u_data02 write_ena", false,-1);
        tracep->declBus(c+578,"SocTop i_cache12 u_data02 data_o", false,-1, 31,0);
        tracep->declBus(c+578,"SocTop i_cache12 u_data02 out_data", false,-1, 31,0);
        tracep->declBit(c+677,"SocTop d_cache13 clk", false,-1);
        tracep->declBit(c+678,"SocTop d_cache13 rst", false,-1);
        tracep->declQuad(c+5,"SocTop d_cache13 mem_addr_i", false,-1, 63,0);
        tracep->declQuad(c+8,"SocTop d_cache13 mem_data_i", false,-1, 63,0);
        tracep->declBus(c+7,"SocTop d_cache13 mem_mask_i", false,-1, 7,0);
        tracep->declBit(c+11,"SocTop d_cache13 mem_data_read_ena", false,-1);
        tracep->declBit(c+10,"SocTop d_cache13 mem_data_writ_ena", false,-1);
        tracep->declQuad(c+16,"SocTop d_cache13 mem_data_out_cpu", false,-1, 63,0);
        tracep->declBit(c+693,"SocTop d_cache13 mem_data_finish", false,-1);
        tracep->declQuad(c+192,"SocTop d_cache13 in_dcache_data", false,-1, 63,0);
        tracep->declBit(c+647,"SocTop d_cache13 in_dcache_ok", false,-1);
        tracep->declQuad(c+5,"SocTop d_cache13 out_dcache_addr", false,-1, 63,0);
        tracep->declQuad(c+694,"SocTop d_cache13 out_dcache_data", false,-1, 63,0);
        tracep->declBit(c+18,"SocTop d_cache13 outr_dcache_ena", false,-1);
        tracep->declBit(c+696,"SocTop d_cache13 outw_dcache_ena", false,-1);
        tracep->declBus(c+132,"SocTop d_cache13 count_addr", false,-1, 5,0);
        tracep->declBit(c+133,"SocTop d_cache13 wirte_chose1", false,-1);
        tracep->declBit(c+134,"SocTop d_cache13 wirte_chose2", false,-1);
        tracep->declBus(c+135,"SocTop d_cache13 state_store", false,-1, 5,0);
        tracep->declBit(c+724,"SocTop d_cache13 store_ok", false,-1);
        tracep->declBit(c+637,"SocTop d_cache13 write_ok", false,-1);
        tracep->declBit(c+667,"SocTop d_cache13 wbck_ok", false,-1);
        tracep->declQuad(c+136,"SocTop d_cache13 in_teg", false,-1, 54,0);
        tracep->declBit(c+638,"SocTop d_cache13 write_incache", false,-1);
        tracep->declBit(c+639,"SocTop d_cache13 w_incache_ena1", false,-1);
        tracep->declBit(c+640,"SocTop d_cache13 w_incache_ena2", false,-1);
        tracep->declBus(c+138,"SocTop d_cache13 state_load", false,-1, 5,0);
        tracep->declBit(c+725,"SocTop d_cache13 load_ok", false,-1);
        tracep->declBit(c+668,"SocTop d_cache13 load_bc_ok", false,-1);
        tracep->declBit(c+641,"SocTop d_cache13 write_l_ok", false,-1);
        tracep->declBus(c+139,"SocTop d_cache13 count_addr2", false,-1, 5,0);
        tracep->declBit(c+726,"SocTop d_cache13 wbck_load_chose1", false,-1);
        tracep->declBit(c+642,"SocTop d_cache13 load_in_cache1", false,-1);
        tracep->declBit(c+643,"SocTop d_cache13 load_in_cache2", false,-1);
        tracep->declBit(c+644,"SocTop d_cache13 read_cache", false,-1);
        tracep->declBus(c+139,"SocTop d_cache13 count_a", false,-1, 5,0);
        tracep->declBus(c+580,"SocTop d_cache13 i", false,-1, 31,0);
        tracep->declBus(c+139,"SocTop d_cache13 dirty_addr", false,-1, 5,0);
        tracep->declBus(c+139,"SocTop d_cache13 addrtag1", false,-1, 5,0);
        tracep->declQuad(c+140,"SocTop d_cache13 datatag1", false,-1, 55,0);
        tracep->declBit(c+142,"SocTop d_cache13 tag_ena1", false,-1);
        tracep->declQuad(c+669,"SocTop d_cache13 tag_data1", false,-1, 54,0);
        tracep->declBit(c+671,"SocTop d_cache13 tag_user1", false,-1);
        tracep->declBus(c+139,"SocTop d_cache13 addrtag2", false,-1, 5,0);
        tracep->declQuad(c+140,"SocTop d_cache13 datatag2", false,-1, 55,0);
        tracep->declBit(c+143,"SocTop d_cache13 tag_ena2", false,-1);
        tracep->declQuad(c+672,"SocTop d_cache13 tag_data2", false,-1, 54,0);
        tracep->declBit(c+674,"SocTop d_cache13 tag_user2", false,-1);
        tracep->declBus(c+144,"SocTop d_cache13 addrdata1", false,-1, 5,0);
        tracep->declQuad(c+145,"SocTop d_cache13 in_data1", false,-1, 63,0);
        tracep->declBus(c+147,"SocTop d_cache13 data_ena1", false,-1, 7,0);
        tracep->declQuad(c+581,"SocTop d_cache13 out_data1", false,-1, 63,0);
        tracep->declBus(c+144,"SocTop d_cache13 addrdata2", false,-1, 5,0);
        tracep->declQuad(c+148,"SocTop d_cache13 in_data2", false,-1, 63,0);
        tracep->declBus(c+150,"SocTop d_cache13 data_ena2", false,-1, 7,0);
        tracep->declQuad(c+583,"SocTop d_cache13 out_data2", false,-1, 63,0);
        tracep->declBit(c+677,"SocTop d_cache13 u_tag0 clk", false,-1);
        tracep->declBus(c+139,"SocTop d_cache13 u_tag0 addr_i", false,-1, 5,0);
        tracep->declQuad(c+140,"SocTop d_cache13 u_tag0 data_i", false,-1, 55,0);
        tracep->declBit(c+142,"SocTop d_cache13 u_tag0 write_ena", false,-1);
        tracep->declQuad(c+669,"SocTop d_cache13 u_tag0 tag_data", false,-1, 54,0);
        tracep->declBit(c+671,"SocTop d_cache13 u_tag0 tag_valid", false,-1);
        tracep->declQuad(c+669,"SocTop d_cache13 u_tag0 out_data", false,-1, 54,0);
        tracep->declBit(c+671,"SocTop d_cache13 u_tag0 out_vaild", false,-1);
        tracep->declBit(c+677,"SocTop d_cache13 u_tag1 clk", false,-1);
        tracep->declBus(c+139,"SocTop d_cache13 u_tag1 addr_i", false,-1, 5,0);
        tracep->declQuad(c+140,"SocTop d_cache13 u_tag1 data_i", false,-1, 55,0);
        tracep->declBit(c+143,"SocTop d_cache13 u_tag1 write_ena", false,-1);
        tracep->declQuad(c+672,"SocTop d_cache13 u_tag1 tag_data", false,-1, 54,0);
        tracep->declBit(c+674,"SocTop d_cache13 u_tag1 tag_valid", false,-1);
        tracep->declQuad(c+672,"SocTop d_cache13 u_tag1 out_data", false,-1, 54,0);
        tracep->declBit(c+674,"SocTop d_cache13 u_tag1 out_vaild", false,-1);
        tracep->declBit(c+677,"SocTop d_cache13 u_data0 clk", false,-1);
        tracep->declBus(c+144,"SocTop d_cache13 u_data0 addr_i", false,-1, 5,0);
        tracep->declQuad(c+145,"SocTop d_cache13 u_data0 data_i", false,-1, 63,0);
        tracep->declBus(c+147,"SocTop d_cache13 u_data0 write_ena", false,-1, 7,0);
        tracep->declQuad(c+581,"SocTop d_cache13 u_data0 data_o", false,-1, 63,0);
        tracep->declQuad(c+581,"SocTop d_cache13 u_data0 out_data", false,-1, 63,0);
        tracep->declBit(c+677,"SocTop d_cache13 u_data1 clk", false,-1);
        tracep->declBus(c+144,"SocTop d_cache13 u_data1 addr_i", false,-1, 5,0);
        tracep->declQuad(c+148,"SocTop d_cache13 u_data1 data_i", false,-1, 63,0);
        tracep->declBus(c+150,"SocTop d_cache13 u_data1 write_ena", false,-1, 7,0);
        tracep->declQuad(c+583,"SocTop d_cache13 u_data1 data_o", false,-1, 63,0);
        tracep->declQuad(c+583,"SocTop d_cache13 u_data1 out_data", false,-1, 63,0);
        tracep->declBit(c+677,"SocTop arbitrate4 clk", false,-1);
        tracep->declBit(c+678,"SocTop arbitrate4 rst", false,-1);
        tracep->declQuad(c+5,"SocTop arbitrate4 d_cache_addr", false,-1, 63,0);
        tracep->declQuad(c+694,"SocTop arbitrate4 d_cache_data", false,-1, 63,0);
        tracep->declBit(c+18,"SocTop arbitrate4 d_cache_read_ena", false,-1);
        tracep->declBit(c+696,"SocTop arbitrate4 d_cache_write_ena", false,-1);
        tracep->declBus(c+748,"SocTop arbitrate4 d_cache_mask", false,-1, 7,0);
        tracep->declQuad(c+192,"SocTop arbitrate4 d_cache_data_o", false,-1, 63,0);
        tracep->declBit(c+647,"SocTop arbitrate4 d_cache_ok", false,-1);
        tracep->declQuad(c+691,"SocTop arbitrate4 i_cache_addr", false,-1, 63,0);
        tracep->declBit(c+14,"SocTop arbitrate4 i_cache_ena", false,-1);
        tracep->declBus(c+194,"SocTop arbitrate4 i_cache_data_o", false,-1, 31,0);
        tracep->declBit(c+648,"SocTop arbitrate4 i_cache_ok", false,-1);
        tracep->declBit(c+19,"SocTop arbitrate4 axi_working_ti", false,-1);
        tracep->declBus(c+728,"SocTop arbitrate4 axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+20,"SocTop arbitrate4 axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+729,"SocTop arbitrate4 axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+730,"SocTop arbitrate4 axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+731,"SocTop arbitrate4 axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+732,"SocTop arbitrate4 axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+733,"SocTop arbitrate4 axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+728,"SocTop arbitrate4 axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+22,"SocTop arbitrate4 axi_aw_valid", false,-1);
        tracep->declBit(c+196,"SocTop arbitrate4 axi_aw_ready", false,-1);
        tracep->declQuad(c+23,"SocTop arbitrate4 axi_w_data", false,-1, 63,0);
        tracep->declBus(c+197,"SocTop arbitrate4 axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+734,"SocTop arbitrate4 axi_w_last", false,-1);
        tracep->declBit(c+198,"SocTop arbitrate4 axi_w_valid", false,-1);
        tracep->declBit(c+199,"SocTop arbitrate4 axi_w_ready", false,-1);
        tracep->declBus(c+200,"SocTop arbitrate4 axi_b_id", false,-1, 3,0);
        tracep->declBus(c+201,"SocTop arbitrate4 axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+202,"SocTop arbitrate4 axi_b_valid", false,-1);
        tracep->declBit(c+734,"SocTop arbitrate4 axi_b_ready", false,-1);
        tracep->declBus(c+25,"SocTop arbitrate4 axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+26,"SocTop arbitrate4 axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+729,"SocTop arbitrate4 axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+730,"SocTop arbitrate4 axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+731,"SocTop arbitrate4 axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+732,"SocTop arbitrate4 axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+733,"SocTop arbitrate4 axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+728,"SocTop arbitrate4 axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+28,"SocTop arbitrate4 axi_ar_valid", false,-1);
        tracep->declBit(c+203,"SocTop arbitrate4 axi_ar_ready", false,-1);
        tracep->declBus(c+649,"SocTop arbitrate4 axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+204,"SocTop arbitrate4 axi_r_data", false,-1, 63,0);
        tracep->declBus(c+650,"SocTop arbitrate4 axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+651,"SocTop arbitrate4 axi_r_last", false,-1);
        tracep->declBit(c+206,"SocTop arbitrate4 axi_r_valid", false,-1);
        tracep->declBit(c+734,"SocTop arbitrate4 axi_r_ready", false,-1);
        tracep->declBit(c+188,"SocTop arbitrate4 aw_shankhand", false,-1);
        tracep->declBit(c+585,"SocTop arbitrate4 w_shankhand", false,-1);
        tracep->declBit(c+586,"SocTop arbitrate4 b_shankhand", false,-1);
        tracep->declBit(c+587,"SocTop arbitrate4 b_success", false,-1);
        tracep->declBus(c+588,"SocTop arbitrate4 transfor_state", false,-1, 1,0);
        tracep->declBus(c+151,"SocTop arbitrate4 transfor_state_nex", false,-1, 1,0);
        tracep->declBit(c+206,"SocTop arbitrate4 r_shankhand", false,-1);
        tracep->declBit(c+189,"SocTop arbitrate4 d_cache_ar_shankhand", false,-1);
        tracep->declBit(c+190,"SocTop arbitrate4 i_cache_ar_shankhand", false,-1);
        tracep->declBit(c+675,"SocTop arbitrate4 d_cache_r_shankhand", false,-1);
        tracep->declBit(c+676,"SocTop arbitrate4 i_cache_r_shankhand", false,-1);
        tracep->declBit(c+152,"SocTop arbitrate4 arb_sign", false,-1);
        tracep->declBit(c+153,"SocTop arbitrate4 i_cache_valid", false,-1);
        tracep->declBit(c+154,"SocTop arbitrate4 d_cache_valid", false,-1);
        tracep->declBus(c+589,"SocTop arbitrate4 i_cache_state", false,-1, 1,0);
        tracep->declBus(c+155,"SocTop arbitrate4 i_cache_state_nxt", false,-1, 1,0);
        tracep->declBus(c+590,"SocTop arbitrate4 d_cache_state", false,-1, 1,0);
        tracep->declBus(c+156,"SocTop arbitrate4 d_cache_state_nxt", false,-1, 1,0);
        tracep->declBit(c+648,"SocTop arbitrate4 i_cache_okreg", false,-1);
        tracep->declBit(c+591,"SocTop arbitrate4 d_cache_okreg", false,-1);
        tracep->declBus(c+194,"SocTop arbitrate4 i_cache_data_oupt", false,-1, 31,0);
        tracep->declQuad(c+192,"SocTop arbitrate4 d_cache_data_outp", false,-1, 63,0);
        tracep->declBit(c+677,"SocTop axi_mnq4 clk", false,-1);
        tracep->declBit(c+678,"SocTop axi_mnq4 rst", false,-1);
        tracep->declBus(c+250,"SocTop axi_mnq4 s_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+251,"SocTop axi_mnq4 s_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+253,"SocTop axi_mnq4 s_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+254,"SocTop axi_mnq4 s_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+255,"SocTop axi_mnq4 s_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+256,"SocTop axi_mnq4 s_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+257,"SocTop axi_mnq4 s_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+258,"SocTop axi_mnq4 s_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+260,"SocTop axi_mnq4 s_axi_aw_valid", false,-1);
        tracep->declBit(c+259,"SocTop axi_mnq4 s_axi_aw_ready", false,-1);
        tracep->declQuad(c+261,"SocTop axi_mnq4 s_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+263,"SocTop axi_mnq4 s_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+264,"SocTop axi_mnq4 s_axi_w_last", false,-1);
        tracep->declBit(c+265,"SocTop axi_mnq4 s_axi_w_valid", false,-1);
        tracep->declBit(c+266,"SocTop axi_mnq4 s_axi_w_ready", false,-1);
        tracep->declBus(c+250,"SocTop axi_mnq4 s_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+735,"SocTop axi_mnq4 s_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+267,"SocTop axi_mnq4 s_axi_b_valid", false,-1);
        tracep->declBit(c+268,"SocTop axi_mnq4 s_axi_b_ready", false,-1);
        tracep->declBus(c+269,"SocTop axi_mnq4 s_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+270,"SocTop axi_mnq4 s_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+272,"SocTop axi_mnq4 s_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+273,"SocTop axi_mnq4 s_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+274,"SocTop axi_mnq4 s_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+275,"SocTop axi_mnq4 s_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+276,"SocTop axi_mnq4 s_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+277,"SocTop axi_mnq4 s_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+278,"SocTop axi_mnq4 s_axi_ar_valid", false,-1);
        tracep->declBit(c+279,"SocTop axi_mnq4 s_axi_ar_ready", false,-1);
        tracep->declBus(c+280,"SocTop axi_mnq4 s_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+697,"SocTop axi_mnq4 s_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+735,"SocTop axi_mnq4 s_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+281,"SocTop axi_mnq4 s_axi_r_last", false,-1);
        tracep->declBit(c+282,"SocTop axi_mnq4 s_axi_r_valid", false,-1);
        tracep->declBit(c+283,"SocTop axi_mnq4 s_axi_r_ready", false,-1);
        tracep->declBit(c+346,"SocTop axi_mnq4 read_ram_ena", false,-1);
        tracep->declBit(c+347,"SocTop axi_mnq4 read_inst_ena", false,-1);
        tracep->declQuad(c+348,"SocTop axi_mnq4 addr_oup", false,-1, 63,0);
        tracep->declBus(c+683,"SocTop axi_mnq4 inst_data_in", false,-1, 31,0);
        tracep->declQuad(c+684,"SocTop axi_mnq4 ram_data_in", false,-1, 63,0);
        tracep->declBit(c+267,"SocTop axi_mnq4 write_ram_ena", false,-1);
        tracep->declQuad(c+352,"SocTop axi_mnq4 write_ram_data", false,-1, 63,0);
        tracep->declQuad(c+350,"SocTop axi_mnq4 write_ram_addr", false,-1, 63,0);
        tracep->declBit(c+592,"SocTop axi_mnq4 aw_shankhand", false,-1);
        tracep->declBit(c+593,"SocTop axi_mnq4 w_shankhand", false,-1);
        tracep->declBit(c+594,"SocTop axi_mnq4 b_shankhand", false,-1);
        tracep->declBus(c+595,"SocTop axi_mnq4 s_write_state", false,-1, 1,0);
        tracep->declBus(c+596,"SocTop axi_mnq4 s_write_state_nxt", false,-1, 1,0);
        tracep->declBit(c+597,"SocTop axi_mnq4 ar_shankhand", false,-1);
        tracep->declBit(c+598,"SocTop axi_mnq4 r_shankhand", false,-1);
        tracep->declBus(c+599,"SocTop axi_mnq4 s_read_state", false,-1, 1,0);
        tracep->declBus(c+600,"SocTop axi_mnq4 s_read_state_nxt", false,-1, 1,0);
        tracep->declQuad(c+601,"SocTop axi_mnq4 read_addr_reg", false,-1, 63,0);
        tracep->declQuad(c+603,"SocTop axi_mnq4 write_data_reg", false,-1, 63,0);
        tracep->declQuad(c+605,"SocTop axi_mnq4 write_addr_reg", false,-1, 63,0);
        tracep->declBit(c+677,"SocTop soc_axi45 clk", false,-1);
        tracep->declBit(c+678,"SocTop soc_axi45 rst", false,-1);
        tracep->declBus(c+38,"SocTop soc_axi45 prot_chose_write", false,-1, 2,0);
        tracep->declBus(c+39,"SocTop soc_axi45 prot_chose_read", false,-1, 2,0);
        tracep->declBus(c+728,"SocTop soc_axi45 master_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+20,"SocTop soc_axi45 master_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+729,"SocTop soc_axi45 master_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+730,"SocTop soc_axi45 master_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+731,"SocTop soc_axi45 master_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+732,"SocTop soc_axi45 master_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+733,"SocTop soc_axi45 master_axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+728,"SocTop soc_axi45 master_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+22,"SocTop soc_axi45 master_axi_aw_valid", false,-1);
        tracep->declBit(c+196,"SocTop soc_axi45 master_axi_aw_ready", false,-1);
        tracep->declQuad(c+23,"SocTop soc_axi45 master_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+197,"SocTop soc_axi45 master_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+734,"SocTop soc_axi45 master_axi_w_last", false,-1);
        tracep->declBit(c+198,"SocTop soc_axi45 master_axi_w_valid", false,-1);
        tracep->declBit(c+199,"SocTop soc_axi45 master_axi_w_ready", false,-1);
        tracep->declBus(c+200,"SocTop soc_axi45 master_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+201,"SocTop soc_axi45 master_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+734,"SocTop soc_axi45 master_axi_b_ready", false,-1);
        tracep->declBit(c+202,"SocTop soc_axi45 master_axi_b_valid", false,-1);
        tracep->declBus(c+25,"SocTop soc_axi45 master_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+26,"SocTop soc_axi45 master_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+729,"SocTop soc_axi45 master_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+730,"SocTop soc_axi45 master_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+731,"SocTop soc_axi45 master_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+732,"SocTop soc_axi45 master_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+733,"SocTop soc_axi45 master_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+728,"SocTop soc_axi45 master_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+28,"SocTop soc_axi45 master_axi_ar_valid", false,-1);
        tracep->declBit(c+203,"SocTop soc_axi45 master_axi_ar_ready", false,-1);
        tracep->declBus(c+649,"SocTop soc_axi45 master_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+204,"SocTop soc_axi45 master_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+650,"SocTop soc_axi45 master_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+651,"SocTop soc_axi45 master_axi_r_last", false,-1);
        tracep->declBit(c+206,"SocTop soc_axi45 master_axi_r_valid", false,-1);
        tracep->declBit(c+734,"SocTop soc_axi45 master_axi_r_ready", false,-1);
        tracep->declBus(c+207,"SocTop soc_axi45 slave_axi_aw_id", false,-1, 11,0);
        tracep->declArray(c+208,"SocTop soc_axi45 slave_axi_aw_addr", false,-1, 191,0);
        tracep->declBus(c+214,"SocTop soc_axi45 slave_axi_aw_len", false,-1, 23,0);
        tracep->declBus(c+215,"SocTop soc_axi45 slave_axi_aw_size", false,-1, 8,0);
        tracep->declBus(c+216,"SocTop soc_axi45 slave_axi_aw_burst", false,-1, 5,0);
        tracep->declBus(c+217,"SocTop soc_axi45 slave_axi_aw_cache", false,-1, 11,0);
        tracep->declBus(c+218,"SocTop soc_axi45 slave_axi_aw_prot", false,-1, 8,0);
        tracep->declBus(c+219,"SocTop soc_axi45 slave_axi_aw_qos", false,-1, 11,0);
        tracep->declBus(c+220,"SocTop soc_axi45 slave_axi_aw_valid", false,-1, 2,0);
        tracep->declBus(c+221,"SocTop soc_axi45 slave_axi_aw_ready", false,-1, 2,0);
        tracep->declArray(c+222,"SocTop soc_axi45 slave_axi_w_data", false,-1, 191,0);
        tracep->declBus(c+228,"SocTop soc_axi45 slave_axi_w_strb", false,-1, 23,0);
        tracep->declBus(c+229,"SocTop soc_axi45 slave_axi_w_last", false,-1, 2,0);
        tracep->declBus(c+230,"SocTop soc_axi45 slave_axi_w_valid", false,-1, 2,0);
        tracep->declBus(c+231,"SocTop soc_axi45 slave_axi_w_ready", false,-1, 2,0);
        tracep->declBus(c+29,"SocTop soc_axi45 slave_axi_b_id", false,-1, 11,0);
        tracep->declBus(c+1,"SocTop soc_axi45 slave_axi_b_resp", false,-1, 5,0);
        tracep->declBus(c+30,"SocTop soc_axi45 slave_axi_b_valid", false,-1, 2,0);
        tracep->declBus(c+232,"SocTop soc_axi45 slave_axi_b_ready", false,-1, 2,0);
        tracep->declBus(c+233,"SocTop soc_axi45 slave_axi_ar_id", false,-1, 11,0);
        tracep->declArray(c+234,"SocTop soc_axi45 slave_axi_ar_addr", false,-1, 191,0);
        tracep->declBus(c+240,"SocTop soc_axi45 slave_axi_ar_len", false,-1, 23,0);
        tracep->declBus(c+241,"SocTop soc_axi45 slave_axi_ar_size", false,-1, 8,0);
        tracep->declBus(c+242,"SocTop soc_axi45 slave_axi_ar_burst", false,-1, 5,0);
        tracep->declBus(c+243,"SocTop soc_axi45 slave_axi_ar_cache", false,-1, 11,0);
        tracep->declBus(c+244,"SocTop soc_axi45 slave_axi_ar_prot", false,-1, 8,0);
        tracep->declBus(c+245,"SocTop soc_axi45 slave_axi_ar_qos", false,-1, 11,0);
        tracep->declBus(c+246,"SocTop soc_axi45 slave_axi_ar_valid", false,-1, 2,0);
        tracep->declBus(c+247,"SocTop soc_axi45 slave_axi_ar_ready", false,-1, 2,0);
        tracep->declBus(c+652,"SocTop soc_axi45 slave_axi_r_id", false,-1, 11,0);
        tracep->declArray(c+31,"SocTop soc_axi45 slave_axi_r_data", false,-1, 191,0);
        tracep->declBus(c+2,"SocTop soc_axi45 slave_axi_r_resp", false,-1, 5,0);
        tracep->declBus(c+653,"SocTop soc_axi45 slave_axi_r_last", false,-1, 2,0);
        tracep->declBus(c+248,"SocTop soc_axi45 slave_axi_r_valid", false,-1, 2,0);
        tracep->declBus(c+249,"SocTop soc_axi45 slave_axi_r_ready", false,-1, 2,0);
        tracep->declBus(c+727,"SocTop soc_axi45 SLAVE_NUM", false,-1, 31,0);
        tracep->declBit(c+677,"SocTop time_axi6 clk", false,-1);
        tracep->declBit(c+678,"SocTop time_axi6 rst", false,-1);
        tracep->declBit(c+195,"SocTop time_axi6 time_interrupt", false,-1);
        tracep->declBus(c+284,"SocTop time_axi6 time_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+285,"SocTop time_axi6 time_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+287,"SocTop time_axi6 time_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+288,"SocTop time_axi6 time_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+289,"SocTop time_axi6 time_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+290,"SocTop time_axi6 time_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+291,"SocTop time_axi6 time_axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+292,"SocTop time_axi6 time_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+294,"SocTop time_axi6 time_axi_aw_valid", false,-1);
        tracep->declBit(c+293,"SocTop time_axi6 time_axi_aw_ready", false,-1);
        tracep->declQuad(c+295,"SocTop time_axi6 time_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+297,"SocTop time_axi6 time_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+298,"SocTop time_axi6 time_axi_w_last", false,-1);
        tracep->declBit(c+299,"SocTop time_axi6 time_axi_w_valid", false,-1);
        tracep->declBit(c+300,"SocTop time_axi6 time_axi_w_ready", false,-1);
        tracep->declBus(c+158,"SocTop time_axi6 time_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+3,"SocTop time_axi6 time_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+37,"SocTop time_axi6 time_axi_b_valid", false,-1);
        tracep->declBit(c+301,"SocTop time_axi6 time_axi_b_ready", false,-1);
        tracep->declBus(c+302,"SocTop time_axi6 time_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+303,"SocTop time_axi6 time_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+305,"SocTop time_axi6 time_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+306,"SocTop time_axi6 time_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+307,"SocTop time_axi6 time_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+308,"SocTop time_axi6 time_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+309,"SocTop time_axi6 time_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+310,"SocTop time_axi6 time_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+311,"SocTop time_axi6 time_axi_ar_valid", false,-1);
        tracep->declBit(c+312,"SocTop time_axi6 time_axi_ar_ready", false,-1);
        tracep->declBus(c+313,"SocTop time_axi6 time_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+314,"SocTop time_axi6 time_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+4,"SocTop time_axi6 time_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+316,"SocTop time_axi6 time_axi_r_last", false,-1);
        tracep->declBit(c+317,"SocTop time_axi6 time_axi_r_valid", false,-1);
        tracep->declBit(c+318,"SocTop time_axi6 time_axi_r_ready", false,-1);
        tracep->declQuad(c+607,"SocTop time_axi6 car_mtime_l", false,-1, 63,0);
        tracep->declQuad(c+609,"SocTop time_axi6 csr_mtime_h", false,-1, 63,0);
        tracep->declQuad(c+611,"SocTop time_axi6 csr_mtime_l_nxt", false,-1, 63,0);
        tracep->declQuad(c+613,"SocTop time_axi6 csr_mtime_h_nxt", false,-1, 63,0);
        tracep->declBit(c+615,"SocTop time_axi6 csr_mtime_l_r_ena", false,-1);
        tracep->declBit(c+616,"SocTop time_axi6 csr_mtime_h_r_ena", false,-1);
        tracep->declBit(c+617,"SocTop time_axi6 csr_mtime_l_w_ena", false,-1);
        tracep->declBit(c+618,"SocTop time_axi6 csr_mtime_h_w_ena", false,-1);
        tracep->declQuad(c+619,"SocTop time_axi6 wmask", false,-1, 63,0);
        tracep->declBit(c+621,"SocTop time_axi6 aw_shakehand", false,-1);
        tracep->declBit(c+622,"SocTop time_axi6 w_shakehand", false,-1);
        tracep->declBit(c+191,"SocTop time_axi6 b_shankhand", false,-1);
        tracep->declBit(c+623,"SocTop time_axi6 mode_right", false,-1);
        tracep->declBus(c+624,"SocTop time_axi6 state_time_m", false,-1, 1,0);
        tracep->declBus(c+157,"SocTop time_axi6 state_time_m_nxt", false,-1, 1,0);
        tracep->declBit(c+625,"SocTop time_axi6 mode_right_r", false,-1);
        tracep->declBit(c+626,"SocTop time_axi6 ar_shakehand", false,-1);
        tracep->declBit(c+627,"SocTop time_axi6 r_shankhand", false,-1);
        tracep->declQuad(c+628,"SocTop time_axi6 time_csr_link", false,-1, 63,0);
        tracep->declBus(c+630,"SocTop time_axi6 state_time_r", false,-1, 1,0);
        tracep->declBus(c+631,"SocTop time_axi6 state_time_r_nxt", false,-1, 1,0);
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
        tracep->fullQData(oldp+20,(vlSelf->SocTop__DOT__t_axi_aw_addr),64);
        tracep->fullBit(oldp+22,(vlSelf->SocTop__DOT__t_axi_aw_valid));
        tracep->fullQData(oldp+23,(vlSelf->SocTop__DOT__t_axi_w_data),64);
        tracep->fullCData(oldp+25,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid)
                                     ? 1U : 0U)),4);
        tracep->fullQData(oldp+26,(vlSelf->SocTop__DOT__t_axi_ar_addr),64);
        tracep->fullBit(oldp+28,(vlSelf->SocTop__DOT__t_axi_ar_valid));
        tracep->fullSData(oldp+29,(vlSelf->SocTop__DOT__add_axi_b_id),12);
        tracep->fullCData(oldp+30,(vlSelf->SocTop__DOT__add_axi_b_valid),3);
        tracep->fullWData(oldp+31,(vlSelf->SocTop__DOT__add_axi_r_data),192);
        tracep->fullBit(oldp+37,(vlSelf->SocTop__DOT__tim_axi_b_valid));
        tracep->fullCData(oldp+38,(vlSelf->SocTop__DOT__prot_chose_write),3);
        tracep->fullCData(oldp+39,(vlSelf->SocTop__DOT__prot_chose_read),3);
        tracep->fullCData(oldp+40,((0x1fU & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                             >> 0xfU))),5);
        tracep->fullBit(oldp+41,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_stall_req));
        tracep->fullQData(oldp+42,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_data),64);
        tracep->fullCData(oldp+44,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1),5);
        tracep->fullBit(oldp+45,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1));
        tracep->fullCData(oldp+46,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2),5);
        tracep->fullBit(oldp+47,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2));
        tracep->fullCData(oldp+48,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type),8);
        tracep->fullCData(oldp+49,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode),8);
        tracep->fullQData(oldp+50,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op),64);
        tracep->fullQData(oldp+52,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op2),64);
        tracep->fullBit(oldp+54,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_ena));
        tracep->fullCData(oldp+55,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_addr),5);
        tracep->fullQData(oldp+56,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_pc),64);
        tracep->fullSData(oldp+58,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_s_offset),12);
        tracep->fullCData(oldp+59,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_memsel),3);
        tracep->fullBit(oldp+60,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_pip_jalrena));
        tracep->fullBit(oldp+61,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_if_flush));
        tracep->fullCData(oldp+62,(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl),5);
        tracep->fullQData(oldp+63,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_id_data),64);
        tracep->fullQData(oldp+65,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_ex_mem_pc),64);
        tracep->fullQData(oldp+67,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_pc),64);
        tracep->fullIData(oldp+69,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_id_ex_inst),32);
        tracep->fullIData(oldp+70,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_ex_mem_inst),32);
        tracep->fullIData(oldp+71,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_inst),32);
        tracep->fullIData(oldp+72,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm),20);
        tracep->fullSData(oldp+73,((vlSelf->SocTop__DOT__i_cache_inst_data 
                                    >> 0x14U)),12);
        tracep->fullSData(oldp+74,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm),12);
        tracep->fullCData(oldp+75,((0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)),7);
        tracep->fullBit(oldp+76,((IData)((0x6fU == 
                                          (0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)))));
        tracep->fullBit(oldp+77,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr));
        tracep->fullBit(oldp+78,((IData)((0x63U == 
                                          (0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)))));
        tracep->fullQData(oldp+79,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__operand1),64);
        tracep->fullQData(oldp+81,(((IData)((0x6fU 
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
        tracep->fullQData(oldp+83,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc),64);
        tracep->fullBit(oldp+85,((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))));
        tracep->fullCData(oldp+86,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__rs1),5);
        tracep->fullBit(oldp+87,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui));
        tracep->fullBit(oldp+88,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc));
        tracep->fullBit(oldp+89,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal));
        tracep->fullBit(oldp+90,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr));
        tracep->fullBit(oldp+91,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jump));
        tracep->fullBit(oldp+92,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srai));
        tracep->fullBit(oldp+93,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addiw));
        tracep->fullBit(oldp+94,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slliw));
        tracep->fullBit(oldp+95,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srliw));
        tracep->fullBit(oldp+96,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraiw));
        tracep->fullBit(oldp+97,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_add));
        tracep->fullBit(oldp+98,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sub));
        tracep->fullBit(oldp+99,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sll));
        tracep->fullBit(oldp+100,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slt));
        tracep->fullBit(oldp+101,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sltu));
        tracep->fullBit(oldp+102,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_xor));
        tracep->fullBit(oldp+103,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srl));
        tracep->fullBit(oldp+104,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sra));
        tracep->fullBit(oldp+105,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_or));
        tracep->fullBit(oldp+106,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_and));
        tracep->fullBit(oldp+107,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addw));
        tracep->fullBit(oldp+108,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_subw));
        tracep->fullBit(oldp+109,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sllw));
        tracep->fullBit(oldp+110,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srlw));
        tracep->fullBit(oldp+111,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraw));
        tracep->fullBit(oldp+112,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw));
        tracep->fullBit(oldp+113,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs));
        tracep->fullBit(oldp+114,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc));
        tracep->fullBit(oldp+115,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrwi));
        tracep->fullBit(oldp+116,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc))));
        tracep->fullBit(oldp+117,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak));
        tracep->fullBit(oldp+118,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1));
        tracep->fullBit(oldp+119,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1));
        tracep->fullBit(oldp+120,((1U & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl) 
                                         >> 3U))));
        tracep->fullQData(oldp+121,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__exe_res),64);
        tracep->fullCData(oldp+123,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_byte),8);
        tracep->fullSData(oldp+124,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte),16);
        tracep->fullIData(oldp+125,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word),32);
        tracep->fullQData(oldp+126,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_data),64);
        tracep->fullCData(oldp+128,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_mask),8);
        tracep->fullCData(oldp+129,(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst),6);
        tracep->fullBit(oldp+130,(vlSelf->SocTop__DOT__i_cache12__DOT__i_tag_ena1));
        tracep->fullBit(oldp+131,(vlSelf->SocTop__DOT__i_cache12__DOT__i_tag_ena2));
        tracep->fullCData(oldp+132,(vlSelf->SocTop__DOT__d_cache13__DOT__count_addr),6);
        tracep->fullBit(oldp+133,(vlSelf->SocTop__DOT__d_cache13__DOT__wirte_chose1));
        tracep->fullBit(oldp+134,(vlSelf->SocTop__DOT__d_cache13__DOT__wirte_chose2));
        tracep->fullCData(oldp+135,(vlSelf->SocTop__DOT__d_cache13__DOT__state_store),6);
        tracep->fullQData(oldp+136,((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                     >> 9U)),55);
        tracep->fullCData(oldp+138,(vlSelf->SocTop__DOT__d_cache13__DOT__state_load),6);
        tracep->fullCData(oldp+139,((0x3fU & (IData)(
                                                     (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                      >> 3U)))),6);
        tracep->fullQData(oldp+140,((0x80000000000000ULL 
                                     | (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                        >> 9U))),56);
        tracep->fullBit(oldp+142,(vlSelf->SocTop__DOT__d_cache13__DOT__tag_ena1));
        tracep->fullBit(oldp+143,(vlSelf->SocTop__DOT__d_cache13__DOT__tag_ena2));
        tracep->fullCData(oldp+144,((0x3fU & (IData)(
                                                     (vlSelf->SocTop__DOT__rvcpu_data_o 
                                                      >> 3U)))),6);
        tracep->fullQData(oldp+145,(vlSelf->SocTop__DOT__d_cache13__DOT__in_data1),64);
        tracep->fullCData(oldp+147,(vlSelf->SocTop__DOT__d_cache13__DOT__data_ena1),8);
        tracep->fullQData(oldp+148,(vlSelf->SocTop__DOT__d_cache13__DOT__in_data2),64);
        tracep->fullCData(oldp+150,(vlSelf->SocTop__DOT__d_cache13__DOT__data_ena2),8);
        tracep->fullCData(oldp+151,(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state_nex),2);
        tracep->fullBit(oldp+152,(((IData)(vlSelf->SocTop__DOT__i_cache_read_ena) 
                                   & (IData)(vlSelf->SocTop__DOT__d_cache_read_ena))));
        tracep->fullBit(oldp+153,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid));
        tracep->fullBit(oldp+154,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_valid));
        tracep->fullCData(oldp+155,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_state_nxt),2);
        tracep->fullCData(oldp+156,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_state_nxt),2);
        tracep->fullCData(oldp+157,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m_nxt),2);
        tracep->fullCData(oldp+158,(((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m_nxt))
                                      ? (0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_id) 
                                                 >> 4U))
                                      : 0U)),4);
        tracep->fullBit(oldp+159,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__if_stall_req))));
        tracep->fullQData(oldp+160,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr)
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
        tracep->fullBit(oldp+162,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+163,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x2000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+164,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x3000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+165,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x4000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+166,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+167,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+168,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x1000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+169,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x5000U 
                                                    == 
                                                    (0x40007000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+170,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+171,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x1000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+172,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x4000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+173,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x5000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+174,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+175,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+176,((1U & (IData)(((0x80U 
                                                  == 
                                                  (0x80U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+177,((1U & (IData)(((0x80U 
                                                  == 
                                                  (0x80U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+178,(((IData)(((0x80U 
                                             == (0x80U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                            & (0U == 
                                               (0x7000U 
                                                & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                   & (0U == (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                             >> 0x14U)))));
        tracep->fullBit(oldp+179,(((IData)(((0x80U 
                                             == (0x80U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                            & (0U == 
                                               (0x7000U 
                                                & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                   & (0x18U == (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+180,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr) 
                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena))));
        tracep->fullBit(oldp+181,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr) 
                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena))));
        tracep->fullBit(oldp+182,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))));
        tracep->fullQData(oldp+183,(((((- (QData)((IData)(
                                                          (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                           >> 0x1fU)))) 
                                       << 0xcU) | (QData)((IData)(
                                                                  (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                   >> 0x14U)))) 
                                     + vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op)),64);
        tracep->fullBit(oldp+185,((1U & (((~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1)) 
                                          & (~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1))) 
                                         & (~ (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                                == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                               & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena)))))));
        tracep->fullQData(oldp+186,(((2U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type))
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
        tracep->fullBit(oldp+188,(((IData)(vlSelf->SocTop__DOT__t_axi_aw_valid) 
                                   & (IData)(vlSelf->SocTop__DOT__t_axi_aw_ready))));
        tracep->fullBit(oldp+189,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_valid) 
                                   & (IData)(vlSelf->SocTop__DOT__t_axi_ar_ready))));
        tracep->fullBit(oldp+190,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid) 
                                   & (IData)(vlSelf->SocTop__DOT__t_axi_ar_ready))));
        tracep->fullBit(oldp+191,(((IData)(vlSelf->SocTop__DOT__tim_axi_b_valid) 
                                   & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                      >> 1U))));
        tracep->fullQData(oldp+192,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_data_outp),64);
        tracep->fullIData(oldp+194,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_data_oupt),32);
        tracep->fullBit(oldp+195,((vlSelf->SocTop__DOT__time_axi6__DOT__car_mtime_l 
                                   > vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h)));
        tracep->fullBit(oldp+196,(vlSelf->SocTop__DOT__t_axi_aw_ready));
        tracep->fullCData(oldp+197,(vlSelf->SocTop__DOT__t_axi_w_strb),8);
        tracep->fullBit(oldp+198,(vlSelf->SocTop__DOT__t_axi_w_valid));
        tracep->fullBit(oldp+199,(vlSelf->SocTop__DOT__t_axi_w_ready));
        tracep->fullCData(oldp+200,(vlSelf->SocTop__DOT__t_axi_b_id),4);
        tracep->fullCData(oldp+201,(vlSelf->SocTop__DOT__t_axi_b_resp),2);
        tracep->fullBit(oldp+202,(vlSelf->SocTop__DOT__t_axi_b_valid));
        tracep->fullBit(oldp+203,(vlSelf->SocTop__DOT__t_axi_ar_ready));
        tracep->fullQData(oldp+204,(vlSelf->SocTop__DOT__t_axi_r_data),64);
        tracep->fullBit(oldp+206,(vlSelf->SocTop__DOT__t_axi_r_valid));
        tracep->fullSData(oldp+207,(vlSelf->SocTop__DOT__add_axi_aw_id),12);
        tracep->fullWData(oldp+208,(vlSelf->SocTop__DOT__add_axi_aw_addr),192);
        tracep->fullIData(oldp+214,(vlSelf->SocTop__DOT__add_axi_aw_len),24);
        tracep->fullSData(oldp+215,(vlSelf->SocTop__DOT__add_axi_aw_size),9);
        tracep->fullCData(oldp+216,(vlSelf->SocTop__DOT__add_axi_aw_burst),6);
        tracep->fullSData(oldp+217,(vlSelf->SocTop__DOT__add_axi_aw_cache),12);
        tracep->fullSData(oldp+218,(vlSelf->SocTop__DOT__add_axi_aw_prot),9);
        tracep->fullSData(oldp+219,(vlSelf->SocTop__DOT__add_axi_aw_qos),12);
        tracep->fullCData(oldp+220,(vlSelf->SocTop__DOT__add_axi_aw_valid),3);
        tracep->fullCData(oldp+221,(vlSelf->SocTop__DOT__add_axi_aw_ready),3);
        tracep->fullWData(oldp+222,(vlSelf->SocTop__DOT__add_axi_w_data),192);
        tracep->fullIData(oldp+228,(vlSelf->SocTop__DOT__add_axi_w_strb),24);
        tracep->fullCData(oldp+229,(vlSelf->SocTop__DOT__add_axi_w_last),3);
        tracep->fullCData(oldp+230,(vlSelf->SocTop__DOT__add_axi_w_valid),3);
        tracep->fullCData(oldp+231,(vlSelf->SocTop__DOT__add_axi_w_ready),3);
        tracep->fullCData(oldp+232,(vlSelf->SocTop__DOT__add_axi_b_ready),3);
        tracep->fullSData(oldp+233,(vlSelf->SocTop__DOT__add_axi_ar_id),12);
        tracep->fullWData(oldp+234,(vlSelf->SocTop__DOT__add_axi_ar_addr),192);
        tracep->fullIData(oldp+240,(vlSelf->SocTop__DOT__add_axi_ar_len),24);
        tracep->fullSData(oldp+241,(vlSelf->SocTop__DOT__add_axi_ar_size),9);
        tracep->fullCData(oldp+242,(vlSelf->SocTop__DOT__add_axi_ar_burst),6);
        tracep->fullSData(oldp+243,(vlSelf->SocTop__DOT__add_axi_ar_cache),12);
        tracep->fullSData(oldp+244,(vlSelf->SocTop__DOT__add_axi_ar_prot),9);
        tracep->fullSData(oldp+245,(vlSelf->SocTop__DOT__add_axi_ar_qos),12);
        tracep->fullCData(oldp+246,(vlSelf->SocTop__DOT__add_axi_ar_valid),3);
        tracep->fullCData(oldp+247,(vlSelf->SocTop__DOT__add_axi_ar_ready),3);
        tracep->fullCData(oldp+248,(vlSelf->SocTop__DOT__add_axi_r_valid),3);
        tracep->fullCData(oldp+249,(vlSelf->SocTop__DOT__add_axi_r_ready),3);
        tracep->fullCData(oldp+250,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_id) 
                                             >> 8U))),4);
        tracep->fullQData(oldp+251,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_aw_addr[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_aw_addr[4U])))),64);
        tracep->fullCData(oldp+253,((0xffU & (vlSelf->SocTop__DOT__add_axi_aw_len 
                                              >> 0x10U))),8);
        tracep->fullCData(oldp+254,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_size) 
                                           >> 6U))),3);
        tracep->fullCData(oldp+255,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_burst) 
                                           >> 4U))),2);
        tracep->fullCData(oldp+256,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_cache) 
                                             >> 8U))),4);
        tracep->fullCData(oldp+257,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_prot) 
                                           >> 6U))),3);
        tracep->fullCData(oldp+258,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_qos) 
                                             >> 8U))),4);
        tracep->fullBit(oldp+259,(vlSelf->SocTop__DOT__soc_axi_aw_ready));
        tracep->fullBit(oldp+260,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                         >> 2U))));
        tracep->fullQData(oldp+261,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_w_data[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_w_data[4U])))),64);
        tracep->fullCData(oldp+263,((0xffU & (vlSelf->SocTop__DOT__add_axi_w_strb 
                                              >> 0x10U))),8);
        tracep->fullBit(oldp+264,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_last) 
                                         >> 2U))));
        tracep->fullBit(oldp+265,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                         >> 2U))));
        tracep->fullBit(oldp+266,(vlSelf->SocTop__DOT__soc_axi_w_ready));
        tracep->fullBit(oldp+267,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))));
        tracep->fullBit(oldp+268,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                         >> 2U))));
        tracep->fullCData(oldp+269,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                             >> 8U))),4);
        tracep->fullQData(oldp+270,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_ar_addr[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_ar_addr[4U])))),64);
        tracep->fullCData(oldp+272,((0xffU & (vlSelf->SocTop__DOT__add_axi_ar_len 
                                              >> 0x10U))),8);
        tracep->fullCData(oldp+273,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_size) 
                                           >> 6U))),3);
        tracep->fullCData(oldp+274,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_burst) 
                                           >> 4U))),2);
        tracep->fullCData(oldp+275,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_cache) 
                                             >> 8U))),4);
        tracep->fullCData(oldp+276,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_prot) 
                                           >> 6U))),3);
        tracep->fullCData(oldp+277,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_qos) 
                                             >> 8U))),4);
        tracep->fullBit(oldp+278,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                                         >> 2U))));
        tracep->fullBit(oldp+279,(vlSelf->SocTop__DOT__soc_axi_ar_ready));
        tracep->fullCData(oldp+280,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                      ? (0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                                 >> 8U))
                                      : 0U)),4);
        tracep->fullBit(oldp+281,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))));
        tracep->fullBit(oldp+282,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))));
        tracep->fullBit(oldp+283,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                         >> 2U))));
        tracep->fullCData(oldp+284,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_id) 
                                             >> 4U))),4);
        tracep->fullQData(oldp+285,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))),64);
        tracep->fullCData(oldp+287,((0xffU & (vlSelf->SocTop__DOT__add_axi_aw_len 
                                              >> 8U))),8);
        tracep->fullCData(oldp+288,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_size) 
                                           >> 3U))),3);
        tracep->fullCData(oldp+289,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_burst) 
                                           >> 2U))),2);
        tracep->fullCData(oldp+290,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_cache) 
                                             >> 4U))),4);
        tracep->fullCData(oldp+291,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_prot) 
                                           >> 3U))),3);
        tracep->fullCData(oldp+292,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_qos) 
                                             >> 4U))),4);
        tracep->fullBit(oldp+293,(vlSelf->SocTop__DOT__tim_axi_aw_ready));
        tracep->fullBit(oldp+294,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                         >> 1U))));
        tracep->fullQData(oldp+295,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_w_data[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_w_data[2U])))),64);
        tracep->fullCData(oldp+297,((0xffU & (vlSelf->SocTop__DOT__add_axi_w_strb 
                                              >> 8U))),8);
        tracep->fullBit(oldp+298,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_last) 
                                         >> 1U))));
        tracep->fullBit(oldp+299,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                         >> 1U))));
        tracep->fullBit(oldp+300,(vlSelf->SocTop__DOT__tim_axi_w_ready));
        tracep->fullBit(oldp+301,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                         >> 1U))));
        tracep->fullCData(oldp+302,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                             >> 4U))),4);
        tracep->fullQData(oldp+303,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))),64);
        tracep->fullCData(oldp+305,((0xffU & (vlSelf->SocTop__DOT__add_axi_ar_len 
                                              >> 8U))),8);
        tracep->fullCData(oldp+306,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_size) 
                                           >> 3U))),3);
        tracep->fullCData(oldp+307,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_burst) 
                                           >> 2U))),2);
        tracep->fullCData(oldp+308,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_cache) 
                                             >> 4U))),4);
        tracep->fullCData(oldp+309,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_prot) 
                                           >> 3U))),3);
        tracep->fullCData(oldp+310,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_qos) 
                                             >> 4U))),4);
        tracep->fullBit(oldp+311,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                                         >> 1U))));
        tracep->fullBit(oldp+312,(vlSelf->SocTop__DOT__tim_axi_ar_ready));
        tracep->fullCData(oldp+313,(((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r))
                                      ? (0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                                 >> 4U))
                                      : 0U)),4);
        tracep->fullQData(oldp+314,(vlSelf->SocTop__DOT__tim_axi_r_data),64);
        tracep->fullBit(oldp+316,(vlSelf->SocTop__DOT__tim_axi_r_last));
        tracep->fullBit(oldp+317,((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r))));
        tracep->fullBit(oldp+318,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                         >> 1U))));
        tracep->fullCData(oldp+319,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_id))),4);
        tracep->fullQData(oldp+320,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_aw_addr[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_aw_addr[0U])))),64);
        tracep->fullCData(oldp+322,((0xffU & vlSelf->SocTop__DOT__add_axi_aw_len)),8);
        tracep->fullCData(oldp+323,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_size))),3);
        tracep->fullCData(oldp+324,((3U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_burst))),2);
        tracep->fullCData(oldp+325,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_cache))),4);
        tracep->fullCData(oldp+326,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_prot))),3);
        tracep->fullCData(oldp+327,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_qos))),4);
        tracep->fullBit(oldp+328,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_valid))));
        tracep->fullQData(oldp+329,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_w_data[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_w_data[0U])))),64);
        tracep->fullCData(oldp+331,((0xffU & vlSelf->SocTop__DOT__add_axi_w_strb)),8);
        tracep->fullBit(oldp+332,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_w_last))));
        tracep->fullBit(oldp+333,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_w_valid))));
        tracep->fullBit(oldp+334,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_b_ready))));
        tracep->fullCData(oldp+335,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_id))),4);
        tracep->fullQData(oldp+336,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_ar_addr[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_ar_addr[0U])))),64);
        tracep->fullCData(oldp+338,((0xffU & vlSelf->SocTop__DOT__add_axi_ar_len)),8);
        tracep->fullCData(oldp+339,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_size))),3);
        tracep->fullCData(oldp+340,((3U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_burst))),2);
        tracep->fullCData(oldp+341,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_cache))),4);
        tracep->fullCData(oldp+342,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_prot))),3);
        tracep->fullCData(oldp+343,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_qos))),4);
        tracep->fullBit(oldp+344,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_valid))));
        tracep->fullBit(oldp+345,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_r_ready))));
        tracep->fullBit(oldp+346,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)) 
                                   & (0U == (0xfU & 
                                             ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                              >> 8U))))));
        tracep->fullBit(oldp+347,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)) 
                                   & (1U == (0xfU & 
                                             ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                              >> 8U))))));
        tracep->fullQData(oldp+348,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                      ? vlSelf->SocTop__DOT__axi_mnq4__DOT__read_addr_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+350,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))
                                      ? vlSelf->SocTop__DOT__axi_mnq4__DOT__write_addr_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+352,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))
                                      ? vlSelf->SocTop__DOT__axi_mnq4__DOT__write_data_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+354,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc),64);
        tracep->fullIData(oldp+356,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst),32);
        tracep->fullBit(oldp+357,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena));
        tracep->fullCData(oldp+358,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr),5);
        tracep->fullBit(oldp+359,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena));
        tracep->fullCData(oldp+360,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type),8);
        tracep->fullCData(oldp+361,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_sel),3);
        tracep->fullQData(oldp+362,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_addr),64);
        tracep->fullQData(oldp+364,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena))
                                      ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data
                                      : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch)
                                          ? (4ULL + vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc)
                                          : 0ULL))),64);
        tracep->fullCData(oldp+366,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr),5);
        tracep->fullBit(oldp+367,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena));
        tracep->fullCData(oldp+368,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr),5);
        tracep->fullBit(oldp+369,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena));
        tracep->fullQData(oldp+370,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data),64);
        tracep->fullQData(oldp+372,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc),64);
        tracep->fullCData(oldp+374,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type),8);
        tracep->fullCData(oldp+375,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode),8);
        tracep->fullQData(oldp+376,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1),64);
        tracep->fullQData(oldp+378,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2),64);
        tracep->fullBit(oldp+380,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdena));
        tracep->fullSData(oldp+381,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset),12);
        tracep->fullCData(oldp+382,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type),8);
        tracep->fullQData(oldp+383,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data),64);
        tracep->fullCData(oldp+385,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel),3);
        tracep->fullQData(oldp+386,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr),64);
        tracep->fullQData(oldp+388,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_pc),64);
        tracep->fullIData(oldp+390,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_ex_inst),32);
        tracep->fullIData(oldp+391,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_inst),32);
        tracep->fullCData(oldp+392,((0x7fU & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)),7);
        tracep->fullCData(oldp+393,((0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+394,((7U & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                           >> 0xcU))),3);
        tracep->fullSData(oldp+395,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                     >> 0x14U)),12);
        tracep->fullCData(oldp+396,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+397,((0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                              >> 0x14U))),5);
        tracep->fullIData(oldp+398,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                     >> 0xcU)),20);
        tracep->fullSData(oldp+399,(((0xfe0U & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                 >> 7U)))),12);
        tracep->fullQData(oldp+400,((1ULL + (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))),64);
        tracep->fullQData(oldp+402,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sub_op2),64);
        tracep->fullQData(oldp+404,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2),64);
        tracep->fullQData(oldp+406,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_addw_op2),64);
        tracep->fullBit(oldp+408,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_ls_op2));
        tracep->fullQData(oldp+409,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__shift_res),64);
        tracep->fullIData(oldp+411,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sllw_op2),32);
        tracep->fullQData(oldp+412,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sllw_res),64);
        tracep->fullIData(oldp+414,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_srlw_op2),32);
        tracep->fullQData(oldp+415,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__srlw_res),64);
        tracep->fullIData(oldp+417,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sraw_op2),32);
        tracep->fullQData(oldp+418,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sraw_res),64);
        tracep->fullIData(oldp+420,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2),32);
        tracep->fullQData(oldp+421,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2)))),64);
        tracep->fullQData(oldp+423,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__upper_imm),64);
        tracep->fullBit(oldp+425,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch));
        tracep->fullBit(oldp+426,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena));
        tracep->fullSData(oldp+427,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx),12);
        tracep->fullQData(oldp+428,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data),64);
        tracep->fullBit(oldp+430,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena));
        tracep->fullBit(oldp+431,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena));
        tracep->fullBit(oldp+432,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena));
        tracep->fullBit(oldp+433,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en));
        tracep->fullBit(oldp+434,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en));
        tracep->fullQData(oldp+435,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data),64);
        tracep->fullQData(oldp+437,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value),64);
        tracep->fullQData(oldp+439,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
                                     | vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1)),64);
        tracep->fullQData(oldp+441,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
                                     & (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1))),64);
        tracep->fullBit(oldp+443,((0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+444,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en) 
                                   & (0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)))));
        tracep->fullBit(oldp+445,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en) 
                                   & (0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)))));
        tracep->fullQData(oldp+446,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcycle),64);
        tracep->fullBit(oldp+448,((0x300U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+449,(((0x300U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+450,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus));
        tracep->fullBit(oldp+451,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_ena));
        tracep->fullBit(oldp+452,((1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                          | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                          ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)
                                          : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena) 
                                             | ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                 ? (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                            >> 7U))
                                                 : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)))))));
        tracep->fullBit(oldp+453,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie));
        tracep->fullBit(oldp+454,((1U & ((~ ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                             | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))) 
                                         & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)
                                             ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)
                                             : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                 ? (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                            >> 3U))
                                                 : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)))))));
        tracep->fullBit(oldp+455,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie));
        tracep->fullCData(oldp+456,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                      ? 3U : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                      ? (IData)(
                                                                (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                                 >> 0xbU))
                                                      : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp)))))),2);
        tracep->fullCData(oldp+457,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp),2);
        tracep->fullCData(oldp+458,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs),2);
        tracep->fullBit(oldp+459,((3U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs))));
        tracep->fullQData(oldp+460,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus),64);
        tracep->fullBit(oldp+462,((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+463,(((((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en)) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
        tracep->fullBit(oldp+464,(((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
        tracep->fullQData(oldp+465,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base),62);
        tracep->fullQData(oldp+467,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base 
                                     << 2U)),64);
        tracep->fullBit(oldp+469,((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+470,((((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena))));
        tracep->fullBit(oldp+471,(((((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en)) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
        tracep->fullQData(oldp+472,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mepc),64);
        tracep->fullBit(oldp+474,((0x342U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+475,(((0x342U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+476,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause));
        tracep->fullBit(oldp+477,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
        tracep->fullQData(oldp+478,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                      ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value
                                      : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause)
                                          ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data
                                          : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause))),64);
        tracep->fullQData(oldp+480,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause),64);
        tracep->fullBit(oldp+482,((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+483,(((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+484,(((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
        tracep->fullBit(oldp+485,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie));
        tracep->fullQData(oldp+486,(((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie)) 
                                     << 7U)),64);
        tracep->fullBit(oldp+488,((0x344U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+489,(((0x344U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+490,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip));
        tracep->fullQData(oldp+491,((QData)((IData)(
                                                    ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip) 
                                                     << 7U)))),64);
        tracep->fullBit(oldp+493,((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+494,(((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+495,(((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
        tracep->fullQData(oldp+496,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mscrstch),64);
        tracep->fullCData(oldp+498,((7U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))),3);
        tracep->fullCData(oldp+499,((3U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                   >> 1U)))),2);
        tracep->fullBit(oldp+500,((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                 >> 2U)))));
        tracep->fullQData(oldp+501,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_pc_o),64);
        tracep->fullIData(oldp+503,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o),32);
        tracep->fullQData(oldp+504,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__pc_data1),64);
        tracep->fullBit(oldp+506,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_exyn));
        tracep->fullBit(oldp+507,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__teap_yn));
        tracep->fullQData(oldp+508,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__trap_code),64);
        tracep->fullQData(oldp+510,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[0]),64);
        tracep->fullQData(oldp+512,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[1]),64);
        tracep->fullQData(oldp+514,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[2]),64);
        tracep->fullQData(oldp+516,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[3]),64);
        tracep->fullQData(oldp+518,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[4]),64);
        tracep->fullQData(oldp+520,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[5]),64);
        tracep->fullQData(oldp+522,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[6]),64);
        tracep->fullQData(oldp+524,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[7]),64);
        tracep->fullQData(oldp+526,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[8]),64);
        tracep->fullQData(oldp+528,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[9]),64);
        tracep->fullQData(oldp+530,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[10]),64);
        tracep->fullQData(oldp+532,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[11]),64);
        tracep->fullQData(oldp+534,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[12]),64);
        tracep->fullQData(oldp+536,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[13]),64);
        tracep->fullQData(oldp+538,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[14]),64);
        tracep->fullQData(oldp+540,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[15]),64);
        tracep->fullQData(oldp+542,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[16]),64);
        tracep->fullQData(oldp+544,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[17]),64);
        tracep->fullQData(oldp+546,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[18]),64);
        tracep->fullQData(oldp+548,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[19]),64);
        tracep->fullQData(oldp+550,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[20]),64);
        tracep->fullQData(oldp+552,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[21]),64);
        tracep->fullQData(oldp+554,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[22]),64);
        tracep->fullQData(oldp+556,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[23]),64);
        tracep->fullQData(oldp+558,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[24]),64);
        tracep->fullQData(oldp+560,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[25]),64);
        tracep->fullQData(oldp+562,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[26]),64);
        tracep->fullQData(oldp+564,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[27]),64);
        tracep->fullQData(oldp+566,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[28]),64);
        tracep->fullQData(oldp+568,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[29]),64);
        tracep->fullQData(oldp+570,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[30]),64);
        tracep->fullQData(oldp+572,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[31]),64);
        tracep->fullIData(oldp+574,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__i),32);
        tracep->fullQData(oldp+575,(vlSelf->SocTop__DOT__i_cache12__DOT__addr_lock_reg),64);
        tracep->fullIData(oldp+577,(vlSelf->SocTop__DOT__i_cache12__DOT__u_data01__DOT__out_data),32);
        tracep->fullIData(oldp+578,(vlSelf->SocTop__DOT__i_cache12__DOT__u_data02__DOT__out_data),32);
        tracep->fullIData(oldp+579,(vlSelf->SocTop__DOT__i_cache12__DOT__i),32);
        tracep->fullIData(oldp+580,(vlSelf->SocTop__DOT__d_cache13__DOT__i),32);
        tracep->fullQData(oldp+581,(vlSelf->SocTop__DOT__d_cache13__DOT__u_data0__DOT__out_data),64);
        tracep->fullQData(oldp+583,(vlSelf->SocTop__DOT__d_cache13__DOT__u_data1__DOT__out_data),64);
        tracep->fullBit(oldp+585,(((IData)(vlSelf->SocTop__DOT__t_axi_w_valid) 
                                   & (IData)(vlSelf->SocTop__DOT__t_axi_w_ready))));
        tracep->fullBit(oldp+586,(vlSelf->SocTop__DOT__arbitrate4__DOT__b_shankhand));
        tracep->fullBit(oldp+587,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__b_shankhand) 
                                   & (0U == (IData)(vlSelf->SocTop__DOT__t_axi_b_resp)))));
        tracep->fullCData(oldp+588,(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state),2);
        tracep->fullCData(oldp+589,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_state),2);
        tracep->fullCData(oldp+590,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_state),2);
        tracep->fullBit(oldp+591,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_okreg));
        tracep->fullBit(oldp+592,((((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                    >> 2U) & (IData)(vlSelf->SocTop__DOT__soc_axi_aw_ready))));
        tracep->fullBit(oldp+593,((((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                    >> 2U) & (IData)(vlSelf->SocTop__DOT__soc_axi_w_ready))));
        tracep->fullBit(oldp+594,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state)) 
                                   & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                      >> 2U))));
        tracep->fullCData(oldp+595,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state),2);
        tracep->fullCData(oldp+596,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state_nxt),2);
        tracep->fullBit(oldp+597,((((((IData)(vlSelf->SocTop__DOT__soc_axi_ar_ready) 
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
        tracep->fullBit(oldp+598,((((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                    >> 2U) & (2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)))));
        tracep->fullCData(oldp+599,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state),2);
        tracep->fullCData(oldp+600,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state_nxt),2);
        tracep->fullQData(oldp+601,(vlSelf->SocTop__DOT__axi_mnq4__DOT__read_addr_reg),64);
        tracep->fullQData(oldp+603,(vlSelf->SocTop__DOT__axi_mnq4__DOT__write_data_reg),64);
        tracep->fullQData(oldp+605,(vlSelf->SocTop__DOT__axi_mnq4__DOT__write_addr_reg),64);
        tracep->fullQData(oldp+607,(vlSelf->SocTop__DOT__time_axi6__DOT__car_mtime_l),64);
        tracep->fullQData(oldp+609,(vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h),64);
        tracep->fullQData(oldp+611,((((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
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
        tracep->fullQData(oldp+613,((((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
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
        tracep->fullBit(oldp+615,((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                    & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__ar_shakehand)) 
                                   & (0x2004000ULL 
                                      == (((QData)((IData)(
                                                           vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))))));
        tracep->fullBit(oldp+616,((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                    & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__ar_shakehand)) 
                                   & (0x200bff8ULL 
                                      == (((QData)((IData)(
                                                           vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))))));
        tracep->fullBit(oldp+617,(((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                     & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__w_shakehand)) 
                                    & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__aw_shakehand)) 
                                   & (0x2004000ULL 
                                      == (((QData)((IData)(
                                                           vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))))));
        tracep->fullBit(oldp+618,(((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                     & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__w_shakehand)) 
                                    & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__aw_shakehand)) 
                                   & (0x200bff8ULL 
                                      == (((QData)((IData)(
                                                           vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))))));
        tracep->fullQData(oldp+619,(vlSelf->SocTop__DOT__time_axi6__DOT__wmask),64);
        tracep->fullBit(oldp+621,(vlSelf->SocTop__DOT__time_axi6__DOT__aw_shakehand));
        tracep->fullBit(oldp+622,(vlSelf->SocTop__DOT__time_axi6__DOT__w_shakehand));
        tracep->fullBit(oldp+623,(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right));
        tracep->fullCData(oldp+624,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m),2);
        tracep->fullBit(oldp+625,((IData)(((((((0U 
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
        tracep->fullBit(oldp+626,(vlSelf->SocTop__DOT__time_axi6__DOT__ar_shakehand));
        tracep->fullBit(oldp+627,(((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r)) 
                                   & ((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                      >> 1U))));
        tracep->fullQData(oldp+628,(((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
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
        tracep->fullCData(oldp+630,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r),2);
        tracep->fullCData(oldp+631,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r_nxt),2);
        tracep->fullBit(oldp+632,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_hit_ok));
        tracep->fullBit(oldp+633,(vlSelf->SocTop__DOT__i_cache12__DOT__write_i_ok));
        tracep->fullBit(oldp+634,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_in_cache1));
        tracep->fullBit(oldp+635,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_in_cache2));
        tracep->fullBit(oldp+636,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_write_cache));
        tracep->fullBit(oldp+637,(vlSelf->SocTop__DOT__d_cache13__DOT__write_ok));
        tracep->fullBit(oldp+638,(vlSelf->SocTop__DOT__d_cache13__DOT__write_incache));
        tracep->fullBit(oldp+639,(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena1));
        tracep->fullBit(oldp+640,(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena2));
        tracep->fullBit(oldp+641,(vlSelf->SocTop__DOT__d_cache13__DOT__write_l_ok));
        tracep->fullBit(oldp+642,(vlSelf->SocTop__DOT__d_cache13__DOT__load_in_cache1));
        tracep->fullBit(oldp+643,(vlSelf->SocTop__DOT__d_cache13__DOT__load_in_cache2));
        tracep->fullBit(oldp+644,(vlSelf->SocTop__DOT__d_cache13__DOT__read_cache));
        tracep->fullQData(oldp+645,(vlSelf->SocTop__DOT__rvcpu_inst_addr),64);
        tracep->fullBit(oldp+647,(vlSelf->SocTop__DOT__arbitrate_d_ok));
        tracep->fullBit(oldp+648,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_okreg));
        tracep->fullCData(oldp+649,(vlSelf->SocTop__DOT__t_axi_r_id),4);
        tracep->fullCData(oldp+650,(vlSelf->SocTop__DOT__t_axi_r_resp),2);
        tracep->fullBit(oldp+651,(vlSelf->SocTop__DOT__t_axi_r_last));
        tracep->fullSData(oldp+652,(vlSelf->SocTop__DOT__add_axi_r_id),12);
        tracep->fullCData(oldp+653,(vlSelf->SocTop__DOT__add_axi_r_last),3);
        tracep->fullQData(oldp+654,((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                     >> 9U)),55);
        tracep->fullBit(oldp+656,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_chose1));
        tracep->fullBit(oldp+657,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_chose2));
        tracep->fullCData(oldp+658,((0x3fU & (IData)(
                                                     (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                                      >> 3U)))),6);
        tracep->fullQData(oldp+659,((0x80000000000000ULL 
                                     | (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                        >> 9U))),56);
        tracep->fullQData(oldp+661,(vlSelf->SocTop__DOT__i_cache12__DOT__u_tag01__DOT__out_data),55);
        tracep->fullBit(oldp+663,(vlSelf->SocTop__DOT__i_cache12__DOT__u_tag01__DOT__out_vaild));
        tracep->fullQData(oldp+664,(vlSelf->SocTop__DOT__i_cache12__DOT__u_tag02__DOT__out_data),55);
        tracep->fullBit(oldp+666,(vlSelf->SocTop__DOT__i_cache12__DOT__u_tag02__DOT__out_vaild));
        tracep->fullBit(oldp+667,(vlSelf->SocTop__DOT__d_cache13__DOT__wbck_ok));
        tracep->fullBit(oldp+668,(vlSelf->SocTop__DOT__d_cache13__DOT__load_bc_ok));
        tracep->fullQData(oldp+669,(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_data),55);
        tracep->fullBit(oldp+671,(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_vaild));
        tracep->fullQData(oldp+672,(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_data),55);
        tracep->fullBit(oldp+674,(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_vaild));
        tracep->fullBit(oldp+675,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_r_shankhand));
        tracep->fullBit(oldp+676,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_r_shankhand));
        tracep->fullBit(oldp+677,(vlSelf->clk));
        tracep->fullBit(oldp+678,(vlSelf->rst));
        tracep->fullBit(oldp+679,(vlSelf->out_read_ram_ena));
        tracep->fullBit(oldp+680,(vlSelf->out_read_inst_ena));
        tracep->fullQData(oldp+681,(vlSelf->out_addr_outp),64);
        tracep->fullIData(oldp+683,(vlSelf->in_inst_data_in),32);
        tracep->fullQData(oldp+684,(vlSelf->in_ram_data_in),64);
        tracep->fullBit(oldp+686,(vlSelf->out_write_ram_ena));
        tracep->fullQData(oldp+687,(vlSelf->out_write_ram_data),64);
        tracep->fullQData(oldp+689,(vlSelf->out_write_ram_addr),64);
        tracep->fullQData(oldp+691,(((IData)(vlSelf->SocTop__DOT__arbitrate_ti_sign)
                                      ? vlSelf->SocTop__DOT__i_cache12__DOT__addr_lock_reg
                                      : vlSelf->SocTop__DOT__rvcpu_inst_addr)),64);
        tracep->fullBit(oldp+693,((((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                    & (4U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load))) 
                                   | ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__read_cache) 
                                      | (((IData)(vlSelf->SocTop__DOT__rvcpu_we) 
                                          & (4U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store))) 
                                         | (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__write_incache))))));
        tracep->fullQData(oldp+694,((((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
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
        tracep->fullBit(oldp+696,((((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                    & (0x20U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load))) 
                                   | (vlSelf->SocTop__DOT__d_cache13__DOT__dirty1
                                      [vlSelf->SocTop__DOT__d_cache13__DOT__count_addr] 
                                      & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                         [vlSelf->SocTop__DOT__d_cache13__DOT__count_addr] 
                                         >= vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                         [vlSelf->SocTop__DOT__d_cache13__DOT__count_addr])))));
        tracep->fullQData(oldp+697,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                      ? ((0U == (0xfU 
                                                 & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                                    >> 8U)))
                                          ? vlSelf->in_ram_data_in
                                          : (QData)((IData)(vlSelf->in_inst_data_in)))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+699,(((1U & ((~ (IData)(vlSelf->rst)) 
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
        tracep->fullBit(oldp+701,(((IData)(vlSelf->rst)
                                    ? 0U : (1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)))));
        tracep->fullQData(oldp+702,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
                                                 ? 
                                                (0xfffffffffffffffeULL 
                                                 & vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc)
                                                 : vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc))),64);
        tracep->fullBit(oldp+704,(((IData)(vlSelf->rst)
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
        tracep->fullQData(oldp+705,((((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1))
                                      ? ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                           == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                          & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                          ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                          : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                         [vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1])
                                      : 0ULL)),64);
        tracep->fullQData(oldp+707,((((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2))
                                      ? ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                           == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                          & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                          ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                          : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                         [vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2])
                                      : 0ULL)),64);
        tracep->fullBit(oldp+709,(((~ (IData)(vlSelf->rst)) 
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
        tracep->fullBit(oldp+710,(((IData)(vlSelf->rst)
                                    ? 0U : (1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1) 
                                                   & (2U 
                                                      == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                  & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1) 
                                                     == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)))))));
        tracep->fullBit(oldp+711,(((IData)(vlSelf->rst)
                                    ? 0U : (1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2) 
                                                   & (2U 
                                                      == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                  & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2) 
                                                     == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)))))));
        tracep->fullQData(oldp+712,(((IData)(vlSelf->rst)
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
        tracep->fullQData(oldp+714,(((IData)(vlSelf->rst)
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
        tracep->fullQData(oldp+716,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((1U 
                                                 & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                            >> 2U)))
                                                 ? 
                                                ((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)) 
                                                 << 0x20U)
                                                 : (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data))))),64);
        tracep->fullCData(oldp+718,(((IData)(vlSelf->rst)
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
        tracep->fullCData(oldp+719,(((IData)(vlSelf->rst)
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
        tracep->fullCData(oldp+720,(((IData)(vlSelf->rst)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                             >> 2U)))
                                               ? 0xf0U
                                               : 0xfU))),8);
        tracep->fullBit(oldp+721,((1U & ((~ (IData)(vlSelf->rst)) 
                                         & (~ ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl) 
                                               >> 1U))))));
        tracep->fullIData(oldp+722,(((((0x10U == (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst)) 
                                       & (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_okreg)) 
                                      & (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__inst_chose1))
                                      ? vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_data_oupt
                                      : 0U)),32);
        tracep->fullIData(oldp+723,(((((0x10U == (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst)) 
                                       & (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_okreg)) 
                                      & (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__inst_chose2))
                                      ? vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_data_oupt
                                      : 0U)),32);
        tracep->fullBit(oldp+724,(vlSelf->SocTop__DOT__d_cache13__DOT__store_ok));
        tracep->fullBit(oldp+725,(vlSelf->SocTop__DOT__d_cache13__DOT__load_ok));
        tracep->fullBit(oldp+726,((vlSelf->SocTop__DOT__d_cache13__DOT__dirty1
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
        tracep->fullIData(oldp+727,(3U),32);
        tracep->fullCData(oldp+728,(0U),4);
        tracep->fullCData(oldp+729,(0U),8);
        tracep->fullCData(oldp+730,(3U),3);
        tracep->fullCData(oldp+731,(1U),2);
        tracep->fullCData(oldp+732,(2U),4);
        tracep->fullCData(oldp+733,(0U),3);
        tracep->fullBit(oldp+734,(1U));
        tracep->fullCData(oldp+735,(0U),2);
        tracep->fullBit(oldp+736,(vlSelf->SocTop__DOT__io_axi_aw_ready));
        tracep->fullBit(oldp+737,(vlSelf->SocTop__DOT__io_axi_w_ready));
        tracep->fullCData(oldp+738,(vlSelf->SocTop__DOT__io_axi_b_id),4);
        tracep->fullCData(oldp+739,(vlSelf->SocTop__DOT__io_axi_b_resp),2);
        tracep->fullBit(oldp+740,(vlSelf->SocTop__DOT__io_axi_b_valid));
        tracep->fullBit(oldp+741,(vlSelf->SocTop__DOT__io_axi_ar_ready));
        tracep->fullCData(oldp+742,(vlSelf->SocTop__DOT__io_axi_r_id),4);
        tracep->fullQData(oldp+743,(vlSelf->SocTop__DOT__io_axi_r_data),64);
        tracep->fullCData(oldp+745,(vlSelf->SocTop__DOT__io_axi_r_resp),2);
        tracep->fullBit(oldp+746,(vlSelf->SocTop__DOT__io_axi_r_last));
        tracep->fullBit(oldp+747,(vlSelf->SocTop__DOT__io_axi_r_valid));
        tracep->fullCData(oldp+748,(0xffU),8);
        tracep->fullBit(oldp+749,(0U));
    }
}
