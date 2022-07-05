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
        tracep->declBit(c+764,"clk", false,-1);
        tracep->declBit(c+765,"rst", false,-1);
        tracep->declBit(c+766,"read_ena_sign_", false,-1);
        tracep->declQuad(c+767,"out_addr_outp", false,-1, 63,0);
        tracep->declQuad(c+769,"read_data_sign_", false,-1, 63,0);
        tracep->declBit(c+771,"out_write_ram_ena", false,-1);
        tracep->declQuad(c+772,"out_write_ram_data", false,-1, 63,0);
        tracep->declQuad(c+774,"out_write_ram_addr", false,-1, 63,0);
        tracep->declBit(c+764,"SocTop clk", false,-1);
        tracep->declBit(c+765,"SocTop rst", false,-1);
        tracep->declBit(c+766,"SocTop read_ena_sign_", false,-1);
        tracep->declQuad(c+767,"SocTop out_addr_outp", false,-1, 63,0);
        tracep->declQuad(c+769,"SocTop read_data_sign_", false,-1, 63,0);
        tracep->declBit(c+771,"SocTop out_write_ram_ena", false,-1);
        tracep->declQuad(c+772,"SocTop out_write_ram_data", false,-1, 63,0);
        tracep->declQuad(c+774,"SocTop out_write_ram_addr", false,-1, 63,0);
        tracep->declBus(c+828,"SocTop SLAVE_NUM", false,-1, 31,0);
        tracep->declBit(c+764,"SocTop aclk", false,-1);
        tracep->declQuad(c+401,"SocTop rvcpu_inst_addr", false,-1, 63,0);
        tracep->declQuad(c+3,"SocTop rvcpu_data_addr", false,-1, 63,0);
        tracep->declBus(c+5,"SocTop rvcpu_wmask", false,-1, 7,0);
        tracep->declQuad(c+6,"SocTop rvcpu_data_o", false,-1, 63,0);
        tracep->declBit(c+8,"SocTop rvcpu_we", false,-1);
        tracep->declBit(c+9,"SocTop rvcpu_re", false,-1);
        tracep->declBit(c+10,"SocTop core_stall_l", false,-1);
        tracep->declBus(c+11,"SocTop i_cache_inst_data", false,-1, 31,0);
        tracep->declBit(c+12,"SocTop i_cache_inst_valid", false,-1);
        tracep->declBit(c+13,"SocTop i_cache_read_ena", false,-1);
        tracep->declQuad(c+14,"SocTop i_cache_addr", false,-1, 63,0);
        tracep->declBit(c+776,"SocTop i_cache_ready", false,-1);
        tracep->declBit(c+16,"SocTop i_caceh_resp", false,-1);
        tracep->declQuad(c+17,"SocTop d_cache_data_out", false,-1, 63,0);
        tracep->declBit(c+345,"SocTop d_cache_mem_finish", false,-1);
        tracep->declQuad(c+19,"SocTop d_cache_out_addr", false,-1, 63,0);
        tracep->declQuad(c+346,"SocTop d_cache_out_data", false,-1, 63,0);
        tracep->declBit(c+348,"SocTop d_cache_out_resp", false,-1);
        tracep->declBus(c+21,"SocTop d_cache_out_type", false,-1, 3,0);
        tracep->declQuad(c+22,"SocTop arbitrate_d_data", false,-1, 63,0);
        tracep->declBit(c+24,"SocTop arbitrate_d_ok", false,-1);
        tracep->declQuad(c+25,"SocTop arbitrate_i_data", false,-1, 63,0);
        tracep->declBit(c+27,"SocTop arbitrate_i_ok", false,-1);
        tracep->declBit(c+28,"SocTop arbitrate_ti_sign", false,-1);
        tracep->declBit(c+403,"SocTop time_init_sign", false,-1);
        tracep->declBus(c+829,"SocTop t_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+349,"SocTop t_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+830,"SocTop t_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+831,"SocTop t_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+832,"SocTop t_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+833,"SocTop t_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+834,"SocTop t_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+829,"SocTop t_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+777,"SocTop t_axi_aw_ready", false,-1);
        tracep->declBit(c+29,"SocTop t_axi_aw_valid", false,-1);
        tracep->declQuad(c+351,"SocTop t_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+835,"SocTop t_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+836,"SocTop t_axi_w_last", false,-1);
        tracep->declBit(c+404,"SocTop t_axi_w_valid", false,-1);
        tracep->declBit(c+778,"SocTop t_axi_w_ready", false,-1);
        tracep->declBus(c+779,"SocTop t_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+780,"SocTop t_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+781,"SocTop t_axi_b_valid", false,-1);
        tracep->declBit(c+836,"SocTop t_axi_b_ready", false,-1);
        tracep->declBus(c+30,"SocTop t_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+31,"SocTop t_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+830,"SocTop t_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+831,"SocTop t_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+832,"SocTop t_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+833,"SocTop t_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+834,"SocTop t_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+829,"SocTop t_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+33,"SocTop t_axi_ar_valid", false,-1);
        tracep->declBit(c+34,"SocTop t_axi_ar_ready", false,-1);
        tracep->declBus(c+35,"SocTop t_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+36,"SocTop t_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+38,"SocTop t_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+39,"SocTop t_axi_r_last", false,-1);
        tracep->declBit(c+39,"SocTop t_axi_r_valid", false,-1);
        tracep->declBit(c+836,"SocTop t_axi_r_ready", false,-1);
        tracep->declBus(c+40,"SocTop add_axi_aw_id", false,-1, 11,0);
        tracep->declArray(c+41,"SocTop add_axi_aw_addr", false,-1, 191,0);
        tracep->declBus(c+47,"SocTop add_axi_aw_len", false,-1, 23,0);
        tracep->declBus(c+48,"SocTop add_axi_aw_size", false,-1, 8,0);
        tracep->declBus(c+49,"SocTop add_axi_aw_burst", false,-1, 5,0);
        tracep->declBus(c+50,"SocTop add_axi_aw_cache", false,-1, 11,0);
        tracep->declBus(c+51,"SocTop add_axi_aw_prot", false,-1, 8,0);
        tracep->declBus(c+52,"SocTop add_axi_aw_qos", false,-1, 11,0);
        tracep->declBus(c+53,"SocTop add_axi_aw_valid", false,-1, 2,0);
        tracep->declBus(c+54,"SocTop add_axi_aw_ready", false,-1, 2,0);
        tracep->declArray(c+55,"SocTop add_axi_w_data", false,-1, 191,0);
        tracep->declBus(c+61,"SocTop add_axi_w_strb", false,-1, 23,0);
        tracep->declBus(c+62,"SocTop add_axi_w_last", false,-1, 2,0);
        tracep->declBus(c+63,"SocTop add_axi_w_valid", false,-1, 2,0);
        tracep->declBus(c+64,"SocTop add_axi_w_ready", false,-1, 2,0);
        tracep->declBus(c+353,"SocTop add_axi_b_id", false,-1, 11,0);
        tracep->declBus(c+405,"SocTop add_axi_b_resp", false,-1, 5,0);
        tracep->declBus(c+406,"SocTop add_axi_b_valid", false,-1, 2,0);
        tracep->declBus(c+65,"SocTop add_axi_b_ready", false,-1, 2,0);
        tracep->declBus(c+66,"SocTop add_axi_ar_id", false,-1, 11,0);
        tracep->declArray(c+67,"SocTop add_axi_ar_addr", false,-1, 191,0);
        tracep->declBus(c+73,"SocTop add_axi_ar_len", false,-1, 23,0);
        tracep->declBus(c+74,"SocTop add_axi_ar_size", false,-1, 8,0);
        tracep->declBus(c+75,"SocTop add_axi_ar_burst", false,-1, 5,0);
        tracep->declBus(c+76,"SocTop add_axi_ar_cache", false,-1, 11,0);
        tracep->declBus(c+77,"SocTop add_axi_ar_prot", false,-1, 8,0);
        tracep->declBus(c+78,"SocTop add_axi_ar_qos", false,-1, 11,0);
        tracep->declBus(c+79,"SocTop add_axi_ar_valid", false,-1, 2,0);
        tracep->declBus(c+354,"SocTop add_axi_ar_ready", false,-1, 2,0);
        tracep->declBus(c+355,"SocTop add_axi_r_id", false,-1, 11,0);
        tracep->declArray(c+782,"SocTop add_axi_r_data", false,-1, 191,0);
        tracep->declBus(c+1,"SocTop add_axi_r_resp", false,-1, 5,0);
        tracep->declBus(c+407,"SocTop add_axi_r_last", false,-1, 2,0);
        tracep->declBus(c+408,"SocTop add_axi_r_valid", false,-1, 2,0);
        tracep->declBus(c+80,"SocTop add_axi_r_ready", false,-1, 2,0);
        tracep->declBus(c+81,"SocTop soc_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+82,"SocTop soc_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+84,"SocTop soc_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+85,"SocTop soc_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+86,"SocTop soc_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+87,"SocTop soc_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+88,"SocTop soc_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+89,"SocTop soc_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+90,"SocTop soc_axi_aw_ready", false,-1);
        tracep->declBit(c+91,"SocTop soc_axi_aw_valid", false,-1);
        tracep->declQuad(c+92,"SocTop soc_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+94,"SocTop soc_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+95,"SocTop soc_axi_w_last", false,-1);
        tracep->declBit(c+96,"SocTop soc_axi_w_valid", false,-1);
        tracep->declBit(c+97,"SocTop soc_axi_w_ready", false,-1);
        tracep->declBus(c+81,"SocTop soc_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+837,"SocTop soc_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+409,"SocTop soc_axi_b_valid", false,-1);
        tracep->declBit(c+98,"SocTop soc_axi_b_ready", false,-1);
        tracep->declBus(c+99,"SocTop soc_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+100,"SocTop soc_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+102,"SocTop soc_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+103,"SocTop soc_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+104,"SocTop soc_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+105,"SocTop soc_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+106,"SocTop soc_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+107,"SocTop soc_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+108,"SocTop soc_axi_ar_valid", false,-1);
        tracep->declBit(c+410,"SocTop soc_axi_ar_ready", false,-1);
        tracep->declBus(c+411,"SocTop soc_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+788,"SocTop soc_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+837,"SocTop soc_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+412,"SocTop soc_axi_r_last", false,-1);
        tracep->declBit(c+413,"SocTop soc_axi_r_valid", false,-1);
        tracep->declBit(c+109,"SocTop soc_axi_r_ready", false,-1);
        tracep->declBus(c+110,"SocTop tim_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+111,"SocTop tim_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+113,"SocTop tim_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+114,"SocTop tim_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+115,"SocTop tim_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+116,"SocTop tim_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+117,"SocTop tim_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+118,"SocTop tim_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+119,"SocTop tim_axi_aw_ready", false,-1);
        tracep->declBit(c+120,"SocTop tim_axi_aw_valid", false,-1);
        tracep->declQuad(c+121,"SocTop tim_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+123,"SocTop tim_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+124,"SocTop tim_axi_w_last", false,-1);
        tracep->declBit(c+125,"SocTop tim_axi_w_valid", false,-1);
        tracep->declBit(c+126,"SocTop tim_axi_w_ready", false,-1);
        tracep->declBus(c+414,"SocTop tim_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+415,"SocTop tim_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+416,"SocTop tim_axi_b_valid", false,-1);
        tracep->declBit(c+127,"SocTop tim_axi_b_ready", false,-1);
        tracep->declBus(c+128,"SocTop tim_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+129,"SocTop tim_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+131,"SocTop tim_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+132,"SocTop tim_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+133,"SocTop tim_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+134,"SocTop tim_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+135,"SocTop tim_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+136,"SocTop tim_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+137,"SocTop tim_axi_ar_valid", false,-1);
        tracep->declBit(c+138,"SocTop tim_axi_ar_ready", false,-1);
        tracep->declBus(c+356,"SocTop tim_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+139,"SocTop tim_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+2,"SocTop tim_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+417,"SocTop tim_axi_r_last", false,-1);
        tracep->declBit(c+418,"SocTop tim_axi_r_valid", false,-1);
        tracep->declBit(c+141,"SocTop tim_axi_r_ready", false,-1);
        tracep->declBus(c+142,"SocTop io_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+143,"SocTop io_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+145,"SocTop io_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+146,"SocTop io_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+147,"SocTop io_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+148,"SocTop io_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+149,"SocTop io_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+150,"SocTop io_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+838,"SocTop io_axi_aw_ready", false,-1);
        tracep->declBit(c+151,"SocTop io_axi_aw_valid", false,-1);
        tracep->declQuad(c+152,"SocTop io_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+154,"SocTop io_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+155,"SocTop io_axi_w_last", false,-1);
        tracep->declBit(c+156,"SocTop io_axi_w_valid", false,-1);
        tracep->declBit(c+839,"SocTop io_axi_w_ready", false,-1);
        tracep->declBus(c+840,"SocTop io_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+841,"SocTop io_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+842,"SocTop io_axi_b_valid", false,-1);
        tracep->declBit(c+157,"SocTop io_axi_b_ready", false,-1);
        tracep->declBus(c+158,"SocTop io_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+159,"SocTop io_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+161,"SocTop io_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+162,"SocTop io_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+163,"SocTop io_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+164,"SocTop io_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+165,"SocTop io_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+166,"SocTop io_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+167,"SocTop io_axi_ar_valid", false,-1);
        tracep->declBit(c+843,"SocTop io_axi_ar_ready", false,-1);
        tracep->declBus(c+844,"SocTop io_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+845,"SocTop io_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+847,"SocTop io_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+848,"SocTop io_axi_r_last", false,-1);
        tracep->declBit(c+849,"SocTop io_axi_r_valid", false,-1);
        tracep->declBit(c+168,"SocTop io_axi_r_ready", false,-1);
        tracep->declBit(c+169,"SocTop read_ena_sign", false,-1);
        tracep->declQuad(c+170,"SocTop addr_oup_sign", false,-1, 63,0);
        tracep->declQuad(c+769,"SocTop read_data_sign", false,-1, 63,0);
        tracep->declBit(c+409,"SocTop write_ena_sign", false,-1);
        tracep->declQuad(c+419,"SocTop write_addr_sign", false,-1, 63,0);
        tracep->declQuad(c+421,"SocTop write_data_sign", false,-1, 63,0);
        tracep->declBus(c+850,"SocTop prot_chose_write", false,-1, 2,0);
        tracep->declBus(c+850,"SocTop prot_chose_read", false,-1, 2,0);
        tracep->declBit(c+764,"SocTop rvcpu1 clk", false,-1);
        tracep->declBit(c+765,"SocTop rvcpu1 rst", false,-1);
        tracep->declQuad(c+401,"SocTop rvcpu1 inst_addr", false,-1, 63,0);
        tracep->declBit(c+776,"SocTop rvcpu1 inst_ready", false,-1);
        tracep->declBus(c+11,"SocTop rvcpu1 inst", false,-1, 31,0);
        tracep->declBit(c+12,"SocTop rvcpu1 bui_inst_valid", false,-1);
        tracep->declBit(c+10,"SocTop rvcpu1 core_stall_sign", false,-1);
        tracep->declQuad(c+3,"SocTop rvcpu1 data_addr", false,-1, 63,0);
        tracep->declBus(c+5,"SocTop rvcpu1 wmask", false,-1, 7,0);
        tracep->declQuad(c+6,"SocTop rvcpu1 data_o", false,-1, 63,0);
        tracep->declQuad(c+17,"SocTop rvcpu1 data_i", false,-1, 63,0);
        tracep->declBit(c+8,"SocTop rvcpu1 we", false,-1);
        tracep->declBit(c+9,"SocTop rvcpu1 re", false,-1);
        tracep->declBit(c+345,"SocTop rvcpu1 mem_finish", false,-1);
        tracep->declBit(c+403,"SocTop rvcpu1 timer_intr", false,-1);
        tracep->declQuad(c+790,"SocTop rvcpu1 pip_regfile_x1", false,-1, 63,0);
        tracep->declBit(c+792,"SocTop rvcpu1 pip_refflie_x1_ena", false,-1);
        tracep->declBus(c+172,"SocTop rvcpu1 pip_regfile_x1_addr", false,-1, 4,0);
        tracep->declQuad(c+793,"SocTop rvcpu1 pip_pc", false,-1, 63,0);
        tracep->declBit(c+795,"SocTop rvcpu1 if_stall_req", false,-1);
        tracep->declQuad(c+423,"SocTop rvcpu1 if_id_pc", false,-1, 63,0);
        tracep->declBus(c+425,"SocTop rvcpu1 if_id_inst", false,-1, 31,0);
        tracep->declBit(c+426,"SocTop rvcpu1 ex_flush", false,-1);
        tracep->declQuad(c+173,"SocTop rvcpu1 ex_id_rd_data", false,-1, 63,0);
        tracep->declBus(c+427,"SocTop rvcpu1 ex_id_rd_addr", false,-1, 4,0);
        tracep->declBit(c+428,"SocTop rvcpu1 ex_id_rd_ena", false,-1);
        tracep->declBus(c+429,"SocTop rvcpu1 ex_id_rd_type", false,-1, 7,0);
        tracep->declBus(c+430,"SocTop rvcpu1 ex_mem_sel", false,-1, 2,0);
        tracep->declQuad(c+431,"SocTop rvcpu1 ex_mem_addr", false,-1, 63,0);
        tracep->declBit(c+426,"SocTop rvcpu1 ex_pc_branchena", false,-1);
        tracep->declQuad(c+433,"SocTop rvcpu1 ex_pc_branchpc", false,-1, 63,0);
        tracep->declBit(c+435,"SocTop rvcpu1 ex_ctrl_req", false,-1);
        tracep->declBus(c+175,"SocTop rvcpu1 id_reg_addr1", false,-1, 4,0);
        tracep->declBit(c+176,"SocTop rvcpu1 id_reg_ena1", false,-1);
        tracep->declBus(c+177,"SocTop rvcpu1 id_reg_addr2", false,-1, 4,0);
        tracep->declBit(c+178,"SocTop rvcpu1 id_reg_ena2", false,-1);
        tracep->declBit(c+179,"SocTop rvcpu1 id_ctrl_req", false,-1);
        tracep->declBus(c+180,"SocTop rvcpu1 id_ex_type", false,-1, 7,0);
        tracep->declBus(c+181,"SocTop rvcpu1 id_ex_opcode", false,-1, 7,0);
        tracep->declQuad(c+182,"SocTop rvcpu1 id_ex_op", false,-1, 63,0);
        tracep->declQuad(c+796,"SocTop rvcpu1 id_ex_op2", false,-1, 63,0);
        tracep->declBit(c+184,"SocTop rvcpu1 id_ex_rd_ena", false,-1);
        tracep->declBus(c+357,"SocTop rvcpu1 id_ex_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+798,"SocTop rvcpu1 id_ex_pc", false,-1, 63,0);
        tracep->declBus(c+358,"SocTop rvcpu1 id_ex_s_offset", false,-1, 11,0);
        tracep->declBus(c+800,"SocTop rvcpu1 id_ex_memsel", false,-1, 2,0);
        tracep->declQuad(c+359,"SocTop rvcpu1 id_pip_jalrpc", false,-1, 63,0);
        tracep->declBit(c+185,"SocTop rvcpu1 id_pip_jalrena", false,-1);
        tracep->declBit(c+186,"SocTop rvcpu1 id_if_flush", false,-1);
        tracep->declBus(c+187,"SocTop rvcpu1 stall_ctrl", false,-1, 4,0);
        tracep->declQuad(c+801,"SocTop rvcpu1 regs_id_data1", false,-1, 63,0);
        tracep->declQuad(c+803,"SocTop rvcpu1 regs_id_data2", false,-1, 63,0);
        tracep->declQuad(c+188,"SocTop rvcpu1 mem_id_data", false,-1, 63,0);
        tracep->declBus(c+436,"SocTop rvcpu1 mem_id_addr", false,-1, 4,0);
        tracep->declBit(c+437,"SocTop rvcpu1 mem_id_ena", false,-1);
        tracep->declBit(c+190,"SocTop rvcpu1 mem_ctrl_req", false,-1);
        tracep->declBus(c+438,"SocTop rvcpu1 wb_id_addr", false,-1, 4,0);
        tracep->declBit(c+439,"SocTop rvcpu1 wb_id_ena", false,-1);
        tracep->declQuad(c+440,"SocTop rvcpu1 wb_regfile_data", false,-1, 63,0);
        tracep->declQuad(c+442,"SocTop rvcpu1 idex_ex_pc", false,-1, 63,0);
        tracep->declBus(c+444,"SocTop rvcpu1 idex_ex_type", false,-1, 7,0);
        tracep->declBus(c+445,"SocTop rvcpu1 idex_ex_opcode", false,-1, 7,0);
        tracep->declQuad(c+446,"SocTop rvcpu1 idex_ex_op1", false,-1, 63,0);
        tracep->declQuad(c+448,"SocTop rvcpu1 idex_ex_op2", false,-1, 63,0);
        tracep->declBit(c+450,"SocTop rvcpu1 idex_ex_rdena", false,-1);
        tracep->declBus(c+427,"SocTop rvcpu1 idex_ex_rdaddr", false,-1, 4,0);
        tracep->declBus(c+451,"SocTop rvcpu1 idex_ex_offset", false,-1, 11,0);
        tracep->declBus(c+430,"SocTop rvcpu1 idex_ex_sel", false,-1, 2,0);
        tracep->declBus(c+452,"SocTop rvcpu1 exmem_mem_type", false,-1, 7,0);
        tracep->declBit(c+437,"SocTop rvcpu1 exmem_mem_ena", false,-1);
        tracep->declQuad(c+453,"SocTop rvcpu1 exmem_mem_data", false,-1, 63,0);
        tracep->declBus(c+436,"SocTop rvcpu1 exmem_mem_addr", false,-1, 4,0);
        tracep->declBus(c+455,"SocTop rvcpu1 exmem_mem_sel", false,-1, 2,0);
        tracep->declQuad(c+456,"SocTop rvcpu1 exmem_mem_lsaddr", false,-1, 63,0);
        tracep->declQuad(c+805,"SocTop rvcpu1 ex_ex_mem_pc", false,-1, 63,0);
        tracep->declQuad(c+458,"SocTop rvcpu1 ex_mem_mem_pc", false,-1, 63,0);
        tracep->declQuad(c+191,"SocTop rvcpu1 mem_mem_wb_pc", false,-1, 63,0);
        tracep->declBus(c+807,"SocTop rvcpu1 id_id_ex_inst", false,-1, 31,0);
        tracep->declBus(c+460,"SocTop rvcpu1 id_ex_ex_inst", false,-1, 31,0);
        tracep->declBus(c+808,"SocTop rvcpu1 ex_ex_mem_inst", false,-1, 31,0);
        tracep->declBus(c+461,"SocTop rvcpu1 ex_mem_mem_inst", false,-1, 31,0);
        tracep->declBus(c+193,"SocTop rvcpu1 mem_mem_wb_inst", false,-1, 31,0);
        tracep->declBit(c+765,"SocTop rvcpu1 pip_fore0 rst", false,-1);
        tracep->declQuad(c+401,"SocTop rvcpu1 pip_fore0 pc_i", false,-1, 63,0);
        tracep->declBus(c+11,"SocTop rvcpu1 pip_fore0 inst", false,-1, 31,0);
        tracep->declQuad(c+790,"SocTop rvcpu1 pip_fore0 x1_data", false,-1, 63,0);
        tracep->declQuad(c+793,"SocTop rvcpu1 pip_fore0 pc_o", false,-1, 63,0);
        tracep->declBus(c+172,"SocTop rvcpu1 pip_fore0 x1_addr", false,-1, 4,0);
        tracep->declBit(c+792,"SocTop rvcpu1 pip_fore0 x1_ena", false,-1);
        tracep->declBus(c+194,"SocTop rvcpu1 pip_fore0 j_imm", false,-1, 20,1);
        tracep->declBus(c+195,"SocTop rvcpu1 pip_fore0 i_imm", false,-1, 11,0);
        tracep->declBus(c+196,"SocTop rvcpu1 pip_fore0 b_imm", false,-1, 12,1);
        tracep->declBus(c+197,"SocTop rvcpu1 pip_fore0 opcode", false,-1, 6,0);
        tracep->declBit(c+198,"SocTop rvcpu1 pip_fore0 inst_jal", false,-1);
        tracep->declBit(c+199,"SocTop rvcpu1 pip_fore0 inst_jalr", false,-1);
        tracep->declBit(c+200,"SocTop rvcpu1 pip_fore0 inst_bxx", false,-1);
        tracep->declQuad(c+809,"SocTop rvcpu1 pip_fore0 operand1", false,-1, 63,0);
        tracep->declQuad(c+811,"SocTop rvcpu1 pip_fore0 operand2", false,-1, 63,0);
        tracep->declQuad(c+201,"SocTop rvcpu1 pip_fore0 j_pc", false,-1, 63,0);
        tracep->declBit(c+764,"SocTop rvcpu1 pc1 clk", false,-1);
        tracep->declBit(c+765,"SocTop rvcpu1 pc1 rst", false,-1);
        tracep->declQuad(c+793,"SocTop rvcpu1 pc1 static_pc_i", false,-1, 63,0);
        tracep->declQuad(c+359,"SocTop rvcpu1 pc1 id_pc_i", false,-1, 63,0);
        tracep->declBit(c+185,"SocTop rvcpu1 pc1 id_pc_ena", false,-1);
        tracep->declQuad(c+433,"SocTop rvcpu1 pc1 ex_pc_i", false,-1, 63,0);
        tracep->declBit(c+426,"SocTop rvcpu1 pc1 ex_pc_ena", false,-1);
        tracep->declBus(c+187,"SocTop rvcpu1 pc1 stall_ctrl", false,-1, 4,0);
        tracep->declQuad(c+401,"SocTop rvcpu1 pc1 pc", false,-1, 63,0);
        tracep->declBit(c+462,"SocTop rvcpu1 pc1 ex_pc_change", false,-1);
        tracep->declBit(c+463,"SocTop rvcpu1 pc1 id_pc_change", false,-1);
        tracep->declQuad(c+464,"SocTop rvcpu1 pc1 pc_ex", false,-1, 63,0);
        tracep->declQuad(c+466,"SocTop rvcpu1 pc1 pc_id", false,-1, 63,0);
        tracep->declBit(c+764,"SocTop rvcpu1 if_id2 clk", false,-1);
        tracep->declBit(c+765,"SocTop rvcpu1 if_id2 rst", false,-1);
        tracep->declQuad(c+401,"SocTop rvcpu1 if_id2 if_pc", false,-1, 63,0);
        tracep->declBus(c+11,"SocTop rvcpu1 if_id2 if_inst", false,-1, 31,0);
        tracep->declBit(c+426,"SocTop rvcpu1 if_id2 if_id_flush", false,-1);
        tracep->declBit(c+186,"SocTop rvcpu1 if_id2 if_id_bubble", false,-1);
        tracep->declBit(c+12,"SocTop rvcpu1 if_id2 if_inst_valid", false,-1);
        tracep->declBit(c+776,"SocTop rvcpu1 if_id2 if_inst_ready", false,-1);
        tracep->declBit(c+10,"SocTop rvcpu1 if_id2 if_inst_stall", false,-1);
        tracep->declBus(c+187,"SocTop rvcpu1 if_id2 stall_ctrl", false,-1, 4,0);
        tracep->declBit(c+190,"SocTop rvcpu1 if_id2 mem_stall_sign", false,-1);
        tracep->declBit(c+435,"SocTop rvcpu1 if_id2 ex_stall_sign", false,-1);
        tracep->declBit(c+179,"SocTop rvcpu1 if_id2 id_stall_sign", false,-1);
        tracep->declBit(c+795,"SocTop rvcpu1 if_id2 if_unstall_req", false,-1);
        tracep->declQuad(c+423,"SocTop rvcpu1 if_id2 id_pc", false,-1, 63,0);
        tracep->declBus(c+425,"SocTop rvcpu1 if_id2 id_inst", false,-1, 31,0);
        tracep->declBit(c+468,"SocTop rvcpu1 if_id2 fl_bub_temp", false,-1);
        tracep->declBit(c+765,"SocTop rvcpu1 id3 rst", false,-1);
        tracep->declBus(c+425,"SocTop rvcpu1 id3 inst_i", false,-1, 31,0);
        tracep->declQuad(c+423,"SocTop rvcpu1 id3 pc_i", false,-1, 63,0);
        tracep->declQuad(c+801,"SocTop rvcpu1 id3 op1_data_i", false,-1, 63,0);
        tracep->declQuad(c+803,"SocTop rvcpu1 id3 op2_data_i", false,-1, 63,0);
        tracep->declBus(c+175,"SocTop rvcpu1 id3 op1_addr_o", false,-1, 4,0);
        tracep->declBus(c+177,"SocTop rvcpu1 id3 op2_addr_o", false,-1, 4,0);
        tracep->declBit(c+176,"SocTop rvcpu1 id3 op1_read_o", false,-1);
        tracep->declBit(c+178,"SocTop rvcpu1 id3 op2_read_o", false,-1);
        tracep->declQuad(c+173,"SocTop rvcpu1 id3 ex_rd_data", false,-1, 63,0);
        tracep->declBus(c+427,"SocTop rvcpu1 id3 ex_rd_addr", false,-1, 4,0);
        tracep->declBit(c+428,"SocTop rvcpu1 id3 ex_rd_ena", false,-1);
        tracep->declBus(c+429,"SocTop rvcpu1 id3 ex_inst_type", false,-1, 7,0);
        tracep->declQuad(c+188,"SocTop rvcpu1 id3 mem_rd_data", false,-1, 63,0);
        tracep->declBus(c+436,"SocTop rvcpu1 id3 mem_rd_addr", false,-1, 4,0);
        tracep->declBit(c+437,"SocTop rvcpu1 id3 mem_rd_ena", false,-1);
        tracep->declBit(c+439,"SocTop rvcpu1 id3 wb_rd_ena", false,-1);
        tracep->declBus(c+438,"SocTop rvcpu1 id3 wb_rd_addr", false,-1, 4,0);
        tracep->declBit(c+179,"SocTop rvcpu1 id3 id_stall_req", false,-1);
        tracep->declBus(c+180,"SocTop rvcpu1 id3 inst_type", false,-1, 7,0);
        tracep->declBus(c+181,"SocTop rvcpu1 id3 inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+182,"SocTop rvcpu1 id3 op1_o", false,-1, 63,0);
        tracep->declQuad(c+796,"SocTop rvcpu1 id3 op2_o", false,-1, 63,0);
        tracep->declBit(c+184,"SocTop rvcpu1 id3 rd_w_ena", false,-1);
        tracep->declBus(c+357,"SocTop rvcpu1 id3 rd_w_addr", false,-1, 4,0);
        tracep->declQuad(c+798,"SocTop rvcpu1 id3 pc_o", false,-1, 63,0);
        tracep->declBus(c+807,"SocTop rvcpu1 id3 inst_o", false,-1, 31,0);
        tracep->declBus(c+358,"SocTop rvcpu1 id3 store_addr_offset", false,-1, 11,0);
        tracep->declBus(c+800,"SocTop rvcpu1 id3 mem_op_sel", false,-1, 2,0);
        tracep->declBit(c+185,"SocTop rvcpu1 id3 jalr_pc_ena", false,-1);
        tracep->declQuad(c+359,"SocTop rvcpu1 id3 jalr_pc", false,-1, 63,0);
        tracep->declBit(c+186,"SocTop rvcpu1 id3 id_flush", false,-1);
        tracep->declBus(c+469,"SocTop rvcpu1 id3 opcode", false,-1, 6,0);
        tracep->declBus(c+470,"SocTop rvcpu1 id3 rd", false,-1, 4,0);
        tracep->declBus(c+471,"SocTop rvcpu1 id3 funct3", false,-1, 2,0);
        tracep->declBus(c+203,"SocTop rvcpu1 id3 rs1", false,-1, 4,0);
        tracep->declBus(c+472,"SocTop rvcpu1 id3 imm", false,-1, 11,0);
        tracep->declBus(c+473,"SocTop rvcpu1 id3 funct7", false,-1, 6,0);
        tracep->declBus(c+474,"SocTop rvcpu1 id3 rs2", false,-1, 4,0);
        tracep->declBus(c+475,"SocTop rvcpu1 id3 u_imm", false,-1, 19,0);
        tracep->declBus(c+476,"SocTop rvcpu1 id3 s_imm", false,-1, 11,0);
        tracep->declBit(c+204,"SocTop rvcpu1 id3 inst_lui", false,-1);
        tracep->declBit(c+205,"SocTop rvcpu1 id3 inst_auipc", false,-1);
        tracep->declBit(c+206,"SocTop rvcpu1 id3 inst_jal", false,-1);
        tracep->declBit(c+207,"SocTop rvcpu1 id3 inst_jalr", false,-1);
        tracep->declBit(c+208,"SocTop rvcpu1 id3 inst_jump", false,-1);
        tracep->declBit(c+361,"SocTop rvcpu1 id3 inst_addi", false,-1);
        tracep->declBit(c+362,"SocTop rvcpu1 id3 inst_slti", false,-1);
        tracep->declBit(c+363,"SocTop rvcpu1 id3 inst_sltiu", false,-1);
        tracep->declBit(c+364,"SocTop rvcpu1 id3 inst_xori", false,-1);
        tracep->declBit(c+365,"SocTop rvcpu1 id3 inst_ori", false,-1);
        tracep->declBit(c+366,"SocTop rvcpu1 id3 inst_andi", false,-1);
        tracep->declBit(c+367,"SocTop rvcpu1 id3 inst_slli", false,-1);
        tracep->declBit(c+368,"SocTop rvcpu1 id3 inst_srli", false,-1);
        tracep->declBit(c+209,"SocTop rvcpu1 id3 inst_srai", false,-1);
        tracep->declBit(c+210,"SocTop rvcpu1 id3 inst_addiw", false,-1);
        tracep->declBit(c+211,"SocTop rvcpu1 id3 inst_slliw", false,-1);
        tracep->declBit(c+212,"SocTop rvcpu1 id3 inst_srliw", false,-1);
        tracep->declBit(c+213,"SocTop rvcpu1 id3 inst_sraiw", false,-1);
        tracep->declBit(c+214,"SocTop rvcpu1 id3 inst_add", false,-1);
        tracep->declBit(c+215,"SocTop rvcpu1 id3 inst_sub", false,-1);
        tracep->declBit(c+216,"SocTop rvcpu1 id3 inst_sll", false,-1);
        tracep->declBit(c+217,"SocTop rvcpu1 id3 inst_slt", false,-1);
        tracep->declBit(c+218,"SocTop rvcpu1 id3 inst_sltu", false,-1);
        tracep->declBit(c+219,"SocTop rvcpu1 id3 inst_xor", false,-1);
        tracep->declBit(c+220,"SocTop rvcpu1 id3 inst_srl", false,-1);
        tracep->declBit(c+221,"SocTop rvcpu1 id3 inst_sra", false,-1);
        tracep->declBit(c+222,"SocTop rvcpu1 id3 inst_or", false,-1);
        tracep->declBit(c+223,"SocTop rvcpu1 id3 inst_and", false,-1);
        tracep->declBit(c+224,"SocTop rvcpu1 id3 inst_div", false,-1);
        tracep->declBit(c+225,"SocTop rvcpu1 id3 inst_divu", false,-1);
        tracep->declBit(c+226,"SocTop rvcpu1 id3 inst_mul", false,-1);
        tracep->declBit(c+227,"SocTop rvcpu1 id3 inst_mulh", false,-1);
        tracep->declBit(c+228,"SocTop rvcpu1 id3 inst_mulhsu", false,-1);
        tracep->declBit(c+229,"SocTop rvcpu1 id3 inst_mulhu", false,-1);
        tracep->declBit(c+230,"SocTop rvcpu1 id3 inst_rem", false,-1);
        tracep->declBit(c+231,"SocTop rvcpu1 id3 inst_remu", false,-1);
        tracep->declBit(c+232,"SocTop rvcpu1 id3 inst_addw", false,-1);
        tracep->declBit(c+233,"SocTop rvcpu1 id3 inst_subw", false,-1);
        tracep->declBit(c+234,"SocTop rvcpu1 id3 inst_sllw", false,-1);
        tracep->declBit(c+235,"SocTop rvcpu1 id3 inst_srlw", false,-1);
        tracep->declBit(c+236,"SocTop rvcpu1 id3 inst_sraw", false,-1);
        tracep->declBit(c+237,"SocTop rvcpu1 id3 inst_divuw", false,-1);
        tracep->declBit(c+238,"SocTop rvcpu1 id3 inst_divw", false,-1);
        tracep->declBit(c+239,"SocTop rvcpu1 id3 inst_mulw", false,-1);
        tracep->declBit(c+240,"SocTop rvcpu1 id3 inst_remuw", false,-1);
        tracep->declBit(c+241,"SocTop rvcpu1 id3 inst_remw", false,-1);
        tracep->declBit(c+369,"SocTop rvcpu1 id3 inst_beq", false,-1);
        tracep->declBit(c+370,"SocTop rvcpu1 id3 inst_ben", false,-1);
        tracep->declBit(c+371,"SocTop rvcpu1 id3 inst_blt", false,-1);
        tracep->declBit(c+372,"SocTop rvcpu1 id3 inst_bge", false,-1);
        tracep->declBit(c+373,"SocTop rvcpu1 id3 inst_bltu", false,-1);
        tracep->declBit(c+374,"SocTop rvcpu1 id3 inst_bgeu", false,-1);
        tracep->declBit(c+242,"SocTop rvcpu1 id3 inst_csrrw", false,-1);
        tracep->declBit(c+243,"SocTop rvcpu1 id3 inst_csrrs", false,-1);
        tracep->declBit(c+244,"SocTop rvcpu1 id3 inst_csrrc", false,-1);
        tracep->declBit(c+245,"SocTop rvcpu1 id3 inst_csrrwi", false,-1);
        tracep->declBit(c+375,"SocTop rvcpu1 id3 inst_csrrsi", false,-1);
        tracep->declBit(c+376,"SocTop rvcpu1 id3 inst_csrrci", false,-1);
        tracep->declBit(c+246,"SocTop rvcpu1 id3 inst_csr_rs1", false,-1);
        tracep->declBit(c+245,"SocTop rvcpu1 id3 inst_csr_imm", false,-1);
        tracep->declBit(c+377,"SocTop rvcpu1 id3 inst_ecall", false,-1);
        tracep->declBit(c+247,"SocTop rvcpu1 id3 inst_ebreak", false,-1);
        tracep->declBit(c+378,"SocTop rvcpu1 id3 inst_mret", false,-1);
        tracep->declBit(c+813,"SocTop rvcpu1 id3 op1_loda_relate", false,-1);
        tracep->declBit(c+814,"SocTop rvcpu1 id3 op2_loda_relate", false,-1);
        tracep->declBit(c+248,"SocTop rvcpu1 id3 ex_op1", false,-1);
        tracep->declBit(c+249,"SocTop rvcpu1 id3 mem_op1", false,-1);
        tracep->declBit(c+379,"SocTop rvcpu1 id3 ex_op2", false,-1);
        tracep->declBit(c+380,"SocTop rvcpu1 id3 mem_op2", false,-1);
        tracep->declBit(c+381,"SocTop rvcpu1 id3 wb_op1", false,-1);
        tracep->declQuad(c+382,"SocTop rvcpu1 id3 jalr_pc_temp", false,-1, 63,0);
        tracep->declBit(c+384,"SocTop rvcpu1 id3 predict_success", false,-1);
        tracep->declBit(c+764,"SocTop rvcpu1 id_ex4 clk", false,-1);
        tracep->declBit(c+765,"SocTop rvcpu1 id_ex4 rst", false,-1);
        tracep->declBit(c+426,"SocTop rvcpu1 id_ex4 id_ex_bubble", false,-1);
        tracep->declBus(c+187,"SocTop rvcpu1 id_ex4 stall_ctrl", false,-1, 4,0);
        tracep->declBus(c+807,"SocTop rvcpu1 id_ex4 id_inst", false,-1, 31,0);
        tracep->declQuad(c+798,"SocTop rvcpu1 id_ex4 id_pc", false,-1, 63,0);
        tracep->declBus(c+180,"SocTop rvcpu1 id_ex4 id_inst_type", false,-1, 7,0);
        tracep->declBus(c+181,"SocTop rvcpu1 id_ex4 id_inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+182,"SocTop rvcpu1 id_ex4 id_op1", false,-1, 63,0);
        tracep->declQuad(c+796,"SocTop rvcpu1 id_ex4 id_op2", false,-1, 63,0);
        tracep->declBit(c+184,"SocTop rvcpu1 id_ex4 id_rd_ena", false,-1);
        tracep->declBus(c+357,"SocTop rvcpu1 id_ex4 id_rd_addr", false,-1, 4,0);
        tracep->declBus(c+358,"SocTop rvcpu1 id_ex4 id_addr_offset", false,-1, 11,0);
        tracep->declBus(c+800,"SocTop rvcpu1 id_ex4 id_ls_sel", false,-1, 2,0);
        tracep->declBus(c+460,"SocTop rvcpu1 id_ex4 ex_inst", false,-1, 31,0);
        tracep->declQuad(c+442,"SocTop rvcpu1 id_ex4 ex_pc", false,-1, 63,0);
        tracep->declBus(c+444,"SocTop rvcpu1 id_ex4 ex_inst_type", false,-1, 7,0);
        tracep->declBus(c+445,"SocTop rvcpu1 id_ex4 ex_inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+446,"SocTop rvcpu1 id_ex4 ex_op1", false,-1, 63,0);
        tracep->declQuad(c+448,"SocTop rvcpu1 id_ex4 ex_op2", false,-1, 63,0);
        tracep->declBit(c+450,"SocTop rvcpu1 id_ex4 ex_rd_ena", false,-1);
        tracep->declBus(c+427,"SocTop rvcpu1 id_ex4 ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+451,"SocTop rvcpu1 id_ex4 ex_addr_offset", false,-1, 11,0);
        tracep->declBus(c+430,"SocTop rvcpu1 id_ex4 ex_ls_sel", false,-1, 2,0);
        tracep->declBit(c+764,"SocTop rvcpu1 ex5 clk", false,-1);
        tracep->declBit(c+765,"SocTop rvcpu1 ex5 rst", false,-1);
        tracep->declQuad(c+442,"SocTop rvcpu1 ex5 pc_i", false,-1, 63,0);
        tracep->declBus(c+460,"SocTop rvcpu1 ex5 id_ex_inst", false,-1, 31,0);
        tracep->declBus(c+444,"SocTop rvcpu1 ex5 inst_type_i", false,-1, 7,0);
        tracep->declBus(c+445,"SocTop rvcpu1 ex5 inst_opcode_i", false,-1, 7,0);
        tracep->declQuad(c+446,"SocTop rvcpu1 ex5 op1_i", false,-1, 63,0);
        tracep->declQuad(c+448,"SocTop rvcpu1 ex5 op2_i", false,-1, 63,0);
        tracep->declBit(c+450,"SocTop rvcpu1 ex5 rd_ena_i", false,-1);
        tracep->declBus(c+427,"SocTop rvcpu1 ex5 rd_addr_i", false,-1, 4,0);
        tracep->declBus(c+430,"SocTop rvcpu1 ex5 ls_sel_i", false,-1, 2,0);
        tracep->declBus(c+451,"SocTop rvcpu1 ex5 addr_offsel_i", false,-1, 11,0);
        tracep->declBus(c+429,"SocTop rvcpu1 ex5 inst_type_o", false,-1, 7,0);
        tracep->declBit(c+428,"SocTop rvcpu1 ex5 rd_ena_o", false,-1);
        tracep->declBus(c+427,"SocTop rvcpu1 ex5 rd_addr_o", false,-1, 4,0);
        tracep->declQuad(c+173,"SocTop rvcpu1 ex5 rd_data_o", false,-1, 63,0);
        tracep->declQuad(c+805,"SocTop rvcpu1 ex5 ex_pc_o", false,-1, 63,0);
        tracep->declBus(c+808,"SocTop rvcpu1 ex5 ex_inst_o", false,-1, 31,0);
        tracep->declBus(c+430,"SocTop rvcpu1 ex5 ls_sel_o", false,-1, 2,0);
        tracep->declQuad(c+431,"SocTop rvcpu1 ex5 ls_addr_o", false,-1, 63,0);
        tracep->declBit(c+426,"SocTop rvcpu1 ex5 ex_flush", false,-1);
        tracep->declBit(c+426,"SocTop rvcpu1 ex5 branch_pc_ena", false,-1);
        tracep->declQuad(c+433,"SocTop rvcpu1 ex5 branch_pc", false,-1, 63,0);
        tracep->declBit(c+435,"SocTop rvcpu1 ex5 ex_stall_req", false,-1);
        tracep->declBit(c+403,"SocTop rvcpu1 ex5 timer_intr", false,-1);
        tracep->declBit(c+250,"SocTop rvcpu1 ex5 ex_stall", false,-1);
        tracep->declQuad(c+251,"SocTop rvcpu1 ex5 exe_res", false,-1, 63,0);
        tracep->declQuad(c+477,"SocTop rvcpu1 ex5 op2_i_mux", false,-1, 63,0);
        tracep->declQuad(c+479,"SocTop rvcpu1 ex5 op1_sub_op2", false,-1, 63,0);
        tracep->declQuad(c+481,"SocTop rvcpu1 ex5 op1_add_op2", false,-1, 63,0);
        tracep->declQuad(c+483,"SocTop rvcpu1 ex5 op1_addw_op2", false,-1, 63,0);
        tracep->declBit(c+485,"SocTop rvcpu1 ex5 op1_ls_op2", false,-1);
        tracep->declQuad(c+486,"SocTop rvcpu1 ex5 shift_res", false,-1, 63,0);
        tracep->declBus(c+488,"SocTop rvcpu1 ex5 op1_sllw_op2", false,-1, 31,0);
        tracep->declQuad(c+489,"SocTop rvcpu1 ex5 sllw_res", false,-1, 63,0);
        tracep->declBus(c+491,"SocTop rvcpu1 ex5 op1_srlw_op2", false,-1, 31,0);
        tracep->declQuad(c+492,"SocTop rvcpu1 ex5 srlw_res", false,-1, 63,0);
        tracep->declBus(c+494,"SocTop rvcpu1 ex5 op1_sraw_op2", false,-1, 31,0);
        tracep->declQuad(c+495,"SocTop rvcpu1 ex5 sraw_res", false,-1, 63,0);
        tracep->declBus(c+497,"SocTop rvcpu1 ex5 op1_subw_op2", false,-1, 31,0);
        tracep->declQuad(c+498,"SocTop rvcpu1 ex5 subw_res", false,-1, 63,0);
        tracep->declQuad(c+500,"SocTop rvcpu1 ex5 upper_imm", false,-1, 63,0);
        tracep->declBit(c+764,"SocTop rvcpu1 ex5 clk_in", false,-1);
        tracep->declQuad(c+502,"SocTop rvcpu1 ex5 mul_data", false,-1, 63,0);
        tracep->declBit(c+504,"SocTop rvcpu1 ex5 mul_finish_sign", false,-1);
        tracep->declBit(c+505,"SocTop rvcpu1 ex5 mul_ready", false,-1);
        tracep->declQuad(c+506,"SocTop rvcpu1 ex5 divrem_data", false,-1, 63,0);
        tracep->declBit(c+508,"SocTop rvcpu1 ex5 dr_finish_sign", false,-1);
        tracep->declBit(c+509,"SocTop rvcpu1 ex5 dr_ready", false,-1);
        tracep->declQuad(c+510,"SocTop rvcpu1 ex5 op1_divdata", false,-1, 63,0);
        tracep->declQuad(c+512,"SocTop rvcpu1 ex5 op2_divdata", false,-1, 63,0);
        tracep->declBit(c+435,"SocTop rvcpu1 ex5 mul_div_req", false,-1);
        tracep->declBit(c+514,"SocTop rvcpu1 ex5 ex_flush_branch", false,-1);
        tracep->declBit(c+515,"SocTop rvcpu1 ex5 tmr_trap_ena", false,-1);
        tracep->declBus(c+516,"SocTop rvcpu1 ex5 csr_idx", false,-1, 11,0);
        tracep->declQuad(c+517,"SocTop rvcpu1 ex5 read_csr_data", false,-1, 63,0);
        tracep->declBit(c+519,"SocTop rvcpu1 ex5 trap_ena", false,-1);
        tracep->declBit(c+520,"SocTop rvcpu1 ex5 ecall_trap_ena", false,-1);
        tracep->declBit(c+521,"SocTop rvcpu1 ex5 cmt_mret_ena", false,-1);
        tracep->declBit(c+522,"SocTop rvcpu1 ex5 csr_wr_en", false,-1);
        tracep->declBit(c+523,"SocTop rvcpu1 ex5 csr_rd_en", false,-1);
        tracep->declQuad(c+524,"SocTop rvcpu1 ex5 wbck_csr_data", false,-1, 63,0);
        tracep->declQuad(c+526,"SocTop rvcpu1 ex5 trap_mcause_value", false,-1, 63,0);
        tracep->declQuad(c+528,"SocTop rvcpu1 ex5 mask_set_res", false,-1, 63,0);
        tracep->declQuad(c+530,"SocTop rvcpu1 ex5 mask_clear_res", false,-1, 63,0);
        tracep->declBit(c+764,"SocTop rvcpu1 ex5 multiplier1 clk", false,-1);
        tracep->declBit(c+765,"SocTop rvcpu1 ex5 multiplier1 rst", false,-1);
        tracep->declBit(c+505,"SocTop rvcpu1 ex5 multiplier1 mult_ready", false,-1);
        tracep->declBus(c+445,"SocTop rvcpu1 ex5 multiplier1 inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+446,"SocTop rvcpu1 ex5 multiplier1 mult_op1", false,-1, 63,0);
        tracep->declQuad(c+448,"SocTop rvcpu1 ex5 multiplier1 mult_op2", false,-1, 63,0);
        tracep->declQuad(c+502,"SocTop rvcpu1 ex5 multiplier1 product_val", false,-1, 63,0);
        tracep->declBit(c+504,"SocTop rvcpu1 ex5 multiplier1 mult_finish", false,-1);
        tracep->declBit(c+532,"SocTop rvcpu1 ex5 multiplier1 mult_valid", false,-1);
        tracep->declBit(c+533,"SocTop rvcpu1 ex5 multiplier1 op1_signbit", false,-1);
        tracep->declBit(c+534,"SocTop rvcpu1 ex5 multiplier1 op2_signbit", false,-1);
        tracep->declQuad(c+535,"SocTop rvcpu1 ex5 multiplier1 op1_absolute", false,-1, 63,0);
        tracep->declQuad(c+537,"SocTop rvcpu1 ex5 multiplier1 op2_absolute", false,-1, 63,0);
        tracep->declArray(c+539,"SocTop rvcpu1 ex5 multiplier1 multiplcand", false,-1, 127,0);
        tracep->declQuad(c+543,"SocTop rvcpu1 ex5 multiplier1 multipler", false,-1, 63,0);
        tracep->declArray(c+545,"SocTop rvcpu1 ex5 multiplier1 product_lins", false,-1, 127,0);
        tracep->declArray(c+549,"SocTop rvcpu1 ex5 multiplier1 product_temp", false,-1, 127,0);
        tracep->declBit(c+553,"SocTop rvcpu1 ex5 multiplier1 product_signbit", false,-1);
        tracep->declBit(c+764,"SocTop rvcpu1 ex5 divider2 clk", false,-1);
        tracep->declBit(c+765,"SocTop rvcpu1 ex5 divider2 rst", false,-1);
        tracep->declQuad(c+510,"SocTop rvcpu1 ex5 divider2 divisor", false,-1, 63,0);
        tracep->declQuad(c+512,"SocTop rvcpu1 ex5 divider2 dividend", false,-1, 63,0);
        tracep->declBus(c+445,"SocTop rvcpu1 ex5 divider2 inst_opcode", false,-1, 7,0);
        tracep->declBit(c+509,"SocTop rvcpu1 ex5 divider2 div_ready", false,-1);
        tracep->declQuad(c+506,"SocTop rvcpu1 ex5 divider2 div_rem_data", false,-1, 63,0);
        tracep->declBit(c+508,"SocTop rvcpu1 ex5 divider2 div_finish", false,-1);
        tracep->declQuad(c+554,"SocTop rvcpu1 ex5 divider2 shang_data", false,-1, 63,0);
        tracep->declQuad(c+556,"SocTop rvcpu1 ex5 divider2 yushu_data", false,-1, 63,0);
        tracep->declBit(c+508,"SocTop rvcpu1 ex5 divider2 finish_sign", false,-1);
        tracep->declBit(c+558,"SocTop rvcpu1 ex5 divider2 op1_signbit", false,-1);
        tracep->declBit(c+559,"SocTop rvcpu1 ex5 divider2 op2_signbit", false,-1);
        tracep->declQuad(c+560,"SocTop rvcpu1 ex5 divider2 op1_absolute", false,-1, 63,0);
        tracep->declQuad(c+562,"SocTop rvcpu1 ex5 divider2 op2_absolute", false,-1, 63,0);
        tracep->declBit(c+564,"SocTop rvcpu1 ex5 divider2 div_rem_signbit", false,-1);
        tracep->declQuad(c+815,"SocTop rvcpu1 ex5 divider2 tempa", false,-1, 63,0);
        tracep->declQuad(c+253,"SocTop rvcpu1 ex5 divider2 tempb", false,-1, 63,0);
        tracep->declBus(c+565,"SocTop rvcpu1 ex5 divider2 counter", false,-1, 7,0);
        tracep->declArray(c+566,"SocTop rvcpu1 ex5 divider2 temp_a", false,-1, 127,0);
        tracep->declArray(c+570,"SocTop rvcpu1 ex5 divider2 temp_b", false,-1, 127,0);
        tracep->declQuad(c+574,"SocTop rvcpu1 ex5 divider2 fan_data", false,-1, 63,0);
        tracep->declBit(c+764,"SocTop rvcpu1 ex5 csr0 clk", false,-1);
        tracep->declBit(c+765,"SocTop rvcpu1 ex5 csr0 rst", false,-1);
        tracep->declQuad(c+442,"SocTop rvcpu1 ex5 csr0 pc_i", false,-1, 63,0);
        tracep->declBit(c+522,"SocTop rvcpu1 ex5 csr0 csr_wr_en", false,-1);
        tracep->declBit(c+523,"SocTop rvcpu1 ex5 csr0 csr_rd_en", false,-1);
        tracep->declBus(c+516,"SocTop rvcpu1 ex5 csr0 csr_idx", false,-1, 11,0);
        tracep->declBit(c+521,"SocTop rvcpu1 ex5 csr0 cmt_mret_ena", false,-1);
        tracep->declBit(c+520,"SocTop rvcpu1 ex5 csr0 ecall_trap_ena", false,-1);
        tracep->declQuad(c+526,"SocTop rvcpu1 ex5 csr0 trap_mcause_value", false,-1, 63,0);
        tracep->declBit(c+403,"SocTop rvcpu1 ex5 csr0 tmr_intr_ena", false,-1);
        tracep->declBit(c+515,"SocTop rvcpu1 ex5 csr0 tmr_trap_ena", false,-1);
        tracep->declQuad(c+517,"SocTop rvcpu1 ex5 csr0 read_csr_data", false,-1, 63,0);
        tracep->declQuad(c+524,"SocTop rvcpu1 ex5 csr0 wbck_csr_data", false,-1, 63,0);
        tracep->declBit(c+250,"SocTop rvcpu1 ex5 csr0 ex_stall", false,-1);
        tracep->declBit(c+576,"SocTop rvcpu1 ex5 csr0 sel_mcycle", false,-1);
        tracep->declBit(c+577,"SocTop rvcpu1 ex5 csr0 rd_mcycle", false,-1);
        tracep->declBit(c+578,"SocTop rvcpu1 ex5 csr0 wr_mcycle", false,-1);
        tracep->declQuad(c+579,"SocTop rvcpu1 ex5 csr0 csr_mcycle", false,-1, 63,0);
        tracep->declBit(c+581,"SocTop rvcpu1 ex5 csr0 sel_mstatus", false,-1);
        tracep->declBit(c+582,"SocTop rvcpu1 ex5 csr0 rd_mstatus", false,-1);
        tracep->declBit(c+583,"SocTop rvcpu1 ex5 csr0 wr_mstatus", false,-1);
        tracep->declBit(c+584,"SocTop rvcpu1 ex5 csr0 mstatus_mpie_ena", false,-1);
        tracep->declBit(c+585,"SocTop rvcpu1 ex5 csr0 mstatus_mpie_nxt", false,-1);
        tracep->declBit(c+586,"SocTop rvcpu1 ex5 csr0 csr_mstatus_mpie", false,-1);
        tracep->declBit(c+584,"SocTop rvcpu1 ex5 csr0 mstatus_mie_ena", false,-1);
        tracep->declBit(c+587,"SocTop rvcpu1 ex5 csr0 mstatus_mie_nxt", false,-1);
        tracep->declBit(c+588,"SocTop rvcpu1 ex5 csr0 csr_mstatus_mie", false,-1);
        tracep->declBit(c+584,"SocTop rvcpu1 ex5 csr0 mstatus_mpp_ena", false,-1);
        tracep->declBus(c+589,"SocTop rvcpu1 ex5 csr0 mstatus_mpp_nxt", false,-1, 1,0);
        tracep->declBus(c+590,"SocTop rvcpu1 ex5 csr0 csr_mstatus_mpp", false,-1, 1,0);
        tracep->declBus(c+837,"SocTop rvcpu1 ex5 csr0 csr_mstatus_xs", false,-1, 1,0);
        tracep->declBus(c+591,"SocTop rvcpu1 ex5 csr0 csr_mstatus_fs", false,-1, 1,0);
        tracep->declBit(c+592,"SocTop rvcpu1 ex5 csr0 csr_mstatus_sd", false,-1);
        tracep->declQuad(c+593,"SocTop rvcpu1 ex5 csr0 csr_mstatus", false,-1, 63,0);
        tracep->declBit(c+595,"SocTop rvcpu1 ex5 csr0 sel_mtvec", false,-1);
        tracep->declBit(c+596,"SocTop rvcpu1 ex5 csr0 rd_mtvec", false,-1);
        tracep->declBit(c+597,"SocTop rvcpu1 ex5 csr0 wr_mtvec", false,-1);
        tracep->declQuad(c+598,"SocTop rvcpu1 ex5 csr0 csr_mtvec_base", false,-1, 63,2);
        tracep->declBus(c+837,"SocTop rvcpu1 ex5 csr0 csr_mtvec_mode", false,-1, 1,0);
        tracep->declQuad(c+600,"SocTop rvcpu1 ex5 csr0 csr_mtvec", false,-1, 63,0);
        tracep->declBit(c+602,"SocTop rvcpu1 ex5 csr0 sel_mepc", false,-1);
        tracep->declBit(c+603,"SocTop rvcpu1 ex5 csr0 rd_mepc", false,-1);
        tracep->declBit(c+604,"SocTop rvcpu1 ex5 csr0 wr_mepc", false,-1);
        tracep->declQuad(c+605,"SocTop rvcpu1 ex5 csr0 csr_mepc", false,-1, 63,0);
        tracep->declBit(c+607,"SocTop rvcpu1 ex5 csr0 sel_mcause", false,-1);
        tracep->declBit(c+608,"SocTop rvcpu1 ex5 csr0 rd_mcause", false,-1);
        tracep->declBit(c+609,"SocTop rvcpu1 ex5 csr0 wr_mcause", false,-1);
        tracep->declBit(c+610,"SocTop rvcpu1 ex5 csr0 csr_mcause_ena", false,-1);
        tracep->declQuad(c+611,"SocTop rvcpu1 ex5 csr0 csr_mcause_nxt", false,-1, 63,0);
        tracep->declQuad(c+613,"SocTop rvcpu1 ex5 csr0 csr_mcause", false,-1, 63,0);
        tracep->declBit(c+615,"SocTop rvcpu1 ex5 csr0 sle_mie", false,-1);
        tracep->declBit(c+616,"SocTop rvcpu1 ex5 csr0 rd_mie", false,-1);
        tracep->declBit(c+617,"SocTop rvcpu1 ex5 csr0 wr_mie", false,-1);
        tracep->declBit(c+618,"SocTop rvcpu1 ex5 csr0 csr_mie_mtie", false,-1);
        tracep->declQuad(c+619,"SocTop rvcpu1 ex5 csr0 csr_mie", false,-1, 63,0);
        tracep->declBit(c+621,"SocTop rvcpu1 ex5 csr0 sel_mip", false,-1);
        tracep->declBit(c+622,"SocTop rvcpu1 ex5 csr0 rd_mip", false,-1);
        tracep->declBit(c+623,"SocTop rvcpu1 ex5 csr0 csr_mip_mtip", false,-1);
        tracep->declQuad(c+624,"SocTop rvcpu1 ex5 csr0 csr_mip", false,-1, 63,0);
        tracep->declBit(c+626,"SocTop rvcpu1 ex5 csr0 sel_mscratch", false,-1);
        tracep->declBit(c+627,"SocTop rvcpu1 ex5 csr0 rd_mscrstch", false,-1);
        tracep->declBit(c+628,"SocTop rvcpu1 ex5 csr0 wr_mscrstch", false,-1);
        tracep->declQuad(c+629,"SocTop rvcpu1 ex5 csr0 csr_mscrstch", false,-1, 63,0);
        tracep->declBit(c+764,"SocTop rvcpu1 ex_mem6 clk", false,-1);
        tracep->declBit(c+765,"SocTop rvcpu1 ex_mem6 rst", false,-1);
        tracep->declQuad(c+805,"SocTop rvcpu1 ex_mem6 ex_mem_pc_i", false,-1, 63,0);
        tracep->declBus(c+808,"SocTop rvcpu1 ex_mem6 ex_mem_inst_i", false,-1, 31,0);
        tracep->declBus(c+187,"SocTop rvcpu1 ex_mem6 stall_ctrl", false,-1, 4,0);
        tracep->declBus(c+429,"SocTop rvcpu1 ex_mem6 ex_inst_type", false,-1, 7,0);
        tracep->declBit(c+428,"SocTop rvcpu1 ex_mem6 ex_rd_ena", false,-1);
        tracep->declQuad(c+173,"SocTop rvcpu1 ex_mem6 ex_rd_data", false,-1, 63,0);
        tracep->declBus(c+427,"SocTop rvcpu1 ex_mem6 ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+430,"SocTop rvcpu1 ex_mem6 ex_ls_sel", false,-1, 2,0);
        tracep->declQuad(c+431,"SocTop rvcpu1 ex_mem6 ex_ls_addr", false,-1, 63,0);
        tracep->declBus(c+452,"SocTop rvcpu1 ex_mem6 mem_inst_type", false,-1, 7,0);
        tracep->declBit(c+437,"SocTop rvcpu1 ex_mem6 mem_rd_ena", false,-1);
        tracep->declQuad(c+453,"SocTop rvcpu1 ex_mem6 mem_rd_data", false,-1, 63,0);
        tracep->declBus(c+436,"SocTop rvcpu1 ex_mem6 mem_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+458,"SocTop rvcpu1 ex_mem6 ex_mem_pc_o", false,-1, 63,0);
        tracep->declBus(c+461,"SocTop rvcpu1 ex_mem6 ex_mem_inst_o", false,-1, 31,0);
        tracep->declBus(c+455,"SocTop rvcpu1 ex_mem6 mem_ls_sel", false,-1, 2,0);
        tracep->declQuad(c+456,"SocTop rvcpu1 ex_mem6 mem_ls_addr", false,-1, 63,0);
        tracep->declBit(c+765,"SocTop rvcpu1 mem7 rst", false,-1);
        tracep->declBus(c+452,"SocTop rvcpu1 mem7 inst_type_i", false,-1, 7,0);
        tracep->declBit(c+437,"SocTop rvcpu1 mem7 rd_ena_i", false,-1);
        tracep->declQuad(c+453,"SocTop rvcpu1 mem7 rd_data_i", false,-1, 63,0);
        tracep->declBus(c+436,"SocTop rvcpu1 mem7 rd_addr_i", false,-1, 4,0);
        tracep->declQuad(c+458,"SocTop rvcpu1 mem7 mem_pc_i", false,-1, 63,0);
        tracep->declBus(c+461,"SocTop rvcpu1 mem7 mem_inst_i", false,-1, 31,0);
        tracep->declQuad(c+456,"SocTop rvcpu1 mem7 ls_addr_i", false,-1, 63,0);
        tracep->declBus(c+455,"SocTop rvcpu1 mem7 ls_sel_i", false,-1, 2,0);
        tracep->declQuad(c+3,"SocTop rvcpu1 mem7 data_addr_o", false,-1, 63,0);
        tracep->declBus(c+5,"SocTop rvcpu1 mem7 wmask_o", false,-1, 7,0);
        tracep->declQuad(c+17,"SocTop rvcpu1 mem7 data_i", false,-1, 63,0);
        tracep->declQuad(c+6,"SocTop rvcpu1 mem7 data_o", false,-1, 63,0);
        tracep->declBit(c+8,"SocTop rvcpu1 mem7 we", false,-1);
        tracep->declBit(c+9,"SocTop rvcpu1 mem7 re", false,-1);
        tracep->declBit(c+345,"SocTop rvcpu1 mem7 mem_finish", false,-1);
        tracep->declBit(c+437,"SocTop rvcpu1 mem7 rd_ena_o", false,-1);
        tracep->declQuad(c+188,"SocTop rvcpu1 mem7 rd_data_o", false,-1, 63,0);
        tracep->declBus(c+436,"SocTop rvcpu1 mem7 rd_addr_o", false,-1, 4,0);
        tracep->declQuad(c+191,"SocTop rvcpu1 mem7 mem_pc_o", false,-1, 63,0);
        tracep->declBus(c+193,"SocTop rvcpu1 mem7 mem_inst_o", false,-1, 31,0);
        tracep->declBit(c+190,"SocTop rvcpu1 mem7 mem_stall_req", false,-1);
        tracep->declQuad(c+385,"SocTop rvcpu1 mem7 load_data", false,-1, 63,0);
        tracep->declBus(c+631,"SocTop rvcpu1 mem7 byte_sel", false,-1, 2,0);
        tracep->declBus(c+632,"SocTop rvcpu1 mem7 half_byte_sel", false,-1, 1,0);
        tracep->declBit(c+633,"SocTop rvcpu1 mem7 word_sel", false,-1);
        tracep->declBus(c+255,"SocTop rvcpu1 mem7 data_byte", false,-1, 7,0);
        tracep->declBus(c+256,"SocTop rvcpu1 mem7 data_half_byte", false,-1, 15,0);
        tracep->declBus(c+257,"SocTop rvcpu1 mem7 data_word", false,-1, 31,0);
        tracep->declQuad(c+258,"SocTop rvcpu1 mem7 store_data", false,-1, 63,0);
        tracep->declBus(c+260,"SocTop rvcpu1 mem7 store_mask", false,-1, 7,0);
        tracep->declQuad(c+817,"SocTop rvcpu1 mem7 sb_data", false,-1, 63,0);
        tracep->declQuad(c+819,"SocTop rvcpu1 mem7 sh_data", false,-1, 63,0);
        tracep->declQuad(c+821,"SocTop rvcpu1 mem7 sw_data", false,-1, 63,0);
        tracep->declBus(c+823,"SocTop rvcpu1 mem7 sb_mask", false,-1, 7,0);
        tracep->declBus(c+824,"SocTop rvcpu1 mem7 sh_mask", false,-1, 7,0);
        tracep->declBus(c+825,"SocTop rvcpu1 mem7 sw_mask", false,-1, 7,0);
        tracep->declBit(c+764,"SocTop rvcpu1 mem_wb8 clk", false,-1);
        tracep->declBit(c+765,"SocTop rvcpu1 mem_wb8 rst", false,-1);
        tracep->declQuad(c+191,"SocTop rvcpu1 mem_wb8 wb_pc_i", false,-1, 63,0);
        tracep->declBus(c+193,"SocTop rvcpu1 mem_wb8 wb_inst_i", false,-1, 31,0);
        tracep->declBus(c+187,"SocTop rvcpu1 mem_wb8 stall_ctrl", false,-1, 4,0);
        tracep->declQuad(c+188,"SocTop rvcpu1 mem_wb8 mem_rd_data", false,-1, 63,0);
        tracep->declBus(c+436,"SocTop rvcpu1 mem_wb8 mem_rd_addr", false,-1, 4,0);
        tracep->declBit(c+437,"SocTop rvcpu1 mem_wb8 mem_rd_ena", false,-1);
        tracep->declQuad(c+440,"SocTop rvcpu1 mem_wb8 wb_rd_data", false,-1, 63,0);
        tracep->declBus(c+438,"SocTop rvcpu1 mem_wb8 wb_rd_addr", false,-1, 4,0);
        tracep->declBit(c+439,"SocTop rvcpu1 mem_wb8 wb_rd_ena", false,-1);
        tracep->declQuad(c+634,"SocTop rvcpu1 mem_wb8 wb_pc_o", false,-1, 63,0);
        tracep->declBus(c+636,"SocTop rvcpu1 mem_wb8 wb_inst_o", false,-1, 31,0);
        tracep->declQuad(c+637,"SocTop rvcpu1 mem_wb8 pc_data1", false,-1, 63,0);
        tracep->declBit(c+639,"SocTop rvcpu1 mem_wb8 difftest_exyn", false,-1);
        tracep->declBit(c+640,"SocTop rvcpu1 mem_wb8 teap_yn", false,-1);
        tracep->declQuad(c+641,"SocTop rvcpu1 mem_wb8 trap_code", false,-1, 63,0);
        tracep->declBit(c+765,"SocTop rvcpu1 ctrl9 rst", false,-1);
        tracep->declBit(c+795,"SocTop rvcpu1 ctrl9 if_stall_req", false,-1);
        tracep->declBit(c+179,"SocTop rvcpu1 ctrl9 id_stall_req", false,-1);
        tracep->declBit(c+435,"SocTop rvcpu1 ctrl9 ex_stall_req", false,-1);
        tracep->declBit(c+190,"SocTop rvcpu1 ctrl9 mem_stall_req", false,-1);
        tracep->declBus(c+187,"SocTop rvcpu1 ctrl9 stall_ctrl", false,-1, 4,0);
        tracep->declBit(c+764,"SocTop rvcpu1 regfile10 clk", false,-1);
        tracep->declBit(c+765,"SocTop rvcpu1 regfile10 rst", false,-1);
        tracep->declBus(c+438,"SocTop rvcpu1 regfile10 waddr", false,-1, 4,0);
        tracep->declQuad(c+440,"SocTop rvcpu1 regfile10 wdata", false,-1, 63,0);
        tracep->declBit(c+439,"SocTop rvcpu1 regfile10 we", false,-1);
        tracep->declBus(c+175,"SocTop rvcpu1 regfile10 raddr1", false,-1, 4,0);
        tracep->declQuad(c+801,"SocTop rvcpu1 regfile10 rdata1", false,-1, 63,0);
        tracep->declBit(c+176,"SocTop rvcpu1 regfile10 re1", false,-1);
        tracep->declBus(c+177,"SocTop rvcpu1 regfile10 raddr2", false,-1, 4,0);
        tracep->declQuad(c+803,"SocTop rvcpu1 regfile10 rdata2", false,-1, 63,0);
        tracep->declBit(c+178,"SocTop rvcpu1 regfile10 re2", false,-1);
        tracep->declBit(c+792,"SocTop rvcpu1 regfile10 x1_read_ena", false,-1);
        tracep->declQuad(c+790,"SocTop rvcpu1 regfile10 x1_data", false,-1, 63,0);
        tracep->declBus(c+172,"SocTop rvcpu1 regfile10 x1_addr", false,-1, 4,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+643+i*2,"SocTop rvcpu1 regfile10 regs", true,(i+0), 63,0);}}
        tracep->declBus(c+707,"SocTop rvcpu1 regfile10 i", false,-1, 31,0);
        tracep->declBit(c+764,"SocTop i_cache2 clk", false,-1);
        tracep->declBit(c+765,"SocTop i_cache2 rst", false,-1);
        tracep->declQuad(c+401,"SocTop i_cache2 inst_addr", false,-1, 63,0);
        tracep->declBit(c+776,"SocTop i_cache2 inst_ready", false,-1);
        tracep->declBit(c+10,"SocTop i_cache2 core_stall", false,-1);
        tracep->declBus(c+11,"SocTop i_cache2 inst_data", false,-1, 31,0);
        tracep->declBit(c+12,"SocTop i_cache2 inst_valid", false,-1);
        tracep->declBit(c+13,"SocTop i_cache2 cache_read_ena", false,-1);
        tracep->declBit(c+16,"SocTop i_cache2 cache_read_resp", false,-1);
        tracep->declQuad(c+14,"SocTop i_cache2 cache_addr", false,-1, 63,0);
        tracep->declQuad(c+25,"SocTop i_cache2 cache_in_data", false,-1, 63,0);
        tracep->declBit(c+27,"SocTop i_cache2 cache_in_valid", false,-1);
        tracep->declBit(c+28,"SocTop i_cache2 arb_working_ti", false,-1);
        tracep->declBit(c+261,"SocTop i_cache2 icache_if_shankhand", false,-1);
        tracep->declQuad(c+708,"SocTop i_cache2 icache_tag", false,-1, 54,0);
        tracep->declBus(c+710,"SocTop i_cache2 icache_index", false,-1, 5,0);
        tracep->declBus(c+711,"SocTop i_cache2 state_inst", false,-1, 5,0);
        tracep->declBus(c+262,"SocTop i_cache2 state_inst_nxt", false,-1, 5,0);
        tracep->declBit(c+712,"SocTop i_cache2 read_ok_", false,-1);
        tracep->declBit(c+713,"SocTop i_cache2 read_ok", false,-1);
        tracep->declBit(c+263,"SocTop i_cache2 inst_hit_ok", false,-1);
        tracep->declQuad(c+264,"SocTop i_cache2 miss_data", false,-1, 63,0);
        tracep->declBit(c+266,"SocTop i_cache2 miss_ena_o", false,-1);
        tracep->declBit(c+267,"SocTop i_cache2 miss_ena_t", false,-1);
        tracep->declBit(c+268,"SocTop i_cache2 write_i_ok", false,-1);
        tracep->declQuad(c+714,"SocTop i_cache2 i_tag_data1", false,-1, 54,0);
        tracep->declBit(c+716,"SocTop i_cache2 i_tag_user1", false,-1);
        tracep->declQuad(c+717,"SocTop i_cache2 i_tag_data2", false,-1, 54,0);
        tracep->declBit(c+719,"SocTop i_cache2 i_tag_user2", false,-1);
        tracep->declQuad(c+720,"SocTop i_cache2 inst_out_1", false,-1, 63,0);
        tracep->declQuad(c+722,"SocTop i_cache2 inst_out_2", false,-1, 63,0);
        tracep->declBus(c+724,"SocTop i_cache2 i", false,-1, 31,0);
        tracep->declBit(c+764,"SocTop i_cache2 u_tag01 clk", false,-1);
        tracep->declBus(c+710,"SocTop i_cache2 u_tag01 addr_i", false,-1, 5,0);
        tracep->declQuad(c+725,"SocTop i_cache2 u_tag01 data_i", false,-1, 55,0);
        tracep->declBit(c+266,"SocTop i_cache2 u_tag01 write_ena", false,-1);
        tracep->declQuad(c+714,"SocTop i_cache2 u_tag01 tag_data", false,-1, 54,0);
        tracep->declBit(c+716,"SocTop i_cache2 u_tag01 tag_valid", false,-1);
        tracep->declQuad(c+714,"SocTop i_cache2 u_tag01 out_data", false,-1, 54,0);
        tracep->declBit(c+716,"SocTop i_cache2 u_tag01 out_vaild", false,-1);
        tracep->declBit(c+764,"SocTop i_cache2 u_tag02 clk", false,-1);
        tracep->declBus(c+710,"SocTop i_cache2 u_tag02 addr_i", false,-1, 5,0);
        tracep->declQuad(c+725,"SocTop i_cache2 u_tag02 data_i", false,-1, 55,0);
        tracep->declBit(c+267,"SocTop i_cache2 u_tag02 write_ena", false,-1);
        tracep->declQuad(c+717,"SocTop i_cache2 u_tag02 tag_data", false,-1, 54,0);
        tracep->declBit(c+719,"SocTop i_cache2 u_tag02 tag_valid", false,-1);
        tracep->declQuad(c+717,"SocTop i_cache2 u_tag02 out_data", false,-1, 54,0);
        tracep->declBit(c+719,"SocTop i_cache2 u_tag02 out_vaild", false,-1);
        tracep->declBit(c+764,"SocTop i_cache2 u_data01 clk", false,-1);
        tracep->declBus(c+710,"SocTop i_cache2 u_data01 addr_i", false,-1, 5,0);
        tracep->declQuad(c+264,"SocTop i_cache2 u_data01 data_i", false,-1, 63,0);
        tracep->declBit(c+266,"SocTop i_cache2 u_data01 write_ena", false,-1);
        tracep->declQuad(c+720,"SocTop i_cache2 u_data01 data_o", false,-1, 63,0);
        tracep->declQuad(c+720,"SocTop i_cache2 u_data01 out_data", false,-1, 63,0);
        tracep->declBit(c+764,"SocTop i_cache2 u_data02 clk", false,-1);
        tracep->declBus(c+710,"SocTop i_cache2 u_data02 addr_i", false,-1, 5,0);
        tracep->declQuad(c+264,"SocTop i_cache2 u_data02 data_i", false,-1, 63,0);
        tracep->declBit(c+267,"SocTop i_cache2 u_data02 write_ena", false,-1);
        tracep->declQuad(c+722,"SocTop i_cache2 u_data02 data_o", false,-1, 63,0);
        tracep->declQuad(c+722,"SocTop i_cache2 u_data02 out_data", false,-1, 63,0);
        tracep->declBit(c+764,"SocTop d_cache3 clk", false,-1);
        tracep->declBit(c+765,"SocTop d_cache3 rst", false,-1);
        tracep->declQuad(c+3,"SocTop d_cache3 mem_addr_i", false,-1, 63,0);
        tracep->declQuad(c+6,"SocTop d_cache3 mem_data_i", false,-1, 63,0);
        tracep->declBus(c+5,"SocTop d_cache3 mem_strb_i", false,-1, 7,0);
        tracep->declBit(c+9,"SocTop d_cache3 mem_read_valid", false,-1);
        tracep->declBit(c+8,"SocTop d_cache3 mem_write_valid", false,-1);
        tracep->declQuad(c+17,"SocTop d_cache3 mem_data_out", false,-1, 63,0);
        tracep->declBit(c+345,"SocTop d_cache3 mem_data_ready", false,-1);
        tracep->declQuad(c+22,"SocTop d_cache3 in_dcache_data", false,-1, 63,0);
        tracep->declBit(c+24,"SocTop d_cache3 in_dcache_ready", false,-1);
        tracep->declBit(c+348,"SocTop d_cache3 out_dcache_resp", false,-1);
        tracep->declQuad(c+19,"SocTop d_cache3 out_dcache_addr", false,-1, 63,0);
        tracep->declQuad(c+346,"SocTop d_cache3 out_dcache_data", false,-1, 63,0);
        tracep->declBus(c+21,"SocTop d_cache3 out_dcache_type", false,-1, 3,0);
        tracep->declBit(c+387,"SocTop d_cache3 dcache_read_shankhand", false,-1);
        tracep->declBit(c+388,"SocTop d_cache3 dcache_write_shankhand", false,-1);
        tracep->declBit(c+727,"SocTop d_cache3 dcache_read_ready", false,-1);
        tracep->declBit(c+728,"SocTop d_cache3 dcache_write_ready", false,-1);
        tracep->declQuad(c+269,"SocTop d_cache3 dcache_tag", false,-1, 54,0);
        tracep->declBus(c+271,"SocTop d_cache3 dcache_index", false,-1, 5,0);
        tracep->declBus(c+729,"SocTop d_cache3 state_dread", false,-1, 5,0);
        tracep->declBus(c+272,"SocTop d_cache3 state_dread_nxt", false,-1, 5,0);
        tracep->declBit(c+730,"SocTop d_cache3 read_ok_", false,-1);
        tracep->declBit(c+731,"SocTop d_cache3 read_ok", false,-1);
        tracep->declBit(c+273,"SocTop d_cache3 mem_hit_ok", false,-1);
        tracep->declBit(c+389,"SocTop d_cache3 hit_data_ready", false,-1);
        tracep->declBit(c+274,"SocTop d_cache3 dirty_ok", false,-1);
        tracep->declQuad(c+275,"SocTop d_cache3 dirty_out_addr", false,-1, 63,0);
        tracep->declQuad(c+277,"SocTop d_cache3 dirty_out_data", false,-1, 63,0);
        tracep->declBus(c+279,"SocTop d_cache3 dirty_out_type", false,-1, 3,0);
        tracep->declBit(c+280,"SocTop d_cache3 missr_i_ok", false,-1);
        tracep->declBus(c+281,"SocTop d_cache3 missr_out_type", false,-1, 3,0);
        tracep->declQuad(c+282,"SocTop d_cache3 missr_out_addr", false,-1, 63,0);
        tracep->declBus(c+284,"SocTop d_cache3 missr_data_ena1", false,-1, 7,0);
        tracep->declBit(c+285,"SocTop d_cache3 missr_tag_ena1", false,-1);
        tracep->declBus(c+286,"SocTop d_cache3 missr_data_ena2", false,-1, 7,0);
        tracep->declBit(c+287,"SocTop d_cache3 missr_tag_ena2", false,-1);
        tracep->declBit(c+288,"SocTop d_cache3 missr_out_resp", false,-1);
        tracep->declBus(c+732,"SocTop d_cache3 state_dwrite", false,-1, 5,0);
        tracep->declBus(c+289,"SocTop d_cache3 state_dwrite_nxt", false,-1, 5,0);
        tracep->declBit(c+733,"SocTop d_cache3 read_w_ok_", false,-1);
        tracep->declBit(c+734,"SocTop d_cache3 read_w_ok", false,-1);
        tracep->declBit(c+735,"SocTop d_cache3 memw_hit_ok", false,-1);
        tracep->declBus(c+290,"SocTop d_cache3 hitw_data_strb1", false,-1, 7,0);
        tracep->declBus(c+291,"SocTop d_cache3 hitw_data_strb2", false,-1, 7,0);
        tracep->declBit(c+390,"SocTop d_cache3 hitw_data_ready", false,-1);
        tracep->declBit(c+292,"SocTop d_cache3 dirtyw_ok", false,-1);
        tracep->declQuad(c+293,"SocTop d_cache3 dirtyw_out_addr", false,-1, 63,0);
        tracep->declQuad(c+295,"SocTop d_cache3 dirtyw_out_data", false,-1, 63,0);
        tracep->declBus(c+297,"SocTop d_cache3 dirtyw_out_type", false,-1, 3,0);
        tracep->declBit(c+298,"SocTop d_cache3 missw_i_ok", false,-1);
        tracep->declBus(c+299,"SocTop d_cache3 missw_out_type", false,-1, 3,0);
        tracep->declQuad(c+300,"SocTop d_cache3 missw_out_addr", false,-1, 63,0);
        tracep->declBus(c+302,"SocTop d_cache3 missw_data_ena1", false,-1, 7,0);
        tracep->declBit(c+303,"SocTop d_cache3 missw_tag_ena1", false,-1);
        tracep->declBus(c+304,"SocTop d_cache3 missw_data_ena2", false,-1, 7,0);
        tracep->declBit(c+305,"SocTop d_cache3 missw_tag_ena2", false,-1);
        tracep->declBit(c+306,"SocTop d_cache3 missw_out_resp", false,-1);
        tracep->declBus(c+736,"SocTop d_cache3 i", false,-1, 31,0);
        tracep->declBit(c+307,"SocTop d_cache3 tag_ena1", false,-1);
        tracep->declQuad(c+737,"SocTop d_cache3 tag_data1", false,-1, 54,0);
        tracep->declBit(c+739,"SocTop d_cache3 tag_user1", false,-1);
        tracep->declBit(c+308,"SocTop d_cache3 tag_ena2", false,-1);
        tracep->declQuad(c+740,"SocTop d_cache3 tag_data2", false,-1, 54,0);
        tracep->declBit(c+742,"SocTop d_cache3 tag_user2", false,-1);
        tracep->declQuad(c+743,"SocTop d_cache3 out_data1", false,-1, 63,0);
        tracep->declBus(c+309,"SocTop d_cache3 data_ena1", false,-1, 7,0);
        tracep->declQuad(c+310,"SocTop d_cache3 in_rem_data1", false,-1, 63,0);
        tracep->declQuad(c+745,"SocTop d_cache3 out_data2", false,-1, 63,0);
        tracep->declBus(c+312,"SocTop d_cache3 data_ena2", false,-1, 7,0);
        tracep->declQuad(c+310,"SocTop d_cache3 in_ram_data2", false,-1, 63,0);
        tracep->declBit(c+764,"SocTop d_cache3 u_tag0 clk", false,-1);
        tracep->declBus(c+271,"SocTop d_cache3 u_tag0 addr_i", false,-1, 5,0);
        tracep->declQuad(c+313,"SocTop d_cache3 u_tag0 data_i", false,-1, 55,0);
        tracep->declBit(c+307,"SocTop d_cache3 u_tag0 write_ena", false,-1);
        tracep->declQuad(c+737,"SocTop d_cache3 u_tag0 tag_data", false,-1, 54,0);
        tracep->declBit(c+739,"SocTop d_cache3 u_tag0 tag_valid", false,-1);
        tracep->declQuad(c+737,"SocTop d_cache3 u_tag0 out_data", false,-1, 54,0);
        tracep->declBit(c+739,"SocTop d_cache3 u_tag0 out_vaild", false,-1);
        tracep->declBit(c+764,"SocTop d_cache3 u_tag1 clk", false,-1);
        tracep->declBus(c+271,"SocTop d_cache3 u_tag1 addr_i", false,-1, 5,0);
        tracep->declQuad(c+313,"SocTop d_cache3 u_tag1 data_i", false,-1, 55,0);
        tracep->declBit(c+308,"SocTop d_cache3 u_tag1 write_ena", false,-1);
        tracep->declQuad(c+740,"SocTop d_cache3 u_tag1 tag_data", false,-1, 54,0);
        tracep->declBit(c+742,"SocTop d_cache3 u_tag1 tag_valid", false,-1);
        tracep->declQuad(c+740,"SocTop d_cache3 u_tag1 out_data", false,-1, 54,0);
        tracep->declBit(c+742,"SocTop d_cache3 u_tag1 out_vaild", false,-1);
        tracep->declBit(c+764,"SocTop d_cache3 u_data0 clk", false,-1);
        tracep->declBus(c+271,"SocTop d_cache3 u_data0 addr_i", false,-1, 5,0);
        tracep->declQuad(c+310,"SocTop d_cache3 u_data0 data_i", false,-1, 63,0);
        tracep->declBus(c+309,"SocTop d_cache3 u_data0 write_ena", false,-1, 7,0);
        tracep->declQuad(c+743,"SocTop d_cache3 u_data0 data_o", false,-1, 63,0);
        tracep->declQuad(c+743,"SocTop d_cache3 u_data0 out_data", false,-1, 63,0);
        tracep->declBit(c+764,"SocTop d_cache3 u_data1 clk", false,-1);
        tracep->declBus(c+271,"SocTop d_cache3 u_data1 addr_i", false,-1, 5,0);
        tracep->declQuad(c+310,"SocTop d_cache3 u_data1 data_i", false,-1, 63,0);
        tracep->declBus(c+312,"SocTop d_cache3 u_data1 write_ena", false,-1, 7,0);
        tracep->declQuad(c+745,"SocTop d_cache3 u_data1 data_o", false,-1, 63,0);
        tracep->declQuad(c+745,"SocTop d_cache3 u_data1 out_data", false,-1, 63,0);
        tracep->declBit(c+764,"SocTop arbitrate4 clk", false,-1);
        tracep->declBit(c+765,"SocTop arbitrate4 rst", false,-1);
        tracep->declQuad(c+19,"SocTop arbitrate4 d_cache_addr", false,-1, 63,0);
        tracep->declQuad(c+346,"SocTop arbitrate4 d_cache_data", false,-1, 63,0);
        tracep->declBus(c+21,"SocTop arbitrate4 d_cache_type", false,-1, 3,0);
        tracep->declBit(c+348,"SocTop arbitrate4 d_cache_resp", false,-1);
        tracep->declQuad(c+22,"SocTop arbitrate4 d_cache_data_o", false,-1, 63,0);
        tracep->declBit(c+24,"SocTop arbitrate4 d_cache_valid_", false,-1);
        tracep->declQuad(c+14,"SocTop arbitrate4 i_cache_addr", false,-1, 63,0);
        tracep->declBit(c+13,"SocTop arbitrate4 i_cache_ena", false,-1);
        tracep->declBit(c+16,"SocTop arbitrate4 i_cache_resp", false,-1);
        tracep->declQuad(c+25,"SocTop arbitrate4 i_cache_data", false,-1, 63,0);
        tracep->declBit(c+27,"SocTop arbitrate4 i_cache_valid_", false,-1);
        tracep->declBit(c+28,"SocTop arbitrate4 arb_working_ti", false,-1);
        tracep->declBus(c+829,"SocTop arbitrate4 axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+349,"SocTop arbitrate4 axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+830,"SocTop arbitrate4 axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+831,"SocTop arbitrate4 axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+832,"SocTop arbitrate4 axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+833,"SocTop arbitrate4 axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+834,"SocTop arbitrate4 axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+829,"SocTop arbitrate4 axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+29,"SocTop arbitrate4 axi_aw_valid", false,-1);
        tracep->declBit(c+777,"SocTop arbitrate4 axi_aw_ready", false,-1);
        tracep->declQuad(c+351,"SocTop arbitrate4 axi_w_data", false,-1, 63,0);
        tracep->declBus(c+835,"SocTop arbitrate4 axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+836,"SocTop arbitrate4 axi_w_last", false,-1);
        tracep->declBit(c+404,"SocTop arbitrate4 axi_w_valid", false,-1);
        tracep->declBit(c+778,"SocTop arbitrate4 axi_w_ready", false,-1);
        tracep->declBus(c+779,"SocTop arbitrate4 axi_b_id", false,-1, 3,0);
        tracep->declBus(c+780,"SocTop arbitrate4 axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+781,"SocTop arbitrate4 axi_b_valid", false,-1);
        tracep->declBit(c+836,"SocTop arbitrate4 axi_b_ready", false,-1);
        tracep->declBus(c+30,"SocTop arbitrate4 axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+31,"SocTop arbitrate4 axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+830,"SocTop arbitrate4 axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+831,"SocTop arbitrate4 axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+832,"SocTop arbitrate4 axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+833,"SocTop arbitrate4 axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+834,"SocTop arbitrate4 axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+829,"SocTop arbitrate4 axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+33,"SocTop arbitrate4 axi_ar_valid", false,-1);
        tracep->declBit(c+34,"SocTop arbitrate4 axi_ar_ready", false,-1);
        tracep->declBus(c+35,"SocTop arbitrate4 axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+36,"SocTop arbitrate4 axi_r_data", false,-1, 63,0);
        tracep->declBus(c+38,"SocTop arbitrate4 axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+39,"SocTop arbitrate4 axi_r_last", false,-1);
        tracep->declBit(c+39,"SocTop arbitrate4 axi_r_valid", false,-1);
        tracep->declBit(c+836,"SocTop arbitrate4 axi_r_ready", false,-1);
        tracep->declBit(c+826,"SocTop arbitrate4 aw_shankhand", false,-1);
        tracep->declBit(c+827,"SocTop arbitrate4 w_shankhand", false,-1);
        tracep->declBit(c+315,"SocTop arbitrate4 b_shankhand", false,-1);
        tracep->declBus(c+747,"SocTop arbitrate4 transfor_state", false,-1, 1,0);
        tracep->declBus(c+316,"SocTop arbitrate4 transfor_state_nex", false,-1, 1,0);
        tracep->declBit(c+317,"SocTop arbitrate4 w_dcache_valid", false,-1);
        tracep->declBit(c+39,"SocTop arbitrate4 r_shankhand", false,-1);
        tracep->declBit(c+318,"SocTop arbitrate4 d_cache_ar_shankhand", false,-1);
        tracep->declBit(c+319,"SocTop arbitrate4 i_cache_ar_shankhand", false,-1);
        tracep->declBit(c+320,"SocTop arbitrate4 d_cache_r_shankhand", false,-1);
        tracep->declBit(c+321,"SocTop arbitrate4 i_cache_r_shankhand", false,-1);
        tracep->declBit(c+322,"SocTop arbitrate4 i_cache_valid", false,-1);
        tracep->declBit(c+323,"SocTop arbitrate4 d_cache_valid", false,-1);
        tracep->declBus(c+748,"SocTop arbitrate4 i_cache_state", false,-1, 1,0);
        tracep->declBus(c+324,"SocTop arbitrate4 i_cache_state_nxt", false,-1, 1,0);
        tracep->declBus(c+749,"SocTop arbitrate4 d_cache_state", false,-1, 1,0);
        tracep->declBus(c+325,"SocTop arbitrate4 d_cache_state_nxt", false,-1, 1,0);
        tracep->declBit(c+326,"SocTop arbitrate4 r_dcache_valid", false,-1);
        tracep->declBit(c+764,"SocTop axi_mnq4 clk", false,-1);
        tracep->declBit(c+765,"SocTop axi_mnq4 rst", false,-1);
        tracep->declBus(c+81,"SocTop axi_mnq4 s_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+82,"SocTop axi_mnq4 s_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+84,"SocTop axi_mnq4 s_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+85,"SocTop axi_mnq4 s_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+86,"SocTop axi_mnq4 s_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+87,"SocTop axi_mnq4 s_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+88,"SocTop axi_mnq4 s_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+89,"SocTop axi_mnq4 s_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+91,"SocTop axi_mnq4 s_axi_aw_valid", false,-1);
        tracep->declBit(c+90,"SocTop axi_mnq4 s_axi_aw_ready", false,-1);
        tracep->declQuad(c+92,"SocTop axi_mnq4 s_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+94,"SocTop axi_mnq4 s_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+95,"SocTop axi_mnq4 s_axi_w_last", false,-1);
        tracep->declBit(c+96,"SocTop axi_mnq4 s_axi_w_valid", false,-1);
        tracep->declBit(c+97,"SocTop axi_mnq4 s_axi_w_ready", false,-1);
        tracep->declBus(c+81,"SocTop axi_mnq4 s_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+837,"SocTop axi_mnq4 s_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+409,"SocTop axi_mnq4 s_axi_b_valid", false,-1);
        tracep->declBit(c+98,"SocTop axi_mnq4 s_axi_b_ready", false,-1);
        tracep->declBus(c+99,"SocTop axi_mnq4 s_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+100,"SocTop axi_mnq4 s_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+102,"SocTop axi_mnq4 s_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+103,"SocTop axi_mnq4 s_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+104,"SocTop axi_mnq4 s_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+105,"SocTop axi_mnq4 s_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+106,"SocTop axi_mnq4 s_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+107,"SocTop axi_mnq4 s_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+108,"SocTop axi_mnq4 s_axi_ar_valid", false,-1);
        tracep->declBit(c+410,"SocTop axi_mnq4 s_axi_ar_ready", false,-1);
        tracep->declBus(c+411,"SocTop axi_mnq4 s_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+788,"SocTop axi_mnq4 s_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+837,"SocTop axi_mnq4 s_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+412,"SocTop axi_mnq4 s_axi_r_last", false,-1);
        tracep->declBit(c+413,"SocTop axi_mnq4 s_axi_r_valid", false,-1);
        tracep->declBit(c+109,"SocTop axi_mnq4 s_axi_r_ready", false,-1);
        tracep->declBit(c+169,"SocTop axi_mnq4 mnq_read_ena", false,-1);
        tracep->declQuad(c+170,"SocTop axi_mnq4 addr_oup", false,-1, 63,0);
        tracep->declQuad(c+769,"SocTop axi_mnq4 mnq_data_in", false,-1, 63,0);
        tracep->declBit(c+409,"SocTop axi_mnq4 write_ram_ena", false,-1);
        tracep->declQuad(c+421,"SocTop axi_mnq4 write_ram_data", false,-1, 63,0);
        tracep->declQuad(c+419,"SocTop axi_mnq4 write_ram_addr", false,-1, 63,0);
        tracep->declBit(c+327,"SocTop axi_mnq4 aw_shankhand", false,-1);
        tracep->declBit(c+328,"SocTop axi_mnq4 w_shankhand", false,-1);
        tracep->declBit(c+391,"SocTop axi_mnq4 b_shankhand", false,-1);
        tracep->declBus(c+750,"SocTop axi_mnq4 s_write_state", false,-1, 1,0);
        tracep->declBus(c+329,"SocTop axi_mnq4 s_write_state_nxt", false,-1, 1,0);
        tracep->declBit(c+330,"SocTop axi_mnq4 ar_shankhand", false,-1);
        tracep->declBit(c+392,"SocTop axi_mnq4 r_shankhand", false,-1);
        tracep->declBus(c+751,"SocTop axi_mnq4 s_read_state", false,-1, 1,0);
        tracep->declBus(c+331,"SocTop axi_mnq4 s_read_state_nxt", false,-1, 1,0);
        tracep->declQuad(c+752,"SocTop axi_mnq4 write_data_reg", false,-1, 63,0);
        tracep->declQuad(c+754,"SocTop axi_mnq4 write_addr_reg", false,-1, 63,0);
        tracep->declBus(c+756,"SocTop axi_mnq4 r_s_axi_ar_id", false,-1, 3,0);
        tracep->declBit(c+764,"SocTop soc_axi45 clk", false,-1);
        tracep->declBit(c+765,"SocTop soc_axi45 rst", false,-1);
        tracep->declBus(c+850,"SocTop soc_axi45 prot_chose_write", false,-1, 2,0);
        tracep->declBus(c+850,"SocTop soc_axi45 prot_chose_read", false,-1, 2,0);
        tracep->declBus(c+829,"SocTop soc_axi45 master_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+349,"SocTop soc_axi45 master_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+830,"SocTop soc_axi45 master_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+831,"SocTop soc_axi45 master_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+832,"SocTop soc_axi45 master_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+833,"SocTop soc_axi45 master_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+834,"SocTop soc_axi45 master_axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+829,"SocTop soc_axi45 master_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+29,"SocTop soc_axi45 master_axi_aw_valid", false,-1);
        tracep->declBit(c+777,"SocTop soc_axi45 master_axi_aw_ready", false,-1);
        tracep->declQuad(c+351,"SocTop soc_axi45 master_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+835,"SocTop soc_axi45 master_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+836,"SocTop soc_axi45 master_axi_w_last", false,-1);
        tracep->declBit(c+404,"SocTop soc_axi45 master_axi_w_valid", false,-1);
        tracep->declBit(c+778,"SocTop soc_axi45 master_axi_w_ready", false,-1);
        tracep->declBus(c+779,"SocTop soc_axi45 master_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+780,"SocTop soc_axi45 master_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+836,"SocTop soc_axi45 master_axi_b_ready", false,-1);
        tracep->declBit(c+781,"SocTop soc_axi45 master_axi_b_valid", false,-1);
        tracep->declBus(c+30,"SocTop soc_axi45 master_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+31,"SocTop soc_axi45 master_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+830,"SocTop soc_axi45 master_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+831,"SocTop soc_axi45 master_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+832,"SocTop soc_axi45 master_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+833,"SocTop soc_axi45 master_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+834,"SocTop soc_axi45 master_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+829,"SocTop soc_axi45 master_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+33,"SocTop soc_axi45 master_axi_ar_valid", false,-1);
        tracep->declBit(c+34,"SocTop soc_axi45 master_axi_ar_ready", false,-1);
        tracep->declBus(c+35,"SocTop soc_axi45 master_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+36,"SocTop soc_axi45 master_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+38,"SocTop soc_axi45 master_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+39,"SocTop soc_axi45 master_axi_r_last", false,-1);
        tracep->declBit(c+39,"SocTop soc_axi45 master_axi_r_valid", false,-1);
        tracep->declBit(c+836,"SocTop soc_axi45 master_axi_r_ready", false,-1);
        tracep->declBus(c+40,"SocTop soc_axi45 slave_axi_aw_id", false,-1, 11,0);
        tracep->declArray(c+41,"SocTop soc_axi45 slave_axi_aw_addr", false,-1, 191,0);
        tracep->declBus(c+47,"SocTop soc_axi45 slave_axi_aw_len", false,-1, 23,0);
        tracep->declBus(c+48,"SocTop soc_axi45 slave_axi_aw_size", false,-1, 8,0);
        tracep->declBus(c+49,"SocTop soc_axi45 slave_axi_aw_burst", false,-1, 5,0);
        tracep->declBus(c+50,"SocTop soc_axi45 slave_axi_aw_cache", false,-1, 11,0);
        tracep->declBus(c+51,"SocTop soc_axi45 slave_axi_aw_prot", false,-1, 8,0);
        tracep->declBus(c+52,"SocTop soc_axi45 slave_axi_aw_qos", false,-1, 11,0);
        tracep->declBus(c+53,"SocTop soc_axi45 slave_axi_aw_valid", false,-1, 2,0);
        tracep->declBus(c+54,"SocTop soc_axi45 slave_axi_aw_ready", false,-1, 2,0);
        tracep->declArray(c+55,"SocTop soc_axi45 slave_axi_w_data", false,-1, 191,0);
        tracep->declBus(c+61,"SocTop soc_axi45 slave_axi_w_strb", false,-1, 23,0);
        tracep->declBus(c+62,"SocTop soc_axi45 slave_axi_w_last", false,-1, 2,0);
        tracep->declBus(c+63,"SocTop soc_axi45 slave_axi_w_valid", false,-1, 2,0);
        tracep->declBus(c+64,"SocTop soc_axi45 slave_axi_w_ready", false,-1, 2,0);
        tracep->declBus(c+353,"SocTop soc_axi45 slave_axi_b_id", false,-1, 11,0);
        tracep->declBus(c+405,"SocTop soc_axi45 slave_axi_b_resp", false,-1, 5,0);
        tracep->declBus(c+406,"SocTop soc_axi45 slave_axi_b_valid", false,-1, 2,0);
        tracep->declBus(c+65,"SocTop soc_axi45 slave_axi_b_ready", false,-1, 2,0);
        tracep->declBus(c+66,"SocTop soc_axi45 slave_axi_ar_id", false,-1, 11,0);
        tracep->declArray(c+67,"SocTop soc_axi45 slave_axi_ar_addr", false,-1, 191,0);
        tracep->declBus(c+73,"SocTop soc_axi45 slave_axi_ar_len", false,-1, 23,0);
        tracep->declBus(c+74,"SocTop soc_axi45 slave_axi_ar_size", false,-1, 8,0);
        tracep->declBus(c+75,"SocTop soc_axi45 slave_axi_ar_burst", false,-1, 5,0);
        tracep->declBus(c+76,"SocTop soc_axi45 slave_axi_ar_cache", false,-1, 11,0);
        tracep->declBus(c+77,"SocTop soc_axi45 slave_axi_ar_prot", false,-1, 8,0);
        tracep->declBus(c+78,"SocTop soc_axi45 slave_axi_ar_qos", false,-1, 11,0);
        tracep->declBus(c+79,"SocTop soc_axi45 slave_axi_ar_valid", false,-1, 2,0);
        tracep->declBus(c+354,"SocTop soc_axi45 slave_axi_ar_ready", false,-1, 2,0);
        tracep->declBus(c+355,"SocTop soc_axi45 slave_axi_r_id", false,-1, 11,0);
        tracep->declArray(c+782,"SocTop soc_axi45 slave_axi_r_data", false,-1, 191,0);
        tracep->declBus(c+1,"SocTop soc_axi45 slave_axi_r_resp", false,-1, 5,0);
        tracep->declBus(c+407,"SocTop soc_axi45 slave_axi_r_last", false,-1, 2,0);
        tracep->declBus(c+408,"SocTop soc_axi45 slave_axi_r_valid", false,-1, 2,0);
        tracep->declBus(c+80,"SocTop soc_axi45 slave_axi_r_ready", false,-1, 2,0);
        tracep->declBus(c+828,"SocTop soc_axi45 SLAVE_NUM", false,-1, 31,0);
        tracep->declBit(c+764,"SocTop time_axi6 clk", false,-1);
        tracep->declBit(c+765,"SocTop time_axi6 rst", false,-1);
        tracep->declBit(c+403,"SocTop time_axi6 time_interrupt", false,-1);
        tracep->declBus(c+110,"SocTop time_axi6 time_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+111,"SocTop time_axi6 time_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+113,"SocTop time_axi6 time_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+114,"SocTop time_axi6 time_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+115,"SocTop time_axi6 time_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+116,"SocTop time_axi6 time_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+117,"SocTop time_axi6 time_axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+118,"SocTop time_axi6 time_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+120,"SocTop time_axi6 time_axi_aw_valid", false,-1);
        tracep->declBit(c+119,"SocTop time_axi6 time_axi_aw_ready", false,-1);
        tracep->declQuad(c+121,"SocTop time_axi6 time_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+123,"SocTop time_axi6 time_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+124,"SocTop time_axi6 time_axi_w_last", false,-1);
        tracep->declBit(c+125,"SocTop time_axi6 time_axi_w_valid", false,-1);
        tracep->declBit(c+126,"SocTop time_axi6 time_axi_w_ready", false,-1);
        tracep->declBus(c+414,"SocTop time_axi6 time_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+415,"SocTop time_axi6 time_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+416,"SocTop time_axi6 time_axi_b_valid", false,-1);
        tracep->declBit(c+127,"SocTop time_axi6 time_axi_b_ready", false,-1);
        tracep->declBus(c+128,"SocTop time_axi6 time_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+129,"SocTop time_axi6 time_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+131,"SocTop time_axi6 time_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+132,"SocTop time_axi6 time_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+133,"SocTop time_axi6 time_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+134,"SocTop time_axi6 time_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+135,"SocTop time_axi6 time_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+136,"SocTop time_axi6 time_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+137,"SocTop time_axi6 time_axi_ar_valid", false,-1);
        tracep->declBit(c+138,"SocTop time_axi6 time_axi_ar_ready", false,-1);
        tracep->declBus(c+356,"SocTop time_axi6 time_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+139,"SocTop time_axi6 time_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+2,"SocTop time_axi6 time_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+417,"SocTop time_axi6 time_axi_r_last", false,-1);
        tracep->declBit(c+418,"SocTop time_axi6 time_axi_r_valid", false,-1);
        tracep->declBit(c+141,"SocTop time_axi6 time_axi_r_ready", false,-1);
        tracep->declQuad(c+757,"SocTop time_axi6 car_mtime_l", false,-1, 63,0);
        tracep->declQuad(c+759,"SocTop time_axi6 csr_mtime_h", false,-1, 63,0);
        tracep->declQuad(c+393,"SocTop time_axi6 csr_mtime_l_nxt", false,-1, 63,0);
        tracep->declQuad(c+395,"SocTop time_axi6 csr_mtime_h_nxt", false,-1, 63,0);
        tracep->declBit(c+332,"SocTop time_axi6 csr_mtime_l_r_ena", false,-1);
        tracep->declBit(c+333,"SocTop time_axi6 csr_mtime_h_r_ena", false,-1);
        tracep->declBit(c+334,"SocTop time_axi6 csr_mtime_l_w_ena", false,-1);
        tracep->declBit(c+335,"SocTop time_axi6 csr_mtime_h_w_ena", false,-1);
        tracep->declQuad(c+336,"SocTop time_axi6 wmask", false,-1, 63,0);
        tracep->declBit(c+338,"SocTop time_axi6 aw_shakehand", false,-1);
        tracep->declBit(c+339,"SocTop time_axi6 w_shakehand", false,-1);
        tracep->declBit(c+397,"SocTop time_axi6 b_shankhand", false,-1);
        tracep->declBit(c+340,"SocTop time_axi6 mode_right", false,-1);
        tracep->declBus(c+761,"SocTop time_axi6 state_time_m", false,-1, 1,0);
        tracep->declBus(c+341,"SocTop time_axi6 state_time_m_nxt", false,-1, 1,0);
        tracep->declBus(c+762,"SocTop time_axi6 time_reg_id", false,-1, 3,0);
        tracep->declBus(c+415,"SocTop time_axi6 time_reg_resp", false,-1, 1,0);
        tracep->declBit(c+342,"SocTop time_axi6 mode_right_r", false,-1);
        tracep->declBit(c+343,"SocTop time_axi6 ar_shakehand", false,-1);
        tracep->declBit(c+398,"SocTop time_axi6 r_shankhand", false,-1);
        tracep->declQuad(c+399,"SocTop time_axi6 time_csr_link", false,-1, 63,0);
        tracep->declBus(c+763,"SocTop time_axi6 state_time_r", false,-1, 1,0);
        tracep->declBus(c+344,"SocTop time_axi6 state_time_r_nxt", false,-1, 1,0);
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
    VlWide<4>/*127:0*/ __Vtemp46;
    VlWide<6>/*191:0*/ __Vtemp48;
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
        tracep->fullBit(oldp+13,(vlSelf->SocTop__DOT__i_cache_read_ena));
        tracep->fullQData(oldp+14,(vlSelf->SocTop__DOT__i_cache_addr),64);
        tracep->fullBit(oldp+16,(vlSelf->SocTop__DOT__i_caceh_resp));
        tracep->fullQData(oldp+17,(vlSelf->SocTop__DOT__d_cache_data_out),64);
        tracep->fullQData(oldp+19,(vlSelf->SocTop__DOT__d_cache_out_addr),64);
        tracep->fullCData(oldp+21,(vlSelf->SocTop__DOT__d_cache_out_type),4);
        tracep->fullQData(oldp+22,(vlSelf->SocTop__DOT__arbitrate_d_data),64);
        tracep->fullBit(oldp+24,(vlSelf->SocTop__DOT__arbitrate_d_ok));
        tracep->fullQData(oldp+25,(vlSelf->SocTop__DOT__arbitrate_i_data),64);
        tracep->fullBit(oldp+27,(vlSelf->SocTop__DOT__arbitrate_i_ok));
        tracep->fullBit(oldp+28,(vlSelf->SocTop__DOT__arbitrate_ti_sign));
        tracep->fullBit(oldp+29,(vlSelf->SocTop__DOT__t_axi_aw_valid));
        tracep->fullCData(oldp+30,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid)
                                     ? 1U : 0U)),4);
        tracep->fullQData(oldp+31,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid)
                                     ? vlSelf->SocTop__DOT__i_cache_addr
                                     : ((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_valid)
                                         ? vlSelf->SocTop__DOT__d_cache_out_addr
                                         : 0ULL))),64);
        tracep->fullBit(oldp+33,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid) 
                                  | (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_valid))));
        tracep->fullBit(oldp+34,(vlSelf->SocTop__DOT__t_axi_ar_ready));
        tracep->fullCData(oldp+35,(vlSelf->SocTop__DOT__t_axi_r_id),4);
        tracep->fullQData(oldp+36,(vlSelf->SocTop__DOT__t_axi_r_data),64);
        tracep->fullCData(oldp+38,(vlSelf->SocTop__DOT__t_axi_r_resp),2);
        tracep->fullBit(oldp+39,(vlSelf->SocTop__DOT__t_axi_r_valid));
        tracep->fullSData(oldp+40,(vlSelf->SocTop__DOT__add_axi_aw_id),12);
        tracep->fullWData(oldp+41,(vlSelf->SocTop__DOT__add_axi_aw_addr),192);
        tracep->fullIData(oldp+47,(vlSelf->SocTop__DOT__add_axi_aw_len),24);
        tracep->fullSData(oldp+48,(vlSelf->SocTop__DOT__add_axi_aw_size),9);
        tracep->fullCData(oldp+49,(vlSelf->SocTop__DOT__add_axi_aw_burst),6);
        tracep->fullSData(oldp+50,(vlSelf->SocTop__DOT__add_axi_aw_cache),12);
        tracep->fullSData(oldp+51,(vlSelf->SocTop__DOT__add_axi_aw_prot),9);
        tracep->fullSData(oldp+52,(vlSelf->SocTop__DOT__add_axi_aw_qos),12);
        tracep->fullCData(oldp+53,(vlSelf->SocTop__DOT__add_axi_aw_valid),3);
        tracep->fullCData(oldp+54,((((IData)(vlSelf->SocTop__DOT__soc_axi_aw_ready) 
                                     << 2U) | (((IData)(vlSelf->SocTop__DOT__tim_axi_aw_ready) 
                                                << 1U) 
                                               | (IData)(vlSelf->SocTop__DOT__io_axi_aw_ready)))),3);
        tracep->fullWData(oldp+55,(vlSelf->SocTop__DOT__add_axi_w_data),192);
        tracep->fullIData(oldp+61,(vlSelf->SocTop__DOT__add_axi_w_strb),24);
        tracep->fullCData(oldp+62,(vlSelf->SocTop__DOT__add_axi_w_last),3);
        tracep->fullCData(oldp+63,(vlSelf->SocTop__DOT__add_axi_w_valid),3);
        tracep->fullCData(oldp+64,((((IData)(vlSelf->SocTop__DOT__soc_axi_w_ready) 
                                     << 2U) | (((IData)(vlSelf->SocTop__DOT__tim_axi_w_ready) 
                                                << 1U) 
                                               | (IData)(vlSelf->SocTop__DOT__io_axi_w_ready)))),3);
        tracep->fullCData(oldp+65,(vlSelf->SocTop__DOT__add_axi_b_ready),3);
        tracep->fullSData(oldp+66,(vlSelf->SocTop__DOT__add_axi_ar_id),12);
        tracep->fullWData(oldp+67,(vlSelf->SocTop__DOT__add_axi_ar_addr),192);
        tracep->fullIData(oldp+73,(vlSelf->SocTop__DOT__add_axi_ar_len),24);
        tracep->fullSData(oldp+74,(vlSelf->SocTop__DOT__add_axi_ar_size),9);
        tracep->fullCData(oldp+75,(vlSelf->SocTop__DOT__add_axi_ar_burst),6);
        tracep->fullSData(oldp+76,(vlSelf->SocTop__DOT__add_axi_ar_cache),12);
        tracep->fullSData(oldp+77,(vlSelf->SocTop__DOT__add_axi_ar_prot),9);
        tracep->fullSData(oldp+78,(vlSelf->SocTop__DOT__add_axi_ar_qos),12);
        tracep->fullCData(oldp+79,(vlSelf->SocTop__DOT__add_axi_ar_valid),3);
        tracep->fullCData(oldp+80,(vlSelf->SocTop__DOT__add_axi_r_ready),3);
        tracep->fullCData(oldp+81,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_id) 
                                            >> 8U))),4);
        tracep->fullQData(oldp+82,((((QData)((IData)(
                                                     vlSelf->SocTop__DOT__add_axi_aw_addr[5U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SocTop__DOT__add_axi_aw_addr[4U])))),64);
        tracep->fullCData(oldp+84,((0xffU & (vlSelf->SocTop__DOT__add_axi_aw_len 
                                             >> 0x10U))),8);
        tracep->fullCData(oldp+85,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_size) 
                                          >> 6U))),3);
        tracep->fullCData(oldp+86,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_burst) 
                                          >> 4U))),2);
        tracep->fullCData(oldp+87,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_cache) 
                                            >> 8U))),4);
        tracep->fullCData(oldp+88,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_prot) 
                                          >> 6U))),3);
        tracep->fullCData(oldp+89,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_qos) 
                                            >> 8U))),4);
        tracep->fullBit(oldp+90,(vlSelf->SocTop__DOT__soc_axi_aw_ready));
        tracep->fullBit(oldp+91,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                        >> 2U))));
        tracep->fullQData(oldp+92,((((QData)((IData)(
                                                     vlSelf->SocTop__DOT__add_axi_w_data[5U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SocTop__DOT__add_axi_w_data[4U])))),64);
        tracep->fullCData(oldp+94,((0xffU & (vlSelf->SocTop__DOT__add_axi_w_strb 
                                             >> 0x10U))),8);
        tracep->fullBit(oldp+95,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_last) 
                                        >> 2U))));
        tracep->fullBit(oldp+96,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                        >> 2U))));
        tracep->fullBit(oldp+97,(vlSelf->SocTop__DOT__soc_axi_w_ready));
        tracep->fullBit(oldp+98,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                        >> 2U))));
        tracep->fullCData(oldp+99,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                            >> 8U))),4);
        tracep->fullQData(oldp+100,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_ar_addr[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_ar_addr[4U])))),64);
        tracep->fullCData(oldp+102,((0xffU & (vlSelf->SocTop__DOT__add_axi_ar_len 
                                              >> 0x10U))),8);
        tracep->fullCData(oldp+103,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_size) 
                                           >> 6U))),3);
        tracep->fullCData(oldp+104,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_burst) 
                                           >> 4U))),2);
        tracep->fullCData(oldp+105,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_cache) 
                                             >> 8U))),4);
        tracep->fullCData(oldp+106,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_prot) 
                                           >> 6U))),3);
        tracep->fullCData(oldp+107,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_qos) 
                                             >> 8U))),4);
        tracep->fullBit(oldp+108,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                                         >> 2U))));
        tracep->fullBit(oldp+109,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                         >> 2U))));
        tracep->fullCData(oldp+110,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_id) 
                                             >> 4U))),4);
        tracep->fullQData(oldp+111,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))),64);
        tracep->fullCData(oldp+113,((0xffU & (vlSelf->SocTop__DOT__add_axi_aw_len 
                                              >> 8U))),8);
        tracep->fullCData(oldp+114,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_size) 
                                           >> 3U))),3);
        tracep->fullCData(oldp+115,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_burst) 
                                           >> 2U))),2);
        tracep->fullCData(oldp+116,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_cache) 
                                             >> 4U))),4);
        tracep->fullCData(oldp+117,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_prot) 
                                           >> 3U))),3);
        tracep->fullCData(oldp+118,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_qos) 
                                             >> 4U))),4);
        tracep->fullBit(oldp+119,(vlSelf->SocTop__DOT__tim_axi_aw_ready));
        tracep->fullBit(oldp+120,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                         >> 1U))));
        tracep->fullQData(oldp+121,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_w_data[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_w_data[2U])))),64);
        tracep->fullCData(oldp+123,((0xffU & (vlSelf->SocTop__DOT__add_axi_w_strb 
                                              >> 8U))),8);
        tracep->fullBit(oldp+124,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_last) 
                                         >> 1U))));
        tracep->fullBit(oldp+125,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                         >> 1U))));
        tracep->fullBit(oldp+126,(vlSelf->SocTop__DOT__tim_axi_w_ready));
        tracep->fullBit(oldp+127,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                         >> 1U))));
        tracep->fullCData(oldp+128,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                             >> 4U))),4);
        tracep->fullQData(oldp+129,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))),64);
        tracep->fullCData(oldp+131,((0xffU & (vlSelf->SocTop__DOT__add_axi_ar_len 
                                              >> 8U))),8);
        tracep->fullCData(oldp+132,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_size) 
                                           >> 3U))),3);
        tracep->fullCData(oldp+133,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_burst) 
                                           >> 2U))),2);
        tracep->fullCData(oldp+134,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_cache) 
                                             >> 4U))),4);
        tracep->fullCData(oldp+135,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_prot) 
                                           >> 3U))),3);
        tracep->fullCData(oldp+136,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_qos) 
                                             >> 4U))),4);
        tracep->fullBit(oldp+137,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                                         >> 1U))));
        tracep->fullBit(oldp+138,(vlSelf->SocTop__DOT__tim_axi_ar_ready));
        tracep->fullQData(oldp+139,(vlSelf->SocTop__DOT__tim_axi_r_data),64);
        tracep->fullBit(oldp+141,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                         >> 1U))));
        tracep->fullCData(oldp+142,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_id))),4);
        tracep->fullQData(oldp+143,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_aw_addr[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_aw_addr[0U])))),64);
        tracep->fullCData(oldp+145,((0xffU & vlSelf->SocTop__DOT__add_axi_aw_len)),8);
        tracep->fullCData(oldp+146,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_size))),3);
        tracep->fullCData(oldp+147,((3U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_burst))),2);
        tracep->fullCData(oldp+148,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_cache))),4);
        tracep->fullCData(oldp+149,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_prot))),3);
        tracep->fullCData(oldp+150,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_qos))),4);
        tracep->fullBit(oldp+151,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_valid))));
        tracep->fullQData(oldp+152,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_w_data[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_w_data[0U])))),64);
        tracep->fullCData(oldp+154,((0xffU & vlSelf->SocTop__DOT__add_axi_w_strb)),8);
        tracep->fullBit(oldp+155,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_w_last))));
        tracep->fullBit(oldp+156,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_w_valid))));
        tracep->fullBit(oldp+157,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_b_ready))));
        tracep->fullCData(oldp+158,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_id))),4);
        tracep->fullQData(oldp+159,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_ar_addr[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_ar_addr[0U])))),64);
        tracep->fullCData(oldp+161,((0xffU & vlSelf->SocTop__DOT__add_axi_ar_len)),8);
        tracep->fullCData(oldp+162,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_size))),3);
        tracep->fullCData(oldp+163,((3U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_burst))),2);
        tracep->fullCData(oldp+164,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_cache))),4);
        tracep->fullCData(oldp+165,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_prot))),3);
        tracep->fullCData(oldp+166,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_qos))),4);
        tracep->fullBit(oldp+167,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_valid))));
        tracep->fullBit(oldp+168,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_r_ready))));
        tracep->fullBit(oldp+169,(vlSelf->SocTop__DOT__axi_mnq4__DOT__ar_shankhand));
        tracep->fullQData(oldp+170,(((IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__ar_shankhand)
                                      ? (((QData)((IData)(
                                                          vlSelf->SocTop__DOT__add_axi_ar_addr[5U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->SocTop__DOT__add_axi_ar_addr[4U])))
                                      : 0ULL)),64);
        tracep->fullCData(oldp+172,((0x1fU & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                              >> 0xfU))),5);
        tracep->fullQData(oldp+173,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_data),64);
        tracep->fullCData(oldp+175,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1),5);
        tracep->fullBit(oldp+176,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1));
        tracep->fullCData(oldp+177,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2),5);
        tracep->fullBit(oldp+178,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2));
        tracep->fullBit(oldp+179,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ctrl_req));
        tracep->fullCData(oldp+180,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type),8);
        tracep->fullCData(oldp+181,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode),8);
        tracep->fullQData(oldp+182,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op),64);
        tracep->fullBit(oldp+184,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_ena));
        tracep->fullBit(oldp+185,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_pip_jalrena));
        tracep->fullBit(oldp+186,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_if_flush));
        tracep->fullCData(oldp+187,(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl),5);
        tracep->fullQData(oldp+188,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_id_data),64);
        tracep->fullBit(oldp+190,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_ctrl_req));
        tracep->fullQData(oldp+191,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_pc),64);
        tracep->fullIData(oldp+193,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_inst),32);
        tracep->fullIData(oldp+194,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm),20);
        tracep->fullSData(oldp+195,((vlSelf->SocTop__DOT__i_cache_inst_data 
                                     >> 0x14U)),12);
        tracep->fullSData(oldp+196,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm),12);
        tracep->fullCData(oldp+197,((0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)),7);
        tracep->fullBit(oldp+198,((IData)((0x6fU == 
                                           (0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)))));
        tracep->fullBit(oldp+199,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr));
        tracep->fullBit(oldp+200,((IData)((0x63U == 
                                           (0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)))));
        tracep->fullQData(oldp+201,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc),64);
        tracep->fullCData(oldp+203,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__rs1),5);
        tracep->fullBit(oldp+204,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui));
        tracep->fullBit(oldp+205,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc));
        tracep->fullBit(oldp+206,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal));
        tracep->fullBit(oldp+207,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr));
        tracep->fullBit(oldp+208,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jump));
        tracep->fullBit(oldp+209,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srai));
        tracep->fullBit(oldp+210,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addiw));
        tracep->fullBit(oldp+211,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slliw));
        tracep->fullBit(oldp+212,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srliw));
        tracep->fullBit(oldp+213,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraiw));
        tracep->fullBit(oldp+214,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_add));
        tracep->fullBit(oldp+215,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sub));
        tracep->fullBit(oldp+216,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sll));
        tracep->fullBit(oldp+217,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slt));
        tracep->fullBit(oldp+218,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sltu));
        tracep->fullBit(oldp+219,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_xor));
        tracep->fullBit(oldp+220,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srl));
        tracep->fullBit(oldp+221,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sra));
        tracep->fullBit(oldp+222,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_or));
        tracep->fullBit(oldp+223,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_and));
        tracep->fullBit(oldp+224,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_div));
        tracep->fullBit(oldp+225,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divu));
        tracep->fullBit(oldp+226,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mul));
        tracep->fullBit(oldp+227,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulh));
        tracep->fullBit(oldp+228,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulhsu));
        tracep->fullBit(oldp+229,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulhu));
        tracep->fullBit(oldp+230,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_rem));
        tracep->fullBit(oldp+231,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remu));
        tracep->fullBit(oldp+232,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addw));
        tracep->fullBit(oldp+233,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_subw));
        tracep->fullBit(oldp+234,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sllw));
        tracep->fullBit(oldp+235,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srlw));
        tracep->fullBit(oldp+236,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraw));
        tracep->fullBit(oldp+237,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divuw));
        tracep->fullBit(oldp+238,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divw));
        tracep->fullBit(oldp+239,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulw));
        tracep->fullBit(oldp+240,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remuw));
        tracep->fullBit(oldp+241,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remw));
        tracep->fullBit(oldp+242,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw));
        tracep->fullBit(oldp+243,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs));
        tracep->fullBit(oldp+244,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc));
        tracep->fullBit(oldp+245,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrwi));
        tracep->fullBit(oldp+246,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc))));
        tracep->fullBit(oldp+247,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak));
        tracep->fullBit(oldp+248,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1));
        tracep->fullBit(oldp+249,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1));
        tracep->fullBit(oldp+250,((1U & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl) 
                                         >> 3U))));
        tracep->fullQData(oldp+251,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__exe_res),64);
        tracep->fullQData(oldp+253,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__tempb),64);
        tracep->fullCData(oldp+255,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_byte),8);
        tracep->fullSData(oldp+256,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte),16);
        tracep->fullIData(oldp+257,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word),32);
        tracep->fullQData(oldp+258,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_data),64);
        tracep->fullCData(oldp+260,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_mask),8);
        tracep->fullBit(oldp+261,(vlSelf->SocTop__DOT__i_cache2__DOT__icache_if_shankhand));
        tracep->fullCData(oldp+262,(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst_nxt),6);
        tracep->fullBit(oldp+263,(vlSelf->SocTop__DOT__i_cache2__DOT__inst_hit_ok));
        tracep->fullQData(oldp+264,(vlSelf->SocTop__DOT__i_cache2__DOT__miss_data),64);
        tracep->fullBit(oldp+266,(vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_o));
        tracep->fullBit(oldp+267,(vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_t));
        tracep->fullBit(oldp+268,(vlSelf->SocTop__DOT__i_cache2__DOT__write_i_ok));
        tracep->fullQData(oldp+269,((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                     >> 9U)),55);
        tracep->fullCData(oldp+271,((0x3fU & (IData)(
                                                     (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                      >> 3U)))),6);
        tracep->fullCData(oldp+272,(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread_nxt),6);
        tracep->fullBit(oldp+273,(vlSelf->SocTop__DOT__d_cache3__DOT__mem_hit_ok));
        tracep->fullBit(oldp+274,(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_ok));
        tracep->fullQData(oldp+275,(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_addr),64);
        tracep->fullQData(oldp+277,(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_data),64);
        tracep->fullCData(oldp+279,(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_type),4);
        tracep->fullBit(oldp+280,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_i_ok));
        tracep->fullCData(oldp+281,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_type),4);
        tracep->fullQData(oldp+282,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_addr),64);
        tracep->fullCData(oldp+284,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_data_ena1),8);
        tracep->fullBit(oldp+285,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_tag_ena1));
        tracep->fullCData(oldp+286,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_data_ena2),8);
        tracep->fullBit(oldp+287,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_tag_ena2));
        tracep->fullBit(oldp+288,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_resp));
        tracep->fullCData(oldp+289,(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite_nxt),6);
        tracep->fullCData(oldp+290,(vlSelf->SocTop__DOT__d_cache3__DOT__hitw_data_strb1),8);
        tracep->fullCData(oldp+291,(vlSelf->SocTop__DOT__d_cache3__DOT__hitw_data_strb2),8);
        tracep->fullBit(oldp+292,(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_ok));
        tracep->fullQData(oldp+293,(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_addr),64);
        tracep->fullQData(oldp+295,(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_data),64);
        tracep->fullCData(oldp+297,(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_type),4);
        tracep->fullBit(oldp+298,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_i_ok));
        tracep->fullCData(oldp+299,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_type),4);
        tracep->fullQData(oldp+300,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_addr),64);
        tracep->fullCData(oldp+302,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_data_ena1),8);
        tracep->fullBit(oldp+303,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_tag_ena1));
        tracep->fullCData(oldp+304,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_data_ena2),8);
        tracep->fullBit(oldp+305,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_tag_ena2));
        tracep->fullBit(oldp+306,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_resp));
        tracep->fullBit(oldp+307,(vlSelf->SocTop__DOT__d_cache3__DOT__tag_ena1));
        tracep->fullBit(oldp+308,(vlSelf->SocTop__DOT__d_cache3__DOT__tag_ena2));
        tracep->fullCData(oldp+309,(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena1),8);
        tracep->fullQData(oldp+310,(vlSelf->SocTop__DOT__d_cache3__DOT__in_rem_data1),64);
        tracep->fullCData(oldp+312,(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena2),8);
        tracep->fullQData(oldp+313,((0x80000000000000ULL 
                                     | (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                        >> 9U))),56);
        tracep->fullBit(oldp+315,(vlSelf->SocTop__DOT__arbitrate4__DOT__b_shankhand));
        tracep->fullCData(oldp+316,(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state_nex),2);
        tracep->fullBit(oldp+317,(vlSelf->SocTop__DOT__arbitrate4__DOT__b_shankhand));
        tracep->fullBit(oldp+318,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_valid) 
                                   & (IData)(vlSelf->SocTop__DOT__t_axi_ar_ready))));
        tracep->fullBit(oldp+319,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid) 
                                   & (IData)(vlSelf->SocTop__DOT__t_axi_ar_ready))));
        tracep->fullBit(oldp+320,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_r_shankhand));
        tracep->fullBit(oldp+321,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_r_shankhand));
        tracep->fullBit(oldp+322,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid));
        tracep->fullBit(oldp+323,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_valid));
        tracep->fullCData(oldp+324,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_state_nxt),2);
        tracep->fullCData(oldp+325,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_state_nxt),2);
        tracep->fullBit(oldp+326,(vlSelf->SocTop__DOT__arbitrate4__DOT__r_dcache_valid));
        tracep->fullBit(oldp+327,((((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                    >> 2U) & (IData)(vlSelf->SocTop__DOT__soc_axi_aw_ready))));
        tracep->fullBit(oldp+328,((((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                    >> 2U) & (IData)(vlSelf->SocTop__DOT__soc_axi_w_ready))));
        tracep->fullCData(oldp+329,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state_nxt),2);
        tracep->fullBit(oldp+330,(vlSelf->SocTop__DOT__axi_mnq4__DOT__ar_shankhand));
        tracep->fullCData(oldp+331,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state_nxt),2);
        tracep->fullBit(oldp+332,((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                    & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__ar_shakehand)) 
                                   & (0x2004000ULL 
                                      == (((QData)((IData)(
                                                           vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))))));
        tracep->fullBit(oldp+333,((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                    & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__ar_shakehand)) 
                                   & (0x200bff8ULL 
                                      == (((QData)((IData)(
                                                           vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))))));
        tracep->fullBit(oldp+334,(((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                     & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__w_shakehand)) 
                                    & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__aw_shakehand)) 
                                   & (0x2004000ULL 
                                      == (((QData)((IData)(
                                                           vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))))));
        tracep->fullBit(oldp+335,(((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                     & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__w_shakehand)) 
                                    & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__aw_shakehand)) 
                                   & (0x200bff8ULL 
                                      == (((QData)((IData)(
                                                           vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))))));
        tracep->fullQData(oldp+336,(vlSelf->SocTop__DOT__time_axi6__DOT__wmask),64);
        tracep->fullBit(oldp+338,(vlSelf->SocTop__DOT__time_axi6__DOT__aw_shakehand));
        tracep->fullBit(oldp+339,(vlSelf->SocTop__DOT__time_axi6__DOT__w_shakehand));
        tracep->fullBit(oldp+340,(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right));
        tracep->fullCData(oldp+341,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m_nxt),2);
        tracep->fullBit(oldp+342,((IData)(((((((0U 
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
        tracep->fullBit(oldp+343,(vlSelf->SocTop__DOT__time_axi6__DOT__ar_shakehand));
        tracep->fullCData(oldp+344,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r_nxt),2);
        tracep->fullBit(oldp+345,(((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
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
        tracep->fullQData(oldp+346,(((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                                      ? vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_data
                                      : ((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                                          ? vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_data
                                          : 0ULL))),64);
        tracep->fullBit(oldp+348,(((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                                    ? (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_resp)
                                    : ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                                       & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_resp)))));
        tracep->fullQData(oldp+349,((((0U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state)) 
                                      | (1U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state)))
                                      ? vlSelf->SocTop__DOT__d_cache_out_addr
                                      : 0ULL)),64);
        tracep->fullQData(oldp+351,((((0U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state)) 
                                      | (1U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state)))
                                      ? ((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                                          ? vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_data
                                          : ((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                                              ? vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_data
                                              : 0ULL))
                                      : 0ULL)),64);
        tracep->fullSData(oldp+353,(((0xf00U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_id)) 
                                     | ((((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m))
                                           ? (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__time_reg_id)
                                           : 0U) << 4U) 
                                        | (IData)(vlSelf->SocTop__DOT__io_axi_b_id)))),12);
        tracep->fullCData(oldp+354,((((IData)(vlSelf->SocTop__DOT__soc_axi_ar_ready) 
                                      << 2U) | (((IData)(vlSelf->SocTop__DOT__tim_axi_ar_ready) 
                                                 << 1U) 
                                                | (IData)(vlSelf->SocTop__DOT__io_axi_ar_ready)))),3);
        tracep->fullSData(oldp+355,(((((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                        ? (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__r_s_axi_ar_id)
                                        : 0U) << 8U) 
                                     | ((((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r))
                                           ? (0xfU 
                                              & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                                 >> 4U))
                                           : 0U) << 4U) 
                                        | (IData)(vlSelf->SocTop__DOT__io_axi_r_id)))),12);
        tracep->fullCData(oldp+356,(((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r))
                                      ? (0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                                 >> 4U))
                                      : 0U)),4);
        tracep->fullCData(oldp+357,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_ena)
                                      ? ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak)
                                          ? 0xbU : 
                                         (0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                   >> 7U)))
                                      : 0U)),5);
        tracep->fullSData(oldp+358,((0xfffU & ((2U 
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
        tracep->fullQData(oldp+359,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr)
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
        tracep->fullBit(oldp+361,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+362,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x2000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+363,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x3000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+364,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x4000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+365,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+366,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+367,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x1000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+368,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x5000U 
                                                    == 
                                                    (0x40007000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+369,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+370,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x1000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+371,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x4000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+372,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x5000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+373,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+374,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+375,((1U & (IData)(((0x80U 
                                                  == 
                                                  (0x80U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+376,((1U & (IData)(((0x80U 
                                                  == 
                                                  (0x80U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+377,(((IData)(((0x80U 
                                             == (0x80U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                            & (0U == 
                                               (0x7000U 
                                                & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                   & (0U == (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                             >> 0x14U)))));
        tracep->fullBit(oldp+378,(((IData)(((0x80U 
                                             == (0x80U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                            & (0U == 
                                               (0x7000U 
                                                & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                   & (0x18U == (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+379,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr) 
                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena))));
        tracep->fullBit(oldp+380,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr) 
                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena))));
        tracep->fullBit(oldp+381,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))));
        tracep->fullQData(oldp+382,(((((- (QData)((IData)(
                                                          (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                           >> 0x1fU)))) 
                                       << 0xcU) | (QData)((IData)(
                                                                  (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                   >> 0x14U)))) 
                                     + vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op)),64);
        tracep->fullBit(oldp+384,((1U & (((~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1)) 
                                          & (~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1))) 
                                         & (~ (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                                == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                               & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena)))))));
        tracep->fullQData(oldp+385,(((2U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type))
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
        tracep->fullBit(oldp+387,(((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                   & (1U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)))));
        tracep->fullBit(oldp+388,(((IData)(vlSelf->SocTop__DOT__rvcpu_we) 
                                   & (1U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)))));
        tracep->fullBit(oldp+389,(((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
                                   & (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                                        == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                            >> 9U)) 
                                       & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild)) 
                                      | ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                                          == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                              >> 9U)) 
                                         & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))))));
        tracep->fullBit(oldp+390,(((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                                   & (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                                        == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                            >> 9U)) 
                                       & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild)) 
                                      | ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                                          == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                              >> 9U)) 
                                         & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))))));
        tracep->fullBit(oldp+391,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state)) 
                                   & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                      >> 2U))));
        tracep->fullBit(oldp+392,((((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                    >> 2U) & (2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)))));
        tracep->fullQData(oldp+393,((((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
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
        tracep->fullQData(oldp+395,((((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
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
        tracep->fullBit(oldp+397,(((IData)(vlSelf->SocTop__DOT__tim_axi_b_valid) 
                                   & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                      >> 1U))));
        tracep->fullBit(oldp+398,(((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r)) 
                                   & ((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                      >> 1U))));
        tracep->fullQData(oldp+399,(((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
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
        tracep->fullQData(oldp+401,(vlSelf->SocTop__DOT__rvcpu_inst_addr),64);
        tracep->fullBit(oldp+403,((vlSelf->SocTop__DOT__time_axi6__DOT__car_mtime_l 
                                   > vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h)));
        tracep->fullBit(oldp+404,(vlSelf->SocTop__DOT__t_axi_w_valid));
        tracep->fullCData(oldp+405,((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__time_reg_resp) 
                                      << 2U) | (IData)(vlSelf->SocTop__DOT__io_axi_b_resp))),6);
        tracep->fullCData(oldp+406,((((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state)) 
                                      << 2U) | (((IData)(vlSelf->SocTop__DOT__tim_axi_b_valid) 
                                                 << 1U) 
                                                | (IData)(vlSelf->SocTop__DOT__io_axi_b_valid)))),3);
        tracep->fullCData(oldp+407,((((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)) 
                                      << 2U) | (((IData)(vlSelf->SocTop__DOT__tim_axi_r_last) 
                                                 << 1U) 
                                                | (IData)(vlSelf->SocTop__DOT__io_axi_r_last)))),3);
        tracep->fullCData(oldp+408,((((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)) 
                                      << 2U) | (((2U 
                                                  == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r)) 
                                                 << 1U) 
                                                | (IData)(vlSelf->SocTop__DOT__io_axi_r_valid)))),3);
        tracep->fullBit(oldp+409,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))));
        tracep->fullBit(oldp+410,(vlSelf->SocTop__DOT__soc_axi_ar_ready));
        tracep->fullCData(oldp+411,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                      ? (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__r_s_axi_ar_id)
                                      : 0U)),4);
        tracep->fullBit(oldp+412,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))));
        tracep->fullBit(oldp+413,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))));
        tracep->fullCData(oldp+414,(((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m))
                                      ? (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__time_reg_id)
                                      : 0U)),4);
        tracep->fullCData(oldp+415,(vlSelf->SocTop__DOT__time_axi6__DOT__time_reg_resp),2);
        tracep->fullBit(oldp+416,(vlSelf->SocTop__DOT__tim_axi_b_valid));
        tracep->fullBit(oldp+417,(vlSelf->SocTop__DOT__tim_axi_r_last));
        tracep->fullBit(oldp+418,((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r))));
        tracep->fullQData(oldp+419,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))
                                      ? vlSelf->SocTop__DOT__axi_mnq4__DOT__write_addr_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+421,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))
                                      ? vlSelf->SocTop__DOT__axi_mnq4__DOT__write_data_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+423,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc),64);
        tracep->fullIData(oldp+425,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst),32);
        tracep->fullBit(oldp+426,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena));
        tracep->fullCData(oldp+427,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr),5);
        tracep->fullBit(oldp+428,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena));
        tracep->fullCData(oldp+429,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type),8);
        tracep->fullCData(oldp+430,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_sel),3);
        tracep->fullQData(oldp+431,(((IData)((0U != 
                                              (3U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type))))
                                      ? (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                         + (((- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset) 
                                                                    >> 0xbU))))) 
                                             << 0xcU) 
                                            | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset))))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+433,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena))
                                      ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data
                                      : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch)
                                          ? (4ULL + vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc)
                                          : 0ULL))),64);
        tracep->fullBit(oldp+435,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_div_req));
        tracep->fullCData(oldp+436,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr),5);
        tracep->fullBit(oldp+437,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena));
        tracep->fullCData(oldp+438,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr),5);
        tracep->fullBit(oldp+439,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena));
        tracep->fullQData(oldp+440,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data),64);
        tracep->fullQData(oldp+442,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc),64);
        tracep->fullCData(oldp+444,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type),8);
        tracep->fullCData(oldp+445,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode),8);
        tracep->fullQData(oldp+446,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1),64);
        tracep->fullQData(oldp+448,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2),64);
        tracep->fullBit(oldp+450,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdena));
        tracep->fullSData(oldp+451,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset),12);
        tracep->fullCData(oldp+452,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type),8);
        tracep->fullQData(oldp+453,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data),64);
        tracep->fullCData(oldp+455,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel),3);
        tracep->fullQData(oldp+456,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr),64);
        tracep->fullQData(oldp+458,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_pc),64);
        tracep->fullIData(oldp+460,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_ex_inst),32);
        tracep->fullIData(oldp+461,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_inst),32);
        tracep->fullBit(oldp+462,(vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__ex_pc_change));
        tracep->fullBit(oldp+463,(vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__id_pc_change));
        tracep->fullQData(oldp+464,(vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__pc_ex),64);
        tracep->fullQData(oldp+466,(vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__pc_id),64);
        tracep->fullBit(oldp+468,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id2__DOT__fl_bub_temp));
        tracep->fullCData(oldp+469,((0x7fU & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)),7);
        tracep->fullCData(oldp+470,((0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+471,((7U & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                           >> 0xcU))),3);
        tracep->fullSData(oldp+472,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                     >> 0x14U)),12);
        tracep->fullCData(oldp+473,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+474,((0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                              >> 0x14U))),5);
        tracep->fullIData(oldp+475,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                     >> 0xcU)),20);
        tracep->fullSData(oldp+476,(((0xfe0U & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                 >> 7U)))),12);
        tracep->fullQData(oldp+477,((1ULL + (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))),64);
        tracep->fullQData(oldp+479,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sub_op2),64);
        tracep->fullQData(oldp+481,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2),64);
        tracep->fullQData(oldp+483,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_addw_op2),64);
        tracep->fullBit(oldp+485,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_ls_op2));
        tracep->fullQData(oldp+486,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__shift_res),64);
        tracep->fullIData(oldp+488,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sllw_op2),32);
        tracep->fullQData(oldp+489,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sllw_res),64);
        tracep->fullIData(oldp+491,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_srlw_op2),32);
        tracep->fullQData(oldp+492,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__srlw_res),64);
        tracep->fullIData(oldp+494,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sraw_op2),32);
        tracep->fullQData(oldp+495,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sraw_res),64);
        tracep->fullIData(oldp+497,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2),32);
        tracep->fullQData(oldp+498,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2)))),64);
        tracep->fullQData(oldp+500,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__upper_imm),64);
        tracep->fullQData(oldp+502,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_data),64);
        tracep->fullBit(oldp+504,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_finish_sign));
        tracep->fullBit(oldp+505,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_ready));
        tracep->fullQData(oldp+506,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divrem_data),64);
        tracep->fullBit(oldp+508,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__finish_sign));
        tracep->fullBit(oldp+509,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__dr_ready));
        tracep->fullQData(oldp+510,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_divdata),64);
        tracep->fullQData(oldp+512,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op2_divdata),64);
        tracep->fullBit(oldp+514,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch));
        tracep->fullBit(oldp+515,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena));
        tracep->fullSData(oldp+516,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx),12);
        tracep->fullQData(oldp+517,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data),64);
        tracep->fullBit(oldp+519,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena));
        tracep->fullBit(oldp+520,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena));
        tracep->fullBit(oldp+521,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena));
        tracep->fullBit(oldp+522,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en));
        tracep->fullBit(oldp+523,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en));
        tracep->fullQData(oldp+524,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data),64);
        tracep->fullQData(oldp+526,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value),64);
        tracep->fullQData(oldp+528,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
                                     | vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1)),64);
        tracep->fullQData(oldp+530,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
                                     & (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1))),64);
        tracep->fullBit(oldp+532,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__mult_valid));
        tracep->fullBit(oldp+533,((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                 >> 0x3fU)))));
        tracep->fullBit(oldp+534,((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2 
                                                 >> 0x3fU)))));
        tracep->fullQData(oldp+535,(((1U & (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                    >> 0x3fU)))
                                      ? (1ULL + (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1))
                                      : vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1)),64);
        tracep->fullQData(oldp+537,(((1U & (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2 
                                                    >> 0x3fU)))
                                      ? (1ULL + (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))
                                      : vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)),64);
        tracep->fullWData(oldp+539,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand),128);
        tracep->fullQData(oldp+543,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multipler),64);
        if ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multipler))) {
            __Vtemp46[0U] = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[0U];
            __Vtemp46[1U] = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[1U];
            __Vtemp46[2U] = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[2U];
            __Vtemp46[3U] = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[3U];
        } else {
            __Vtemp46[0U] = 0U;
            __Vtemp46[1U] = 0U;
            __Vtemp46[2U] = 0U;
            __Vtemp46[3U] = 0U;
        }
        tracep->fullWData(oldp+545,(__Vtemp46),128);
        tracep->fullWData(oldp+549,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp),128);
        tracep->fullBit(oldp+553,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_signbit));
        tracep->fullQData(oldp+554,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__shang_data),64);
        tracep->fullQData(oldp+556,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__yushu_data),64);
        tracep->fullBit(oldp+558,((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_divdata 
                                                 >> 0x3fU)))));
        tracep->fullBit(oldp+559,((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op2_divdata 
                                                 >> 0x3fU)))));
        tracep->fullQData(oldp+560,(((1U & (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_divdata 
                                                    >> 0x3fU)))
                                      ? (1ULL + (~ vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_divdata))
                                      : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_divdata)),64);
        tracep->fullQData(oldp+562,(((1U & (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op2_divdata 
                                                    >> 0x3fU)))
                                      ? (1ULL + (~ vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op2_divdata))
                                      : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op2_divdata)),64);
        tracep->fullBit(oldp+564,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__div_rem_signbit));
        tracep->fullCData(oldp+565,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__counter),8);
        tracep->fullWData(oldp+566,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a),128);
        tracep->fullWData(oldp+570,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_b),128);
        tracep->fullQData(oldp+574,((1ULL + (~ vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__shang_data))),64);
        tracep->fullBit(oldp+576,((0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+577,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en) 
                                   & (0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)))));
        tracep->fullBit(oldp+578,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en) 
                                   & (0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)))));
        tracep->fullQData(oldp+579,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcycle),64);
        tracep->fullBit(oldp+581,((0x300U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+582,(((0x300U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+583,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus));
        tracep->fullBit(oldp+584,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_ena));
        tracep->fullBit(oldp+585,((1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                          | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                          ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)
                                          : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena) 
                                             | ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                 ? (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                            >> 7U))
                                                 : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)))))));
        tracep->fullBit(oldp+586,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie));
        tracep->fullBit(oldp+587,((1U & ((~ ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                             | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))) 
                                         & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)
                                             ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)
                                             : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                 ? (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                            >> 3U))
                                                 : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)))))));
        tracep->fullBit(oldp+588,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie));
        tracep->fullCData(oldp+589,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                      ? 3U : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                      ? (IData)(
                                                                (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                                 >> 0xbU))
                                                      : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp)))))),2);
        tracep->fullCData(oldp+590,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp),2);
        tracep->fullCData(oldp+591,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs),2);
        tracep->fullBit(oldp+592,((3U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs))));
        tracep->fullQData(oldp+593,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus),64);
        tracep->fullBit(oldp+595,((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+596,(((((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en)) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
        tracep->fullBit(oldp+597,(((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
        tracep->fullQData(oldp+598,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base),62);
        tracep->fullQData(oldp+600,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base 
                                     << 2U)),64);
        tracep->fullBit(oldp+602,((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+603,((((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena))));
        tracep->fullBit(oldp+604,(((((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en)) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
        tracep->fullQData(oldp+605,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mepc),64);
        tracep->fullBit(oldp+607,((0x342U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+608,(((0x342U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+609,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause));
        tracep->fullBit(oldp+610,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
        tracep->fullQData(oldp+611,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                      ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value
                                      : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause)
                                          ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data
                                          : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause))),64);
        tracep->fullQData(oldp+613,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause),64);
        tracep->fullBit(oldp+615,((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+616,(((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+617,(((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
        tracep->fullBit(oldp+618,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie));
        tracep->fullQData(oldp+619,(((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie)) 
                                     << 7U)),64);
        tracep->fullBit(oldp+621,((0x344U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+622,(((0x344U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+623,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip));
        tracep->fullQData(oldp+624,((QData)((IData)(
                                                    ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip) 
                                                     << 7U)))),64);
        tracep->fullBit(oldp+626,((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+627,(((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+628,(((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
        tracep->fullQData(oldp+629,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mscrstch),64);
        tracep->fullCData(oldp+631,((7U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))),3);
        tracep->fullCData(oldp+632,((3U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                   >> 1U)))),2);
        tracep->fullBit(oldp+633,((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                 >> 2U)))));
        tracep->fullQData(oldp+634,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_pc_o),64);
        tracep->fullIData(oldp+636,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o),32);
        tracep->fullQData(oldp+637,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__pc_data1),64);
        tracep->fullBit(oldp+639,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_exyn));
        tracep->fullBit(oldp+640,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__teap_yn));
        tracep->fullQData(oldp+641,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__trap_code),64);
        tracep->fullQData(oldp+643,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[0]),64);
        tracep->fullQData(oldp+645,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[1]),64);
        tracep->fullQData(oldp+647,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[2]),64);
        tracep->fullQData(oldp+649,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[3]),64);
        tracep->fullQData(oldp+651,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[4]),64);
        tracep->fullQData(oldp+653,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[5]),64);
        tracep->fullQData(oldp+655,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[6]),64);
        tracep->fullQData(oldp+657,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[7]),64);
        tracep->fullQData(oldp+659,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[8]),64);
        tracep->fullQData(oldp+661,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[9]),64);
        tracep->fullQData(oldp+663,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[10]),64);
        tracep->fullQData(oldp+665,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[11]),64);
        tracep->fullQData(oldp+667,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[12]),64);
        tracep->fullQData(oldp+669,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[13]),64);
        tracep->fullQData(oldp+671,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[14]),64);
        tracep->fullQData(oldp+673,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[15]),64);
        tracep->fullQData(oldp+675,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[16]),64);
        tracep->fullQData(oldp+677,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[17]),64);
        tracep->fullQData(oldp+679,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[18]),64);
        tracep->fullQData(oldp+681,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[19]),64);
        tracep->fullQData(oldp+683,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[20]),64);
        tracep->fullQData(oldp+685,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[21]),64);
        tracep->fullQData(oldp+687,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[22]),64);
        tracep->fullQData(oldp+689,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[23]),64);
        tracep->fullQData(oldp+691,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[24]),64);
        tracep->fullQData(oldp+693,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[25]),64);
        tracep->fullQData(oldp+695,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[26]),64);
        tracep->fullQData(oldp+697,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[27]),64);
        tracep->fullQData(oldp+699,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[28]),64);
        tracep->fullQData(oldp+701,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[29]),64);
        tracep->fullQData(oldp+703,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[30]),64);
        tracep->fullQData(oldp+705,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[31]),64);
        tracep->fullIData(oldp+707,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__i),32);
        tracep->fullQData(oldp+708,((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                     >> 9U)),55);
        tracep->fullCData(oldp+710,((0x3fU & (IData)(
                                                     (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                                      >> 3U)))),6);
        tracep->fullCData(oldp+711,(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst),6);
        tracep->fullBit(oldp+712,((0x20U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst))));
        tracep->fullBit(oldp+713,(vlSelf->SocTop__DOT__i_cache2__DOT__read_ok));
        tracep->fullQData(oldp+714,(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__out_data),55);
        tracep->fullBit(oldp+716,(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__out_vaild));
        tracep->fullQData(oldp+717,(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__out_data),55);
        tracep->fullBit(oldp+719,(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__out_vaild));
        tracep->fullQData(oldp+720,(vlSelf->SocTop__DOT__i_cache2__DOT__u_data01__DOT__out_data),64);
        tracep->fullQData(oldp+722,(vlSelf->SocTop__DOT__i_cache2__DOT__u_data02__DOT__out_data),64);
        tracep->fullIData(oldp+724,(vlSelf->SocTop__DOT__i_cache2__DOT__i),32);
        tracep->fullQData(oldp+725,((0x80000000000000ULL 
                                     | (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                        >> 9U))),56);
        tracep->fullBit(oldp+727,((1U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))));
        tracep->fullBit(oldp+728,((1U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))));
        tracep->fullCData(oldp+729,(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread),6);
        tracep->fullBit(oldp+730,((2U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))));
        tracep->fullBit(oldp+731,(vlSelf->SocTop__DOT__d_cache3__DOT__read_ok));
        tracep->fullCData(oldp+732,(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite),6);
        tracep->fullBit(oldp+733,((2U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))));
        tracep->fullBit(oldp+734,(vlSelf->SocTop__DOT__d_cache3__DOT__read_w_ok));
        tracep->fullBit(oldp+735,((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))));
        tracep->fullIData(oldp+736,(vlSelf->SocTop__DOT__d_cache3__DOT__i),32);
        tracep->fullQData(oldp+737,(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data),55);
        tracep->fullBit(oldp+739,(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild));
        tracep->fullQData(oldp+740,(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data),55);
        tracep->fullBit(oldp+742,(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild));
        tracep->fullQData(oldp+743,(vlSelf->SocTop__DOT__d_cache3__DOT__u_data0__DOT__out_data),64);
        tracep->fullQData(oldp+745,(vlSelf->SocTop__DOT__d_cache3__DOT__u_data1__DOT__out_data),64);
        tracep->fullCData(oldp+747,(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state),2);
        tracep->fullCData(oldp+748,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_state),2);
        tracep->fullCData(oldp+749,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_state),2);
        tracep->fullCData(oldp+750,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state),2);
        tracep->fullCData(oldp+751,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state),2);
        tracep->fullQData(oldp+752,(vlSelf->SocTop__DOT__axi_mnq4__DOT__write_data_reg),64);
        tracep->fullQData(oldp+754,(vlSelf->SocTop__DOT__axi_mnq4__DOT__write_addr_reg),64);
        tracep->fullCData(oldp+756,(vlSelf->SocTop__DOT__axi_mnq4__DOT__r_s_axi_ar_id),4);
        tracep->fullQData(oldp+757,(vlSelf->SocTop__DOT__time_axi6__DOT__car_mtime_l),64);
        tracep->fullQData(oldp+759,(vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h),64);
        tracep->fullCData(oldp+761,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m),2);
        tracep->fullCData(oldp+762,(vlSelf->SocTop__DOT__time_axi6__DOT__time_reg_id),4);
        tracep->fullCData(oldp+763,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r),2);
        tracep->fullBit(oldp+764,(vlSelf->clk));
        tracep->fullBit(oldp+765,(vlSelf->rst));
        tracep->fullBit(oldp+766,(vlSelf->read_ena_sign_));
        tracep->fullQData(oldp+767,(vlSelf->out_addr_outp),64);
        tracep->fullQData(oldp+769,(vlSelf->read_data_sign_),64);
        tracep->fullBit(oldp+771,(vlSelf->out_write_ram_ena));
        tracep->fullQData(oldp+772,(vlSelf->out_write_ram_data),64);
        tracep->fullQData(oldp+774,(vlSelf->out_write_ram_addr),64);
        tracep->fullBit(oldp+776,((1U & (~ (IData)(vlSelf->rst)))));
        tracep->fullBit(oldp+777,(((~ (IData)(vlSelf->rst)) 
                                   & (IData)(vlSelf->SocTop__DOT__soc_axi_aw_ready))));
        tracep->fullBit(oldp+778,(((~ (IData)(vlSelf->rst)) 
                                   & (IData)(vlSelf->SocTop__DOT__soc_axi_w_ready))));
        tracep->fullCData(oldp+779,(((IData)(vlSelf->rst)
                                      ? 0U : (0xfU 
                                              & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_id) 
                                                 >> 8U)))),4);
        tracep->fullCData(oldp+780,(((IData)(vlSelf->rst)
                                      ? 0U : (3U & 
                                              ((0xfffffffU 
                                                & ((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__time_reg_resp) 
                                                   >> 2U)) 
                                               | ((IData)(vlSelf->SocTop__DOT__io_axi_b_resp) 
                                                  >> 4U))))),2);
        tracep->fullBit(oldp+781,(((~ (IData)(vlSelf->rst)) 
                                   & (2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state)))));
        __Vtemp48[0U] = (IData)(vlSelf->SocTop__DOT__io_axi_r_data);
        __Vtemp48[1U] = (IData)((vlSelf->SocTop__DOT__io_axi_r_data 
                                 >> 0x20U));
        __Vtemp48[2U] = (IData)(vlSelf->SocTop__DOT__tim_axi_r_data);
        __Vtemp48[3U] = (IData)((vlSelf->SocTop__DOT__tim_axi_r_data 
                                 >> 0x20U));
        __Vtemp48[4U] = (IData)(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                  ? vlSelf->read_data_sign_
                                  : 0ULL));
        __Vtemp48[5U] = (IData)((((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                   ? vlSelf->read_data_sign_
                                   : 0ULL) >> 0x20U));
        tracep->fullWData(oldp+782,(__Vtemp48),192);
        tracep->fullQData(oldp+788,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                      ? vlSelf->read_data_sign_
                                      : 0ULL)),64);
        tracep->fullQData(oldp+790,(((1U & ((~ (IData)(vlSelf->rst)) 
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
        tracep->fullBit(oldp+792,(((IData)(vlSelf->rst)
                                    ? 0U : (1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)))));
        tracep->fullQData(oldp+793,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
                                                 ? 
                                                (0xfffffffffffffffeULL 
                                                 & vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc)
                                                 : vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc))),64);
        tracep->fullBit(oldp+795,(((~ (IData)(vlSelf->rst)) 
                                   & (IData)(vlSelf->SocTop__DOT__i_cache_inst_valid))));
        tracep->fullQData(oldp+796,(((IData)(vlSelf->rst)
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
        tracep->fullQData(oldp+798,(((IData)(vlSelf->rst)
                                      ? 0ULL : vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc)),64);
        tracep->fullCData(oldp+800,(((IData)(vlSelf->rst)
                                      ? 0U : (7U & 
                                              (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                               >> 0xcU)))),3);
        tracep->fullQData(oldp+801,((((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1))
                                      ? ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                           == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                          & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                          ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                          : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                         [vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1])
                                      : 0ULL)),64);
        tracep->fullQData(oldp+803,((((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2))
                                      ? ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                           == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                          & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                          ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                          : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                         [vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2])
                                      : 0ULL)),64);
        tracep->fullQData(oldp+805,(((IData)(vlSelf->rst)
                                      ? 0ULL : vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc)),64);
        tracep->fullIData(oldp+807,(((IData)(vlSelf->rst)
                                      ? 0U : vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)),32);
        tracep->fullIData(oldp+808,(((IData)(vlSelf->rst)
                                      ? 0U : vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_ex_inst)),32);
        tracep->fullQData(oldp+809,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
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
        tracep->fullQData(oldp+811,(((IData)((0x6fU 
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
        tracep->fullBit(oldp+813,(((IData)(vlSelf->rst)
                                    ? 0U : (1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1) 
                                                   & (2U 
                                                      == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                  & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1) 
                                                     == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)))))));
        tracep->fullBit(oldp+814,(((IData)(vlSelf->rst)
                                    ? 0U : (1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2) 
                                                   & (2U 
                                                      == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                  & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2) 
                                                     == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)))))));
        tracep->fullQData(oldp+815,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((1U 
                                                 & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_divdata 
                                                            >> 0x3fU)))
                                                 ? 
                                                (1ULL 
                                                 + 
                                                 (~ vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_divdata))
                                                 : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_divdata))),64);
        tracep->fullQData(oldp+817,(((IData)(vlSelf->rst)
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
        tracep->fullQData(oldp+819,(((IData)(vlSelf->rst)
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
        tracep->fullQData(oldp+821,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((1U 
                                                 & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                            >> 2U)))
                                                 ? 
                                                ((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)) 
                                                 << 0x20U)
                                                 : (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data))))),64);
        tracep->fullCData(oldp+823,(((IData)(vlSelf->rst)
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
        tracep->fullCData(oldp+824,(((IData)(vlSelf->rst)
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
        tracep->fullCData(oldp+825,(((IData)(vlSelf->rst)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                             >> 2U)))
                                               ? 0xf0U
                                               : 0xfU))),8);
        tracep->fullBit(oldp+826,(((IData)(vlSelf->SocTop__DOT__t_axi_aw_valid) 
                                   & ((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->SocTop__DOT__soc_axi_aw_ready)))));
        tracep->fullBit(oldp+827,(((IData)(vlSelf->SocTop__DOT__t_axi_w_valid) 
                                   & ((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->SocTop__DOT__soc_axi_w_ready)))));
        tracep->fullIData(oldp+828,(3U),32);
        tracep->fullCData(oldp+829,(0U),4);
        tracep->fullCData(oldp+830,(0U),8);
        tracep->fullCData(oldp+831,(3U),3);
        tracep->fullCData(oldp+832,(1U),2);
        tracep->fullCData(oldp+833,(2U),4);
        tracep->fullCData(oldp+834,(0U),3);
        tracep->fullCData(oldp+835,(0xffU),8);
        tracep->fullBit(oldp+836,(1U));
        tracep->fullCData(oldp+837,(0U),2);
        tracep->fullBit(oldp+838,(vlSelf->SocTop__DOT__io_axi_aw_ready));
        tracep->fullBit(oldp+839,(vlSelf->SocTop__DOT__io_axi_w_ready));
        tracep->fullCData(oldp+840,(vlSelf->SocTop__DOT__io_axi_b_id),4);
        tracep->fullCData(oldp+841,(vlSelf->SocTop__DOT__io_axi_b_resp),2);
        tracep->fullBit(oldp+842,(vlSelf->SocTop__DOT__io_axi_b_valid));
        tracep->fullBit(oldp+843,(vlSelf->SocTop__DOT__io_axi_ar_ready));
        tracep->fullCData(oldp+844,(vlSelf->SocTop__DOT__io_axi_r_id),4);
        tracep->fullQData(oldp+845,(vlSelf->SocTop__DOT__io_axi_r_data),64);
        tracep->fullCData(oldp+847,(vlSelf->SocTop__DOT__io_axi_r_resp),2);
        tracep->fullBit(oldp+848,(vlSelf->SocTop__DOT__io_axi_r_last));
        tracep->fullBit(oldp+849,(vlSelf->SocTop__DOT__io_axi_r_valid));
        tracep->fullCData(oldp+850,(4U),3);
    }
}
