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
        tracep->declBit(c+710,"clk", false,-1);
        tracep->declBit(c+711,"rst", false,-1);
        tracep->declBit(c+712,"read_ena_sign_", false,-1);
        tracep->declQuad(c+713,"out_addr_outp", false,-1, 63,0);
        tracep->declQuad(c+715,"read_data_sign_", false,-1, 63,0);
        tracep->declBit(c+717,"out_write_ram_ena", false,-1);
        tracep->declQuad(c+718,"out_write_ram_data", false,-1, 63,0);
        tracep->declQuad(c+720,"out_write_ram_addr", false,-1, 63,0);
        tracep->declBit(c+710,"SocTop clk", false,-1);
        tracep->declBit(c+711,"SocTop rst", false,-1);
        tracep->declBit(c+712,"SocTop read_ena_sign_", false,-1);
        tracep->declQuad(c+713,"SocTop out_addr_outp", false,-1, 63,0);
        tracep->declQuad(c+715,"SocTop read_data_sign_", false,-1, 63,0);
        tracep->declBit(c+717,"SocTop out_write_ram_ena", false,-1);
        tracep->declQuad(c+718,"SocTop out_write_ram_data", false,-1, 63,0);
        tracep->declQuad(c+720,"SocTop out_write_ram_addr", false,-1, 63,0);
        tracep->declBus(c+748,"SocTop SLAVE_NUM", false,-1, 31,0);
        tracep->declBit(c+710,"SocTop aclk", false,-1);
        tracep->declQuad(c+408,"SocTop rvcpu_inst_addr", false,-1, 63,0);
        tracep->declBit(c+711,"SocTop rvcpu_inst_ena", false,-1);
        tracep->declQuad(c+5,"SocTop rvcpu_data_addr", false,-1, 63,0);
        tracep->declBus(c+7,"SocTop rvcpu_wmask", false,-1, 7,0);
        tracep->declQuad(c+8,"SocTop rvcpu_data_o", false,-1, 63,0);
        tracep->declBit(c+10,"SocTop rvcpu_we", false,-1);
        tracep->declBit(c+11,"SocTop rvcpu_re", false,-1);
        tracep->declBus(c+410,"SocTop i_cache_inst_data", false,-1, 31,0);
        tracep->declBit(c+12,"SocTop i_cache_inst_valid", false,-1);
        tracep->declBit(c+13,"SocTop i_cache_read_ena", false,-1);
        tracep->declQuad(c+14,"SocTop i_cache_addr", false,-1, 63,0);
        tracep->declBit(c+16,"SocTop i_cache_ready", false,-1);
        tracep->declBit(c+17,"SocTop i_caceh_resp", false,-1);
        tracep->declQuad(c+18,"SocTop d_cache_data_out", false,-1, 63,0);
        tracep->declBit(c+359,"SocTop d_cache_mem_finish", false,-1);
        tracep->declQuad(c+20,"SocTop d_cache_out_addr", false,-1, 63,0);
        tracep->declQuad(c+360,"SocTop d_cache_out_data", false,-1, 63,0);
        tracep->declBit(c+362,"SocTop d_cache_out_resp", false,-1);
        tracep->declBus(c+22,"SocTop d_cache_out_type", false,-1, 3,0);
        tracep->declQuad(c+23,"SocTop arbitrate_d_data", false,-1, 63,0);
        tracep->declBit(c+25,"SocTop arbitrate_d_ok", false,-1);
        tracep->declQuad(c+26,"SocTop arbitrate_i_data", false,-1, 63,0);
        tracep->declBit(c+28,"SocTop arbitrate_i_ok", false,-1);
        tracep->declBit(c+29,"SocTop arbitrate_ti_sign", false,-1);
        tracep->declBit(c+411,"SocTop time_init_sign", false,-1);
        tracep->declBus(c+749,"SocTop t_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+30,"SocTop t_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+750,"SocTop t_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+751,"SocTop t_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+752,"SocTop t_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+753,"SocTop t_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+754,"SocTop t_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+749,"SocTop t_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+32,"SocTop t_axi_aw_ready", false,-1);
        tracep->declBit(c+33,"SocTop t_axi_aw_valid", false,-1);
        tracep->declQuad(c+34,"SocTop t_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+755,"SocTop t_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+756,"SocTop t_axi_w_last", false,-1);
        tracep->declBit(c+412,"SocTop t_axi_w_valid", false,-1);
        tracep->declBit(c+36,"SocTop t_axi_w_ready", false,-1);
        tracep->declBus(c+37,"SocTop t_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+38,"SocTop t_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+39,"SocTop t_axi_b_valid", false,-1);
        tracep->declBit(c+756,"SocTop t_axi_b_ready", false,-1);
        tracep->declBus(c+40,"SocTop t_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+41,"SocTop t_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+750,"SocTop t_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+751,"SocTop t_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+752,"SocTop t_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+753,"SocTop t_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+754,"SocTop t_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+749,"SocTop t_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+43,"SocTop t_axi_ar_valid", false,-1);
        tracep->declBit(c+44,"SocTop t_axi_ar_ready", false,-1);
        tracep->declBus(c+45,"SocTop t_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+46,"SocTop t_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+48,"SocTop t_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+49,"SocTop t_axi_r_last", false,-1);
        tracep->declBit(c+50,"SocTop t_axi_r_valid", false,-1);
        tracep->declBit(c+756,"SocTop t_axi_r_ready", false,-1);
        tracep->declBus(c+51,"SocTop add_axi_aw_id", false,-1, 11,0);
        tracep->declArray(c+52,"SocTop add_axi_aw_addr", false,-1, 191,0);
        tracep->declBus(c+58,"SocTop add_axi_aw_len", false,-1, 23,0);
        tracep->declBus(c+59,"SocTop add_axi_aw_size", false,-1, 8,0);
        tracep->declBus(c+60,"SocTop add_axi_aw_burst", false,-1, 5,0);
        tracep->declBus(c+61,"SocTop add_axi_aw_cache", false,-1, 11,0);
        tracep->declBus(c+62,"SocTop add_axi_aw_prot", false,-1, 8,0);
        tracep->declBus(c+63,"SocTop add_axi_aw_qos", false,-1, 11,0);
        tracep->declBus(c+64,"SocTop add_axi_aw_valid", false,-1, 2,0);
        tracep->declBus(c+65,"SocTop add_axi_aw_ready", false,-1, 2,0);
        tracep->declArray(c+66,"SocTop add_axi_w_data", false,-1, 191,0);
        tracep->declBus(c+72,"SocTop add_axi_w_strb", false,-1, 23,0);
        tracep->declBus(c+73,"SocTop add_axi_w_last", false,-1, 2,0);
        tracep->declBus(c+74,"SocTop add_axi_w_valid", false,-1, 2,0);
        tracep->declBus(c+75,"SocTop add_axi_w_ready", false,-1, 2,0);
        tracep->declBus(c+76,"SocTop add_axi_b_id", false,-1, 11,0);
        tracep->declBus(c+1,"SocTop add_axi_b_resp", false,-1, 5,0);
        tracep->declBus(c+77,"SocTop add_axi_b_valid", false,-1, 2,0);
        tracep->declBus(c+78,"SocTop add_axi_b_ready", false,-1, 2,0);
        tracep->declBus(c+79,"SocTop add_axi_ar_id", false,-1, 11,0);
        tracep->declArray(c+80,"SocTop add_axi_ar_addr", false,-1, 191,0);
        tracep->declBus(c+86,"SocTop add_axi_ar_len", false,-1, 23,0);
        tracep->declBus(c+87,"SocTop add_axi_ar_size", false,-1, 8,0);
        tracep->declBus(c+88,"SocTop add_axi_ar_burst", false,-1, 5,0);
        tracep->declBus(c+89,"SocTop add_axi_ar_cache", false,-1, 11,0);
        tracep->declBus(c+90,"SocTop add_axi_ar_prot", false,-1, 8,0);
        tracep->declBus(c+91,"SocTop add_axi_ar_qos", false,-1, 11,0);
        tracep->declBus(c+92,"SocTop add_axi_ar_valid", false,-1, 2,0);
        tracep->declBus(c+93,"SocTop add_axi_ar_ready", false,-1, 2,0);
        tracep->declBus(c+94,"SocTop add_axi_r_id", false,-1, 11,0);
        tracep->declArray(c+95,"SocTop add_axi_r_data", false,-1, 191,0);
        tracep->declBus(c+2,"SocTop add_axi_r_resp", false,-1, 5,0);
        tracep->declBus(c+413,"SocTop add_axi_r_last", false,-1, 2,0);
        tracep->declBus(c+414,"SocTop add_axi_r_valid", false,-1, 2,0);
        tracep->declBus(c+101,"SocTop add_axi_r_ready", false,-1, 2,0);
        tracep->declBus(c+102,"SocTop soc_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+103,"SocTop soc_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+105,"SocTop soc_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+106,"SocTop soc_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+107,"SocTop soc_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+108,"SocTop soc_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+109,"SocTop soc_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+110,"SocTop soc_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+111,"SocTop soc_axi_aw_ready", false,-1);
        tracep->declBit(c+112,"SocTop soc_axi_aw_valid", false,-1);
        tracep->declQuad(c+113,"SocTop soc_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+115,"SocTop soc_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+116,"SocTop soc_axi_w_last", false,-1);
        tracep->declBit(c+117,"SocTop soc_axi_w_valid", false,-1);
        tracep->declBit(c+118,"SocTop soc_axi_w_ready", false,-1);
        tracep->declBus(c+102,"SocTop soc_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+757,"SocTop soc_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+415,"SocTop soc_axi_b_valid", false,-1);
        tracep->declBit(c+119,"SocTop soc_axi_b_ready", false,-1);
        tracep->declBus(c+120,"SocTop soc_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+121,"SocTop soc_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+123,"SocTop soc_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+124,"SocTop soc_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+125,"SocTop soc_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+126,"SocTop soc_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+127,"SocTop soc_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+128,"SocTop soc_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+129,"SocTop soc_axi_ar_valid", false,-1);
        tracep->declBit(c+416,"SocTop soc_axi_ar_ready", false,-1);
        tracep->declBus(c+363,"SocTop soc_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+722,"SocTop soc_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+757,"SocTop soc_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+417,"SocTop soc_axi_r_last", false,-1);
        tracep->declBit(c+418,"SocTop soc_axi_r_valid", false,-1);
        tracep->declBit(c+130,"SocTop soc_axi_r_ready", false,-1);
        tracep->declBus(c+131,"SocTop tim_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+132,"SocTop tim_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+134,"SocTop tim_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+135,"SocTop tim_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+136,"SocTop tim_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+137,"SocTop tim_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+138,"SocTop tim_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+139,"SocTop tim_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+140,"SocTop tim_axi_aw_ready", false,-1);
        tracep->declBit(c+141,"SocTop tim_axi_aw_valid", false,-1);
        tracep->declQuad(c+142,"SocTop tim_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+144,"SocTop tim_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+145,"SocTop tim_axi_w_last", false,-1);
        tracep->declBit(c+146,"SocTop tim_axi_w_valid", false,-1);
        tracep->declBit(c+147,"SocTop tim_axi_w_ready", false,-1);
        tracep->declBus(c+148,"SocTop tim_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+3,"SocTop tim_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+149,"SocTop tim_axi_b_valid", false,-1);
        tracep->declBit(c+150,"SocTop tim_axi_b_ready", false,-1);
        tracep->declBus(c+151,"SocTop tim_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+152,"SocTop tim_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+154,"SocTop tim_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+155,"SocTop tim_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+156,"SocTop tim_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+157,"SocTop tim_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+158,"SocTop tim_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+159,"SocTop tim_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+160,"SocTop tim_axi_ar_valid", false,-1);
        tracep->declBit(c+161,"SocTop tim_axi_ar_ready", false,-1);
        tracep->declBus(c+364,"SocTop tim_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+162,"SocTop tim_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+4,"SocTop tim_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+419,"SocTop tim_axi_r_last", false,-1);
        tracep->declBit(c+420,"SocTop tim_axi_r_valid", false,-1);
        tracep->declBit(c+164,"SocTop tim_axi_r_ready", false,-1);
        tracep->declBus(c+165,"SocTop io_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+166,"SocTop io_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+168,"SocTop io_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+169,"SocTop io_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+170,"SocTop io_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+171,"SocTop io_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+172,"SocTop io_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+173,"SocTop io_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+758,"SocTop io_axi_aw_ready", false,-1);
        tracep->declBit(c+174,"SocTop io_axi_aw_valid", false,-1);
        tracep->declQuad(c+175,"SocTop io_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+177,"SocTop io_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+178,"SocTop io_axi_w_last", false,-1);
        tracep->declBit(c+179,"SocTop io_axi_w_valid", false,-1);
        tracep->declBit(c+759,"SocTop io_axi_w_ready", false,-1);
        tracep->declBus(c+760,"SocTop io_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+761,"SocTop io_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+762,"SocTop io_axi_b_valid", false,-1);
        tracep->declBit(c+180,"SocTop io_axi_b_ready", false,-1);
        tracep->declBus(c+181,"SocTop io_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+182,"SocTop io_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+184,"SocTop io_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+185,"SocTop io_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+186,"SocTop io_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+187,"SocTop io_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+188,"SocTop io_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+189,"SocTop io_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+190,"SocTop io_axi_ar_valid", false,-1);
        tracep->declBit(c+763,"SocTop io_axi_ar_ready", false,-1);
        tracep->declBus(c+764,"SocTop io_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+765,"SocTop io_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+767,"SocTop io_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+768,"SocTop io_axi_r_last", false,-1);
        tracep->declBit(c+769,"SocTop io_axi_r_valid", false,-1);
        tracep->declBit(c+191,"SocTop io_axi_r_ready", false,-1);
        tracep->declBit(c+192,"SocTop read_ena_sign", false,-1);
        tracep->declQuad(c+193,"SocTop addr_oup_sign", false,-1, 63,0);
        tracep->declQuad(c+715,"SocTop read_data_sign", false,-1, 63,0);
        tracep->declBit(c+415,"SocTop write_ena_sign", false,-1);
        tracep->declQuad(c+421,"SocTop write_addr_sign", false,-1, 63,0);
        tracep->declQuad(c+423,"SocTop write_data_sign", false,-1, 63,0);
        tracep->declBus(c+195,"SocTop prot_chose_write", false,-1, 2,0);
        tracep->declBus(c+196,"SocTop prot_chose_read", false,-1, 2,0);
        tracep->declBit(c+710,"SocTop rvcpu1 clk", false,-1);
        tracep->declBit(c+711,"SocTop rvcpu1 rst", false,-1);
        tracep->declQuad(c+408,"SocTop rvcpu1 inst_addr", false,-1, 63,0);
        tracep->declBit(c+711,"SocTop rvcpu1 inst_ena", false,-1);
        tracep->declBit(c+16,"SocTop rvcpu1 inst_ready", false,-1);
        tracep->declBus(c+410,"SocTop rvcpu1 inst", false,-1, 31,0);
        tracep->declBit(c+12,"SocTop rvcpu1 bui_inst_valid", false,-1);
        tracep->declQuad(c+5,"SocTop rvcpu1 data_addr", false,-1, 63,0);
        tracep->declBus(c+7,"SocTop rvcpu1 wmask", false,-1, 7,0);
        tracep->declQuad(c+8,"SocTop rvcpu1 data_o", false,-1, 63,0);
        tracep->declQuad(c+18,"SocTop rvcpu1 data_i", false,-1, 63,0);
        tracep->declBit(c+10,"SocTop rvcpu1 we", false,-1);
        tracep->declBit(c+11,"SocTop rvcpu1 re", false,-1);
        tracep->declBit(c+359,"SocTop rvcpu1 mem_finish", false,-1);
        tracep->declBit(c+411,"SocTop rvcpu1 timer_intr", false,-1);
        tracep->declQuad(c+724,"SocTop rvcpu1 pip_regfile_x1", false,-1, 63,0);
        tracep->declBit(c+726,"SocTop rvcpu1 pip_refflie_x1_ena", false,-1);
        tracep->declBus(c+425,"SocTop rvcpu1 pip_regfile_x1_addr", false,-1, 4,0);
        tracep->declQuad(c+727,"SocTop rvcpu1 pip_pc", false,-1, 63,0);
        tracep->declBit(c+197,"SocTop rvcpu1 if_stall_req", false,-1);
        tracep->declQuad(c+426,"SocTop rvcpu1 if_id_pc", false,-1, 63,0);
        tracep->declBus(c+428,"SocTop rvcpu1 if_id_inst", false,-1, 31,0);
        tracep->declBit(c+429,"SocTop rvcpu1 ex_flush", false,-1);
        tracep->declQuad(c+198,"SocTop rvcpu1 ex_id_rd_data", false,-1, 63,0);
        tracep->declBus(c+430,"SocTop rvcpu1 ex_id_rd_addr", false,-1, 4,0);
        tracep->declBit(c+431,"SocTop rvcpu1 ex_id_rd_ena", false,-1);
        tracep->declBus(c+432,"SocTop rvcpu1 ex_id_rd_type", false,-1, 7,0);
        tracep->declBus(c+433,"SocTop rvcpu1 ex_mem_sel", false,-1, 2,0);
        tracep->declQuad(c+434,"SocTop rvcpu1 ex_mem_addr", false,-1, 63,0);
        tracep->declBit(c+429,"SocTop rvcpu1 ex_pc_branchena", false,-1);
        tracep->declQuad(c+436,"SocTop rvcpu1 ex_pc_branchpc", false,-1, 63,0);
        tracep->declBit(c+365,"SocTop rvcpu1 ex_ctrl_req", false,-1);
        tracep->declBus(c+200,"SocTop rvcpu1 id_reg_addr1", false,-1, 4,0);
        tracep->declBit(c+201,"SocTop rvcpu1 id_reg_ena1", false,-1);
        tracep->declBus(c+202,"SocTop rvcpu1 id_reg_addr2", false,-1, 4,0);
        tracep->declBit(c+203,"SocTop rvcpu1 id_reg_ena2", false,-1);
        tracep->declBit(c+729,"SocTop rvcpu1 id_ctrl_req", false,-1);
        tracep->declBus(c+204,"SocTop rvcpu1 id_ex_type", false,-1, 7,0);
        tracep->declBus(c+205,"SocTop rvcpu1 id_ex_opcode", false,-1, 7,0);
        tracep->declQuad(c+206,"SocTop rvcpu1 id_ex_op", false,-1, 63,0);
        tracep->declQuad(c+208,"SocTop rvcpu1 id_ex_op2", false,-1, 63,0);
        tracep->declBit(c+210,"SocTop rvcpu1 id_ex_rd_ena", false,-1);
        tracep->declBus(c+211,"SocTop rvcpu1 id_ex_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+212,"SocTop rvcpu1 id_ex_pc", false,-1, 63,0);
        tracep->declBus(c+214,"SocTop rvcpu1 id_ex_s_offset", false,-1, 11,0);
        tracep->declBus(c+215,"SocTop rvcpu1 id_ex_memsel", false,-1, 2,0);
        tracep->declQuad(c+366,"SocTop rvcpu1 id_pip_jalrpc", false,-1, 63,0);
        tracep->declBit(c+216,"SocTop rvcpu1 id_pip_jalrena", false,-1);
        tracep->declBit(c+217,"SocTop rvcpu1 id_if_flush", false,-1);
        tracep->declBus(c+218,"SocTop rvcpu1 stall_ctrl", false,-1, 4,0);
        tracep->declQuad(c+730,"SocTop rvcpu1 regs_id_data1", false,-1, 63,0);
        tracep->declQuad(c+732,"SocTop rvcpu1 regs_id_data2", false,-1, 63,0);
        tracep->declQuad(c+219,"SocTop rvcpu1 mem_id_data", false,-1, 63,0);
        tracep->declBus(c+438,"SocTop rvcpu1 mem_id_addr", false,-1, 4,0);
        tracep->declBit(c+439,"SocTop rvcpu1 mem_id_ena", false,-1);
        tracep->declBit(c+734,"SocTop rvcpu1 mem_ctrl_req", false,-1);
        tracep->declBus(c+440,"SocTop rvcpu1 wb_id_addr", false,-1, 4,0);
        tracep->declBit(c+441,"SocTop rvcpu1 wb_id_ena", false,-1);
        tracep->declQuad(c+442,"SocTop rvcpu1 wb_regfile_data", false,-1, 63,0);
        tracep->declQuad(c+444,"SocTop rvcpu1 idex_ex_pc", false,-1, 63,0);
        tracep->declBus(c+446,"SocTop rvcpu1 idex_ex_type", false,-1, 7,0);
        tracep->declBus(c+447,"SocTop rvcpu1 idex_ex_opcode", false,-1, 7,0);
        tracep->declQuad(c+448,"SocTop rvcpu1 idex_ex_op1", false,-1, 63,0);
        tracep->declQuad(c+450,"SocTop rvcpu1 idex_ex_op2", false,-1, 63,0);
        tracep->declBit(c+452,"SocTop rvcpu1 idex_ex_rdena", false,-1);
        tracep->declBus(c+430,"SocTop rvcpu1 idex_ex_rdaddr", false,-1, 4,0);
        tracep->declBus(c+453,"SocTop rvcpu1 idex_ex_offset", false,-1, 11,0);
        tracep->declBus(c+433,"SocTop rvcpu1 idex_ex_sel", false,-1, 2,0);
        tracep->declBus(c+454,"SocTop rvcpu1 exmem_mem_type", false,-1, 7,0);
        tracep->declBit(c+439,"SocTop rvcpu1 exmem_mem_ena", false,-1);
        tracep->declQuad(c+455,"SocTop rvcpu1 exmem_mem_data", false,-1, 63,0);
        tracep->declBus(c+438,"SocTop rvcpu1 exmem_mem_addr", false,-1, 4,0);
        tracep->declBus(c+457,"SocTop rvcpu1 exmem_mem_sel", false,-1, 2,0);
        tracep->declQuad(c+458,"SocTop rvcpu1 exmem_mem_lsaddr", false,-1, 63,0);
        tracep->declQuad(c+221,"SocTop rvcpu1 ex_ex_mem_pc", false,-1, 63,0);
        tracep->declQuad(c+460,"SocTop rvcpu1 ex_mem_mem_pc", false,-1, 63,0);
        tracep->declQuad(c+223,"SocTop rvcpu1 mem_mem_wb_pc", false,-1, 63,0);
        tracep->declBus(c+225,"SocTop rvcpu1 id_id_ex_inst", false,-1, 31,0);
        tracep->declBus(c+462,"SocTop rvcpu1 id_ex_ex_inst", false,-1, 31,0);
        tracep->declBus(c+226,"SocTop rvcpu1 ex_ex_mem_inst", false,-1, 31,0);
        tracep->declBus(c+463,"SocTop rvcpu1 ex_mem_mem_inst", false,-1, 31,0);
        tracep->declBus(c+227,"SocTop rvcpu1 mem_mem_wb_inst", false,-1, 31,0);
        tracep->declBit(c+711,"SocTop rvcpu1 pip_fore0 rst", false,-1);
        tracep->declQuad(c+408,"SocTop rvcpu1 pip_fore0 pc_i", false,-1, 63,0);
        tracep->declBus(c+410,"SocTop rvcpu1 pip_fore0 inst", false,-1, 31,0);
        tracep->declQuad(c+724,"SocTop rvcpu1 pip_fore0 x1_data", false,-1, 63,0);
        tracep->declQuad(c+727,"SocTop rvcpu1 pip_fore0 pc_o", false,-1, 63,0);
        tracep->declBus(c+425,"SocTop rvcpu1 pip_fore0 x1_addr", false,-1, 4,0);
        tracep->declBit(c+726,"SocTop rvcpu1 pip_fore0 x1_ena", false,-1);
        tracep->declBus(c+464,"SocTop rvcpu1 pip_fore0 j_imm", false,-1, 20,1);
        tracep->declBus(c+465,"SocTop rvcpu1 pip_fore0 i_imm", false,-1, 11,0);
        tracep->declBus(c+466,"SocTop rvcpu1 pip_fore0 b_imm", false,-1, 12,1);
        tracep->declBus(c+467,"SocTop rvcpu1 pip_fore0 opcode", false,-1, 6,0);
        tracep->declBit(c+468,"SocTop rvcpu1 pip_fore0 inst_jal", false,-1);
        tracep->declBit(c+469,"SocTop rvcpu1 pip_fore0 inst_jalr", false,-1);
        tracep->declBit(c+470,"SocTop rvcpu1 pip_fore0 inst_bxx", false,-1);
        tracep->declQuad(c+735,"SocTop rvcpu1 pip_fore0 operand1", false,-1, 63,0);
        tracep->declQuad(c+471,"SocTop rvcpu1 pip_fore0 operand2", false,-1, 63,0);
        tracep->declQuad(c+228,"SocTop rvcpu1 pip_fore0 j_pc", false,-1, 63,0);
        tracep->declBit(c+710,"SocTop rvcpu1 pc1 clk", false,-1);
        tracep->declBit(c+711,"SocTop rvcpu1 pc1 rst", false,-1);
        tracep->declQuad(c+727,"SocTop rvcpu1 pc1 static_pc_i", false,-1, 63,0);
        tracep->declQuad(c+366,"SocTop rvcpu1 pc1 id_pc_i", false,-1, 63,0);
        tracep->declBit(c+216,"SocTop rvcpu1 pc1 id_pc_ena", false,-1);
        tracep->declQuad(c+436,"SocTop rvcpu1 pc1 ex_pc_i", false,-1, 63,0);
        tracep->declBit(c+429,"SocTop rvcpu1 pc1 ex_pc_ena", false,-1);
        tracep->declBit(c+230,"SocTop rvcpu1 pc1 pc_stall", false,-1);
        tracep->declQuad(c+408,"SocTop rvcpu1 pc1 pc", false,-1, 63,0);
        tracep->declBit(c+711,"SocTop rvcpu1 pc1 ce", false,-1);
        tracep->declBit(c+710,"SocTop rvcpu1 if_id2 clk", false,-1);
        tracep->declBit(c+711,"SocTop rvcpu1 if_id2 rst", false,-1);
        tracep->declQuad(c+408,"SocTop rvcpu1 if_id2 if_pc", false,-1, 63,0);
        tracep->declBus(c+410,"SocTop rvcpu1 if_id2 if_inst", false,-1, 31,0);
        tracep->declBit(c+429,"SocTop rvcpu1 if_id2 if_id_flush", false,-1);
        tracep->declBit(c+217,"SocTop rvcpu1 if_id2 if_id_bubble", false,-1);
        tracep->declBit(c+12,"SocTop rvcpu1 if_id2 if_inst_valid", false,-1);
        tracep->declBit(c+16,"SocTop rvcpu1 if_id2 if_inst_ready", false,-1);
        tracep->declBus(c+218,"SocTop rvcpu1 if_id2 stall_ctrl", false,-1, 4,0);
        tracep->declBit(c+197,"SocTop rvcpu1 if_id2 if_stall_req", false,-1);
        tracep->declQuad(c+426,"SocTop rvcpu1 if_id2 id_pc", false,-1, 63,0);
        tracep->declBus(c+428,"SocTop rvcpu1 if_id2 id_inst", false,-1, 31,0);
        tracep->declBit(c+711,"SocTop rvcpu1 id3 rst", false,-1);
        tracep->declBus(c+428,"SocTop rvcpu1 id3 inst_i", false,-1, 31,0);
        tracep->declQuad(c+426,"SocTop rvcpu1 id3 pc_i", false,-1, 63,0);
        tracep->declQuad(c+730,"SocTop rvcpu1 id3 op1_data_i", false,-1, 63,0);
        tracep->declQuad(c+732,"SocTop rvcpu1 id3 op2_data_i", false,-1, 63,0);
        tracep->declBus(c+200,"SocTop rvcpu1 id3 op1_addr_o", false,-1, 4,0);
        tracep->declBus(c+202,"SocTop rvcpu1 id3 op2_addr_o", false,-1, 4,0);
        tracep->declBit(c+201,"SocTop rvcpu1 id3 op1_read_o", false,-1);
        tracep->declBit(c+203,"SocTop rvcpu1 id3 op2_read_o", false,-1);
        tracep->declQuad(c+198,"SocTop rvcpu1 id3 ex_rd_data", false,-1, 63,0);
        tracep->declBus(c+430,"SocTop rvcpu1 id3 ex_rd_addr", false,-1, 4,0);
        tracep->declBit(c+431,"SocTop rvcpu1 id3 ex_rd_ena", false,-1);
        tracep->declBus(c+432,"SocTop rvcpu1 id3 ex_inst_type", false,-1, 7,0);
        tracep->declQuad(c+219,"SocTop rvcpu1 id3 mem_rd_data", false,-1, 63,0);
        tracep->declBus(c+438,"SocTop rvcpu1 id3 mem_rd_addr", false,-1, 4,0);
        tracep->declBit(c+439,"SocTop rvcpu1 id3 mem_rd_ena", false,-1);
        tracep->declBit(c+441,"SocTop rvcpu1 id3 wb_rd_ena", false,-1);
        tracep->declBus(c+440,"SocTop rvcpu1 id3 wb_rd_addr", false,-1, 4,0);
        tracep->declBit(c+729,"SocTop rvcpu1 id3 id_stall_req", false,-1);
        tracep->declBit(c+197,"SocTop rvcpu1 id3 if_stall_req", false,-1);
        tracep->declBus(c+204,"SocTop rvcpu1 id3 inst_type", false,-1, 7,0);
        tracep->declBus(c+205,"SocTop rvcpu1 id3 inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+206,"SocTop rvcpu1 id3 op1_o", false,-1, 63,0);
        tracep->declQuad(c+208,"SocTop rvcpu1 id3 op2_o", false,-1, 63,0);
        tracep->declBit(c+210,"SocTop rvcpu1 id3 rd_w_ena", false,-1);
        tracep->declBus(c+211,"SocTop rvcpu1 id3 rd_w_addr", false,-1, 4,0);
        tracep->declQuad(c+212,"SocTop rvcpu1 id3 pc_o", false,-1, 63,0);
        tracep->declBus(c+225,"SocTop rvcpu1 id3 inst_o", false,-1, 31,0);
        tracep->declBus(c+214,"SocTop rvcpu1 id3 store_addr_offset", false,-1, 11,0);
        tracep->declBus(c+215,"SocTop rvcpu1 id3 mem_op_sel", false,-1, 2,0);
        tracep->declBit(c+216,"SocTop rvcpu1 id3 jalr_pc_ena", false,-1);
        tracep->declQuad(c+366,"SocTop rvcpu1 id3 jalr_pc", false,-1, 63,0);
        tracep->declBit(c+217,"SocTop rvcpu1 id3 id_flush", false,-1);
        tracep->declBus(c+473,"SocTop rvcpu1 id3 opcode", false,-1, 6,0);
        tracep->declBus(c+474,"SocTop rvcpu1 id3 rd", false,-1, 4,0);
        tracep->declBus(c+475,"SocTop rvcpu1 id3 funct3", false,-1, 2,0);
        tracep->declBus(c+231,"SocTop rvcpu1 id3 rs1", false,-1, 4,0);
        tracep->declBus(c+476,"SocTop rvcpu1 id3 imm", false,-1, 11,0);
        tracep->declBus(c+477,"SocTop rvcpu1 id3 funct7", false,-1, 6,0);
        tracep->declBus(c+478,"SocTop rvcpu1 id3 rs2", false,-1, 4,0);
        tracep->declBus(c+479,"SocTop rvcpu1 id3 u_imm", false,-1, 19,0);
        tracep->declBus(c+480,"SocTop rvcpu1 id3 s_imm", false,-1, 11,0);
        tracep->declBit(c+232,"SocTop rvcpu1 id3 inst_lui", false,-1);
        tracep->declBit(c+233,"SocTop rvcpu1 id3 inst_auipc", false,-1);
        tracep->declBit(c+234,"SocTop rvcpu1 id3 inst_jal", false,-1);
        tracep->declBit(c+235,"SocTop rvcpu1 id3 inst_jalr", false,-1);
        tracep->declBit(c+236,"SocTop rvcpu1 id3 inst_jump", false,-1);
        tracep->declBit(c+368,"SocTop rvcpu1 id3 inst_addi", false,-1);
        tracep->declBit(c+369,"SocTop rvcpu1 id3 inst_slti", false,-1);
        tracep->declBit(c+370,"SocTop rvcpu1 id3 inst_sltiu", false,-1);
        tracep->declBit(c+371,"SocTop rvcpu1 id3 inst_xori", false,-1);
        tracep->declBit(c+372,"SocTop rvcpu1 id3 inst_ori", false,-1);
        tracep->declBit(c+373,"SocTop rvcpu1 id3 inst_andi", false,-1);
        tracep->declBit(c+374,"SocTop rvcpu1 id3 inst_slli", false,-1);
        tracep->declBit(c+375,"SocTop rvcpu1 id3 inst_srli", false,-1);
        tracep->declBit(c+237,"SocTop rvcpu1 id3 inst_srai", false,-1);
        tracep->declBit(c+238,"SocTop rvcpu1 id3 inst_addiw", false,-1);
        tracep->declBit(c+239,"SocTop rvcpu1 id3 inst_slliw", false,-1);
        tracep->declBit(c+240,"SocTop rvcpu1 id3 inst_srliw", false,-1);
        tracep->declBit(c+241,"SocTop rvcpu1 id3 inst_sraiw", false,-1);
        tracep->declBit(c+242,"SocTop rvcpu1 id3 inst_add", false,-1);
        tracep->declBit(c+243,"SocTop rvcpu1 id3 inst_sub", false,-1);
        tracep->declBit(c+244,"SocTop rvcpu1 id3 inst_sll", false,-1);
        tracep->declBit(c+245,"SocTop rvcpu1 id3 inst_slt", false,-1);
        tracep->declBit(c+246,"SocTop rvcpu1 id3 inst_sltu", false,-1);
        tracep->declBit(c+247,"SocTop rvcpu1 id3 inst_xor", false,-1);
        tracep->declBit(c+248,"SocTop rvcpu1 id3 inst_srl", false,-1);
        tracep->declBit(c+249,"SocTop rvcpu1 id3 inst_sra", false,-1);
        tracep->declBit(c+250,"SocTop rvcpu1 id3 inst_or", false,-1);
        tracep->declBit(c+251,"SocTop rvcpu1 id3 inst_and", false,-1);
        tracep->declBit(c+252,"SocTop rvcpu1 id3 inst_addw", false,-1);
        tracep->declBit(c+253,"SocTop rvcpu1 id3 inst_subw", false,-1);
        tracep->declBit(c+254,"SocTop rvcpu1 id3 inst_sllw", false,-1);
        tracep->declBit(c+255,"SocTop rvcpu1 id3 inst_srlw", false,-1);
        tracep->declBit(c+256,"SocTop rvcpu1 id3 inst_sraw", false,-1);
        tracep->declBit(c+376,"SocTop rvcpu1 id3 inst_beq", false,-1);
        tracep->declBit(c+377,"SocTop rvcpu1 id3 inst_ben", false,-1);
        tracep->declBit(c+378,"SocTop rvcpu1 id3 inst_blt", false,-1);
        tracep->declBit(c+379,"SocTop rvcpu1 id3 inst_bge", false,-1);
        tracep->declBit(c+380,"SocTop rvcpu1 id3 inst_bltu", false,-1);
        tracep->declBit(c+381,"SocTop rvcpu1 id3 inst_bgeu", false,-1);
        tracep->declBit(c+257,"SocTop rvcpu1 id3 inst_csrrw", false,-1);
        tracep->declBit(c+258,"SocTop rvcpu1 id3 inst_csrrs", false,-1);
        tracep->declBit(c+259,"SocTop rvcpu1 id3 inst_csrrc", false,-1);
        tracep->declBit(c+260,"SocTop rvcpu1 id3 inst_csrrwi", false,-1);
        tracep->declBit(c+382,"SocTop rvcpu1 id3 inst_csrrsi", false,-1);
        tracep->declBit(c+383,"SocTop rvcpu1 id3 inst_csrrci", false,-1);
        tracep->declBit(c+261,"SocTop rvcpu1 id3 inst_csr_rs1", false,-1);
        tracep->declBit(c+260,"SocTop rvcpu1 id3 inst_csr_imm", false,-1);
        tracep->declBit(c+384,"SocTop rvcpu1 id3 inst_ecall", false,-1);
        tracep->declBit(c+262,"SocTop rvcpu1 id3 inst_ebreak", false,-1);
        tracep->declBit(c+385,"SocTop rvcpu1 id3 inst_mret", false,-1);
        tracep->declBit(c+737,"SocTop rvcpu1 id3 op1_loda_relate", false,-1);
        tracep->declBit(c+738,"SocTop rvcpu1 id3 op2_loda_relate", false,-1);
        tracep->declBit(c+263,"SocTop rvcpu1 id3 ex_op1", false,-1);
        tracep->declBit(c+264,"SocTop rvcpu1 id3 mem_op1", false,-1);
        tracep->declBit(c+386,"SocTop rvcpu1 id3 ex_op2", false,-1);
        tracep->declBit(c+387,"SocTop rvcpu1 id3 mem_op2", false,-1);
        tracep->declBit(c+388,"SocTop rvcpu1 id3 wb_op1", false,-1);
        tracep->declQuad(c+389,"SocTop rvcpu1 id3 jalr_pc_temp", false,-1, 63,0);
        tracep->declBit(c+391,"SocTop rvcpu1 id3 predict_success", false,-1);
        tracep->declBit(c+710,"SocTop rvcpu1 id_ex4 clk", false,-1);
        tracep->declBit(c+711,"SocTop rvcpu1 id_ex4 rst", false,-1);
        tracep->declBit(c+429,"SocTop rvcpu1 id_ex4 id_ex_bubble", false,-1);
        tracep->declBus(c+218,"SocTop rvcpu1 id_ex4 stall_ctrl", false,-1, 4,0);
        tracep->declBus(c+225,"SocTop rvcpu1 id_ex4 id_inst", false,-1, 31,0);
        tracep->declQuad(c+212,"SocTop rvcpu1 id_ex4 id_pc", false,-1, 63,0);
        tracep->declBus(c+204,"SocTop rvcpu1 id_ex4 id_inst_type", false,-1, 7,0);
        tracep->declBus(c+205,"SocTop rvcpu1 id_ex4 id_inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+206,"SocTop rvcpu1 id_ex4 id_op1", false,-1, 63,0);
        tracep->declQuad(c+208,"SocTop rvcpu1 id_ex4 id_op2", false,-1, 63,0);
        tracep->declBit(c+210,"SocTop rvcpu1 id_ex4 id_rd_ena", false,-1);
        tracep->declBus(c+211,"SocTop rvcpu1 id_ex4 id_rd_addr", false,-1, 4,0);
        tracep->declBus(c+214,"SocTop rvcpu1 id_ex4 id_addr_offset", false,-1, 11,0);
        tracep->declBus(c+215,"SocTop rvcpu1 id_ex4 id_ls_sel", false,-1, 2,0);
        tracep->declBus(c+462,"SocTop rvcpu1 id_ex4 ex_inst", false,-1, 31,0);
        tracep->declQuad(c+444,"SocTop rvcpu1 id_ex4 ex_pc", false,-1, 63,0);
        tracep->declBus(c+446,"SocTop rvcpu1 id_ex4 ex_inst_type", false,-1, 7,0);
        tracep->declBus(c+447,"SocTop rvcpu1 id_ex4 ex_inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+448,"SocTop rvcpu1 id_ex4 ex_op1", false,-1, 63,0);
        tracep->declQuad(c+450,"SocTop rvcpu1 id_ex4 ex_op2", false,-1, 63,0);
        tracep->declBit(c+452,"SocTop rvcpu1 id_ex4 ex_rd_ena", false,-1);
        tracep->declBus(c+430,"SocTop rvcpu1 id_ex4 ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+453,"SocTop rvcpu1 id_ex4 ex_addr_offset", false,-1, 11,0);
        tracep->declBus(c+433,"SocTop rvcpu1 id_ex4 ex_ls_sel", false,-1, 2,0);
        tracep->declBit(c+710,"SocTop rvcpu1 ex5 clk", false,-1);
        tracep->declBit(c+711,"SocTop rvcpu1 ex5 rst", false,-1);
        tracep->declQuad(c+444,"SocTop rvcpu1 ex5 pc_i", false,-1, 63,0);
        tracep->declBus(c+462,"SocTop rvcpu1 ex5 id_ex_inst", false,-1, 31,0);
        tracep->declBus(c+446,"SocTop rvcpu1 ex5 inst_type_i", false,-1, 7,0);
        tracep->declBus(c+447,"SocTop rvcpu1 ex5 inst_opcode_i", false,-1, 7,0);
        tracep->declQuad(c+448,"SocTop rvcpu1 ex5 op1_i", false,-1, 63,0);
        tracep->declQuad(c+450,"SocTop rvcpu1 ex5 op2_i", false,-1, 63,0);
        tracep->declBit(c+452,"SocTop rvcpu1 ex5 rd_ena_i", false,-1);
        tracep->declBus(c+430,"SocTop rvcpu1 ex5 rd_addr_i", false,-1, 4,0);
        tracep->declBus(c+433,"SocTop rvcpu1 ex5 ls_sel_i", false,-1, 2,0);
        tracep->declBus(c+453,"SocTop rvcpu1 ex5 addr_offsel_i", false,-1, 11,0);
        tracep->declBus(c+432,"SocTop rvcpu1 ex5 inst_type_o", false,-1, 7,0);
        tracep->declBit(c+431,"SocTop rvcpu1 ex5 rd_ena_o", false,-1);
        tracep->declBus(c+430,"SocTop rvcpu1 ex5 rd_addr_o", false,-1, 4,0);
        tracep->declQuad(c+198,"SocTop rvcpu1 ex5 rd_data_o", false,-1, 63,0);
        tracep->declQuad(c+221,"SocTop rvcpu1 ex5 ex_pc_o", false,-1, 63,0);
        tracep->declBus(c+226,"SocTop rvcpu1 ex5 ex_inst_o", false,-1, 31,0);
        tracep->declBus(c+433,"SocTop rvcpu1 ex5 ls_sel_o", false,-1, 2,0);
        tracep->declQuad(c+434,"SocTop rvcpu1 ex5 ls_addr_o", false,-1, 63,0);
        tracep->declBit(c+429,"SocTop rvcpu1 ex5 ex_flush", false,-1);
        tracep->declBit(c+429,"SocTop rvcpu1 ex5 branch_pc_ena", false,-1);
        tracep->declQuad(c+436,"SocTop rvcpu1 ex5 branch_pc", false,-1, 63,0);
        tracep->declBit(c+197,"SocTop rvcpu1 ex5 if_stell_req", false,-1);
        tracep->declBit(c+365,"SocTop rvcpu1 ex5 ex_stall_req", false,-1);
        tracep->declBit(c+411,"SocTop rvcpu1 ex5 timer_intr", false,-1);
        tracep->declBit(c+265,"SocTop rvcpu1 ex5 ex_stall", false,-1);
        tracep->declQuad(c+266,"SocTop rvcpu1 ex5 exe_res", false,-1, 63,0);
        tracep->declQuad(c+481,"SocTop rvcpu1 ex5 op2_i_mux", false,-1, 63,0);
        tracep->declQuad(c+483,"SocTop rvcpu1 ex5 op1_sub_op2", false,-1, 63,0);
        tracep->declQuad(c+485,"SocTop rvcpu1 ex5 op1_add_op2", false,-1, 63,0);
        tracep->declQuad(c+487,"SocTop rvcpu1 ex5 op1_addw_op2", false,-1, 63,0);
        tracep->declBit(c+489,"SocTop rvcpu1 ex5 op1_ls_op2", false,-1);
        tracep->declQuad(c+490,"SocTop rvcpu1 ex5 shift_res", false,-1, 63,0);
        tracep->declBus(c+492,"SocTop rvcpu1 ex5 op1_sllw_op2", false,-1, 31,0);
        tracep->declQuad(c+493,"SocTop rvcpu1 ex5 sllw_res", false,-1, 63,0);
        tracep->declBus(c+495,"SocTop rvcpu1 ex5 op1_srlw_op2", false,-1, 31,0);
        tracep->declQuad(c+496,"SocTop rvcpu1 ex5 srlw_res", false,-1, 63,0);
        tracep->declBus(c+498,"SocTop rvcpu1 ex5 op1_sraw_op2", false,-1, 31,0);
        tracep->declQuad(c+499,"SocTop rvcpu1 ex5 sraw_res", false,-1, 63,0);
        tracep->declBus(c+501,"SocTop rvcpu1 ex5 op1_subw_op2", false,-1, 31,0);
        tracep->declQuad(c+502,"SocTop rvcpu1 ex5 subw_res", false,-1, 63,0);
        tracep->declQuad(c+504,"SocTop rvcpu1 ex5 upper_imm", false,-1, 63,0);
        tracep->declBit(c+506,"SocTop rvcpu1 ex5 ex_flush_branch", false,-1);
        tracep->declBit(c+507,"SocTop rvcpu1 ex5 tmr_trap_ena", false,-1);
        tracep->declBus(c+508,"SocTop rvcpu1 ex5 csr_idx", false,-1, 11,0);
        tracep->declQuad(c+509,"SocTop rvcpu1 ex5 read_csr_data", false,-1, 63,0);
        tracep->declBit(c+511,"SocTop rvcpu1 ex5 trap_ena", false,-1);
        tracep->declBit(c+512,"SocTop rvcpu1 ex5 ecall_trap_ena", false,-1);
        tracep->declBit(c+513,"SocTop rvcpu1 ex5 cmt_mret_ena", false,-1);
        tracep->declBit(c+514,"SocTop rvcpu1 ex5 csr_wr_en", false,-1);
        tracep->declBit(c+515,"SocTop rvcpu1 ex5 csr_rd_en", false,-1);
        tracep->declQuad(c+516,"SocTop rvcpu1 ex5 wbck_csr_data", false,-1, 63,0);
        tracep->declQuad(c+518,"SocTop rvcpu1 ex5 trap_mcause_value", false,-1, 63,0);
        tracep->declQuad(c+520,"SocTop rvcpu1 ex5 mask_set_res", false,-1, 63,0);
        tracep->declQuad(c+522,"SocTop rvcpu1 ex5 mask_clear_res", false,-1, 63,0);
        tracep->declBit(c+710,"SocTop rvcpu1 ex5 csr0 clk", false,-1);
        tracep->declBit(c+711,"SocTop rvcpu1 ex5 csr0 rst", false,-1);
        tracep->declQuad(c+444,"SocTop rvcpu1 ex5 csr0 pc_i", false,-1, 63,0);
        tracep->declBit(c+514,"SocTop rvcpu1 ex5 csr0 csr_wr_en", false,-1);
        tracep->declBit(c+515,"SocTop rvcpu1 ex5 csr0 csr_rd_en", false,-1);
        tracep->declBus(c+508,"SocTop rvcpu1 ex5 csr0 csr_idx", false,-1, 11,0);
        tracep->declBit(c+513,"SocTop rvcpu1 ex5 csr0 cmt_mret_ena", false,-1);
        tracep->declBit(c+512,"SocTop rvcpu1 ex5 csr0 ecall_trap_ena", false,-1);
        tracep->declQuad(c+518,"SocTop rvcpu1 ex5 csr0 trap_mcause_value", false,-1, 63,0);
        tracep->declBit(c+411,"SocTop rvcpu1 ex5 csr0 tmr_intr_ena", false,-1);
        tracep->declBit(c+507,"SocTop rvcpu1 ex5 csr0 tmr_trap_ena", false,-1);
        tracep->declQuad(c+509,"SocTop rvcpu1 ex5 csr0 read_csr_data", false,-1, 63,0);
        tracep->declQuad(c+516,"SocTop rvcpu1 ex5 csr0 wbck_csr_data", false,-1, 63,0);
        tracep->declBit(c+265,"SocTop rvcpu1 ex5 csr0 ex_stall", false,-1);
        tracep->declBit(c+524,"SocTop rvcpu1 ex5 csr0 sel_mcycle", false,-1);
        tracep->declBit(c+525,"SocTop rvcpu1 ex5 csr0 rd_mcycle", false,-1);
        tracep->declBit(c+526,"SocTop rvcpu1 ex5 csr0 wr_mcycle", false,-1);
        tracep->declQuad(c+527,"SocTop rvcpu1 ex5 csr0 csr_mcycle", false,-1, 63,0);
        tracep->declBit(c+529,"SocTop rvcpu1 ex5 csr0 sel_mstatus", false,-1);
        tracep->declBit(c+530,"SocTop rvcpu1 ex5 csr0 rd_mstatus", false,-1);
        tracep->declBit(c+531,"SocTop rvcpu1 ex5 csr0 wr_mstatus", false,-1);
        tracep->declBit(c+532,"SocTop rvcpu1 ex5 csr0 mstatus_mpie_ena", false,-1);
        tracep->declBit(c+533,"SocTop rvcpu1 ex5 csr0 mstatus_mpie_nxt", false,-1);
        tracep->declBit(c+534,"SocTop rvcpu1 ex5 csr0 csr_mstatus_mpie", false,-1);
        tracep->declBit(c+532,"SocTop rvcpu1 ex5 csr0 mstatus_mie_ena", false,-1);
        tracep->declBit(c+535,"SocTop rvcpu1 ex5 csr0 mstatus_mie_nxt", false,-1);
        tracep->declBit(c+536,"SocTop rvcpu1 ex5 csr0 csr_mstatus_mie", false,-1);
        tracep->declBit(c+532,"SocTop rvcpu1 ex5 csr0 mstatus_mpp_ena", false,-1);
        tracep->declBus(c+537,"SocTop rvcpu1 ex5 csr0 mstatus_mpp_nxt", false,-1, 1,0);
        tracep->declBus(c+538,"SocTop rvcpu1 ex5 csr0 csr_mstatus_mpp", false,-1, 1,0);
        tracep->declBus(c+757,"SocTop rvcpu1 ex5 csr0 csr_mstatus_xs", false,-1, 1,0);
        tracep->declBus(c+539,"SocTop rvcpu1 ex5 csr0 csr_mstatus_fs", false,-1, 1,0);
        tracep->declBit(c+540,"SocTop rvcpu1 ex5 csr0 csr_mstatus_sd", false,-1);
        tracep->declQuad(c+541,"SocTop rvcpu1 ex5 csr0 csr_mstatus", false,-1, 63,0);
        tracep->declBit(c+543,"SocTop rvcpu1 ex5 csr0 sel_mtvec", false,-1);
        tracep->declBit(c+544,"SocTop rvcpu1 ex5 csr0 rd_mtvec", false,-1);
        tracep->declBit(c+545,"SocTop rvcpu1 ex5 csr0 wr_mtvec", false,-1);
        tracep->declQuad(c+546,"SocTop rvcpu1 ex5 csr0 csr_mtvec_base", false,-1, 63,2);
        tracep->declBus(c+757,"SocTop rvcpu1 ex5 csr0 csr_mtvec_mode", false,-1, 1,0);
        tracep->declQuad(c+548,"SocTop rvcpu1 ex5 csr0 csr_mtvec", false,-1, 63,0);
        tracep->declBit(c+550,"SocTop rvcpu1 ex5 csr0 sel_mepc", false,-1);
        tracep->declBit(c+551,"SocTop rvcpu1 ex5 csr0 rd_mepc", false,-1);
        tracep->declBit(c+552,"SocTop rvcpu1 ex5 csr0 wr_mepc", false,-1);
        tracep->declQuad(c+553,"SocTop rvcpu1 ex5 csr0 csr_mepc", false,-1, 63,0);
        tracep->declBit(c+555,"SocTop rvcpu1 ex5 csr0 sel_mcause", false,-1);
        tracep->declBit(c+556,"SocTop rvcpu1 ex5 csr0 rd_mcause", false,-1);
        tracep->declBit(c+557,"SocTop rvcpu1 ex5 csr0 wr_mcause", false,-1);
        tracep->declBit(c+558,"SocTop rvcpu1 ex5 csr0 csr_mcause_ena", false,-1);
        tracep->declQuad(c+559,"SocTop rvcpu1 ex5 csr0 csr_mcause_nxt", false,-1, 63,0);
        tracep->declQuad(c+561,"SocTop rvcpu1 ex5 csr0 csr_mcause", false,-1, 63,0);
        tracep->declBit(c+563,"SocTop rvcpu1 ex5 csr0 sle_mie", false,-1);
        tracep->declBit(c+564,"SocTop rvcpu1 ex5 csr0 rd_mie", false,-1);
        tracep->declBit(c+565,"SocTop rvcpu1 ex5 csr0 wr_mie", false,-1);
        tracep->declBit(c+566,"SocTop rvcpu1 ex5 csr0 csr_mie_mtie", false,-1);
        tracep->declQuad(c+567,"SocTop rvcpu1 ex5 csr0 csr_mie", false,-1, 63,0);
        tracep->declBit(c+569,"SocTop rvcpu1 ex5 csr0 sel_mip", false,-1);
        tracep->declBit(c+570,"SocTop rvcpu1 ex5 csr0 rd_mip", false,-1);
        tracep->declBit(c+571,"SocTop rvcpu1 ex5 csr0 csr_mip_mtip", false,-1);
        tracep->declQuad(c+572,"SocTop rvcpu1 ex5 csr0 csr_mip", false,-1, 63,0);
        tracep->declBit(c+574,"SocTop rvcpu1 ex5 csr0 sel_mscratch", false,-1);
        tracep->declBit(c+575,"SocTop rvcpu1 ex5 csr0 rd_mscrstch", false,-1);
        tracep->declBit(c+576,"SocTop rvcpu1 ex5 csr0 wr_mscrstch", false,-1);
        tracep->declQuad(c+577,"SocTop rvcpu1 ex5 csr0 csr_mscrstch", false,-1, 63,0);
        tracep->declBit(c+710,"SocTop rvcpu1 ex_mem6 clk", false,-1);
        tracep->declBit(c+711,"SocTop rvcpu1 ex_mem6 rst", false,-1);
        tracep->declQuad(c+221,"SocTop rvcpu1 ex_mem6 ex_mem_pc_i", false,-1, 63,0);
        tracep->declBus(c+226,"SocTop rvcpu1 ex_mem6 ex_mem_inst_i", false,-1, 31,0);
        tracep->declBus(c+218,"SocTop rvcpu1 ex_mem6 stall_ctrl", false,-1, 4,0);
        tracep->declBus(c+432,"SocTop rvcpu1 ex_mem6 ex_inst_type", false,-1, 7,0);
        tracep->declBit(c+431,"SocTop rvcpu1 ex_mem6 ex_rd_ena", false,-1);
        tracep->declQuad(c+198,"SocTop rvcpu1 ex_mem6 ex_rd_data", false,-1, 63,0);
        tracep->declBus(c+430,"SocTop rvcpu1 ex_mem6 ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+433,"SocTop rvcpu1 ex_mem6 ex_ls_sel", false,-1, 2,0);
        tracep->declQuad(c+434,"SocTop rvcpu1 ex_mem6 ex_ls_addr", false,-1, 63,0);
        tracep->declBus(c+454,"SocTop rvcpu1 ex_mem6 mem_inst_type", false,-1, 7,0);
        tracep->declBit(c+439,"SocTop rvcpu1 ex_mem6 mem_rd_ena", false,-1);
        tracep->declQuad(c+455,"SocTop rvcpu1 ex_mem6 mem_rd_data", false,-1, 63,0);
        tracep->declBus(c+438,"SocTop rvcpu1 ex_mem6 mem_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+460,"SocTop rvcpu1 ex_mem6 ex_mem_pc_o", false,-1, 63,0);
        tracep->declBus(c+463,"SocTop rvcpu1 ex_mem6 ex_mem_inst_o", false,-1, 31,0);
        tracep->declBus(c+457,"SocTop rvcpu1 ex_mem6 mem_ls_sel", false,-1, 2,0);
        tracep->declQuad(c+458,"SocTop rvcpu1 ex_mem6 mem_ls_addr", false,-1, 63,0);
        tracep->declBit(c+711,"SocTop rvcpu1 mem7 rst", false,-1);
        tracep->declBus(c+454,"SocTop rvcpu1 mem7 inst_type_i", false,-1, 7,0);
        tracep->declBit(c+439,"SocTop rvcpu1 mem7 rd_ena_i", false,-1);
        tracep->declQuad(c+455,"SocTop rvcpu1 mem7 rd_data_i", false,-1, 63,0);
        tracep->declBus(c+438,"SocTop rvcpu1 mem7 rd_addr_i", false,-1, 4,0);
        tracep->declQuad(c+460,"SocTop rvcpu1 mem7 mem_pc_i", false,-1, 63,0);
        tracep->declBus(c+463,"SocTop rvcpu1 mem7 mem_inst_i", false,-1, 31,0);
        tracep->declQuad(c+458,"SocTop rvcpu1 mem7 ls_addr_i", false,-1, 63,0);
        tracep->declBus(c+457,"SocTop rvcpu1 mem7 ls_sel_i", false,-1, 2,0);
        tracep->declQuad(c+5,"SocTop rvcpu1 mem7 data_addr_o", false,-1, 63,0);
        tracep->declBus(c+7,"SocTop rvcpu1 mem7 wmask_o", false,-1, 7,0);
        tracep->declQuad(c+18,"SocTop rvcpu1 mem7 data_i", false,-1, 63,0);
        tracep->declQuad(c+8,"SocTop rvcpu1 mem7 data_o", false,-1, 63,0);
        tracep->declBit(c+10,"SocTop rvcpu1 mem7 we", false,-1);
        tracep->declBit(c+11,"SocTop rvcpu1 mem7 re", false,-1);
        tracep->declBit(c+359,"SocTop rvcpu1 mem7 mem_finish", false,-1);
        tracep->declBit(c+439,"SocTop rvcpu1 mem7 rd_ena_o", false,-1);
        tracep->declQuad(c+219,"SocTop rvcpu1 mem7 rd_data_o", false,-1, 63,0);
        tracep->declBus(c+438,"SocTop rvcpu1 mem7 rd_addr_o", false,-1, 4,0);
        tracep->declQuad(c+223,"SocTop rvcpu1 mem7 mem_pc_o", false,-1, 63,0);
        tracep->declBus(c+227,"SocTop rvcpu1 mem7 mem_inst_o", false,-1, 31,0);
        tracep->declBit(c+734,"SocTop rvcpu1 mem7 mem_stall_req", false,-1);
        tracep->declQuad(c+392,"SocTop rvcpu1 mem7 load_data", false,-1, 63,0);
        tracep->declBus(c+579,"SocTop rvcpu1 mem7 byte_sel", false,-1, 2,0);
        tracep->declBus(c+580,"SocTop rvcpu1 mem7 half_byte_sel", false,-1, 1,0);
        tracep->declBit(c+581,"SocTop rvcpu1 mem7 word_sel", false,-1);
        tracep->declBus(c+268,"SocTop rvcpu1 mem7 data_byte", false,-1, 7,0);
        tracep->declBus(c+269,"SocTop rvcpu1 mem7 data_half_byte", false,-1, 15,0);
        tracep->declBus(c+270,"SocTop rvcpu1 mem7 data_word", false,-1, 31,0);
        tracep->declQuad(c+271,"SocTop rvcpu1 mem7 store_data", false,-1, 63,0);
        tracep->declBus(c+273,"SocTop rvcpu1 mem7 store_mask", false,-1, 7,0);
        tracep->declQuad(c+739,"SocTop rvcpu1 mem7 sb_data", false,-1, 63,0);
        tracep->declQuad(c+741,"SocTop rvcpu1 mem7 sh_data", false,-1, 63,0);
        tracep->declQuad(c+743,"SocTop rvcpu1 mem7 sw_data", false,-1, 63,0);
        tracep->declBus(c+745,"SocTop rvcpu1 mem7 sb_mask", false,-1, 7,0);
        tracep->declBus(c+746,"SocTop rvcpu1 mem7 sh_mask", false,-1, 7,0);
        tracep->declBus(c+747,"SocTop rvcpu1 mem7 sw_mask", false,-1, 7,0);
        tracep->declBit(c+710,"SocTop rvcpu1 mem_wb8 clk", false,-1);
        tracep->declBit(c+711,"SocTop rvcpu1 mem_wb8 rst", false,-1);
        tracep->declQuad(c+223,"SocTop rvcpu1 mem_wb8 wb_pc_i", false,-1, 63,0);
        tracep->declBus(c+227,"SocTop rvcpu1 mem_wb8 wb_inst_i", false,-1, 31,0);
        tracep->declBus(c+218,"SocTop rvcpu1 mem_wb8 stall_ctrl", false,-1, 4,0);
        tracep->declQuad(c+219,"SocTop rvcpu1 mem_wb8 mem_rd_data", false,-1, 63,0);
        tracep->declBus(c+438,"SocTop rvcpu1 mem_wb8 mem_rd_addr", false,-1, 4,0);
        tracep->declBit(c+439,"SocTop rvcpu1 mem_wb8 mem_rd_ena", false,-1);
        tracep->declQuad(c+442,"SocTop rvcpu1 mem_wb8 wb_rd_data", false,-1, 63,0);
        tracep->declBus(c+440,"SocTop rvcpu1 mem_wb8 wb_rd_addr", false,-1, 4,0);
        tracep->declBit(c+441,"SocTop rvcpu1 mem_wb8 wb_rd_ena", false,-1);
        tracep->declQuad(c+582,"SocTop rvcpu1 mem_wb8 wb_pc_o", false,-1, 63,0);
        tracep->declBus(c+584,"SocTop rvcpu1 mem_wb8 wb_inst_o", false,-1, 31,0);
        tracep->declQuad(c+585,"SocTop rvcpu1 mem_wb8 pc_data1", false,-1, 63,0);
        tracep->declBit(c+587,"SocTop rvcpu1 mem_wb8 difftest_exyn", false,-1);
        tracep->declBit(c+588,"SocTop rvcpu1 mem_wb8 teap_yn", false,-1);
        tracep->declQuad(c+589,"SocTop rvcpu1 mem_wb8 trap_code", false,-1, 63,0);
        tracep->declBit(c+711,"SocTop rvcpu1 ctrl9 rst", false,-1);
        tracep->declBit(c+197,"SocTop rvcpu1 ctrl9 if_stall_req", false,-1);
        tracep->declBit(c+729,"SocTop rvcpu1 ctrl9 id_stall_req", false,-1);
        tracep->declBit(c+365,"SocTop rvcpu1 ctrl9 ex_stall_req", false,-1);
        tracep->declBit(c+734,"SocTop rvcpu1 ctrl9 mem_stall_req", false,-1);
        tracep->declBus(c+218,"SocTop rvcpu1 ctrl9 stall_ctrl", false,-1, 4,0);
        tracep->declBit(c+710,"SocTop rvcpu1 regfile10 clk", false,-1);
        tracep->declBit(c+711,"SocTop rvcpu1 regfile10 rst", false,-1);
        tracep->declBus(c+440,"SocTop rvcpu1 regfile10 waddr", false,-1, 4,0);
        tracep->declQuad(c+442,"SocTop rvcpu1 regfile10 wdata", false,-1, 63,0);
        tracep->declBit(c+441,"SocTop rvcpu1 regfile10 we", false,-1);
        tracep->declBus(c+200,"SocTop rvcpu1 regfile10 raddr1", false,-1, 4,0);
        tracep->declQuad(c+730,"SocTop rvcpu1 regfile10 rdata1", false,-1, 63,0);
        tracep->declBit(c+201,"SocTop rvcpu1 regfile10 re1", false,-1);
        tracep->declBus(c+202,"SocTop rvcpu1 regfile10 raddr2", false,-1, 4,0);
        tracep->declQuad(c+732,"SocTop rvcpu1 regfile10 rdata2", false,-1, 63,0);
        tracep->declBit(c+203,"SocTop rvcpu1 regfile10 re2", false,-1);
        tracep->declBit(c+726,"SocTop rvcpu1 regfile10 x1_read_ena", false,-1);
        tracep->declQuad(c+724,"SocTop rvcpu1 regfile10 x1_data", false,-1, 63,0);
        tracep->declBus(c+425,"SocTop rvcpu1 regfile10 x1_addr", false,-1, 4,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+591+i*2,"SocTop rvcpu1 regfile10 regs", true,(i+0), 63,0);}}
        tracep->declBus(c+655,"SocTop rvcpu1 regfile10 i", false,-1, 31,0);
        tracep->declBit(c+710,"SocTop i_cache2 clk", false,-1);
        tracep->declBit(c+711,"SocTop i_cache2 rst", false,-1);
        tracep->declQuad(c+408,"SocTop i_cache2 inst_addr", false,-1, 63,0);
        tracep->declBit(c+711,"SocTop i_cache2 inst_ena", false,-1);
        tracep->declBit(c+16,"SocTop i_cache2 inst_ready", false,-1);
        tracep->declBus(c+410,"SocTop i_cache2 inst_data", false,-1, 31,0);
        tracep->declBit(c+12,"SocTop i_cache2 inst_valid", false,-1);
        tracep->declBit(c+13,"SocTop i_cache2 cache_read_ena", false,-1);
        tracep->declBit(c+17,"SocTop i_cache2 cache_read_resp", false,-1);
        tracep->declQuad(c+14,"SocTop i_cache2 cache_addr", false,-1, 63,0);
        tracep->declQuad(c+26,"SocTop i_cache2 cache_in_data", false,-1, 63,0);
        tracep->declBit(c+28,"SocTop i_cache2 cache_in_valid", false,-1);
        tracep->declBit(c+29,"SocTop i_cache2 arb_working_ti", false,-1);
        tracep->declBit(c+274,"SocTop i_cache2 icache_if_shankhand", false,-1);
        tracep->declQuad(c+656,"SocTop i_cache2 addr_lock", false,-1, 63,0);
        tracep->declQuad(c+658,"SocTop i_cache2 icache_tag", false,-1, 54,0);
        tracep->declBus(c+660,"SocTop i_cache2 icache_index", false,-1, 5,0);
        tracep->declBus(c+661,"SocTop i_cache2 state_inst", false,-1, 5,0);
        tracep->declBus(c+275,"SocTop i_cache2 state_inst_nxt", false,-1, 5,0);
        tracep->declBit(c+662,"SocTop i_cache2 read_ok", false,-1);
        tracep->declBit(c+663,"SocTop i_cache2 inst_hit_ok", false,-1);
        tracep->declQuad(c+276,"SocTop i_cache2 miss_data", false,-1, 63,0);
        tracep->declBit(c+278,"SocTop i_cache2 miss_ena_o", false,-1);
        tracep->declBit(c+279,"SocTop i_cache2 miss_ena_t", false,-1);
        tracep->declBit(c+280,"SocTop i_cache2 write_i_ok", false,-1);
        tracep->declQuad(c+664,"SocTop i_cache2 i_tag_data1", false,-1, 54,0);
        tracep->declBit(c+666,"SocTop i_cache2 i_tag_user1", false,-1);
        tracep->declQuad(c+667,"SocTop i_cache2 i_tag_data2", false,-1, 54,0);
        tracep->declBit(c+669,"SocTop i_cache2 i_tag_user2", false,-1);
        tracep->declQuad(c+670,"SocTop i_cache2 inst_out_1", false,-1, 63,0);
        tracep->declQuad(c+672,"SocTop i_cache2 inst_out_2", false,-1, 63,0);
        tracep->declBus(c+674,"SocTop i_cache2 i", false,-1, 31,0);
        tracep->declBit(c+710,"SocTop i_cache2 u_tag01 clk", false,-1);
        tracep->declBus(c+660,"SocTop i_cache2 u_tag01 addr_i", false,-1, 5,0);
        tracep->declQuad(c+675,"SocTop i_cache2 u_tag01 data_i", false,-1, 55,0);
        tracep->declBit(c+278,"SocTop i_cache2 u_tag01 write_ena", false,-1);
        tracep->declQuad(c+664,"SocTop i_cache2 u_tag01 tag_data", false,-1, 54,0);
        tracep->declBit(c+666,"SocTop i_cache2 u_tag01 tag_valid", false,-1);
        tracep->declQuad(c+664,"SocTop i_cache2 u_tag01 out_data", false,-1, 54,0);
        tracep->declBit(c+666,"SocTop i_cache2 u_tag01 out_vaild", false,-1);
        tracep->declBit(c+710,"SocTop i_cache2 u_tag02 clk", false,-1);
        tracep->declBus(c+660,"SocTop i_cache2 u_tag02 addr_i", false,-1, 5,0);
        tracep->declQuad(c+675,"SocTop i_cache2 u_tag02 data_i", false,-1, 55,0);
        tracep->declBit(c+279,"SocTop i_cache2 u_tag02 write_ena", false,-1);
        tracep->declQuad(c+667,"SocTop i_cache2 u_tag02 tag_data", false,-1, 54,0);
        tracep->declBit(c+669,"SocTop i_cache2 u_tag02 tag_valid", false,-1);
        tracep->declQuad(c+667,"SocTop i_cache2 u_tag02 out_data", false,-1, 54,0);
        tracep->declBit(c+669,"SocTop i_cache2 u_tag02 out_vaild", false,-1);
        tracep->declBit(c+710,"SocTop i_cache2 u_data01 clk", false,-1);
        tracep->declBus(c+660,"SocTop i_cache2 u_data01 addr_i", false,-1, 5,0);
        tracep->declQuad(c+276,"SocTop i_cache2 u_data01 data_i", false,-1, 63,0);
        tracep->declBit(c+279,"SocTop i_cache2 u_data01 write_ena", false,-1);
        tracep->declQuad(c+670,"SocTop i_cache2 u_data01 data_o", false,-1, 63,0);
        tracep->declQuad(c+670,"SocTop i_cache2 u_data01 out_data", false,-1, 63,0);
        tracep->declBit(c+710,"SocTop i_cache2 u_data02 clk", false,-1);
        tracep->declBus(c+660,"SocTop i_cache2 u_data02 addr_i", false,-1, 5,0);
        tracep->declQuad(c+276,"SocTop i_cache2 u_data02 data_i", false,-1, 63,0);
        tracep->declBit(c+278,"SocTop i_cache2 u_data02 write_ena", false,-1);
        tracep->declQuad(c+672,"SocTop i_cache2 u_data02 data_o", false,-1, 63,0);
        tracep->declQuad(c+672,"SocTop i_cache2 u_data02 out_data", false,-1, 63,0);
        tracep->declBit(c+710,"SocTop d_cache3 clk", false,-1);
        tracep->declBit(c+711,"SocTop d_cache3 rst", false,-1);
        tracep->declQuad(c+5,"SocTop d_cache3 mem_addr_i", false,-1, 63,0);
        tracep->declQuad(c+8,"SocTop d_cache3 mem_data_i", false,-1, 63,0);
        tracep->declBus(c+7,"SocTop d_cache3 mem_strb_i", false,-1, 7,0);
        tracep->declBit(c+11,"SocTop d_cache3 mem_read_valid", false,-1);
        tracep->declBit(c+10,"SocTop d_cache3 mem_write_valid", false,-1);
        tracep->declQuad(c+18,"SocTop d_cache3 mem_data_out", false,-1, 63,0);
        tracep->declBit(c+359,"SocTop d_cache3 mem_data_ready", false,-1);
        tracep->declQuad(c+23,"SocTop d_cache3 in_dcache_data", false,-1, 63,0);
        tracep->declBit(c+25,"SocTop d_cache3 in_dcache_ready", false,-1);
        tracep->declBit(c+362,"SocTop d_cache3 out_dcache_resp", false,-1);
        tracep->declQuad(c+20,"SocTop d_cache3 out_dcache_addr", false,-1, 63,0);
        tracep->declQuad(c+360,"SocTop d_cache3 out_dcache_data", false,-1, 63,0);
        tracep->declBus(c+22,"SocTop d_cache3 out_dcache_type", false,-1, 3,0);
        tracep->declBit(c+394,"SocTop d_cache3 dcache_read_shankhand", false,-1);
        tracep->declBit(c+395,"SocTop d_cache3 dcache_write_shankhand", false,-1);
        tracep->declBit(c+677,"SocTop d_cache3 dcache_read_ready", false,-1);
        tracep->declBit(c+678,"SocTop d_cache3 dcache_write_ready", false,-1);
        tracep->declQuad(c+281,"SocTop d_cache3 dcache_tag", false,-1, 54,0);
        tracep->declBus(c+283,"SocTop d_cache3 dcache_index", false,-1, 5,0);
        tracep->declBus(c+679,"SocTop d_cache3 state_dread", false,-1, 5,0);
        tracep->declBus(c+284,"SocTop d_cache3 state_dread_nxt", false,-1, 5,0);
        tracep->declBit(c+680,"SocTop d_cache3 read_ok", false,-1);
        tracep->declBit(c+285,"SocTop d_cache3 mem_hit_ok", false,-1);
        tracep->declBit(c+396,"SocTop d_cache3 hit_data_ready", false,-1);
        tracep->declBit(c+286,"SocTop d_cache3 dirty_ok", false,-1);
        tracep->declQuad(c+287,"SocTop d_cache3 dirty_out_addr", false,-1, 63,0);
        tracep->declQuad(c+289,"SocTop d_cache3 dirty_out_data", false,-1, 63,0);
        tracep->declBus(c+291,"SocTop d_cache3 dirty_out_type", false,-1, 3,0);
        tracep->declBit(c+292,"SocTop d_cache3 missr_i_ok", false,-1);
        tracep->declBus(c+293,"SocTop d_cache3 missr_out_type", false,-1, 3,0);
        tracep->declQuad(c+294,"SocTop d_cache3 missr_out_addr", false,-1, 63,0);
        tracep->declBus(c+296,"SocTop d_cache3 missr_data_ena1", false,-1, 7,0);
        tracep->declBit(c+297,"SocTop d_cache3 missr_tag_ena1", false,-1);
        tracep->declBus(c+298,"SocTop d_cache3 missr_data_ena2", false,-1, 7,0);
        tracep->declBit(c+299,"SocTop d_cache3 missr_tag_ena2", false,-1);
        tracep->declBit(c+300,"SocTop d_cache3 missr_out_resp", false,-1);
        tracep->declBus(c+681,"SocTop d_cache3 state_dwrite", false,-1, 5,0);
        tracep->declBus(c+301,"SocTop d_cache3 state_dwrite_nxt", false,-1, 5,0);
        tracep->declBit(c+682,"SocTop d_cache3 read_w_ok", false,-1);
        tracep->declBit(c+683,"SocTop d_cache3 memw_hit_ok", false,-1);
        tracep->declBus(c+302,"SocTop d_cache3 hitw_data_strb1", false,-1, 7,0);
        tracep->declBus(c+303,"SocTop d_cache3 hitw_data_strb2", false,-1, 7,0);
        tracep->declBit(c+397,"SocTop d_cache3 hitw_data_ready", false,-1);
        tracep->declBit(c+304,"SocTop d_cache3 dirtyw_ok", false,-1);
        tracep->declQuad(c+305,"SocTop d_cache3 dirtyw_out_addr", false,-1, 63,0);
        tracep->declQuad(c+307,"SocTop d_cache3 dirtyw_out_data", false,-1, 63,0);
        tracep->declBus(c+309,"SocTop d_cache3 dirtyw_out_type", false,-1, 3,0);
        tracep->declBit(c+310,"SocTop d_cache3 missw_i_ok", false,-1);
        tracep->declBus(c+311,"SocTop d_cache3 missw_out_type", false,-1, 3,0);
        tracep->declQuad(c+312,"SocTop d_cache3 missw_out_addr", false,-1, 63,0);
        tracep->declBus(c+314,"SocTop d_cache3 missw_data_ena1", false,-1, 7,0);
        tracep->declBit(c+315,"SocTop d_cache3 missw_tag_ena1", false,-1);
        tracep->declBus(c+316,"SocTop d_cache3 missw_data_ena2", false,-1, 7,0);
        tracep->declBit(c+317,"SocTop d_cache3 missw_tag_ena2", false,-1);
        tracep->declBit(c+318,"SocTop d_cache3 missw_out_resp", false,-1);
        tracep->declBus(c+684,"SocTop d_cache3 i", false,-1, 31,0);
        tracep->declBit(c+319,"SocTop d_cache3 tag_ena1", false,-1);
        tracep->declQuad(c+685,"SocTop d_cache3 tag_data1", false,-1, 54,0);
        tracep->declBit(c+687,"SocTop d_cache3 tag_user1", false,-1);
        tracep->declBit(c+320,"SocTop d_cache3 tag_ena2", false,-1);
        tracep->declQuad(c+688,"SocTop d_cache3 tag_data2", false,-1, 54,0);
        tracep->declBit(c+690,"SocTop d_cache3 tag_user2", false,-1);
        tracep->declQuad(c+691,"SocTop d_cache3 out_data1", false,-1, 63,0);
        tracep->declBus(c+321,"SocTop d_cache3 data_ena1", false,-1, 7,0);
        tracep->declQuad(c+322,"SocTop d_cache3 in_rem_data1", false,-1, 63,0);
        tracep->declQuad(c+693,"SocTop d_cache3 out_data2", false,-1, 63,0);
        tracep->declBus(c+324,"SocTop d_cache3 data_ena2", false,-1, 7,0);
        tracep->declQuad(c+322,"SocTop d_cache3 in_ram_data2", false,-1, 63,0);
        tracep->declBit(c+710,"SocTop d_cache3 u_tag0 clk", false,-1);
        tracep->declBus(c+283,"SocTop d_cache3 u_tag0 addr_i", false,-1, 5,0);
        tracep->declQuad(c+325,"SocTop d_cache3 u_tag0 data_i", false,-1, 55,0);
        tracep->declBit(c+319,"SocTop d_cache3 u_tag0 write_ena", false,-1);
        tracep->declQuad(c+685,"SocTop d_cache3 u_tag0 tag_data", false,-1, 54,0);
        tracep->declBit(c+687,"SocTop d_cache3 u_tag0 tag_valid", false,-1);
        tracep->declQuad(c+685,"SocTop d_cache3 u_tag0 out_data", false,-1, 54,0);
        tracep->declBit(c+687,"SocTop d_cache3 u_tag0 out_vaild", false,-1);
        tracep->declBit(c+710,"SocTop d_cache3 u_tag1 clk", false,-1);
        tracep->declBus(c+283,"SocTop d_cache3 u_tag1 addr_i", false,-1, 5,0);
        tracep->declQuad(c+325,"SocTop d_cache3 u_tag1 data_i", false,-1, 55,0);
        tracep->declBit(c+320,"SocTop d_cache3 u_tag1 write_ena", false,-1);
        tracep->declQuad(c+688,"SocTop d_cache3 u_tag1 tag_data", false,-1, 54,0);
        tracep->declBit(c+690,"SocTop d_cache3 u_tag1 tag_valid", false,-1);
        tracep->declQuad(c+688,"SocTop d_cache3 u_tag1 out_data", false,-1, 54,0);
        tracep->declBit(c+690,"SocTop d_cache3 u_tag1 out_vaild", false,-1);
        tracep->declBit(c+710,"SocTop d_cache3 u_data0 clk", false,-1);
        tracep->declBus(c+283,"SocTop d_cache3 u_data0 addr_i", false,-1, 5,0);
        tracep->declQuad(c+322,"SocTop d_cache3 u_data0 data_i", false,-1, 63,0);
        tracep->declBus(c+321,"SocTop d_cache3 u_data0 write_ena", false,-1, 7,0);
        tracep->declQuad(c+691,"SocTop d_cache3 u_data0 data_o", false,-1, 63,0);
        tracep->declQuad(c+691,"SocTop d_cache3 u_data0 out_data", false,-1, 63,0);
        tracep->declBit(c+710,"SocTop d_cache3 u_data1 clk", false,-1);
        tracep->declBus(c+283,"SocTop d_cache3 u_data1 addr_i", false,-1, 5,0);
        tracep->declQuad(c+322,"SocTop d_cache3 u_data1 data_i", false,-1, 63,0);
        tracep->declBus(c+324,"SocTop d_cache3 u_data1 write_ena", false,-1, 7,0);
        tracep->declQuad(c+693,"SocTop d_cache3 u_data1 data_o", false,-1, 63,0);
        tracep->declQuad(c+693,"SocTop d_cache3 u_data1 out_data", false,-1, 63,0);
        tracep->declBit(c+710,"SocTop arbitrate4 clk", false,-1);
        tracep->declBit(c+711,"SocTop arbitrate4 rst", false,-1);
        tracep->declQuad(c+20,"SocTop arbitrate4 d_cache_addr", false,-1, 63,0);
        tracep->declQuad(c+360,"SocTop arbitrate4 d_cache_data", false,-1, 63,0);
        tracep->declBus(c+22,"SocTop arbitrate4 d_cache_type", false,-1, 3,0);
        tracep->declBit(c+362,"SocTop arbitrate4 d_cache_resp", false,-1);
        tracep->declQuad(c+23,"SocTop arbitrate4 d_cache_data_o", false,-1, 63,0);
        tracep->declBit(c+25,"SocTop arbitrate4 d_cache_valid_", false,-1);
        tracep->declQuad(c+14,"SocTop arbitrate4 i_cache_addr", false,-1, 63,0);
        tracep->declBit(c+13,"SocTop arbitrate4 i_cache_ena", false,-1);
        tracep->declBit(c+17,"SocTop arbitrate4 i_cache_resp", false,-1);
        tracep->declQuad(c+26,"SocTop arbitrate4 i_cache_data", false,-1, 63,0);
        tracep->declBit(c+28,"SocTop arbitrate4 i_cache_valid_", false,-1);
        tracep->declBit(c+29,"SocTop arbitrate4 arb_working_ti", false,-1);
        tracep->declBus(c+749,"SocTop arbitrate4 axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+30,"SocTop arbitrate4 axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+750,"SocTop arbitrate4 axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+751,"SocTop arbitrate4 axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+752,"SocTop arbitrate4 axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+753,"SocTop arbitrate4 axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+754,"SocTop arbitrate4 axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+749,"SocTop arbitrate4 axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+33,"SocTop arbitrate4 axi_aw_valid", false,-1);
        tracep->declBit(c+32,"SocTop arbitrate4 axi_aw_ready", false,-1);
        tracep->declQuad(c+34,"SocTop arbitrate4 axi_w_data", false,-1, 63,0);
        tracep->declBus(c+755,"SocTop arbitrate4 axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+756,"SocTop arbitrate4 axi_w_last", false,-1);
        tracep->declBit(c+412,"SocTop arbitrate4 axi_w_valid", false,-1);
        tracep->declBit(c+36,"SocTop arbitrate4 axi_w_ready", false,-1);
        tracep->declBus(c+37,"SocTop arbitrate4 axi_b_id", false,-1, 3,0);
        tracep->declBus(c+38,"SocTop arbitrate4 axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+39,"SocTop arbitrate4 axi_b_valid", false,-1);
        tracep->declBit(c+756,"SocTop arbitrate4 axi_b_ready", false,-1);
        tracep->declBus(c+40,"SocTop arbitrate4 axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+41,"SocTop arbitrate4 axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+750,"SocTop arbitrate4 axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+751,"SocTop arbitrate4 axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+752,"SocTop arbitrate4 axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+753,"SocTop arbitrate4 axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+754,"SocTop arbitrate4 axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+749,"SocTop arbitrate4 axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+43,"SocTop arbitrate4 axi_ar_valid", false,-1);
        tracep->declBit(c+44,"SocTop arbitrate4 axi_ar_ready", false,-1);
        tracep->declBus(c+45,"SocTop arbitrate4 axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+46,"SocTop arbitrate4 axi_r_data", false,-1, 63,0);
        tracep->declBus(c+48,"SocTop arbitrate4 axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+49,"SocTop arbitrate4 axi_r_last", false,-1);
        tracep->declBit(c+50,"SocTop arbitrate4 axi_r_valid", false,-1);
        tracep->declBit(c+756,"SocTop arbitrate4 axi_r_ready", false,-1);
        tracep->declBit(c+327,"SocTop arbitrate4 aw_shankhand", false,-1);
        tracep->declBit(c+398,"SocTop arbitrate4 w_shankhand", false,-1);
        tracep->declBit(c+328,"SocTop arbitrate4 b_shankhand", false,-1);
        tracep->declBus(c+695,"SocTop arbitrate4 transfor_state", false,-1, 1,0);
        tracep->declBus(c+329,"SocTop arbitrate4 transfor_state_nex", false,-1, 1,0);
        tracep->declBit(c+330,"SocTop arbitrate4 w_dcache_valid", false,-1);
        tracep->declBit(c+50,"SocTop arbitrate4 r_shankhand", false,-1);
        tracep->declBit(c+331,"SocTop arbitrate4 d_cache_ar_shankhand", false,-1);
        tracep->declBit(c+332,"SocTop arbitrate4 i_cache_ar_shankhand", false,-1);
        tracep->declBit(c+333,"SocTop arbitrate4 d_cache_r_shankhand", false,-1);
        tracep->declBit(c+334,"SocTop arbitrate4 i_cache_r_shankhand", false,-1);
        tracep->declBit(c+335,"SocTop arbitrate4 i_cache_valid", false,-1);
        tracep->declBit(c+336,"SocTop arbitrate4 d_cache_valid", false,-1);
        tracep->declBus(c+696,"SocTop arbitrate4 i_cache_state", false,-1, 1,0);
        tracep->declBus(c+337,"SocTop arbitrate4 i_cache_state_nxt", false,-1, 1,0);
        tracep->declBus(c+697,"SocTop arbitrate4 d_cache_state", false,-1, 1,0);
        tracep->declBus(c+338,"SocTop arbitrate4 d_cache_state_nxt", false,-1, 1,0);
        tracep->declBit(c+339,"SocTop arbitrate4 r_dcache_valid", false,-1);
        tracep->declBit(c+710,"SocTop axi_mnq4 clk", false,-1);
        tracep->declBit(c+711,"SocTop axi_mnq4 rst", false,-1);
        tracep->declBus(c+102,"SocTop axi_mnq4 s_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+103,"SocTop axi_mnq4 s_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+105,"SocTop axi_mnq4 s_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+106,"SocTop axi_mnq4 s_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+107,"SocTop axi_mnq4 s_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+108,"SocTop axi_mnq4 s_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+109,"SocTop axi_mnq4 s_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+110,"SocTop axi_mnq4 s_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+112,"SocTop axi_mnq4 s_axi_aw_valid", false,-1);
        tracep->declBit(c+111,"SocTop axi_mnq4 s_axi_aw_ready", false,-1);
        tracep->declQuad(c+113,"SocTop axi_mnq4 s_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+115,"SocTop axi_mnq4 s_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+116,"SocTop axi_mnq4 s_axi_w_last", false,-1);
        tracep->declBit(c+117,"SocTop axi_mnq4 s_axi_w_valid", false,-1);
        tracep->declBit(c+118,"SocTop axi_mnq4 s_axi_w_ready", false,-1);
        tracep->declBus(c+102,"SocTop axi_mnq4 s_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+757,"SocTop axi_mnq4 s_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+415,"SocTop axi_mnq4 s_axi_b_valid", false,-1);
        tracep->declBit(c+119,"SocTop axi_mnq4 s_axi_b_ready", false,-1);
        tracep->declBus(c+120,"SocTop axi_mnq4 s_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+121,"SocTop axi_mnq4 s_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+123,"SocTop axi_mnq4 s_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+124,"SocTop axi_mnq4 s_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+125,"SocTop axi_mnq4 s_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+126,"SocTop axi_mnq4 s_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+127,"SocTop axi_mnq4 s_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+128,"SocTop axi_mnq4 s_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+129,"SocTop axi_mnq4 s_axi_ar_valid", false,-1);
        tracep->declBit(c+416,"SocTop axi_mnq4 s_axi_ar_ready", false,-1);
        tracep->declBus(c+363,"SocTop axi_mnq4 s_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+722,"SocTop axi_mnq4 s_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+757,"SocTop axi_mnq4 s_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+417,"SocTop axi_mnq4 s_axi_r_last", false,-1);
        tracep->declBit(c+418,"SocTop axi_mnq4 s_axi_r_valid", false,-1);
        tracep->declBit(c+130,"SocTop axi_mnq4 s_axi_r_ready", false,-1);
        tracep->declBit(c+192,"SocTop axi_mnq4 mnq_read_ena", false,-1);
        tracep->declQuad(c+193,"SocTop axi_mnq4 addr_oup", false,-1, 63,0);
        tracep->declQuad(c+715,"SocTop axi_mnq4 mnq_data_in", false,-1, 63,0);
        tracep->declBit(c+415,"SocTop axi_mnq4 write_ram_ena", false,-1);
        tracep->declQuad(c+423,"SocTop axi_mnq4 write_ram_data", false,-1, 63,0);
        tracep->declQuad(c+421,"SocTop axi_mnq4 write_ram_addr", false,-1, 63,0);
        tracep->declBit(c+340,"SocTop axi_mnq4 aw_shankhand", false,-1);
        tracep->declBit(c+341,"SocTop axi_mnq4 w_shankhand", false,-1);
        tracep->declBit(c+399,"SocTop axi_mnq4 b_shankhand", false,-1);
        tracep->declBus(c+698,"SocTop axi_mnq4 s_write_state", false,-1, 1,0);
        tracep->declBus(c+342,"SocTop axi_mnq4 s_write_state_nxt", false,-1, 1,0);
        tracep->declBit(c+343,"SocTop axi_mnq4 ar_shankhand", false,-1);
        tracep->declBit(c+400,"SocTop axi_mnq4 r_shankhand", false,-1);
        tracep->declBus(c+699,"SocTop axi_mnq4 s_read_state", false,-1, 1,0);
        tracep->declBus(c+344,"SocTop axi_mnq4 s_read_state_nxt", false,-1, 1,0);
        tracep->declQuad(c+700,"SocTop axi_mnq4 write_data_reg", false,-1, 63,0);
        tracep->declQuad(c+702,"SocTop axi_mnq4 write_addr_reg", false,-1, 63,0);
        tracep->declBit(c+710,"SocTop soc_axi45 clk", false,-1);
        tracep->declBit(c+711,"SocTop soc_axi45 rst", false,-1);
        tracep->declBus(c+195,"SocTop soc_axi45 prot_chose_write", false,-1, 2,0);
        tracep->declBus(c+196,"SocTop soc_axi45 prot_chose_read", false,-1, 2,0);
        tracep->declBus(c+749,"SocTop soc_axi45 master_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+30,"SocTop soc_axi45 master_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+750,"SocTop soc_axi45 master_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+751,"SocTop soc_axi45 master_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+752,"SocTop soc_axi45 master_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+753,"SocTop soc_axi45 master_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+754,"SocTop soc_axi45 master_axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+749,"SocTop soc_axi45 master_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+33,"SocTop soc_axi45 master_axi_aw_valid", false,-1);
        tracep->declBit(c+32,"SocTop soc_axi45 master_axi_aw_ready", false,-1);
        tracep->declQuad(c+34,"SocTop soc_axi45 master_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+755,"SocTop soc_axi45 master_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+756,"SocTop soc_axi45 master_axi_w_last", false,-1);
        tracep->declBit(c+412,"SocTop soc_axi45 master_axi_w_valid", false,-1);
        tracep->declBit(c+36,"SocTop soc_axi45 master_axi_w_ready", false,-1);
        tracep->declBus(c+37,"SocTop soc_axi45 master_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+38,"SocTop soc_axi45 master_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+756,"SocTop soc_axi45 master_axi_b_ready", false,-1);
        tracep->declBit(c+39,"SocTop soc_axi45 master_axi_b_valid", false,-1);
        tracep->declBus(c+40,"SocTop soc_axi45 master_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+41,"SocTop soc_axi45 master_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+750,"SocTop soc_axi45 master_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+751,"SocTop soc_axi45 master_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+752,"SocTop soc_axi45 master_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+753,"SocTop soc_axi45 master_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+754,"SocTop soc_axi45 master_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+749,"SocTop soc_axi45 master_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+43,"SocTop soc_axi45 master_axi_ar_valid", false,-1);
        tracep->declBit(c+44,"SocTop soc_axi45 master_axi_ar_ready", false,-1);
        tracep->declBus(c+45,"SocTop soc_axi45 master_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+46,"SocTop soc_axi45 master_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+48,"SocTop soc_axi45 master_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+49,"SocTop soc_axi45 master_axi_r_last", false,-1);
        tracep->declBit(c+50,"SocTop soc_axi45 master_axi_r_valid", false,-1);
        tracep->declBit(c+756,"SocTop soc_axi45 master_axi_r_ready", false,-1);
        tracep->declBus(c+51,"SocTop soc_axi45 slave_axi_aw_id", false,-1, 11,0);
        tracep->declArray(c+52,"SocTop soc_axi45 slave_axi_aw_addr", false,-1, 191,0);
        tracep->declBus(c+58,"SocTop soc_axi45 slave_axi_aw_len", false,-1, 23,0);
        tracep->declBus(c+59,"SocTop soc_axi45 slave_axi_aw_size", false,-1, 8,0);
        tracep->declBus(c+60,"SocTop soc_axi45 slave_axi_aw_burst", false,-1, 5,0);
        tracep->declBus(c+61,"SocTop soc_axi45 slave_axi_aw_cache", false,-1, 11,0);
        tracep->declBus(c+62,"SocTop soc_axi45 slave_axi_aw_prot", false,-1, 8,0);
        tracep->declBus(c+63,"SocTop soc_axi45 slave_axi_aw_qos", false,-1, 11,0);
        tracep->declBus(c+64,"SocTop soc_axi45 slave_axi_aw_valid", false,-1, 2,0);
        tracep->declBus(c+65,"SocTop soc_axi45 slave_axi_aw_ready", false,-1, 2,0);
        tracep->declArray(c+66,"SocTop soc_axi45 slave_axi_w_data", false,-1, 191,0);
        tracep->declBus(c+72,"SocTop soc_axi45 slave_axi_w_strb", false,-1, 23,0);
        tracep->declBus(c+73,"SocTop soc_axi45 slave_axi_w_last", false,-1, 2,0);
        tracep->declBus(c+74,"SocTop soc_axi45 slave_axi_w_valid", false,-1, 2,0);
        tracep->declBus(c+75,"SocTop soc_axi45 slave_axi_w_ready", false,-1, 2,0);
        tracep->declBus(c+76,"SocTop soc_axi45 slave_axi_b_id", false,-1, 11,0);
        tracep->declBus(c+1,"SocTop soc_axi45 slave_axi_b_resp", false,-1, 5,0);
        tracep->declBus(c+77,"SocTop soc_axi45 slave_axi_b_valid", false,-1, 2,0);
        tracep->declBus(c+78,"SocTop soc_axi45 slave_axi_b_ready", false,-1, 2,0);
        tracep->declBus(c+79,"SocTop soc_axi45 slave_axi_ar_id", false,-1, 11,0);
        tracep->declArray(c+80,"SocTop soc_axi45 slave_axi_ar_addr", false,-1, 191,0);
        tracep->declBus(c+86,"SocTop soc_axi45 slave_axi_ar_len", false,-1, 23,0);
        tracep->declBus(c+87,"SocTop soc_axi45 slave_axi_ar_size", false,-1, 8,0);
        tracep->declBus(c+88,"SocTop soc_axi45 slave_axi_ar_burst", false,-1, 5,0);
        tracep->declBus(c+89,"SocTop soc_axi45 slave_axi_ar_cache", false,-1, 11,0);
        tracep->declBus(c+90,"SocTop soc_axi45 slave_axi_ar_prot", false,-1, 8,0);
        tracep->declBus(c+91,"SocTop soc_axi45 slave_axi_ar_qos", false,-1, 11,0);
        tracep->declBus(c+92,"SocTop soc_axi45 slave_axi_ar_valid", false,-1, 2,0);
        tracep->declBus(c+93,"SocTop soc_axi45 slave_axi_ar_ready", false,-1, 2,0);
        tracep->declBus(c+94,"SocTop soc_axi45 slave_axi_r_id", false,-1, 11,0);
        tracep->declArray(c+95,"SocTop soc_axi45 slave_axi_r_data", false,-1, 191,0);
        tracep->declBus(c+2,"SocTop soc_axi45 slave_axi_r_resp", false,-1, 5,0);
        tracep->declBus(c+413,"SocTop soc_axi45 slave_axi_r_last", false,-1, 2,0);
        tracep->declBus(c+414,"SocTop soc_axi45 slave_axi_r_valid", false,-1, 2,0);
        tracep->declBus(c+101,"SocTop soc_axi45 slave_axi_r_ready", false,-1, 2,0);
        tracep->declBus(c+748,"SocTop soc_axi45 SLAVE_NUM", false,-1, 31,0);
        tracep->declBit(c+710,"SocTop time_axi6 clk", false,-1);
        tracep->declBit(c+711,"SocTop time_axi6 rst", false,-1);
        tracep->declBit(c+411,"SocTop time_axi6 time_interrupt", false,-1);
        tracep->declBus(c+131,"SocTop time_axi6 time_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+132,"SocTop time_axi6 time_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+134,"SocTop time_axi6 time_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+135,"SocTop time_axi6 time_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+136,"SocTop time_axi6 time_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+137,"SocTop time_axi6 time_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+138,"SocTop time_axi6 time_axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+139,"SocTop time_axi6 time_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+141,"SocTop time_axi6 time_axi_aw_valid", false,-1);
        tracep->declBit(c+140,"SocTop time_axi6 time_axi_aw_ready", false,-1);
        tracep->declQuad(c+142,"SocTop time_axi6 time_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+144,"SocTop time_axi6 time_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+145,"SocTop time_axi6 time_axi_w_last", false,-1);
        tracep->declBit(c+146,"SocTop time_axi6 time_axi_w_valid", false,-1);
        tracep->declBit(c+147,"SocTop time_axi6 time_axi_w_ready", false,-1);
        tracep->declBus(c+148,"SocTop time_axi6 time_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+3,"SocTop time_axi6 time_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+149,"SocTop time_axi6 time_axi_b_valid", false,-1);
        tracep->declBit(c+150,"SocTop time_axi6 time_axi_b_ready", false,-1);
        tracep->declBus(c+151,"SocTop time_axi6 time_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+152,"SocTop time_axi6 time_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+154,"SocTop time_axi6 time_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+155,"SocTop time_axi6 time_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+156,"SocTop time_axi6 time_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+157,"SocTop time_axi6 time_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+158,"SocTop time_axi6 time_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+159,"SocTop time_axi6 time_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+160,"SocTop time_axi6 time_axi_ar_valid", false,-1);
        tracep->declBit(c+161,"SocTop time_axi6 time_axi_ar_ready", false,-1);
        tracep->declBus(c+364,"SocTop time_axi6 time_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+162,"SocTop time_axi6 time_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+4,"SocTop time_axi6 time_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+419,"SocTop time_axi6 time_axi_r_last", false,-1);
        tracep->declBit(c+420,"SocTop time_axi6 time_axi_r_valid", false,-1);
        tracep->declBit(c+164,"SocTop time_axi6 time_axi_r_ready", false,-1);
        tracep->declQuad(c+704,"SocTop time_axi6 car_mtime_l", false,-1, 63,0);
        tracep->declQuad(c+706,"SocTop time_axi6 csr_mtime_h", false,-1, 63,0);
        tracep->declQuad(c+401,"SocTop time_axi6 csr_mtime_l_nxt", false,-1, 63,0);
        tracep->declQuad(c+403,"SocTop time_axi6 csr_mtime_h_nxt", false,-1, 63,0);
        tracep->declBit(c+345,"SocTop time_axi6 csr_mtime_l_r_ena", false,-1);
        tracep->declBit(c+346,"SocTop time_axi6 csr_mtime_h_r_ena", false,-1);
        tracep->declBit(c+347,"SocTop time_axi6 csr_mtime_l_w_ena", false,-1);
        tracep->declBit(c+348,"SocTop time_axi6 csr_mtime_h_w_ena", false,-1);
        tracep->declQuad(c+349,"SocTop time_axi6 wmask", false,-1, 63,0);
        tracep->declBit(c+351,"SocTop time_axi6 aw_shakehand", false,-1);
        tracep->declBit(c+352,"SocTop time_axi6 w_shakehand", false,-1);
        tracep->declBit(c+353,"SocTop time_axi6 b_shankhand", false,-1);
        tracep->declBit(c+354,"SocTop time_axi6 mode_right", false,-1);
        tracep->declBus(c+708,"SocTop time_axi6 state_time_m", false,-1, 1,0);
        tracep->declBus(c+355,"SocTop time_axi6 state_time_m_nxt", false,-1, 1,0);
        tracep->declBit(c+356,"SocTop time_axi6 mode_right_r", false,-1);
        tracep->declBit(c+357,"SocTop time_axi6 ar_shakehand", false,-1);
        tracep->declBit(c+405,"SocTop time_axi6 r_shankhand", false,-1);
        tracep->declQuad(c+406,"SocTop time_axi6 time_csr_link", false,-1, 63,0);
        tracep->declBus(c+709,"SocTop time_axi6 state_time_r", false,-1, 1,0);
        tracep->declBus(c+358,"SocTop time_axi6 state_time_r_nxt", false,-1, 1,0);
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
        tracep->fullBit(oldp+12,(vlSelf->SocTop__DOT__i_cache_inst_valid));
        tracep->fullBit(oldp+13,(vlSelf->SocTop__DOT__i_cache_read_ena));
        tracep->fullQData(oldp+14,(vlSelf->SocTop__DOT__i_cache_addr),64);
        tracep->fullBit(oldp+16,((1U & (~ ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl) 
                                           >> 1U)))));
        tracep->fullBit(oldp+17,(vlSelf->SocTop__DOT__i_caceh_resp));
        tracep->fullQData(oldp+18,(vlSelf->SocTop__DOT__d_cache_data_out),64);
        tracep->fullQData(oldp+20,(vlSelf->SocTop__DOT__d_cache_out_addr),64);
        tracep->fullCData(oldp+22,(vlSelf->SocTop__DOT__d_cache_out_type),4);
        tracep->fullQData(oldp+23,(vlSelf->SocTop__DOT__arbitrate_d_data),64);
        tracep->fullBit(oldp+25,(vlSelf->SocTop__DOT__arbitrate_d_ok));
        tracep->fullQData(oldp+26,(vlSelf->SocTop__DOT__arbitrate_i_data),64);
        tracep->fullBit(oldp+28,(vlSelf->SocTop__DOT__arbitrate_i_ok));
        tracep->fullBit(oldp+29,(vlSelf->SocTop__DOT__arbitrate_ti_sign));
        tracep->fullQData(oldp+30,(vlSelf->SocTop__DOT__t_axi_aw_addr),64);
        tracep->fullBit(oldp+32,(vlSelf->SocTop__DOT__t_axi_aw_ready));
        tracep->fullBit(oldp+33,(vlSelf->SocTop__DOT__t_axi_aw_valid));
        tracep->fullQData(oldp+34,(vlSelf->SocTop__DOT__t_axi_w_data),64);
        tracep->fullBit(oldp+36,(vlSelf->SocTop__DOT__t_axi_w_ready));
        tracep->fullCData(oldp+37,(vlSelf->SocTop__DOT__t_axi_b_id),4);
        tracep->fullCData(oldp+38,(vlSelf->SocTop__DOT__t_axi_b_resp),2);
        tracep->fullBit(oldp+39,(vlSelf->SocTop__DOT__t_axi_b_valid));
        tracep->fullCData(oldp+40,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid)
                                     ? 1U : 0U)),4);
        tracep->fullQData(oldp+41,(vlSelf->SocTop__DOT__t_axi_ar_addr),64);
        tracep->fullBit(oldp+43,(vlSelf->SocTop__DOT__t_axi_ar_valid));
        tracep->fullBit(oldp+44,(vlSelf->SocTop__DOT__t_axi_ar_ready));
        tracep->fullCData(oldp+45,(vlSelf->SocTop__DOT__t_axi_r_id),4);
        tracep->fullQData(oldp+46,(vlSelf->SocTop__DOT__t_axi_r_data),64);
        tracep->fullCData(oldp+48,(vlSelf->SocTop__DOT__t_axi_r_resp),2);
        tracep->fullBit(oldp+49,(vlSelf->SocTop__DOT__t_axi_r_last));
        tracep->fullBit(oldp+50,(vlSelf->SocTop__DOT__t_axi_r_valid));
        tracep->fullSData(oldp+51,(vlSelf->SocTop__DOT__add_axi_aw_id),12);
        tracep->fullWData(oldp+52,(vlSelf->SocTop__DOT__add_axi_aw_addr),192);
        tracep->fullIData(oldp+58,(vlSelf->SocTop__DOT__add_axi_aw_len),24);
        tracep->fullSData(oldp+59,(vlSelf->SocTop__DOT__add_axi_aw_size),9);
        tracep->fullCData(oldp+60,(vlSelf->SocTop__DOT__add_axi_aw_burst),6);
        tracep->fullSData(oldp+61,(vlSelf->SocTop__DOT__add_axi_aw_cache),12);
        tracep->fullSData(oldp+62,(vlSelf->SocTop__DOT__add_axi_aw_prot),9);
        tracep->fullSData(oldp+63,(vlSelf->SocTop__DOT__add_axi_aw_qos),12);
        tracep->fullCData(oldp+64,(vlSelf->SocTop__DOT__add_axi_aw_valid),3);
        tracep->fullCData(oldp+65,(vlSelf->SocTop__DOT__add_axi_aw_ready),3);
        tracep->fullWData(oldp+66,(vlSelf->SocTop__DOT__add_axi_w_data),192);
        tracep->fullIData(oldp+72,(vlSelf->SocTop__DOT__add_axi_w_strb),24);
        tracep->fullCData(oldp+73,(vlSelf->SocTop__DOT__add_axi_w_last),3);
        tracep->fullCData(oldp+74,(vlSelf->SocTop__DOT__add_axi_w_valid),3);
        tracep->fullCData(oldp+75,(vlSelf->SocTop__DOT__add_axi_w_ready),3);
        tracep->fullSData(oldp+76,(vlSelf->SocTop__DOT__add_axi_b_id),12);
        tracep->fullCData(oldp+77,(vlSelf->SocTop__DOT__add_axi_b_valid),3);
        tracep->fullCData(oldp+78,(vlSelf->SocTop__DOT__add_axi_b_ready),3);
        tracep->fullSData(oldp+79,(vlSelf->SocTop__DOT__add_axi_ar_id),12);
        tracep->fullWData(oldp+80,(vlSelf->SocTop__DOT__add_axi_ar_addr),192);
        tracep->fullIData(oldp+86,(vlSelf->SocTop__DOT__add_axi_ar_len),24);
        tracep->fullSData(oldp+87,(vlSelf->SocTop__DOT__add_axi_ar_size),9);
        tracep->fullCData(oldp+88,(vlSelf->SocTop__DOT__add_axi_ar_burst),6);
        tracep->fullSData(oldp+89,(vlSelf->SocTop__DOT__add_axi_ar_cache),12);
        tracep->fullSData(oldp+90,(vlSelf->SocTop__DOT__add_axi_ar_prot),9);
        tracep->fullSData(oldp+91,(vlSelf->SocTop__DOT__add_axi_ar_qos),12);
        tracep->fullCData(oldp+92,(vlSelf->SocTop__DOT__add_axi_ar_valid),3);
        tracep->fullCData(oldp+93,(vlSelf->SocTop__DOT__add_axi_ar_ready),3);
        tracep->fullSData(oldp+94,(vlSelf->SocTop__DOT__add_axi_r_id),12);
        tracep->fullWData(oldp+95,(vlSelf->SocTop__DOT__add_axi_r_data),192);
        tracep->fullCData(oldp+101,(vlSelf->SocTop__DOT__add_axi_r_ready),3);
        tracep->fullCData(oldp+102,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_id) 
                                             >> 8U))),4);
        tracep->fullQData(oldp+103,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_aw_addr[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_aw_addr[4U])))),64);
        tracep->fullCData(oldp+105,((0xffU & (vlSelf->SocTop__DOT__add_axi_aw_len 
                                              >> 0x10U))),8);
        tracep->fullCData(oldp+106,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_size) 
                                           >> 6U))),3);
        tracep->fullCData(oldp+107,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_burst) 
                                           >> 4U))),2);
        tracep->fullCData(oldp+108,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_cache) 
                                             >> 8U))),4);
        tracep->fullCData(oldp+109,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_prot) 
                                           >> 6U))),3);
        tracep->fullCData(oldp+110,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_qos) 
                                             >> 8U))),4);
        tracep->fullBit(oldp+111,(vlSelf->SocTop__DOT__soc_axi_aw_ready));
        tracep->fullBit(oldp+112,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                         >> 2U))));
        tracep->fullQData(oldp+113,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_w_data[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_w_data[4U])))),64);
        tracep->fullCData(oldp+115,((0xffU & (vlSelf->SocTop__DOT__add_axi_w_strb 
                                              >> 0x10U))),8);
        tracep->fullBit(oldp+116,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_last) 
                                         >> 2U))));
        tracep->fullBit(oldp+117,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                         >> 2U))));
        tracep->fullBit(oldp+118,(vlSelf->SocTop__DOT__soc_axi_w_ready));
        tracep->fullBit(oldp+119,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                         >> 2U))));
        tracep->fullCData(oldp+120,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                             >> 8U))),4);
        tracep->fullQData(oldp+121,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_ar_addr[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_ar_addr[4U])))),64);
        tracep->fullCData(oldp+123,((0xffU & (vlSelf->SocTop__DOT__add_axi_ar_len 
                                              >> 0x10U))),8);
        tracep->fullCData(oldp+124,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_size) 
                                           >> 6U))),3);
        tracep->fullCData(oldp+125,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_burst) 
                                           >> 4U))),2);
        tracep->fullCData(oldp+126,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_cache) 
                                             >> 8U))),4);
        tracep->fullCData(oldp+127,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_prot) 
                                           >> 6U))),3);
        tracep->fullCData(oldp+128,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_qos) 
                                             >> 8U))),4);
        tracep->fullBit(oldp+129,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                                         >> 2U))));
        tracep->fullBit(oldp+130,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                         >> 2U))));
        tracep->fullCData(oldp+131,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_id) 
                                             >> 4U))),4);
        tracep->fullQData(oldp+132,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))),64);
        tracep->fullCData(oldp+134,((0xffU & (vlSelf->SocTop__DOT__add_axi_aw_len 
                                              >> 8U))),8);
        tracep->fullCData(oldp+135,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_size) 
                                           >> 3U))),3);
        tracep->fullCData(oldp+136,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_burst) 
                                           >> 2U))),2);
        tracep->fullCData(oldp+137,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_cache) 
                                             >> 4U))),4);
        tracep->fullCData(oldp+138,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_prot) 
                                           >> 3U))),3);
        tracep->fullCData(oldp+139,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_qos) 
                                             >> 4U))),4);
        tracep->fullBit(oldp+140,(vlSelf->SocTop__DOT__tim_axi_aw_ready));
        tracep->fullBit(oldp+141,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                         >> 1U))));
        tracep->fullQData(oldp+142,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_w_data[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_w_data[2U])))),64);
        tracep->fullCData(oldp+144,((0xffU & (vlSelf->SocTop__DOT__add_axi_w_strb 
                                              >> 8U))),8);
        tracep->fullBit(oldp+145,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_last) 
                                         >> 1U))));
        tracep->fullBit(oldp+146,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                         >> 1U))));
        tracep->fullBit(oldp+147,(vlSelf->SocTop__DOT__tim_axi_w_ready));
        tracep->fullCData(oldp+148,(((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m_nxt))
                                      ? (0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_id) 
                                                 >> 4U))
                                      : 0U)),4);
        tracep->fullBit(oldp+149,(vlSelf->SocTop__DOT__tim_axi_b_valid));
        tracep->fullBit(oldp+150,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                         >> 1U))));
        tracep->fullCData(oldp+151,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                             >> 4U))),4);
        tracep->fullQData(oldp+152,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))),64);
        tracep->fullCData(oldp+154,((0xffU & (vlSelf->SocTop__DOT__add_axi_ar_len 
                                              >> 8U))),8);
        tracep->fullCData(oldp+155,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_size) 
                                           >> 3U))),3);
        tracep->fullCData(oldp+156,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_burst) 
                                           >> 2U))),2);
        tracep->fullCData(oldp+157,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_cache) 
                                             >> 4U))),4);
        tracep->fullCData(oldp+158,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_prot) 
                                           >> 3U))),3);
        tracep->fullCData(oldp+159,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_qos) 
                                             >> 4U))),4);
        tracep->fullBit(oldp+160,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                                         >> 1U))));
        tracep->fullBit(oldp+161,(vlSelf->SocTop__DOT__tim_axi_ar_ready));
        tracep->fullQData(oldp+162,(vlSelf->SocTop__DOT__tim_axi_r_data),64);
        tracep->fullBit(oldp+164,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                         >> 1U))));
        tracep->fullCData(oldp+165,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_id))),4);
        tracep->fullQData(oldp+166,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_aw_addr[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_aw_addr[0U])))),64);
        tracep->fullCData(oldp+168,((0xffU & vlSelf->SocTop__DOT__add_axi_aw_len)),8);
        tracep->fullCData(oldp+169,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_size))),3);
        tracep->fullCData(oldp+170,((3U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_burst))),2);
        tracep->fullCData(oldp+171,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_cache))),4);
        tracep->fullCData(oldp+172,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_prot))),3);
        tracep->fullCData(oldp+173,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_qos))),4);
        tracep->fullBit(oldp+174,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_valid))));
        tracep->fullQData(oldp+175,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_w_data[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_w_data[0U])))),64);
        tracep->fullCData(oldp+177,((0xffU & vlSelf->SocTop__DOT__add_axi_w_strb)),8);
        tracep->fullBit(oldp+178,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_w_last))));
        tracep->fullBit(oldp+179,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_w_valid))));
        tracep->fullBit(oldp+180,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_b_ready))));
        tracep->fullCData(oldp+181,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_id))),4);
        tracep->fullQData(oldp+182,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_ar_addr[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_ar_addr[0U])))),64);
        tracep->fullCData(oldp+184,((0xffU & vlSelf->SocTop__DOT__add_axi_ar_len)),8);
        tracep->fullCData(oldp+185,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_size))),3);
        tracep->fullCData(oldp+186,((3U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_burst))),2);
        tracep->fullCData(oldp+187,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_cache))),4);
        tracep->fullCData(oldp+188,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_prot))),3);
        tracep->fullCData(oldp+189,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_qos))),4);
        tracep->fullBit(oldp+190,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_valid))));
        tracep->fullBit(oldp+191,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_r_ready))));
        tracep->fullBit(oldp+192,(vlSelf->SocTop__DOT__axi_mnq4__DOT__ar_shankhand));
        tracep->fullQData(oldp+193,(((IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__ar_shankhand)
                                      ? (((QData)((IData)(
                                                          vlSelf->SocTop__DOT__add_axi_ar_addr[5U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->SocTop__DOT__add_axi_ar_addr[4U])))
                                      : 0ULL)),64);
        tracep->fullCData(oldp+195,(vlSelf->SocTop__DOT__prot_chose_write),3);
        tracep->fullCData(oldp+196,(vlSelf->SocTop__DOT__prot_chose_read),3);
        tracep->fullBit(oldp+197,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_stall_req));
        tracep->fullQData(oldp+198,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_data),64);
        tracep->fullCData(oldp+200,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1),5);
        tracep->fullBit(oldp+201,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1));
        tracep->fullCData(oldp+202,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2),5);
        tracep->fullBit(oldp+203,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2));
        tracep->fullCData(oldp+204,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type),8);
        tracep->fullCData(oldp+205,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode),8);
        tracep->fullQData(oldp+206,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op),64);
        tracep->fullQData(oldp+208,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op2),64);
        tracep->fullBit(oldp+210,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_ena));
        tracep->fullCData(oldp+211,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_addr),5);
        tracep->fullQData(oldp+212,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_pc),64);
        tracep->fullSData(oldp+214,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_s_offset),12);
        tracep->fullCData(oldp+215,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_memsel),3);
        tracep->fullBit(oldp+216,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_pip_jalrena));
        tracep->fullBit(oldp+217,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_if_flush));
        tracep->fullCData(oldp+218,(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl),5);
        tracep->fullQData(oldp+219,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_id_data),64);
        tracep->fullQData(oldp+221,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_ex_mem_pc),64);
        tracep->fullQData(oldp+223,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_pc),64);
        tracep->fullIData(oldp+225,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_id_ex_inst),32);
        tracep->fullIData(oldp+226,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_ex_mem_inst),32);
        tracep->fullIData(oldp+227,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_inst),32);
        tracep->fullQData(oldp+228,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc),64);
        tracep->fullBit(oldp+230,((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))));
        tracep->fullCData(oldp+231,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__rs1),5);
        tracep->fullBit(oldp+232,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui));
        tracep->fullBit(oldp+233,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc));
        tracep->fullBit(oldp+234,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal));
        tracep->fullBit(oldp+235,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr));
        tracep->fullBit(oldp+236,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jump));
        tracep->fullBit(oldp+237,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srai));
        tracep->fullBit(oldp+238,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addiw));
        tracep->fullBit(oldp+239,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slliw));
        tracep->fullBit(oldp+240,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srliw));
        tracep->fullBit(oldp+241,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraiw));
        tracep->fullBit(oldp+242,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_add));
        tracep->fullBit(oldp+243,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sub));
        tracep->fullBit(oldp+244,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sll));
        tracep->fullBit(oldp+245,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slt));
        tracep->fullBit(oldp+246,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sltu));
        tracep->fullBit(oldp+247,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_xor));
        tracep->fullBit(oldp+248,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srl));
        tracep->fullBit(oldp+249,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sra));
        tracep->fullBit(oldp+250,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_or));
        tracep->fullBit(oldp+251,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_and));
        tracep->fullBit(oldp+252,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addw));
        tracep->fullBit(oldp+253,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_subw));
        tracep->fullBit(oldp+254,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sllw));
        tracep->fullBit(oldp+255,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srlw));
        tracep->fullBit(oldp+256,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraw));
        tracep->fullBit(oldp+257,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw));
        tracep->fullBit(oldp+258,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs));
        tracep->fullBit(oldp+259,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc));
        tracep->fullBit(oldp+260,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrwi));
        tracep->fullBit(oldp+261,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc))));
        tracep->fullBit(oldp+262,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak));
        tracep->fullBit(oldp+263,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1));
        tracep->fullBit(oldp+264,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1));
        tracep->fullBit(oldp+265,((1U & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl) 
                                         >> 3U))));
        tracep->fullQData(oldp+266,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__exe_res),64);
        tracep->fullCData(oldp+268,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_byte),8);
        tracep->fullSData(oldp+269,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte),16);
        tracep->fullIData(oldp+270,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word),32);
        tracep->fullQData(oldp+271,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_data),64);
        tracep->fullCData(oldp+273,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_mask),8);
        tracep->fullBit(oldp+274,(vlSelf->SocTop__DOT__i_cache2__DOT__icache_if_shankhand));
        tracep->fullCData(oldp+275,(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst_nxt),6);
        tracep->fullQData(oldp+276,(vlSelf->SocTop__DOT__i_cache2__DOT__miss_data),64);
        tracep->fullBit(oldp+278,(vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_o));
        tracep->fullBit(oldp+279,(vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_t));
        tracep->fullBit(oldp+280,(vlSelf->SocTop__DOT__i_cache2__DOT__write_i_ok));
        tracep->fullQData(oldp+281,((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                     >> 9U)),55);
        tracep->fullCData(oldp+283,((0x3fU & (IData)(
                                                     (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                      >> 3U)))),6);
        tracep->fullCData(oldp+284,(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread_nxt),6);
        tracep->fullBit(oldp+285,(vlSelf->SocTop__DOT__d_cache3__DOT__mem_hit_ok));
        tracep->fullBit(oldp+286,(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_ok));
        tracep->fullQData(oldp+287,(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_addr),64);
        tracep->fullQData(oldp+289,(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_data),64);
        tracep->fullCData(oldp+291,(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_type),4);
        tracep->fullBit(oldp+292,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_i_ok));
        tracep->fullCData(oldp+293,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_type),4);
        tracep->fullQData(oldp+294,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_addr),64);
        tracep->fullCData(oldp+296,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_data_ena1),8);
        tracep->fullBit(oldp+297,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_tag_ena1));
        tracep->fullCData(oldp+298,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_data_ena2),8);
        tracep->fullBit(oldp+299,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_tag_ena2));
        tracep->fullBit(oldp+300,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_resp));
        tracep->fullCData(oldp+301,(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite_nxt),6);
        tracep->fullCData(oldp+302,(vlSelf->SocTop__DOT__d_cache3__DOT__hitw_data_strb1),8);
        tracep->fullCData(oldp+303,(vlSelf->SocTop__DOT__d_cache3__DOT__hitw_data_strb2),8);
        tracep->fullBit(oldp+304,(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_ok));
        tracep->fullQData(oldp+305,(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_addr),64);
        tracep->fullQData(oldp+307,(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_data),64);
        tracep->fullCData(oldp+309,(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_type),4);
        tracep->fullBit(oldp+310,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_i_ok));
        tracep->fullCData(oldp+311,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_type),4);
        tracep->fullQData(oldp+312,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_addr),64);
        tracep->fullCData(oldp+314,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_data_ena1),8);
        tracep->fullBit(oldp+315,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_tag_ena1));
        tracep->fullCData(oldp+316,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_data_ena2),8);
        tracep->fullBit(oldp+317,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_tag_ena2));
        tracep->fullBit(oldp+318,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_resp));
        tracep->fullBit(oldp+319,(vlSelf->SocTop__DOT__d_cache3__DOT__tag_ena1));
        tracep->fullBit(oldp+320,(vlSelf->SocTop__DOT__d_cache3__DOT__tag_ena2));
        tracep->fullCData(oldp+321,(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena1),8);
        tracep->fullQData(oldp+322,(vlSelf->SocTop__DOT__d_cache3__DOT__in_rem_data1),64);
        tracep->fullCData(oldp+324,(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena2),8);
        tracep->fullQData(oldp+325,((0x80000000000000ULL 
                                     | (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                        >> 9U))),56);
        tracep->fullBit(oldp+327,(((IData)(vlSelf->SocTop__DOT__t_axi_aw_valid) 
                                   & (IData)(vlSelf->SocTop__DOT__t_axi_aw_ready))));
        tracep->fullBit(oldp+328,(vlSelf->SocTop__DOT__arbitrate4__DOT__b_shankhand));
        tracep->fullCData(oldp+329,(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state_nex),2);
        tracep->fullBit(oldp+330,(vlSelf->SocTop__DOT__arbitrate4__DOT__b_shankhand));
        tracep->fullBit(oldp+331,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_valid) 
                                   & (IData)(vlSelf->SocTop__DOT__t_axi_ar_ready))));
        tracep->fullBit(oldp+332,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid) 
                                   & (IData)(vlSelf->SocTop__DOT__t_axi_ar_ready))));
        tracep->fullBit(oldp+333,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_r_shankhand));
        tracep->fullBit(oldp+334,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_r_shankhand));
        tracep->fullBit(oldp+335,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid));
        tracep->fullBit(oldp+336,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_valid));
        tracep->fullCData(oldp+337,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_state_nxt),2);
        tracep->fullCData(oldp+338,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_state_nxt),2);
        tracep->fullBit(oldp+339,(vlSelf->SocTop__DOT__arbitrate4__DOT__r_dcache_valid));
        tracep->fullBit(oldp+340,((((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                    >> 2U) & (IData)(vlSelf->SocTop__DOT__soc_axi_aw_ready))));
        tracep->fullBit(oldp+341,((((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                    >> 2U) & (IData)(vlSelf->SocTop__DOT__soc_axi_w_ready))));
        tracep->fullCData(oldp+342,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state_nxt),2);
        tracep->fullBit(oldp+343,(vlSelf->SocTop__DOT__axi_mnq4__DOT__ar_shankhand));
        tracep->fullCData(oldp+344,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state_nxt),2);
        tracep->fullBit(oldp+345,((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                    & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__ar_shakehand)) 
                                   & (0x2004000ULL 
                                      == (((QData)((IData)(
                                                           vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))))));
        tracep->fullBit(oldp+346,((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                    & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__ar_shakehand)) 
                                   & (0x200bff8ULL 
                                      == (((QData)((IData)(
                                                           vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))))));
        tracep->fullBit(oldp+347,(((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                     & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__w_shakehand)) 
                                    & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__aw_shakehand)) 
                                   & (0x2004000ULL 
                                      == (((QData)((IData)(
                                                           vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))))));
        tracep->fullBit(oldp+348,(((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                     & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__w_shakehand)) 
                                    & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__aw_shakehand)) 
                                   & (0x200bff8ULL 
                                      == (((QData)((IData)(
                                                           vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))))));
        tracep->fullQData(oldp+349,(vlSelf->SocTop__DOT__time_axi6__DOT__wmask),64);
        tracep->fullBit(oldp+351,(vlSelf->SocTop__DOT__time_axi6__DOT__aw_shakehand));
        tracep->fullBit(oldp+352,(vlSelf->SocTop__DOT__time_axi6__DOT__w_shakehand));
        tracep->fullBit(oldp+353,(((IData)(vlSelf->SocTop__DOT__tim_axi_b_valid) 
                                   & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                      >> 1U))));
        tracep->fullBit(oldp+354,(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right));
        tracep->fullCData(oldp+355,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m_nxt),2);
        tracep->fullBit(oldp+356,((IData)(((((((0U 
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
        tracep->fullBit(oldp+357,(vlSelf->SocTop__DOT__time_axi6__DOT__ar_shakehand));
        tracep->fullCData(oldp+358,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r_nxt),2);
        tracep->fullBit(oldp+359,(((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
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
        tracep->fullQData(oldp+360,(((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                                      ? vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_data
                                      : ((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                                          ? vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_data
                                          : 0ULL))),64);
        tracep->fullBit(oldp+362,(((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                                    ? (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_resp)
                                    : ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                                       & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_resp)))));
        tracep->fullCData(oldp+363,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                      ? (0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                                 >> 8U))
                                      : 0U)),4);
        tracep->fullCData(oldp+364,(((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r))
                                      ? (0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                                 >> 4U))
                                      : 0U)),4);
        tracep->fullBit(oldp+365,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__if_stall_req))));
        tracep->fullQData(oldp+366,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr)
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
        tracep->fullBit(oldp+368,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+369,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x2000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+370,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x3000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+371,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x4000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+372,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+373,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+374,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x1000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+375,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x5000U 
                                                    == 
                                                    (0x40007000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+376,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+377,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x1000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+378,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x4000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+379,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x5000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+380,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+381,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+382,((1U & (IData)(((0x80U 
                                                  == 
                                                  (0x80U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+383,((1U & (IData)(((0x80U 
                                                  == 
                                                  (0x80U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+384,(((IData)(((0x80U 
                                             == (0x80U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                            & (0U == 
                                               (0x7000U 
                                                & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                   & (0U == (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                             >> 0x14U)))));
        tracep->fullBit(oldp+385,(((IData)(((0x80U 
                                             == (0x80U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                            & (0U == 
                                               (0x7000U 
                                                & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                   & (0x18U == (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+386,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr) 
                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena))));
        tracep->fullBit(oldp+387,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr) 
                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena))));
        tracep->fullBit(oldp+388,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))));
        tracep->fullQData(oldp+389,(((((- (QData)((IData)(
                                                          (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                           >> 0x1fU)))) 
                                       << 0xcU) | (QData)((IData)(
                                                                  (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                   >> 0x14U)))) 
                                     + vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op)),64);
        tracep->fullBit(oldp+391,((1U & (((~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1)) 
                                          & (~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1))) 
                                         & (~ (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                                == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                               & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena)))))));
        tracep->fullQData(oldp+392,(((2U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type))
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
        tracep->fullBit(oldp+394,(((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                   & (1U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)))));
        tracep->fullBit(oldp+395,(((IData)(vlSelf->SocTop__DOT__rvcpu_we) 
                                   & (1U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)))));
        tracep->fullBit(oldp+396,(((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
                                   & (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                                        == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                            >> 9U)) 
                                       & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild)) 
                                      | ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                                          == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                              >> 9U)) 
                                         & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))))));
        tracep->fullBit(oldp+397,(((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                                   & (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                                        == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                            >> 9U)) 
                                       & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild)) 
                                      | ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                                          == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                              >> 9U)) 
                                         & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))))));
        tracep->fullBit(oldp+398,(((IData)(vlSelf->SocTop__DOT__t_axi_w_valid) 
                                   & (IData)(vlSelf->SocTop__DOT__t_axi_w_ready))));
        tracep->fullBit(oldp+399,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state)) 
                                   & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                      >> 2U))));
        tracep->fullBit(oldp+400,((((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                    >> 2U) & (2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)))));
        tracep->fullQData(oldp+401,((((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
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
        tracep->fullQData(oldp+403,((((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
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
        tracep->fullBit(oldp+405,(((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r)) 
                                   & ((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                      >> 1U))));
        tracep->fullQData(oldp+406,(((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
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
        tracep->fullQData(oldp+408,(vlSelf->SocTop__DOT__rvcpu_inst_addr),64);
        tracep->fullIData(oldp+410,(vlSelf->SocTop__DOT__i_cache_inst_data),32);
        tracep->fullBit(oldp+411,((vlSelf->SocTop__DOT__time_axi6__DOT__car_mtime_l 
                                   > vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h)));
        tracep->fullBit(oldp+412,(vlSelf->SocTop__DOT__t_axi_w_valid));
        tracep->fullCData(oldp+413,(vlSelf->SocTop__DOT__add_axi_r_last),3);
        tracep->fullCData(oldp+414,(vlSelf->SocTop__DOT__add_axi_r_valid),3);
        tracep->fullBit(oldp+415,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))));
        tracep->fullBit(oldp+416,(vlSelf->SocTop__DOT__soc_axi_ar_ready));
        tracep->fullBit(oldp+417,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))));
        tracep->fullBit(oldp+418,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))));
        tracep->fullBit(oldp+419,(vlSelf->SocTop__DOT__tim_axi_r_last));
        tracep->fullBit(oldp+420,((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r))));
        tracep->fullQData(oldp+421,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))
                                      ? vlSelf->SocTop__DOT__axi_mnq4__DOT__write_addr_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+423,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))
                                      ? vlSelf->SocTop__DOT__axi_mnq4__DOT__write_data_reg
                                      : 0ULL)),64);
        tracep->fullCData(oldp+425,((0x1fU & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                              >> 0xfU))),5);
        tracep->fullQData(oldp+426,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc),64);
        tracep->fullIData(oldp+428,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst),32);
        tracep->fullBit(oldp+429,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena));
        tracep->fullCData(oldp+430,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr),5);
        tracep->fullBit(oldp+431,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena));
        tracep->fullCData(oldp+432,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type),8);
        tracep->fullCData(oldp+433,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_sel),3);
        tracep->fullQData(oldp+434,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_addr),64);
        tracep->fullQData(oldp+436,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena))
                                      ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data
                                      : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch)
                                          ? (4ULL + vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc)
                                          : 0ULL))),64);
        tracep->fullCData(oldp+438,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr),5);
        tracep->fullBit(oldp+439,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena));
        tracep->fullCData(oldp+440,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr),5);
        tracep->fullBit(oldp+441,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena));
        tracep->fullQData(oldp+442,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data),64);
        tracep->fullQData(oldp+444,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc),64);
        tracep->fullCData(oldp+446,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type),8);
        tracep->fullCData(oldp+447,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode),8);
        tracep->fullQData(oldp+448,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1),64);
        tracep->fullQData(oldp+450,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2),64);
        tracep->fullBit(oldp+452,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdena));
        tracep->fullSData(oldp+453,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset),12);
        tracep->fullCData(oldp+454,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type),8);
        tracep->fullQData(oldp+455,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data),64);
        tracep->fullCData(oldp+457,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel),3);
        tracep->fullQData(oldp+458,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr),64);
        tracep->fullQData(oldp+460,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_pc),64);
        tracep->fullIData(oldp+462,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_ex_inst),32);
        tracep->fullIData(oldp+463,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_inst),32);
        tracep->fullIData(oldp+464,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm),20);
        tracep->fullSData(oldp+465,((vlSelf->SocTop__DOT__i_cache_inst_data 
                                     >> 0x14U)),12);
        tracep->fullSData(oldp+466,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm),12);
        tracep->fullCData(oldp+467,((0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)),7);
        tracep->fullBit(oldp+468,((IData)((0x6fU == 
                                           (0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)))));
        tracep->fullBit(oldp+469,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr));
        tracep->fullBit(oldp+470,((IData)((0x63U == 
                                           (0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)))));
        tracep->fullQData(oldp+471,(((IData)((0x6fU 
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
        tracep->fullCData(oldp+473,((0x7fU & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)),7);
        tracep->fullCData(oldp+474,((0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+475,((7U & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                           >> 0xcU))),3);
        tracep->fullSData(oldp+476,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                     >> 0x14U)),12);
        tracep->fullCData(oldp+477,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+478,((0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                              >> 0x14U))),5);
        tracep->fullIData(oldp+479,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                     >> 0xcU)),20);
        tracep->fullSData(oldp+480,(((0xfe0U & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                 >> 7U)))),12);
        tracep->fullQData(oldp+481,((1ULL + (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))),64);
        tracep->fullQData(oldp+483,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sub_op2),64);
        tracep->fullQData(oldp+485,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2),64);
        tracep->fullQData(oldp+487,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_addw_op2),64);
        tracep->fullBit(oldp+489,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_ls_op2));
        tracep->fullQData(oldp+490,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__shift_res),64);
        tracep->fullIData(oldp+492,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sllw_op2),32);
        tracep->fullQData(oldp+493,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sllw_res),64);
        tracep->fullIData(oldp+495,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_srlw_op2),32);
        tracep->fullQData(oldp+496,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__srlw_res),64);
        tracep->fullIData(oldp+498,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sraw_op2),32);
        tracep->fullQData(oldp+499,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sraw_res),64);
        tracep->fullIData(oldp+501,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2),32);
        tracep->fullQData(oldp+502,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2)))),64);
        tracep->fullQData(oldp+504,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__upper_imm),64);
        tracep->fullBit(oldp+506,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch));
        tracep->fullBit(oldp+507,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena));
        tracep->fullSData(oldp+508,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx),12);
        tracep->fullQData(oldp+509,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data),64);
        tracep->fullBit(oldp+511,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena));
        tracep->fullBit(oldp+512,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena));
        tracep->fullBit(oldp+513,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena));
        tracep->fullBit(oldp+514,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en));
        tracep->fullBit(oldp+515,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en));
        tracep->fullQData(oldp+516,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data),64);
        tracep->fullQData(oldp+518,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value),64);
        tracep->fullQData(oldp+520,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
                                     | vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1)),64);
        tracep->fullQData(oldp+522,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
                                     & (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1))),64);
        tracep->fullBit(oldp+524,((0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+525,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en) 
                                   & (0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)))));
        tracep->fullBit(oldp+526,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en) 
                                   & (0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)))));
        tracep->fullQData(oldp+527,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcycle),64);
        tracep->fullBit(oldp+529,((0x300U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+530,(((0x300U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+531,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus));
        tracep->fullBit(oldp+532,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_ena));
        tracep->fullBit(oldp+533,((1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                          | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                          ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)
                                          : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena) 
                                             | ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                 ? (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                            >> 7U))
                                                 : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)))))));
        tracep->fullBit(oldp+534,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie));
        tracep->fullBit(oldp+535,((1U & ((~ ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                             | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))) 
                                         & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)
                                             ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)
                                             : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                 ? (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                            >> 3U))
                                                 : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)))))));
        tracep->fullBit(oldp+536,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie));
        tracep->fullCData(oldp+537,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                      ? 3U : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                      ? (IData)(
                                                                (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                                 >> 0xbU))
                                                      : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp)))))),2);
        tracep->fullCData(oldp+538,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp),2);
        tracep->fullCData(oldp+539,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs),2);
        tracep->fullBit(oldp+540,((3U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs))));
        tracep->fullQData(oldp+541,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus),64);
        tracep->fullBit(oldp+543,((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+544,(((((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en)) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
        tracep->fullBit(oldp+545,(((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
        tracep->fullQData(oldp+546,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base),62);
        tracep->fullQData(oldp+548,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base 
                                     << 2U)),64);
        tracep->fullBit(oldp+550,((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+551,((((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena))));
        tracep->fullBit(oldp+552,(((((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en)) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
        tracep->fullQData(oldp+553,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mepc),64);
        tracep->fullBit(oldp+555,((0x342U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+556,(((0x342U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+557,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause));
        tracep->fullBit(oldp+558,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
        tracep->fullQData(oldp+559,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                      ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value
                                      : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause)
                                          ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data
                                          : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause))),64);
        tracep->fullQData(oldp+561,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause),64);
        tracep->fullBit(oldp+563,((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+564,(((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+565,(((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
        tracep->fullBit(oldp+566,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie));
        tracep->fullQData(oldp+567,(((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie)) 
                                     << 7U)),64);
        tracep->fullBit(oldp+569,((0x344U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+570,(((0x344U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+571,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip));
        tracep->fullQData(oldp+572,((QData)((IData)(
                                                    ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip) 
                                                     << 7U)))),64);
        tracep->fullBit(oldp+574,((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+575,(((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+576,(((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
        tracep->fullQData(oldp+577,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mscrstch),64);
        tracep->fullCData(oldp+579,((7U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))),3);
        tracep->fullCData(oldp+580,((3U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                   >> 1U)))),2);
        tracep->fullBit(oldp+581,((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                 >> 2U)))));
        tracep->fullQData(oldp+582,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_pc_o),64);
        tracep->fullIData(oldp+584,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o),32);
        tracep->fullQData(oldp+585,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__pc_data1),64);
        tracep->fullBit(oldp+587,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_exyn));
        tracep->fullBit(oldp+588,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__teap_yn));
        tracep->fullQData(oldp+589,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__trap_code),64);
        tracep->fullQData(oldp+591,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[0]),64);
        tracep->fullQData(oldp+593,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[1]),64);
        tracep->fullQData(oldp+595,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[2]),64);
        tracep->fullQData(oldp+597,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[3]),64);
        tracep->fullQData(oldp+599,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[4]),64);
        tracep->fullQData(oldp+601,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[5]),64);
        tracep->fullQData(oldp+603,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[6]),64);
        tracep->fullQData(oldp+605,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[7]),64);
        tracep->fullQData(oldp+607,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[8]),64);
        tracep->fullQData(oldp+609,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[9]),64);
        tracep->fullQData(oldp+611,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[10]),64);
        tracep->fullQData(oldp+613,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[11]),64);
        tracep->fullQData(oldp+615,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[12]),64);
        tracep->fullQData(oldp+617,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[13]),64);
        tracep->fullQData(oldp+619,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[14]),64);
        tracep->fullQData(oldp+621,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[15]),64);
        tracep->fullQData(oldp+623,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[16]),64);
        tracep->fullQData(oldp+625,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[17]),64);
        tracep->fullQData(oldp+627,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[18]),64);
        tracep->fullQData(oldp+629,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[19]),64);
        tracep->fullQData(oldp+631,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[20]),64);
        tracep->fullQData(oldp+633,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[21]),64);
        tracep->fullQData(oldp+635,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[22]),64);
        tracep->fullQData(oldp+637,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[23]),64);
        tracep->fullQData(oldp+639,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[24]),64);
        tracep->fullQData(oldp+641,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[25]),64);
        tracep->fullQData(oldp+643,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[26]),64);
        tracep->fullQData(oldp+645,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[27]),64);
        tracep->fullQData(oldp+647,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[28]),64);
        tracep->fullQData(oldp+649,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[29]),64);
        tracep->fullQData(oldp+651,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[30]),64);
        tracep->fullQData(oldp+653,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[31]),64);
        tracep->fullIData(oldp+655,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__i),32);
        tracep->fullQData(oldp+656,(vlSelf->SocTop__DOT__i_cache2__DOT__addr_lock),64);
        tracep->fullQData(oldp+658,((vlSelf->SocTop__DOT__i_cache2__DOT__addr_lock 
                                     >> 9U)),55);
        tracep->fullCData(oldp+660,((0x3fU & (IData)(
                                                     (vlSelf->SocTop__DOT__i_cache2__DOT__addr_lock 
                                                      >> 3U)))),6);
        tracep->fullCData(oldp+661,(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst),6);
        tracep->fullBit(oldp+662,((0x20U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst))));
        tracep->fullBit(oldp+663,(vlSelf->SocTop__DOT__i_cache2__DOT__inst_hit_ok));
        tracep->fullQData(oldp+664,(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__out_data),55);
        tracep->fullBit(oldp+666,(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__out_vaild));
        tracep->fullQData(oldp+667,(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__out_data),55);
        tracep->fullBit(oldp+669,(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__out_vaild));
        tracep->fullQData(oldp+670,(vlSelf->SocTop__DOT__i_cache2__DOT__u_data01__DOT__out_data),64);
        tracep->fullQData(oldp+672,(vlSelf->SocTop__DOT__i_cache2__DOT__u_data02__DOT__out_data),64);
        tracep->fullIData(oldp+674,(vlSelf->SocTop__DOT__i_cache2__DOT__i),32);
        tracep->fullQData(oldp+675,((0x80000000000000ULL 
                                     | (vlSelf->SocTop__DOT__i_cache2__DOT__addr_lock 
                                        >> 9U))),56);
        tracep->fullBit(oldp+677,((1U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))));
        tracep->fullBit(oldp+678,((1U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))));
        tracep->fullCData(oldp+679,(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread),6);
        tracep->fullBit(oldp+680,((2U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))));
        tracep->fullCData(oldp+681,(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite),6);
        tracep->fullBit(oldp+682,((2U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))));
        tracep->fullBit(oldp+683,((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))));
        tracep->fullIData(oldp+684,(vlSelf->SocTop__DOT__d_cache3__DOT__i),32);
        tracep->fullQData(oldp+685,(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data),55);
        tracep->fullBit(oldp+687,(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild));
        tracep->fullQData(oldp+688,(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data),55);
        tracep->fullBit(oldp+690,(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild));
        tracep->fullQData(oldp+691,(vlSelf->SocTop__DOT__d_cache3__DOT__u_data0__DOT__out_data),64);
        tracep->fullQData(oldp+693,(vlSelf->SocTop__DOT__d_cache3__DOT__u_data1__DOT__out_data),64);
        tracep->fullCData(oldp+695,(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state),2);
        tracep->fullCData(oldp+696,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_state),2);
        tracep->fullCData(oldp+697,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_state),2);
        tracep->fullCData(oldp+698,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state),2);
        tracep->fullCData(oldp+699,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state),2);
        tracep->fullQData(oldp+700,(vlSelf->SocTop__DOT__axi_mnq4__DOT__write_data_reg),64);
        tracep->fullQData(oldp+702,(vlSelf->SocTop__DOT__axi_mnq4__DOT__write_addr_reg),64);
        tracep->fullQData(oldp+704,(vlSelf->SocTop__DOT__time_axi6__DOT__car_mtime_l),64);
        tracep->fullQData(oldp+706,(vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h),64);
        tracep->fullCData(oldp+708,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m),2);
        tracep->fullCData(oldp+709,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r),2);
        tracep->fullBit(oldp+710,(vlSelf->clk));
        tracep->fullBit(oldp+711,(vlSelf->rst));
        tracep->fullBit(oldp+712,(vlSelf->read_ena_sign_));
        tracep->fullQData(oldp+713,(vlSelf->out_addr_outp),64);
        tracep->fullQData(oldp+715,(vlSelf->read_data_sign_),64);
        tracep->fullBit(oldp+717,(vlSelf->out_write_ram_ena));
        tracep->fullQData(oldp+718,(vlSelf->out_write_ram_data),64);
        tracep->fullQData(oldp+720,(vlSelf->out_write_ram_addr),64);
        tracep->fullQData(oldp+722,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                      ? vlSelf->read_data_sign_
                                      : 0ULL)),64);
        tracep->fullQData(oldp+724,(((1U & ((~ (IData)(vlSelf->rst)) 
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
        tracep->fullBit(oldp+726,(((IData)(vlSelf->rst)
                                    ? 0U : (1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)))));
        tracep->fullQData(oldp+727,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
                                                 ? 
                                                (0xfffffffffffffffeULL 
                                                 & vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc)
                                                 : vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc))),64);
        tracep->fullBit(oldp+729,(((IData)(vlSelf->rst)
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
        tracep->fullQData(oldp+730,((((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1))
                                      ? ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                           == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                          & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                          ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                          : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                         [vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1])
                                      : 0ULL)),64);
        tracep->fullQData(oldp+732,((((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2))
                                      ? ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                           == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                          & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                          ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                          : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                         [vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2])
                                      : 0ULL)),64);
        tracep->fullBit(oldp+734,(((~ (IData)(vlSelf->rst)) 
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
        tracep->fullQData(oldp+735,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
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
        tracep->fullBit(oldp+737,(((IData)(vlSelf->rst)
                                    ? 0U : (1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1) 
                                                   & (2U 
                                                      == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                  & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1) 
                                                     == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)))))));
        tracep->fullBit(oldp+738,(((IData)(vlSelf->rst)
                                    ? 0U : (1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2) 
                                                   & (2U 
                                                      == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                  & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2) 
                                                     == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)))))));
        tracep->fullQData(oldp+739,(((IData)(vlSelf->rst)
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
        tracep->fullQData(oldp+741,(((IData)(vlSelf->rst)
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
        tracep->fullQData(oldp+743,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((1U 
                                                 & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                            >> 2U)))
                                                 ? 
                                                ((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)) 
                                                 << 0x20U)
                                                 : (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data))))),64);
        tracep->fullCData(oldp+745,(((IData)(vlSelf->rst)
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
        tracep->fullCData(oldp+746,(((IData)(vlSelf->rst)
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
        tracep->fullCData(oldp+747,(((IData)(vlSelf->rst)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                             >> 2U)))
                                               ? 0xf0U
                                               : 0xfU))),8);
        tracep->fullIData(oldp+748,(3U),32);
        tracep->fullCData(oldp+749,(0U),4);
        tracep->fullCData(oldp+750,(0U),8);
        tracep->fullCData(oldp+751,(3U),3);
        tracep->fullCData(oldp+752,(1U),2);
        tracep->fullCData(oldp+753,(2U),4);
        tracep->fullCData(oldp+754,(0U),3);
        tracep->fullCData(oldp+755,(0xffU),8);
        tracep->fullBit(oldp+756,(1U));
        tracep->fullCData(oldp+757,(0U),2);
        tracep->fullBit(oldp+758,(vlSelf->SocTop__DOT__io_axi_aw_ready));
        tracep->fullBit(oldp+759,(vlSelf->SocTop__DOT__io_axi_w_ready));
        tracep->fullCData(oldp+760,(vlSelf->SocTop__DOT__io_axi_b_id),4);
        tracep->fullCData(oldp+761,(vlSelf->SocTop__DOT__io_axi_b_resp),2);
        tracep->fullBit(oldp+762,(vlSelf->SocTop__DOT__io_axi_b_valid));
        tracep->fullBit(oldp+763,(vlSelf->SocTop__DOT__io_axi_ar_ready));
        tracep->fullCData(oldp+764,(vlSelf->SocTop__DOT__io_axi_r_id),4);
        tracep->fullQData(oldp+765,(vlSelf->SocTop__DOT__io_axi_r_data),64);
        tracep->fullCData(oldp+767,(vlSelf->SocTop__DOT__io_axi_r_resp),2);
        tracep->fullBit(oldp+768,(vlSelf->SocTop__DOT__io_axi_r_last));
        tracep->fullBit(oldp+769,(vlSelf->SocTop__DOT__io_axi_r_valid));
    }
}
