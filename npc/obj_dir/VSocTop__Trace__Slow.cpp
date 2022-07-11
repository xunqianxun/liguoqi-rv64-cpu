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
        tracep->declBit(c+854,"clk", false,-1);
        tracep->declBit(c+855,"rst", false,-1);
        tracep->declBit(c+856,"read_ena_sign_", false,-1);
        tracep->declQuad(c+857,"out_addr_outp", false,-1, 63,0);
        tracep->declQuad(c+859,"read_data_sign_", false,-1, 63,0);
        tracep->declBit(c+861,"out_write_ram_ena", false,-1);
        tracep->declQuad(c+862,"out_write_ram_data", false,-1, 63,0);
        tracep->declQuad(c+864,"out_write_ram_addr", false,-1, 63,0);
        tracep->declQuad(c+866,"out_slave_addr_", false,-1, 63,0);
        tracep->declQuad(c+868,"out_serial_data_", false,-1, 63,0);
        tracep->declQuad(c+870,"in_rtc_data_", false,-1, 63,0);
        tracep->declBit(c+872,"out_serial_write_", false,-1);
        tracep->declBit(c+873,"out_rtc_read_", false,-1);
        tracep->declBit(c+854,"SocTop clk", false,-1);
        tracep->declBit(c+855,"SocTop rst", false,-1);
        tracep->declBit(c+856,"SocTop read_ena_sign_", false,-1);
        tracep->declQuad(c+857,"SocTop out_addr_outp", false,-1, 63,0);
        tracep->declQuad(c+859,"SocTop read_data_sign_", false,-1, 63,0);
        tracep->declBit(c+861,"SocTop out_write_ram_ena", false,-1);
        tracep->declQuad(c+862,"SocTop out_write_ram_data", false,-1, 63,0);
        tracep->declQuad(c+864,"SocTop out_write_ram_addr", false,-1, 63,0);
        tracep->declQuad(c+866,"SocTop out_slave_addr_", false,-1, 63,0);
        tracep->declQuad(c+868,"SocTop out_serial_data_", false,-1, 63,0);
        tracep->declQuad(c+870,"SocTop in_rtc_data_", false,-1, 63,0);
        tracep->declBit(c+872,"SocTop out_serial_write_", false,-1);
        tracep->declBit(c+873,"SocTop out_rtc_read_", false,-1);
        tracep->declBus(c+920,"SocTop SLAVE_NUM", false,-1, 31,0);
        tracep->declBit(c+854,"SocTop aclk", false,-1);
        tracep->declQuad(c+3,"SocTop rvcpu_inst_addr", false,-1, 63,0);
        tracep->declQuad(c+486,"SocTop rvcpu_data_addr", false,-1, 63,0);
        tracep->declBus(c+488,"SocTop rvcpu_wmask", false,-1, 7,0);
        tracep->declQuad(c+489,"SocTop rvcpu_data_o", false,-1, 63,0);
        tracep->declBit(c+491,"SocTop rvcpu_we", false,-1);
        tracep->declBit(c+492,"SocTop rvcpu_re", false,-1);
        tracep->declBit(c+493,"SocTop core_stall_l", false,-1);
        tracep->declQuad(c+494,"SocTop uncache_arb_data", false,-1, 63,0);
        tracep->declQuad(c+496,"SocTop uncache_arb_addr", false,-1, 63,0);
        tracep->declBus(c+498,"SocTop uncache_arb_mask", false,-1, 7,0);
        tracep->declQuad(c+5,"SocTop uncache_arb_data_o", false,-1, 63,0);
        tracep->declBit(c+499,"SocTop uncache_arb_we", false,-1);
        tracep->declBit(c+500,"SocTop uncache_arb_re", false,-1);
        tracep->declBit(c+431,"SocTop uncache_arb_finish", false,-1);
        tracep->declQuad(c+501,"SocTop uncache_dc_data", false,-1, 63,0);
        tracep->declQuad(c+503,"SocTop uncache_dc_addr", false,-1, 63,0);
        tracep->declBus(c+505,"SocTop uncache_dc_mask", false,-1, 7,0);
        tracep->declQuad(c+432,"SocTop uncache_dc_data_o", false,-1, 63,0);
        tracep->declBit(c+506,"SocTop uncache_dc_we", false,-1);
        tracep->declBit(c+507,"SocTop uncache_dc_re", false,-1);
        tracep->declBit(c+508,"SocTop uncache_dc_finish", false,-1);
        tracep->declBus(c+509,"SocTop i_cache_inst_data", false,-1, 31,0);
        tracep->declBit(c+510,"SocTop i_cache_inst_valid", false,-1);
        tracep->declBit(c+7,"SocTop i_cache_read_ena", false,-1);
        tracep->declQuad(c+8,"SocTop i_cache_addr", false,-1, 63,0);
        tracep->declBit(c+874,"SocTop i_cache_ready", false,-1);
        tracep->declBit(c+10,"SocTop i_caceh_resp", false,-1);
        tracep->declQuad(c+511,"SocTop d_cache_data_out", false,-1, 63,0);
        tracep->declBit(c+434,"SocTop d_cache_mem_finish", false,-1);
        tracep->declQuad(c+513,"SocTop d_cache_out_addr", false,-1, 63,0);
        tracep->declQuad(c+435,"SocTop d_cache_out_data", false,-1, 63,0);
        tracep->declBit(c+437,"SocTop d_cache_out_resp", false,-1);
        tracep->declBus(c+515,"SocTop d_cache_out_type", false,-1, 3,0);
        tracep->declQuad(c+11,"SocTop arbitrate_d_data", false,-1, 63,0);
        tracep->declBit(c+516,"SocTop arbitrate_d_ok", false,-1);
        tracep->declQuad(c+13,"SocTop arbitrate_i_data", false,-1, 63,0);
        tracep->declBit(c+15,"SocTop arbitrate_i_ok", false,-1);
        tracep->declBit(c+16,"SocTop time_init_sign", false,-1);
        tracep->declBus(c+17,"SocTop t_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+18,"SocTop t_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+20,"SocTop t_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+21,"SocTop t_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+22,"SocTop t_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+23,"SocTop t_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+24,"SocTop t_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+25,"SocTop t_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+875,"SocTop t_axi_aw_ready", false,-1);
        tracep->declBit(c+26,"SocTop t_axi_aw_valid", false,-1);
        tracep->declQuad(c+27,"SocTop t_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+29,"SocTop t_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+30,"SocTop t_axi_w_last", false,-1);
        tracep->declBit(c+31,"SocTop t_axi_w_valid", false,-1);
        tracep->declBit(c+876,"SocTop t_axi_w_ready", false,-1);
        tracep->declBus(c+877,"SocTop t_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+878,"SocTop t_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+879,"SocTop t_axi_b_valid", false,-1);
        tracep->declBit(c+921,"SocTop t_axi_b_ready", false,-1);
        tracep->declBus(c+32,"SocTop t_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+33,"SocTop t_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+35,"SocTop t_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+36,"SocTop t_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+37,"SocTop t_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+38,"SocTop t_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+39,"SocTop t_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+40,"SocTop t_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+41,"SocTop t_axi_ar_valid", false,-1);
        tracep->declBit(c+517,"SocTop t_axi_ar_ready", false,-1);
        tracep->declBus(c+518,"SocTop t_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+519,"SocTop t_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+521,"SocTop t_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+522,"SocTop t_axi_r_last", false,-1);
        tracep->declBit(c+523,"SocTop t_axi_r_valid", false,-1);
        tracep->declBit(c+42,"SocTop t_axi_r_ready", false,-1);
        tracep->declBus(c+524,"SocTop add_axi_aw_id", false,-1, 11,0);
        tracep->declArray(c+525,"SocTop add_axi_aw_addr", false,-1, 191,0);
        tracep->declBus(c+531,"SocTop add_axi_aw_len", false,-1, 23,0);
        tracep->declBus(c+532,"SocTop add_axi_aw_size", false,-1, 8,0);
        tracep->declBus(c+533,"SocTop add_axi_aw_burst", false,-1, 5,0);
        tracep->declBus(c+534,"SocTop add_axi_aw_cache", false,-1, 11,0);
        tracep->declBus(c+535,"SocTop add_axi_aw_prot", false,-1, 8,0);
        tracep->declBus(c+536,"SocTop add_axi_aw_qos", false,-1, 11,0);
        tracep->declBus(c+537,"SocTop add_axi_aw_valid", false,-1, 2,0);
        tracep->declBus(c+538,"SocTop add_axi_aw_ready", false,-1, 2,0);
        tracep->declArray(c+539,"SocTop add_axi_w_data", false,-1, 191,0);
        tracep->declBus(c+545,"SocTop add_axi_w_strb", false,-1, 23,0);
        tracep->declBus(c+546,"SocTop add_axi_w_last", false,-1, 2,0);
        tracep->declBus(c+547,"SocTop add_axi_w_valid", false,-1, 2,0);
        tracep->declBus(c+548,"SocTop add_axi_w_ready", false,-1, 2,0);
        tracep->declBus(c+549,"SocTop add_axi_b_id", false,-1, 11,0);
        tracep->declBus(c+43,"SocTop add_axi_b_resp", false,-1, 5,0);
        tracep->declBus(c+44,"SocTop add_axi_b_valid", false,-1, 2,0);
        tracep->declBus(c+550,"SocTop add_axi_b_ready", false,-1, 2,0);
        tracep->declBus(c+551,"SocTop add_axi_ar_id", false,-1, 11,0);
        tracep->declArray(c+552,"SocTop add_axi_ar_addr", false,-1, 191,0);
        tracep->declBus(c+558,"SocTop add_axi_ar_len", false,-1, 23,0);
        tracep->declBus(c+559,"SocTop add_axi_ar_size", false,-1, 8,0);
        tracep->declBus(c+560,"SocTop add_axi_ar_burst", false,-1, 5,0);
        tracep->declBus(c+561,"SocTop add_axi_ar_cache", false,-1, 11,0);
        tracep->declBus(c+562,"SocTop add_axi_ar_prot", false,-1, 8,0);
        tracep->declBus(c+563,"SocTop add_axi_ar_qos", false,-1, 11,0);
        tracep->declBus(c+564,"SocTop add_axi_ar_valid", false,-1, 2,0);
        tracep->declBus(c+565,"SocTop add_axi_ar_ready", false,-1, 2,0);
        tracep->declBus(c+566,"SocTop add_axi_r_id", false,-1, 11,0);
        tracep->declArray(c+567,"SocTop add_axi_r_data", false,-1, 191,0);
        tracep->declBus(c+1,"SocTop add_axi_r_resp", false,-1, 5,0);
        tracep->declBus(c+45,"SocTop add_axi_r_last", false,-1, 2,0);
        tracep->declBus(c+46,"SocTop add_axi_r_valid", false,-1, 2,0);
        tracep->declBus(c+573,"SocTop add_axi_r_ready", false,-1, 2,0);
        tracep->declBus(c+574,"SocTop soc_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+575,"SocTop soc_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+577,"SocTop soc_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+578,"SocTop soc_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+579,"SocTop soc_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+580,"SocTop soc_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+581,"SocTop soc_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+582,"SocTop soc_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+583,"SocTop soc_axi_aw_ready", false,-1);
        tracep->declBit(c+584,"SocTop soc_axi_aw_valid", false,-1);
        tracep->declQuad(c+585,"SocTop soc_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+587,"SocTop soc_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+588,"SocTop soc_axi_w_last", false,-1);
        tracep->declBit(c+589,"SocTop soc_axi_w_valid", false,-1);
        tracep->declBit(c+590,"SocTop soc_axi_w_ready", false,-1);
        tracep->declBus(c+574,"SocTop soc_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+922,"SocTop soc_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+47,"SocTop soc_axi_b_valid", false,-1);
        tracep->declBit(c+591,"SocTop soc_axi_b_ready", false,-1);
        tracep->declBus(c+592,"SocTop soc_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+593,"SocTop soc_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+595,"SocTop soc_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+596,"SocTop soc_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+597,"SocTop soc_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+598,"SocTop soc_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+599,"SocTop soc_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+600,"SocTop soc_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+601,"SocTop soc_axi_ar_valid", false,-1);
        tracep->declBit(c+48,"SocTop soc_axi_ar_ready", false,-1);
        tracep->declBus(c+49,"SocTop soc_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+880,"SocTop soc_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+922,"SocTop soc_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+50,"SocTop soc_axi_r_last", false,-1);
        tracep->declBit(c+51,"SocTop soc_axi_r_valid", false,-1);
        tracep->declBit(c+602,"SocTop soc_axi_r_ready", false,-1);
        tracep->declBus(c+603,"SocTop tim_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+604,"SocTop tim_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+606,"SocTop tim_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+607,"SocTop tim_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+608,"SocTop tim_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+609,"SocTop tim_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+610,"SocTop tim_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+611,"SocTop tim_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+612,"SocTop tim_axi_aw_ready", false,-1);
        tracep->declBit(c+613,"SocTop tim_axi_aw_valid", false,-1);
        tracep->declQuad(c+614,"SocTop tim_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+616,"SocTop tim_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+617,"SocTop tim_axi_w_last", false,-1);
        tracep->declBit(c+618,"SocTop tim_axi_w_valid", false,-1);
        tracep->declBit(c+619,"SocTop tim_axi_w_ready", false,-1);
        tracep->declBus(c+52,"SocTop tim_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+53,"SocTop tim_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+54,"SocTop tim_axi_b_valid", false,-1);
        tracep->declBit(c+620,"SocTop tim_axi_b_ready", false,-1);
        tracep->declBus(c+621,"SocTop tim_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+622,"SocTop tim_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+624,"SocTop tim_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+625,"SocTop tim_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+626,"SocTop tim_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+627,"SocTop tim_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+628,"SocTop tim_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+629,"SocTop tim_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+630,"SocTop tim_axi_ar_valid", false,-1);
        tracep->declBit(c+631,"SocTop tim_axi_ar_ready", false,-1);
        tracep->declBus(c+438,"SocTop tim_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+632,"SocTop tim_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+2,"SocTop tim_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+55,"SocTop tim_axi_r_last", false,-1);
        tracep->declBit(c+56,"SocTop tim_axi_r_valid", false,-1);
        tracep->declBit(c+634,"SocTop tim_axi_r_ready", false,-1);
        tracep->declBus(c+635,"SocTop io_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+636,"SocTop io_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+638,"SocTop io_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+639,"SocTop io_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+640,"SocTop io_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+641,"SocTop io_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+642,"SocTop io_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+643,"SocTop io_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+644,"SocTop io_axi_aw_ready", false,-1);
        tracep->declBit(c+645,"SocTop io_axi_aw_valid", false,-1);
        tracep->declQuad(c+646,"SocTop io_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+648,"SocTop io_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+649,"SocTop io_axi_w_last", false,-1);
        tracep->declBit(c+650,"SocTop io_axi_w_valid", false,-1);
        tracep->declBit(c+651,"SocTop io_axi_w_ready", false,-1);
        tracep->declBus(c+635,"SocTop io_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+922,"SocTop io_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+57,"SocTop io_axi_b_valid", false,-1);
        tracep->declBit(c+652,"SocTop io_axi_b_ready", false,-1);
        tracep->declBus(c+653,"SocTop io_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+654,"SocTop io_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+656,"SocTop io_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+657,"SocTop io_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+658,"SocTop io_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+659,"SocTop io_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+660,"SocTop io_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+661,"SocTop io_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+662,"SocTop io_axi_ar_valid", false,-1);
        tracep->declBit(c+58,"SocTop io_axi_ar_ready", false,-1);
        tracep->declBus(c+439,"SocTop io_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+882,"SocTop io_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+922,"SocTop io_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+59,"SocTop io_axi_r_last", false,-1);
        tracep->declBit(c+60,"SocTop io_axi_r_valid", false,-1);
        tracep->declBit(c+663,"SocTop io_axi_r_ready", false,-1);
        tracep->declBus(c+664,"SocTop mmio_thing", false,-1, 2,0);
        tracep->declBit(c+665,"SocTop read_ena_sign", false,-1);
        tracep->declQuad(c+666,"SocTop addr_oup_sign", false,-1, 63,0);
        tracep->declQuad(c+859,"SocTop read_data_sign", false,-1, 63,0);
        tracep->declBit(c+47,"SocTop write_ena_sign", false,-1);
        tracep->declQuad(c+61,"SocTop write_addr_sign", false,-1, 63,0);
        tracep->declQuad(c+63,"SocTop write_data_sign", false,-1, 63,0);
        tracep->declBus(c+664,"SocTop prot_chose_write", false,-1, 2,0);
        tracep->declBus(c+664,"SocTop prot_chose_read", false,-1, 2,0);
        tracep->declBit(c+854,"SocTop rvcpu1 clk", false,-1);
        tracep->declBit(c+855,"SocTop rvcpu1 rst", false,-1);
        tracep->declQuad(c+3,"SocTop rvcpu1 inst_addr", false,-1, 63,0);
        tracep->declBit(c+874,"SocTop rvcpu1 inst_ready", false,-1);
        tracep->declBus(c+509,"SocTop rvcpu1 inst", false,-1, 31,0);
        tracep->declBit(c+510,"SocTop rvcpu1 bui_inst_valid", false,-1);
        tracep->declBit(c+493,"SocTop rvcpu1 core_stall_sign", false,-1);
        tracep->declQuad(c+486,"SocTop rvcpu1 data_addr", false,-1, 63,0);
        tracep->declBus(c+488,"SocTop rvcpu1 wmask", false,-1, 7,0);
        tracep->declQuad(c+489,"SocTop rvcpu1 data_o", false,-1, 63,0);
        tracep->declQuad(c+511,"SocTop rvcpu1 data_i", false,-1, 63,0);
        tracep->declBit(c+491,"SocTop rvcpu1 we", false,-1);
        tracep->declBit(c+492,"SocTop rvcpu1 re", false,-1);
        tracep->declBit(c+434,"SocTop rvcpu1 mem_finish", false,-1);
        tracep->declBit(c+16,"SocTop rvcpu1 timer_intr", false,-1);
        tracep->declQuad(c+884,"SocTop rvcpu1 pip_regfile_x1", false,-1, 63,0);
        tracep->declBit(c+886,"SocTop rvcpu1 pip_refflie_x1_ena", false,-1);
        tracep->declBus(c+668,"SocTop rvcpu1 pip_regfile_x1_addr", false,-1, 4,0);
        tracep->declQuad(c+887,"SocTop rvcpu1 pip_pc", false,-1, 63,0);
        tracep->declBit(c+889,"SocTop rvcpu1 if_stall_req", false,-1);
        tracep->declQuad(c+65,"SocTop rvcpu1 if_id_pc", false,-1, 63,0);
        tracep->declBus(c+67,"SocTop rvcpu1 if_id_inst", false,-1, 31,0);
        tracep->declBit(c+68,"SocTop rvcpu1 ex_flush", false,-1);
        tracep->declQuad(c+669,"SocTop rvcpu1 ex_id_rd_data", false,-1, 63,0);
        tracep->declBus(c+69,"SocTop rvcpu1 ex_id_rd_addr", false,-1, 4,0);
        tracep->declBit(c+70,"SocTop rvcpu1 ex_id_rd_ena", false,-1);
        tracep->declBus(c+71,"SocTop rvcpu1 ex_id_rd_type", false,-1, 7,0);
        tracep->declBus(c+72,"SocTop rvcpu1 ex_mem_sel", false,-1, 2,0);
        tracep->declQuad(c+73,"SocTop rvcpu1 ex_mem_addr", false,-1, 63,0);
        tracep->declBit(c+68,"SocTop rvcpu1 ex_pc_branchena", false,-1);
        tracep->declQuad(c+75,"SocTop rvcpu1 ex_pc_branchpc", false,-1, 63,0);
        tracep->declBit(c+77,"SocTop rvcpu1 ex_ctrl_req", false,-1);
        tracep->declBus(c+671,"SocTop rvcpu1 id_reg_addr1", false,-1, 4,0);
        tracep->declBit(c+672,"SocTop rvcpu1 id_reg_ena1", false,-1);
        tracep->declBus(c+673,"SocTop rvcpu1 id_reg_addr2", false,-1, 4,0);
        tracep->declBit(c+674,"SocTop rvcpu1 id_reg_ena2", false,-1);
        tracep->declBit(c+675,"SocTop rvcpu1 id_ctrl_req", false,-1);
        tracep->declBus(c+676,"SocTop rvcpu1 id_ex_type", false,-1, 7,0);
        tracep->declBus(c+677,"SocTop rvcpu1 id_ex_opcode", false,-1, 7,0);
        tracep->declQuad(c+678,"SocTop rvcpu1 id_ex_op", false,-1, 63,0);
        tracep->declQuad(c+890,"SocTop rvcpu1 id_ex_op2", false,-1, 63,0);
        tracep->declBit(c+680,"SocTop rvcpu1 id_ex_rd_ena", false,-1);
        tracep->declBus(c+440,"SocTop rvcpu1 id_ex_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+892,"SocTop rvcpu1 id_ex_pc", false,-1, 63,0);
        tracep->declBus(c+441,"SocTop rvcpu1 id_ex_s_offset", false,-1, 11,0);
        tracep->declBus(c+894,"SocTop rvcpu1 id_ex_memsel", false,-1, 2,0);
        tracep->declQuad(c+442,"SocTop rvcpu1 id_pip_jalrpc", false,-1, 63,0);
        tracep->declBit(c+681,"SocTop rvcpu1 id_pip_jalrena", false,-1);
        tracep->declBit(c+682,"SocTop rvcpu1 id_if_flush", false,-1);
        tracep->declBus(c+683,"SocTop rvcpu1 stall_ctrl", false,-1, 4,0);
        tracep->declQuad(c+895,"SocTop rvcpu1 regs_id_data1", false,-1, 63,0);
        tracep->declQuad(c+897,"SocTop rvcpu1 regs_id_data2", false,-1, 63,0);
        tracep->declQuad(c+684,"SocTop rvcpu1 mem_id_data", false,-1, 63,0);
        tracep->declBus(c+78,"SocTop rvcpu1 mem_id_addr", false,-1, 4,0);
        tracep->declBit(c+79,"SocTop rvcpu1 mem_id_ena", false,-1);
        tracep->declBit(c+686,"SocTop rvcpu1 mem_ctrl_req", false,-1);
        tracep->declBus(c+80,"SocTop rvcpu1 wb_id_addr", false,-1, 4,0);
        tracep->declBit(c+81,"SocTop rvcpu1 wb_id_ena", false,-1);
        tracep->declQuad(c+82,"SocTop rvcpu1 wb_regfile_data", false,-1, 63,0);
        tracep->declQuad(c+84,"SocTop rvcpu1 idex_ex_pc", false,-1, 63,0);
        tracep->declBus(c+86,"SocTop rvcpu1 idex_ex_type", false,-1, 7,0);
        tracep->declBus(c+87,"SocTop rvcpu1 idex_ex_opcode", false,-1, 7,0);
        tracep->declQuad(c+88,"SocTop rvcpu1 idex_ex_op1", false,-1, 63,0);
        tracep->declQuad(c+90,"SocTop rvcpu1 idex_ex_op2", false,-1, 63,0);
        tracep->declBit(c+92,"SocTop rvcpu1 idex_ex_rdena", false,-1);
        tracep->declBus(c+69,"SocTop rvcpu1 idex_ex_rdaddr", false,-1, 4,0);
        tracep->declBus(c+93,"SocTop rvcpu1 idex_ex_offset", false,-1, 11,0);
        tracep->declBus(c+72,"SocTop rvcpu1 idex_ex_sel", false,-1, 2,0);
        tracep->declBus(c+94,"SocTop rvcpu1 exmem_mem_type", false,-1, 7,0);
        tracep->declBit(c+79,"SocTop rvcpu1 exmem_mem_ena", false,-1);
        tracep->declQuad(c+95,"SocTop rvcpu1 exmem_mem_data", false,-1, 63,0);
        tracep->declBus(c+78,"SocTop rvcpu1 exmem_mem_addr", false,-1, 4,0);
        tracep->declBus(c+97,"SocTop rvcpu1 exmem_mem_sel", false,-1, 2,0);
        tracep->declQuad(c+98,"SocTop rvcpu1 exmem_mem_lsaddr", false,-1, 63,0);
        tracep->declQuad(c+899,"SocTop rvcpu1 ex_ex_mem_pc", false,-1, 63,0);
        tracep->declQuad(c+100,"SocTop rvcpu1 ex_mem_mem_pc", false,-1, 63,0);
        tracep->declQuad(c+687,"SocTop rvcpu1 mem_mem_wb_pc", false,-1, 63,0);
        tracep->declBus(c+901,"SocTop rvcpu1 id_id_ex_inst", false,-1, 31,0);
        tracep->declBus(c+102,"SocTop rvcpu1 id_ex_ex_inst", false,-1, 31,0);
        tracep->declBus(c+902,"SocTop rvcpu1 ex_ex_mem_inst", false,-1, 31,0);
        tracep->declBus(c+103,"SocTop rvcpu1 ex_mem_mem_inst", false,-1, 31,0);
        tracep->declBus(c+689,"SocTop rvcpu1 mem_mem_wb_inst", false,-1, 31,0);
        tracep->declBit(c+855,"SocTop rvcpu1 pip_fore0 rst", false,-1);
        tracep->declQuad(c+3,"SocTop rvcpu1 pip_fore0 pc_i", false,-1, 63,0);
        tracep->declBus(c+509,"SocTop rvcpu1 pip_fore0 inst", false,-1, 31,0);
        tracep->declQuad(c+884,"SocTop rvcpu1 pip_fore0 x1_data", false,-1, 63,0);
        tracep->declQuad(c+887,"SocTop rvcpu1 pip_fore0 pc_o", false,-1, 63,0);
        tracep->declBus(c+668,"SocTop rvcpu1 pip_fore0 x1_addr", false,-1, 4,0);
        tracep->declBit(c+886,"SocTop rvcpu1 pip_fore0 x1_ena", false,-1);
        tracep->declBus(c+690,"SocTop rvcpu1 pip_fore0 j_imm", false,-1, 20,1);
        tracep->declBus(c+691,"SocTop rvcpu1 pip_fore0 i_imm", false,-1, 11,0);
        tracep->declBus(c+692,"SocTop rvcpu1 pip_fore0 b_imm", false,-1, 12,1);
        tracep->declBus(c+693,"SocTop rvcpu1 pip_fore0 opcode", false,-1, 6,0);
        tracep->declBit(c+694,"SocTop rvcpu1 pip_fore0 inst_jal", false,-1);
        tracep->declBit(c+695,"SocTop rvcpu1 pip_fore0 inst_jalr", false,-1);
        tracep->declBit(c+696,"SocTop rvcpu1 pip_fore0 inst_bxx", false,-1);
        tracep->declQuad(c+903,"SocTop rvcpu1 pip_fore0 operand1", false,-1, 63,0);
        tracep->declQuad(c+905,"SocTop rvcpu1 pip_fore0 operand2", false,-1, 63,0);
        tracep->declQuad(c+697,"SocTop rvcpu1 pip_fore0 j_pc", false,-1, 63,0);
        tracep->declBit(c+854,"SocTop rvcpu1 pc1 clk", false,-1);
        tracep->declBit(c+855,"SocTop rvcpu1 pc1 rst", false,-1);
        tracep->declQuad(c+887,"SocTop rvcpu1 pc1 static_pc_i", false,-1, 63,0);
        tracep->declQuad(c+442,"SocTop rvcpu1 pc1 id_pc_i", false,-1, 63,0);
        tracep->declBit(c+681,"SocTop rvcpu1 pc1 id_pc_ena", false,-1);
        tracep->declQuad(c+75,"SocTop rvcpu1 pc1 ex_pc_i", false,-1, 63,0);
        tracep->declBit(c+68,"SocTop rvcpu1 pc1 ex_pc_ena", false,-1);
        tracep->declBus(c+683,"SocTop rvcpu1 pc1 stall_ctrl", false,-1, 4,0);
        tracep->declQuad(c+3,"SocTop rvcpu1 pc1 pc", false,-1, 63,0);
        tracep->declBit(c+104,"SocTop rvcpu1 pc1 ex_pc_change", false,-1);
        tracep->declBit(c+105,"SocTop rvcpu1 pc1 id_pc_change", false,-1);
        tracep->declQuad(c+106,"SocTop rvcpu1 pc1 pc_ex", false,-1, 63,0);
        tracep->declQuad(c+108,"SocTop rvcpu1 pc1 pc_id", false,-1, 63,0);
        tracep->declBit(c+854,"SocTop rvcpu1 if_id2 clk", false,-1);
        tracep->declBit(c+855,"SocTop rvcpu1 if_id2 rst", false,-1);
        tracep->declQuad(c+3,"SocTop rvcpu1 if_id2 if_pc", false,-1, 63,0);
        tracep->declBus(c+509,"SocTop rvcpu1 if_id2 if_inst", false,-1, 31,0);
        tracep->declBit(c+68,"SocTop rvcpu1 if_id2 if_id_flush", false,-1);
        tracep->declBit(c+682,"SocTop rvcpu1 if_id2 if_id_bubble", false,-1);
        tracep->declBit(c+510,"SocTop rvcpu1 if_id2 if_inst_valid", false,-1);
        tracep->declBit(c+874,"SocTop rvcpu1 if_id2 if_inst_ready", false,-1);
        tracep->declBit(c+493,"SocTop rvcpu1 if_id2 if_inst_stall", false,-1);
        tracep->declBus(c+683,"SocTop rvcpu1 if_id2 stall_ctrl", false,-1, 4,0);
        tracep->declBit(c+686,"SocTop rvcpu1 if_id2 mem_stall_sign", false,-1);
        tracep->declBit(c+77,"SocTop rvcpu1 if_id2 ex_stall_sign", false,-1);
        tracep->declBit(c+675,"SocTop rvcpu1 if_id2 id_stall_sign", false,-1);
        tracep->declBit(c+889,"SocTop rvcpu1 if_id2 if_unstall_req", false,-1);
        tracep->declQuad(c+65,"SocTop rvcpu1 if_id2 id_pc", false,-1, 63,0);
        tracep->declBus(c+67,"SocTop rvcpu1 if_id2 id_inst", false,-1, 31,0);
        tracep->declBit(c+110,"SocTop rvcpu1 if_id2 fl_bub_temp", false,-1);
        tracep->declBit(c+855,"SocTop rvcpu1 id3 rst", false,-1);
        tracep->declBus(c+67,"SocTop rvcpu1 id3 inst_i", false,-1, 31,0);
        tracep->declQuad(c+65,"SocTop rvcpu1 id3 pc_i", false,-1, 63,0);
        tracep->declQuad(c+895,"SocTop rvcpu1 id3 op1_data_i", false,-1, 63,0);
        tracep->declQuad(c+897,"SocTop rvcpu1 id3 op2_data_i", false,-1, 63,0);
        tracep->declBus(c+671,"SocTop rvcpu1 id3 op1_addr_o", false,-1, 4,0);
        tracep->declBus(c+673,"SocTop rvcpu1 id3 op2_addr_o", false,-1, 4,0);
        tracep->declBit(c+672,"SocTop rvcpu1 id3 op1_read_o", false,-1);
        tracep->declBit(c+674,"SocTop rvcpu1 id3 op2_read_o", false,-1);
        tracep->declQuad(c+669,"SocTop rvcpu1 id3 ex_rd_data", false,-1, 63,0);
        tracep->declBus(c+69,"SocTop rvcpu1 id3 ex_rd_addr", false,-1, 4,0);
        tracep->declBit(c+70,"SocTop rvcpu1 id3 ex_rd_ena", false,-1);
        tracep->declBus(c+71,"SocTop rvcpu1 id3 ex_inst_type", false,-1, 7,0);
        tracep->declQuad(c+684,"SocTop rvcpu1 id3 mem_rd_data", false,-1, 63,0);
        tracep->declBus(c+78,"SocTop rvcpu1 id3 mem_rd_addr", false,-1, 4,0);
        tracep->declBit(c+79,"SocTop rvcpu1 id3 mem_rd_ena", false,-1);
        tracep->declBit(c+81,"SocTop rvcpu1 id3 wb_rd_ena", false,-1);
        tracep->declBus(c+80,"SocTop rvcpu1 id3 wb_rd_addr", false,-1, 4,0);
        tracep->declBit(c+675,"SocTop rvcpu1 id3 id_stall_req", false,-1);
        tracep->declBus(c+676,"SocTop rvcpu1 id3 inst_type", false,-1, 7,0);
        tracep->declBus(c+677,"SocTop rvcpu1 id3 inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+678,"SocTop rvcpu1 id3 op1_o", false,-1, 63,0);
        tracep->declQuad(c+890,"SocTop rvcpu1 id3 op2_o", false,-1, 63,0);
        tracep->declBit(c+680,"SocTop rvcpu1 id3 rd_w_ena", false,-1);
        tracep->declBus(c+440,"SocTop rvcpu1 id3 rd_w_addr", false,-1, 4,0);
        tracep->declQuad(c+892,"SocTop rvcpu1 id3 pc_o", false,-1, 63,0);
        tracep->declBus(c+901,"SocTop rvcpu1 id3 inst_o", false,-1, 31,0);
        tracep->declBus(c+441,"SocTop rvcpu1 id3 store_addr_offset", false,-1, 11,0);
        tracep->declBus(c+894,"SocTop rvcpu1 id3 mem_op_sel", false,-1, 2,0);
        tracep->declBit(c+681,"SocTop rvcpu1 id3 jalr_pc_ena", false,-1);
        tracep->declQuad(c+442,"SocTop rvcpu1 id3 jalr_pc", false,-1, 63,0);
        tracep->declBit(c+682,"SocTop rvcpu1 id3 id_flush", false,-1);
        tracep->declBus(c+111,"SocTop rvcpu1 id3 opcode", false,-1, 6,0);
        tracep->declBus(c+112,"SocTop rvcpu1 id3 rd", false,-1, 4,0);
        tracep->declBus(c+113,"SocTop rvcpu1 id3 funct3", false,-1, 2,0);
        tracep->declBus(c+699,"SocTop rvcpu1 id3 rs1", false,-1, 4,0);
        tracep->declBus(c+114,"SocTop rvcpu1 id3 imm", false,-1, 11,0);
        tracep->declBus(c+115,"SocTop rvcpu1 id3 funct7", false,-1, 6,0);
        tracep->declBus(c+116,"SocTop rvcpu1 id3 rs2", false,-1, 4,0);
        tracep->declBus(c+117,"SocTop rvcpu1 id3 u_imm", false,-1, 19,0);
        tracep->declBus(c+118,"SocTop rvcpu1 id3 s_imm", false,-1, 11,0);
        tracep->declBit(c+700,"SocTop rvcpu1 id3 inst_lui", false,-1);
        tracep->declBit(c+701,"SocTop rvcpu1 id3 inst_auipc", false,-1);
        tracep->declBit(c+702,"SocTop rvcpu1 id3 inst_jal", false,-1);
        tracep->declBit(c+703,"SocTop rvcpu1 id3 inst_jalr", false,-1);
        tracep->declBit(c+704,"SocTop rvcpu1 id3 inst_jump", false,-1);
        tracep->declBit(c+444,"SocTop rvcpu1 id3 inst_addi", false,-1);
        tracep->declBit(c+445,"SocTop rvcpu1 id3 inst_slti", false,-1);
        tracep->declBit(c+446,"SocTop rvcpu1 id3 inst_sltiu", false,-1);
        tracep->declBit(c+447,"SocTop rvcpu1 id3 inst_xori", false,-1);
        tracep->declBit(c+448,"SocTop rvcpu1 id3 inst_ori", false,-1);
        tracep->declBit(c+449,"SocTop rvcpu1 id3 inst_andi", false,-1);
        tracep->declBit(c+450,"SocTop rvcpu1 id3 inst_slli", false,-1);
        tracep->declBit(c+451,"SocTop rvcpu1 id3 inst_srli", false,-1);
        tracep->declBit(c+705,"SocTop rvcpu1 id3 inst_srai", false,-1);
        tracep->declBit(c+706,"SocTop rvcpu1 id3 inst_addiw", false,-1);
        tracep->declBit(c+707,"SocTop rvcpu1 id3 inst_slliw", false,-1);
        tracep->declBit(c+708,"SocTop rvcpu1 id3 inst_srliw", false,-1);
        tracep->declBit(c+709,"SocTop rvcpu1 id3 inst_sraiw", false,-1);
        tracep->declBit(c+710,"SocTop rvcpu1 id3 inst_add", false,-1);
        tracep->declBit(c+711,"SocTop rvcpu1 id3 inst_sub", false,-1);
        tracep->declBit(c+712,"SocTop rvcpu1 id3 inst_sll", false,-1);
        tracep->declBit(c+713,"SocTop rvcpu1 id3 inst_slt", false,-1);
        tracep->declBit(c+714,"SocTop rvcpu1 id3 inst_sltu", false,-1);
        tracep->declBit(c+715,"SocTop rvcpu1 id3 inst_xor", false,-1);
        tracep->declBit(c+716,"SocTop rvcpu1 id3 inst_srl", false,-1);
        tracep->declBit(c+717,"SocTop rvcpu1 id3 inst_sra", false,-1);
        tracep->declBit(c+718,"SocTop rvcpu1 id3 inst_or", false,-1);
        tracep->declBit(c+719,"SocTop rvcpu1 id3 inst_and", false,-1);
        tracep->declBit(c+720,"SocTop rvcpu1 id3 inst_div", false,-1);
        tracep->declBit(c+721,"SocTop rvcpu1 id3 inst_divu", false,-1);
        tracep->declBit(c+722,"SocTop rvcpu1 id3 inst_mul", false,-1);
        tracep->declBit(c+723,"SocTop rvcpu1 id3 inst_mulh", false,-1);
        tracep->declBit(c+724,"SocTop rvcpu1 id3 inst_mulhsu", false,-1);
        tracep->declBit(c+725,"SocTop rvcpu1 id3 inst_mulhu", false,-1);
        tracep->declBit(c+726,"SocTop rvcpu1 id3 inst_rem", false,-1);
        tracep->declBit(c+727,"SocTop rvcpu1 id3 inst_remu", false,-1);
        tracep->declBit(c+728,"SocTop rvcpu1 id3 inst_addw", false,-1);
        tracep->declBit(c+729,"SocTop rvcpu1 id3 inst_subw", false,-1);
        tracep->declBit(c+730,"SocTop rvcpu1 id3 inst_sllw", false,-1);
        tracep->declBit(c+731,"SocTop rvcpu1 id3 inst_srlw", false,-1);
        tracep->declBit(c+732,"SocTop rvcpu1 id3 inst_sraw", false,-1);
        tracep->declBit(c+733,"SocTop rvcpu1 id3 inst_divuw", false,-1);
        tracep->declBit(c+734,"SocTop rvcpu1 id3 inst_divw", false,-1);
        tracep->declBit(c+735,"SocTop rvcpu1 id3 inst_mulw", false,-1);
        tracep->declBit(c+736,"SocTop rvcpu1 id3 inst_remuw", false,-1);
        tracep->declBit(c+737,"SocTop rvcpu1 id3 inst_remw", false,-1);
        tracep->declBit(c+452,"SocTop rvcpu1 id3 inst_beq", false,-1);
        tracep->declBit(c+453,"SocTop rvcpu1 id3 inst_ben", false,-1);
        tracep->declBit(c+454,"SocTop rvcpu1 id3 inst_blt", false,-1);
        tracep->declBit(c+455,"SocTop rvcpu1 id3 inst_bge", false,-1);
        tracep->declBit(c+456,"SocTop rvcpu1 id3 inst_bltu", false,-1);
        tracep->declBit(c+457,"SocTop rvcpu1 id3 inst_bgeu", false,-1);
        tracep->declBit(c+738,"SocTop rvcpu1 id3 inst_csrrw", false,-1);
        tracep->declBit(c+739,"SocTop rvcpu1 id3 inst_csrrs", false,-1);
        tracep->declBit(c+740,"SocTop rvcpu1 id3 inst_csrrc", false,-1);
        tracep->declBit(c+741,"SocTop rvcpu1 id3 inst_csrrwi", false,-1);
        tracep->declBit(c+458,"SocTop rvcpu1 id3 inst_csrrsi", false,-1);
        tracep->declBit(c+459,"SocTop rvcpu1 id3 inst_csrrci", false,-1);
        tracep->declBit(c+742,"SocTop rvcpu1 id3 inst_csr_rs1", false,-1);
        tracep->declBit(c+741,"SocTop rvcpu1 id3 inst_csr_imm", false,-1);
        tracep->declBit(c+460,"SocTop rvcpu1 id3 inst_ecall", false,-1);
        tracep->declBit(c+743,"SocTop rvcpu1 id3 inst_ebreak", false,-1);
        tracep->declBit(c+461,"SocTop rvcpu1 id3 inst_mret", false,-1);
        tracep->declBit(c+907,"SocTop rvcpu1 id3 op1_loda_relate", false,-1);
        tracep->declBit(c+908,"SocTop rvcpu1 id3 op2_loda_relate", false,-1);
        tracep->declBit(c+744,"SocTop rvcpu1 id3 ex_op1", false,-1);
        tracep->declBit(c+745,"SocTop rvcpu1 id3 mem_op1", false,-1);
        tracep->declBit(c+462,"SocTop rvcpu1 id3 ex_op2", false,-1);
        tracep->declBit(c+463,"SocTop rvcpu1 id3 mem_op2", false,-1);
        tracep->declBit(c+464,"SocTop rvcpu1 id3 wb_op1", false,-1);
        tracep->declQuad(c+465,"SocTop rvcpu1 id3 jalr_pc_temp", false,-1, 63,0);
        tracep->declBit(c+467,"SocTop rvcpu1 id3 predict_success", false,-1);
        tracep->declBit(c+854,"SocTop rvcpu1 id_ex4 clk", false,-1);
        tracep->declBit(c+855,"SocTop rvcpu1 id_ex4 rst", false,-1);
        tracep->declBit(c+68,"SocTop rvcpu1 id_ex4 id_ex_bubble", false,-1);
        tracep->declBus(c+683,"SocTop rvcpu1 id_ex4 stall_ctrl", false,-1, 4,0);
        tracep->declBus(c+901,"SocTop rvcpu1 id_ex4 id_inst", false,-1, 31,0);
        tracep->declQuad(c+892,"SocTop rvcpu1 id_ex4 id_pc", false,-1, 63,0);
        tracep->declBus(c+676,"SocTop rvcpu1 id_ex4 id_inst_type", false,-1, 7,0);
        tracep->declBus(c+677,"SocTop rvcpu1 id_ex4 id_inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+678,"SocTop rvcpu1 id_ex4 id_op1", false,-1, 63,0);
        tracep->declQuad(c+890,"SocTop rvcpu1 id_ex4 id_op2", false,-1, 63,0);
        tracep->declBit(c+680,"SocTop rvcpu1 id_ex4 id_rd_ena", false,-1);
        tracep->declBus(c+440,"SocTop rvcpu1 id_ex4 id_rd_addr", false,-1, 4,0);
        tracep->declBus(c+441,"SocTop rvcpu1 id_ex4 id_addr_offset", false,-1, 11,0);
        tracep->declBus(c+894,"SocTop rvcpu1 id_ex4 id_ls_sel", false,-1, 2,0);
        tracep->declBus(c+102,"SocTop rvcpu1 id_ex4 ex_inst", false,-1, 31,0);
        tracep->declQuad(c+84,"SocTop rvcpu1 id_ex4 ex_pc", false,-1, 63,0);
        tracep->declBus(c+86,"SocTop rvcpu1 id_ex4 ex_inst_type", false,-1, 7,0);
        tracep->declBus(c+87,"SocTop rvcpu1 id_ex4 ex_inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+88,"SocTop rvcpu1 id_ex4 ex_op1", false,-1, 63,0);
        tracep->declQuad(c+90,"SocTop rvcpu1 id_ex4 ex_op2", false,-1, 63,0);
        tracep->declBit(c+92,"SocTop rvcpu1 id_ex4 ex_rd_ena", false,-1);
        tracep->declBus(c+69,"SocTop rvcpu1 id_ex4 ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+93,"SocTop rvcpu1 id_ex4 ex_addr_offset", false,-1, 11,0);
        tracep->declBus(c+72,"SocTop rvcpu1 id_ex4 ex_ls_sel", false,-1, 2,0);
        tracep->declBit(c+854,"SocTop rvcpu1 ex5 clk", false,-1);
        tracep->declBit(c+855,"SocTop rvcpu1 ex5 rst", false,-1);
        tracep->declQuad(c+84,"SocTop rvcpu1 ex5 pc_i", false,-1, 63,0);
        tracep->declBus(c+102,"SocTop rvcpu1 ex5 id_ex_inst", false,-1, 31,0);
        tracep->declBus(c+86,"SocTop rvcpu1 ex5 inst_type_i", false,-1, 7,0);
        tracep->declBus(c+87,"SocTop rvcpu1 ex5 inst_opcode_i", false,-1, 7,0);
        tracep->declQuad(c+88,"SocTop rvcpu1 ex5 op1_i", false,-1, 63,0);
        tracep->declQuad(c+90,"SocTop rvcpu1 ex5 op2_i", false,-1, 63,0);
        tracep->declBit(c+92,"SocTop rvcpu1 ex5 rd_ena_i", false,-1);
        tracep->declBus(c+69,"SocTop rvcpu1 ex5 rd_addr_i", false,-1, 4,0);
        tracep->declBus(c+72,"SocTop rvcpu1 ex5 ls_sel_i", false,-1, 2,0);
        tracep->declBus(c+93,"SocTop rvcpu1 ex5 addr_offsel_i", false,-1, 11,0);
        tracep->declBus(c+71,"SocTop rvcpu1 ex5 inst_type_o", false,-1, 7,0);
        tracep->declBit(c+70,"SocTop rvcpu1 ex5 rd_ena_o", false,-1);
        tracep->declBus(c+69,"SocTop rvcpu1 ex5 rd_addr_o", false,-1, 4,0);
        tracep->declQuad(c+669,"SocTop rvcpu1 ex5 rd_data_o", false,-1, 63,0);
        tracep->declQuad(c+899,"SocTop rvcpu1 ex5 ex_pc_o", false,-1, 63,0);
        tracep->declBus(c+902,"SocTop rvcpu1 ex5 ex_inst_o", false,-1, 31,0);
        tracep->declBus(c+72,"SocTop rvcpu1 ex5 ls_sel_o", false,-1, 2,0);
        tracep->declQuad(c+73,"SocTop rvcpu1 ex5 ls_addr_o", false,-1, 63,0);
        tracep->declBit(c+68,"SocTop rvcpu1 ex5 ex_flush", false,-1);
        tracep->declBit(c+68,"SocTop rvcpu1 ex5 branch_pc_ena", false,-1);
        tracep->declQuad(c+75,"SocTop rvcpu1 ex5 branch_pc", false,-1, 63,0);
        tracep->declBit(c+77,"SocTop rvcpu1 ex5 ex_stall_req", false,-1);
        tracep->declBit(c+16,"SocTop rvcpu1 ex5 timer_intr", false,-1);
        tracep->declBit(c+746,"SocTop rvcpu1 ex5 ex_stall", false,-1);
        tracep->declQuad(c+747,"SocTop rvcpu1 ex5 exe_res", false,-1, 63,0);
        tracep->declQuad(c+119,"SocTop rvcpu1 ex5 op2_i_mux", false,-1, 63,0);
        tracep->declQuad(c+121,"SocTop rvcpu1 ex5 op1_sub_op2", false,-1, 63,0);
        tracep->declQuad(c+123,"SocTop rvcpu1 ex5 op1_add_op2", false,-1, 63,0);
        tracep->declQuad(c+125,"SocTop rvcpu1 ex5 op1_addw_op2", false,-1, 63,0);
        tracep->declBit(c+127,"SocTop rvcpu1 ex5 op1_ls_op2", false,-1);
        tracep->declQuad(c+128,"SocTop rvcpu1 ex5 shift_res", false,-1, 63,0);
        tracep->declBus(c+130,"SocTop rvcpu1 ex5 op1_sllw_op2", false,-1, 31,0);
        tracep->declQuad(c+131,"SocTop rvcpu1 ex5 sllw_res", false,-1, 63,0);
        tracep->declBus(c+133,"SocTop rvcpu1 ex5 op1_srlw_op2", false,-1, 31,0);
        tracep->declQuad(c+134,"SocTop rvcpu1 ex5 srlw_res", false,-1, 63,0);
        tracep->declBus(c+136,"SocTop rvcpu1 ex5 op1_sraw_op2", false,-1, 31,0);
        tracep->declQuad(c+137,"SocTop rvcpu1 ex5 sraw_res", false,-1, 63,0);
        tracep->declBus(c+139,"SocTop rvcpu1 ex5 op1_subw_op2", false,-1, 31,0);
        tracep->declQuad(c+140,"SocTop rvcpu1 ex5 subw_res", false,-1, 63,0);
        tracep->declQuad(c+142,"SocTop rvcpu1 ex5 upper_imm", false,-1, 63,0);
        tracep->declBit(c+854,"SocTop rvcpu1 ex5 clk_in", false,-1);
        tracep->declQuad(c+144,"SocTop rvcpu1 ex5 mul_data", false,-1, 63,0);
        tracep->declBit(c+146,"SocTop rvcpu1 ex5 mul_finish_sign", false,-1);
        tracep->declBit(c+147,"SocTop rvcpu1 ex5 mul_ready", false,-1);
        tracep->declQuad(c+749,"SocTop rvcpu1 ex5 divrem_data", false,-1, 63,0);
        tracep->declBit(c+148,"SocTop rvcpu1 ex5 dr_finish_sign", false,-1);
        tracep->declBit(c+149,"SocTop rvcpu1 ex5 dr_ready", false,-1);
        tracep->declQuad(c+150,"SocTop rvcpu1 ex5 op1_divdata", false,-1, 63,0);
        tracep->declQuad(c+152,"SocTop rvcpu1 ex5 op2_divdata", false,-1, 63,0);
        tracep->declBit(c+77,"SocTop rvcpu1 ex5 mul_div_req", false,-1);
        tracep->declBit(c+154,"SocTop rvcpu1 ex5 ex_flush_branch", false,-1);
        tracep->declBit(c+155,"SocTop rvcpu1 ex5 tmr_trap_ena", false,-1);
        tracep->declBus(c+156,"SocTop rvcpu1 ex5 csr_idx", false,-1, 11,0);
        tracep->declQuad(c+157,"SocTop rvcpu1 ex5 read_csr_data", false,-1, 63,0);
        tracep->declBit(c+159,"SocTop rvcpu1 ex5 trap_ena", false,-1);
        tracep->declBit(c+160,"SocTop rvcpu1 ex5 ecall_trap_ena", false,-1);
        tracep->declBit(c+161,"SocTop rvcpu1 ex5 cmt_mret_ena", false,-1);
        tracep->declBit(c+162,"SocTop rvcpu1 ex5 csr_wr_en", false,-1);
        tracep->declBit(c+163,"SocTop rvcpu1 ex5 csr_rd_en", false,-1);
        tracep->declQuad(c+164,"SocTop rvcpu1 ex5 wbck_csr_data", false,-1, 63,0);
        tracep->declQuad(c+166,"SocTop rvcpu1 ex5 trap_mcause_value", false,-1, 63,0);
        tracep->declQuad(c+168,"SocTop rvcpu1 ex5 mask_set_res", false,-1, 63,0);
        tracep->declQuad(c+170,"SocTop rvcpu1 ex5 mask_clear_res", false,-1, 63,0);
        tracep->declBit(c+854,"SocTop rvcpu1 ex5 multiplier1 clk", false,-1);
        tracep->declBit(c+855,"SocTop rvcpu1 ex5 multiplier1 rst", false,-1);
        tracep->declBit(c+147,"SocTop rvcpu1 ex5 multiplier1 mult_ready", false,-1);
        tracep->declBus(c+87,"SocTop rvcpu1 ex5 multiplier1 inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+88,"SocTop rvcpu1 ex5 multiplier1 mult_op1", false,-1, 63,0);
        tracep->declQuad(c+90,"SocTop rvcpu1 ex5 multiplier1 mult_op2", false,-1, 63,0);
        tracep->declQuad(c+144,"SocTop rvcpu1 ex5 multiplier1 product_val", false,-1, 63,0);
        tracep->declBit(c+146,"SocTop rvcpu1 ex5 multiplier1 mult_finish", false,-1);
        tracep->declBit(c+172,"SocTop rvcpu1 ex5 multiplier1 mult_valid", false,-1);
        tracep->declBit(c+173,"SocTop rvcpu1 ex5 multiplier1 op1_signbit", false,-1);
        tracep->declBit(c+174,"SocTop rvcpu1 ex5 multiplier1 op2_signbit", false,-1);
        tracep->declQuad(c+175,"SocTop rvcpu1 ex5 multiplier1 op1_absolute", false,-1, 63,0);
        tracep->declQuad(c+177,"SocTop rvcpu1 ex5 multiplier1 op2_absolute", false,-1, 63,0);
        tracep->declArray(c+179,"SocTop rvcpu1 ex5 multiplier1 multiplcand", false,-1, 127,0);
        tracep->declQuad(c+183,"SocTop rvcpu1 ex5 multiplier1 multipler", false,-1, 63,0);
        tracep->declArray(c+185,"SocTop rvcpu1 ex5 multiplier1 product_lins", false,-1, 127,0);
        tracep->declArray(c+189,"SocTop rvcpu1 ex5 multiplier1 product_temp", false,-1, 127,0);
        tracep->declBit(c+193,"SocTop rvcpu1 ex5 multiplier1 product_signbit", false,-1);
        tracep->declBit(c+854,"SocTop rvcpu1 ex5 divider2 clk", false,-1);
        tracep->declBit(c+855,"SocTop rvcpu1 ex5 divider2 rst", false,-1);
        tracep->declQuad(c+152,"SocTop rvcpu1 ex5 divider2 diviser", false,-1, 63,0);
        tracep->declQuad(c+150,"SocTop rvcpu1 ex5 divider2 dividend", false,-1, 63,0);
        tracep->declBus(c+87,"SocTop rvcpu1 ex5 divider2 inst_opcode", false,-1, 7,0);
        tracep->declBit(c+149,"SocTop rvcpu1 ex5 divider2 div_ready", false,-1);
        tracep->declQuad(c+749,"SocTop rvcpu1 ex5 divider2 div_rem_data", false,-1, 63,0);
        tracep->declBit(c+148,"SocTop rvcpu1 ex5 divider2 div_finish", false,-1);
        tracep->declBus(c+194,"SocTop rvcpu1 ex5 divider2 counter", false,-1, 6,0);
        tracep->declBit(c+195,"SocTop rvcpu1 ex5 divider2 sign", false,-1);
        tracep->declQuad(c+196,"SocTop rvcpu1 ex5 divider2 dividend_t", false,-1, 63,0);
        tracep->declQuad(c+198,"SocTop rvcpu1 ex5 divider2 divider_t", false,-1, 63,0);
        tracep->declArray(c+200,"SocTop rvcpu1 ex5 divider2 temp_a", false,-1, 128,0);
        tracep->declArray(c+205,"SocTop rvcpu1 ex5 divider2 temp_b", false,-1, 64,0);
        tracep->declBit(c+148,"SocTop rvcpu1 ex5 divider2 finish", false,-1);
        tracep->declBit(c+208,"SocTop rvcpu1 ex5 divider2 sigin_inst", false,-1);
        tracep->declQuad(c+751,"SocTop rvcpu1 ex5 divider2 yushu", false,-1, 63,0);
        tracep->declQuad(c+753,"SocTop rvcpu1 ex5 divider2 shang", false,-1, 63,0);
        tracep->declBit(c+854,"SocTop rvcpu1 ex5 csr0 clk", false,-1);
        tracep->declBit(c+855,"SocTop rvcpu1 ex5 csr0 rst", false,-1);
        tracep->declQuad(c+84,"SocTop rvcpu1 ex5 csr0 pc_i", false,-1, 63,0);
        tracep->declBit(c+162,"SocTop rvcpu1 ex5 csr0 csr_wr_en", false,-1);
        tracep->declBit(c+163,"SocTop rvcpu1 ex5 csr0 csr_rd_en", false,-1);
        tracep->declBus(c+156,"SocTop rvcpu1 ex5 csr0 csr_idx", false,-1, 11,0);
        tracep->declBit(c+161,"SocTop rvcpu1 ex5 csr0 cmt_mret_ena", false,-1);
        tracep->declBit(c+160,"SocTop rvcpu1 ex5 csr0 ecall_trap_ena", false,-1);
        tracep->declQuad(c+166,"SocTop rvcpu1 ex5 csr0 trap_mcause_value", false,-1, 63,0);
        tracep->declBit(c+16,"SocTop rvcpu1 ex5 csr0 tmr_intr_ena", false,-1);
        tracep->declBit(c+155,"SocTop rvcpu1 ex5 csr0 tmr_trap_ena", false,-1);
        tracep->declQuad(c+157,"SocTop rvcpu1 ex5 csr0 read_csr_data", false,-1, 63,0);
        tracep->declQuad(c+164,"SocTop rvcpu1 ex5 csr0 wbck_csr_data", false,-1, 63,0);
        tracep->declBit(c+746,"SocTop rvcpu1 ex5 csr0 ex_stall", false,-1);
        tracep->declBit(c+209,"SocTop rvcpu1 ex5 csr0 sel_mcycle", false,-1);
        tracep->declBit(c+210,"SocTop rvcpu1 ex5 csr0 rd_mcycle", false,-1);
        tracep->declBit(c+211,"SocTop rvcpu1 ex5 csr0 wr_mcycle", false,-1);
        tracep->declQuad(c+212,"SocTop rvcpu1 ex5 csr0 csr_mcycle", false,-1, 63,0);
        tracep->declBit(c+214,"SocTop rvcpu1 ex5 csr0 sel_mstatus", false,-1);
        tracep->declBit(c+215,"SocTop rvcpu1 ex5 csr0 rd_mstatus", false,-1);
        tracep->declBit(c+216,"SocTop rvcpu1 ex5 csr0 wr_mstatus", false,-1);
        tracep->declBit(c+217,"SocTop rvcpu1 ex5 csr0 mstatus_mpie_ena", false,-1);
        tracep->declBit(c+218,"SocTop rvcpu1 ex5 csr0 mstatus_mpie_nxt", false,-1);
        tracep->declBit(c+219,"SocTop rvcpu1 ex5 csr0 csr_mstatus_mpie", false,-1);
        tracep->declBit(c+217,"SocTop rvcpu1 ex5 csr0 mstatus_mie_ena", false,-1);
        tracep->declBit(c+220,"SocTop rvcpu1 ex5 csr0 mstatus_mie_nxt", false,-1);
        tracep->declBit(c+221,"SocTop rvcpu1 ex5 csr0 csr_mstatus_mie", false,-1);
        tracep->declBit(c+217,"SocTop rvcpu1 ex5 csr0 mstatus_mpp_ena", false,-1);
        tracep->declBus(c+222,"SocTop rvcpu1 ex5 csr0 mstatus_mpp_nxt", false,-1, 1,0);
        tracep->declBus(c+223,"SocTop rvcpu1 ex5 csr0 csr_mstatus_mpp", false,-1, 1,0);
        tracep->declBus(c+922,"SocTop rvcpu1 ex5 csr0 csr_mstatus_xs", false,-1, 1,0);
        tracep->declBus(c+224,"SocTop rvcpu1 ex5 csr0 csr_mstatus_fs", false,-1, 1,0);
        tracep->declBit(c+225,"SocTop rvcpu1 ex5 csr0 csr_mstatus_sd", false,-1);
        tracep->declQuad(c+226,"SocTop rvcpu1 ex5 csr0 csr_mstatus", false,-1, 63,0);
        tracep->declBit(c+228,"SocTop rvcpu1 ex5 csr0 sel_mtvec", false,-1);
        tracep->declBit(c+229,"SocTop rvcpu1 ex5 csr0 rd_mtvec", false,-1);
        tracep->declBit(c+230,"SocTop rvcpu1 ex5 csr0 wr_mtvec", false,-1);
        tracep->declQuad(c+231,"SocTop rvcpu1 ex5 csr0 csr_mtvec_base", false,-1, 63,2);
        tracep->declBus(c+922,"SocTop rvcpu1 ex5 csr0 csr_mtvec_mode", false,-1, 1,0);
        tracep->declQuad(c+233,"SocTop rvcpu1 ex5 csr0 csr_mtvec", false,-1, 63,0);
        tracep->declBit(c+235,"SocTop rvcpu1 ex5 csr0 sel_mepc", false,-1);
        tracep->declBit(c+236,"SocTop rvcpu1 ex5 csr0 rd_mepc", false,-1);
        tracep->declBit(c+237,"SocTop rvcpu1 ex5 csr0 wr_mepc", false,-1);
        tracep->declQuad(c+238,"SocTop rvcpu1 ex5 csr0 csr_mepc", false,-1, 63,0);
        tracep->declBit(c+240,"SocTop rvcpu1 ex5 csr0 sel_mcause", false,-1);
        tracep->declBit(c+241,"SocTop rvcpu1 ex5 csr0 rd_mcause", false,-1);
        tracep->declBit(c+242,"SocTop rvcpu1 ex5 csr0 wr_mcause", false,-1);
        tracep->declBit(c+243,"SocTop rvcpu1 ex5 csr0 csr_mcause_ena", false,-1);
        tracep->declQuad(c+244,"SocTop rvcpu1 ex5 csr0 csr_mcause_nxt", false,-1, 63,0);
        tracep->declQuad(c+246,"SocTop rvcpu1 ex5 csr0 csr_mcause", false,-1, 63,0);
        tracep->declBit(c+248,"SocTop rvcpu1 ex5 csr0 sle_mie", false,-1);
        tracep->declBit(c+249,"SocTop rvcpu1 ex5 csr0 rd_mie", false,-1);
        tracep->declBit(c+250,"SocTop rvcpu1 ex5 csr0 wr_mie", false,-1);
        tracep->declBit(c+251,"SocTop rvcpu1 ex5 csr0 csr_mie_mtie", false,-1);
        tracep->declQuad(c+252,"SocTop rvcpu1 ex5 csr0 csr_mie", false,-1, 63,0);
        tracep->declBit(c+254,"SocTop rvcpu1 ex5 csr0 sel_mip", false,-1);
        tracep->declBit(c+255,"SocTop rvcpu1 ex5 csr0 rd_mip", false,-1);
        tracep->declBit(c+256,"SocTop rvcpu1 ex5 csr0 csr_mip_mtip", false,-1);
        tracep->declQuad(c+257,"SocTop rvcpu1 ex5 csr0 csr_mip", false,-1, 63,0);
        tracep->declBit(c+259,"SocTop rvcpu1 ex5 csr0 sel_mscratch", false,-1);
        tracep->declBit(c+260,"SocTop rvcpu1 ex5 csr0 rd_mscrstch", false,-1);
        tracep->declBit(c+261,"SocTop rvcpu1 ex5 csr0 wr_mscrstch", false,-1);
        tracep->declQuad(c+262,"SocTop rvcpu1 ex5 csr0 csr_mscrstch", false,-1, 63,0);
        tracep->declBit(c+854,"SocTop rvcpu1 ex_mem6 clk", false,-1);
        tracep->declBit(c+855,"SocTop rvcpu1 ex_mem6 rst", false,-1);
        tracep->declQuad(c+899,"SocTop rvcpu1 ex_mem6 ex_mem_pc_i", false,-1, 63,0);
        tracep->declBus(c+902,"SocTop rvcpu1 ex_mem6 ex_mem_inst_i", false,-1, 31,0);
        tracep->declBus(c+683,"SocTop rvcpu1 ex_mem6 stall_ctrl", false,-1, 4,0);
        tracep->declBus(c+71,"SocTop rvcpu1 ex_mem6 ex_inst_type", false,-1, 7,0);
        tracep->declBit(c+70,"SocTop rvcpu1 ex_mem6 ex_rd_ena", false,-1);
        tracep->declQuad(c+669,"SocTop rvcpu1 ex_mem6 ex_rd_data", false,-1, 63,0);
        tracep->declBus(c+69,"SocTop rvcpu1 ex_mem6 ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+72,"SocTop rvcpu1 ex_mem6 ex_ls_sel", false,-1, 2,0);
        tracep->declQuad(c+73,"SocTop rvcpu1 ex_mem6 ex_ls_addr", false,-1, 63,0);
        tracep->declBus(c+94,"SocTop rvcpu1 ex_mem6 mem_inst_type", false,-1, 7,0);
        tracep->declBit(c+79,"SocTop rvcpu1 ex_mem6 mem_rd_ena", false,-1);
        tracep->declQuad(c+95,"SocTop rvcpu1 ex_mem6 mem_rd_data", false,-1, 63,0);
        tracep->declBus(c+78,"SocTop rvcpu1 ex_mem6 mem_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+100,"SocTop rvcpu1 ex_mem6 ex_mem_pc_o", false,-1, 63,0);
        tracep->declBus(c+103,"SocTop rvcpu1 ex_mem6 ex_mem_inst_o", false,-1, 31,0);
        tracep->declBus(c+97,"SocTop rvcpu1 ex_mem6 mem_ls_sel", false,-1, 2,0);
        tracep->declQuad(c+98,"SocTop rvcpu1 ex_mem6 mem_ls_addr", false,-1, 63,0);
        tracep->declBit(c+855,"SocTop rvcpu1 mem7 rst", false,-1);
        tracep->declBus(c+94,"SocTop rvcpu1 mem7 inst_type_i", false,-1, 7,0);
        tracep->declBit(c+79,"SocTop rvcpu1 mem7 rd_ena_i", false,-1);
        tracep->declQuad(c+95,"SocTop rvcpu1 mem7 rd_data_i", false,-1, 63,0);
        tracep->declBus(c+78,"SocTop rvcpu1 mem7 rd_addr_i", false,-1, 4,0);
        tracep->declQuad(c+100,"SocTop rvcpu1 mem7 mem_pc_i", false,-1, 63,0);
        tracep->declBus(c+103,"SocTop rvcpu1 mem7 mem_inst_i", false,-1, 31,0);
        tracep->declQuad(c+98,"SocTop rvcpu1 mem7 ls_addr_i", false,-1, 63,0);
        tracep->declBus(c+97,"SocTop rvcpu1 mem7 ls_sel_i", false,-1, 2,0);
        tracep->declQuad(c+486,"SocTop rvcpu1 mem7 data_addr_o", false,-1, 63,0);
        tracep->declBus(c+488,"SocTop rvcpu1 mem7 wmask_o", false,-1, 7,0);
        tracep->declQuad(c+511,"SocTop rvcpu1 mem7 data_i", false,-1, 63,0);
        tracep->declQuad(c+489,"SocTop rvcpu1 mem7 data_o", false,-1, 63,0);
        tracep->declBit(c+491,"SocTop rvcpu1 mem7 we", false,-1);
        tracep->declBit(c+492,"SocTop rvcpu1 mem7 re", false,-1);
        tracep->declBit(c+434,"SocTop rvcpu1 mem7 mem_finish", false,-1);
        tracep->declBit(c+79,"SocTop rvcpu1 mem7 rd_ena_o", false,-1);
        tracep->declQuad(c+684,"SocTop rvcpu1 mem7 rd_data_o", false,-1, 63,0);
        tracep->declBus(c+78,"SocTop rvcpu1 mem7 rd_addr_o", false,-1, 4,0);
        tracep->declQuad(c+687,"SocTop rvcpu1 mem7 mem_pc_o", false,-1, 63,0);
        tracep->declBus(c+689,"SocTop rvcpu1 mem7 mem_inst_o", false,-1, 31,0);
        tracep->declBit(c+686,"SocTop rvcpu1 mem7 mem_stall_req", false,-1);
        tracep->declQuad(c+468,"SocTop rvcpu1 mem7 load_data", false,-1, 63,0);
        tracep->declBus(c+264,"SocTop rvcpu1 mem7 byte_sel", false,-1, 2,0);
        tracep->declBus(c+265,"SocTop rvcpu1 mem7 half_byte_sel", false,-1, 1,0);
        tracep->declBit(c+266,"SocTop rvcpu1 mem7 word_sel", false,-1);
        tracep->declBus(c+755,"SocTop rvcpu1 mem7 data_byte", false,-1, 7,0);
        tracep->declBus(c+756,"SocTop rvcpu1 mem7 data_half_byte", false,-1, 15,0);
        tracep->declBus(c+757,"SocTop rvcpu1 mem7 data_word", false,-1, 31,0);
        tracep->declQuad(c+758,"SocTop rvcpu1 mem7 store_data", false,-1, 63,0);
        tracep->declBus(c+760,"SocTop rvcpu1 mem7 store_mask", false,-1, 7,0);
        tracep->declQuad(c+909,"SocTop rvcpu1 mem7 sb_data", false,-1, 63,0);
        tracep->declQuad(c+911,"SocTop rvcpu1 mem7 sh_data", false,-1, 63,0);
        tracep->declQuad(c+913,"SocTop rvcpu1 mem7 sw_data", false,-1, 63,0);
        tracep->declBus(c+915,"SocTop rvcpu1 mem7 sb_mask", false,-1, 7,0);
        tracep->declBus(c+916,"SocTop rvcpu1 mem7 sh_mask", false,-1, 7,0);
        tracep->declBus(c+917,"SocTop rvcpu1 mem7 sw_mask", false,-1, 7,0);
        tracep->declBit(c+854,"SocTop rvcpu1 mem_wb8 clk", false,-1);
        tracep->declBit(c+855,"SocTop rvcpu1 mem_wb8 rst", false,-1);
        tracep->declQuad(c+687,"SocTop rvcpu1 mem_wb8 wb_pc_i", false,-1, 63,0);
        tracep->declBus(c+689,"SocTop rvcpu1 mem_wb8 wb_inst_i", false,-1, 31,0);
        tracep->declBus(c+683,"SocTop rvcpu1 mem_wb8 stall_ctrl", false,-1, 4,0);
        tracep->declQuad(c+684,"SocTop rvcpu1 mem_wb8 mem_rd_data", false,-1, 63,0);
        tracep->declBus(c+78,"SocTop rvcpu1 mem_wb8 mem_rd_addr", false,-1, 4,0);
        tracep->declBit(c+79,"SocTop rvcpu1 mem_wb8 mem_rd_ena", false,-1);
        tracep->declQuad(c+82,"SocTop rvcpu1 mem_wb8 wb_rd_data", false,-1, 63,0);
        tracep->declBus(c+80,"SocTop rvcpu1 mem_wb8 wb_rd_addr", false,-1, 4,0);
        tracep->declBit(c+81,"SocTop rvcpu1 mem_wb8 wb_rd_ena", false,-1);
        tracep->declQuad(c+267,"SocTop rvcpu1 mem_wb8 wb_pc_o", false,-1, 63,0);
        tracep->declBus(c+269,"SocTop rvcpu1 mem_wb8 wb_inst_o", false,-1, 31,0);
        tracep->declQuad(c+270,"SocTop rvcpu1 mem_wb8 pc_data1", false,-1, 63,0);
        tracep->declBit(c+272,"SocTop rvcpu1 mem_wb8 difftest_exyn", false,-1);
        tracep->declBit(c+273,"SocTop rvcpu1 mem_wb8 teap_yn", false,-1);
        tracep->declQuad(c+274,"SocTop rvcpu1 mem_wb8 trap_code", false,-1, 63,0);
        tracep->declBit(c+855,"SocTop rvcpu1 ctrl9 rst", false,-1);
        tracep->declBit(c+889,"SocTop rvcpu1 ctrl9 if_stall_req", false,-1);
        tracep->declBit(c+675,"SocTop rvcpu1 ctrl9 id_stall_req", false,-1);
        tracep->declBit(c+77,"SocTop rvcpu1 ctrl9 ex_stall_req", false,-1);
        tracep->declBit(c+686,"SocTop rvcpu1 ctrl9 mem_stall_req", false,-1);
        tracep->declBus(c+683,"SocTop rvcpu1 ctrl9 stall_ctrl", false,-1, 4,0);
        tracep->declBit(c+854,"SocTop rvcpu1 regfile10 clk", false,-1);
        tracep->declBit(c+855,"SocTop rvcpu1 regfile10 rst", false,-1);
        tracep->declBus(c+80,"SocTop rvcpu1 regfile10 waddr", false,-1, 4,0);
        tracep->declQuad(c+82,"SocTop rvcpu1 regfile10 wdata", false,-1, 63,0);
        tracep->declBit(c+81,"SocTop rvcpu1 regfile10 we", false,-1);
        tracep->declBus(c+671,"SocTop rvcpu1 regfile10 raddr1", false,-1, 4,0);
        tracep->declQuad(c+895,"SocTop rvcpu1 regfile10 rdata1", false,-1, 63,0);
        tracep->declBit(c+672,"SocTop rvcpu1 regfile10 re1", false,-1);
        tracep->declBus(c+673,"SocTop rvcpu1 regfile10 raddr2", false,-1, 4,0);
        tracep->declQuad(c+897,"SocTop rvcpu1 regfile10 rdata2", false,-1, 63,0);
        tracep->declBit(c+674,"SocTop rvcpu1 regfile10 re2", false,-1);
        tracep->declBit(c+886,"SocTop rvcpu1 regfile10 x1_read_ena", false,-1);
        tracep->declQuad(c+884,"SocTop rvcpu1 regfile10 x1_data", false,-1, 63,0);
        tracep->declBus(c+668,"SocTop rvcpu1 regfile10 x1_addr", false,-1, 4,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+276+i*2,"SocTop rvcpu1 regfile10 regs", true,(i+0), 63,0);}}
        tracep->declBus(c+340,"SocTop rvcpu1 regfile10 i", false,-1, 31,0);
        tracep->declBus(c+664,"SocTop uncache_mmio7 mmio_sign", false,-1, 2,0);
        tracep->declQuad(c+486,"SocTop uncache_mmio7 core_addr", false,-1, 63,0);
        tracep->declQuad(c+489,"SocTop uncache_mmio7 core_data", false,-1, 63,0);
        tracep->declBus(c+488,"SocTop uncache_mmio7 core_mask", false,-1, 7,0);
        tracep->declBit(c+491,"SocTop uncache_mmio7 core_we", false,-1);
        tracep->declBit(c+492,"SocTop uncache_mmio7 core_re", false,-1);
        tracep->declQuad(c+511,"SocTop uncache_mmio7 in_core_data", false,-1, 63,0);
        tracep->declBit(c+434,"SocTop uncache_mmio7 in_core_finish", false,-1);
        tracep->declQuad(c+496,"SocTop uncache_mmio7 arb_addr", false,-1, 63,0);
        tracep->declQuad(c+494,"SocTop uncache_mmio7 arb_data", false,-1, 63,0);
        tracep->declBus(c+498,"SocTop uncache_mmio7 arb_mask", false,-1, 7,0);
        tracep->declBit(c+499,"SocTop uncache_mmio7 arb_we", false,-1);
        tracep->declBit(c+500,"SocTop uncache_mmio7 arb_re", false,-1);
        tracep->declQuad(c+5,"SocTop uncache_mmio7 in_arb_data", false,-1, 63,0);
        tracep->declBit(c+431,"SocTop uncache_mmio7 in_arb_finish", false,-1);
        tracep->declQuad(c+503,"SocTop uncache_mmio7 dcache_addr", false,-1, 63,0);
        tracep->declQuad(c+501,"SocTop uncache_mmio7 dcache_data", false,-1, 63,0);
        tracep->declBus(c+505,"SocTop uncache_mmio7 dcache_mask", false,-1, 7,0);
        tracep->declBit(c+506,"SocTop uncache_mmio7 dcache_we", false,-1);
        tracep->declBit(c+507,"SocTop uncache_mmio7 dcache_re", false,-1);
        tracep->declQuad(c+432,"SocTop uncache_mmio7 in_dcache_data", false,-1, 63,0);
        tracep->declBit(c+508,"SocTop uncache_mmio7 in_dcache_finish", false,-1);
        tracep->declBit(c+761,"SocTop uncache_mmio7 start_sign", false,-1);
        tracep->declBit(c+762,"SocTop uncache_mmio7 uncache", false,-1);
        tracep->declQuad(c+763,"SocTop uncache_mmio7 aw_mask", false,-1, 63,0);
        tracep->declBit(c+854,"SocTop i_cache2 clk", false,-1);
        tracep->declBit(c+855,"SocTop i_cache2 rst", false,-1);
        tracep->declQuad(c+3,"SocTop i_cache2 inst_addr", false,-1, 63,0);
        tracep->declBit(c+874,"SocTop i_cache2 inst_ready", false,-1);
        tracep->declBit(c+493,"SocTop i_cache2 core_stall", false,-1);
        tracep->declBus(c+509,"SocTop i_cache2 inst_data", false,-1, 31,0);
        tracep->declBit(c+510,"SocTop i_cache2 inst_valid", false,-1);
        tracep->declBit(c+7,"SocTop i_cache2 cache_read_ena", false,-1);
        tracep->declBit(c+10,"SocTop i_cache2 cache_read_resp", false,-1);
        tracep->declQuad(c+8,"SocTop i_cache2 cache_addr", false,-1, 63,0);
        tracep->declQuad(c+13,"SocTop i_cache2 cache_in_data", false,-1, 63,0);
        tracep->declBit(c+15,"SocTop i_cache2 cache_in_valid", false,-1);
        tracep->declBit(c+765,"SocTop i_cache2 icache_if_shankhand", false,-1);
        tracep->declQuad(c+341,"SocTop i_cache2 icache_tag", false,-1, 54,0);
        tracep->declBus(c+343,"SocTop i_cache2 icache_index", false,-1, 5,0);
        tracep->declBus(c+344,"SocTop i_cache2 state_inst", false,-1, 5,0);
        tracep->declBus(c+766,"SocTop i_cache2 state_inst_nxt", false,-1, 5,0);
        tracep->declBit(c+345,"SocTop i_cache2 read_ok_", false,-1);
        tracep->declBit(c+346,"SocTop i_cache2 read_ok", false,-1);
        tracep->declBit(c+767,"SocTop i_cache2 inst_hit_ok", false,-1);
        tracep->declQuad(c+347,"SocTop i_cache2 miss_data", false,-1, 63,0);
        tracep->declBit(c+349,"SocTop i_cache2 miss_ena_o", false,-1);
        tracep->declBit(c+350,"SocTop i_cache2 miss_ena_t", false,-1);
        tracep->declBit(c+351,"SocTop i_cache2 write_i_ok", false,-1);
        tracep->declQuad(c+352,"SocTop i_cache2 i_tag_data1", false,-1, 54,0);
        tracep->declBit(c+354,"SocTop i_cache2 i_tag_user1", false,-1);
        tracep->declQuad(c+355,"SocTop i_cache2 i_tag_data2", false,-1, 54,0);
        tracep->declBit(c+357,"SocTop i_cache2 i_tag_user2", false,-1);
        tracep->declQuad(c+358,"SocTop i_cache2 inst_out_1", false,-1, 63,0);
        tracep->declQuad(c+360,"SocTop i_cache2 inst_out_2", false,-1, 63,0);
        tracep->declBus(c+362,"SocTop i_cache2 i", false,-1, 31,0);
        tracep->declBit(c+854,"SocTop i_cache2 u_tag01 clk", false,-1);
        tracep->declBus(c+343,"SocTop i_cache2 u_tag01 addr_i", false,-1, 5,0);
        tracep->declQuad(c+363,"SocTop i_cache2 u_tag01 data_i", false,-1, 55,0);
        tracep->declBit(c+349,"SocTop i_cache2 u_tag01 write_ena", false,-1);
        tracep->declQuad(c+352,"SocTop i_cache2 u_tag01 tag_data", false,-1, 54,0);
        tracep->declBit(c+354,"SocTop i_cache2 u_tag01 tag_valid", false,-1);
        tracep->declQuad(c+352,"SocTop i_cache2 u_tag01 out_data", false,-1, 54,0);
        tracep->declBit(c+354,"SocTop i_cache2 u_tag01 out_vaild", false,-1);
        tracep->declBit(c+854,"SocTop i_cache2 u_tag02 clk", false,-1);
        tracep->declBus(c+343,"SocTop i_cache2 u_tag02 addr_i", false,-1, 5,0);
        tracep->declQuad(c+363,"SocTop i_cache2 u_tag02 data_i", false,-1, 55,0);
        tracep->declBit(c+350,"SocTop i_cache2 u_tag02 write_ena", false,-1);
        tracep->declQuad(c+355,"SocTop i_cache2 u_tag02 tag_data", false,-1, 54,0);
        tracep->declBit(c+357,"SocTop i_cache2 u_tag02 tag_valid", false,-1);
        tracep->declQuad(c+355,"SocTop i_cache2 u_tag02 out_data", false,-1, 54,0);
        tracep->declBit(c+357,"SocTop i_cache2 u_tag02 out_vaild", false,-1);
        tracep->declBit(c+854,"SocTop i_cache2 u_data01 clk", false,-1);
        tracep->declBus(c+343,"SocTop i_cache2 u_data01 addr_i", false,-1, 5,0);
        tracep->declQuad(c+347,"SocTop i_cache2 u_data01 data_i", false,-1, 63,0);
        tracep->declBit(c+349,"SocTop i_cache2 u_data01 write_ena", false,-1);
        tracep->declQuad(c+358,"SocTop i_cache2 u_data01 data_o", false,-1, 63,0);
        tracep->declQuad(c+358,"SocTop i_cache2 u_data01 out_data", false,-1, 63,0);
        tracep->declBit(c+854,"SocTop i_cache2 u_data02 clk", false,-1);
        tracep->declBus(c+343,"SocTop i_cache2 u_data02 addr_i", false,-1, 5,0);
        tracep->declQuad(c+347,"SocTop i_cache2 u_data02 data_i", false,-1, 63,0);
        tracep->declBit(c+350,"SocTop i_cache2 u_data02 write_ena", false,-1);
        tracep->declQuad(c+360,"SocTop i_cache2 u_data02 data_o", false,-1, 63,0);
        tracep->declQuad(c+360,"SocTop i_cache2 u_data02 out_data", false,-1, 63,0);
        tracep->declBit(c+854,"SocTop d_cache3 clk", false,-1);
        tracep->declBit(c+855,"SocTop d_cache3 rst", false,-1);
        tracep->declQuad(c+503,"SocTop d_cache3 mem_addr_i", false,-1, 63,0);
        tracep->declQuad(c+501,"SocTop d_cache3 mem_data_i", false,-1, 63,0);
        tracep->declBus(c+505,"SocTop d_cache3 mem_strb_i", false,-1, 7,0);
        tracep->declBit(c+507,"SocTop d_cache3 mem_read_valid", false,-1);
        tracep->declBit(c+506,"SocTop d_cache3 mem_write_valid", false,-1);
        tracep->declQuad(c+432,"SocTop d_cache3 mem_data_out", false,-1, 63,0);
        tracep->declBit(c+508,"SocTop d_cache3 mem_data_ready", false,-1);
        tracep->declQuad(c+11,"SocTop d_cache3 in_dcache_data", false,-1, 63,0);
        tracep->declBit(c+516,"SocTop d_cache3 in_dcache_ready", false,-1);
        tracep->declBit(c+437,"SocTop d_cache3 out_dcache_resp", false,-1);
        tracep->declQuad(c+513,"SocTop d_cache3 out_dcache_addr", false,-1, 63,0);
        tracep->declQuad(c+435,"SocTop d_cache3 out_dcache_data", false,-1, 63,0);
        tracep->declBus(c+515,"SocTop d_cache3 out_dcache_type", false,-1, 3,0);
        tracep->declBit(c+470,"SocTop d_cache3 dcache_read_shankhand", false,-1);
        tracep->declBit(c+471,"SocTop d_cache3 dcache_write_shankhand", false,-1);
        tracep->declBit(c+365,"SocTop d_cache3 dcache_read_ready", false,-1);
        tracep->declBit(c+366,"SocTop d_cache3 dcache_write_ready", false,-1);
        tracep->declQuad(c+768,"SocTop d_cache3 dcache_tag", false,-1, 54,0);
        tracep->declBus(c+770,"SocTop d_cache3 dcache_index", false,-1, 5,0);
        tracep->declBus(c+367,"SocTop d_cache3 state_dread", false,-1, 5,0);
        tracep->declBus(c+771,"SocTop d_cache3 state_dread_nxt", false,-1, 5,0);
        tracep->declBit(c+368,"SocTop d_cache3 read_ok_", false,-1);
        tracep->declBit(c+369,"SocTop d_cache3 read_ok", false,-1);
        tracep->declBit(c+772,"SocTop d_cache3 mem_hit_ok", false,-1);
        tracep->declBit(c+472,"SocTop d_cache3 hit_data_ready", false,-1);
        tracep->declBit(c+773,"SocTop d_cache3 dirty_ok", false,-1);
        tracep->declQuad(c+774,"SocTop d_cache3 dirty_out_addr", false,-1, 63,0);
        tracep->declQuad(c+776,"SocTop d_cache3 dirty_out_data", false,-1, 63,0);
        tracep->declBus(c+778,"SocTop d_cache3 dirty_out_type", false,-1, 3,0);
        tracep->declBit(c+779,"SocTop d_cache3 dirty_clean_o", false,-1);
        tracep->declBit(c+780,"SocTop d_cache3 dirty_clean_t", false,-1);
        tracep->declBit(c+781,"SocTop d_cache3 missr_i_ok", false,-1);
        tracep->declBus(c+782,"SocTop d_cache3 missr_out_type", false,-1, 3,0);
        tracep->declQuad(c+783,"SocTop d_cache3 missr_out_addr", false,-1, 63,0);
        tracep->declBus(c+785,"SocTop d_cache3 missr_data_ena1", false,-1, 7,0);
        tracep->declBit(c+786,"SocTop d_cache3 missr_tag_ena1", false,-1);
        tracep->declBus(c+787,"SocTop d_cache3 missr_data_ena2", false,-1, 7,0);
        tracep->declBit(c+788,"SocTop d_cache3 missr_tag_ena2", false,-1);
        tracep->declBit(c+789,"SocTop d_cache3 missr_out_resp", false,-1);
        tracep->declBus(c+370,"SocTop d_cache3 state_dwrite", false,-1, 5,0);
        tracep->declBus(c+790,"SocTop d_cache3 state_dwrite_nxt", false,-1, 5,0);
        tracep->declBit(c+371,"SocTop d_cache3 read_w_ok_", false,-1);
        tracep->declBit(c+372,"SocTop d_cache3 read_w_ok", false,-1);
        tracep->declBit(c+373,"SocTop d_cache3 memw_hit_ok", false,-1);
        tracep->declBus(c+791,"SocTop d_cache3 hitw_data_strb1", false,-1, 7,0);
        tracep->declBus(c+792,"SocTop d_cache3 hitw_data_strb2", false,-1, 7,0);
        tracep->declBit(c+473,"SocTop d_cache3 hitw_data_ready", false,-1);
        tracep->declBit(c+793,"SocTop d_cache3 dirtyw_ok", false,-1);
        tracep->declQuad(c+794,"SocTop d_cache3 dirtyw_out_addr", false,-1, 63,0);
        tracep->declQuad(c+796,"SocTop d_cache3 dirtyw_out_data", false,-1, 63,0);
        tracep->declBus(c+798,"SocTop d_cache3 dirtyw_out_type", false,-1, 3,0);
        tracep->declBit(c+799,"SocTop d_cache3 dirtyw_clean_o", false,-1);
        tracep->declBit(c+800,"SocTop d_cache3 dirtyw_clean_t", false,-1);
        tracep->declBit(c+801,"SocTop d_cache3 missw_i_ok", false,-1);
        tracep->declBus(c+802,"SocTop d_cache3 missw_out_type", false,-1, 3,0);
        tracep->declQuad(c+803,"SocTop d_cache3 missw_out_addr", false,-1, 63,0);
        tracep->declBus(c+805,"SocTop d_cache3 missw_data_ena1", false,-1, 7,0);
        tracep->declBit(c+806,"SocTop d_cache3 missw_tag_ena1", false,-1);
        tracep->declBus(c+807,"SocTop d_cache3 missw_data_ena2", false,-1, 7,0);
        tracep->declBit(c+808,"SocTop d_cache3 missw_tag_ena2", false,-1);
        tracep->declBit(c+809,"SocTop d_cache3 missw_out_resp", false,-1);
        tracep->declBus(c+374,"SocTop d_cache3 i", false,-1, 31,0);
        tracep->declBus(c+375,"SocTop d_cache3 j", false,-1, 31,0);
        tracep->declBit(c+810,"SocTop d_cache3 tag_ena1", false,-1);
        tracep->declQuad(c+376,"SocTop d_cache3 tag_data1", false,-1, 54,0);
        tracep->declBit(c+378,"SocTop d_cache3 tag_user1", false,-1);
        tracep->declBit(c+811,"SocTop d_cache3 tag_ena2", false,-1);
        tracep->declQuad(c+379,"SocTop d_cache3 tag_data2", false,-1, 54,0);
        tracep->declBit(c+381,"SocTop d_cache3 tag_user2", false,-1);
        tracep->declQuad(c+382,"SocTop d_cache3 out_data1", false,-1, 63,0);
        tracep->declBus(c+812,"SocTop d_cache3 data_ena1", false,-1, 7,0);
        tracep->declQuad(c+813,"SocTop d_cache3 in_rem_data1", false,-1, 63,0);
        tracep->declQuad(c+384,"SocTop d_cache3 out_data2", false,-1, 63,0);
        tracep->declBus(c+815,"SocTop d_cache3 data_ena2", false,-1, 7,0);
        tracep->declQuad(c+816,"SocTop d_cache3 in_ram_data2", false,-1, 63,0);
        tracep->declBit(c+854,"SocTop d_cache3 u_tag0 clk", false,-1);
        tracep->declBus(c+770,"SocTop d_cache3 u_tag0 addr_i", false,-1, 5,0);
        tracep->declQuad(c+818,"SocTop d_cache3 u_tag0 data_i", false,-1, 55,0);
        tracep->declBit(c+810,"SocTop d_cache3 u_tag0 write_ena", false,-1);
        tracep->declQuad(c+376,"SocTop d_cache3 u_tag0 tag_data", false,-1, 54,0);
        tracep->declBit(c+378,"SocTop d_cache3 u_tag0 tag_valid", false,-1);
        tracep->declQuad(c+376,"SocTop d_cache3 u_tag0 out_data", false,-1, 54,0);
        tracep->declBit(c+378,"SocTop d_cache3 u_tag0 out_vaild", false,-1);
        tracep->declBit(c+854,"SocTop d_cache3 u_tag1 clk", false,-1);
        tracep->declBus(c+770,"SocTop d_cache3 u_tag1 addr_i", false,-1, 5,0);
        tracep->declQuad(c+818,"SocTop d_cache3 u_tag1 data_i", false,-1, 55,0);
        tracep->declBit(c+811,"SocTop d_cache3 u_tag1 write_ena", false,-1);
        tracep->declQuad(c+379,"SocTop d_cache3 u_tag1 tag_data", false,-1, 54,0);
        tracep->declBit(c+381,"SocTop d_cache3 u_tag1 tag_valid", false,-1);
        tracep->declQuad(c+379,"SocTop d_cache3 u_tag1 out_data", false,-1, 54,0);
        tracep->declBit(c+381,"SocTop d_cache3 u_tag1 out_vaild", false,-1);
        tracep->declBit(c+854,"SocTop d_cache3 u_data0 clk", false,-1);
        tracep->declBus(c+770,"SocTop d_cache3 u_data0 addr_i", false,-1, 5,0);
        tracep->declQuad(c+813,"SocTop d_cache3 u_data0 data_i", false,-1, 63,0);
        tracep->declBus(c+812,"SocTop d_cache3 u_data0 write_ena", false,-1, 7,0);
        tracep->declQuad(c+382,"SocTop d_cache3 u_data0 data_o", false,-1, 63,0);
        tracep->declQuad(c+382,"SocTop d_cache3 u_data0 out_data", false,-1, 63,0);
        tracep->declBit(c+854,"SocTop d_cache3 u_data1 clk", false,-1);
        tracep->declBus(c+770,"SocTop d_cache3 u_data1 addr_i", false,-1, 5,0);
        tracep->declQuad(c+816,"SocTop d_cache3 u_data1 data_i", false,-1, 63,0);
        tracep->declBus(c+815,"SocTop d_cache3 u_data1 write_ena", false,-1, 7,0);
        tracep->declQuad(c+384,"SocTop d_cache3 u_data1 data_o", false,-1, 63,0);
        tracep->declQuad(c+384,"SocTop d_cache3 u_data1 out_data", false,-1, 63,0);
        tracep->declBit(c+854,"SocTop arbitratem4 clk", false,-1);
        tracep->declBit(c+855,"SocTop arbitratem4 rst", false,-1);
        tracep->declQuad(c+513,"SocTop arbitratem4 d_cache_addr", false,-1, 63,0);
        tracep->declQuad(c+435,"SocTop arbitratem4 d_cache_data", false,-1, 63,0);
        tracep->declBus(c+515,"SocTop arbitratem4 d_cache_type", false,-1, 3,0);
        tracep->declBit(c+437,"SocTop arbitratem4 d_cache_resp", false,-1);
        tracep->declQuad(c+11,"SocTop arbitratem4 d_cache_data_o", false,-1, 63,0);
        tracep->declBit(c+516,"SocTop arbitratem4 d_cache_valid_", false,-1);
        tracep->declQuad(c+496,"SocTop arbitratem4 uncache_addr", false,-1, 63,0);
        tracep->declQuad(c+494,"SocTop arbitratem4 uncache_data", false,-1, 63,0);
        tracep->declBit(c+500,"SocTop arbitratem4 uncache_read_ena", false,-1);
        tracep->declBit(c+499,"SocTop arbitratem4 uncache_write_ena", false,-1);
        tracep->declBus(c+498,"SocTop arbitratem4 uncache_mask", false,-1, 7,0);
        tracep->declQuad(c+5,"SocTop arbitratem4 uncahce_data_o", false,-1, 63,0);
        tracep->declBit(c+431,"SocTop arbitratem4 uncahce_valid_", false,-1);
        tracep->declQuad(c+8,"SocTop arbitratem4 i_cache_addr", false,-1, 63,0);
        tracep->declBit(c+7,"SocTop arbitratem4 i_cache_ena", false,-1);
        tracep->declBit(c+10,"SocTop arbitratem4 i_cache_resp", false,-1);
        tracep->declQuad(c+13,"SocTop arbitratem4 i_cache_data", false,-1, 63,0);
        tracep->declBit(c+15,"SocTop arbitratem4 i_cache_valid_", false,-1);
        tracep->declBus(c+17,"SocTop arbitratem4 axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+18,"SocTop arbitratem4 axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+20,"SocTop arbitratem4 axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+21,"SocTop arbitratem4 axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+22,"SocTop arbitratem4 axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+23,"SocTop arbitratem4 axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+24,"SocTop arbitratem4 axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+25,"SocTop arbitratem4 axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+26,"SocTop arbitratem4 axi_aw_valid", false,-1);
        tracep->declBit(c+875,"SocTop arbitratem4 axi_aw_ready", false,-1);
        tracep->declQuad(c+27,"SocTop arbitratem4 axi_w_data", false,-1, 63,0);
        tracep->declBus(c+29,"SocTop arbitratem4 axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+30,"SocTop arbitratem4 axi_w_last", false,-1);
        tracep->declBit(c+31,"SocTop arbitratem4 axi_w_valid", false,-1);
        tracep->declBit(c+876,"SocTop arbitratem4 axi_w_ready", false,-1);
        tracep->declBus(c+877,"SocTop arbitratem4 axi_b_id", false,-1, 3,0);
        tracep->declBus(c+878,"SocTop arbitratem4 axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+879,"SocTop arbitratem4 axi_b_valid", false,-1);
        tracep->declBit(c+921,"SocTop arbitratem4 axi_b_ready", false,-1);
        tracep->declBus(c+32,"SocTop arbitratem4 axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+33,"SocTop arbitratem4 axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+35,"SocTop arbitratem4 axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+36,"SocTop arbitratem4 axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+37,"SocTop arbitratem4 axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+38,"SocTop arbitratem4 axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+39,"SocTop arbitratem4 axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+40,"SocTop arbitratem4 axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+41,"SocTop arbitratem4 axi_ar_valid", false,-1);
        tracep->declBit(c+517,"SocTop arbitratem4 axi_ar_ready", false,-1);
        tracep->declBus(c+518,"SocTop arbitratem4 axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+519,"SocTop arbitratem4 axi_r_data", false,-1, 63,0);
        tracep->declBus(c+521,"SocTop arbitratem4 axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+522,"SocTop arbitratem4 axi_r_last", false,-1);
        tracep->declBit(c+523,"SocTop arbitratem4 axi_r_valid", false,-1);
        tracep->declBit(c+42,"SocTop arbitratem4 axi_r_ready", false,-1);
        tracep->declBit(c+820,"SocTop arbitratem4 read_dcache_shankhand", false,-1);
        tracep->declBit(c+821,"SocTop arbitratem4 write_dcache_shankhand", false,-1);
        tracep->declBit(c+822,"SocTop arbitratem4 read_icache_shankhand", false,-1);
        tracep->declBit(c+823,"SocTop arbitratem4 read_uncahce_shankhand", false,-1);
        tracep->declBit(c+824,"SocTop arbitratem4 write_uncahce_shankhand", false,-1);
        tracep->declBus(c+386,"SocTop arbitratem4 arbitrate_state", false,-1, 2,0);
        tracep->declBus(c+825,"SocTop arbitratem4 arbitrate_state_nxt", false,-1, 2,0);
        tracep->declBit(c+826,"SocTop arbitratem4 dread_success", false,-1);
        tracep->declBit(c+827,"SocTop arbitratem4 dwrite_success", false,-1);
        tracep->declBit(c+828,"SocTop arbitratem4 iread_success", false,-1);
        tracep->declBus(c+387,"SocTop arbitratem4 dread_ar_id", false,-1, 3,0);
        tracep->declQuad(c+388,"SocTop arbitratem4 dread_ar_addr", false,-1, 63,0);
        tracep->declBus(c+390,"SocTop arbitratem4 dread_ar_len", false,-1, 7,0);
        tracep->declBus(c+391,"SocTop arbitratem4 dread_ar_size", false,-1, 2,0);
        tracep->declBus(c+392,"SocTop arbitratem4 dread_ar_burst", false,-1, 1,0);
        tracep->declBus(c+393,"SocTop arbitratem4 dread_ar_cache", false,-1, 3,0);
        tracep->declBus(c+394,"SocTop arbitratem4 dread_ar_prot", false,-1, 2,0);
        tracep->declBus(c+395,"SocTop arbitratem4 dread_ar_qos", false,-1, 3,0);
        tracep->declBit(c+396,"SocTop arbitratem4 dread_ar_valid", false,-1);
        tracep->declBit(c+397,"SocTop arbitratem4 dread_cache_valid", false,-1);
        tracep->declBit(c+829,"SocTop arbitratem4 dread_arshankhand", false,-1);
        tracep->declBit(c+921,"SocTop arbitratem4 dread_r_ready", false,-1);
        tracep->declBit(c+398,"SocTop arbitratem4 dread_ok", false,-1);
        tracep->declBus(c+399,"SocTop arbitratem4 iread_ar_id", false,-1, 3,0);
        tracep->declQuad(c+400,"SocTop arbitratem4 iread_ar_addr", false,-1, 63,0);
        tracep->declBus(c+402,"SocTop arbitratem4 iread_ar_len", false,-1, 7,0);
        tracep->declBus(c+403,"SocTop arbitratem4 iread_ar_size", false,-1, 2,0);
        tracep->declBus(c+404,"SocTop arbitratem4 iread_ar_burst", false,-1, 1,0);
        tracep->declBus(c+405,"SocTop arbitratem4 iread_ar_cache", false,-1, 3,0);
        tracep->declBus(c+406,"SocTop arbitratem4 iread_ar_prot", false,-1, 2,0);
        tracep->declBus(c+407,"SocTop arbitratem4 iread_ar_qos", false,-1, 3,0);
        tracep->declBit(c+408,"SocTop arbitratem4 iread_ar_valid", false,-1);
        tracep->declBit(c+15,"SocTop arbitratem4 iread_cache_valid", false,-1);
        tracep->declBit(c+921,"SocTop arbitratem4 iread_r_ready", false,-1);
        tracep->declBit(c+830,"SocTop arbitratem4 iread_arshankhand", false,-1);
        tracep->declBus(c+17,"SocTop arbitratem4 dwrite_aw_id", false,-1, 3,0);
        tracep->declQuad(c+18,"SocTop arbitratem4 dwrite_aw_addr", false,-1, 63,0);
        tracep->declBus(c+20,"SocTop arbitratem4 dwrite_aw_len", false,-1, 7,0);
        tracep->declBus(c+21,"SocTop arbitratem4 dwrite_aw_size", false,-1, 2,0);
        tracep->declBus(c+22,"SocTop arbitratem4 dwrite_aw_burst", false,-1, 1,0);
        tracep->declBus(c+23,"SocTop arbitratem4 dwrite_aw_cache", false,-1, 3,0);
        tracep->declBus(c+24,"SocTop arbitratem4 dwrite_aw_port", false,-1, 2,0);
        tracep->declBus(c+25,"SocTop arbitratem4 dwrite_aw_qos", false,-1, 3,0);
        tracep->declBit(c+26,"SocTop arbitratem4 dwrite_aw_valid", false,-1);
        tracep->declQuad(c+27,"SocTop arbitratem4 dwrite_w_data", false,-1, 63,0);
        tracep->declBus(c+29,"SocTop arbitratem4 dwrite_w_strb", false,-1, 7,0);
        tracep->declBit(c+30,"SocTop arbitratem4 dwrite_w_last", false,-1);
        tracep->declBit(c+31,"SocTop arbitratem4 dwrite_w_valid", false,-1);
        tracep->declBit(c+409,"SocTop arbitratem4 dwrite_cache_valid", false,-1);
        tracep->declBit(c+921,"SocTop arbitratem4 dwrite_b_ready", false,-1);
        tracep->declBit(c+918,"SocTop arbitratem4 dwrite_awshankhand", false,-1);
        tracep->declBit(c+919,"SocTop arbitratem4 dwrite_wshankhand", false,-1);
        tracep->declBit(c+410,"SocTop arbitratem4 dwrite_ok", false,-1);
        tracep->declBit(c+854,"SocTop axi_mnq4 clk", false,-1);
        tracep->declBit(c+855,"SocTop axi_mnq4 rst", false,-1);
        tracep->declBus(c+574,"SocTop axi_mnq4 s_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+575,"SocTop axi_mnq4 s_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+577,"SocTop axi_mnq4 s_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+578,"SocTop axi_mnq4 s_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+579,"SocTop axi_mnq4 s_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+580,"SocTop axi_mnq4 s_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+581,"SocTop axi_mnq4 s_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+582,"SocTop axi_mnq4 s_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+584,"SocTop axi_mnq4 s_axi_aw_valid", false,-1);
        tracep->declBit(c+583,"SocTop axi_mnq4 s_axi_aw_ready", false,-1);
        tracep->declQuad(c+585,"SocTop axi_mnq4 s_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+587,"SocTop axi_mnq4 s_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+588,"SocTop axi_mnq4 s_axi_w_last", false,-1);
        tracep->declBit(c+589,"SocTop axi_mnq4 s_axi_w_valid", false,-1);
        tracep->declBit(c+590,"SocTop axi_mnq4 s_axi_w_ready", false,-1);
        tracep->declBus(c+574,"SocTop axi_mnq4 s_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+922,"SocTop axi_mnq4 s_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+47,"SocTop axi_mnq4 s_axi_b_valid", false,-1);
        tracep->declBit(c+591,"SocTop axi_mnq4 s_axi_b_ready", false,-1);
        tracep->declBus(c+592,"SocTop axi_mnq4 s_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+593,"SocTop axi_mnq4 s_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+595,"SocTop axi_mnq4 s_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+596,"SocTop axi_mnq4 s_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+597,"SocTop axi_mnq4 s_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+598,"SocTop axi_mnq4 s_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+599,"SocTop axi_mnq4 s_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+600,"SocTop axi_mnq4 s_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+601,"SocTop axi_mnq4 s_axi_ar_valid", false,-1);
        tracep->declBit(c+48,"SocTop axi_mnq4 s_axi_ar_ready", false,-1);
        tracep->declBus(c+49,"SocTop axi_mnq4 s_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+880,"SocTop axi_mnq4 s_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+922,"SocTop axi_mnq4 s_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+50,"SocTop axi_mnq4 s_axi_r_last", false,-1);
        tracep->declBit(c+51,"SocTop axi_mnq4 s_axi_r_valid", false,-1);
        tracep->declBit(c+602,"SocTop axi_mnq4 s_axi_r_ready", false,-1);
        tracep->declBit(c+665,"SocTop axi_mnq4 mnq_read_ena", false,-1);
        tracep->declQuad(c+666,"SocTop axi_mnq4 addr_oup", false,-1, 63,0);
        tracep->declQuad(c+859,"SocTop axi_mnq4 mnq_data_in", false,-1, 63,0);
        tracep->declBit(c+47,"SocTop axi_mnq4 write_ram_ena", false,-1);
        tracep->declQuad(c+63,"SocTop axi_mnq4 write_ram_data", false,-1, 63,0);
        tracep->declQuad(c+61,"SocTop axi_mnq4 write_ram_addr", false,-1, 63,0);
        tracep->declBit(c+831,"SocTop axi_mnq4 aw_shankhand", false,-1);
        tracep->declBit(c+832,"SocTop axi_mnq4 w_shankhand", false,-1);
        tracep->declBit(c+474,"SocTop axi_mnq4 b_shankhand", false,-1);
        tracep->declBus(c+411,"SocTop axi_mnq4 s_write_state", false,-1, 1,0);
        tracep->declBus(c+833,"SocTop axi_mnq4 s_write_state_nxt", false,-1, 1,0);
        tracep->declBit(c+834,"SocTop axi_mnq4 ar_shankhand", false,-1);
        tracep->declBit(c+475,"SocTop axi_mnq4 r_shankhand", false,-1);
        tracep->declBus(c+412,"SocTop axi_mnq4 s_read_state", false,-1, 1,0);
        tracep->declBus(c+835,"SocTop axi_mnq4 s_read_state_nxt", false,-1, 1,0);
        tracep->declQuad(c+413,"SocTop axi_mnq4 write_data_reg", false,-1, 63,0);
        tracep->declQuad(c+415,"SocTop axi_mnq4 write_addr_reg", false,-1, 63,0);
        tracep->declBus(c+417,"SocTop axi_mnq4 r_s_axi_ar_id", false,-1, 3,0);
        tracep->declBit(c+854,"SocTop soc_axi45 clk", false,-1);
        tracep->declBit(c+855,"SocTop soc_axi45 rst", false,-1);
        tracep->declBus(c+664,"SocTop soc_axi45 prot_chose_write", false,-1, 2,0);
        tracep->declBus(c+664,"SocTop soc_axi45 prot_chose_read", false,-1, 2,0);
        tracep->declBus(c+17,"SocTop soc_axi45 master_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+18,"SocTop soc_axi45 master_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+20,"SocTop soc_axi45 master_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+21,"SocTop soc_axi45 master_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+22,"SocTop soc_axi45 master_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+23,"SocTop soc_axi45 master_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+24,"SocTop soc_axi45 master_axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+25,"SocTop soc_axi45 master_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+26,"SocTop soc_axi45 master_axi_aw_valid", false,-1);
        tracep->declBit(c+875,"SocTop soc_axi45 master_axi_aw_ready", false,-1);
        tracep->declQuad(c+27,"SocTop soc_axi45 master_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+29,"SocTop soc_axi45 master_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+30,"SocTop soc_axi45 master_axi_w_last", false,-1);
        tracep->declBit(c+31,"SocTop soc_axi45 master_axi_w_valid", false,-1);
        tracep->declBit(c+876,"SocTop soc_axi45 master_axi_w_ready", false,-1);
        tracep->declBus(c+877,"SocTop soc_axi45 master_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+878,"SocTop soc_axi45 master_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+921,"SocTop soc_axi45 master_axi_b_ready", false,-1);
        tracep->declBit(c+879,"SocTop soc_axi45 master_axi_b_valid", false,-1);
        tracep->declBus(c+32,"SocTop soc_axi45 master_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+33,"SocTop soc_axi45 master_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+35,"SocTop soc_axi45 master_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+36,"SocTop soc_axi45 master_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+37,"SocTop soc_axi45 master_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+38,"SocTop soc_axi45 master_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+39,"SocTop soc_axi45 master_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+40,"SocTop soc_axi45 master_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+41,"SocTop soc_axi45 master_axi_ar_valid", false,-1);
        tracep->declBit(c+517,"SocTop soc_axi45 master_axi_ar_ready", false,-1);
        tracep->declBus(c+518,"SocTop soc_axi45 master_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+519,"SocTop soc_axi45 master_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+521,"SocTop soc_axi45 master_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+522,"SocTop soc_axi45 master_axi_r_last", false,-1);
        tracep->declBit(c+523,"SocTop soc_axi45 master_axi_r_valid", false,-1);
        tracep->declBit(c+42,"SocTop soc_axi45 master_axi_r_ready", false,-1);
        tracep->declBus(c+524,"SocTop soc_axi45 slave_axi_aw_id", false,-1, 11,0);
        tracep->declArray(c+525,"SocTop soc_axi45 slave_axi_aw_addr", false,-1, 191,0);
        tracep->declBus(c+531,"SocTop soc_axi45 slave_axi_aw_len", false,-1, 23,0);
        tracep->declBus(c+532,"SocTop soc_axi45 slave_axi_aw_size", false,-1, 8,0);
        tracep->declBus(c+533,"SocTop soc_axi45 slave_axi_aw_burst", false,-1, 5,0);
        tracep->declBus(c+534,"SocTop soc_axi45 slave_axi_aw_cache", false,-1, 11,0);
        tracep->declBus(c+535,"SocTop soc_axi45 slave_axi_aw_prot", false,-1, 8,0);
        tracep->declBus(c+536,"SocTop soc_axi45 slave_axi_aw_qos", false,-1, 11,0);
        tracep->declBus(c+537,"SocTop soc_axi45 slave_axi_aw_valid", false,-1, 2,0);
        tracep->declBus(c+538,"SocTop soc_axi45 slave_axi_aw_ready", false,-1, 2,0);
        tracep->declArray(c+539,"SocTop soc_axi45 slave_axi_w_data", false,-1, 191,0);
        tracep->declBus(c+545,"SocTop soc_axi45 slave_axi_w_strb", false,-1, 23,0);
        tracep->declBus(c+546,"SocTop soc_axi45 slave_axi_w_last", false,-1, 2,0);
        tracep->declBus(c+547,"SocTop soc_axi45 slave_axi_w_valid", false,-1, 2,0);
        tracep->declBus(c+548,"SocTop soc_axi45 slave_axi_w_ready", false,-1, 2,0);
        tracep->declBus(c+549,"SocTop soc_axi45 slave_axi_b_id", false,-1, 11,0);
        tracep->declBus(c+43,"SocTop soc_axi45 slave_axi_b_resp", false,-1, 5,0);
        tracep->declBus(c+44,"SocTop soc_axi45 slave_axi_b_valid", false,-1, 2,0);
        tracep->declBus(c+550,"SocTop soc_axi45 slave_axi_b_ready", false,-1, 2,0);
        tracep->declBus(c+551,"SocTop soc_axi45 slave_axi_ar_id", false,-1, 11,0);
        tracep->declArray(c+552,"SocTop soc_axi45 slave_axi_ar_addr", false,-1, 191,0);
        tracep->declBus(c+558,"SocTop soc_axi45 slave_axi_ar_len", false,-1, 23,0);
        tracep->declBus(c+559,"SocTop soc_axi45 slave_axi_ar_size", false,-1, 8,0);
        tracep->declBus(c+560,"SocTop soc_axi45 slave_axi_ar_burst", false,-1, 5,0);
        tracep->declBus(c+561,"SocTop soc_axi45 slave_axi_ar_cache", false,-1, 11,0);
        tracep->declBus(c+562,"SocTop soc_axi45 slave_axi_ar_prot", false,-1, 8,0);
        tracep->declBus(c+563,"SocTop soc_axi45 slave_axi_ar_qos", false,-1, 11,0);
        tracep->declBus(c+564,"SocTop soc_axi45 slave_axi_ar_valid", false,-1, 2,0);
        tracep->declBus(c+565,"SocTop soc_axi45 slave_axi_ar_ready", false,-1, 2,0);
        tracep->declBus(c+566,"SocTop soc_axi45 slave_axi_r_id", false,-1, 11,0);
        tracep->declArray(c+567,"SocTop soc_axi45 slave_axi_r_data", false,-1, 191,0);
        tracep->declBus(c+1,"SocTop soc_axi45 slave_axi_r_resp", false,-1, 5,0);
        tracep->declBus(c+45,"SocTop soc_axi45 slave_axi_r_last", false,-1, 2,0);
        tracep->declBus(c+46,"SocTop soc_axi45 slave_axi_r_valid", false,-1, 2,0);
        tracep->declBus(c+573,"SocTop soc_axi45 slave_axi_r_ready", false,-1, 2,0);
        tracep->declBus(c+920,"SocTop soc_axi45 SLAVE_NUM", false,-1, 31,0);
        tracep->declBit(c+854,"SocTop clint6 clk", false,-1);
        tracep->declBit(c+855,"SocTop clint6 rst", false,-1);
        tracep->declBit(c+16,"SocTop clint6 time_interrupt", false,-1);
        tracep->declBus(c+603,"SocTop clint6 time_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+604,"SocTop clint6 time_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+606,"SocTop clint6 time_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+607,"SocTop clint6 time_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+608,"SocTop clint6 time_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+609,"SocTop clint6 time_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+610,"SocTop clint6 time_axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+611,"SocTop clint6 time_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+613,"SocTop clint6 time_axi_aw_valid", false,-1);
        tracep->declBit(c+612,"SocTop clint6 time_axi_aw_ready", false,-1);
        tracep->declQuad(c+614,"SocTop clint6 time_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+616,"SocTop clint6 time_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+617,"SocTop clint6 time_axi_w_last", false,-1);
        tracep->declBit(c+618,"SocTop clint6 time_axi_w_valid", false,-1);
        tracep->declBit(c+619,"SocTop clint6 time_axi_w_ready", false,-1);
        tracep->declBus(c+52,"SocTop clint6 time_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+53,"SocTop clint6 time_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+54,"SocTop clint6 time_axi_b_valid", false,-1);
        tracep->declBit(c+620,"SocTop clint6 time_axi_b_ready", false,-1);
        tracep->declBus(c+621,"SocTop clint6 time_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+622,"SocTop clint6 time_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+624,"SocTop clint6 time_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+625,"SocTop clint6 time_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+626,"SocTop clint6 time_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+627,"SocTop clint6 time_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+628,"SocTop clint6 time_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+629,"SocTop clint6 time_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+630,"SocTop clint6 time_axi_ar_valid", false,-1);
        tracep->declBit(c+631,"SocTop clint6 time_axi_ar_ready", false,-1);
        tracep->declBus(c+438,"SocTop clint6 time_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+632,"SocTop clint6 time_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+2,"SocTop clint6 time_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+55,"SocTop clint6 time_axi_r_last", false,-1);
        tracep->declBit(c+56,"SocTop clint6 time_axi_r_valid", false,-1);
        tracep->declBit(c+634,"SocTop clint6 time_axi_r_ready", false,-1);
        tracep->declQuad(c+418,"SocTop clint6 car_mtime_l", false,-1, 63,0);
        tracep->declQuad(c+420,"SocTop clint6 csr_mtime_h", false,-1, 63,0);
        tracep->declQuad(c+476,"SocTop clint6 csr_mtime_l_nxt", false,-1, 63,0);
        tracep->declQuad(c+478,"SocTop clint6 csr_mtime_h_nxt", false,-1, 63,0);
        tracep->declBit(c+836,"SocTop clint6 csr_mtime_l_r_ena", false,-1);
        tracep->declBit(c+837,"SocTop clint6 csr_mtime_h_r_ena", false,-1);
        tracep->declBit(c+838,"SocTop clint6 csr_mtime_l_w_ena", false,-1);
        tracep->declBit(c+839,"SocTop clint6 csr_mtime_h_w_ena", false,-1);
        tracep->declQuad(c+840,"SocTop clint6 wmask", false,-1, 63,0);
        tracep->declBit(c+842,"SocTop clint6 aw_shakehand", false,-1);
        tracep->declBit(c+843,"SocTop clint6 w_shakehand", false,-1);
        tracep->declBit(c+480,"SocTop clint6 b_shankhand", false,-1);
        tracep->declBit(c+844,"SocTop clint6 mode_right", false,-1);
        tracep->declBus(c+422,"SocTop clint6 state_time_m", false,-1, 1,0);
        tracep->declBus(c+845,"SocTop clint6 state_time_m_nxt", false,-1, 1,0);
        tracep->declBus(c+423,"SocTop clint6 time_reg_id", false,-1, 3,0);
        tracep->declBus(c+53,"SocTop clint6 time_reg_resp", false,-1, 1,0);
        tracep->declBit(c+846,"SocTop clint6 mode_right_r", false,-1);
        tracep->declBit(c+847,"SocTop clint6 ar_shakehand", false,-1);
        tracep->declBit(c+481,"SocTop clint6 r_shankhand", false,-1);
        tracep->declQuad(c+482,"SocTop clint6 time_csr_link", false,-1, 63,0);
        tracep->declBus(c+424,"SocTop clint6 state_time_r", false,-1, 1,0);
        tracep->declBus(c+848,"SocTop clint6 state_time_r_nxt", false,-1, 1,0);
        tracep->declBit(c+854,"SocTop io_slave_axi9 clk", false,-1);
        tracep->declBit(c+855,"SocTop io_slave_axi9 rst", false,-1);
        tracep->declBus(c+635,"SocTop io_slave_axi9 ioe_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+636,"SocTop io_slave_axi9 ioe_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+638,"SocTop io_slave_axi9 ioe_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+639,"SocTop io_slave_axi9 ioe_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+640,"SocTop io_slave_axi9 ioe_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+641,"SocTop io_slave_axi9 ioe_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+642,"SocTop io_slave_axi9 ioe_axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+643,"SocTop io_slave_axi9 ioe_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+645,"SocTop io_slave_axi9 ioe_axi_aw_valid", false,-1);
        tracep->declBit(c+644,"SocTop io_slave_axi9 ioe_axi_aw_ready", false,-1);
        tracep->declQuad(c+646,"SocTop io_slave_axi9 ioe_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+648,"SocTop io_slave_axi9 ioe_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+649,"SocTop io_slave_axi9 ioe_axi_w_last", false,-1);
        tracep->declBit(c+650,"SocTop io_slave_axi9 ioe_axi_w_valid", false,-1);
        tracep->declBit(c+651,"SocTop io_slave_axi9 ioe_axi_w_ready", false,-1);
        tracep->declBus(c+635,"SocTop io_slave_axi9 ioe_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+922,"SocTop io_slave_axi9 ioe_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+57,"SocTop io_slave_axi9 ioe_axi_b_valid", false,-1);
        tracep->declBit(c+652,"SocTop io_slave_axi9 ioe_axi_b_ready", false,-1);
        tracep->declBus(c+653,"SocTop io_slave_axi9 ioe_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+654,"SocTop io_slave_axi9 ioe_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+656,"SocTop io_slave_axi9 ioe_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+657,"SocTop io_slave_axi9 ioe_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+658,"SocTop io_slave_axi9 ioe_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+659,"SocTop io_slave_axi9 ioe_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+660,"SocTop io_slave_axi9 ioe_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+661,"SocTop io_slave_axi9 ioe_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+662,"SocTop io_slave_axi9 ioe_axi_ar_valid", false,-1);
        tracep->declBit(c+58,"SocTop io_slave_axi9 ioe_axi_ar_ready", false,-1);
        tracep->declBus(c+439,"SocTop io_slave_axi9 ioe_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+882,"SocTop io_slave_axi9 ioe_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+922,"SocTop io_slave_axi9 ioe_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+59,"SocTop io_slave_axi9 ioe_axi_r_last", false,-1);
        tracep->declBit(c+60,"SocTop io_slave_axi9 ioe_axi_r_valid", false,-1);
        tracep->declBit(c+663,"SocTop io_slave_axi9 ioe_axi_r_ready", false,-1);
        tracep->declQuad(c+866,"SocTop io_slave_axi9 out_slave_addr", false,-1, 63,0);
        tracep->declQuad(c+868,"SocTop io_slave_axi9 out_serial_data", false,-1, 63,0);
        tracep->declBit(c+872,"SocTop io_slave_axi9 out_serial_write", false,-1);
        tracep->declQuad(c+870,"SocTop io_slave_axi9 in_rtc_data", false,-1, 63,0);
        tracep->declBit(c+873,"SocTop io_slave_axi9 out_rtc_read", false,-1);
        tracep->declBit(c+849,"SocTop io_slave_axi9 aw_shankhand", false,-1);
        tracep->declBit(c+850,"SocTop io_slave_axi9 w_shankhand", false,-1);
        tracep->declBit(c+484,"SocTop io_slave_axi9 b_shankhand", false,-1);
        tracep->declBus(c+425,"SocTop io_slave_axi9 s_write_state", false,-1, 1,0);
        tracep->declBus(c+851,"SocTop io_slave_axi9 s_write_state_nxt", false,-1, 1,0);
        tracep->declBit(c+852,"SocTop io_slave_axi9 ar_shankhand", false,-1);
        tracep->declBit(c+485,"SocTop io_slave_axi9 r_shankhand", false,-1);
        tracep->declBus(c+426,"SocTop io_slave_axi9 s_read_state", false,-1, 1,0);
        tracep->declBus(c+853,"SocTop io_slave_axi9 s_read_state_nxt", false,-1, 1,0);
        tracep->declQuad(c+427,"SocTop io_slave_axi9 write_data_reg", false,-1, 63,0);
        tracep->declQuad(c+429,"SocTop io_slave_axi9 write_addr_reg", false,-1, 63,0);
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
    VlWide<4>/*127:0*/ __Vtemp58;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(((IData)(vlSelf->SocTop__DOT__tim_axi_r_resp) 
                                   << 2U)),6);
        tracep->fullCData(oldp+2,(vlSelf->SocTop__DOT__tim_axi_r_resp),2);
        tracep->fullQData(oldp+3,(vlSelf->SocTop__DOT__rvcpu_inst_addr),64);
        tracep->fullQData(oldp+5,(vlSelf->SocTop__DOT__uncache_arb_data_o),64);
        tracep->fullBit(oldp+7,(vlSelf->SocTop__DOT__i_cache_read_ena));
        tracep->fullQData(oldp+8,(vlSelf->SocTop__DOT__i_cache_addr),64);
        tracep->fullBit(oldp+10,(vlSelf->SocTop__DOT__i_caceh_resp));
        tracep->fullQData(oldp+11,(vlSelf->SocTop__DOT__arbitrate_d_data),64);
        tracep->fullQData(oldp+13,(vlSelf->SocTop__DOT__arbitrate_i_data),64);
        tracep->fullBit(oldp+15,(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_cache_valid));
        tracep->fullBit(oldp+16,((vlSelf->SocTop__DOT__clint6__DOT__car_mtime_l 
                                  > vlSelf->SocTop__DOT__clint6__DOT__csr_mtime_h)));
        tracep->fullCData(oldp+17,(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_id),4);
        tracep->fullQData(oldp+18,(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_addr),64);
        tracep->fullCData(oldp+20,(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_len),8);
        tracep->fullCData(oldp+21,(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_size),3);
        tracep->fullCData(oldp+22,(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_burst),2);
        tracep->fullCData(oldp+23,(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_cache),4);
        tracep->fullCData(oldp+24,(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_port),3);
        tracep->fullCData(oldp+25,(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_qos),4);
        tracep->fullBit(oldp+26,(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_valid));
        tracep->fullQData(oldp+27,(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_data),64);
        tracep->fullCData(oldp+29,(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_strb),8);
        tracep->fullBit(oldp+30,(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_last));
        tracep->fullBit(oldp+31,(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_valid));
        tracep->fullCData(oldp+32,(vlSelf->SocTop__DOT__t_axi_ar_id),4);
        tracep->fullQData(oldp+33,(vlSelf->SocTop__DOT__t_axi_ar_addr),64);
        tracep->fullCData(oldp+35,(vlSelf->SocTop__DOT__t_axi_ar_len),8);
        tracep->fullCData(oldp+36,(vlSelf->SocTop__DOT__t_axi_ar_size),3);
        tracep->fullCData(oldp+37,(vlSelf->SocTop__DOT__t_axi_ar_burst),2);
        tracep->fullCData(oldp+38,(vlSelf->SocTop__DOT__t_axi_ar_cache),4);
        tracep->fullCData(oldp+39,(vlSelf->SocTop__DOT__t_axi_ar_prot),3);
        tracep->fullCData(oldp+40,(vlSelf->SocTop__DOT__t_axi_ar_qos),4);
        tracep->fullBit(oldp+41,(vlSelf->SocTop__DOT__t_axi_ar_valid));
        tracep->fullBit(oldp+42,(vlSelf->SocTop__DOT__t_axi_r_ready));
        tracep->fullCData(oldp+43,(((IData)(vlSelf->SocTop__DOT__clint6__DOT__time_reg_resp) 
                                    << 2U)),6);
        tracep->fullCData(oldp+44,(vlSelf->SocTop__DOT__add_axi_b_valid),3);
        tracep->fullCData(oldp+45,(vlSelf->SocTop__DOT__add_axi_r_last),3);
        tracep->fullCData(oldp+46,(vlSelf->SocTop__DOT__add_axi_r_valid),3);
        tracep->fullBit(oldp+47,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))));
        tracep->fullBit(oldp+48,(vlSelf->SocTop__DOT__soc_axi_ar_ready));
        tracep->fullCData(oldp+49,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                     ? (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__r_s_axi_ar_id)
                                     : 0U)),4);
        tracep->fullBit(oldp+50,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))));
        tracep->fullBit(oldp+51,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))));
        tracep->fullCData(oldp+52,(((2U == (IData)(vlSelf->SocTop__DOT__clint6__DOT__state_time_m))
                                     ? (IData)(vlSelf->SocTop__DOT__clint6__DOT__time_reg_id)
                                     : 0U)),4);
        tracep->fullCData(oldp+53,(vlSelf->SocTop__DOT__clint6__DOT__time_reg_resp),2);
        tracep->fullBit(oldp+54,(vlSelf->SocTop__DOT__tim_axi_b_valid));
        tracep->fullBit(oldp+55,(vlSelf->SocTop__DOT__tim_axi_r_last));
        tracep->fullBit(oldp+56,((2U == (IData)(vlSelf->SocTop__DOT__clint6__DOT__state_time_r))));
        tracep->fullBit(oldp+57,((2U == (IData)(vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_write_state))));
        tracep->fullBit(oldp+58,(vlSelf->SocTop__DOT__io_axi_ar_ready));
        tracep->fullBit(oldp+59,((2U == (IData)(vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_read_state))));
        tracep->fullBit(oldp+60,((2U == (IData)(vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_read_state))));
        tracep->fullQData(oldp+61,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))
                                     ? vlSelf->SocTop__DOT__axi_mnq4__DOT__write_addr_reg
                                     : 0ULL)),64);
        tracep->fullQData(oldp+63,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))
                                     ? vlSelf->SocTop__DOT__axi_mnq4__DOT__write_data_reg
                                     : 0ULL)),64);
        tracep->fullQData(oldp+65,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc),64);
        tracep->fullIData(oldp+67,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst),32);
        tracep->fullBit(oldp+68,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena));
        tracep->fullCData(oldp+69,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr),5);
        tracep->fullBit(oldp+70,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena));
        tracep->fullCData(oldp+71,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type),8);
        tracep->fullCData(oldp+72,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_sel),3);
        tracep->fullQData(oldp+73,(((IData)((0U != 
                                             (3U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type))))
                                     ? (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                        + (((- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset) 
                                                                   >> 0xbU))))) 
                                            << 0xcU) 
                                           | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset))))
                                     : 0ULL)),64);
        tracep->fullQData(oldp+75,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena) 
                                     | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena))
                                     ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data
                                     : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch)
                                         ? (4ULL + vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc)
                                         : 0ULL))),64);
        tracep->fullBit(oldp+77,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_div_req));
        tracep->fullCData(oldp+78,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr),5);
        tracep->fullBit(oldp+79,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena));
        tracep->fullCData(oldp+80,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr),5);
        tracep->fullBit(oldp+81,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena));
        tracep->fullQData(oldp+82,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data),64);
        tracep->fullQData(oldp+84,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc),64);
        tracep->fullCData(oldp+86,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type),8);
        tracep->fullCData(oldp+87,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode),8);
        tracep->fullQData(oldp+88,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1),64);
        tracep->fullQData(oldp+90,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2),64);
        tracep->fullBit(oldp+92,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdena));
        tracep->fullSData(oldp+93,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset),12);
        tracep->fullCData(oldp+94,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type),8);
        tracep->fullQData(oldp+95,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data),64);
        tracep->fullCData(oldp+97,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel),3);
        tracep->fullQData(oldp+98,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr),64);
        tracep->fullQData(oldp+100,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_pc),64);
        tracep->fullIData(oldp+102,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_ex_inst),32);
        tracep->fullIData(oldp+103,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_inst),32);
        tracep->fullBit(oldp+104,(vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__ex_pc_change));
        tracep->fullBit(oldp+105,(vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__id_pc_change));
        tracep->fullQData(oldp+106,(vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__pc_ex),64);
        tracep->fullQData(oldp+108,(vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__pc_id),64);
        tracep->fullBit(oldp+110,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id2__DOT__fl_bub_temp));
        tracep->fullCData(oldp+111,((0x7fU & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)),7);
        tracep->fullCData(oldp+112,((0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+113,((7U & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                           >> 0xcU))),3);
        tracep->fullSData(oldp+114,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                     >> 0x14U)),12);
        tracep->fullCData(oldp+115,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+116,((0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                              >> 0x14U))),5);
        tracep->fullIData(oldp+117,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                     >> 0xcU)),20);
        tracep->fullSData(oldp+118,(((0xfe0U & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                 >> 7U)))),12);
        tracep->fullQData(oldp+119,((1ULL + (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))),64);
        tracep->fullQData(oldp+121,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sub_op2),64);
        tracep->fullQData(oldp+123,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2),64);
        tracep->fullQData(oldp+125,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_addw_op2),64);
        tracep->fullBit(oldp+127,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_ls_op2));
        tracep->fullQData(oldp+128,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__shift_res),64);
        tracep->fullIData(oldp+130,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sllw_op2),32);
        tracep->fullQData(oldp+131,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sllw_res),64);
        tracep->fullIData(oldp+133,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_srlw_op2),32);
        tracep->fullQData(oldp+134,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__srlw_res),64);
        tracep->fullIData(oldp+136,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sraw_op2),32);
        tracep->fullQData(oldp+137,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sraw_res),64);
        tracep->fullIData(oldp+139,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2),32);
        tracep->fullQData(oldp+140,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2)))),64);
        tracep->fullQData(oldp+142,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__upper_imm),64);
        tracep->fullQData(oldp+144,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_data),64);
        tracep->fullBit(oldp+146,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_finish_sign));
        tracep->fullBit(oldp+147,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_ready));
        tracep->fullBit(oldp+148,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__finish));
        tracep->fullBit(oldp+149,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__dr_ready));
        tracep->fullQData(oldp+150,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_divdata),64);
        tracep->fullQData(oldp+152,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op2_divdata),64);
        tracep->fullBit(oldp+154,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch));
        tracep->fullBit(oldp+155,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena));
        tracep->fullSData(oldp+156,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx),12);
        tracep->fullQData(oldp+157,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data),64);
        tracep->fullBit(oldp+159,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena));
        tracep->fullBit(oldp+160,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena));
        tracep->fullBit(oldp+161,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena));
        tracep->fullBit(oldp+162,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en));
        tracep->fullBit(oldp+163,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en));
        tracep->fullQData(oldp+164,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data),64);
        tracep->fullQData(oldp+166,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value),64);
        tracep->fullQData(oldp+168,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
                                     | vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1)),64);
        tracep->fullQData(oldp+170,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
                                     & (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1))),64);
        tracep->fullBit(oldp+172,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__mult_valid));
        tracep->fullBit(oldp+173,((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                 >> 0x3fU)))));
        tracep->fullBit(oldp+174,((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2 
                                                 >> 0x3fU)))));
        tracep->fullQData(oldp+175,(((1U & (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                    >> 0x3fU)))
                                      ? (1ULL + (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1))
                                      : vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1)),64);
        tracep->fullQData(oldp+177,(((1U & (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2 
                                                    >> 0x3fU)))
                                      ? (1ULL + (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))
                                      : vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)),64);
        tracep->fullWData(oldp+179,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand),128);
        tracep->fullQData(oldp+183,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multipler),64);
        if ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multipler))) {
            __Vtemp58[0U] = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[0U];
            __Vtemp58[1U] = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[1U];
            __Vtemp58[2U] = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[2U];
            __Vtemp58[3U] = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[3U];
        } else {
            __Vtemp58[0U] = 0U;
            __Vtemp58[1U] = 0U;
            __Vtemp58[2U] = 0U;
            __Vtemp58[3U] = 0U;
        }
        tracep->fullWData(oldp+185,(__Vtemp58),128);
        tracep->fullWData(oldp+189,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp),128);
        tracep->fullBit(oldp+193,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_signbit));
        tracep->fullCData(oldp+194,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__counter),7);
        tracep->fullBit(oldp+195,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sign));
        tracep->fullQData(oldp+196,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__dividend_t),64);
        tracep->fullQData(oldp+198,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__divider_t),64);
        tracep->fullWData(oldp+200,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a),129);
        tracep->fullWData(oldp+205,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_b),65);
        tracep->fullBit(oldp+208,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sigin_inst));
        tracep->fullBit(oldp+209,((0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+210,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en) 
                                   & (0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)))));
        tracep->fullBit(oldp+211,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en) 
                                   & (0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)))));
        tracep->fullQData(oldp+212,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcycle),64);
        tracep->fullBit(oldp+214,((0x300U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+215,(((0x300U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+216,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus));
        tracep->fullBit(oldp+217,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_ena));
        tracep->fullBit(oldp+218,((1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                          | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                          ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)
                                          : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena) 
                                             | ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                 ? (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                            >> 7U))
                                                 : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)))))));
        tracep->fullBit(oldp+219,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie));
        tracep->fullBit(oldp+220,((1U & ((~ ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                             | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))) 
                                         & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)
                                             ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)
                                             : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                 ? (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                            >> 3U))
                                                 : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)))))));
        tracep->fullBit(oldp+221,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie));
        tracep->fullCData(oldp+222,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                      ? 3U : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                      ? (IData)(
                                                                (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                                 >> 0xbU))
                                                      : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp)))))),2);
        tracep->fullCData(oldp+223,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp),2);
        tracep->fullCData(oldp+224,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs),2);
        tracep->fullBit(oldp+225,((3U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs))));
        tracep->fullQData(oldp+226,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus),64);
        tracep->fullBit(oldp+228,((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+229,(((((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en)) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
        tracep->fullBit(oldp+230,(((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
        tracep->fullQData(oldp+231,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base),62);
        tracep->fullQData(oldp+233,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base 
                                     << 2U)),64);
        tracep->fullBit(oldp+235,((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+236,((((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena))));
        tracep->fullBit(oldp+237,(((((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en)) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
        tracep->fullQData(oldp+238,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mepc),64);
        tracep->fullBit(oldp+240,((0x342U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+241,(((0x342U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+242,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause));
        tracep->fullBit(oldp+243,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
        tracep->fullQData(oldp+244,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                      ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value
                                      : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause)
                                          ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data
                                          : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause))),64);
        tracep->fullQData(oldp+246,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause),64);
        tracep->fullBit(oldp+248,((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+249,(((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+250,(((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
        tracep->fullBit(oldp+251,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie));
        tracep->fullQData(oldp+252,(((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie)) 
                                     << 7U)),64);
        tracep->fullBit(oldp+254,((0x344U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+255,(((0x344U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+256,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip));
        tracep->fullQData(oldp+257,((QData)((IData)(
                                                    ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip) 
                                                     << 7U)))),64);
        tracep->fullBit(oldp+259,((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+260,(((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+261,(((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
        tracep->fullQData(oldp+262,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mscrstch),64);
        tracep->fullCData(oldp+264,((7U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))),3);
        tracep->fullCData(oldp+265,((3U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                   >> 1U)))),2);
        tracep->fullBit(oldp+266,((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                 >> 2U)))));
        tracep->fullQData(oldp+267,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_pc_o),64);
        tracep->fullIData(oldp+269,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o),32);
        tracep->fullQData(oldp+270,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__pc_data1),64);
        tracep->fullBit(oldp+272,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_exyn));
        tracep->fullBit(oldp+273,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__teap_yn));
        tracep->fullQData(oldp+274,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__trap_code),64);
        tracep->fullQData(oldp+276,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[0]),64);
        tracep->fullQData(oldp+278,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[1]),64);
        tracep->fullQData(oldp+280,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[2]),64);
        tracep->fullQData(oldp+282,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[3]),64);
        tracep->fullQData(oldp+284,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[4]),64);
        tracep->fullQData(oldp+286,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[5]),64);
        tracep->fullQData(oldp+288,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[6]),64);
        tracep->fullQData(oldp+290,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[7]),64);
        tracep->fullQData(oldp+292,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[8]),64);
        tracep->fullQData(oldp+294,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[9]),64);
        tracep->fullQData(oldp+296,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[10]),64);
        tracep->fullQData(oldp+298,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[11]),64);
        tracep->fullQData(oldp+300,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[12]),64);
        tracep->fullQData(oldp+302,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[13]),64);
        tracep->fullQData(oldp+304,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[14]),64);
        tracep->fullQData(oldp+306,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[15]),64);
        tracep->fullQData(oldp+308,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[16]),64);
        tracep->fullQData(oldp+310,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[17]),64);
        tracep->fullQData(oldp+312,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[18]),64);
        tracep->fullQData(oldp+314,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[19]),64);
        tracep->fullQData(oldp+316,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[20]),64);
        tracep->fullQData(oldp+318,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[21]),64);
        tracep->fullQData(oldp+320,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[22]),64);
        tracep->fullQData(oldp+322,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[23]),64);
        tracep->fullQData(oldp+324,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[24]),64);
        tracep->fullQData(oldp+326,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[25]),64);
        tracep->fullQData(oldp+328,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[26]),64);
        tracep->fullQData(oldp+330,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[27]),64);
        tracep->fullQData(oldp+332,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[28]),64);
        tracep->fullQData(oldp+334,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[29]),64);
        tracep->fullQData(oldp+336,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[30]),64);
        tracep->fullQData(oldp+338,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[31]),64);
        tracep->fullIData(oldp+340,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__i),32);
        tracep->fullQData(oldp+341,((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                     >> 9U)),55);
        tracep->fullCData(oldp+343,((0x3fU & (IData)(
                                                     (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                                      >> 3U)))),6);
        tracep->fullCData(oldp+344,(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst),6);
        tracep->fullBit(oldp+345,((0x20U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst))));
        tracep->fullBit(oldp+346,(vlSelf->SocTop__DOT__i_cache2__DOT__read_ok));
        tracep->fullQData(oldp+347,(vlSelf->SocTop__DOT__i_cache2__DOT__miss_data),64);
        tracep->fullBit(oldp+349,(vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_o));
        tracep->fullBit(oldp+350,(vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_t));
        tracep->fullBit(oldp+351,(vlSelf->SocTop__DOT__i_cache2__DOT__write_i_ok));
        tracep->fullQData(oldp+352,(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__out_data),55);
        tracep->fullBit(oldp+354,(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__out_vaild));
        tracep->fullQData(oldp+355,(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__out_data),55);
        tracep->fullBit(oldp+357,(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__out_vaild));
        tracep->fullQData(oldp+358,(vlSelf->SocTop__DOT__i_cache2__DOT__u_data01__DOT__out_data),64);
        tracep->fullQData(oldp+360,(vlSelf->SocTop__DOT__i_cache2__DOT__u_data02__DOT__out_data),64);
        tracep->fullIData(oldp+362,(vlSelf->SocTop__DOT__i_cache2__DOT__i),32);
        tracep->fullQData(oldp+363,((0x80000000000000ULL 
                                     | (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                        >> 9U))),56);
        tracep->fullBit(oldp+365,((1U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))));
        tracep->fullBit(oldp+366,((1U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))));
        tracep->fullCData(oldp+367,(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread),6);
        tracep->fullBit(oldp+368,((2U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))));
        tracep->fullBit(oldp+369,(vlSelf->SocTop__DOT__d_cache3__DOT__read_ok));
        tracep->fullCData(oldp+370,(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite),6);
        tracep->fullBit(oldp+371,((2U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))));
        tracep->fullBit(oldp+372,(vlSelf->SocTop__DOT__d_cache3__DOT__read_w_ok));
        tracep->fullBit(oldp+373,((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))));
        tracep->fullIData(oldp+374,(vlSelf->SocTop__DOT__d_cache3__DOT__i),32);
        tracep->fullIData(oldp+375,(vlSelf->SocTop__DOT__d_cache3__DOT__j),32);
        tracep->fullQData(oldp+376,(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data),55);
        tracep->fullBit(oldp+378,(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild));
        tracep->fullQData(oldp+379,(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data),55);
        tracep->fullBit(oldp+381,(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild));
        tracep->fullQData(oldp+382,(vlSelf->SocTop__DOT__d_cache3__DOT__u_data0__DOT__out_data),64);
        tracep->fullQData(oldp+384,(vlSelf->SocTop__DOT__d_cache3__DOT__u_data1__DOT__out_data),64);
        tracep->fullCData(oldp+386,(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state),3);
        tracep->fullCData(oldp+387,(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_id),4);
        tracep->fullQData(oldp+388,(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_addr),64);
        tracep->fullCData(oldp+390,(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_len),8);
        tracep->fullCData(oldp+391,(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_size),3);
        tracep->fullCData(oldp+392,(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_burst),2);
        tracep->fullCData(oldp+393,(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_cache),4);
        tracep->fullCData(oldp+394,(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_prot),3);
        tracep->fullCData(oldp+395,(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_qos),4);
        tracep->fullBit(oldp+396,(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ar_valid));
        tracep->fullBit(oldp+397,(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_cache_valid));
        tracep->fullBit(oldp+398,(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_ok));
        tracep->fullCData(oldp+399,(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_id),4);
        tracep->fullQData(oldp+400,(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_addr),64);
        tracep->fullCData(oldp+402,(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_len),8);
        tracep->fullCData(oldp+403,(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_size),3);
        tracep->fullCData(oldp+404,(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_burst),2);
        tracep->fullCData(oldp+405,(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_cache),4);
        tracep->fullCData(oldp+406,(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_prot),3);
        tracep->fullCData(oldp+407,(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_qos),4);
        tracep->fullBit(oldp+408,(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_ar_valid));
        tracep->fullBit(oldp+409,(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_cache_valid));
        tracep->fullBit(oldp+410,(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_ok));
        tracep->fullCData(oldp+411,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state),2);
        tracep->fullCData(oldp+412,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state),2);
        tracep->fullQData(oldp+413,(vlSelf->SocTop__DOT__axi_mnq4__DOT__write_data_reg),64);
        tracep->fullQData(oldp+415,(vlSelf->SocTop__DOT__axi_mnq4__DOT__write_addr_reg),64);
        tracep->fullCData(oldp+417,(vlSelf->SocTop__DOT__axi_mnq4__DOT__r_s_axi_ar_id),4);
        tracep->fullQData(oldp+418,(vlSelf->SocTop__DOT__clint6__DOT__car_mtime_l),64);
        tracep->fullQData(oldp+420,(vlSelf->SocTop__DOT__clint6__DOT__csr_mtime_h),64);
        tracep->fullCData(oldp+422,(vlSelf->SocTop__DOT__clint6__DOT__state_time_m),2);
        tracep->fullCData(oldp+423,(vlSelf->SocTop__DOT__clint6__DOT__time_reg_id),4);
        tracep->fullCData(oldp+424,(vlSelf->SocTop__DOT__clint6__DOT__state_time_r),2);
        tracep->fullCData(oldp+425,(vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_write_state),2);
        tracep->fullCData(oldp+426,(vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_read_state),2);
        tracep->fullQData(oldp+427,(vlSelf->SocTop__DOT__io_slave_axi9__DOT__write_data_reg),64);
        tracep->fullQData(oldp+429,(vlSelf->SocTop__DOT__io_slave_axi9__DOT__write_addr_reg),64);
        tracep->fullBit(oldp+431,((((5U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state)) 
                                    & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__read_uncahce_shankhand))
                                    ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_cache_valid)
                                    : (((2U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state)) 
                                        & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__write_uncahce_shankhand)) 
                                       & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_cache_valid)))));
        tracep->fullQData(oldp+432,(((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                                      ? (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                                           == (vlSelf->SocTop__DOT__uncache_dc_addr 
                                               >> 9U)) 
                                          & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild))
                                          ? vlSelf->SocTop__DOT__d_cache3__DOT__u_data0__DOT__out_data
                                          : (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                                               == (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                   >> 9U)) 
                                              & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))
                                              ? vlSelf->SocTop__DOT__d_cache3__DOT__u_data1__DOT__out_data
                                              : 0ULL))
                                      : 0ULL)),64);
        tracep->fullBit(oldp+434,(((IData)(vlSelf->SocTop__DOT__uncache_mmio7__DOT__uncache)
                                    ? (((5U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state)) 
                                        & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__read_uncahce_shankhand))
                                        ? (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_cache_valid)
                                        : (((2U == (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state)) 
                                            & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__write_uncahce_shankhand)) 
                                           & (IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_cache_valid)))
                                    : (IData)(vlSelf->SocTop__DOT__uncache_dc_finish))));
        tracep->fullQData(oldp+435,(((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                                      ? vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_data
                                      : ((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                                          ? vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_data
                                          : 0ULL))),64);
        tracep->fullBit(oldp+437,(((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                                    ? (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_resp)
                                    : ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                                       & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_resp)))));
        tracep->fullCData(oldp+438,(((2U == (IData)(vlSelf->SocTop__DOT__clint6__DOT__state_time_r))
                                      ? (0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                                 >> 4U))
                                      : 0U)),4);
        tracep->fullCData(oldp+439,(((2U == (IData)(vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_read_state))
                                      ? (0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_id))
                                      : 0U)),4);
        tracep->fullCData(oldp+440,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_ena)
                                      ? ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak)
                                          ? 0xbU : 
                                         (0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                   >> 7U)))
                                      : 0U)),5);
        tracep->fullSData(oldp+441,((0xfffU & ((2U 
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
        tracep->fullQData(oldp+442,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr)
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
        tracep->fullBit(oldp+444,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+445,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x2000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+446,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x3000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+447,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x4000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+448,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+449,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+450,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x1000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+451,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x5000U 
                                                    == 
                                                    (0x40007000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+452,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+453,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x1000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+454,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x4000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+455,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x5000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+456,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+457,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+458,((1U & (IData)(((0x80U 
                                                  == 
                                                  (0x80U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+459,((1U & (IData)(((0x80U 
                                                  == 
                                                  (0x80U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+460,(((IData)(((0x80U 
                                             == (0x80U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                            & (0U == 
                                               (0x7000U 
                                                & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                   & (0U == (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                             >> 0x14U)))));
        tracep->fullBit(oldp+461,(((IData)(((0x80U 
                                             == (0x80U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                            & (0U == 
                                               (0x7000U 
                                                & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                   & (0x18U == (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+462,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr) 
                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena))));
        tracep->fullBit(oldp+463,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr) 
                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena))));
        tracep->fullBit(oldp+464,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))));
        tracep->fullQData(oldp+465,(((((- (QData)((IData)(
                                                          (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                           >> 0x1fU)))) 
                                       << 0xcU) | (QData)((IData)(
                                                                  (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                   >> 0x14U)))) 
                                     + vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op)),64);
        tracep->fullBit(oldp+467,((1U & (((~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1)) 
                                          & (~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1))) 
                                         & (~ (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                                == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                               & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena)))))));
        tracep->fullQData(oldp+468,(((2U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type))
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
        tracep->fullBit(oldp+470,(((IData)(vlSelf->SocTop__DOT__uncache_dc_re) 
                                   & (1U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)))));
        tracep->fullBit(oldp+471,(((IData)(vlSelf->SocTop__DOT__uncache_dc_we) 
                                   & (1U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)))));
        tracep->fullBit(oldp+472,(((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
                                   & (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                                        == (vlSelf->SocTop__DOT__uncache_dc_addr 
                                            >> 9U)) 
                                       & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild)) 
                                      | ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                                          == (vlSelf->SocTop__DOT__uncache_dc_addr 
                                              >> 9U)) 
                                         & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))))));
        tracep->fullBit(oldp+473,(((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                                   & (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                                        == (vlSelf->SocTop__DOT__uncache_dc_addr 
                                            >> 9U)) 
                                       & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild)) 
                                      | ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                                          == (vlSelf->SocTop__DOT__uncache_dc_addr 
                                              >> 9U)) 
                                         & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))))));
        tracep->fullBit(oldp+474,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state)) 
                                   & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                      >> 2U))));
        tracep->fullBit(oldp+475,((((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                    >> 2U) & (2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)))));
        tracep->fullQData(oldp+476,((((((IData)(vlSelf->SocTop__DOT__clint6__DOT__mode_right) 
                                        & (IData)(vlSelf->SocTop__DOT__clint6__DOT__w_shakehand)) 
                                       & (IData)(vlSelf->SocTop__DOT__clint6__DOT__aw_shakehand)) 
                                      & (0x2004000ULL 
                                         == (((QData)((IData)(
                                                              vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))))
                                      ? (vlSelf->SocTop__DOT__clint6__DOT__wmask 
                                         & (((QData)((IData)(
                                                             vlSelf->SocTop__DOT__add_axi_w_data[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->SocTop__DOT__add_axi_w_data[2U]))))
                                      : (1ULL + vlSelf->SocTop__DOT__clint6__DOT__car_mtime_l))),64);
        tracep->fullQData(oldp+478,((((((IData)(vlSelf->SocTop__DOT__clint6__DOT__mode_right) 
                                        & (IData)(vlSelf->SocTop__DOT__clint6__DOT__w_shakehand)) 
                                       & (IData)(vlSelf->SocTop__DOT__clint6__DOT__aw_shakehand)) 
                                      & (0x200bff8ULL 
                                         == (((QData)((IData)(
                                                              vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))))
                                      ? (vlSelf->SocTop__DOT__clint6__DOT__wmask 
                                         & (((QData)((IData)(
                                                             vlSelf->SocTop__DOT__add_axi_w_data[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->SocTop__DOT__add_axi_w_data[2U]))))
                                      : vlSelf->SocTop__DOT__clint6__DOT__csr_mtime_h)),64);
        tracep->fullBit(oldp+480,(((IData)(vlSelf->SocTop__DOT__tim_axi_b_valid) 
                                   & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                      >> 1U))));
        tracep->fullBit(oldp+481,(((2U == (IData)(vlSelf->SocTop__DOT__clint6__DOT__state_time_r)) 
                                   & ((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                      >> 1U))));
        tracep->fullQData(oldp+482,(((((IData)(vlSelf->SocTop__DOT__clint6__DOT__mode_right) 
                                       & (IData)(vlSelf->SocTop__DOT__clint6__DOT__ar_shakehand)) 
                                      & (0x2004000ULL 
                                         == (((QData)((IData)(
                                                              vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))))
                                      ? vlSelf->SocTop__DOT__clint6__DOT__car_mtime_l
                                      : ((((IData)(vlSelf->SocTop__DOT__clint6__DOT__mode_right) 
                                           & (IData)(vlSelf->SocTop__DOT__clint6__DOT__ar_shakehand)) 
                                          & (0x200bff8ULL 
                                             == (((QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))))
                                          ? vlSelf->SocTop__DOT__clint6__DOT__csr_mtime_h
                                          : 0ULL))),64);
        tracep->fullBit(oldp+484,(((2U == (IData)(vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_write_state)) 
                                   & (IData)(vlSelf->SocTop__DOT__add_axi_b_ready))));
        tracep->fullBit(oldp+485,(((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                   & (2U == (IData)(vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_read_state)))));
        tracep->fullQData(oldp+486,(vlSelf->SocTop__DOT__rvcpu_data_addr),64);
        tracep->fullCData(oldp+488,(vlSelf->SocTop__DOT__rvcpu_wmask),8);
        tracep->fullQData(oldp+489,(vlSelf->SocTop__DOT__rvcpu_data_o),64);
        tracep->fullBit(oldp+491,(vlSelf->SocTop__DOT__rvcpu_we));
        tracep->fullBit(oldp+492,(vlSelf->SocTop__DOT__rvcpu_re));
        tracep->fullBit(oldp+493,(vlSelf->SocTop__DOT__core_stall_l));
        tracep->fullQData(oldp+494,(((IData)(vlSelf->SocTop__DOT__uncache_mmio7__DOT__uncache)
                                      ? (vlSelf->SocTop__DOT__rvcpu_data_o 
                                         & (((QData)((IData)(
                                                             (((- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSelf->SocTop__DOT__rvcpu_wmask) 
                                                                              >> 7U)))) 
                                                               << 0x18U) 
                                                              | ((0xff0000U 
                                                                  & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SocTop__DOT__rvcpu_wmask) 
                                                                                >> 6U)))) 
                                                                     << 0x10U)) 
                                                                 | ((0xff00U 
                                                                     & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SocTop__DOT__rvcpu_wmask) 
                                                                                >> 5U)))) 
                                                                        << 8U)) 
                                                                    | (0xffU 
                                                                       & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SocTop__DOT__rvcpu_wmask) 
                                                                                >> 4U)))))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->SocTop__DOT__rvcpu_wmask) 
                                                                               >> 3U)))) 
                                                                << 0x18U) 
                                                               | ((0xff0000U 
                                                                   & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SocTop__DOT__rvcpu_wmask) 
                                                                                >> 2U)))) 
                                                                      << 0x10U)) 
                                                                  | ((0xff00U 
                                                                      & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SocTop__DOT__rvcpu_wmask) 
                                                                                >> 1U)))) 
                                                                         << 8U)) 
                                                                     | (0xffU 
                                                                        & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SocTop__DOT__rvcpu_wmask))))))))))))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+496,(vlSelf->SocTop__DOT__uncache_arb_addr),64);
        tracep->fullCData(oldp+498,(((IData)(vlSelf->SocTop__DOT__uncache_mmio7__DOT__uncache)
                                      ? (IData)(vlSelf->SocTop__DOT__rvcpu_wmask)
                                      : 0U)),8);
        tracep->fullBit(oldp+499,(vlSelf->SocTop__DOT__uncache_arb_we));
        tracep->fullBit(oldp+500,(vlSelf->SocTop__DOT__uncache_arb_re));
        tracep->fullQData(oldp+501,(vlSelf->SocTop__DOT__uncache_dc_data),64);
        tracep->fullQData(oldp+503,(vlSelf->SocTop__DOT__uncache_dc_addr),64);
        tracep->fullCData(oldp+505,(vlSelf->SocTop__DOT__uncache_dc_mask),8);
        tracep->fullBit(oldp+506,(vlSelf->SocTop__DOT__uncache_dc_we));
        tracep->fullBit(oldp+507,(vlSelf->SocTop__DOT__uncache_dc_re));
        tracep->fullBit(oldp+508,(vlSelf->SocTop__DOT__uncache_dc_finish));
        tracep->fullIData(oldp+509,(vlSelf->SocTop__DOT__i_cache_inst_data),32);
        tracep->fullBit(oldp+510,(vlSelf->SocTop__DOT__i_cache_inst_valid));
        tracep->fullQData(oldp+511,(vlSelf->SocTop__DOT__d_cache_data_out),64);
        tracep->fullQData(oldp+513,(vlSelf->SocTop__DOT__d_cache_out_addr),64);
        tracep->fullCData(oldp+515,(vlSelf->SocTop__DOT__d_cache_out_type),4);
        tracep->fullBit(oldp+516,(vlSelf->SocTop__DOT__arbitrate_d_ok));
        tracep->fullBit(oldp+517,(vlSelf->SocTop__DOT__t_axi_ar_ready));
        tracep->fullCData(oldp+518,(vlSelf->SocTop__DOT__t_axi_r_id),4);
        tracep->fullQData(oldp+519,(vlSelf->SocTop__DOT__t_axi_r_data),64);
        tracep->fullCData(oldp+521,(vlSelf->SocTop__DOT__t_axi_r_resp),2);
        tracep->fullBit(oldp+522,(vlSelf->SocTop__DOT__t_axi_r_last));
        tracep->fullBit(oldp+523,(vlSelf->SocTop__DOT__t_axi_r_valid));
        tracep->fullSData(oldp+524,(vlSelf->SocTop__DOT__add_axi_aw_id),12);
        tracep->fullWData(oldp+525,(vlSelf->SocTop__DOT__add_axi_aw_addr),192);
        tracep->fullIData(oldp+531,(vlSelf->SocTop__DOT__add_axi_aw_len),24);
        tracep->fullSData(oldp+532,(vlSelf->SocTop__DOT__add_axi_aw_size),9);
        tracep->fullCData(oldp+533,(vlSelf->SocTop__DOT__add_axi_aw_burst),6);
        tracep->fullSData(oldp+534,(vlSelf->SocTop__DOT__add_axi_aw_cache),12);
        tracep->fullSData(oldp+535,(vlSelf->SocTop__DOT__add_axi_aw_prot),9);
        tracep->fullSData(oldp+536,(vlSelf->SocTop__DOT__add_axi_aw_qos),12);
        tracep->fullCData(oldp+537,(vlSelf->SocTop__DOT__add_axi_aw_valid),3);
        tracep->fullCData(oldp+538,(vlSelf->SocTop__DOT__add_axi_aw_ready),3);
        tracep->fullWData(oldp+539,(vlSelf->SocTop__DOT__add_axi_w_data),192);
        tracep->fullIData(oldp+545,(vlSelf->SocTop__DOT__add_axi_w_strb),24);
        tracep->fullCData(oldp+546,(vlSelf->SocTop__DOT__add_axi_w_last),3);
        tracep->fullCData(oldp+547,(vlSelf->SocTop__DOT__add_axi_w_valid),3);
        tracep->fullCData(oldp+548,(vlSelf->SocTop__DOT__add_axi_w_ready),3);
        tracep->fullSData(oldp+549,(vlSelf->SocTop__DOT__add_axi_b_id),12);
        tracep->fullCData(oldp+550,(vlSelf->SocTop__DOT__add_axi_b_ready),3);
        tracep->fullSData(oldp+551,(vlSelf->SocTop__DOT__add_axi_ar_id),12);
        tracep->fullWData(oldp+552,(vlSelf->SocTop__DOT__add_axi_ar_addr),192);
        tracep->fullIData(oldp+558,(vlSelf->SocTop__DOT__add_axi_ar_len),24);
        tracep->fullSData(oldp+559,(vlSelf->SocTop__DOT__add_axi_ar_size),9);
        tracep->fullCData(oldp+560,(vlSelf->SocTop__DOT__add_axi_ar_burst),6);
        tracep->fullSData(oldp+561,(vlSelf->SocTop__DOT__add_axi_ar_cache),12);
        tracep->fullSData(oldp+562,(vlSelf->SocTop__DOT__add_axi_ar_prot),9);
        tracep->fullSData(oldp+563,(vlSelf->SocTop__DOT__add_axi_ar_qos),12);
        tracep->fullCData(oldp+564,(vlSelf->SocTop__DOT__add_axi_ar_valid),3);
        tracep->fullCData(oldp+565,(vlSelf->SocTop__DOT__add_axi_ar_ready),3);
        tracep->fullSData(oldp+566,(vlSelf->SocTop__DOT__add_axi_r_id),12);
        tracep->fullWData(oldp+567,(vlSelf->SocTop__DOT__add_axi_r_data),192);
        tracep->fullCData(oldp+573,(vlSelf->SocTop__DOT__add_axi_r_ready),3);
        tracep->fullCData(oldp+574,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_id) 
                                             >> 8U))),4);
        tracep->fullQData(oldp+575,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_aw_addr[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_aw_addr[4U])))),64);
        tracep->fullCData(oldp+577,((0xffU & (vlSelf->SocTop__DOT__add_axi_aw_len 
                                              >> 0x10U))),8);
        tracep->fullCData(oldp+578,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_size) 
                                           >> 6U))),3);
        tracep->fullCData(oldp+579,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_burst) 
                                           >> 4U))),2);
        tracep->fullCData(oldp+580,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_cache) 
                                             >> 8U))),4);
        tracep->fullCData(oldp+581,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_prot) 
                                           >> 6U))),3);
        tracep->fullCData(oldp+582,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_qos) 
                                             >> 8U))),4);
        tracep->fullBit(oldp+583,(vlSelf->SocTop__DOT__soc_axi_aw_ready));
        tracep->fullBit(oldp+584,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                         >> 2U))));
        tracep->fullQData(oldp+585,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_w_data[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_w_data[4U])))),64);
        tracep->fullCData(oldp+587,((0xffU & (vlSelf->SocTop__DOT__add_axi_w_strb 
                                              >> 0x10U))),8);
        tracep->fullBit(oldp+588,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_last) 
                                         >> 2U))));
        tracep->fullBit(oldp+589,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                         >> 2U))));
        tracep->fullBit(oldp+590,(vlSelf->SocTop__DOT__soc_axi_w_ready));
        tracep->fullBit(oldp+591,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                         >> 2U))));
        tracep->fullCData(oldp+592,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                             >> 8U))),4);
        tracep->fullQData(oldp+593,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_ar_addr[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_ar_addr[4U])))),64);
        tracep->fullCData(oldp+595,((0xffU & (vlSelf->SocTop__DOT__add_axi_ar_len 
                                              >> 0x10U))),8);
        tracep->fullCData(oldp+596,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_size) 
                                           >> 6U))),3);
        tracep->fullCData(oldp+597,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_burst) 
                                           >> 4U))),2);
        tracep->fullCData(oldp+598,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_cache) 
                                             >> 8U))),4);
        tracep->fullCData(oldp+599,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_prot) 
                                           >> 6U))),3);
        tracep->fullCData(oldp+600,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_qos) 
                                             >> 8U))),4);
        tracep->fullBit(oldp+601,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                                         >> 2U))));
        tracep->fullBit(oldp+602,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                         >> 2U))));
        tracep->fullCData(oldp+603,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_id) 
                                             >> 4U))),4);
        tracep->fullQData(oldp+604,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))),64);
        tracep->fullCData(oldp+606,((0xffU & (vlSelf->SocTop__DOT__add_axi_aw_len 
                                              >> 8U))),8);
        tracep->fullCData(oldp+607,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_size) 
                                           >> 3U))),3);
        tracep->fullCData(oldp+608,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_burst) 
                                           >> 2U))),2);
        tracep->fullCData(oldp+609,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_cache) 
                                             >> 4U))),4);
        tracep->fullCData(oldp+610,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_prot) 
                                           >> 3U))),3);
        tracep->fullCData(oldp+611,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_qos) 
                                             >> 4U))),4);
        tracep->fullBit(oldp+612,(vlSelf->SocTop__DOT__tim_axi_aw_ready));
        tracep->fullBit(oldp+613,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                         >> 1U))));
        tracep->fullQData(oldp+614,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_w_data[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_w_data[2U])))),64);
        tracep->fullCData(oldp+616,((0xffU & (vlSelf->SocTop__DOT__add_axi_w_strb 
                                              >> 8U))),8);
        tracep->fullBit(oldp+617,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_last) 
                                         >> 1U))));
        tracep->fullBit(oldp+618,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                         >> 1U))));
        tracep->fullBit(oldp+619,(vlSelf->SocTop__DOT__tim_axi_w_ready));
        tracep->fullBit(oldp+620,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                         >> 1U))));
        tracep->fullCData(oldp+621,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                             >> 4U))),4);
        tracep->fullQData(oldp+622,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))),64);
        tracep->fullCData(oldp+624,((0xffU & (vlSelf->SocTop__DOT__add_axi_ar_len 
                                              >> 8U))),8);
        tracep->fullCData(oldp+625,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_size) 
                                           >> 3U))),3);
        tracep->fullCData(oldp+626,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_burst) 
                                           >> 2U))),2);
        tracep->fullCData(oldp+627,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_cache) 
                                             >> 4U))),4);
        tracep->fullCData(oldp+628,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_prot) 
                                           >> 3U))),3);
        tracep->fullCData(oldp+629,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_qos) 
                                             >> 4U))),4);
        tracep->fullBit(oldp+630,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                                         >> 1U))));
        tracep->fullBit(oldp+631,(vlSelf->SocTop__DOT__tim_axi_ar_ready));
        tracep->fullQData(oldp+632,(vlSelf->SocTop__DOT__tim_axi_r_data),64);
        tracep->fullBit(oldp+634,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                         >> 1U))));
        tracep->fullCData(oldp+635,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_id))),4);
        tracep->fullQData(oldp+636,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_aw_addr[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_aw_addr[0U])))),64);
        tracep->fullCData(oldp+638,((0xffU & vlSelf->SocTop__DOT__add_axi_aw_len)),8);
        tracep->fullCData(oldp+639,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_size))),3);
        tracep->fullCData(oldp+640,((3U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_burst))),2);
        tracep->fullCData(oldp+641,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_cache))),4);
        tracep->fullCData(oldp+642,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_prot))),3);
        tracep->fullCData(oldp+643,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_qos))),4);
        tracep->fullBit(oldp+644,(vlSelf->SocTop__DOT__io_axi_aw_ready));
        tracep->fullBit(oldp+645,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_valid))));
        tracep->fullQData(oldp+646,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_w_data[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_w_data[0U])))),64);
        tracep->fullCData(oldp+648,((0xffU & vlSelf->SocTop__DOT__add_axi_w_strb)),8);
        tracep->fullBit(oldp+649,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_w_last))));
        tracep->fullBit(oldp+650,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_w_valid))));
        tracep->fullBit(oldp+651,(vlSelf->SocTop__DOT__io_axi_w_ready));
        tracep->fullBit(oldp+652,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_b_ready))));
        tracep->fullCData(oldp+653,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_id))),4);
        tracep->fullQData(oldp+654,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_ar_addr[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_ar_addr[0U])))),64);
        tracep->fullCData(oldp+656,((0xffU & vlSelf->SocTop__DOT__add_axi_ar_len)),8);
        tracep->fullCData(oldp+657,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_size))),3);
        tracep->fullCData(oldp+658,((3U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_burst))),2);
        tracep->fullCData(oldp+659,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_cache))),4);
        tracep->fullCData(oldp+660,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_prot))),3);
        tracep->fullCData(oldp+661,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_qos))),4);
        tracep->fullBit(oldp+662,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_valid))));
        tracep->fullBit(oldp+663,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_r_ready))));
        tracep->fullCData(oldp+664,(vlSelf->SocTop__DOT__mmio_thing),3);
        tracep->fullBit(oldp+665,(vlSelf->SocTop__DOT__axi_mnq4__DOT__ar_shankhand));
        tracep->fullQData(oldp+666,(((IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__ar_shankhand)
                                      ? (((QData)((IData)(
                                                          vlSelf->SocTop__DOT__add_axi_ar_addr[5U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->SocTop__DOT__add_axi_ar_addr[4U])))
                                      : 0ULL)),64);
        tracep->fullCData(oldp+668,((0x1fU & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                              >> 0xfU))),5);
        tracep->fullQData(oldp+669,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_data),64);
        tracep->fullCData(oldp+671,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1),5);
        tracep->fullBit(oldp+672,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1));
        tracep->fullCData(oldp+673,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2),5);
        tracep->fullBit(oldp+674,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2));
        tracep->fullBit(oldp+675,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ctrl_req));
        tracep->fullCData(oldp+676,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type),8);
        tracep->fullCData(oldp+677,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode),8);
        tracep->fullQData(oldp+678,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op),64);
        tracep->fullBit(oldp+680,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_ena));
        tracep->fullBit(oldp+681,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_pip_jalrena));
        tracep->fullBit(oldp+682,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_if_flush));
        tracep->fullCData(oldp+683,(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl),5);
        tracep->fullQData(oldp+684,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_id_data),64);
        tracep->fullBit(oldp+686,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_ctrl_req));
        tracep->fullQData(oldp+687,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_pc),64);
        tracep->fullIData(oldp+689,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_inst),32);
        tracep->fullIData(oldp+690,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm),20);
        tracep->fullSData(oldp+691,((vlSelf->SocTop__DOT__i_cache_inst_data 
                                     >> 0x14U)),12);
        tracep->fullSData(oldp+692,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm),12);
        tracep->fullCData(oldp+693,((0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)),7);
        tracep->fullBit(oldp+694,((IData)((0x6fU == 
                                           (0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)))));
        tracep->fullBit(oldp+695,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr));
        tracep->fullBit(oldp+696,((IData)((0x63U == 
                                           (0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)))));
        tracep->fullQData(oldp+697,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc),64);
        tracep->fullCData(oldp+699,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__rs1),5);
        tracep->fullBit(oldp+700,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui));
        tracep->fullBit(oldp+701,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc));
        tracep->fullBit(oldp+702,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal));
        tracep->fullBit(oldp+703,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr));
        tracep->fullBit(oldp+704,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jump));
        tracep->fullBit(oldp+705,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srai));
        tracep->fullBit(oldp+706,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addiw));
        tracep->fullBit(oldp+707,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slliw));
        tracep->fullBit(oldp+708,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srliw));
        tracep->fullBit(oldp+709,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraiw));
        tracep->fullBit(oldp+710,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_add));
        tracep->fullBit(oldp+711,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sub));
        tracep->fullBit(oldp+712,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sll));
        tracep->fullBit(oldp+713,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slt));
        tracep->fullBit(oldp+714,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sltu));
        tracep->fullBit(oldp+715,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_xor));
        tracep->fullBit(oldp+716,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srl));
        tracep->fullBit(oldp+717,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sra));
        tracep->fullBit(oldp+718,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_or));
        tracep->fullBit(oldp+719,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_and));
        tracep->fullBit(oldp+720,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_div));
        tracep->fullBit(oldp+721,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divu));
        tracep->fullBit(oldp+722,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mul));
        tracep->fullBit(oldp+723,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulh));
        tracep->fullBit(oldp+724,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulhsu));
        tracep->fullBit(oldp+725,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulhu));
        tracep->fullBit(oldp+726,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_rem));
        tracep->fullBit(oldp+727,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remu));
        tracep->fullBit(oldp+728,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addw));
        tracep->fullBit(oldp+729,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_subw));
        tracep->fullBit(oldp+730,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sllw));
        tracep->fullBit(oldp+731,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srlw));
        tracep->fullBit(oldp+732,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraw));
        tracep->fullBit(oldp+733,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divuw));
        tracep->fullBit(oldp+734,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divw));
        tracep->fullBit(oldp+735,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulw));
        tracep->fullBit(oldp+736,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remuw));
        tracep->fullBit(oldp+737,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remw));
        tracep->fullBit(oldp+738,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw));
        tracep->fullBit(oldp+739,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs));
        tracep->fullBit(oldp+740,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc));
        tracep->fullBit(oldp+741,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrwi));
        tracep->fullBit(oldp+742,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc))));
        tracep->fullBit(oldp+743,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak));
        tracep->fullBit(oldp+744,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1));
        tracep->fullBit(oldp+745,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1));
        tracep->fullBit(oldp+746,((1U & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl) 
                                         >> 3U))));
        tracep->fullQData(oldp+747,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__exe_res),64);
        tracep->fullQData(oldp+749,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divrem_data),64);
        tracep->fullQData(oldp+751,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__yushu),64);
        tracep->fullQData(oldp+753,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__shang),64);
        tracep->fullCData(oldp+755,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_byte),8);
        tracep->fullSData(oldp+756,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte),16);
        tracep->fullIData(oldp+757,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word),32);
        tracep->fullQData(oldp+758,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_data),64);
        tracep->fullCData(oldp+760,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_mask),8);
        tracep->fullBit(oldp+761,(vlSelf->SocTop__DOT__uncache_mmio7__DOT__start_sign));
        tracep->fullBit(oldp+762,(vlSelf->SocTop__DOT__uncache_mmio7__DOT__uncache));
        tracep->fullQData(oldp+763,((((QData)((IData)(
                                                      (((- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->SocTop__DOT__rvcpu_wmask) 
                                                                       >> 7U)))) 
                                                        << 0x18U) 
                                                       | ((0xff0000U 
                                                           & ((- (IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->SocTop__DOT__rvcpu_wmask) 
                                                                             >> 6U)))) 
                                                              << 0x10U)) 
                                                          | ((0xff00U 
                                                              & ((- (IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSelf->SocTop__DOT__rvcpu_wmask) 
                                                                                >> 5U)))) 
                                                                 << 8U)) 
                                                             | (0xffU 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelf->SocTop__DOT__rvcpu_wmask) 
                                                                                >> 4U)))))))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (((- (IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSelf->SocTop__DOT__rvcpu_wmask) 
                                                                                >> 3U)))) 
                                                                    << 0x18U) 
                                                                   | ((0xff0000U 
                                                                       & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SocTop__DOT__rvcpu_wmask) 
                                                                                >> 2U)))) 
                                                                          << 0x10U)) 
                                                                      | ((0xff00U 
                                                                          & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SocTop__DOT__rvcpu_wmask) 
                                                                                >> 1U)))) 
                                                                             << 8U)) 
                                                                         | (0xffU 
                                                                            & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SocTop__DOT__rvcpu_wmask)))))))))))),64);
        tracep->fullBit(oldp+765,(vlSelf->SocTop__DOT__i_cache2__DOT__icache_if_shankhand));
        tracep->fullCData(oldp+766,(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst_nxt),6);
        tracep->fullBit(oldp+767,(vlSelf->SocTop__DOT__i_cache2__DOT__inst_hit_ok));
        tracep->fullQData(oldp+768,((vlSelf->SocTop__DOT__uncache_dc_addr 
                                     >> 9U)),55);
        tracep->fullCData(oldp+770,((0x3fU & (IData)(
                                                     (vlSelf->SocTop__DOT__uncache_dc_addr 
                                                      >> 3U)))),6);
        tracep->fullCData(oldp+771,(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread_nxt),6);
        tracep->fullBit(oldp+772,(vlSelf->SocTop__DOT__d_cache3__DOT__mem_hit_ok));
        tracep->fullBit(oldp+773,(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_ok));
        tracep->fullQData(oldp+774,(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_addr),64);
        tracep->fullQData(oldp+776,(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_data),64);
        tracep->fullCData(oldp+778,(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_type),4);
        tracep->fullBit(oldp+779,(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_clean_o));
        tracep->fullBit(oldp+780,(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_clean_t));
        tracep->fullBit(oldp+781,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_i_ok));
        tracep->fullCData(oldp+782,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_type),4);
        tracep->fullQData(oldp+783,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_addr),64);
        tracep->fullCData(oldp+785,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_data_ena1),8);
        tracep->fullBit(oldp+786,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_tag_ena1));
        tracep->fullCData(oldp+787,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_data_ena2),8);
        tracep->fullBit(oldp+788,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_tag_ena2));
        tracep->fullBit(oldp+789,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_resp));
        tracep->fullCData(oldp+790,(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite_nxt),6);
        tracep->fullCData(oldp+791,(vlSelf->SocTop__DOT__d_cache3__DOT__hitw_data_strb1),8);
        tracep->fullCData(oldp+792,(vlSelf->SocTop__DOT__d_cache3__DOT__hitw_data_strb2),8);
        tracep->fullBit(oldp+793,(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_ok));
        tracep->fullQData(oldp+794,(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_addr),64);
        tracep->fullQData(oldp+796,(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_data),64);
        tracep->fullCData(oldp+798,(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_type),4);
        tracep->fullBit(oldp+799,(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_clean_o));
        tracep->fullBit(oldp+800,(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_clean_t));
        tracep->fullBit(oldp+801,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_i_ok));
        tracep->fullCData(oldp+802,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_type),4);
        tracep->fullQData(oldp+803,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_addr),64);
        tracep->fullCData(oldp+805,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_data_ena1),8);
        tracep->fullBit(oldp+806,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_tag_ena1));
        tracep->fullCData(oldp+807,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_data_ena2),8);
        tracep->fullBit(oldp+808,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_tag_ena2));
        tracep->fullBit(oldp+809,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_resp));
        tracep->fullBit(oldp+810,(vlSelf->SocTop__DOT__d_cache3__DOT__tag_ena1));
        tracep->fullBit(oldp+811,(vlSelf->SocTop__DOT__d_cache3__DOT__tag_ena2));
        tracep->fullCData(oldp+812,(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena1),8);
        tracep->fullQData(oldp+813,(vlSelf->SocTop__DOT__d_cache3__DOT__in_rem_data1),64);
        tracep->fullCData(oldp+815,(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena2),8);
        tracep->fullQData(oldp+816,(vlSelf->SocTop__DOT__d_cache3__DOT__in_ram_data2),64);
        tracep->fullQData(oldp+818,((0x80000000000000ULL 
                                     | (vlSelf->SocTop__DOT__uncache_dc_addr 
                                        >> 9U))),56);
        tracep->fullBit(oldp+820,(vlSelf->SocTop__DOT__arbitratem4__DOT__read_dcache_shankhand));
        tracep->fullBit(oldp+821,(vlSelf->SocTop__DOT__arbitratem4__DOT__write_dcache_shankhand));
        tracep->fullBit(oldp+822,(vlSelf->SocTop__DOT__arbitratem4__DOT__read_icache_shankhand));
        tracep->fullBit(oldp+823,(vlSelf->SocTop__DOT__arbitratem4__DOT__read_uncahce_shankhand));
        tracep->fullBit(oldp+824,(vlSelf->SocTop__DOT__arbitratem4__DOT__write_uncahce_shankhand));
        tracep->fullCData(oldp+825,(vlSelf->SocTop__DOT__arbitratem4__DOT__arbitrate_state_nxt),3);
        tracep->fullBit(oldp+826,(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_success));
        tracep->fullBit(oldp+827,(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_success));
        tracep->fullBit(oldp+828,(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_success));
        tracep->fullBit(oldp+829,(vlSelf->SocTop__DOT__arbitratem4__DOT__dread_arshankhand));
        tracep->fullBit(oldp+830,(vlSelf->SocTop__DOT__arbitratem4__DOT__iread_arshankhand));
        tracep->fullBit(oldp+831,((((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                    >> 2U) & (IData)(vlSelf->SocTop__DOT__soc_axi_aw_ready))));
        tracep->fullBit(oldp+832,((((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                    >> 2U) & (IData)(vlSelf->SocTop__DOT__soc_axi_w_ready))));
        tracep->fullCData(oldp+833,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state_nxt),2);
        tracep->fullBit(oldp+834,(vlSelf->SocTop__DOT__axi_mnq4__DOT__ar_shankhand));
        tracep->fullCData(oldp+835,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state_nxt),2);
        tracep->fullBit(oldp+836,((((IData)(vlSelf->SocTop__DOT__clint6__DOT__mode_right) 
                                    & (IData)(vlSelf->SocTop__DOT__clint6__DOT__ar_shakehand)) 
                                   & (0x2004000ULL 
                                      == (((QData)((IData)(
                                                           vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))))));
        tracep->fullBit(oldp+837,((((IData)(vlSelf->SocTop__DOT__clint6__DOT__mode_right) 
                                    & (IData)(vlSelf->SocTop__DOT__clint6__DOT__ar_shakehand)) 
                                   & (0x200bff8ULL 
                                      == (((QData)((IData)(
                                                           vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))))));
        tracep->fullBit(oldp+838,(((((IData)(vlSelf->SocTop__DOT__clint6__DOT__mode_right) 
                                     & (IData)(vlSelf->SocTop__DOT__clint6__DOT__w_shakehand)) 
                                    & (IData)(vlSelf->SocTop__DOT__clint6__DOT__aw_shakehand)) 
                                   & (0x2004000ULL 
                                      == (((QData)((IData)(
                                                           vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))))));
        tracep->fullBit(oldp+839,(((((IData)(vlSelf->SocTop__DOT__clint6__DOT__mode_right) 
                                     & (IData)(vlSelf->SocTop__DOT__clint6__DOT__w_shakehand)) 
                                    & (IData)(vlSelf->SocTop__DOT__clint6__DOT__aw_shakehand)) 
                                   & (0x200bff8ULL 
                                      == (((QData)((IData)(
                                                           vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))))));
        tracep->fullQData(oldp+840,(vlSelf->SocTop__DOT__clint6__DOT__wmask),64);
        tracep->fullBit(oldp+842,(vlSelf->SocTop__DOT__clint6__DOT__aw_shakehand));
        tracep->fullBit(oldp+843,(vlSelf->SocTop__DOT__clint6__DOT__w_shakehand));
        tracep->fullBit(oldp+844,(vlSelf->SocTop__DOT__clint6__DOT__mode_right));
        tracep->fullCData(oldp+845,(vlSelf->SocTop__DOT__clint6__DOT__state_time_m_nxt),2);
        tracep->fullBit(oldp+846,((IData)(((((((0U 
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
        tracep->fullBit(oldp+847,(vlSelf->SocTop__DOT__clint6__DOT__ar_shakehand));
        tracep->fullCData(oldp+848,(vlSelf->SocTop__DOT__clint6__DOT__state_time_r_nxt),2);
        tracep->fullBit(oldp+849,(vlSelf->SocTop__DOT__io_slave_axi9__DOT__aw_shankhand));
        tracep->fullBit(oldp+850,(((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                   & (IData)(vlSelf->SocTop__DOT__io_axi_w_ready))));
        tracep->fullCData(oldp+851,(vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_write_state_nxt),2);
        tracep->fullBit(oldp+852,(vlSelf->SocTop__DOT__io_slave_axi9__DOT__ar_shankhand));
        tracep->fullCData(oldp+853,(vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_read_state_nxt),2);
        tracep->fullBit(oldp+854,(vlSelf->clk));
        tracep->fullBit(oldp+855,(vlSelf->rst));
        tracep->fullBit(oldp+856,(vlSelf->read_ena_sign_));
        tracep->fullQData(oldp+857,(vlSelf->out_addr_outp),64);
        tracep->fullQData(oldp+859,(vlSelf->read_data_sign_),64);
        tracep->fullBit(oldp+861,(vlSelf->out_write_ram_ena));
        tracep->fullQData(oldp+862,(vlSelf->out_write_ram_data),64);
        tracep->fullQData(oldp+864,(vlSelf->out_write_ram_addr),64);
        tracep->fullQData(oldp+866,(vlSelf->out_slave_addr_),64);
        tracep->fullQData(oldp+868,(vlSelf->out_serial_data_),64);
        tracep->fullQData(oldp+870,(vlSelf->in_rtc_data_),64);
        tracep->fullBit(oldp+872,(vlSelf->out_serial_write_));
        tracep->fullBit(oldp+873,(vlSelf->out_rtc_read_));
        tracep->fullBit(oldp+874,((1U & (~ (IData)(vlSelf->rst)))));
        tracep->fullBit(oldp+875,((1U & ((~ (IData)(vlSelf->rst)) 
                                         & ((1U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                             ? (IData)(vlSelf->SocTop__DOT__add_axi_aw_ready)
                                             : ((2U 
                                                 & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                 ? 
                                                ((IData)(vlSelf->SocTop__DOT__add_axi_aw_ready) 
                                                 >> 1U)
                                                 : 
                                                (((IData)(vlSelf->SocTop__DOT__mmio_thing) 
                                                  & (IData)(vlSelf->SocTop__DOT__add_axi_aw_ready)) 
                                                 >> 2U)))))));
        tracep->fullBit(oldp+876,((1U & ((~ (IData)(vlSelf->rst)) 
                                         & ((1U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                             ? (IData)(vlSelf->SocTop__DOT__add_axi_w_ready)
                                             : ((2U 
                                                 & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                 ? 
                                                ((IData)(vlSelf->SocTop__DOT__add_axi_w_ready) 
                                                 >> 1U)
                                                 : 
                                                (((IData)(vlSelf->SocTop__DOT__mmio_thing) 
                                                  & (IData)(vlSelf->SocTop__DOT__add_axi_w_ready)) 
                                                 >> 2U)))))));
        tracep->fullCData(oldp+877,(((IData)(vlSelf->rst)
                                      ? 0U : (0xfU 
                                              & ((1U 
                                                  & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                  ? (IData)(vlSelf->SocTop__DOT__add_axi_b_id)
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                   ? 
                                                  ((IData)(vlSelf->SocTop__DOT__add_axi_b_id) 
                                                   >> 4U)
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                    ? 
                                                   ((IData)(vlSelf->SocTop__DOT__add_axi_b_id) 
                                                    >> 8U)
                                                    : 0U)))))),4);
        tracep->fullCData(oldp+878,(((IData)(vlSelf->rst)
                                      ? 0U : (3U & 
                                              ((1U 
                                                & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                ? ((IData)(vlSelf->SocTop__DOT__clint6__DOT__time_reg_resp) 
                                                   << 2U)
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                    ? 
                                                   (0x3fffffffU 
                                                    & (IData)(vlSelf->SocTop__DOT__clint6__DOT__time_reg_resp))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                     ? 
                                                    (0xfffffffU 
                                                     & ((IData)(vlSelf->SocTop__DOT__clint6__DOT__time_reg_resp) 
                                                        >> 2U))
                                                     : 0U)))))),2);
        tracep->fullBit(oldp+879,((1U & ((~ (IData)(vlSelf->rst)) 
                                         & ((1U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                             ? (IData)(vlSelf->SocTop__DOT__add_axi_b_valid)
                                             : ((2U 
                                                 & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                                 ? 
                                                ((IData)(vlSelf->SocTop__DOT__add_axi_b_valid) 
                                                 >> 1U)
                                                 : 
                                                (((IData)(vlSelf->SocTop__DOT__mmio_thing) 
                                                  & (IData)(vlSelf->SocTop__DOT__add_axi_b_valid)) 
                                                 >> 2U)))))));
        tracep->fullQData(oldp+880,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                      ? vlSelf->read_data_sign_
                                      : 0ULL)),64);
        tracep->fullQData(oldp+882,(((2U == (IData)(vlSelf->SocTop__DOT__io_slave_axi9__DOT__s_read_state))
                                      ? vlSelf->in_rtc_data_
                                      : 0ULL)),64);
        tracep->fullQData(oldp+884,(((1U & ((~ (IData)(vlSelf->rst)) 
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
        tracep->fullBit(oldp+886,(((IData)(vlSelf->rst)
                                    ? 0U : (1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)))));
        tracep->fullQData(oldp+887,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
                                                 ? 
                                                (0xfffffffffffffffeULL 
                                                 & vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc)
                                                 : vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc))),64);
        tracep->fullBit(oldp+889,(((~ (IData)(vlSelf->rst)) 
                                   & (IData)(vlSelf->SocTop__DOT__i_cache_inst_valid))));
        tracep->fullQData(oldp+890,(((IData)(vlSelf->rst)
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
        tracep->fullQData(oldp+892,(((IData)(vlSelf->rst)
                                      ? 0ULL : vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc)),64);
        tracep->fullCData(oldp+894,(((IData)(vlSelf->rst)
                                      ? 0U : (7U & 
                                              (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                               >> 0xcU)))),3);
        tracep->fullQData(oldp+895,((((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1))
                                      ? ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                           == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                          & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                          ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                          : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                         [vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1])
                                      : 0ULL)),64);
        tracep->fullQData(oldp+897,((((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2))
                                      ? ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                           == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                          & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                          ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                          : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                         [vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2])
                                      : 0ULL)),64);
        tracep->fullQData(oldp+899,(((IData)(vlSelf->rst)
                                      ? 0ULL : vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc)),64);
        tracep->fullIData(oldp+901,(((IData)(vlSelf->rst)
                                      ? 0U : vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)),32);
        tracep->fullIData(oldp+902,(((IData)(vlSelf->rst)
                                      ? 0U : vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_ex_inst)),32);
        tracep->fullQData(oldp+903,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
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
        tracep->fullQData(oldp+905,(((IData)((0x6fU 
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
        tracep->fullBit(oldp+907,(((IData)(vlSelf->rst)
                                    ? 0U : (1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1) 
                                                   & (2U 
                                                      == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                  & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1) 
                                                     == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)))))));
        tracep->fullBit(oldp+908,(((IData)(vlSelf->rst)
                                    ? 0U : (1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2) 
                                                   & (2U 
                                                      == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                  & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2) 
                                                     == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)))))));
        tracep->fullQData(oldp+909,(((IData)(vlSelf->rst)
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
        tracep->fullQData(oldp+911,(((IData)(vlSelf->rst)
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
        tracep->fullQData(oldp+913,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((1U 
                                                 & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                            >> 2U)))
                                                 ? 
                                                ((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)) 
                                                 << 0x20U)
                                                 : (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data))))),64);
        tracep->fullCData(oldp+915,(((IData)(vlSelf->rst)
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
        tracep->fullCData(oldp+916,(((IData)(vlSelf->rst)
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
        tracep->fullCData(oldp+917,(((IData)(vlSelf->rst)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                             >> 2U)))
                                               ? 0xf0U
                                               : 0xfU))),8);
        tracep->fullBit(oldp+918,(((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_aw_valid) 
                                   & ((~ (IData)(vlSelf->rst)) 
                                      & ((1U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                          ? (IData)(vlSelf->SocTop__DOT__add_axi_aw_ready)
                                          : ((2U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                              ? ((IData)(vlSelf->SocTop__DOT__add_axi_aw_ready) 
                                                 >> 1U)
                                              : (((IData)(vlSelf->SocTop__DOT__mmio_thing) 
                                                  & (IData)(vlSelf->SocTop__DOT__add_axi_aw_ready)) 
                                                 >> 2U)))))));
        tracep->fullBit(oldp+919,(((IData)(vlSelf->SocTop__DOT__arbitratem4__DOT__dwrite_w_valid) 
                                   & ((~ (IData)(vlSelf->rst)) 
                                      & ((1U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                          ? (IData)(vlSelf->SocTop__DOT__add_axi_w_ready)
                                          : ((2U & (IData)(vlSelf->SocTop__DOT__mmio_thing))
                                              ? ((IData)(vlSelf->SocTop__DOT__add_axi_w_ready) 
                                                 >> 1U)
                                              : (((IData)(vlSelf->SocTop__DOT__mmio_thing) 
                                                  & (IData)(vlSelf->SocTop__DOT__add_axi_w_ready)) 
                                                 >> 2U)))))));
        tracep->fullIData(oldp+920,(3U),32);
        tracep->fullBit(oldp+921,(1U));
        tracep->fullCData(oldp+922,(0U),2);
    }
}
