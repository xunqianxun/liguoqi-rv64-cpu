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
        tracep->declBit(c+755,"clk", false,-1);
        tracep->declBit(c+756,"rst", false,-1);
        tracep->declBit(c+757,"read_ena_sign_", false,-1);
        tracep->declQuad(c+758,"out_addr_outp", false,-1, 63,0);
        tracep->declQuad(c+760,"read_data_sign_", false,-1, 63,0);
        tracep->declBit(c+762,"out_write_ram_ena", false,-1);
        tracep->declQuad(c+763,"out_write_ram_data", false,-1, 63,0);
        tracep->declQuad(c+765,"out_write_ram_addr", false,-1, 63,0);
        tracep->declBit(c+755,"SocTop clk", false,-1);
        tracep->declBit(c+756,"SocTop rst", false,-1);
        tracep->declBit(c+757,"SocTop read_ena_sign_", false,-1);
        tracep->declQuad(c+758,"SocTop out_addr_outp", false,-1, 63,0);
        tracep->declQuad(c+760,"SocTop read_data_sign_", false,-1, 63,0);
        tracep->declBit(c+762,"SocTop out_write_ram_ena", false,-1);
        tracep->declQuad(c+763,"SocTop out_write_ram_data", false,-1, 63,0);
        tracep->declQuad(c+765,"SocTop out_write_ram_addr", false,-1, 63,0);
        tracep->declBus(c+808,"SocTop SLAVE_NUM", false,-1, 31,0);
        tracep->declBit(c+755,"SocTop aclk", false,-1);
        tracep->declQuad(c+397,"SocTop rvcpu_inst_addr", false,-1, 63,0);
        tracep->declQuad(c+3,"SocTop rvcpu_data_addr", false,-1, 63,0);
        tracep->declBus(c+5,"SocTop rvcpu_wmask", false,-1, 7,0);
        tracep->declQuad(c+6,"SocTop rvcpu_data_o", false,-1, 63,0);
        tracep->declBit(c+8,"SocTop rvcpu_we", false,-1);
        tracep->declBit(c+9,"SocTop rvcpu_re", false,-1);
        tracep->declBus(c+399,"SocTop i_cache_inst_data", false,-1, 31,0);
        tracep->declBit(c+400,"SocTop i_cache_inst_valid", false,-1);
        tracep->declBit(c+10,"SocTop i_cache_read_ena", false,-1);
        tracep->declQuad(c+11,"SocTop i_cache_addr", false,-1, 63,0);
        tracep->declBit(c+401,"SocTop i_cache_ready", false,-1);
        tracep->declBit(c+13,"SocTop i_caceh_resp", false,-1);
        tracep->declQuad(c+14,"SocTop d_cache_data_out", false,-1, 63,0);
        tracep->declBit(c+342,"SocTop d_cache_mem_finish", false,-1);
        tracep->declQuad(c+16,"SocTop d_cache_out_addr", false,-1, 63,0);
        tracep->declQuad(c+343,"SocTop d_cache_out_data", false,-1, 63,0);
        tracep->declBit(c+345,"SocTop d_cache_out_resp", false,-1);
        tracep->declBus(c+18,"SocTop d_cache_out_type", false,-1, 3,0);
        tracep->declQuad(c+19,"SocTop arbitrate_d_data", false,-1, 63,0);
        tracep->declBit(c+21,"SocTop arbitrate_d_ok", false,-1);
        tracep->declQuad(c+22,"SocTop arbitrate_i_data", false,-1, 63,0);
        tracep->declBit(c+24,"SocTop arbitrate_i_ok", false,-1);
        tracep->declBit(c+25,"SocTop arbitrate_ti_sign", false,-1);
        tracep->declBit(c+402,"SocTop time_init_sign", false,-1);
        tracep->declBus(c+809,"SocTop t_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+346,"SocTop t_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+810,"SocTop t_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+811,"SocTop t_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+812,"SocTop t_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+813,"SocTop t_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+814,"SocTop t_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+809,"SocTop t_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+767,"SocTop t_axi_aw_ready", false,-1);
        tracep->declBit(c+26,"SocTop t_axi_aw_valid", false,-1);
        tracep->declQuad(c+348,"SocTop t_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+815,"SocTop t_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+816,"SocTop t_axi_w_last", false,-1);
        tracep->declBit(c+403,"SocTop t_axi_w_valid", false,-1);
        tracep->declBit(c+768,"SocTop t_axi_w_ready", false,-1);
        tracep->declBus(c+769,"SocTop t_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+770,"SocTop t_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+771,"SocTop t_axi_b_valid", false,-1);
        tracep->declBit(c+816,"SocTop t_axi_b_ready", false,-1);
        tracep->declBus(c+27,"SocTop t_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+28,"SocTop t_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+810,"SocTop t_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+811,"SocTop t_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+812,"SocTop t_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+813,"SocTop t_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+814,"SocTop t_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+809,"SocTop t_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+30,"SocTop t_axi_ar_valid", false,-1);
        tracep->declBit(c+31,"SocTop t_axi_ar_ready", false,-1);
        tracep->declBus(c+32,"SocTop t_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+33,"SocTop t_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+35,"SocTop t_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+36,"SocTop t_axi_r_last", false,-1);
        tracep->declBit(c+36,"SocTop t_axi_r_valid", false,-1);
        tracep->declBit(c+816,"SocTop t_axi_r_ready", false,-1);
        tracep->declBus(c+37,"SocTop add_axi_aw_id", false,-1, 11,0);
        tracep->declArray(c+38,"SocTop add_axi_aw_addr", false,-1, 191,0);
        tracep->declBus(c+44,"SocTop add_axi_aw_len", false,-1, 23,0);
        tracep->declBus(c+45,"SocTop add_axi_aw_size", false,-1, 8,0);
        tracep->declBus(c+46,"SocTop add_axi_aw_burst", false,-1, 5,0);
        tracep->declBus(c+47,"SocTop add_axi_aw_cache", false,-1, 11,0);
        tracep->declBus(c+48,"SocTop add_axi_aw_prot", false,-1, 8,0);
        tracep->declBus(c+49,"SocTop add_axi_aw_qos", false,-1, 11,0);
        tracep->declBus(c+50,"SocTop add_axi_aw_valid", false,-1, 2,0);
        tracep->declBus(c+51,"SocTop add_axi_aw_ready", false,-1, 2,0);
        tracep->declArray(c+52,"SocTop add_axi_w_data", false,-1, 191,0);
        tracep->declBus(c+58,"SocTop add_axi_w_strb", false,-1, 23,0);
        tracep->declBus(c+59,"SocTop add_axi_w_last", false,-1, 2,0);
        tracep->declBus(c+60,"SocTop add_axi_w_valid", false,-1, 2,0);
        tracep->declBus(c+61,"SocTop add_axi_w_ready", false,-1, 2,0);
        tracep->declBus(c+350,"SocTop add_axi_b_id", false,-1, 11,0);
        tracep->declBus(c+404,"SocTop add_axi_b_resp", false,-1, 5,0);
        tracep->declBus(c+405,"SocTop add_axi_b_valid", false,-1, 2,0);
        tracep->declBus(c+62,"SocTop add_axi_b_ready", false,-1, 2,0);
        tracep->declBus(c+63,"SocTop add_axi_ar_id", false,-1, 11,0);
        tracep->declArray(c+64,"SocTop add_axi_ar_addr", false,-1, 191,0);
        tracep->declBus(c+70,"SocTop add_axi_ar_len", false,-1, 23,0);
        tracep->declBus(c+71,"SocTop add_axi_ar_size", false,-1, 8,0);
        tracep->declBus(c+72,"SocTop add_axi_ar_burst", false,-1, 5,0);
        tracep->declBus(c+73,"SocTop add_axi_ar_cache", false,-1, 11,0);
        tracep->declBus(c+74,"SocTop add_axi_ar_prot", false,-1, 8,0);
        tracep->declBus(c+75,"SocTop add_axi_ar_qos", false,-1, 11,0);
        tracep->declBus(c+76,"SocTop add_axi_ar_valid", false,-1, 2,0);
        tracep->declBus(c+351,"SocTop add_axi_ar_ready", false,-1, 2,0);
        tracep->declBus(c+352,"SocTop add_axi_r_id", false,-1, 11,0);
        tracep->declArray(c+772,"SocTop add_axi_r_data", false,-1, 191,0);
        tracep->declBus(c+1,"SocTop add_axi_r_resp", false,-1, 5,0);
        tracep->declBus(c+406,"SocTop add_axi_r_last", false,-1, 2,0);
        tracep->declBus(c+407,"SocTop add_axi_r_valid", false,-1, 2,0);
        tracep->declBus(c+77,"SocTop add_axi_r_ready", false,-1, 2,0);
        tracep->declBus(c+78,"SocTop soc_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+79,"SocTop soc_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+81,"SocTop soc_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+82,"SocTop soc_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+83,"SocTop soc_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+84,"SocTop soc_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+85,"SocTop soc_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+86,"SocTop soc_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+87,"SocTop soc_axi_aw_ready", false,-1);
        tracep->declBit(c+88,"SocTop soc_axi_aw_valid", false,-1);
        tracep->declQuad(c+89,"SocTop soc_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+91,"SocTop soc_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+92,"SocTop soc_axi_w_last", false,-1);
        tracep->declBit(c+93,"SocTop soc_axi_w_valid", false,-1);
        tracep->declBit(c+94,"SocTop soc_axi_w_ready", false,-1);
        tracep->declBus(c+78,"SocTop soc_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+817,"SocTop soc_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+408,"SocTop soc_axi_b_valid", false,-1);
        tracep->declBit(c+95,"SocTop soc_axi_b_ready", false,-1);
        tracep->declBus(c+96,"SocTop soc_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+97,"SocTop soc_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+99,"SocTop soc_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+100,"SocTop soc_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+101,"SocTop soc_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+102,"SocTop soc_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+103,"SocTop soc_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+104,"SocTop soc_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+105,"SocTop soc_axi_ar_valid", false,-1);
        tracep->declBit(c+409,"SocTop soc_axi_ar_ready", false,-1);
        tracep->declBus(c+410,"SocTop soc_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+778,"SocTop soc_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+817,"SocTop soc_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+411,"SocTop soc_axi_r_last", false,-1);
        tracep->declBit(c+412,"SocTop soc_axi_r_valid", false,-1);
        tracep->declBit(c+106,"SocTop soc_axi_r_ready", false,-1);
        tracep->declBus(c+107,"SocTop tim_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+108,"SocTop tim_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+110,"SocTop tim_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+111,"SocTop tim_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+112,"SocTop tim_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+113,"SocTop tim_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+114,"SocTop tim_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+115,"SocTop tim_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+116,"SocTop tim_axi_aw_ready", false,-1);
        tracep->declBit(c+117,"SocTop tim_axi_aw_valid", false,-1);
        tracep->declQuad(c+118,"SocTop tim_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+120,"SocTop tim_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+121,"SocTop tim_axi_w_last", false,-1);
        tracep->declBit(c+122,"SocTop tim_axi_w_valid", false,-1);
        tracep->declBit(c+123,"SocTop tim_axi_w_ready", false,-1);
        tracep->declBus(c+413,"SocTop tim_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+414,"SocTop tim_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+415,"SocTop tim_axi_b_valid", false,-1);
        tracep->declBit(c+124,"SocTop tim_axi_b_ready", false,-1);
        tracep->declBus(c+125,"SocTop tim_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+126,"SocTop tim_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+128,"SocTop tim_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+129,"SocTop tim_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+130,"SocTop tim_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+131,"SocTop tim_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+132,"SocTop tim_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+133,"SocTop tim_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+134,"SocTop tim_axi_ar_valid", false,-1);
        tracep->declBit(c+135,"SocTop tim_axi_ar_ready", false,-1);
        tracep->declBus(c+353,"SocTop tim_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+136,"SocTop tim_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+2,"SocTop tim_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+416,"SocTop tim_axi_r_last", false,-1);
        tracep->declBit(c+417,"SocTop tim_axi_r_valid", false,-1);
        tracep->declBit(c+138,"SocTop tim_axi_r_ready", false,-1);
        tracep->declBus(c+139,"SocTop io_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+140,"SocTop io_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+142,"SocTop io_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+143,"SocTop io_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+144,"SocTop io_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+145,"SocTop io_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+146,"SocTop io_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+147,"SocTop io_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+818,"SocTop io_axi_aw_ready", false,-1);
        tracep->declBit(c+148,"SocTop io_axi_aw_valid", false,-1);
        tracep->declQuad(c+149,"SocTop io_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+151,"SocTop io_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+152,"SocTop io_axi_w_last", false,-1);
        tracep->declBit(c+153,"SocTop io_axi_w_valid", false,-1);
        tracep->declBit(c+819,"SocTop io_axi_w_ready", false,-1);
        tracep->declBus(c+820,"SocTop io_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+821,"SocTop io_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+822,"SocTop io_axi_b_valid", false,-1);
        tracep->declBit(c+154,"SocTop io_axi_b_ready", false,-1);
        tracep->declBus(c+155,"SocTop io_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+156,"SocTop io_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+158,"SocTop io_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+159,"SocTop io_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+160,"SocTop io_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+161,"SocTop io_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+162,"SocTop io_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+163,"SocTop io_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+164,"SocTop io_axi_ar_valid", false,-1);
        tracep->declBit(c+823,"SocTop io_axi_ar_ready", false,-1);
        tracep->declBus(c+824,"SocTop io_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+825,"SocTop io_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+827,"SocTop io_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+828,"SocTop io_axi_r_last", false,-1);
        tracep->declBit(c+829,"SocTop io_axi_r_valid", false,-1);
        tracep->declBit(c+165,"SocTop io_axi_r_ready", false,-1);
        tracep->declBit(c+166,"SocTop read_ena_sign", false,-1);
        tracep->declQuad(c+167,"SocTop addr_oup_sign", false,-1, 63,0);
        tracep->declQuad(c+760,"SocTop read_data_sign", false,-1, 63,0);
        tracep->declBit(c+408,"SocTop write_ena_sign", false,-1);
        tracep->declQuad(c+418,"SocTop write_addr_sign", false,-1, 63,0);
        tracep->declQuad(c+420,"SocTop write_data_sign", false,-1, 63,0);
        tracep->declBus(c+830,"SocTop prot_chose_write", false,-1, 2,0);
        tracep->declBus(c+830,"SocTop prot_chose_read", false,-1, 2,0);
        tracep->declBit(c+755,"SocTop rvcpu1 clk", false,-1);
        tracep->declBit(c+756,"SocTop rvcpu1 rst", false,-1);
        tracep->declQuad(c+397,"SocTop rvcpu1 inst_addr", false,-1, 63,0);
        tracep->declBit(c+401,"SocTop rvcpu1 inst_ready", false,-1);
        tracep->declBus(c+399,"SocTop rvcpu1 inst", false,-1, 31,0);
        tracep->declBit(c+400,"SocTop rvcpu1 bui_inst_valid", false,-1);
        tracep->declQuad(c+3,"SocTop rvcpu1 data_addr", false,-1, 63,0);
        tracep->declBus(c+5,"SocTop rvcpu1 wmask", false,-1, 7,0);
        tracep->declQuad(c+6,"SocTop rvcpu1 data_o", false,-1, 63,0);
        tracep->declQuad(c+14,"SocTop rvcpu1 data_i", false,-1, 63,0);
        tracep->declBit(c+8,"SocTop rvcpu1 we", false,-1);
        tracep->declBit(c+9,"SocTop rvcpu1 re", false,-1);
        tracep->declBit(c+342,"SocTop rvcpu1 mem_finish", false,-1);
        tracep->declBit(c+402,"SocTop rvcpu1 timer_intr", false,-1);
        tracep->declQuad(c+780,"SocTop rvcpu1 pip_regfile_x1", false,-1, 63,0);
        tracep->declBit(c+782,"SocTop rvcpu1 pip_refflie_x1_ena", false,-1);
        tracep->declBus(c+422,"SocTop rvcpu1 pip_regfile_x1_addr", false,-1, 4,0);
        tracep->declQuad(c+783,"SocTop rvcpu1 pip_pc", false,-1, 63,0);
        tracep->declBit(c+169,"SocTop rvcpu1 if_stall_req", false,-1);
        tracep->declQuad(c+423,"SocTop rvcpu1 if_id_pc", false,-1, 63,0);
        tracep->declBus(c+425,"SocTop rvcpu1 if_id_inst", false,-1, 31,0);
        tracep->declBit(c+426,"SocTop rvcpu1 new_pc_sign", false,-1);
        tracep->declBit(c+427,"SocTop rvcpu1 ex_flush", false,-1);
        tracep->declQuad(c+170,"SocTop rvcpu1 ex_id_rd_data", false,-1, 63,0);
        tracep->declBus(c+428,"SocTop rvcpu1 ex_id_rd_addr", false,-1, 4,0);
        tracep->declBit(c+429,"SocTop rvcpu1 ex_id_rd_ena", false,-1);
        tracep->declBus(c+430,"SocTop rvcpu1 ex_id_rd_type", false,-1, 7,0);
        tracep->declBus(c+431,"SocTop rvcpu1 ex_mem_sel", false,-1, 2,0);
        tracep->declQuad(c+432,"SocTop rvcpu1 ex_mem_addr", false,-1, 63,0);
        tracep->declBit(c+427,"SocTop rvcpu1 ex_pc_branchena", false,-1);
        tracep->declQuad(c+434,"SocTop rvcpu1 ex_pc_branchpc", false,-1, 63,0);
        tracep->declBit(c+354,"SocTop rvcpu1 ex_ctrl_req", false,-1);
        tracep->declBit(c+436,"SocTop rvcpu1 div_rem_s_req", false,-1);
        tracep->declBus(c+172,"SocTop rvcpu1 id_reg_addr1", false,-1, 4,0);
        tracep->declBit(c+173,"SocTop rvcpu1 id_reg_ena1", false,-1);
        tracep->declBus(c+174,"SocTop rvcpu1 id_reg_addr2", false,-1, 4,0);
        tracep->declBit(c+175,"SocTop rvcpu1 id_reg_ena2", false,-1);
        tracep->declBit(c+785,"SocTop rvcpu1 id_ctrl_req", false,-1);
        tracep->declBus(c+176,"SocTop rvcpu1 id_ex_type", false,-1, 7,0);
        tracep->declBus(c+177,"SocTop rvcpu1 id_ex_opcode", false,-1, 7,0);
        tracep->declQuad(c+178,"SocTop rvcpu1 id_ex_op", false,-1, 63,0);
        tracep->declQuad(c+180,"SocTop rvcpu1 id_ex_op2", false,-1, 63,0);
        tracep->declBit(c+182,"SocTop rvcpu1 id_ex_rd_ena", false,-1);
        tracep->declBus(c+183,"SocTop rvcpu1 id_ex_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+184,"SocTop rvcpu1 id_ex_pc", false,-1, 63,0);
        tracep->declBus(c+186,"SocTop rvcpu1 id_ex_s_offset", false,-1, 11,0);
        tracep->declBus(c+187,"SocTop rvcpu1 id_ex_memsel", false,-1, 2,0);
        tracep->declQuad(c+355,"SocTop rvcpu1 id_pip_jalrpc", false,-1, 63,0);
        tracep->declBit(c+188,"SocTop rvcpu1 id_pip_jalrena", false,-1);
        tracep->declBit(c+189,"SocTop rvcpu1 id_if_flush", false,-1);
        tracep->declBus(c+190,"SocTop rvcpu1 stall_ctrl", false,-1, 4,0);
        tracep->declQuad(c+786,"SocTop rvcpu1 regs_id_data1", false,-1, 63,0);
        tracep->declQuad(c+788,"SocTop rvcpu1 regs_id_data2", false,-1, 63,0);
        tracep->declQuad(c+191,"SocTop rvcpu1 mem_id_data", false,-1, 63,0);
        tracep->declBus(c+437,"SocTop rvcpu1 mem_id_addr", false,-1, 4,0);
        tracep->declBit(c+438,"SocTop rvcpu1 mem_id_ena", false,-1);
        tracep->declBit(c+790,"SocTop rvcpu1 mem_ctrl_req", false,-1);
        tracep->declBus(c+439,"SocTop rvcpu1 wb_id_addr", false,-1, 4,0);
        tracep->declBit(c+440,"SocTop rvcpu1 wb_id_ena", false,-1);
        tracep->declQuad(c+441,"SocTop rvcpu1 wb_regfile_data", false,-1, 63,0);
        tracep->declQuad(c+443,"SocTop rvcpu1 idex_ex_pc", false,-1, 63,0);
        tracep->declBus(c+445,"SocTop rvcpu1 idex_ex_type", false,-1, 7,0);
        tracep->declBus(c+446,"SocTop rvcpu1 idex_ex_opcode", false,-1, 7,0);
        tracep->declQuad(c+447,"SocTop rvcpu1 idex_ex_op1", false,-1, 63,0);
        tracep->declQuad(c+449,"SocTop rvcpu1 idex_ex_op2", false,-1, 63,0);
        tracep->declBit(c+451,"SocTop rvcpu1 idex_ex_rdena", false,-1);
        tracep->declBus(c+428,"SocTop rvcpu1 idex_ex_rdaddr", false,-1, 4,0);
        tracep->declBus(c+452,"SocTop rvcpu1 idex_ex_offset", false,-1, 11,0);
        tracep->declBus(c+431,"SocTop rvcpu1 idex_ex_sel", false,-1, 2,0);
        tracep->declBus(c+453,"SocTop rvcpu1 exmem_mem_type", false,-1, 7,0);
        tracep->declBit(c+438,"SocTop rvcpu1 exmem_mem_ena", false,-1);
        tracep->declQuad(c+454,"SocTop rvcpu1 exmem_mem_data", false,-1, 63,0);
        tracep->declBus(c+437,"SocTop rvcpu1 exmem_mem_addr", false,-1, 4,0);
        tracep->declBus(c+456,"SocTop rvcpu1 exmem_mem_sel", false,-1, 2,0);
        tracep->declQuad(c+457,"SocTop rvcpu1 exmem_mem_lsaddr", false,-1, 63,0);
        tracep->declQuad(c+193,"SocTop rvcpu1 ex_ex_mem_pc", false,-1, 63,0);
        tracep->declQuad(c+459,"SocTop rvcpu1 ex_mem_mem_pc", false,-1, 63,0);
        tracep->declQuad(c+195,"SocTop rvcpu1 mem_mem_wb_pc", false,-1, 63,0);
        tracep->declBus(c+197,"SocTop rvcpu1 id_id_ex_inst", false,-1, 31,0);
        tracep->declBus(c+461,"SocTop rvcpu1 id_ex_ex_inst", false,-1, 31,0);
        tracep->declBus(c+198,"SocTop rvcpu1 ex_ex_mem_inst", false,-1, 31,0);
        tracep->declBus(c+462,"SocTop rvcpu1 ex_mem_mem_inst", false,-1, 31,0);
        tracep->declBus(c+199,"SocTop rvcpu1 mem_mem_wb_inst", false,-1, 31,0);
        tracep->declBit(c+756,"SocTop rvcpu1 pip_fore0 rst", false,-1);
        tracep->declQuad(c+397,"SocTop rvcpu1 pip_fore0 pc_i", false,-1, 63,0);
        tracep->declBus(c+399,"SocTop rvcpu1 pip_fore0 inst", false,-1, 31,0);
        tracep->declQuad(c+780,"SocTop rvcpu1 pip_fore0 x1_data", false,-1, 63,0);
        tracep->declQuad(c+783,"SocTop rvcpu1 pip_fore0 pc_o", false,-1, 63,0);
        tracep->declBus(c+422,"SocTop rvcpu1 pip_fore0 x1_addr", false,-1, 4,0);
        tracep->declBit(c+782,"SocTop rvcpu1 pip_fore0 x1_ena", false,-1);
        tracep->declBus(c+463,"SocTop rvcpu1 pip_fore0 j_imm", false,-1, 20,1);
        tracep->declBus(c+464,"SocTop rvcpu1 pip_fore0 i_imm", false,-1, 11,0);
        tracep->declBus(c+465,"SocTop rvcpu1 pip_fore0 b_imm", false,-1, 12,1);
        tracep->declBus(c+466,"SocTop rvcpu1 pip_fore0 opcode", false,-1, 6,0);
        tracep->declBit(c+467,"SocTop rvcpu1 pip_fore0 inst_jal", false,-1);
        tracep->declBit(c+468,"SocTop rvcpu1 pip_fore0 inst_jalr", false,-1);
        tracep->declBit(c+469,"SocTop rvcpu1 pip_fore0 inst_bxx", false,-1);
        tracep->declQuad(c+791,"SocTop rvcpu1 pip_fore0 operand1", false,-1, 63,0);
        tracep->declQuad(c+793,"SocTop rvcpu1 pip_fore0 operand2", false,-1, 63,0);
        tracep->declQuad(c+200,"SocTop rvcpu1 pip_fore0 j_pc", false,-1, 63,0);
        tracep->declBit(c+755,"SocTop rvcpu1 pc1 clk", false,-1);
        tracep->declBit(c+756,"SocTop rvcpu1 pc1 rst", false,-1);
        tracep->declQuad(c+783,"SocTop rvcpu1 pc1 static_pc_i", false,-1, 63,0);
        tracep->declQuad(c+355,"SocTop rvcpu1 pc1 id_pc_i", false,-1, 63,0);
        tracep->declBit(c+188,"SocTop rvcpu1 pc1 id_pc_ena", false,-1);
        tracep->declQuad(c+434,"SocTop rvcpu1 pc1 ex_pc_i", false,-1, 63,0);
        tracep->declBit(c+427,"SocTop rvcpu1 pc1 ex_pc_ena", false,-1);
        tracep->declBit(c+202,"SocTop rvcpu1 pc1 pc_stall", false,-1);
        tracep->declQuad(c+397,"SocTop rvcpu1 pc1 pc", false,-1, 63,0);
        tracep->declBit(c+426,"SocTop rvcpu1 pc1 new_sign", false,-1);
        tracep->declBit(c+755,"SocTop rvcpu1 if_id2 clk", false,-1);
        tracep->declBit(c+756,"SocTop rvcpu1 if_id2 rst", false,-1);
        tracep->declQuad(c+397,"SocTop rvcpu1 if_id2 if_pc", false,-1, 63,0);
        tracep->declBus(c+399,"SocTop rvcpu1 if_id2 if_inst", false,-1, 31,0);
        tracep->declBit(c+426,"SocTop rvcpu1 if_id2 if_newpc", false,-1);
        tracep->declBit(c+427,"SocTop rvcpu1 if_id2 if_id_flush", false,-1);
        tracep->declBit(c+189,"SocTop rvcpu1 if_id2 if_id_bubble", false,-1);
        tracep->declBit(c+400,"SocTop rvcpu1 if_id2 if_inst_valid", false,-1);
        tracep->declBit(c+401,"SocTop rvcpu1 if_id2 if_inst_ready", false,-1);
        tracep->declBus(c+190,"SocTop rvcpu1 if_id2 stall_ctrl", false,-1, 4,0);
        tracep->declBit(c+169,"SocTop rvcpu1 if_id2 if_stall_req", false,-1);
        tracep->declQuad(c+423,"SocTop rvcpu1 if_id2 id_pc", false,-1, 63,0);
        tracep->declBus(c+425,"SocTop rvcpu1 if_id2 id_inst", false,-1, 31,0);
        tracep->declBit(c+756,"SocTop rvcpu1 id3 rst", false,-1);
        tracep->declBus(c+425,"SocTop rvcpu1 id3 inst_i", false,-1, 31,0);
        tracep->declQuad(c+423,"SocTop rvcpu1 id3 pc_i", false,-1, 63,0);
        tracep->declQuad(c+786,"SocTop rvcpu1 id3 op1_data_i", false,-1, 63,0);
        tracep->declQuad(c+788,"SocTop rvcpu1 id3 op2_data_i", false,-1, 63,0);
        tracep->declBus(c+172,"SocTop rvcpu1 id3 op1_addr_o", false,-1, 4,0);
        tracep->declBus(c+174,"SocTop rvcpu1 id3 op2_addr_o", false,-1, 4,0);
        tracep->declBit(c+173,"SocTop rvcpu1 id3 op1_read_o", false,-1);
        tracep->declBit(c+175,"SocTop rvcpu1 id3 op2_read_o", false,-1);
        tracep->declQuad(c+170,"SocTop rvcpu1 id3 ex_rd_data", false,-1, 63,0);
        tracep->declBus(c+428,"SocTop rvcpu1 id3 ex_rd_addr", false,-1, 4,0);
        tracep->declBit(c+429,"SocTop rvcpu1 id3 ex_rd_ena", false,-1);
        tracep->declBus(c+430,"SocTop rvcpu1 id3 ex_inst_type", false,-1, 7,0);
        tracep->declQuad(c+191,"SocTop rvcpu1 id3 mem_rd_data", false,-1, 63,0);
        tracep->declBus(c+437,"SocTop rvcpu1 id3 mem_rd_addr", false,-1, 4,0);
        tracep->declBit(c+438,"SocTop rvcpu1 id3 mem_rd_ena", false,-1);
        tracep->declBit(c+440,"SocTop rvcpu1 id3 wb_rd_ena", false,-1);
        tracep->declBus(c+439,"SocTop rvcpu1 id3 wb_rd_addr", false,-1, 4,0);
        tracep->declBit(c+785,"SocTop rvcpu1 id3 id_stall_req", false,-1);
        tracep->declBit(c+169,"SocTop rvcpu1 id3 if_stall_req", false,-1);
        tracep->declBus(c+176,"SocTop rvcpu1 id3 inst_type", false,-1, 7,0);
        tracep->declBus(c+177,"SocTop rvcpu1 id3 inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+178,"SocTop rvcpu1 id3 op1_o", false,-1, 63,0);
        tracep->declQuad(c+180,"SocTop rvcpu1 id3 op2_o", false,-1, 63,0);
        tracep->declBit(c+182,"SocTop rvcpu1 id3 rd_w_ena", false,-1);
        tracep->declBus(c+183,"SocTop rvcpu1 id3 rd_w_addr", false,-1, 4,0);
        tracep->declQuad(c+184,"SocTop rvcpu1 id3 pc_o", false,-1, 63,0);
        tracep->declBus(c+197,"SocTop rvcpu1 id3 inst_o", false,-1, 31,0);
        tracep->declBus(c+186,"SocTop rvcpu1 id3 store_addr_offset", false,-1, 11,0);
        tracep->declBus(c+187,"SocTop rvcpu1 id3 mem_op_sel", false,-1, 2,0);
        tracep->declBit(c+188,"SocTop rvcpu1 id3 jalr_pc_ena", false,-1);
        tracep->declQuad(c+355,"SocTop rvcpu1 id3 jalr_pc", false,-1, 63,0);
        tracep->declBit(c+189,"SocTop rvcpu1 id3 id_flush", false,-1);
        tracep->declBus(c+470,"SocTop rvcpu1 id3 opcode", false,-1, 6,0);
        tracep->declBus(c+471,"SocTop rvcpu1 id3 rd", false,-1, 4,0);
        tracep->declBus(c+472,"SocTop rvcpu1 id3 funct3", false,-1, 2,0);
        tracep->declBus(c+203,"SocTop rvcpu1 id3 rs1", false,-1, 4,0);
        tracep->declBus(c+473,"SocTop rvcpu1 id3 imm", false,-1, 11,0);
        tracep->declBus(c+474,"SocTop rvcpu1 id3 funct7", false,-1, 6,0);
        tracep->declBus(c+475,"SocTop rvcpu1 id3 rs2", false,-1, 4,0);
        tracep->declBus(c+476,"SocTop rvcpu1 id3 u_imm", false,-1, 19,0);
        tracep->declBus(c+477,"SocTop rvcpu1 id3 s_imm", false,-1, 11,0);
        tracep->declBit(c+204,"SocTop rvcpu1 id3 inst_lui", false,-1);
        tracep->declBit(c+205,"SocTop rvcpu1 id3 inst_auipc", false,-1);
        tracep->declBit(c+206,"SocTop rvcpu1 id3 inst_jal", false,-1);
        tracep->declBit(c+207,"SocTop rvcpu1 id3 inst_jalr", false,-1);
        tracep->declBit(c+208,"SocTop rvcpu1 id3 inst_jump", false,-1);
        tracep->declBit(c+357,"SocTop rvcpu1 id3 inst_addi", false,-1);
        tracep->declBit(c+358,"SocTop rvcpu1 id3 inst_slti", false,-1);
        tracep->declBit(c+359,"SocTop rvcpu1 id3 inst_sltiu", false,-1);
        tracep->declBit(c+360,"SocTop rvcpu1 id3 inst_xori", false,-1);
        tracep->declBit(c+361,"SocTop rvcpu1 id3 inst_ori", false,-1);
        tracep->declBit(c+362,"SocTop rvcpu1 id3 inst_andi", false,-1);
        tracep->declBit(c+363,"SocTop rvcpu1 id3 inst_slli", false,-1);
        tracep->declBit(c+364,"SocTop rvcpu1 id3 inst_srli", false,-1);
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
        tracep->declBit(c+224,"SocTop rvcpu1 id3 inst_addw", false,-1);
        tracep->declBit(c+225,"SocTop rvcpu1 id3 inst_subw", false,-1);
        tracep->declBit(c+226,"SocTop rvcpu1 id3 inst_sllw", false,-1);
        tracep->declBit(c+227,"SocTop rvcpu1 id3 inst_srlw", false,-1);
        tracep->declBit(c+228,"SocTop rvcpu1 id3 inst_sraw", false,-1);
        tracep->declBit(c+365,"SocTop rvcpu1 id3 inst_beq", false,-1);
        tracep->declBit(c+366,"SocTop rvcpu1 id3 inst_ben", false,-1);
        tracep->declBit(c+367,"SocTop rvcpu1 id3 inst_blt", false,-1);
        tracep->declBit(c+368,"SocTop rvcpu1 id3 inst_bge", false,-1);
        tracep->declBit(c+369,"SocTop rvcpu1 id3 inst_bltu", false,-1);
        tracep->declBit(c+370,"SocTop rvcpu1 id3 inst_bgeu", false,-1);
        tracep->declBit(c+229,"SocTop rvcpu1 id3 inst_csrrw", false,-1);
        tracep->declBit(c+230,"SocTop rvcpu1 id3 inst_csrrs", false,-1);
        tracep->declBit(c+231,"SocTop rvcpu1 id3 inst_csrrc", false,-1);
        tracep->declBit(c+232,"SocTop rvcpu1 id3 inst_csrrwi", false,-1);
        tracep->declBit(c+371,"SocTop rvcpu1 id3 inst_csrrsi", false,-1);
        tracep->declBit(c+372,"SocTop rvcpu1 id3 inst_csrrci", false,-1);
        tracep->declBit(c+233,"SocTop rvcpu1 id3 inst_div", false,-1);
        tracep->declBit(c+234,"SocTop rvcpu1 id3 inst_divu", false,-1);
        tracep->declBit(c+235,"SocTop rvcpu1 id3 inst_mul", false,-1);
        tracep->declBit(c+236,"SocTop rvcpu1 id3 inst_mulh", false,-1);
        tracep->declBit(c+237,"SocTop rvcpu1 id3 inst_mulhsu", false,-1);
        tracep->declBit(c+238,"SocTop rvcpu1 id3 inst_mulhu", false,-1);
        tracep->declBit(c+239,"SocTop rvcpu1 id3 inst_rem", false,-1);
        tracep->declBit(c+240,"SocTop rvcpu1 id3 inst_remu", false,-1);
        tracep->declBit(c+241,"SocTop rvcpu1 id3 inst_divuw", false,-1);
        tracep->declBit(c+242,"SocTop rvcpu1 id3 inst_divw", false,-1);
        tracep->declBit(c+243,"SocTop rvcpu1 id3 inst_mulw", false,-1);
        tracep->declBit(c+244,"SocTop rvcpu1 id3 inst_remuw", false,-1);
        tracep->declBit(c+245,"SocTop rvcpu1 id3 inst_remw", false,-1);
        tracep->declBit(c+246,"SocTop rvcpu1 id3 inst_csr_rs1", false,-1);
        tracep->declBit(c+232,"SocTop rvcpu1 id3 inst_csr_imm", false,-1);
        tracep->declBit(c+373,"SocTop rvcpu1 id3 inst_ecall", false,-1);
        tracep->declBit(c+247,"SocTop rvcpu1 id3 inst_ebreak", false,-1);
        tracep->declBit(c+374,"SocTop rvcpu1 id3 inst_mret", false,-1);
        tracep->declBit(c+795,"SocTop rvcpu1 id3 op1_loda_relate", false,-1);
        tracep->declBit(c+796,"SocTop rvcpu1 id3 op2_loda_relate", false,-1);
        tracep->declBit(c+248,"SocTop rvcpu1 id3 ex_op1", false,-1);
        tracep->declBit(c+249,"SocTop rvcpu1 id3 mem_op1", false,-1);
        tracep->declBit(c+375,"SocTop rvcpu1 id3 ex_op2", false,-1);
        tracep->declBit(c+376,"SocTop rvcpu1 id3 mem_op2", false,-1);
        tracep->declBit(c+377,"SocTop rvcpu1 id3 wb_op1", false,-1);
        tracep->declQuad(c+378,"SocTop rvcpu1 id3 jalr_pc_temp", false,-1, 63,0);
        tracep->declBit(c+380,"SocTop rvcpu1 id3 predict_success", false,-1);
        tracep->declBit(c+755,"SocTop rvcpu1 id_ex4 clk", false,-1);
        tracep->declBit(c+756,"SocTop rvcpu1 id_ex4 rst", false,-1);
        tracep->declBit(c+427,"SocTop rvcpu1 id_ex4 id_ex_bubble", false,-1);
        tracep->declBus(c+190,"SocTop rvcpu1 id_ex4 stall_ctrl", false,-1, 4,0);
        tracep->declBus(c+197,"SocTop rvcpu1 id_ex4 id_inst", false,-1, 31,0);
        tracep->declQuad(c+184,"SocTop rvcpu1 id_ex4 id_pc", false,-1, 63,0);
        tracep->declBus(c+176,"SocTop rvcpu1 id_ex4 id_inst_type", false,-1, 7,0);
        tracep->declBus(c+177,"SocTop rvcpu1 id_ex4 id_inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+178,"SocTop rvcpu1 id_ex4 id_op1", false,-1, 63,0);
        tracep->declQuad(c+180,"SocTop rvcpu1 id_ex4 id_op2", false,-1, 63,0);
        tracep->declBit(c+182,"SocTop rvcpu1 id_ex4 id_rd_ena", false,-1);
        tracep->declBus(c+183,"SocTop rvcpu1 id_ex4 id_rd_addr", false,-1, 4,0);
        tracep->declBus(c+186,"SocTop rvcpu1 id_ex4 id_addr_offset", false,-1, 11,0);
        tracep->declBus(c+187,"SocTop rvcpu1 id_ex4 id_ls_sel", false,-1, 2,0);
        tracep->declBus(c+461,"SocTop rvcpu1 id_ex4 ex_inst", false,-1, 31,0);
        tracep->declQuad(c+443,"SocTop rvcpu1 id_ex4 ex_pc", false,-1, 63,0);
        tracep->declBus(c+445,"SocTop rvcpu1 id_ex4 ex_inst_type", false,-1, 7,0);
        tracep->declBus(c+446,"SocTop rvcpu1 id_ex4 ex_inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+447,"SocTop rvcpu1 id_ex4 ex_op1", false,-1, 63,0);
        tracep->declQuad(c+449,"SocTop rvcpu1 id_ex4 ex_op2", false,-1, 63,0);
        tracep->declBit(c+451,"SocTop rvcpu1 id_ex4 ex_rd_ena", false,-1);
        tracep->declBus(c+428,"SocTop rvcpu1 id_ex4 ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+452,"SocTop rvcpu1 id_ex4 ex_addr_offset", false,-1, 11,0);
        tracep->declBus(c+431,"SocTop rvcpu1 id_ex4 ex_ls_sel", false,-1, 2,0);
        tracep->declBit(c+755,"SocTop rvcpu1 ex5 clk", false,-1);
        tracep->declBit(c+756,"SocTop rvcpu1 ex5 rst", false,-1);
        tracep->declQuad(c+443,"SocTop rvcpu1 ex5 pc_i", false,-1, 63,0);
        tracep->declBus(c+461,"SocTop rvcpu1 ex5 id_ex_inst", false,-1, 31,0);
        tracep->declBus(c+445,"SocTop rvcpu1 ex5 inst_type_i", false,-1, 7,0);
        tracep->declBus(c+446,"SocTop rvcpu1 ex5 inst_opcode_i", false,-1, 7,0);
        tracep->declQuad(c+447,"SocTop rvcpu1 ex5 op1_i", false,-1, 63,0);
        tracep->declQuad(c+449,"SocTop rvcpu1 ex5 op2_i", false,-1, 63,0);
        tracep->declBit(c+451,"SocTop rvcpu1 ex5 rd_ena_i", false,-1);
        tracep->declBus(c+428,"SocTop rvcpu1 ex5 rd_addr_i", false,-1, 4,0);
        tracep->declBus(c+431,"SocTop rvcpu1 ex5 ls_sel_i", false,-1, 2,0);
        tracep->declBus(c+452,"SocTop rvcpu1 ex5 addr_offsel_i", false,-1, 11,0);
        tracep->declBus(c+430,"SocTop rvcpu1 ex5 inst_type_o", false,-1, 7,0);
        tracep->declBit(c+429,"SocTop rvcpu1 ex5 rd_ena_o", false,-1);
        tracep->declBus(c+428,"SocTop rvcpu1 ex5 rd_addr_o", false,-1, 4,0);
        tracep->declQuad(c+170,"SocTop rvcpu1 ex5 rd_data_o", false,-1, 63,0);
        tracep->declQuad(c+193,"SocTop rvcpu1 ex5 ex_pc_o", false,-1, 63,0);
        tracep->declBus(c+198,"SocTop rvcpu1 ex5 ex_inst_o", false,-1, 31,0);
        tracep->declBus(c+431,"SocTop rvcpu1 ex5 ls_sel_o", false,-1, 2,0);
        tracep->declQuad(c+432,"SocTop rvcpu1 ex5 ls_addr_o", false,-1, 63,0);
        tracep->declBit(c+427,"SocTop rvcpu1 ex5 ex_flush", false,-1);
        tracep->declBit(c+427,"SocTop rvcpu1 ex5 branch_pc_ena", false,-1);
        tracep->declQuad(c+434,"SocTop rvcpu1 ex5 branch_pc", false,-1, 63,0);
        tracep->declBit(c+169,"SocTop rvcpu1 ex5 if_stell_req", false,-1);
        tracep->declBit(c+354,"SocTop rvcpu1 ex5 ex_stall_req", false,-1);
        tracep->declBit(c+436,"SocTop rvcpu1 ex5 mul_div_req", false,-1);
        tracep->declBit(c+402,"SocTop rvcpu1 ex5 timer_intr", false,-1);
        tracep->declBit(c+250,"SocTop rvcpu1 ex5 ex_stall", false,-1);
        tracep->declQuad(c+251,"SocTop rvcpu1 ex5 exe_res", false,-1, 63,0);
        tracep->declQuad(c+478,"SocTop rvcpu1 ex5 op2_i_mux", false,-1, 63,0);
        tracep->declQuad(c+480,"SocTop rvcpu1 ex5 op1_sub_op2", false,-1, 63,0);
        tracep->declQuad(c+482,"SocTop rvcpu1 ex5 op1_add_op2", false,-1, 63,0);
        tracep->declQuad(c+484,"SocTop rvcpu1 ex5 op1_addw_op2", false,-1, 63,0);
        tracep->declBit(c+486,"SocTop rvcpu1 ex5 op1_ls_op2", false,-1);
        tracep->declQuad(c+487,"SocTop rvcpu1 ex5 shift_res", false,-1, 63,0);
        tracep->declBus(c+489,"SocTop rvcpu1 ex5 op1_sllw_op2", false,-1, 31,0);
        tracep->declQuad(c+490,"SocTop rvcpu1 ex5 sllw_res", false,-1, 63,0);
        tracep->declBus(c+492,"SocTop rvcpu1 ex5 op1_srlw_op2", false,-1, 31,0);
        tracep->declQuad(c+493,"SocTop rvcpu1 ex5 srlw_res", false,-1, 63,0);
        tracep->declBus(c+495,"SocTop rvcpu1 ex5 op1_sraw_op2", false,-1, 31,0);
        tracep->declQuad(c+496,"SocTop rvcpu1 ex5 sraw_res", false,-1, 63,0);
        tracep->declBus(c+498,"SocTop rvcpu1 ex5 op1_subw_op2", false,-1, 31,0);
        tracep->declQuad(c+499,"SocTop rvcpu1 ex5 subw_res", false,-1, 63,0);
        tracep->declQuad(c+501,"SocTop rvcpu1 ex5 upper_imm", false,-1, 63,0);
        tracep->declBit(c+755,"SocTop rvcpu1 ex5 clk_in", false,-1);
        tracep->declQuad(c+831,"SocTop rvcpu1 ex5 mul_data", false,-1, 63,0);
        tracep->declBit(c+503,"SocTop rvcpu1 ex5 mul_finish_sign", false,-1);
        tracep->declBit(c+504,"SocTop rvcpu1 ex5 mul_ready", false,-1);
        tracep->declQuad(c+831,"SocTop rvcpu1 ex5 divrem_data", false,-1, 63,0);
        tracep->declBit(c+505,"SocTop rvcpu1 ex5 dr_finish_sign", false,-1);
        tracep->declBit(c+506,"SocTop rvcpu1 ex5 dr_ready", false,-1);
        tracep->declBit(c+507,"SocTop rvcpu1 ex5 ex_flush_branch", false,-1);
        tracep->declBit(c+508,"SocTop rvcpu1 ex5 tmr_trap_ena", false,-1);
        tracep->declBus(c+509,"SocTop rvcpu1 ex5 csr_idx", false,-1, 11,0);
        tracep->declQuad(c+510,"SocTop rvcpu1 ex5 read_csr_data", false,-1, 63,0);
        tracep->declBit(c+512,"SocTop rvcpu1 ex5 trap_ena", false,-1);
        tracep->declBit(c+513,"SocTop rvcpu1 ex5 ecall_trap_ena", false,-1);
        tracep->declBit(c+514,"SocTop rvcpu1 ex5 cmt_mret_ena", false,-1);
        tracep->declBit(c+515,"SocTop rvcpu1 ex5 csr_wr_en", false,-1);
        tracep->declBit(c+516,"SocTop rvcpu1 ex5 csr_rd_en", false,-1);
        tracep->declQuad(c+517,"SocTop rvcpu1 ex5 wbck_csr_data", false,-1, 63,0);
        tracep->declQuad(c+519,"SocTop rvcpu1 ex5 trap_mcause_value", false,-1, 63,0);
        tracep->declQuad(c+521,"SocTop rvcpu1 ex5 mask_set_res", false,-1, 63,0);
        tracep->declQuad(c+523,"SocTop rvcpu1 ex5 mask_clear_res", false,-1, 63,0);
        tracep->declBit(c+755,"SocTop rvcpu1 ex5 multiplier1 clk", false,-1);
        tracep->declBit(c+756,"SocTop rvcpu1 ex5 multiplier1 rst", false,-1);
        tracep->declBit(c+504,"SocTop rvcpu1 ex5 multiplier1 mult_ready", false,-1);
        tracep->declBit(c+525,"SocTop rvcpu1 ex5 multiplier1 inst_opcode", false,-1);
        tracep->declQuad(c+447,"SocTop rvcpu1 ex5 multiplier1 mult_op1", false,-1, 63,0);
        tracep->declQuad(c+449,"SocTop rvcpu1 ex5 multiplier1 mult_op2", false,-1, 63,0);
        tracep->declQuad(c+831,"SocTop rvcpu1 ex5 multiplier1 product_val", false,-1, 63,0);
        tracep->declBit(c+503,"SocTop rvcpu1 ex5 multiplier1 mult_finish", false,-1);
        tracep->declBit(c+526,"SocTop rvcpu1 ex5 multiplier1 mult_valid", false,-1);
        tracep->declBit(c+527,"SocTop rvcpu1 ex5 multiplier1 op1_signbit", false,-1);
        tracep->declBit(c+528,"SocTop rvcpu1 ex5 multiplier1 op2_signbit", false,-1);
        tracep->declQuad(c+529,"SocTop rvcpu1 ex5 multiplier1 op1_absolute", false,-1, 63,0);
        tracep->declQuad(c+531,"SocTop rvcpu1 ex5 multiplier1 op2_absolute", false,-1, 63,0);
        tracep->declArray(c+533,"SocTop rvcpu1 ex5 multiplier1 multiplcand", false,-1, 127,0);
        tracep->declQuad(c+537,"SocTop rvcpu1 ex5 multiplier1 multipler", false,-1, 63,0);
        tracep->declArray(c+539,"SocTop rvcpu1 ex5 multiplier1 product_lins", false,-1, 127,0);
        tracep->declArray(c+543,"SocTop rvcpu1 ex5 multiplier1 product_temp", false,-1, 127,0);
        tracep->declBit(c+547,"SocTop rvcpu1 ex5 multiplier1 product_signbit", false,-1);
        tracep->declBit(c+755,"SocTop rvcpu1 ex5 divider2 clk", false,-1);
        tracep->declBit(c+756,"SocTop rvcpu1 ex5 divider2 rst", false,-1);
        tracep->declQuad(c+447,"SocTop rvcpu1 ex5 divider2 divisor", false,-1, 63,0);
        tracep->declQuad(c+449,"SocTop rvcpu1 ex5 divider2 dividend", false,-1, 63,0);
        tracep->declBit(c+525,"SocTop rvcpu1 ex5 divider2 inst_opcode", false,-1);
        tracep->declBit(c+506,"SocTop rvcpu1 ex5 divider2 div_ready", false,-1);
        tracep->declQuad(c+831,"SocTop rvcpu1 ex5 divider2 div_rem_data", false,-1, 63,0);
        tracep->declBit(c+505,"SocTop rvcpu1 ex5 divider2 div_finish", false,-1);
        tracep->declQuad(c+548,"SocTop rvcpu1 ex5 divider2 shang_data", false,-1, 63,0);
        tracep->declQuad(c+550,"SocTop rvcpu1 ex5 divider2 yushu_data", false,-1, 63,0);
        tracep->declBit(c+505,"SocTop rvcpu1 ex5 divider2 finish_sign", false,-1);
        tracep->declBit(c+527,"SocTop rvcpu1 ex5 divider2 op1_signbit", false,-1);
        tracep->declBit(c+528,"SocTop rvcpu1 ex5 divider2 op2_signbit", false,-1);
        tracep->declQuad(c+529,"SocTop rvcpu1 ex5 divider2 op1_absolute", false,-1, 63,0);
        tracep->declQuad(c+552,"SocTop rvcpu1 ex5 divider2 op2_absolute", false,-1, 63,0);
        tracep->declBit(c+554,"SocTop rvcpu1 ex5 divider2 div_rem_signbit", false,-1);
        tracep->declQuad(c+529,"SocTop rvcpu1 ex5 divider2 tempa", false,-1, 63,0);
        tracep->declQuad(c+552,"SocTop rvcpu1 ex5 divider2 tempb", false,-1, 63,0);
        tracep->declBus(c+555,"SocTop rvcpu1 ex5 divider2 counter", false,-1, 7,0);
        tracep->declArray(c+556,"SocTop rvcpu1 ex5 divider2 temp_a", false,-1, 127,0);
        tracep->declArray(c+560,"SocTop rvcpu1 ex5 divider2 temp_b", false,-1, 127,0);
        tracep->declQuad(c+564,"SocTop rvcpu1 ex5 divider2 fan_data", false,-1, 63,0);
        tracep->declBit(c+755,"SocTop rvcpu1 ex5 csr0 clk", false,-1);
        tracep->declBit(c+756,"SocTop rvcpu1 ex5 csr0 rst", false,-1);
        tracep->declQuad(c+443,"SocTop rvcpu1 ex5 csr0 pc_i", false,-1, 63,0);
        tracep->declBit(c+515,"SocTop rvcpu1 ex5 csr0 csr_wr_en", false,-1);
        tracep->declBit(c+516,"SocTop rvcpu1 ex5 csr0 csr_rd_en", false,-1);
        tracep->declBus(c+509,"SocTop rvcpu1 ex5 csr0 csr_idx", false,-1, 11,0);
        tracep->declBit(c+514,"SocTop rvcpu1 ex5 csr0 cmt_mret_ena", false,-1);
        tracep->declBit(c+513,"SocTop rvcpu1 ex5 csr0 ecall_trap_ena", false,-1);
        tracep->declQuad(c+519,"SocTop rvcpu1 ex5 csr0 trap_mcause_value", false,-1, 63,0);
        tracep->declBit(c+402,"SocTop rvcpu1 ex5 csr0 tmr_intr_ena", false,-1);
        tracep->declBit(c+508,"SocTop rvcpu1 ex5 csr0 tmr_trap_ena", false,-1);
        tracep->declQuad(c+510,"SocTop rvcpu1 ex5 csr0 read_csr_data", false,-1, 63,0);
        tracep->declQuad(c+517,"SocTop rvcpu1 ex5 csr0 wbck_csr_data", false,-1, 63,0);
        tracep->declBit(c+250,"SocTop rvcpu1 ex5 csr0 ex_stall", false,-1);
        tracep->declBit(c+566,"SocTop rvcpu1 ex5 csr0 sel_mcycle", false,-1);
        tracep->declBit(c+567,"SocTop rvcpu1 ex5 csr0 rd_mcycle", false,-1);
        tracep->declBit(c+568,"SocTop rvcpu1 ex5 csr0 wr_mcycle", false,-1);
        tracep->declQuad(c+569,"SocTop rvcpu1 ex5 csr0 csr_mcycle", false,-1, 63,0);
        tracep->declBit(c+571,"SocTop rvcpu1 ex5 csr0 sel_mstatus", false,-1);
        tracep->declBit(c+572,"SocTop rvcpu1 ex5 csr0 rd_mstatus", false,-1);
        tracep->declBit(c+573,"SocTop rvcpu1 ex5 csr0 wr_mstatus", false,-1);
        tracep->declBit(c+574,"SocTop rvcpu1 ex5 csr0 mstatus_mpie_ena", false,-1);
        tracep->declBit(c+575,"SocTop rvcpu1 ex5 csr0 mstatus_mpie_nxt", false,-1);
        tracep->declBit(c+576,"SocTop rvcpu1 ex5 csr0 csr_mstatus_mpie", false,-1);
        tracep->declBit(c+574,"SocTop rvcpu1 ex5 csr0 mstatus_mie_ena", false,-1);
        tracep->declBit(c+577,"SocTop rvcpu1 ex5 csr0 mstatus_mie_nxt", false,-1);
        tracep->declBit(c+578,"SocTop rvcpu1 ex5 csr0 csr_mstatus_mie", false,-1);
        tracep->declBit(c+574,"SocTop rvcpu1 ex5 csr0 mstatus_mpp_ena", false,-1);
        tracep->declBus(c+579,"SocTop rvcpu1 ex5 csr0 mstatus_mpp_nxt", false,-1, 1,0);
        tracep->declBus(c+580,"SocTop rvcpu1 ex5 csr0 csr_mstatus_mpp", false,-1, 1,0);
        tracep->declBus(c+817,"SocTop rvcpu1 ex5 csr0 csr_mstatus_xs", false,-1, 1,0);
        tracep->declBus(c+581,"SocTop rvcpu1 ex5 csr0 csr_mstatus_fs", false,-1, 1,0);
        tracep->declBit(c+582,"SocTop rvcpu1 ex5 csr0 csr_mstatus_sd", false,-1);
        tracep->declQuad(c+583,"SocTop rvcpu1 ex5 csr0 csr_mstatus", false,-1, 63,0);
        tracep->declBit(c+585,"SocTop rvcpu1 ex5 csr0 sel_mtvec", false,-1);
        tracep->declBit(c+586,"SocTop rvcpu1 ex5 csr0 rd_mtvec", false,-1);
        tracep->declBit(c+587,"SocTop rvcpu1 ex5 csr0 wr_mtvec", false,-1);
        tracep->declQuad(c+588,"SocTop rvcpu1 ex5 csr0 csr_mtvec_base", false,-1, 63,2);
        tracep->declBus(c+817,"SocTop rvcpu1 ex5 csr0 csr_mtvec_mode", false,-1, 1,0);
        tracep->declQuad(c+590,"SocTop rvcpu1 ex5 csr0 csr_mtvec", false,-1, 63,0);
        tracep->declBit(c+592,"SocTop rvcpu1 ex5 csr0 sel_mepc", false,-1);
        tracep->declBit(c+593,"SocTop rvcpu1 ex5 csr0 rd_mepc", false,-1);
        tracep->declBit(c+594,"SocTop rvcpu1 ex5 csr0 wr_mepc", false,-1);
        tracep->declQuad(c+595,"SocTop rvcpu1 ex5 csr0 csr_mepc", false,-1, 63,0);
        tracep->declBit(c+597,"SocTop rvcpu1 ex5 csr0 sel_mcause", false,-1);
        tracep->declBit(c+598,"SocTop rvcpu1 ex5 csr0 rd_mcause", false,-1);
        tracep->declBit(c+599,"SocTop rvcpu1 ex5 csr0 wr_mcause", false,-1);
        tracep->declBit(c+600,"SocTop rvcpu1 ex5 csr0 csr_mcause_ena", false,-1);
        tracep->declQuad(c+601,"SocTop rvcpu1 ex5 csr0 csr_mcause_nxt", false,-1, 63,0);
        tracep->declQuad(c+603,"SocTop rvcpu1 ex5 csr0 csr_mcause", false,-1, 63,0);
        tracep->declBit(c+605,"SocTop rvcpu1 ex5 csr0 sle_mie", false,-1);
        tracep->declBit(c+606,"SocTop rvcpu1 ex5 csr0 rd_mie", false,-1);
        tracep->declBit(c+607,"SocTop rvcpu1 ex5 csr0 wr_mie", false,-1);
        tracep->declBit(c+608,"SocTop rvcpu1 ex5 csr0 csr_mie_mtie", false,-1);
        tracep->declQuad(c+609,"SocTop rvcpu1 ex5 csr0 csr_mie", false,-1, 63,0);
        tracep->declBit(c+611,"SocTop rvcpu1 ex5 csr0 sel_mip", false,-1);
        tracep->declBit(c+612,"SocTop rvcpu1 ex5 csr0 rd_mip", false,-1);
        tracep->declBit(c+613,"SocTop rvcpu1 ex5 csr0 csr_mip_mtip", false,-1);
        tracep->declQuad(c+614,"SocTop rvcpu1 ex5 csr0 csr_mip", false,-1, 63,0);
        tracep->declBit(c+616,"SocTop rvcpu1 ex5 csr0 sel_mscratch", false,-1);
        tracep->declBit(c+617,"SocTop rvcpu1 ex5 csr0 rd_mscrstch", false,-1);
        tracep->declBit(c+618,"SocTop rvcpu1 ex5 csr0 wr_mscrstch", false,-1);
        tracep->declQuad(c+619,"SocTop rvcpu1 ex5 csr0 csr_mscrstch", false,-1, 63,0);
        tracep->declBit(c+755,"SocTop rvcpu1 ex_mem6 clk", false,-1);
        tracep->declBit(c+756,"SocTop rvcpu1 ex_mem6 rst", false,-1);
        tracep->declQuad(c+193,"SocTop rvcpu1 ex_mem6 ex_mem_pc_i", false,-1, 63,0);
        tracep->declBus(c+198,"SocTop rvcpu1 ex_mem6 ex_mem_inst_i", false,-1, 31,0);
        tracep->declBus(c+190,"SocTop rvcpu1 ex_mem6 stall_ctrl", false,-1, 4,0);
        tracep->declBus(c+430,"SocTop rvcpu1 ex_mem6 ex_inst_type", false,-1, 7,0);
        tracep->declBit(c+429,"SocTop rvcpu1 ex_mem6 ex_rd_ena", false,-1);
        tracep->declQuad(c+170,"SocTop rvcpu1 ex_mem6 ex_rd_data", false,-1, 63,0);
        tracep->declBus(c+428,"SocTop rvcpu1 ex_mem6 ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+431,"SocTop rvcpu1 ex_mem6 ex_ls_sel", false,-1, 2,0);
        tracep->declQuad(c+432,"SocTop rvcpu1 ex_mem6 ex_ls_addr", false,-1, 63,0);
        tracep->declBus(c+453,"SocTop rvcpu1 ex_mem6 mem_inst_type", false,-1, 7,0);
        tracep->declBit(c+438,"SocTop rvcpu1 ex_mem6 mem_rd_ena", false,-1);
        tracep->declQuad(c+454,"SocTop rvcpu1 ex_mem6 mem_rd_data", false,-1, 63,0);
        tracep->declBus(c+437,"SocTop rvcpu1 ex_mem6 mem_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+459,"SocTop rvcpu1 ex_mem6 ex_mem_pc_o", false,-1, 63,0);
        tracep->declBus(c+462,"SocTop rvcpu1 ex_mem6 ex_mem_inst_o", false,-1, 31,0);
        tracep->declBus(c+456,"SocTop rvcpu1 ex_mem6 mem_ls_sel", false,-1, 2,0);
        tracep->declQuad(c+457,"SocTop rvcpu1 ex_mem6 mem_ls_addr", false,-1, 63,0);
        tracep->declBit(c+756,"SocTop rvcpu1 mem7 rst", false,-1);
        tracep->declBus(c+453,"SocTop rvcpu1 mem7 inst_type_i", false,-1, 7,0);
        tracep->declBit(c+438,"SocTop rvcpu1 mem7 rd_ena_i", false,-1);
        tracep->declQuad(c+454,"SocTop rvcpu1 mem7 rd_data_i", false,-1, 63,0);
        tracep->declBus(c+437,"SocTop rvcpu1 mem7 rd_addr_i", false,-1, 4,0);
        tracep->declQuad(c+459,"SocTop rvcpu1 mem7 mem_pc_i", false,-1, 63,0);
        tracep->declBus(c+462,"SocTop rvcpu1 mem7 mem_inst_i", false,-1, 31,0);
        tracep->declQuad(c+457,"SocTop rvcpu1 mem7 ls_addr_i", false,-1, 63,0);
        tracep->declBus(c+456,"SocTop rvcpu1 mem7 ls_sel_i", false,-1, 2,0);
        tracep->declQuad(c+3,"SocTop rvcpu1 mem7 data_addr_o", false,-1, 63,0);
        tracep->declBus(c+5,"SocTop rvcpu1 mem7 wmask_o", false,-1, 7,0);
        tracep->declQuad(c+14,"SocTop rvcpu1 mem7 data_i", false,-1, 63,0);
        tracep->declQuad(c+6,"SocTop rvcpu1 mem7 data_o", false,-1, 63,0);
        tracep->declBit(c+8,"SocTop rvcpu1 mem7 we", false,-1);
        tracep->declBit(c+9,"SocTop rvcpu1 mem7 re", false,-1);
        tracep->declBit(c+342,"SocTop rvcpu1 mem7 mem_finish", false,-1);
        tracep->declBit(c+438,"SocTop rvcpu1 mem7 rd_ena_o", false,-1);
        tracep->declQuad(c+191,"SocTop rvcpu1 mem7 rd_data_o", false,-1, 63,0);
        tracep->declBus(c+437,"SocTop rvcpu1 mem7 rd_addr_o", false,-1, 4,0);
        tracep->declQuad(c+195,"SocTop rvcpu1 mem7 mem_pc_o", false,-1, 63,0);
        tracep->declBus(c+199,"SocTop rvcpu1 mem7 mem_inst_o", false,-1, 31,0);
        tracep->declBit(c+790,"SocTop rvcpu1 mem7 mem_stall_req", false,-1);
        tracep->declQuad(c+381,"SocTop rvcpu1 mem7 load_data", false,-1, 63,0);
        tracep->declBus(c+621,"SocTop rvcpu1 mem7 byte_sel", false,-1, 2,0);
        tracep->declBus(c+622,"SocTop rvcpu1 mem7 half_byte_sel", false,-1, 1,0);
        tracep->declBit(c+623,"SocTop rvcpu1 mem7 word_sel", false,-1);
        tracep->declBus(c+253,"SocTop rvcpu1 mem7 data_byte", false,-1, 7,0);
        tracep->declBus(c+254,"SocTop rvcpu1 mem7 data_half_byte", false,-1, 15,0);
        tracep->declBus(c+255,"SocTop rvcpu1 mem7 data_word", false,-1, 31,0);
        tracep->declQuad(c+256,"SocTop rvcpu1 mem7 store_data", false,-1, 63,0);
        tracep->declBus(c+258,"SocTop rvcpu1 mem7 store_mask", false,-1, 7,0);
        tracep->declQuad(c+797,"SocTop rvcpu1 mem7 sb_data", false,-1, 63,0);
        tracep->declQuad(c+799,"SocTop rvcpu1 mem7 sh_data", false,-1, 63,0);
        tracep->declQuad(c+801,"SocTop rvcpu1 mem7 sw_data", false,-1, 63,0);
        tracep->declBus(c+803,"SocTop rvcpu1 mem7 sb_mask", false,-1, 7,0);
        tracep->declBus(c+804,"SocTop rvcpu1 mem7 sh_mask", false,-1, 7,0);
        tracep->declBus(c+805,"SocTop rvcpu1 mem7 sw_mask", false,-1, 7,0);
        tracep->declBit(c+755,"SocTop rvcpu1 mem_wb8 clk", false,-1);
        tracep->declBit(c+756,"SocTop rvcpu1 mem_wb8 rst", false,-1);
        tracep->declQuad(c+195,"SocTop rvcpu1 mem_wb8 wb_pc_i", false,-1, 63,0);
        tracep->declBus(c+199,"SocTop rvcpu1 mem_wb8 wb_inst_i", false,-1, 31,0);
        tracep->declBus(c+190,"SocTop rvcpu1 mem_wb8 stall_ctrl", false,-1, 4,0);
        tracep->declQuad(c+191,"SocTop rvcpu1 mem_wb8 mem_rd_data", false,-1, 63,0);
        tracep->declBus(c+437,"SocTop rvcpu1 mem_wb8 mem_rd_addr", false,-1, 4,0);
        tracep->declBit(c+438,"SocTop rvcpu1 mem_wb8 mem_rd_ena", false,-1);
        tracep->declQuad(c+441,"SocTop rvcpu1 mem_wb8 wb_rd_data", false,-1, 63,0);
        tracep->declBus(c+439,"SocTop rvcpu1 mem_wb8 wb_rd_addr", false,-1, 4,0);
        tracep->declBit(c+440,"SocTop rvcpu1 mem_wb8 wb_rd_ena", false,-1);
        tracep->declQuad(c+624,"SocTop rvcpu1 mem_wb8 wb_pc_o", false,-1, 63,0);
        tracep->declBus(c+626,"SocTop rvcpu1 mem_wb8 wb_inst_o", false,-1, 31,0);
        tracep->declQuad(c+627,"SocTop rvcpu1 mem_wb8 pc_data1", false,-1, 63,0);
        tracep->declBit(c+629,"SocTop rvcpu1 mem_wb8 difftest_exyn", false,-1);
        tracep->declBit(c+630,"SocTop rvcpu1 mem_wb8 teap_yn", false,-1);
        tracep->declQuad(c+631,"SocTop rvcpu1 mem_wb8 trap_code", false,-1, 63,0);
        tracep->declBit(c+756,"SocTop rvcpu1 ctrl9 rst", false,-1);
        tracep->declBit(c+169,"SocTop rvcpu1 ctrl9 if_stall_req", false,-1);
        tracep->declBit(c+785,"SocTop rvcpu1 ctrl9 id_stall_req", false,-1);
        tracep->declBit(c+354,"SocTop rvcpu1 ctrl9 ex_stall_req", false,-1);
        tracep->declBit(c+790,"SocTop rvcpu1 ctrl9 mem_stall_req", false,-1);
        tracep->declBit(c+436,"SocTop rvcpu1 ctrl9 div_mul_req", false,-1);
        tracep->declBus(c+190,"SocTop rvcpu1 ctrl9 stall_ctrl", false,-1, 4,0);
        tracep->declBit(c+755,"SocTop rvcpu1 regfile10 clk", false,-1);
        tracep->declBit(c+756,"SocTop rvcpu1 regfile10 rst", false,-1);
        tracep->declBus(c+439,"SocTop rvcpu1 regfile10 waddr", false,-1, 4,0);
        tracep->declQuad(c+441,"SocTop rvcpu1 regfile10 wdata", false,-1, 63,0);
        tracep->declBit(c+440,"SocTop rvcpu1 regfile10 we", false,-1);
        tracep->declBus(c+172,"SocTop rvcpu1 regfile10 raddr1", false,-1, 4,0);
        tracep->declQuad(c+786,"SocTop rvcpu1 regfile10 rdata1", false,-1, 63,0);
        tracep->declBit(c+173,"SocTop rvcpu1 regfile10 re1", false,-1);
        tracep->declBus(c+174,"SocTop rvcpu1 regfile10 raddr2", false,-1, 4,0);
        tracep->declQuad(c+788,"SocTop rvcpu1 regfile10 rdata2", false,-1, 63,0);
        tracep->declBit(c+175,"SocTop rvcpu1 regfile10 re2", false,-1);
        tracep->declBit(c+782,"SocTop rvcpu1 regfile10 x1_read_ena", false,-1);
        tracep->declQuad(c+780,"SocTop rvcpu1 regfile10 x1_data", false,-1, 63,0);
        tracep->declBus(c+422,"SocTop rvcpu1 regfile10 x1_addr", false,-1, 4,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+633+i*2,"SocTop rvcpu1 regfile10 regs", true,(i+0), 63,0);}}
        tracep->declBus(c+697,"SocTop rvcpu1 regfile10 i", false,-1, 31,0);
        tracep->declBit(c+755,"SocTop i_cache2 clk", false,-1);
        tracep->declBit(c+756,"SocTop i_cache2 rst", false,-1);
        tracep->declQuad(c+397,"SocTop i_cache2 inst_addr", false,-1, 63,0);
        tracep->declBit(c+401,"SocTop i_cache2 inst_ready", false,-1);
        tracep->declBus(c+399,"SocTop i_cache2 inst_data", false,-1, 31,0);
        tracep->declBit(c+400,"SocTop i_cache2 inst_valid", false,-1);
        tracep->declBit(c+10,"SocTop i_cache2 cache_read_ena", false,-1);
        tracep->declBit(c+13,"SocTop i_cache2 cache_read_resp", false,-1);
        tracep->declQuad(c+11,"SocTop i_cache2 cache_addr", false,-1, 63,0);
        tracep->declQuad(c+22,"SocTop i_cache2 cache_in_data", false,-1, 63,0);
        tracep->declBit(c+24,"SocTop i_cache2 cache_in_valid", false,-1);
        tracep->declBit(c+25,"SocTop i_cache2 arb_working_ti", false,-1);
        tracep->declBit(c+259,"SocTop i_cache2 icache_if_shankhand", false,-1);
        tracep->declQuad(c+698,"SocTop i_cache2 icache_tag", false,-1, 54,0);
        tracep->declBus(c+700,"SocTop i_cache2 icache_index", false,-1, 5,0);
        tracep->declBus(c+701,"SocTop i_cache2 state_inst", false,-1, 5,0);
        tracep->declBus(c+260,"SocTop i_cache2 state_inst_nxt", false,-1, 5,0);
        tracep->declBit(c+702,"SocTop i_cache2 read_ok_", false,-1);
        tracep->declBit(c+703,"SocTop i_cache2 read_ok", false,-1);
        tracep->declBit(c+704,"SocTop i_cache2 inst_hit_ok", false,-1);
        tracep->declQuad(c+261,"SocTop i_cache2 miss_data", false,-1, 63,0);
        tracep->declBit(c+263,"SocTop i_cache2 miss_ena_o", false,-1);
        tracep->declBit(c+264,"SocTop i_cache2 miss_ena_t", false,-1);
        tracep->declBit(c+265,"SocTop i_cache2 write_i_ok", false,-1);
        tracep->declQuad(c+705,"SocTop i_cache2 i_tag_data1", false,-1, 54,0);
        tracep->declBit(c+707,"SocTop i_cache2 i_tag_user1", false,-1);
        tracep->declQuad(c+708,"SocTop i_cache2 i_tag_data2", false,-1, 54,0);
        tracep->declBit(c+710,"SocTop i_cache2 i_tag_user2", false,-1);
        tracep->declQuad(c+711,"SocTop i_cache2 inst_out_1", false,-1, 63,0);
        tracep->declQuad(c+713,"SocTop i_cache2 inst_out_2", false,-1, 63,0);
        tracep->declBus(c+715,"SocTop i_cache2 i", false,-1, 31,0);
        tracep->declBit(c+755,"SocTop i_cache2 u_tag01 clk", false,-1);
        tracep->declBus(c+700,"SocTop i_cache2 u_tag01 addr_i", false,-1, 5,0);
        tracep->declQuad(c+716,"SocTop i_cache2 u_tag01 data_i", false,-1, 55,0);
        tracep->declBit(c+263,"SocTop i_cache2 u_tag01 write_ena", false,-1);
        tracep->declQuad(c+705,"SocTop i_cache2 u_tag01 tag_data", false,-1, 54,0);
        tracep->declBit(c+707,"SocTop i_cache2 u_tag01 tag_valid", false,-1);
        tracep->declQuad(c+705,"SocTop i_cache2 u_tag01 out_data", false,-1, 54,0);
        tracep->declBit(c+707,"SocTop i_cache2 u_tag01 out_vaild", false,-1);
        tracep->declBit(c+755,"SocTop i_cache2 u_tag02 clk", false,-1);
        tracep->declBus(c+700,"SocTop i_cache2 u_tag02 addr_i", false,-1, 5,0);
        tracep->declQuad(c+716,"SocTop i_cache2 u_tag02 data_i", false,-1, 55,0);
        tracep->declBit(c+264,"SocTop i_cache2 u_tag02 write_ena", false,-1);
        tracep->declQuad(c+708,"SocTop i_cache2 u_tag02 tag_data", false,-1, 54,0);
        tracep->declBit(c+710,"SocTop i_cache2 u_tag02 tag_valid", false,-1);
        tracep->declQuad(c+708,"SocTop i_cache2 u_tag02 out_data", false,-1, 54,0);
        tracep->declBit(c+710,"SocTop i_cache2 u_tag02 out_vaild", false,-1);
        tracep->declBit(c+755,"SocTop i_cache2 u_data01 clk", false,-1);
        tracep->declBus(c+700,"SocTop i_cache2 u_data01 addr_i", false,-1, 5,0);
        tracep->declQuad(c+261,"SocTop i_cache2 u_data01 data_i", false,-1, 63,0);
        tracep->declBit(c+263,"SocTop i_cache2 u_data01 write_ena", false,-1);
        tracep->declQuad(c+711,"SocTop i_cache2 u_data01 data_o", false,-1, 63,0);
        tracep->declQuad(c+711,"SocTop i_cache2 u_data01 out_data", false,-1, 63,0);
        tracep->declBit(c+755,"SocTop i_cache2 u_data02 clk", false,-1);
        tracep->declBus(c+700,"SocTop i_cache2 u_data02 addr_i", false,-1, 5,0);
        tracep->declQuad(c+261,"SocTop i_cache2 u_data02 data_i", false,-1, 63,0);
        tracep->declBit(c+264,"SocTop i_cache2 u_data02 write_ena", false,-1);
        tracep->declQuad(c+713,"SocTop i_cache2 u_data02 data_o", false,-1, 63,0);
        tracep->declQuad(c+713,"SocTop i_cache2 u_data02 out_data", false,-1, 63,0);
        tracep->declBit(c+755,"SocTop d_cache3 clk", false,-1);
        tracep->declBit(c+756,"SocTop d_cache3 rst", false,-1);
        tracep->declQuad(c+3,"SocTop d_cache3 mem_addr_i", false,-1, 63,0);
        tracep->declQuad(c+6,"SocTop d_cache3 mem_data_i", false,-1, 63,0);
        tracep->declBus(c+5,"SocTop d_cache3 mem_strb_i", false,-1, 7,0);
        tracep->declBit(c+9,"SocTop d_cache3 mem_read_valid", false,-1);
        tracep->declBit(c+8,"SocTop d_cache3 mem_write_valid", false,-1);
        tracep->declQuad(c+14,"SocTop d_cache3 mem_data_out", false,-1, 63,0);
        tracep->declBit(c+342,"SocTop d_cache3 mem_data_ready", false,-1);
        tracep->declQuad(c+19,"SocTop d_cache3 in_dcache_data", false,-1, 63,0);
        tracep->declBit(c+21,"SocTop d_cache3 in_dcache_ready", false,-1);
        tracep->declBit(c+345,"SocTop d_cache3 out_dcache_resp", false,-1);
        tracep->declQuad(c+16,"SocTop d_cache3 out_dcache_addr", false,-1, 63,0);
        tracep->declQuad(c+343,"SocTop d_cache3 out_dcache_data", false,-1, 63,0);
        tracep->declBus(c+18,"SocTop d_cache3 out_dcache_type", false,-1, 3,0);
        tracep->declBit(c+383,"SocTop d_cache3 dcache_read_shankhand", false,-1);
        tracep->declBit(c+384,"SocTop d_cache3 dcache_write_shankhand", false,-1);
        tracep->declBit(c+718,"SocTop d_cache3 dcache_read_ready", false,-1);
        tracep->declBit(c+719,"SocTop d_cache3 dcache_write_ready", false,-1);
        tracep->declQuad(c+266,"SocTop d_cache3 dcache_tag", false,-1, 54,0);
        tracep->declBus(c+268,"SocTop d_cache3 dcache_index", false,-1, 5,0);
        tracep->declBus(c+720,"SocTop d_cache3 state_dread", false,-1, 5,0);
        tracep->declBus(c+269,"SocTop d_cache3 state_dread_nxt", false,-1, 5,0);
        tracep->declBit(c+721,"SocTop d_cache3 read_ok_", false,-1);
        tracep->declBit(c+722,"SocTop d_cache3 read_ok", false,-1);
        tracep->declBit(c+270,"SocTop d_cache3 mem_hit_ok", false,-1);
        tracep->declBit(c+385,"SocTop d_cache3 hit_data_ready", false,-1);
        tracep->declBit(c+271,"SocTop d_cache3 dirty_ok", false,-1);
        tracep->declQuad(c+272,"SocTop d_cache3 dirty_out_addr", false,-1, 63,0);
        tracep->declQuad(c+274,"SocTop d_cache3 dirty_out_data", false,-1, 63,0);
        tracep->declBus(c+276,"SocTop d_cache3 dirty_out_type", false,-1, 3,0);
        tracep->declBit(c+277,"SocTop d_cache3 missr_i_ok", false,-1);
        tracep->declBus(c+278,"SocTop d_cache3 missr_out_type", false,-1, 3,0);
        tracep->declQuad(c+279,"SocTop d_cache3 missr_out_addr", false,-1, 63,0);
        tracep->declBus(c+281,"SocTop d_cache3 missr_data_ena1", false,-1, 7,0);
        tracep->declBit(c+282,"SocTop d_cache3 missr_tag_ena1", false,-1);
        tracep->declBus(c+283,"SocTop d_cache3 missr_data_ena2", false,-1, 7,0);
        tracep->declBit(c+284,"SocTop d_cache3 missr_tag_ena2", false,-1);
        tracep->declBit(c+285,"SocTop d_cache3 missr_out_resp", false,-1);
        tracep->declBus(c+723,"SocTop d_cache3 state_dwrite", false,-1, 5,0);
        tracep->declBus(c+286,"SocTop d_cache3 state_dwrite_nxt", false,-1, 5,0);
        tracep->declBit(c+724,"SocTop d_cache3 read_w_ok_", false,-1);
        tracep->declBit(c+725,"SocTop d_cache3 read_w_ok", false,-1);
        tracep->declBit(c+726,"SocTop d_cache3 memw_hit_ok", false,-1);
        tracep->declBus(c+287,"SocTop d_cache3 hitw_data_strb1", false,-1, 7,0);
        tracep->declBus(c+288,"SocTop d_cache3 hitw_data_strb2", false,-1, 7,0);
        tracep->declBit(c+386,"SocTop d_cache3 hitw_data_ready", false,-1);
        tracep->declBit(c+289,"SocTop d_cache3 dirtyw_ok", false,-1);
        tracep->declQuad(c+290,"SocTop d_cache3 dirtyw_out_addr", false,-1, 63,0);
        tracep->declQuad(c+292,"SocTop d_cache3 dirtyw_out_data", false,-1, 63,0);
        tracep->declBus(c+294,"SocTop d_cache3 dirtyw_out_type", false,-1, 3,0);
        tracep->declBit(c+295,"SocTop d_cache3 missw_i_ok", false,-1);
        tracep->declBus(c+296,"SocTop d_cache3 missw_out_type", false,-1, 3,0);
        tracep->declQuad(c+297,"SocTop d_cache3 missw_out_addr", false,-1, 63,0);
        tracep->declBus(c+299,"SocTop d_cache3 missw_data_ena1", false,-1, 7,0);
        tracep->declBit(c+300,"SocTop d_cache3 missw_tag_ena1", false,-1);
        tracep->declBus(c+301,"SocTop d_cache3 missw_data_ena2", false,-1, 7,0);
        tracep->declBit(c+302,"SocTop d_cache3 missw_tag_ena2", false,-1);
        tracep->declBit(c+303,"SocTop d_cache3 missw_out_resp", false,-1);
        tracep->declBus(c+727,"SocTop d_cache3 i", false,-1, 31,0);
        tracep->declBit(c+304,"SocTop d_cache3 tag_ena1", false,-1);
        tracep->declQuad(c+728,"SocTop d_cache3 tag_data1", false,-1, 54,0);
        tracep->declBit(c+730,"SocTop d_cache3 tag_user1", false,-1);
        tracep->declBit(c+305,"SocTop d_cache3 tag_ena2", false,-1);
        tracep->declQuad(c+731,"SocTop d_cache3 tag_data2", false,-1, 54,0);
        tracep->declBit(c+733,"SocTop d_cache3 tag_user2", false,-1);
        tracep->declQuad(c+734,"SocTop d_cache3 out_data1", false,-1, 63,0);
        tracep->declBus(c+306,"SocTop d_cache3 data_ena1", false,-1, 7,0);
        tracep->declQuad(c+307,"SocTop d_cache3 in_rem_data1", false,-1, 63,0);
        tracep->declQuad(c+736,"SocTop d_cache3 out_data2", false,-1, 63,0);
        tracep->declBus(c+309,"SocTop d_cache3 data_ena2", false,-1, 7,0);
        tracep->declQuad(c+307,"SocTop d_cache3 in_ram_data2", false,-1, 63,0);
        tracep->declBit(c+755,"SocTop d_cache3 u_tag0 clk", false,-1);
        tracep->declBus(c+268,"SocTop d_cache3 u_tag0 addr_i", false,-1, 5,0);
        tracep->declQuad(c+310,"SocTop d_cache3 u_tag0 data_i", false,-1, 55,0);
        tracep->declBit(c+304,"SocTop d_cache3 u_tag0 write_ena", false,-1);
        tracep->declQuad(c+728,"SocTop d_cache3 u_tag0 tag_data", false,-1, 54,0);
        tracep->declBit(c+730,"SocTop d_cache3 u_tag0 tag_valid", false,-1);
        tracep->declQuad(c+728,"SocTop d_cache3 u_tag0 out_data", false,-1, 54,0);
        tracep->declBit(c+730,"SocTop d_cache3 u_tag0 out_vaild", false,-1);
        tracep->declBit(c+755,"SocTop d_cache3 u_tag1 clk", false,-1);
        tracep->declBus(c+268,"SocTop d_cache3 u_tag1 addr_i", false,-1, 5,0);
        tracep->declQuad(c+310,"SocTop d_cache3 u_tag1 data_i", false,-1, 55,0);
        tracep->declBit(c+305,"SocTop d_cache3 u_tag1 write_ena", false,-1);
        tracep->declQuad(c+731,"SocTop d_cache3 u_tag1 tag_data", false,-1, 54,0);
        tracep->declBit(c+733,"SocTop d_cache3 u_tag1 tag_valid", false,-1);
        tracep->declQuad(c+731,"SocTop d_cache3 u_tag1 out_data", false,-1, 54,0);
        tracep->declBit(c+733,"SocTop d_cache3 u_tag1 out_vaild", false,-1);
        tracep->declBit(c+755,"SocTop d_cache3 u_data0 clk", false,-1);
        tracep->declBus(c+268,"SocTop d_cache3 u_data0 addr_i", false,-1, 5,0);
        tracep->declQuad(c+307,"SocTop d_cache3 u_data0 data_i", false,-1, 63,0);
        tracep->declBus(c+306,"SocTop d_cache3 u_data0 write_ena", false,-1, 7,0);
        tracep->declQuad(c+734,"SocTop d_cache3 u_data0 data_o", false,-1, 63,0);
        tracep->declQuad(c+734,"SocTop d_cache3 u_data0 out_data", false,-1, 63,0);
        tracep->declBit(c+755,"SocTop d_cache3 u_data1 clk", false,-1);
        tracep->declBus(c+268,"SocTop d_cache3 u_data1 addr_i", false,-1, 5,0);
        tracep->declQuad(c+307,"SocTop d_cache3 u_data1 data_i", false,-1, 63,0);
        tracep->declBus(c+309,"SocTop d_cache3 u_data1 write_ena", false,-1, 7,0);
        tracep->declQuad(c+736,"SocTop d_cache3 u_data1 data_o", false,-1, 63,0);
        tracep->declQuad(c+736,"SocTop d_cache3 u_data1 out_data", false,-1, 63,0);
        tracep->declBit(c+755,"SocTop arbitrate4 clk", false,-1);
        tracep->declBit(c+756,"SocTop arbitrate4 rst", false,-1);
        tracep->declQuad(c+16,"SocTop arbitrate4 d_cache_addr", false,-1, 63,0);
        tracep->declQuad(c+343,"SocTop arbitrate4 d_cache_data", false,-1, 63,0);
        tracep->declBus(c+18,"SocTop arbitrate4 d_cache_type", false,-1, 3,0);
        tracep->declBit(c+345,"SocTop arbitrate4 d_cache_resp", false,-1);
        tracep->declQuad(c+19,"SocTop arbitrate4 d_cache_data_o", false,-1, 63,0);
        tracep->declBit(c+21,"SocTop arbitrate4 d_cache_valid_", false,-1);
        tracep->declQuad(c+11,"SocTop arbitrate4 i_cache_addr", false,-1, 63,0);
        tracep->declBit(c+10,"SocTop arbitrate4 i_cache_ena", false,-1);
        tracep->declBit(c+13,"SocTop arbitrate4 i_cache_resp", false,-1);
        tracep->declQuad(c+22,"SocTop arbitrate4 i_cache_data", false,-1, 63,0);
        tracep->declBit(c+24,"SocTop arbitrate4 i_cache_valid_", false,-1);
        tracep->declBit(c+25,"SocTop arbitrate4 arb_working_ti", false,-1);
        tracep->declBus(c+809,"SocTop arbitrate4 axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+346,"SocTop arbitrate4 axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+810,"SocTop arbitrate4 axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+811,"SocTop arbitrate4 axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+812,"SocTop arbitrate4 axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+813,"SocTop arbitrate4 axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+814,"SocTop arbitrate4 axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+809,"SocTop arbitrate4 axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+26,"SocTop arbitrate4 axi_aw_valid", false,-1);
        tracep->declBit(c+767,"SocTop arbitrate4 axi_aw_ready", false,-1);
        tracep->declQuad(c+348,"SocTop arbitrate4 axi_w_data", false,-1, 63,0);
        tracep->declBus(c+815,"SocTop arbitrate4 axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+816,"SocTop arbitrate4 axi_w_last", false,-1);
        tracep->declBit(c+403,"SocTop arbitrate4 axi_w_valid", false,-1);
        tracep->declBit(c+768,"SocTop arbitrate4 axi_w_ready", false,-1);
        tracep->declBus(c+769,"SocTop arbitrate4 axi_b_id", false,-1, 3,0);
        tracep->declBus(c+770,"SocTop arbitrate4 axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+771,"SocTop arbitrate4 axi_b_valid", false,-1);
        tracep->declBit(c+816,"SocTop arbitrate4 axi_b_ready", false,-1);
        tracep->declBus(c+27,"SocTop arbitrate4 axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+28,"SocTop arbitrate4 axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+810,"SocTop arbitrate4 axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+811,"SocTop arbitrate4 axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+812,"SocTop arbitrate4 axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+813,"SocTop arbitrate4 axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+814,"SocTop arbitrate4 axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+809,"SocTop arbitrate4 axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+30,"SocTop arbitrate4 axi_ar_valid", false,-1);
        tracep->declBit(c+31,"SocTop arbitrate4 axi_ar_ready", false,-1);
        tracep->declBus(c+32,"SocTop arbitrate4 axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+33,"SocTop arbitrate4 axi_r_data", false,-1, 63,0);
        tracep->declBus(c+35,"SocTop arbitrate4 axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+36,"SocTop arbitrate4 axi_r_last", false,-1);
        tracep->declBit(c+36,"SocTop arbitrate4 axi_r_valid", false,-1);
        tracep->declBit(c+816,"SocTop arbitrate4 axi_r_ready", false,-1);
        tracep->declBit(c+806,"SocTop arbitrate4 aw_shankhand", false,-1);
        tracep->declBit(c+807,"SocTop arbitrate4 w_shankhand", false,-1);
        tracep->declBit(c+312,"SocTop arbitrate4 b_shankhand", false,-1);
        tracep->declBus(c+738,"SocTop arbitrate4 transfor_state", false,-1, 1,0);
        tracep->declBus(c+313,"SocTop arbitrate4 transfor_state_nex", false,-1, 1,0);
        tracep->declBit(c+314,"SocTop arbitrate4 w_dcache_valid", false,-1);
        tracep->declBit(c+36,"SocTop arbitrate4 r_shankhand", false,-1);
        tracep->declBit(c+315,"SocTop arbitrate4 d_cache_ar_shankhand", false,-1);
        tracep->declBit(c+316,"SocTop arbitrate4 i_cache_ar_shankhand", false,-1);
        tracep->declBit(c+317,"SocTop arbitrate4 d_cache_r_shankhand", false,-1);
        tracep->declBit(c+318,"SocTop arbitrate4 i_cache_r_shankhand", false,-1);
        tracep->declBit(c+319,"SocTop arbitrate4 i_cache_valid", false,-1);
        tracep->declBit(c+320,"SocTop arbitrate4 d_cache_valid", false,-1);
        tracep->declBus(c+739,"SocTop arbitrate4 i_cache_state", false,-1, 1,0);
        tracep->declBus(c+321,"SocTop arbitrate4 i_cache_state_nxt", false,-1, 1,0);
        tracep->declBus(c+740,"SocTop arbitrate4 d_cache_state", false,-1, 1,0);
        tracep->declBus(c+322,"SocTop arbitrate4 d_cache_state_nxt", false,-1, 1,0);
        tracep->declBit(c+323,"SocTop arbitrate4 r_dcache_valid", false,-1);
        tracep->declBit(c+755,"SocTop axi_mnq4 clk", false,-1);
        tracep->declBit(c+756,"SocTop axi_mnq4 rst", false,-1);
        tracep->declBus(c+78,"SocTop axi_mnq4 s_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+79,"SocTop axi_mnq4 s_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+81,"SocTop axi_mnq4 s_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+82,"SocTop axi_mnq4 s_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+83,"SocTop axi_mnq4 s_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+84,"SocTop axi_mnq4 s_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+85,"SocTop axi_mnq4 s_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+86,"SocTop axi_mnq4 s_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+88,"SocTop axi_mnq4 s_axi_aw_valid", false,-1);
        tracep->declBit(c+87,"SocTop axi_mnq4 s_axi_aw_ready", false,-1);
        tracep->declQuad(c+89,"SocTop axi_mnq4 s_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+91,"SocTop axi_mnq4 s_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+92,"SocTop axi_mnq4 s_axi_w_last", false,-1);
        tracep->declBit(c+93,"SocTop axi_mnq4 s_axi_w_valid", false,-1);
        tracep->declBit(c+94,"SocTop axi_mnq4 s_axi_w_ready", false,-1);
        tracep->declBus(c+78,"SocTop axi_mnq4 s_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+817,"SocTop axi_mnq4 s_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+408,"SocTop axi_mnq4 s_axi_b_valid", false,-1);
        tracep->declBit(c+95,"SocTop axi_mnq4 s_axi_b_ready", false,-1);
        tracep->declBus(c+96,"SocTop axi_mnq4 s_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+97,"SocTop axi_mnq4 s_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+99,"SocTop axi_mnq4 s_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+100,"SocTop axi_mnq4 s_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+101,"SocTop axi_mnq4 s_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+102,"SocTop axi_mnq4 s_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+103,"SocTop axi_mnq4 s_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+104,"SocTop axi_mnq4 s_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+105,"SocTop axi_mnq4 s_axi_ar_valid", false,-1);
        tracep->declBit(c+409,"SocTop axi_mnq4 s_axi_ar_ready", false,-1);
        tracep->declBus(c+410,"SocTop axi_mnq4 s_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+778,"SocTop axi_mnq4 s_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+817,"SocTop axi_mnq4 s_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+411,"SocTop axi_mnq4 s_axi_r_last", false,-1);
        tracep->declBit(c+412,"SocTop axi_mnq4 s_axi_r_valid", false,-1);
        tracep->declBit(c+106,"SocTop axi_mnq4 s_axi_r_ready", false,-1);
        tracep->declBit(c+166,"SocTop axi_mnq4 mnq_read_ena", false,-1);
        tracep->declQuad(c+167,"SocTop axi_mnq4 addr_oup", false,-1, 63,0);
        tracep->declQuad(c+760,"SocTop axi_mnq4 mnq_data_in", false,-1, 63,0);
        tracep->declBit(c+408,"SocTop axi_mnq4 write_ram_ena", false,-1);
        tracep->declQuad(c+420,"SocTop axi_mnq4 write_ram_data", false,-1, 63,0);
        tracep->declQuad(c+418,"SocTop axi_mnq4 write_ram_addr", false,-1, 63,0);
        tracep->declBit(c+324,"SocTop axi_mnq4 aw_shankhand", false,-1);
        tracep->declBit(c+325,"SocTop axi_mnq4 w_shankhand", false,-1);
        tracep->declBit(c+387,"SocTop axi_mnq4 b_shankhand", false,-1);
        tracep->declBus(c+741,"SocTop axi_mnq4 s_write_state", false,-1, 1,0);
        tracep->declBus(c+326,"SocTop axi_mnq4 s_write_state_nxt", false,-1, 1,0);
        tracep->declBit(c+327,"SocTop axi_mnq4 ar_shankhand", false,-1);
        tracep->declBit(c+388,"SocTop axi_mnq4 r_shankhand", false,-1);
        tracep->declBus(c+742,"SocTop axi_mnq4 s_read_state", false,-1, 1,0);
        tracep->declBus(c+328,"SocTop axi_mnq4 s_read_state_nxt", false,-1, 1,0);
        tracep->declQuad(c+743,"SocTop axi_mnq4 write_data_reg", false,-1, 63,0);
        tracep->declQuad(c+745,"SocTop axi_mnq4 write_addr_reg", false,-1, 63,0);
        tracep->declBus(c+747,"SocTop axi_mnq4 r_s_axi_ar_id", false,-1, 3,0);
        tracep->declBit(c+755,"SocTop soc_axi45 clk", false,-1);
        tracep->declBit(c+756,"SocTop soc_axi45 rst", false,-1);
        tracep->declBus(c+830,"SocTop soc_axi45 prot_chose_write", false,-1, 2,0);
        tracep->declBus(c+830,"SocTop soc_axi45 prot_chose_read", false,-1, 2,0);
        tracep->declBus(c+809,"SocTop soc_axi45 master_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+346,"SocTop soc_axi45 master_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+810,"SocTop soc_axi45 master_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+811,"SocTop soc_axi45 master_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+812,"SocTop soc_axi45 master_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+813,"SocTop soc_axi45 master_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+814,"SocTop soc_axi45 master_axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+809,"SocTop soc_axi45 master_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+26,"SocTop soc_axi45 master_axi_aw_valid", false,-1);
        tracep->declBit(c+767,"SocTop soc_axi45 master_axi_aw_ready", false,-1);
        tracep->declQuad(c+348,"SocTop soc_axi45 master_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+815,"SocTop soc_axi45 master_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+816,"SocTop soc_axi45 master_axi_w_last", false,-1);
        tracep->declBit(c+403,"SocTop soc_axi45 master_axi_w_valid", false,-1);
        tracep->declBit(c+768,"SocTop soc_axi45 master_axi_w_ready", false,-1);
        tracep->declBus(c+769,"SocTop soc_axi45 master_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+770,"SocTop soc_axi45 master_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+816,"SocTop soc_axi45 master_axi_b_ready", false,-1);
        tracep->declBit(c+771,"SocTop soc_axi45 master_axi_b_valid", false,-1);
        tracep->declBus(c+27,"SocTop soc_axi45 master_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+28,"SocTop soc_axi45 master_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+810,"SocTop soc_axi45 master_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+811,"SocTop soc_axi45 master_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+812,"SocTop soc_axi45 master_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+813,"SocTop soc_axi45 master_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+814,"SocTop soc_axi45 master_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+809,"SocTop soc_axi45 master_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+30,"SocTop soc_axi45 master_axi_ar_valid", false,-1);
        tracep->declBit(c+31,"SocTop soc_axi45 master_axi_ar_ready", false,-1);
        tracep->declBus(c+32,"SocTop soc_axi45 master_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+33,"SocTop soc_axi45 master_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+35,"SocTop soc_axi45 master_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+36,"SocTop soc_axi45 master_axi_r_last", false,-1);
        tracep->declBit(c+36,"SocTop soc_axi45 master_axi_r_valid", false,-1);
        tracep->declBit(c+816,"SocTop soc_axi45 master_axi_r_ready", false,-1);
        tracep->declBus(c+37,"SocTop soc_axi45 slave_axi_aw_id", false,-1, 11,0);
        tracep->declArray(c+38,"SocTop soc_axi45 slave_axi_aw_addr", false,-1, 191,0);
        tracep->declBus(c+44,"SocTop soc_axi45 slave_axi_aw_len", false,-1, 23,0);
        tracep->declBus(c+45,"SocTop soc_axi45 slave_axi_aw_size", false,-1, 8,0);
        tracep->declBus(c+46,"SocTop soc_axi45 slave_axi_aw_burst", false,-1, 5,0);
        tracep->declBus(c+47,"SocTop soc_axi45 slave_axi_aw_cache", false,-1, 11,0);
        tracep->declBus(c+48,"SocTop soc_axi45 slave_axi_aw_prot", false,-1, 8,0);
        tracep->declBus(c+49,"SocTop soc_axi45 slave_axi_aw_qos", false,-1, 11,0);
        tracep->declBus(c+50,"SocTop soc_axi45 slave_axi_aw_valid", false,-1, 2,0);
        tracep->declBus(c+51,"SocTop soc_axi45 slave_axi_aw_ready", false,-1, 2,0);
        tracep->declArray(c+52,"SocTop soc_axi45 slave_axi_w_data", false,-1, 191,0);
        tracep->declBus(c+58,"SocTop soc_axi45 slave_axi_w_strb", false,-1, 23,0);
        tracep->declBus(c+59,"SocTop soc_axi45 slave_axi_w_last", false,-1, 2,0);
        tracep->declBus(c+60,"SocTop soc_axi45 slave_axi_w_valid", false,-1, 2,0);
        tracep->declBus(c+61,"SocTop soc_axi45 slave_axi_w_ready", false,-1, 2,0);
        tracep->declBus(c+350,"SocTop soc_axi45 slave_axi_b_id", false,-1, 11,0);
        tracep->declBus(c+404,"SocTop soc_axi45 slave_axi_b_resp", false,-1, 5,0);
        tracep->declBus(c+405,"SocTop soc_axi45 slave_axi_b_valid", false,-1, 2,0);
        tracep->declBus(c+62,"SocTop soc_axi45 slave_axi_b_ready", false,-1, 2,0);
        tracep->declBus(c+63,"SocTop soc_axi45 slave_axi_ar_id", false,-1, 11,0);
        tracep->declArray(c+64,"SocTop soc_axi45 slave_axi_ar_addr", false,-1, 191,0);
        tracep->declBus(c+70,"SocTop soc_axi45 slave_axi_ar_len", false,-1, 23,0);
        tracep->declBus(c+71,"SocTop soc_axi45 slave_axi_ar_size", false,-1, 8,0);
        tracep->declBus(c+72,"SocTop soc_axi45 slave_axi_ar_burst", false,-1, 5,0);
        tracep->declBus(c+73,"SocTop soc_axi45 slave_axi_ar_cache", false,-1, 11,0);
        tracep->declBus(c+74,"SocTop soc_axi45 slave_axi_ar_prot", false,-1, 8,0);
        tracep->declBus(c+75,"SocTop soc_axi45 slave_axi_ar_qos", false,-1, 11,0);
        tracep->declBus(c+76,"SocTop soc_axi45 slave_axi_ar_valid", false,-1, 2,0);
        tracep->declBus(c+351,"SocTop soc_axi45 slave_axi_ar_ready", false,-1, 2,0);
        tracep->declBus(c+352,"SocTop soc_axi45 slave_axi_r_id", false,-1, 11,0);
        tracep->declArray(c+772,"SocTop soc_axi45 slave_axi_r_data", false,-1, 191,0);
        tracep->declBus(c+1,"SocTop soc_axi45 slave_axi_r_resp", false,-1, 5,0);
        tracep->declBus(c+406,"SocTop soc_axi45 slave_axi_r_last", false,-1, 2,0);
        tracep->declBus(c+407,"SocTop soc_axi45 slave_axi_r_valid", false,-1, 2,0);
        tracep->declBus(c+77,"SocTop soc_axi45 slave_axi_r_ready", false,-1, 2,0);
        tracep->declBus(c+808,"SocTop soc_axi45 SLAVE_NUM", false,-1, 31,0);
        tracep->declBit(c+755,"SocTop time_axi6 clk", false,-1);
        tracep->declBit(c+756,"SocTop time_axi6 rst", false,-1);
        tracep->declBit(c+402,"SocTop time_axi6 time_interrupt", false,-1);
        tracep->declBus(c+107,"SocTop time_axi6 time_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+108,"SocTop time_axi6 time_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+110,"SocTop time_axi6 time_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+111,"SocTop time_axi6 time_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+112,"SocTop time_axi6 time_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+113,"SocTop time_axi6 time_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+114,"SocTop time_axi6 time_axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+115,"SocTop time_axi6 time_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+117,"SocTop time_axi6 time_axi_aw_valid", false,-1);
        tracep->declBit(c+116,"SocTop time_axi6 time_axi_aw_ready", false,-1);
        tracep->declQuad(c+118,"SocTop time_axi6 time_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+120,"SocTop time_axi6 time_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+121,"SocTop time_axi6 time_axi_w_last", false,-1);
        tracep->declBit(c+122,"SocTop time_axi6 time_axi_w_valid", false,-1);
        tracep->declBit(c+123,"SocTop time_axi6 time_axi_w_ready", false,-1);
        tracep->declBus(c+413,"SocTop time_axi6 time_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+414,"SocTop time_axi6 time_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+415,"SocTop time_axi6 time_axi_b_valid", false,-1);
        tracep->declBit(c+124,"SocTop time_axi6 time_axi_b_ready", false,-1);
        tracep->declBus(c+125,"SocTop time_axi6 time_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+126,"SocTop time_axi6 time_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+128,"SocTop time_axi6 time_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+129,"SocTop time_axi6 time_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+130,"SocTop time_axi6 time_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+131,"SocTop time_axi6 time_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+132,"SocTop time_axi6 time_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+133,"SocTop time_axi6 time_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+134,"SocTop time_axi6 time_axi_ar_valid", false,-1);
        tracep->declBit(c+135,"SocTop time_axi6 time_axi_ar_ready", false,-1);
        tracep->declBus(c+353,"SocTop time_axi6 time_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+136,"SocTop time_axi6 time_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+2,"SocTop time_axi6 time_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+416,"SocTop time_axi6 time_axi_r_last", false,-1);
        tracep->declBit(c+417,"SocTop time_axi6 time_axi_r_valid", false,-1);
        tracep->declBit(c+138,"SocTop time_axi6 time_axi_r_ready", false,-1);
        tracep->declQuad(c+748,"SocTop time_axi6 car_mtime_l", false,-1, 63,0);
        tracep->declQuad(c+750,"SocTop time_axi6 csr_mtime_h", false,-1, 63,0);
        tracep->declQuad(c+389,"SocTop time_axi6 csr_mtime_l_nxt", false,-1, 63,0);
        tracep->declQuad(c+391,"SocTop time_axi6 csr_mtime_h_nxt", false,-1, 63,0);
        tracep->declBit(c+329,"SocTop time_axi6 csr_mtime_l_r_ena", false,-1);
        tracep->declBit(c+330,"SocTop time_axi6 csr_mtime_h_r_ena", false,-1);
        tracep->declBit(c+331,"SocTop time_axi6 csr_mtime_l_w_ena", false,-1);
        tracep->declBit(c+332,"SocTop time_axi6 csr_mtime_h_w_ena", false,-1);
        tracep->declQuad(c+333,"SocTop time_axi6 wmask", false,-1, 63,0);
        tracep->declBit(c+335,"SocTop time_axi6 aw_shakehand", false,-1);
        tracep->declBit(c+336,"SocTop time_axi6 w_shakehand", false,-1);
        tracep->declBit(c+393,"SocTop time_axi6 b_shankhand", false,-1);
        tracep->declBit(c+337,"SocTop time_axi6 mode_right", false,-1);
        tracep->declBus(c+752,"SocTop time_axi6 state_time_m", false,-1, 1,0);
        tracep->declBus(c+338,"SocTop time_axi6 state_time_m_nxt", false,-1, 1,0);
        tracep->declBus(c+753,"SocTop time_axi6 time_reg_id", false,-1, 3,0);
        tracep->declBus(c+414,"SocTop time_axi6 time_reg_resp", false,-1, 1,0);
        tracep->declBit(c+339,"SocTop time_axi6 mode_right_r", false,-1);
        tracep->declBit(c+340,"SocTop time_axi6 ar_shakehand", false,-1);
        tracep->declBit(c+394,"SocTop time_axi6 r_shankhand", false,-1);
        tracep->declQuad(c+395,"SocTop time_axi6 time_csr_link", false,-1, 63,0);
        tracep->declBus(c+754,"SocTop time_axi6 state_time_r", false,-1, 1,0);
        tracep->declBus(c+341,"SocTop time_axi6 state_time_r_nxt", false,-1, 1,0);
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
    VlWide<4>/*127:0*/ __Vtemp45;
    VlWide<4>/*127:0*/ __Vtemp48;
    VlWide<6>/*191:0*/ __Vtemp50;
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
        tracep->fullBit(oldp+10,(vlSelf->SocTop__DOT__i_cache_read_ena));
        tracep->fullQData(oldp+11,(vlSelf->SocTop__DOT__i_cache_addr),64);
        tracep->fullBit(oldp+13,(vlSelf->SocTop__DOT__i_caceh_resp));
        tracep->fullQData(oldp+14,(vlSelf->SocTop__DOT__d_cache_data_out),64);
        tracep->fullQData(oldp+16,(vlSelf->SocTop__DOT__d_cache_out_addr),64);
        tracep->fullCData(oldp+18,(vlSelf->SocTop__DOT__d_cache_out_type),4);
        tracep->fullQData(oldp+19,(vlSelf->SocTop__DOT__arbitrate_d_data),64);
        tracep->fullBit(oldp+21,(vlSelf->SocTop__DOT__arbitrate_d_ok));
        tracep->fullQData(oldp+22,(vlSelf->SocTop__DOT__arbitrate_i_data),64);
        tracep->fullBit(oldp+24,(vlSelf->SocTop__DOT__arbitrate_i_ok));
        tracep->fullBit(oldp+25,(vlSelf->SocTop__DOT__arbitrate_ti_sign));
        tracep->fullBit(oldp+26,(vlSelf->SocTop__DOT__t_axi_aw_valid));
        tracep->fullCData(oldp+27,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid)
                                     ? 1U : 0U)),4);
        tracep->fullQData(oldp+28,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid)
                                     ? vlSelf->SocTop__DOT__i_cache_addr
                                     : ((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_valid)
                                         ? vlSelf->SocTop__DOT__d_cache_out_addr
                                         : 0ULL))),64);
        tracep->fullBit(oldp+30,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid) 
                                  | (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_valid))));
        tracep->fullBit(oldp+31,(vlSelf->SocTop__DOT__t_axi_ar_ready));
        tracep->fullCData(oldp+32,(vlSelf->SocTop__DOT__t_axi_r_id),4);
        tracep->fullQData(oldp+33,(vlSelf->SocTop__DOT__t_axi_r_data),64);
        tracep->fullCData(oldp+35,(vlSelf->SocTop__DOT__t_axi_r_resp),2);
        tracep->fullBit(oldp+36,(vlSelf->SocTop__DOT__t_axi_r_valid));
        tracep->fullSData(oldp+37,(vlSelf->SocTop__DOT__add_axi_aw_id),12);
        tracep->fullWData(oldp+38,(vlSelf->SocTop__DOT__add_axi_aw_addr),192);
        tracep->fullIData(oldp+44,(vlSelf->SocTop__DOT__add_axi_aw_len),24);
        tracep->fullSData(oldp+45,(vlSelf->SocTop__DOT__add_axi_aw_size),9);
        tracep->fullCData(oldp+46,(vlSelf->SocTop__DOT__add_axi_aw_burst),6);
        tracep->fullSData(oldp+47,(vlSelf->SocTop__DOT__add_axi_aw_cache),12);
        tracep->fullSData(oldp+48,(vlSelf->SocTop__DOT__add_axi_aw_prot),9);
        tracep->fullSData(oldp+49,(vlSelf->SocTop__DOT__add_axi_aw_qos),12);
        tracep->fullCData(oldp+50,(vlSelf->SocTop__DOT__add_axi_aw_valid),3);
        tracep->fullCData(oldp+51,((((IData)(vlSelf->SocTop__DOT__soc_axi_aw_ready) 
                                     << 2U) | (((IData)(vlSelf->SocTop__DOT__tim_axi_aw_ready) 
                                                << 1U) 
                                               | (IData)(vlSelf->SocTop__DOT__io_axi_aw_ready)))),3);
        tracep->fullWData(oldp+52,(vlSelf->SocTop__DOT__add_axi_w_data),192);
        tracep->fullIData(oldp+58,(vlSelf->SocTop__DOT__add_axi_w_strb),24);
        tracep->fullCData(oldp+59,(vlSelf->SocTop__DOT__add_axi_w_last),3);
        tracep->fullCData(oldp+60,(vlSelf->SocTop__DOT__add_axi_w_valid),3);
        tracep->fullCData(oldp+61,((((IData)(vlSelf->SocTop__DOT__soc_axi_w_ready) 
                                     << 2U) | (((IData)(vlSelf->SocTop__DOT__tim_axi_w_ready) 
                                                << 1U) 
                                               | (IData)(vlSelf->SocTop__DOT__io_axi_w_ready)))),3);
        tracep->fullCData(oldp+62,(vlSelf->SocTop__DOT__add_axi_b_ready),3);
        tracep->fullSData(oldp+63,(vlSelf->SocTop__DOT__add_axi_ar_id),12);
        tracep->fullWData(oldp+64,(vlSelf->SocTop__DOT__add_axi_ar_addr),192);
        tracep->fullIData(oldp+70,(vlSelf->SocTop__DOT__add_axi_ar_len),24);
        tracep->fullSData(oldp+71,(vlSelf->SocTop__DOT__add_axi_ar_size),9);
        tracep->fullCData(oldp+72,(vlSelf->SocTop__DOT__add_axi_ar_burst),6);
        tracep->fullSData(oldp+73,(vlSelf->SocTop__DOT__add_axi_ar_cache),12);
        tracep->fullSData(oldp+74,(vlSelf->SocTop__DOT__add_axi_ar_prot),9);
        tracep->fullSData(oldp+75,(vlSelf->SocTop__DOT__add_axi_ar_qos),12);
        tracep->fullCData(oldp+76,(vlSelf->SocTop__DOT__add_axi_ar_valid),3);
        tracep->fullCData(oldp+77,(vlSelf->SocTop__DOT__add_axi_r_ready),3);
        tracep->fullCData(oldp+78,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_id) 
                                            >> 8U))),4);
        tracep->fullQData(oldp+79,((((QData)((IData)(
                                                     vlSelf->SocTop__DOT__add_axi_aw_addr[5U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SocTop__DOT__add_axi_aw_addr[4U])))),64);
        tracep->fullCData(oldp+81,((0xffU & (vlSelf->SocTop__DOT__add_axi_aw_len 
                                             >> 0x10U))),8);
        tracep->fullCData(oldp+82,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_size) 
                                          >> 6U))),3);
        tracep->fullCData(oldp+83,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_burst) 
                                          >> 4U))),2);
        tracep->fullCData(oldp+84,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_cache) 
                                            >> 8U))),4);
        tracep->fullCData(oldp+85,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_prot) 
                                          >> 6U))),3);
        tracep->fullCData(oldp+86,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_qos) 
                                            >> 8U))),4);
        tracep->fullBit(oldp+87,(vlSelf->SocTop__DOT__soc_axi_aw_ready));
        tracep->fullBit(oldp+88,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                        >> 2U))));
        tracep->fullQData(oldp+89,((((QData)((IData)(
                                                     vlSelf->SocTop__DOT__add_axi_w_data[5U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SocTop__DOT__add_axi_w_data[4U])))),64);
        tracep->fullCData(oldp+91,((0xffU & (vlSelf->SocTop__DOT__add_axi_w_strb 
                                             >> 0x10U))),8);
        tracep->fullBit(oldp+92,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_last) 
                                        >> 2U))));
        tracep->fullBit(oldp+93,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                        >> 2U))));
        tracep->fullBit(oldp+94,(vlSelf->SocTop__DOT__soc_axi_w_ready));
        tracep->fullBit(oldp+95,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                        >> 2U))));
        tracep->fullCData(oldp+96,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                            >> 8U))),4);
        tracep->fullQData(oldp+97,((((QData)((IData)(
                                                     vlSelf->SocTop__DOT__add_axi_ar_addr[5U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SocTop__DOT__add_axi_ar_addr[4U])))),64);
        tracep->fullCData(oldp+99,((0xffU & (vlSelf->SocTop__DOT__add_axi_ar_len 
                                             >> 0x10U))),8);
        tracep->fullCData(oldp+100,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_size) 
                                           >> 6U))),3);
        tracep->fullCData(oldp+101,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_burst) 
                                           >> 4U))),2);
        tracep->fullCData(oldp+102,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_cache) 
                                             >> 8U))),4);
        tracep->fullCData(oldp+103,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_prot) 
                                           >> 6U))),3);
        tracep->fullCData(oldp+104,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_qos) 
                                             >> 8U))),4);
        tracep->fullBit(oldp+105,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                                         >> 2U))));
        tracep->fullBit(oldp+106,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                         >> 2U))));
        tracep->fullCData(oldp+107,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_id) 
                                             >> 4U))),4);
        tracep->fullQData(oldp+108,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))),64);
        tracep->fullCData(oldp+110,((0xffU & (vlSelf->SocTop__DOT__add_axi_aw_len 
                                              >> 8U))),8);
        tracep->fullCData(oldp+111,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_size) 
                                           >> 3U))),3);
        tracep->fullCData(oldp+112,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_burst) 
                                           >> 2U))),2);
        tracep->fullCData(oldp+113,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_cache) 
                                             >> 4U))),4);
        tracep->fullCData(oldp+114,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_prot) 
                                           >> 3U))),3);
        tracep->fullCData(oldp+115,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_qos) 
                                             >> 4U))),4);
        tracep->fullBit(oldp+116,(vlSelf->SocTop__DOT__tim_axi_aw_ready));
        tracep->fullBit(oldp+117,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                         >> 1U))));
        tracep->fullQData(oldp+118,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_w_data[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_w_data[2U])))),64);
        tracep->fullCData(oldp+120,((0xffU & (vlSelf->SocTop__DOT__add_axi_w_strb 
                                              >> 8U))),8);
        tracep->fullBit(oldp+121,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_last) 
                                         >> 1U))));
        tracep->fullBit(oldp+122,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                         >> 1U))));
        tracep->fullBit(oldp+123,(vlSelf->SocTop__DOT__tim_axi_w_ready));
        tracep->fullBit(oldp+124,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                         >> 1U))));
        tracep->fullCData(oldp+125,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                             >> 4U))),4);
        tracep->fullQData(oldp+126,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))),64);
        tracep->fullCData(oldp+128,((0xffU & (vlSelf->SocTop__DOT__add_axi_ar_len 
                                              >> 8U))),8);
        tracep->fullCData(oldp+129,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_size) 
                                           >> 3U))),3);
        tracep->fullCData(oldp+130,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_burst) 
                                           >> 2U))),2);
        tracep->fullCData(oldp+131,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_cache) 
                                             >> 4U))),4);
        tracep->fullCData(oldp+132,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_prot) 
                                           >> 3U))),3);
        tracep->fullCData(oldp+133,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_qos) 
                                             >> 4U))),4);
        tracep->fullBit(oldp+134,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                                         >> 1U))));
        tracep->fullBit(oldp+135,(vlSelf->SocTop__DOT__tim_axi_ar_ready));
        tracep->fullQData(oldp+136,(vlSelf->SocTop__DOT__tim_axi_r_data),64);
        tracep->fullBit(oldp+138,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                         >> 1U))));
        tracep->fullCData(oldp+139,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_id))),4);
        tracep->fullQData(oldp+140,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_aw_addr[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_aw_addr[0U])))),64);
        tracep->fullCData(oldp+142,((0xffU & vlSelf->SocTop__DOT__add_axi_aw_len)),8);
        tracep->fullCData(oldp+143,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_size))),3);
        tracep->fullCData(oldp+144,((3U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_burst))),2);
        tracep->fullCData(oldp+145,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_cache))),4);
        tracep->fullCData(oldp+146,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_prot))),3);
        tracep->fullCData(oldp+147,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_qos))),4);
        tracep->fullBit(oldp+148,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_valid))));
        tracep->fullQData(oldp+149,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_w_data[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_w_data[0U])))),64);
        tracep->fullCData(oldp+151,((0xffU & vlSelf->SocTop__DOT__add_axi_w_strb)),8);
        tracep->fullBit(oldp+152,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_w_last))));
        tracep->fullBit(oldp+153,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_w_valid))));
        tracep->fullBit(oldp+154,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_b_ready))));
        tracep->fullCData(oldp+155,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_id))),4);
        tracep->fullQData(oldp+156,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_ar_addr[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_ar_addr[0U])))),64);
        tracep->fullCData(oldp+158,((0xffU & vlSelf->SocTop__DOT__add_axi_ar_len)),8);
        tracep->fullCData(oldp+159,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_size))),3);
        tracep->fullCData(oldp+160,((3U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_burst))),2);
        tracep->fullCData(oldp+161,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_cache))),4);
        tracep->fullCData(oldp+162,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_prot))),3);
        tracep->fullCData(oldp+163,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_qos))),4);
        tracep->fullBit(oldp+164,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_valid))));
        tracep->fullBit(oldp+165,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_r_ready))));
        tracep->fullBit(oldp+166,(vlSelf->SocTop__DOT__axi_mnq4__DOT__ar_shankhand));
        tracep->fullQData(oldp+167,(((IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__ar_shankhand)
                                      ? (((QData)((IData)(
                                                          vlSelf->SocTop__DOT__add_axi_ar_addr[5U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->SocTop__DOT__add_axi_ar_addr[4U])))
                                      : 0ULL)),64);
        tracep->fullBit(oldp+169,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_stall_req));
        tracep->fullQData(oldp+170,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_data),64);
        tracep->fullCData(oldp+172,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1),5);
        tracep->fullBit(oldp+173,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1));
        tracep->fullCData(oldp+174,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2),5);
        tracep->fullBit(oldp+175,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2));
        tracep->fullCData(oldp+176,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type),8);
        tracep->fullCData(oldp+177,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode),8);
        tracep->fullQData(oldp+178,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op),64);
        tracep->fullQData(oldp+180,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op2),64);
        tracep->fullBit(oldp+182,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_ena));
        tracep->fullCData(oldp+183,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_addr),5);
        tracep->fullQData(oldp+184,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_pc),64);
        tracep->fullSData(oldp+186,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_s_offset),12);
        tracep->fullCData(oldp+187,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_memsel),3);
        tracep->fullBit(oldp+188,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_pip_jalrena));
        tracep->fullBit(oldp+189,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_if_flush));
        tracep->fullCData(oldp+190,(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl),5);
        tracep->fullQData(oldp+191,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_id_data),64);
        tracep->fullQData(oldp+193,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_ex_mem_pc),64);
        tracep->fullQData(oldp+195,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_pc),64);
        tracep->fullIData(oldp+197,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_id_ex_inst),32);
        tracep->fullIData(oldp+198,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_ex_mem_inst),32);
        tracep->fullIData(oldp+199,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_inst),32);
        tracep->fullQData(oldp+200,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc),64);
        tracep->fullBit(oldp+202,((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))));
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
        tracep->fullBit(oldp+224,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addw));
        tracep->fullBit(oldp+225,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_subw));
        tracep->fullBit(oldp+226,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sllw));
        tracep->fullBit(oldp+227,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srlw));
        tracep->fullBit(oldp+228,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraw));
        tracep->fullBit(oldp+229,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw));
        tracep->fullBit(oldp+230,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs));
        tracep->fullBit(oldp+231,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc));
        tracep->fullBit(oldp+232,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrwi));
        tracep->fullBit(oldp+233,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_div));
        tracep->fullBit(oldp+234,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divu));
        tracep->fullBit(oldp+235,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mul));
        tracep->fullBit(oldp+236,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulh));
        tracep->fullBit(oldp+237,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulhsu));
        tracep->fullBit(oldp+238,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulhu));
        tracep->fullBit(oldp+239,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_rem));
        tracep->fullBit(oldp+240,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remu));
        tracep->fullBit(oldp+241,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divuw));
        tracep->fullBit(oldp+242,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divw));
        tracep->fullBit(oldp+243,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulw));
        tracep->fullBit(oldp+244,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remuw));
        tracep->fullBit(oldp+245,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remw));
        tracep->fullBit(oldp+246,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc))));
        tracep->fullBit(oldp+247,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak));
        tracep->fullBit(oldp+248,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1));
        tracep->fullBit(oldp+249,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1));
        tracep->fullBit(oldp+250,((1U & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl) 
                                         >> 3U))));
        tracep->fullQData(oldp+251,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__exe_res),64);
        tracep->fullCData(oldp+253,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_byte),8);
        tracep->fullSData(oldp+254,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte),16);
        tracep->fullIData(oldp+255,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word),32);
        tracep->fullQData(oldp+256,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_data),64);
        tracep->fullCData(oldp+258,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_mask),8);
        tracep->fullBit(oldp+259,(vlSelf->SocTop__DOT__i_cache2__DOT__icache_if_shankhand));
        tracep->fullCData(oldp+260,(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst_nxt),6);
        tracep->fullQData(oldp+261,(vlSelf->SocTop__DOT__i_cache2__DOT__miss_data),64);
        tracep->fullBit(oldp+263,(vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_o));
        tracep->fullBit(oldp+264,(vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_t));
        tracep->fullBit(oldp+265,(vlSelf->SocTop__DOT__i_cache2__DOT__write_i_ok));
        tracep->fullQData(oldp+266,((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                     >> 9U)),55);
        tracep->fullCData(oldp+268,((0x3fU & (IData)(
                                                     (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                      >> 3U)))),6);
        tracep->fullCData(oldp+269,(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread_nxt),6);
        tracep->fullBit(oldp+270,(vlSelf->SocTop__DOT__d_cache3__DOT__mem_hit_ok));
        tracep->fullBit(oldp+271,(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_ok));
        tracep->fullQData(oldp+272,(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_addr),64);
        tracep->fullQData(oldp+274,(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_data),64);
        tracep->fullCData(oldp+276,(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_type),4);
        tracep->fullBit(oldp+277,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_i_ok));
        tracep->fullCData(oldp+278,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_type),4);
        tracep->fullQData(oldp+279,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_addr),64);
        tracep->fullCData(oldp+281,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_data_ena1),8);
        tracep->fullBit(oldp+282,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_tag_ena1));
        tracep->fullCData(oldp+283,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_data_ena2),8);
        tracep->fullBit(oldp+284,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_tag_ena2));
        tracep->fullBit(oldp+285,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_resp));
        tracep->fullCData(oldp+286,(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite_nxt),6);
        tracep->fullCData(oldp+287,(vlSelf->SocTop__DOT__d_cache3__DOT__hitw_data_strb1),8);
        tracep->fullCData(oldp+288,(vlSelf->SocTop__DOT__d_cache3__DOT__hitw_data_strb2),8);
        tracep->fullBit(oldp+289,(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_ok));
        tracep->fullQData(oldp+290,(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_addr),64);
        tracep->fullQData(oldp+292,(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_data),64);
        tracep->fullCData(oldp+294,(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_type),4);
        tracep->fullBit(oldp+295,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_i_ok));
        tracep->fullCData(oldp+296,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_type),4);
        tracep->fullQData(oldp+297,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_addr),64);
        tracep->fullCData(oldp+299,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_data_ena1),8);
        tracep->fullBit(oldp+300,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_tag_ena1));
        tracep->fullCData(oldp+301,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_data_ena2),8);
        tracep->fullBit(oldp+302,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_tag_ena2));
        tracep->fullBit(oldp+303,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_resp));
        tracep->fullBit(oldp+304,(vlSelf->SocTop__DOT__d_cache3__DOT__tag_ena1));
        tracep->fullBit(oldp+305,(vlSelf->SocTop__DOT__d_cache3__DOT__tag_ena2));
        tracep->fullCData(oldp+306,(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena1),8);
        tracep->fullQData(oldp+307,(vlSelf->SocTop__DOT__d_cache3__DOT__in_rem_data1),64);
        tracep->fullCData(oldp+309,(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena2),8);
        tracep->fullQData(oldp+310,((0x80000000000000ULL 
                                     | (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                        >> 9U))),56);
        tracep->fullBit(oldp+312,(vlSelf->SocTop__DOT__arbitrate4__DOT__b_shankhand));
        tracep->fullCData(oldp+313,(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state_nex),2);
        tracep->fullBit(oldp+314,(vlSelf->SocTop__DOT__arbitrate4__DOT__b_shankhand));
        tracep->fullBit(oldp+315,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_valid) 
                                   & (IData)(vlSelf->SocTop__DOT__t_axi_ar_ready))));
        tracep->fullBit(oldp+316,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid) 
                                   & (IData)(vlSelf->SocTop__DOT__t_axi_ar_ready))));
        tracep->fullBit(oldp+317,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_r_shankhand));
        tracep->fullBit(oldp+318,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_r_shankhand));
        tracep->fullBit(oldp+319,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid));
        tracep->fullBit(oldp+320,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_valid));
        tracep->fullCData(oldp+321,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_state_nxt),2);
        tracep->fullCData(oldp+322,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_state_nxt),2);
        tracep->fullBit(oldp+323,(vlSelf->SocTop__DOT__arbitrate4__DOT__r_dcache_valid));
        tracep->fullBit(oldp+324,((((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                    >> 2U) & (IData)(vlSelf->SocTop__DOT__soc_axi_aw_ready))));
        tracep->fullBit(oldp+325,((((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                    >> 2U) & (IData)(vlSelf->SocTop__DOT__soc_axi_w_ready))));
        tracep->fullCData(oldp+326,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state_nxt),2);
        tracep->fullBit(oldp+327,(vlSelf->SocTop__DOT__axi_mnq4__DOT__ar_shankhand));
        tracep->fullCData(oldp+328,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state_nxt),2);
        tracep->fullBit(oldp+329,((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                    & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__ar_shakehand)) 
                                   & (0x2004000ULL 
                                      == (((QData)((IData)(
                                                           vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))))));
        tracep->fullBit(oldp+330,((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                    & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__ar_shakehand)) 
                                   & (0x200bff8ULL 
                                      == (((QData)((IData)(
                                                           vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))))));
        tracep->fullBit(oldp+331,(((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                     & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__w_shakehand)) 
                                    & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__aw_shakehand)) 
                                   & (0x2004000ULL 
                                      == (((QData)((IData)(
                                                           vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))))));
        tracep->fullBit(oldp+332,(((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                     & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__w_shakehand)) 
                                    & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__aw_shakehand)) 
                                   & (0x200bff8ULL 
                                      == (((QData)((IData)(
                                                           vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))))));
        tracep->fullQData(oldp+333,(vlSelf->SocTop__DOT__time_axi6__DOT__wmask),64);
        tracep->fullBit(oldp+335,(vlSelf->SocTop__DOT__time_axi6__DOT__aw_shakehand));
        tracep->fullBit(oldp+336,(vlSelf->SocTop__DOT__time_axi6__DOT__w_shakehand));
        tracep->fullBit(oldp+337,(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right));
        tracep->fullCData(oldp+338,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m_nxt),2);
        tracep->fullBit(oldp+339,((IData)(((((((0U 
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
        tracep->fullBit(oldp+340,(vlSelf->SocTop__DOT__time_axi6__DOT__ar_shakehand));
        tracep->fullCData(oldp+341,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r_nxt),2);
        tracep->fullBit(oldp+342,(((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
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
        tracep->fullQData(oldp+343,(((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                                      ? vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_data
                                      : ((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                                          ? vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_data
                                          : 0ULL))),64);
        tracep->fullBit(oldp+345,(((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                                    ? (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_resp)
                                    : ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                                       & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_resp)))));
        tracep->fullQData(oldp+346,((((0U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state)) 
                                      | (1U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state)))
                                      ? vlSelf->SocTop__DOT__d_cache_out_addr
                                      : 0ULL)),64);
        tracep->fullQData(oldp+348,((((0U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state)) 
                                      | (1U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state)))
                                      ? ((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                                          ? vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_data
                                          : ((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                                              ? vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_data
                                              : 0ULL))
                                      : 0ULL)),64);
        tracep->fullSData(oldp+350,(((0xf00U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_id)) 
                                     | ((((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m))
                                           ? (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__time_reg_id)
                                           : 0U) << 4U) 
                                        | (IData)(vlSelf->SocTop__DOT__io_axi_b_id)))),12);
        tracep->fullCData(oldp+351,((((IData)(vlSelf->SocTop__DOT__soc_axi_ar_ready) 
                                      << 2U) | (((IData)(vlSelf->SocTop__DOT__tim_axi_ar_ready) 
                                                 << 1U) 
                                                | (IData)(vlSelf->SocTop__DOT__io_axi_ar_ready)))),3);
        tracep->fullSData(oldp+352,(((((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                        ? (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__r_s_axi_ar_id)
                                        : 0U) << 8U) 
                                     | ((((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r))
                                           ? (0xfU 
                                              & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                                 >> 4U))
                                           : 0U) << 4U) 
                                        | (IData)(vlSelf->SocTop__DOT__io_axi_r_id)))),12);
        tracep->fullCData(oldp+353,(((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r))
                                      ? (0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                                 >> 4U))
                                      : 0U)),4);
        tracep->fullBit(oldp+354,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__if_stall_req))));
        tracep->fullQData(oldp+355,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr)
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
        tracep->fullBit(oldp+357,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+358,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x2000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+359,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x3000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+360,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x4000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+361,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+362,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+363,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x1000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+364,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x5000U 
                                                    == 
                                                    (0x40007000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+365,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+366,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x1000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+367,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x4000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+368,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x5000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+369,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+370,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+371,((1U & (IData)(((0x80U 
                                                  == 
                                                  (0x80U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+372,((1U & (IData)(((0x80U 
                                                  == 
                                                  (0x80U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+373,(((IData)(((0x80U 
                                             == (0x80U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                            & (0U == 
                                               (0x7000U 
                                                & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                   & (0U == (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                             >> 0x14U)))));
        tracep->fullBit(oldp+374,(((IData)(((0x80U 
                                             == (0x80U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                            & (0U == 
                                               (0x7000U 
                                                & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                   & (0x18U == (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+375,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr) 
                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena))));
        tracep->fullBit(oldp+376,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr) 
                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena))));
        tracep->fullBit(oldp+377,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))));
        tracep->fullQData(oldp+378,(((((- (QData)((IData)(
                                                          (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                           >> 0x1fU)))) 
                                       << 0xcU) | (QData)((IData)(
                                                                  (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                   >> 0x14U)))) 
                                     + vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op)),64);
        tracep->fullBit(oldp+380,((1U & (((~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1)) 
                                          & (~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1))) 
                                         & (~ (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                                == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                               & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena)))))));
        tracep->fullQData(oldp+381,(((2U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type))
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
        tracep->fullBit(oldp+383,(((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                   & (1U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)))));
        tracep->fullBit(oldp+384,(((IData)(vlSelf->SocTop__DOT__rvcpu_we) 
                                   & (1U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)))));
        tracep->fullBit(oldp+385,(((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
                                   & (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                                        == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                            >> 9U)) 
                                       & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild)) 
                                      | ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                                          == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                              >> 9U)) 
                                         & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))))));
        tracep->fullBit(oldp+386,(((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                                   & (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                                        == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                            >> 9U)) 
                                       & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild)) 
                                      | ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                                          == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                              >> 9U)) 
                                         & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))))));
        tracep->fullBit(oldp+387,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state)) 
                                   & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                      >> 2U))));
        tracep->fullBit(oldp+388,((((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                    >> 2U) & (2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)))));
        tracep->fullQData(oldp+389,((((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
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
        tracep->fullQData(oldp+391,((((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
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
        tracep->fullBit(oldp+393,(((IData)(vlSelf->SocTop__DOT__tim_axi_b_valid) 
                                   & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                      >> 1U))));
        tracep->fullBit(oldp+394,(((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r)) 
                                   & ((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                      >> 1U))));
        tracep->fullQData(oldp+395,(((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
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
        tracep->fullQData(oldp+397,(vlSelf->SocTop__DOT__rvcpu_inst_addr),64);
        tracep->fullIData(oldp+399,(vlSelf->SocTop__DOT__i_cache_inst_data),32);
        tracep->fullBit(oldp+400,(vlSelf->SocTop__DOT__i_cache_inst_valid));
        tracep->fullBit(oldp+401,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__new_pc_sign) 
                                   & (~ (IData)(vlSelf->SocTop__DOT__i_cache_inst_valid)))));
        tracep->fullBit(oldp+402,((vlSelf->SocTop__DOT__time_axi6__DOT__car_mtime_l 
                                   > vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h)));
        tracep->fullBit(oldp+403,(vlSelf->SocTop__DOT__t_axi_w_valid));
        tracep->fullCData(oldp+404,((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__time_reg_resp) 
                                      << 2U) | (IData)(vlSelf->SocTop__DOT__io_axi_b_resp))),6);
        tracep->fullCData(oldp+405,((((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state)) 
                                      << 2U) | (((IData)(vlSelf->SocTop__DOT__tim_axi_b_valid) 
                                                 << 1U) 
                                                | (IData)(vlSelf->SocTop__DOT__io_axi_b_valid)))),3);
        tracep->fullCData(oldp+406,((((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)) 
                                      << 2U) | (((IData)(vlSelf->SocTop__DOT__tim_axi_r_last) 
                                                 << 1U) 
                                                | (IData)(vlSelf->SocTop__DOT__io_axi_r_last)))),3);
        tracep->fullCData(oldp+407,((((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)) 
                                      << 2U) | (((2U 
                                                  == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r)) 
                                                 << 1U) 
                                                | (IData)(vlSelf->SocTop__DOT__io_axi_r_valid)))),3);
        tracep->fullBit(oldp+408,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))));
        tracep->fullBit(oldp+409,(vlSelf->SocTop__DOT__soc_axi_ar_ready));
        tracep->fullCData(oldp+410,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                      ? (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__r_s_axi_ar_id)
                                      : 0U)),4);
        tracep->fullBit(oldp+411,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))));
        tracep->fullBit(oldp+412,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))));
        tracep->fullCData(oldp+413,(((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m))
                                      ? (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__time_reg_id)
                                      : 0U)),4);
        tracep->fullCData(oldp+414,(vlSelf->SocTop__DOT__time_axi6__DOT__time_reg_resp),2);
        tracep->fullBit(oldp+415,(vlSelf->SocTop__DOT__tim_axi_b_valid));
        tracep->fullBit(oldp+416,(vlSelf->SocTop__DOT__tim_axi_r_last));
        tracep->fullBit(oldp+417,((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r))));
        tracep->fullQData(oldp+418,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))
                                      ? vlSelf->SocTop__DOT__axi_mnq4__DOT__write_addr_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+420,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))
                                      ? vlSelf->SocTop__DOT__axi_mnq4__DOT__write_data_reg
                                      : 0ULL)),64);
        tracep->fullCData(oldp+422,((0x1fU & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                              >> 0xfU))),5);
        tracep->fullQData(oldp+423,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc),64);
        tracep->fullIData(oldp+425,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst),32);
        tracep->fullBit(oldp+426,(vlSelf->SocTop__DOT__rvcpu1__DOT__new_pc_sign));
        tracep->fullBit(oldp+427,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena));
        tracep->fullCData(oldp+428,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr),5);
        tracep->fullBit(oldp+429,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena));
        tracep->fullCData(oldp+430,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type),8);
        tracep->fullCData(oldp+431,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_sel),3);
        tracep->fullQData(oldp+432,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_addr),64);
        tracep->fullQData(oldp+434,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena))
                                      ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data
                                      : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch)
                                          ? (4ULL + vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc)
                                          : 0ULL))),64);
        tracep->fullBit(oldp+436,((((~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__finish_sign)) 
                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__dr_ready)) 
                                   | ((~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_finish_sign)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_ready)))));
        tracep->fullCData(oldp+437,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr),5);
        tracep->fullBit(oldp+438,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena));
        tracep->fullCData(oldp+439,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr),5);
        tracep->fullBit(oldp+440,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena));
        tracep->fullQData(oldp+441,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data),64);
        tracep->fullQData(oldp+443,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc),64);
        tracep->fullCData(oldp+445,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type),8);
        tracep->fullCData(oldp+446,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode),8);
        tracep->fullQData(oldp+447,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1),64);
        tracep->fullQData(oldp+449,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2),64);
        tracep->fullBit(oldp+451,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdena));
        tracep->fullSData(oldp+452,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset),12);
        tracep->fullCData(oldp+453,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type),8);
        tracep->fullQData(oldp+454,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data),64);
        tracep->fullCData(oldp+456,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel),3);
        tracep->fullQData(oldp+457,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr),64);
        tracep->fullQData(oldp+459,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_pc),64);
        tracep->fullIData(oldp+461,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_ex_inst),32);
        tracep->fullIData(oldp+462,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_inst),32);
        tracep->fullIData(oldp+463,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm),20);
        tracep->fullSData(oldp+464,((vlSelf->SocTop__DOT__i_cache_inst_data 
                                     >> 0x14U)),12);
        tracep->fullSData(oldp+465,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm),12);
        tracep->fullCData(oldp+466,((0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)),7);
        tracep->fullBit(oldp+467,((IData)((0x6fU == 
                                           (0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)))));
        tracep->fullBit(oldp+468,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr));
        tracep->fullBit(oldp+469,((IData)((0x63U == 
                                           (0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)))));
        tracep->fullCData(oldp+470,((0x7fU & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)),7);
        tracep->fullCData(oldp+471,((0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+472,((7U & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                           >> 0xcU))),3);
        tracep->fullSData(oldp+473,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                     >> 0x14U)),12);
        tracep->fullCData(oldp+474,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+475,((0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                              >> 0x14U))),5);
        tracep->fullIData(oldp+476,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                     >> 0xcU)),20);
        tracep->fullSData(oldp+477,(((0xfe0U & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                 >> 7U)))),12);
        tracep->fullQData(oldp+478,((1ULL + (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))),64);
        tracep->fullQData(oldp+480,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sub_op2),64);
        tracep->fullQData(oldp+482,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2),64);
        tracep->fullQData(oldp+484,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_addw_op2),64);
        tracep->fullBit(oldp+486,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_ls_op2));
        tracep->fullQData(oldp+487,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__shift_res),64);
        tracep->fullIData(oldp+489,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sllw_op2),32);
        tracep->fullQData(oldp+490,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sllw_res),64);
        tracep->fullIData(oldp+492,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_srlw_op2),32);
        tracep->fullQData(oldp+493,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__srlw_res),64);
        tracep->fullIData(oldp+495,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sraw_op2),32);
        tracep->fullQData(oldp+496,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sraw_res),64);
        tracep->fullIData(oldp+498,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2),32);
        tracep->fullQData(oldp+499,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2)))),64);
        tracep->fullQData(oldp+501,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__upper_imm),64);
        tracep->fullBit(oldp+503,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_finish_sign));
        tracep->fullBit(oldp+504,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_ready));
        tracep->fullBit(oldp+505,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__finish_sign));
        tracep->fullBit(oldp+506,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__dr_ready));
        tracep->fullBit(oldp+507,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch));
        tracep->fullBit(oldp+508,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena));
        tracep->fullSData(oldp+509,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx),12);
        tracep->fullQData(oldp+510,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data),64);
        tracep->fullBit(oldp+512,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena));
        tracep->fullBit(oldp+513,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena));
        tracep->fullBit(oldp+514,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena));
        tracep->fullBit(oldp+515,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en));
        tracep->fullBit(oldp+516,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en));
        tracep->fullQData(oldp+517,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data),64);
        tracep->fullQData(oldp+519,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value),64);
        tracep->fullQData(oldp+521,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
                                     | vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1)),64);
        tracep->fullQData(oldp+523,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
                                     & (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1))),64);
        tracep->fullBit(oldp+525,((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode))));
        tracep->fullBit(oldp+526,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__mult_valid));
        tracep->fullBit(oldp+527,((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                 >> 0x3fU)))));
        tracep->fullBit(oldp+528,((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2 
                                                 >> 0x3fU)))));
        tracep->fullQData(oldp+529,(((1U & (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                    >> 0x3fU)))
                                      ? (1ULL + (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1))
                                      : vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1)),64);
        tracep->fullQData(oldp+531,(((1U & (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2 
                                                    >> 0x3fU)))
                                      ? (1ULL + (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))
                                      : vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)),64);
        tracep->fullWData(oldp+533,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand),128);
        tracep->fullQData(oldp+537,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multipler),64);
        VL_EXTEND_WQ(128,64, __Vtemp45, vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multipler);
        if ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multipler))) {
            __Vtemp48[0U] = __Vtemp45[0U];
            __Vtemp48[1U] = __Vtemp45[1U];
            __Vtemp48[2U] = __Vtemp45[2U];
            __Vtemp48[3U] = __Vtemp45[3U];
        } else {
            __Vtemp48[0U] = 0U;
            __Vtemp48[1U] = 0U;
            __Vtemp48[2U] = 0U;
            __Vtemp48[3U] = 0U;
        }
        tracep->fullWData(oldp+539,(__Vtemp48),128);
        tracep->fullWData(oldp+543,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp),128);
        tracep->fullBit(oldp+547,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_signbit));
        tracep->fullQData(oldp+548,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__shang_data),64);
        tracep->fullQData(oldp+550,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__yushu_data),64);
        tracep->fullQData(oldp+552,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__op2_absolute),64);
        tracep->fullBit(oldp+554,((1U & ((IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                  >> 0x3fU)) 
                                         ^ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__op2_absolute)))));
        tracep->fullCData(oldp+555,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__counter),8);
        tracep->fullWData(oldp+556,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a),128);
        tracep->fullWData(oldp+560,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_b),128);
        tracep->fullQData(oldp+564,((1ULL + (~ vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__shang_data))),64);
        tracep->fullBit(oldp+566,((0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+567,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en) 
                                   & (0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)))));
        tracep->fullBit(oldp+568,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en) 
                                   & (0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)))));
        tracep->fullQData(oldp+569,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcycle),64);
        tracep->fullBit(oldp+571,((0x300U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+572,(((0x300U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+573,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus));
        tracep->fullBit(oldp+574,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_ena));
        tracep->fullBit(oldp+575,((1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                          | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                          ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)
                                          : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena) 
                                             | ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                 ? (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                            >> 7U))
                                                 : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)))))));
        tracep->fullBit(oldp+576,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie));
        tracep->fullBit(oldp+577,((1U & ((~ ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                             | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))) 
                                         & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)
                                             ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)
                                             : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                 ? (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                            >> 3U))
                                                 : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)))))));
        tracep->fullBit(oldp+578,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie));
        tracep->fullCData(oldp+579,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                      ? 3U : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                      ? (IData)(
                                                                (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                                 >> 0xbU))
                                                      : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp)))))),2);
        tracep->fullCData(oldp+580,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp),2);
        tracep->fullCData(oldp+581,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs),2);
        tracep->fullBit(oldp+582,((3U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs))));
        tracep->fullQData(oldp+583,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus),64);
        tracep->fullBit(oldp+585,((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+586,(((((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en)) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
        tracep->fullBit(oldp+587,(((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
        tracep->fullQData(oldp+588,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base),62);
        tracep->fullQData(oldp+590,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base 
                                     << 2U)),64);
        tracep->fullBit(oldp+592,((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+593,((((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena))));
        tracep->fullBit(oldp+594,(((((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en)) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
        tracep->fullQData(oldp+595,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mepc),64);
        tracep->fullBit(oldp+597,((0x342U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+598,(((0x342U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+599,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause));
        tracep->fullBit(oldp+600,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
        tracep->fullQData(oldp+601,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                      ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value
                                      : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause)
                                          ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data
                                          : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause))),64);
        tracep->fullQData(oldp+603,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause),64);
        tracep->fullBit(oldp+605,((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+606,(((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+607,(((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
        tracep->fullBit(oldp+608,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie));
        tracep->fullQData(oldp+609,(((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie)) 
                                     << 7U)),64);
        tracep->fullBit(oldp+611,((0x344U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+612,(((0x344U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+613,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip));
        tracep->fullQData(oldp+614,((QData)((IData)(
                                                    ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip) 
                                                     << 7U)))),64);
        tracep->fullBit(oldp+616,((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+617,(((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+618,(((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
        tracep->fullQData(oldp+619,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mscrstch),64);
        tracep->fullCData(oldp+621,((7U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))),3);
        tracep->fullCData(oldp+622,((3U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                   >> 1U)))),2);
        tracep->fullBit(oldp+623,((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                 >> 2U)))));
        tracep->fullQData(oldp+624,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_pc_o),64);
        tracep->fullIData(oldp+626,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o),32);
        tracep->fullQData(oldp+627,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__pc_data1),64);
        tracep->fullBit(oldp+629,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_exyn));
        tracep->fullBit(oldp+630,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__teap_yn));
        tracep->fullQData(oldp+631,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__trap_code),64);
        tracep->fullQData(oldp+633,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[0]),64);
        tracep->fullQData(oldp+635,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[1]),64);
        tracep->fullQData(oldp+637,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[2]),64);
        tracep->fullQData(oldp+639,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[3]),64);
        tracep->fullQData(oldp+641,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[4]),64);
        tracep->fullQData(oldp+643,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[5]),64);
        tracep->fullQData(oldp+645,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[6]),64);
        tracep->fullQData(oldp+647,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[7]),64);
        tracep->fullQData(oldp+649,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[8]),64);
        tracep->fullQData(oldp+651,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[9]),64);
        tracep->fullQData(oldp+653,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[10]),64);
        tracep->fullQData(oldp+655,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[11]),64);
        tracep->fullQData(oldp+657,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[12]),64);
        tracep->fullQData(oldp+659,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[13]),64);
        tracep->fullQData(oldp+661,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[14]),64);
        tracep->fullQData(oldp+663,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[15]),64);
        tracep->fullQData(oldp+665,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[16]),64);
        tracep->fullQData(oldp+667,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[17]),64);
        tracep->fullQData(oldp+669,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[18]),64);
        tracep->fullQData(oldp+671,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[19]),64);
        tracep->fullQData(oldp+673,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[20]),64);
        tracep->fullQData(oldp+675,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[21]),64);
        tracep->fullQData(oldp+677,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[22]),64);
        tracep->fullQData(oldp+679,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[23]),64);
        tracep->fullQData(oldp+681,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[24]),64);
        tracep->fullQData(oldp+683,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[25]),64);
        tracep->fullQData(oldp+685,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[26]),64);
        tracep->fullQData(oldp+687,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[27]),64);
        tracep->fullQData(oldp+689,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[28]),64);
        tracep->fullQData(oldp+691,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[29]),64);
        tracep->fullQData(oldp+693,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[30]),64);
        tracep->fullQData(oldp+695,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[31]),64);
        tracep->fullIData(oldp+697,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__i),32);
        tracep->fullQData(oldp+698,((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                     >> 9U)),55);
        tracep->fullCData(oldp+700,((0x3fU & (IData)(
                                                     (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                                      >> 3U)))),6);
        tracep->fullCData(oldp+701,(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst),6);
        tracep->fullBit(oldp+702,((0x20U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst))));
        tracep->fullBit(oldp+703,(vlSelf->SocTop__DOT__i_cache2__DOT__read_ok));
        tracep->fullBit(oldp+704,(vlSelf->SocTop__DOT__i_cache2__DOT__inst_hit_ok));
        tracep->fullQData(oldp+705,(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__out_data),55);
        tracep->fullBit(oldp+707,(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__out_vaild));
        tracep->fullQData(oldp+708,(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__out_data),55);
        tracep->fullBit(oldp+710,(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__out_vaild));
        tracep->fullQData(oldp+711,(vlSelf->SocTop__DOT__i_cache2__DOT__u_data01__DOT__out_data),64);
        tracep->fullQData(oldp+713,(vlSelf->SocTop__DOT__i_cache2__DOT__u_data02__DOT__out_data),64);
        tracep->fullIData(oldp+715,(vlSelf->SocTop__DOT__i_cache2__DOT__i),32);
        tracep->fullQData(oldp+716,((0x80000000000000ULL 
                                     | (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                        >> 9U))),56);
        tracep->fullBit(oldp+718,((1U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))));
        tracep->fullBit(oldp+719,((1U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))));
        tracep->fullCData(oldp+720,(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread),6);
        tracep->fullBit(oldp+721,((2U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))));
        tracep->fullBit(oldp+722,(vlSelf->SocTop__DOT__d_cache3__DOT__read_ok));
        tracep->fullCData(oldp+723,(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite),6);
        tracep->fullBit(oldp+724,((2U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))));
        tracep->fullBit(oldp+725,(vlSelf->SocTop__DOT__d_cache3__DOT__read_w_ok));
        tracep->fullBit(oldp+726,((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))));
        tracep->fullIData(oldp+727,(vlSelf->SocTop__DOT__d_cache3__DOT__i),32);
        tracep->fullQData(oldp+728,(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data),55);
        tracep->fullBit(oldp+730,(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild));
        tracep->fullQData(oldp+731,(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data),55);
        tracep->fullBit(oldp+733,(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild));
        tracep->fullQData(oldp+734,(vlSelf->SocTop__DOT__d_cache3__DOT__u_data0__DOT__out_data),64);
        tracep->fullQData(oldp+736,(vlSelf->SocTop__DOT__d_cache3__DOT__u_data1__DOT__out_data),64);
        tracep->fullCData(oldp+738,(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state),2);
        tracep->fullCData(oldp+739,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_state),2);
        tracep->fullCData(oldp+740,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_state),2);
        tracep->fullCData(oldp+741,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state),2);
        tracep->fullCData(oldp+742,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state),2);
        tracep->fullQData(oldp+743,(vlSelf->SocTop__DOT__axi_mnq4__DOT__write_data_reg),64);
        tracep->fullQData(oldp+745,(vlSelf->SocTop__DOT__axi_mnq4__DOT__write_addr_reg),64);
        tracep->fullCData(oldp+747,(vlSelf->SocTop__DOT__axi_mnq4__DOT__r_s_axi_ar_id),4);
        tracep->fullQData(oldp+748,(vlSelf->SocTop__DOT__time_axi6__DOT__car_mtime_l),64);
        tracep->fullQData(oldp+750,(vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h),64);
        tracep->fullCData(oldp+752,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m),2);
        tracep->fullCData(oldp+753,(vlSelf->SocTop__DOT__time_axi6__DOT__time_reg_id),4);
        tracep->fullCData(oldp+754,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r),2);
        tracep->fullBit(oldp+755,(vlSelf->clk));
        tracep->fullBit(oldp+756,(vlSelf->rst));
        tracep->fullBit(oldp+757,(vlSelf->read_ena_sign_));
        tracep->fullQData(oldp+758,(vlSelf->out_addr_outp),64);
        tracep->fullQData(oldp+760,(vlSelf->read_data_sign_),64);
        tracep->fullBit(oldp+762,(vlSelf->out_write_ram_ena));
        tracep->fullQData(oldp+763,(vlSelf->out_write_ram_data),64);
        tracep->fullQData(oldp+765,(vlSelf->out_write_ram_addr),64);
        tracep->fullBit(oldp+767,(((~ (IData)(vlSelf->rst)) 
                                   & (IData)(vlSelf->SocTop__DOT__soc_axi_aw_ready))));
        tracep->fullBit(oldp+768,(((~ (IData)(vlSelf->rst)) 
                                   & (IData)(vlSelf->SocTop__DOT__soc_axi_w_ready))));
        tracep->fullCData(oldp+769,(((IData)(vlSelf->rst)
                                      ? 0U : (0xfU 
                                              & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_id) 
                                                 >> 8U)))),4);
        tracep->fullCData(oldp+770,(((IData)(vlSelf->rst)
                                      ? 0U : (3U & 
                                              ((0xfffffffU 
                                                & ((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__time_reg_resp) 
                                                   >> 2U)) 
                                               | ((IData)(vlSelf->SocTop__DOT__io_axi_b_resp) 
                                                  >> 4U))))),2);
        tracep->fullBit(oldp+771,(((~ (IData)(vlSelf->rst)) 
                                   & (2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state)))));
        __Vtemp50[0U] = (IData)(vlSelf->SocTop__DOT__io_axi_r_data);
        __Vtemp50[1U] = (IData)((vlSelf->SocTop__DOT__io_axi_r_data 
                                 >> 0x20U));
        __Vtemp50[2U] = (IData)(vlSelf->SocTop__DOT__tim_axi_r_data);
        __Vtemp50[3U] = (IData)((vlSelf->SocTop__DOT__tim_axi_r_data 
                                 >> 0x20U));
        __Vtemp50[4U] = (IData)(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                  ? vlSelf->read_data_sign_
                                  : 0ULL));
        __Vtemp50[5U] = (IData)((((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                   ? vlSelf->read_data_sign_
                                   : 0ULL) >> 0x20U));
        tracep->fullWData(oldp+772,(__Vtemp50),192);
        tracep->fullQData(oldp+778,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                      ? vlSelf->read_data_sign_
                                      : 0ULL)),64);
        tracep->fullQData(oldp+780,(((1U & ((~ (IData)(vlSelf->rst)) 
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
        tracep->fullBit(oldp+782,(((IData)(vlSelf->rst)
                                    ? 0U : (1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)))));
        tracep->fullQData(oldp+783,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
                                                 ? 
                                                (0xfffffffffffffffeULL 
                                                 & vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc)
                                                 : vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc))),64);
        tracep->fullBit(oldp+785,(((IData)(vlSelf->rst)
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
        tracep->fullQData(oldp+786,((((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1))
                                      ? ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                           == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                          & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                          ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                          : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                         [vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1])
                                      : 0ULL)),64);
        tracep->fullQData(oldp+788,((((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2))
                                      ? ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                           == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                          & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                          ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                          : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                         [vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2])
                                      : 0ULL)),64);
        tracep->fullBit(oldp+790,(((~ (IData)(vlSelf->rst)) 
                                   & (((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                       | (IData)(vlSelf->SocTop__DOT__rvcpu_we)) 
                                      & (~ ((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                                             ? ((4U 
                                                 == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
                                                & (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                                                     == 
                                                     (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                      >> 9U)) 
                                                    & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild)) 
                                                   | ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                                                       == 
                                                       (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                        >> 9U)) 
                                                      & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))))
                                             : ((4U 
                                                 == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                                                & ((4U 
                                                    == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                                                   & (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                                                        == 
                                                        (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                         >> 9U)) 
                                                       & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild)) 
                                                      | ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                                                          == 
                                                          (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                           >> 9U)) 
                                                         & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild)))))))))));
        tracep->fullQData(oldp+791,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
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
        tracep->fullQData(oldp+793,(((IData)((0x6fU 
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
        tracep->fullBit(oldp+795,(((IData)(vlSelf->rst)
                                    ? 0U : (1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1) 
                                                   & (2U 
                                                      == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                  & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1) 
                                                     == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)))))));
        tracep->fullBit(oldp+796,(((IData)(vlSelf->rst)
                                    ? 0U : (1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2) 
                                                   & (2U 
                                                      == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                  & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2) 
                                                     == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)))))));
        tracep->fullQData(oldp+797,(((IData)(vlSelf->rst)
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
        tracep->fullQData(oldp+799,(((IData)(vlSelf->rst)
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
        tracep->fullQData(oldp+801,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((1U 
                                                 & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                            >> 2U)))
                                                 ? 
                                                ((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)) 
                                                 << 0x20U)
                                                 : (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data))))),64);
        tracep->fullCData(oldp+803,(((IData)(vlSelf->rst)
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
        tracep->fullCData(oldp+804,(((IData)(vlSelf->rst)
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
        tracep->fullCData(oldp+805,(((IData)(vlSelf->rst)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                             >> 2U)))
                                               ? 0xf0U
                                               : 0xfU))),8);
        tracep->fullBit(oldp+806,(((IData)(vlSelf->SocTop__DOT__t_axi_aw_valid) 
                                   & ((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->SocTop__DOT__soc_axi_aw_ready)))));
        tracep->fullBit(oldp+807,(((IData)(vlSelf->SocTop__DOT__t_axi_w_valid) 
                                   & ((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->SocTop__DOT__soc_axi_w_ready)))));
        tracep->fullIData(oldp+808,(3U),32);
        tracep->fullCData(oldp+809,(0U),4);
        tracep->fullCData(oldp+810,(0U),8);
        tracep->fullCData(oldp+811,(3U),3);
        tracep->fullCData(oldp+812,(1U),2);
        tracep->fullCData(oldp+813,(2U),4);
        tracep->fullCData(oldp+814,(0U),3);
        tracep->fullCData(oldp+815,(0xffU),8);
        tracep->fullBit(oldp+816,(1U));
        tracep->fullCData(oldp+817,(0U),2);
        tracep->fullBit(oldp+818,(vlSelf->SocTop__DOT__io_axi_aw_ready));
        tracep->fullBit(oldp+819,(vlSelf->SocTop__DOT__io_axi_w_ready));
        tracep->fullCData(oldp+820,(vlSelf->SocTop__DOT__io_axi_b_id),4);
        tracep->fullCData(oldp+821,(vlSelf->SocTop__DOT__io_axi_b_resp),2);
        tracep->fullBit(oldp+822,(vlSelf->SocTop__DOT__io_axi_b_valid));
        tracep->fullBit(oldp+823,(vlSelf->SocTop__DOT__io_axi_ar_ready));
        tracep->fullCData(oldp+824,(vlSelf->SocTop__DOT__io_axi_r_id),4);
        tracep->fullQData(oldp+825,(vlSelf->SocTop__DOT__io_axi_r_data),64);
        tracep->fullCData(oldp+827,(vlSelf->SocTop__DOT__io_axi_r_resp),2);
        tracep->fullBit(oldp+828,(vlSelf->SocTop__DOT__io_axi_r_last));
        tracep->fullBit(oldp+829,(vlSelf->SocTop__DOT__io_axi_r_valid));
        tracep->fullCData(oldp+830,(4U),3);
        tracep->fullQData(oldp+831,(0ULL),64);
    }
}
