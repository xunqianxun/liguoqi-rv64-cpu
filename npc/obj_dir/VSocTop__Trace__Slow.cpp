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
        tracep->declBit(c+662,"clk", false,-1);
        tracep->declBit(c+663,"rst", false,-1);
        tracep->declBit(c+664,"out_read_ram_ena", false,-1);
        tracep->declBit(c+665,"out_read_inst_ena", false,-1);
        tracep->declQuad(c+666,"out_addr_outp", false,-1, 63,0);
        tracep->declBus(c+668,"in_inst_data_in", false,-1, 31,0);
        tracep->declQuad(c+669,"in_ram_data_in", false,-1, 63,0);
        tracep->declBit(c+671,"out_write_ram_ena", false,-1);
        tracep->declQuad(c+672,"out_write_ram_data", false,-1, 63,0);
        tracep->declQuad(c+674,"out_write_ram_addr", false,-1, 63,0);
        tracep->declBit(c+662,"SocTop clk", false,-1);
        tracep->declBit(c+663,"SocTop rst", false,-1);
        tracep->declBit(c+664,"SocTop out_read_ram_ena", false,-1);
        tracep->declBit(c+665,"SocTop out_read_inst_ena", false,-1);
        tracep->declQuad(c+666,"SocTop out_addr_outp", false,-1, 63,0);
        tracep->declBus(c+668,"SocTop in_inst_data_in", false,-1, 31,0);
        tracep->declQuad(c+669,"SocTop in_ram_data_in", false,-1, 63,0);
        tracep->declBit(c+671,"SocTop out_write_ram_ena", false,-1);
        tracep->declQuad(c+672,"SocTop out_write_ram_data", false,-1, 63,0);
        tracep->declQuad(c+674,"SocTop out_write_ram_addr", false,-1, 63,0);
        tracep->declBus(c+712,"SocTop SLAVE_NUM", false,-1, 31,0);
        tracep->declBit(c+662,"SocTop aclk", false,-1);
        tracep->declQuad(c+630,"SocTop rvcpu_inst_addr", false,-1, 63,0);
        tracep->declBit(c+663,"SocTop rvcpu_inst_ena", false,-1);
        tracep->declQuad(c+471,"SocTop rvcpu_data_addr", false,-1, 63,0);
        tracep->declBus(c+473,"SocTop rvcpu_wmask", false,-1, 7,0);
        tracep->declQuad(c+474,"SocTop rvcpu_data_o", false,-1, 63,0);
        tracep->declBit(c+476,"SocTop rvcpu_we", false,-1);
        tracep->declBit(c+477,"SocTop rvcpu_re", false,-1);
        tracep->declBus(c+478,"SocTop i_cache_inst_data", false,-1, 31,0);
        tracep->declBit(c+479,"SocTop i_cache_inst_valid", false,-1);
        tracep->declBit(c+480,"SocTop i_cache_read_ena", false,-1);
        tracep->declQuad(c+676,"SocTop i_cache_addr", false,-1, 63,0);
        tracep->declBit(c+481,"SocTop i_cache_ready", false,-1);
        tracep->declQuad(c+482,"SocTop d_cache_data_out", false,-1, 63,0);
        tracep->declBit(c+678,"SocTop d_cache_mem_finish", false,-1);
        tracep->declQuad(c+471,"SocTop d_cache_out_addr", false,-1, 63,0);
        tracep->declQuad(c+679,"SocTop d_cache_out_data", false,-1, 63,0);
        tracep->declBit(c+484,"SocTop d_cache_read_ena", false,-1);
        tracep->declBit(c+681,"SocTop d_cache_write_ena", false,-1);
        tracep->declQuad(c+5,"SocTop arbitrate_d_data", false,-1, 63,0);
        tracep->declBit(c+632,"SocTop arbitrate_d_ok", false,-1);
        tracep->declBus(c+7,"SocTop arbitrate_i_data", false,-1, 31,0);
        tracep->declBit(c+633,"SocTop arbitrate_i_ok", false,-1);
        tracep->declBit(c+485,"SocTop arbitrate_ti_sign", false,-1);
        tracep->declBit(c+486,"SocTop time_init_sign", false,-1);
        tracep->declBus(c+713,"SocTop t_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+487,"SocTop t_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+714,"SocTop t_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+715,"SocTop t_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+716,"SocTop t_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+717,"SocTop t_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+718,"SocTop t_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+713,"SocTop t_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+8,"SocTop t_axi_aw_ready", false,-1);
        tracep->declBit(c+489,"SocTop t_axi_aw_valid", false,-1);
        tracep->declQuad(c+490,"SocTop t_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+9,"SocTop t_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+719,"SocTop t_axi_w_last", false,-1);
        tracep->declBit(c+10,"SocTop t_axi_w_valid", false,-1);
        tracep->declBit(c+11,"SocTop t_axi_w_ready", false,-1);
        tracep->declBus(c+12,"SocTop t_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+13,"SocTop t_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+14,"SocTop t_axi_b_valid", false,-1);
        tracep->declBit(c+719,"SocTop t_axi_b_ready", false,-1);
        tracep->declBus(c+492,"SocTop t_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+493,"SocTop t_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+714,"SocTop t_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+715,"SocTop t_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+716,"SocTop t_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+717,"SocTop t_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+718,"SocTop t_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+713,"SocTop t_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+495,"SocTop t_axi_ar_valid", false,-1);
        tracep->declBit(c+15,"SocTop t_axi_ar_ready", false,-1);
        tracep->declBus(c+634,"SocTop t_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+16,"SocTop t_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+635,"SocTop t_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+636,"SocTop t_axi_r_last", false,-1);
        tracep->declBit(c+18,"SocTop t_axi_r_valid", false,-1);
        tracep->declBit(c+719,"SocTop t_axi_r_ready", false,-1);
        tracep->declBus(c+19,"SocTop add_axi_aw_id", false,-1, 11,0);
        tracep->declArray(c+20,"SocTop add_axi_aw_addr", false,-1, 191,0);
        tracep->declBus(c+26,"SocTop add_axi_aw_len", false,-1, 23,0);
        tracep->declBus(c+27,"SocTop add_axi_aw_size", false,-1, 8,0);
        tracep->declBus(c+28,"SocTop add_axi_aw_burst", false,-1, 5,0);
        tracep->declBus(c+29,"SocTop add_axi_aw_cache", false,-1, 11,0);
        tracep->declBus(c+30,"SocTop add_axi_aw_prot", false,-1, 8,0);
        tracep->declBus(c+31,"SocTop add_axi_aw_qos", false,-1, 11,0);
        tracep->declBus(c+32,"SocTop add_axi_aw_valid", false,-1, 2,0);
        tracep->declBus(c+33,"SocTop add_axi_aw_ready", false,-1, 2,0);
        tracep->declArray(c+34,"SocTop add_axi_w_data", false,-1, 191,0);
        tracep->declBus(c+40,"SocTop add_axi_w_strb", false,-1, 23,0);
        tracep->declBus(c+41,"SocTop add_axi_w_last", false,-1, 2,0);
        tracep->declBus(c+42,"SocTop add_axi_w_valid", false,-1, 2,0);
        tracep->declBus(c+43,"SocTop add_axi_w_ready", false,-1, 2,0);
        tracep->declBus(c+496,"SocTop add_axi_b_id", false,-1, 11,0);
        tracep->declBus(c+1,"SocTop add_axi_b_resp", false,-1, 5,0);
        tracep->declBus(c+497,"SocTop add_axi_b_valid", false,-1, 2,0);
        tracep->declBus(c+720,"SocTop add_axi_b_ready", false,-1, 2,0);
        tracep->declBus(c+44,"SocTop add_axi_ar_id", false,-1, 11,0);
        tracep->declArray(c+45,"SocTop add_axi_ar_addr", false,-1, 191,0);
        tracep->declBus(c+51,"SocTop add_axi_ar_len", false,-1, 23,0);
        tracep->declBus(c+52,"SocTop add_axi_ar_size", false,-1, 8,0);
        tracep->declBus(c+53,"SocTop add_axi_ar_burst", false,-1, 5,0);
        tracep->declBus(c+54,"SocTop add_axi_ar_cache", false,-1, 11,0);
        tracep->declBus(c+55,"SocTop add_axi_ar_prot", false,-1, 8,0);
        tracep->declBus(c+56,"SocTop add_axi_ar_qos", false,-1, 11,0);
        tracep->declBus(c+57,"SocTop add_axi_ar_valid", false,-1, 2,0);
        tracep->declBus(c+58,"SocTop add_axi_ar_ready", false,-1, 2,0);
        tracep->declBus(c+637,"SocTop add_axi_r_id", false,-1, 11,0);
        tracep->declArray(c+498,"SocTop add_axi_r_data", false,-1, 191,0);
        tracep->declBus(c+2,"SocTop add_axi_r_resp", false,-1, 5,0);
        tracep->declBus(c+638,"SocTop add_axi_r_last", false,-1, 2,0);
        tracep->declBus(c+59,"SocTop add_axi_r_valid", false,-1, 2,0);
        tracep->declBus(c+60,"SocTop add_axi_r_ready", false,-1, 2,0);
        tracep->declBus(c+61,"SocTop soc_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+62,"SocTop soc_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+64,"SocTop soc_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+65,"SocTop soc_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+66,"SocTop soc_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+67,"SocTop soc_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+68,"SocTop soc_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+69,"SocTop soc_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+70,"SocTop soc_axi_aw_ready", false,-1);
        tracep->declBit(c+71,"SocTop soc_axi_aw_valid", false,-1);
        tracep->declQuad(c+72,"SocTop soc_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+74,"SocTop soc_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+75,"SocTop soc_axi_w_last", false,-1);
        tracep->declBit(c+76,"SocTop soc_axi_w_valid", false,-1);
        tracep->declBit(c+77,"SocTop soc_axi_w_ready", false,-1);
        tracep->declBus(c+61,"SocTop soc_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+721,"SocTop soc_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+78,"SocTop soc_axi_b_valid", false,-1);
        tracep->declBit(c+722,"SocTop soc_axi_b_ready", false,-1);
        tracep->declBus(c+79,"SocTop soc_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+80,"SocTop soc_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+82,"SocTop soc_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+83,"SocTop soc_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+84,"SocTop soc_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+85,"SocTop soc_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+86,"SocTop soc_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+87,"SocTop soc_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+88,"SocTop soc_axi_ar_valid", false,-1);
        tracep->declBit(c+89,"SocTop soc_axi_ar_ready", false,-1);
        tracep->declBus(c+90,"SocTop soc_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+682,"SocTop soc_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+721,"SocTop soc_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+91,"SocTop soc_axi_r_last", false,-1);
        tracep->declBit(c+92,"SocTop soc_axi_r_valid", false,-1);
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
        tracep->declBus(c+422,"SocTop tim_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+3,"SocTop tim_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+504,"SocTop tim_axi_b_valid", false,-1);
        tracep->declBit(c+723,"SocTop tim_axi_b_ready", false,-1);
        tracep->declBus(c+111,"SocTop tim_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+112,"SocTop tim_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+114,"SocTop tim_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+115,"SocTop tim_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+116,"SocTop tim_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+117,"SocTop tim_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+118,"SocTop tim_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+119,"SocTop tim_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+120,"SocTop tim_axi_ar_valid", false,-1);
        tracep->declBit(c+121,"SocTop tim_axi_ar_ready", false,-1);
        tracep->declBus(c+122,"SocTop tim_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+505,"SocTop tim_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+4,"SocTop tim_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+123,"SocTop tim_axi_r_last", false,-1);
        tracep->declBit(c+724,"SocTop tim_axi_r_valid", false,-1);
        tracep->declBit(c+124,"SocTop tim_axi_r_ready", false,-1);
        tracep->declBus(c+125,"SocTop io_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+126,"SocTop io_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+128,"SocTop io_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+129,"SocTop io_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+130,"SocTop io_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+131,"SocTop io_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+132,"SocTop io_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+133,"SocTop io_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+725,"SocTop io_axi_aw_ready", false,-1);
        tracep->declBit(c+134,"SocTop io_axi_aw_valid", false,-1);
        tracep->declQuad(c+135,"SocTop io_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+137,"SocTop io_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+138,"SocTop io_axi_w_last", false,-1);
        tracep->declBit(c+139,"SocTop io_axi_w_valid", false,-1);
        tracep->declBit(c+726,"SocTop io_axi_w_ready", false,-1);
        tracep->declBus(c+727,"SocTop io_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+728,"SocTop io_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+729,"SocTop io_axi_b_valid", false,-1);
        tracep->declBit(c+730,"SocTop io_axi_b_ready", false,-1);
        tracep->declBus(c+140,"SocTop io_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+141,"SocTop io_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+143,"SocTop io_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+144,"SocTop io_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+145,"SocTop io_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+146,"SocTop io_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+147,"SocTop io_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+148,"SocTop io_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+149,"SocTop io_axi_ar_valid", false,-1);
        tracep->declBit(c+731,"SocTop io_axi_ar_ready", false,-1);
        tracep->declBus(c+732,"SocTop io_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+733,"SocTop io_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+735,"SocTop io_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+736,"SocTop io_axi_r_last", false,-1);
        tracep->declBit(c+737,"SocTop io_axi_r_valid", false,-1);
        tracep->declBit(c+150,"SocTop io_axi_r_ready", false,-1);
        tracep->declBus(c+738,"SocTop d_cache_mask_gd", false,-1, 7,0);
        tracep->declBit(c+151,"SocTop read_ram_sign", false,-1);
        tracep->declBit(c+152,"SocTop read_inst_sign", false,-1);
        tracep->declQuad(c+153,"SocTop addr_oup_sign", false,-1, 63,0);
        tracep->declBus(c+668,"SocTop inst_data_sign", false,-1, 31,0);
        tracep->declQuad(c+669,"SocTop ram_data_sign", false,-1, 63,0);
        tracep->declBit(c+78,"SocTop write_ena_sign", false,-1);
        tracep->declQuad(c+155,"SocTop write_addr_sign", false,-1, 63,0);
        tracep->declQuad(c+157,"SocTop write_data_sign", false,-1, 63,0);
        tracep->declBus(c+507,"SocTop prot_chose_write", false,-1, 2,0);
        tracep->declBus(c+508,"SocTop prot_chose_read", false,-1, 2,0);
        tracep->declBit(c+662,"SocTop rvcpu1 clk", false,-1);
        tracep->declBit(c+663,"SocTop rvcpu1 rst", false,-1);
        tracep->declQuad(c+630,"SocTop rvcpu1 inst_addr", false,-1, 63,0);
        tracep->declBit(c+663,"SocTop rvcpu1 inst_ena", false,-1);
        tracep->declBit(c+481,"SocTop rvcpu1 inst_ready", false,-1);
        tracep->declBus(c+478,"SocTop rvcpu1 inst", false,-1, 31,0);
        tracep->declBit(c+479,"SocTop rvcpu1 bui_inst_valid", false,-1);
        tracep->declQuad(c+471,"SocTop rvcpu1 data_addr", false,-1, 63,0);
        tracep->declBus(c+473,"SocTop rvcpu1 wmask", false,-1, 7,0);
        tracep->declQuad(c+474,"SocTop rvcpu1 data_o", false,-1, 63,0);
        tracep->declQuad(c+482,"SocTop rvcpu1 data_i", false,-1, 63,0);
        tracep->declBit(c+476,"SocTop rvcpu1 we", false,-1);
        tracep->declBit(c+477,"SocTop rvcpu1 re", false,-1);
        tracep->declBit(c+678,"SocTop rvcpu1 mem_finish", false,-1);
        tracep->declBit(c+486,"SocTop rvcpu1 timer_intr", false,-1);
        tracep->declQuad(c+684,"SocTop rvcpu1 pip_regfile_x1", false,-1, 63,0);
        tracep->declBit(c+686,"SocTop rvcpu1 pip_refflie_x1_ena", false,-1);
        tracep->declBus(c+509,"SocTop rvcpu1 pip_regfile_x1_addr", false,-1, 4,0);
        tracep->declQuad(c+687,"SocTop rvcpu1 pip_pc", false,-1, 63,0);
        tracep->declBit(c+510,"SocTop rvcpu1 if_stall_req", false,-1);
        tracep->declQuad(c+159,"SocTop rvcpu1 if_id_pc", false,-1, 63,0);
        tracep->declBus(c+161,"SocTop rvcpu1 if_id_inst", false,-1, 31,0);
        tracep->declBit(c+162,"SocTop rvcpu1 ex_flush", false,-1);
        tracep->declQuad(c+511,"SocTop rvcpu1 ex_id_rd_data", false,-1, 63,0);
        tracep->declBus(c+163,"SocTop rvcpu1 ex_id_rd_addr", false,-1, 4,0);
        tracep->declBit(c+164,"SocTop rvcpu1 ex_id_rd_ena", false,-1);
        tracep->declBus(c+165,"SocTop rvcpu1 ex_id_rd_type", false,-1, 7,0);
        tracep->declBus(c+166,"SocTop rvcpu1 ex_mem_sel", false,-1, 2,0);
        tracep->declQuad(c+167,"SocTop rvcpu1 ex_mem_addr", false,-1, 63,0);
        tracep->declBit(c+162,"SocTop rvcpu1 ex_pc_branchena", false,-1);
        tracep->declQuad(c+169,"SocTop rvcpu1 ex_pc_branchpc", false,-1, 63,0);
        tracep->declBit(c+423,"SocTop rvcpu1 ex_ctrl_req", false,-1);
        tracep->declBus(c+513,"SocTop rvcpu1 id_reg_addr1", false,-1, 4,0);
        tracep->declBit(c+514,"SocTop rvcpu1 id_reg_ena1", false,-1);
        tracep->declBus(c+515,"SocTop rvcpu1 id_reg_addr2", false,-1, 4,0);
        tracep->declBit(c+516,"SocTop rvcpu1 id_reg_ena2", false,-1);
        tracep->declBit(c+689,"SocTop rvcpu1 id_ctrl_req", false,-1);
        tracep->declBus(c+517,"SocTop rvcpu1 id_ex_type", false,-1, 7,0);
        tracep->declBus(c+518,"SocTop rvcpu1 id_ex_opcode", false,-1, 7,0);
        tracep->declQuad(c+519,"SocTop rvcpu1 id_ex_op", false,-1, 63,0);
        tracep->declQuad(c+521,"SocTop rvcpu1 id_ex_op2", false,-1, 63,0);
        tracep->declBit(c+523,"SocTop rvcpu1 id_ex_rd_ena", false,-1);
        tracep->declBus(c+524,"SocTop rvcpu1 id_ex_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+525,"SocTop rvcpu1 id_ex_pc", false,-1, 63,0);
        tracep->declBus(c+527,"SocTop rvcpu1 id_ex_s_offset", false,-1, 11,0);
        tracep->declBus(c+528,"SocTop rvcpu1 id_ex_memsel", false,-1, 2,0);
        tracep->declQuad(c+424,"SocTop rvcpu1 id_pip_jalrpc", false,-1, 63,0);
        tracep->declBit(c+529,"SocTop rvcpu1 id_pip_jalrena", false,-1);
        tracep->declBit(c+530,"SocTop rvcpu1 id_if_flush", false,-1);
        tracep->declBus(c+531,"SocTop rvcpu1 stall_ctrl", false,-1, 4,0);
        tracep->declQuad(c+690,"SocTop rvcpu1 regs_id_data1", false,-1, 63,0);
        tracep->declQuad(c+692,"SocTop rvcpu1 regs_id_data2", false,-1, 63,0);
        tracep->declQuad(c+532,"SocTop rvcpu1 mem_id_data", false,-1, 63,0);
        tracep->declBus(c+171,"SocTop rvcpu1 mem_id_addr", false,-1, 4,0);
        tracep->declBit(c+172,"SocTop rvcpu1 mem_id_ena", false,-1);
        tracep->declBit(c+694,"SocTop rvcpu1 mem_ctrl_req", false,-1);
        tracep->declBus(c+173,"SocTop rvcpu1 wb_id_addr", false,-1, 4,0);
        tracep->declBit(c+174,"SocTop rvcpu1 wb_id_ena", false,-1);
        tracep->declQuad(c+175,"SocTop rvcpu1 wb_regfile_data", false,-1, 63,0);
        tracep->declQuad(c+177,"SocTop rvcpu1 idex_ex_pc", false,-1, 63,0);
        tracep->declBus(c+179,"SocTop rvcpu1 idex_ex_type", false,-1, 7,0);
        tracep->declBus(c+180,"SocTop rvcpu1 idex_ex_opcode", false,-1, 7,0);
        tracep->declQuad(c+181,"SocTop rvcpu1 idex_ex_op1", false,-1, 63,0);
        tracep->declQuad(c+183,"SocTop rvcpu1 idex_ex_op2", false,-1, 63,0);
        tracep->declBit(c+185,"SocTop rvcpu1 idex_ex_rdena", false,-1);
        tracep->declBus(c+163,"SocTop rvcpu1 idex_ex_rdaddr", false,-1, 4,0);
        tracep->declBus(c+186,"SocTop rvcpu1 idex_ex_offset", false,-1, 11,0);
        tracep->declBus(c+166,"SocTop rvcpu1 idex_ex_sel", false,-1, 2,0);
        tracep->declBus(c+187,"SocTop rvcpu1 exmem_mem_type", false,-1, 7,0);
        tracep->declBit(c+172,"SocTop rvcpu1 exmem_mem_ena", false,-1);
        tracep->declQuad(c+188,"SocTop rvcpu1 exmem_mem_data", false,-1, 63,0);
        tracep->declBus(c+171,"SocTop rvcpu1 exmem_mem_addr", false,-1, 4,0);
        tracep->declBus(c+190,"SocTop rvcpu1 exmem_mem_sel", false,-1, 2,0);
        tracep->declQuad(c+191,"SocTop rvcpu1 exmem_mem_lsaddr", false,-1, 63,0);
        tracep->declQuad(c+534,"SocTop rvcpu1 ex_ex_mem_pc", false,-1, 63,0);
        tracep->declQuad(c+193,"SocTop rvcpu1 ex_mem_mem_pc", false,-1, 63,0);
        tracep->declQuad(c+536,"SocTop rvcpu1 mem_mem_wb_pc", false,-1, 63,0);
        tracep->declBus(c+538,"SocTop rvcpu1 id_id_ex_inst", false,-1, 31,0);
        tracep->declBus(c+195,"SocTop rvcpu1 id_ex_ex_inst", false,-1, 31,0);
        tracep->declBus(c+539,"SocTop rvcpu1 ex_ex_mem_inst", false,-1, 31,0);
        tracep->declBus(c+196,"SocTop rvcpu1 ex_mem_mem_inst", false,-1, 31,0);
        tracep->declBus(c+540,"SocTop rvcpu1 mem_mem_wb_inst", false,-1, 31,0);
        tracep->declBit(c+663,"SocTop rvcpu1 pip_fore0 rst", false,-1);
        tracep->declQuad(c+630,"SocTop rvcpu1 pip_fore0 pc_i", false,-1, 63,0);
        tracep->declBus(c+478,"SocTop rvcpu1 pip_fore0 inst", false,-1, 31,0);
        tracep->declQuad(c+684,"SocTop rvcpu1 pip_fore0 x1_data", false,-1, 63,0);
        tracep->declQuad(c+687,"SocTop rvcpu1 pip_fore0 pc_o", false,-1, 63,0);
        tracep->declBus(c+509,"SocTop rvcpu1 pip_fore0 x1_addr", false,-1, 4,0);
        tracep->declBit(c+686,"SocTop rvcpu1 pip_fore0 x1_ena", false,-1);
        tracep->declBus(c+541,"SocTop rvcpu1 pip_fore0 j_imm", false,-1, 20,1);
        tracep->declBus(c+542,"SocTop rvcpu1 pip_fore0 i_imm", false,-1, 11,0);
        tracep->declBus(c+543,"SocTop rvcpu1 pip_fore0 b_imm", false,-1, 12,1);
        tracep->declBus(c+544,"SocTop rvcpu1 pip_fore0 opcode", false,-1, 6,0);
        tracep->declBit(c+545,"SocTop rvcpu1 pip_fore0 inst_jal", false,-1);
        tracep->declBit(c+546,"SocTop rvcpu1 pip_fore0 inst_jalr", false,-1);
        tracep->declBit(c+547,"SocTop rvcpu1 pip_fore0 inst_bxx", false,-1);
        tracep->declQuad(c+548,"SocTop rvcpu1 pip_fore0 operand1", false,-1, 63,0);
        tracep->declQuad(c+550,"SocTop rvcpu1 pip_fore0 operand2", false,-1, 63,0);
        tracep->declQuad(c+552,"SocTop rvcpu1 pip_fore0 j_pc", false,-1, 63,0);
        tracep->declBit(c+662,"SocTop rvcpu1 pc1 clk", false,-1);
        tracep->declBit(c+663,"SocTop rvcpu1 pc1 rst", false,-1);
        tracep->declQuad(c+687,"SocTop rvcpu1 pc1 static_pc_i", false,-1, 63,0);
        tracep->declQuad(c+424,"SocTop rvcpu1 pc1 id_pc_i", false,-1, 63,0);
        tracep->declBit(c+529,"SocTop rvcpu1 pc1 id_pc_ena", false,-1);
        tracep->declQuad(c+169,"SocTop rvcpu1 pc1 ex_pc_i", false,-1, 63,0);
        tracep->declBit(c+162,"SocTop rvcpu1 pc1 ex_pc_ena", false,-1);
        tracep->declBit(c+554,"SocTop rvcpu1 pc1 pc_stall", false,-1);
        tracep->declQuad(c+630,"SocTop rvcpu1 pc1 pc", false,-1, 63,0);
        tracep->declBit(c+663,"SocTop rvcpu1 pc1 ce", false,-1);
        tracep->declBit(c+662,"SocTop rvcpu1 if_id2 clk", false,-1);
        tracep->declBit(c+663,"SocTop rvcpu1 if_id2 rst", false,-1);
        tracep->declQuad(c+630,"SocTop rvcpu1 if_id2 if_pc", false,-1, 63,0);
        tracep->declBus(c+478,"SocTop rvcpu1 if_id2 if_inst", false,-1, 31,0);
        tracep->declBit(c+162,"SocTop rvcpu1 if_id2 if_id_flush", false,-1);
        tracep->declBit(c+530,"SocTop rvcpu1 if_id2 if_id_bubble", false,-1);
        tracep->declBit(c+479,"SocTop rvcpu1 if_id2 if_inst_valid", false,-1);
        tracep->declBit(c+481,"SocTop rvcpu1 if_id2 if_inst_ready", false,-1);
        tracep->declBus(c+531,"SocTop rvcpu1 if_id2 stall_ctrl", false,-1, 4,0);
        tracep->declBit(c+510,"SocTop rvcpu1 if_id2 if_stall_req", false,-1);
        tracep->declQuad(c+159,"SocTop rvcpu1 if_id2 id_pc", false,-1, 63,0);
        tracep->declBus(c+161,"SocTop rvcpu1 if_id2 id_inst", false,-1, 31,0);
        tracep->declBit(c+663,"SocTop rvcpu1 id3 rst", false,-1);
        tracep->declBus(c+161,"SocTop rvcpu1 id3 inst_i", false,-1, 31,0);
        tracep->declQuad(c+159,"SocTop rvcpu1 id3 pc_i", false,-1, 63,0);
        tracep->declQuad(c+690,"SocTop rvcpu1 id3 op1_data_i", false,-1, 63,0);
        tracep->declQuad(c+692,"SocTop rvcpu1 id3 op2_data_i", false,-1, 63,0);
        tracep->declBus(c+513,"SocTop rvcpu1 id3 op1_addr_o", false,-1, 4,0);
        tracep->declBus(c+515,"SocTop rvcpu1 id3 op2_addr_o", false,-1, 4,0);
        tracep->declBit(c+514,"SocTop rvcpu1 id3 op1_read_o", false,-1);
        tracep->declBit(c+516,"SocTop rvcpu1 id3 op2_read_o", false,-1);
        tracep->declQuad(c+511,"SocTop rvcpu1 id3 ex_rd_data", false,-1, 63,0);
        tracep->declBus(c+163,"SocTop rvcpu1 id3 ex_rd_addr", false,-1, 4,0);
        tracep->declBit(c+164,"SocTop rvcpu1 id3 ex_rd_ena", false,-1);
        tracep->declBus(c+165,"SocTop rvcpu1 id3 ex_inst_type", false,-1, 7,0);
        tracep->declQuad(c+532,"SocTop rvcpu1 id3 mem_rd_data", false,-1, 63,0);
        tracep->declBus(c+171,"SocTop rvcpu1 id3 mem_rd_addr", false,-1, 4,0);
        tracep->declBit(c+172,"SocTop rvcpu1 id3 mem_rd_ena", false,-1);
        tracep->declBit(c+174,"SocTop rvcpu1 id3 wb_rd_ena", false,-1);
        tracep->declBus(c+173,"SocTop rvcpu1 id3 wb_rd_addr", false,-1, 4,0);
        tracep->declBit(c+689,"SocTop rvcpu1 id3 id_stall_req", false,-1);
        tracep->declBit(c+510,"SocTop rvcpu1 id3 if_stall_req", false,-1);
        tracep->declBus(c+517,"SocTop rvcpu1 id3 inst_type", false,-1, 7,0);
        tracep->declBus(c+518,"SocTop rvcpu1 id3 inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+519,"SocTop rvcpu1 id3 op1_o", false,-1, 63,0);
        tracep->declQuad(c+521,"SocTop rvcpu1 id3 op2_o", false,-1, 63,0);
        tracep->declBit(c+523,"SocTop rvcpu1 id3 rd_w_ena", false,-1);
        tracep->declBus(c+524,"SocTop rvcpu1 id3 rd_w_addr", false,-1, 4,0);
        tracep->declQuad(c+525,"SocTop rvcpu1 id3 pc_o", false,-1, 63,0);
        tracep->declBus(c+538,"SocTop rvcpu1 id3 inst_o", false,-1, 31,0);
        tracep->declBus(c+527,"SocTop rvcpu1 id3 store_addr_offset", false,-1, 11,0);
        tracep->declBus(c+528,"SocTop rvcpu1 id3 mem_op_sel", false,-1, 2,0);
        tracep->declBit(c+529,"SocTop rvcpu1 id3 jalr_pc_ena", false,-1);
        tracep->declQuad(c+424,"SocTop rvcpu1 id3 jalr_pc", false,-1, 63,0);
        tracep->declBit(c+530,"SocTop rvcpu1 id3 id_flush", false,-1);
        tracep->declBus(c+197,"SocTop rvcpu1 id3 opcode", false,-1, 6,0);
        tracep->declBus(c+198,"SocTop rvcpu1 id3 rd", false,-1, 4,0);
        tracep->declBus(c+199,"SocTop rvcpu1 id3 funct3", false,-1, 2,0);
        tracep->declBus(c+555,"SocTop rvcpu1 id3 rs1", false,-1, 4,0);
        tracep->declBus(c+200,"SocTop rvcpu1 id3 imm", false,-1, 11,0);
        tracep->declBus(c+201,"SocTop rvcpu1 id3 funct7", false,-1, 6,0);
        tracep->declBus(c+202,"SocTop rvcpu1 id3 rs2", false,-1, 4,0);
        tracep->declBus(c+203,"SocTop rvcpu1 id3 u_imm", false,-1, 19,0);
        tracep->declBus(c+204,"SocTop rvcpu1 id3 s_imm", false,-1, 11,0);
        tracep->declBit(c+556,"SocTop rvcpu1 id3 inst_lui", false,-1);
        tracep->declBit(c+557,"SocTop rvcpu1 id3 inst_auipc", false,-1);
        tracep->declBit(c+558,"SocTop rvcpu1 id3 inst_jal", false,-1);
        tracep->declBit(c+559,"SocTop rvcpu1 id3 inst_jalr", false,-1);
        tracep->declBit(c+560,"SocTop rvcpu1 id3 inst_jump", false,-1);
        tracep->declBit(c+426,"SocTop rvcpu1 id3 inst_addi", false,-1);
        tracep->declBit(c+427,"SocTop rvcpu1 id3 inst_slti", false,-1);
        tracep->declBit(c+428,"SocTop rvcpu1 id3 inst_sltiu", false,-1);
        tracep->declBit(c+429,"SocTop rvcpu1 id3 inst_xori", false,-1);
        tracep->declBit(c+430,"SocTop rvcpu1 id3 inst_ori", false,-1);
        tracep->declBit(c+431,"SocTop rvcpu1 id3 inst_andi", false,-1);
        tracep->declBit(c+432,"SocTop rvcpu1 id3 inst_slli", false,-1);
        tracep->declBit(c+433,"SocTop rvcpu1 id3 inst_srli", false,-1);
        tracep->declBit(c+561,"SocTop rvcpu1 id3 inst_srai", false,-1);
        tracep->declBit(c+562,"SocTop rvcpu1 id3 inst_addiw", false,-1);
        tracep->declBit(c+563,"SocTop rvcpu1 id3 inst_slliw", false,-1);
        tracep->declBit(c+564,"SocTop rvcpu1 id3 inst_srliw", false,-1);
        tracep->declBit(c+565,"SocTop rvcpu1 id3 inst_sraiw", false,-1);
        tracep->declBit(c+566,"SocTop rvcpu1 id3 inst_add", false,-1);
        tracep->declBit(c+567,"SocTop rvcpu1 id3 inst_sub", false,-1);
        tracep->declBit(c+568,"SocTop rvcpu1 id3 inst_sll", false,-1);
        tracep->declBit(c+569,"SocTop rvcpu1 id3 inst_slt", false,-1);
        tracep->declBit(c+570,"SocTop rvcpu1 id3 inst_sltu", false,-1);
        tracep->declBit(c+571,"SocTop rvcpu1 id3 inst_xor", false,-1);
        tracep->declBit(c+572,"SocTop rvcpu1 id3 inst_srl", false,-1);
        tracep->declBit(c+573,"SocTop rvcpu1 id3 inst_sra", false,-1);
        tracep->declBit(c+574,"SocTop rvcpu1 id3 inst_or", false,-1);
        tracep->declBit(c+575,"SocTop rvcpu1 id3 inst_and", false,-1);
        tracep->declBit(c+576,"SocTop rvcpu1 id3 inst_addw", false,-1);
        tracep->declBit(c+577,"SocTop rvcpu1 id3 inst_subw", false,-1);
        tracep->declBit(c+578,"SocTop rvcpu1 id3 inst_sllw", false,-1);
        tracep->declBit(c+579,"SocTop rvcpu1 id3 inst_srlw", false,-1);
        tracep->declBit(c+580,"SocTop rvcpu1 id3 inst_sraw", false,-1);
        tracep->declBit(c+434,"SocTop rvcpu1 id3 inst_beq", false,-1);
        tracep->declBit(c+435,"SocTop rvcpu1 id3 inst_ben", false,-1);
        tracep->declBit(c+436,"SocTop rvcpu1 id3 inst_blt", false,-1);
        tracep->declBit(c+437,"SocTop rvcpu1 id3 inst_bge", false,-1);
        tracep->declBit(c+438,"SocTop rvcpu1 id3 inst_bltu", false,-1);
        tracep->declBit(c+439,"SocTop rvcpu1 id3 inst_bgeu", false,-1);
        tracep->declBit(c+581,"SocTop rvcpu1 id3 inst_csrrw", false,-1);
        tracep->declBit(c+582,"SocTop rvcpu1 id3 inst_csrrs", false,-1);
        tracep->declBit(c+583,"SocTop rvcpu1 id3 inst_csrrc", false,-1);
        tracep->declBit(c+584,"SocTop rvcpu1 id3 inst_csrrwi", false,-1);
        tracep->declBit(c+440,"SocTop rvcpu1 id3 inst_csrrsi", false,-1);
        tracep->declBit(c+441,"SocTop rvcpu1 id3 inst_csrrci", false,-1);
        tracep->declBit(c+585,"SocTop rvcpu1 id3 inst_csr_rs1", false,-1);
        tracep->declBit(c+584,"SocTop rvcpu1 id3 inst_csr_imm", false,-1);
        tracep->declBit(c+442,"SocTop rvcpu1 id3 inst_ecall", false,-1);
        tracep->declBit(c+586,"SocTop rvcpu1 id3 inst_ebreak", false,-1);
        tracep->declBit(c+443,"SocTop rvcpu1 id3 inst_mret", false,-1);
        tracep->declBit(c+695,"SocTop rvcpu1 id3 op1_loda_relate", false,-1);
        tracep->declBit(c+696,"SocTop rvcpu1 id3 op2_loda_relate", false,-1);
        tracep->declBit(c+587,"SocTop rvcpu1 id3 ex_op1", false,-1);
        tracep->declBit(c+588,"SocTop rvcpu1 id3 mem_op1", false,-1);
        tracep->declBit(c+444,"SocTop rvcpu1 id3 ex_op2", false,-1);
        tracep->declBit(c+445,"SocTop rvcpu1 id3 mem_op2", false,-1);
        tracep->declBit(c+446,"SocTop rvcpu1 id3 wb_op1", false,-1);
        tracep->declQuad(c+447,"SocTop rvcpu1 id3 jalr_pc_temp", false,-1, 63,0);
        tracep->declBit(c+449,"SocTop rvcpu1 id3 predict_success", false,-1);
        tracep->declBit(c+662,"SocTop rvcpu1 id_ex4 clk", false,-1);
        tracep->declBit(c+663,"SocTop rvcpu1 id_ex4 rst", false,-1);
        tracep->declBit(c+162,"SocTop rvcpu1 id_ex4 id_ex_bubble", false,-1);
        tracep->declBus(c+531,"SocTop rvcpu1 id_ex4 stall_ctrl", false,-1, 4,0);
        tracep->declBus(c+538,"SocTop rvcpu1 id_ex4 id_inst", false,-1, 31,0);
        tracep->declQuad(c+525,"SocTop rvcpu1 id_ex4 id_pc", false,-1, 63,0);
        tracep->declBus(c+517,"SocTop rvcpu1 id_ex4 id_inst_type", false,-1, 7,0);
        tracep->declBus(c+518,"SocTop rvcpu1 id_ex4 id_inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+519,"SocTop rvcpu1 id_ex4 id_op1", false,-1, 63,0);
        tracep->declQuad(c+521,"SocTop rvcpu1 id_ex4 id_op2", false,-1, 63,0);
        tracep->declBit(c+523,"SocTop rvcpu1 id_ex4 id_rd_ena", false,-1);
        tracep->declBus(c+524,"SocTop rvcpu1 id_ex4 id_rd_addr", false,-1, 4,0);
        tracep->declBus(c+527,"SocTop rvcpu1 id_ex4 id_addr_offset", false,-1, 11,0);
        tracep->declBus(c+528,"SocTop rvcpu1 id_ex4 id_ls_sel", false,-1, 2,0);
        tracep->declBus(c+195,"SocTop rvcpu1 id_ex4 ex_inst", false,-1, 31,0);
        tracep->declQuad(c+177,"SocTop rvcpu1 id_ex4 ex_pc", false,-1, 63,0);
        tracep->declBus(c+179,"SocTop rvcpu1 id_ex4 ex_inst_type", false,-1, 7,0);
        tracep->declBus(c+180,"SocTop rvcpu1 id_ex4 ex_inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+181,"SocTop rvcpu1 id_ex4 ex_op1", false,-1, 63,0);
        tracep->declQuad(c+183,"SocTop rvcpu1 id_ex4 ex_op2", false,-1, 63,0);
        tracep->declBit(c+185,"SocTop rvcpu1 id_ex4 ex_rd_ena", false,-1);
        tracep->declBus(c+163,"SocTop rvcpu1 id_ex4 ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+186,"SocTop rvcpu1 id_ex4 ex_addr_offset", false,-1, 11,0);
        tracep->declBus(c+166,"SocTop rvcpu1 id_ex4 ex_ls_sel", false,-1, 2,0);
        tracep->declBit(c+662,"SocTop rvcpu1 ex5 clk", false,-1);
        tracep->declBit(c+663,"SocTop rvcpu1 ex5 rst", false,-1);
        tracep->declQuad(c+177,"SocTop rvcpu1 ex5 pc_i", false,-1, 63,0);
        tracep->declBus(c+195,"SocTop rvcpu1 ex5 id_ex_inst", false,-1, 31,0);
        tracep->declBus(c+179,"SocTop rvcpu1 ex5 inst_type_i", false,-1, 7,0);
        tracep->declBus(c+180,"SocTop rvcpu1 ex5 inst_opcode_i", false,-1, 7,0);
        tracep->declQuad(c+181,"SocTop rvcpu1 ex5 op1_i", false,-1, 63,0);
        tracep->declQuad(c+183,"SocTop rvcpu1 ex5 op2_i", false,-1, 63,0);
        tracep->declBit(c+185,"SocTop rvcpu1 ex5 rd_ena_i", false,-1);
        tracep->declBus(c+163,"SocTop rvcpu1 ex5 rd_addr_i", false,-1, 4,0);
        tracep->declBus(c+166,"SocTop rvcpu1 ex5 ls_sel_i", false,-1, 2,0);
        tracep->declBus(c+186,"SocTop rvcpu1 ex5 addr_offsel_i", false,-1, 11,0);
        tracep->declBus(c+165,"SocTop rvcpu1 ex5 inst_type_o", false,-1, 7,0);
        tracep->declBit(c+164,"SocTop rvcpu1 ex5 rd_ena_o", false,-1);
        tracep->declBus(c+163,"SocTop rvcpu1 ex5 rd_addr_o", false,-1, 4,0);
        tracep->declQuad(c+511,"SocTop rvcpu1 ex5 rd_data_o", false,-1, 63,0);
        tracep->declQuad(c+534,"SocTop rvcpu1 ex5 ex_pc_o", false,-1, 63,0);
        tracep->declBus(c+539,"SocTop rvcpu1 ex5 ex_inst_o", false,-1, 31,0);
        tracep->declBus(c+166,"SocTop rvcpu1 ex5 ls_sel_o", false,-1, 2,0);
        tracep->declQuad(c+167,"SocTop rvcpu1 ex5 ls_addr_o", false,-1, 63,0);
        tracep->declBit(c+162,"SocTop rvcpu1 ex5 ex_flush", false,-1);
        tracep->declBit(c+162,"SocTop rvcpu1 ex5 branch_pc_ena", false,-1);
        tracep->declQuad(c+169,"SocTop rvcpu1 ex5 branch_pc", false,-1, 63,0);
        tracep->declBit(c+510,"SocTop rvcpu1 ex5 if_stell_req", false,-1);
        tracep->declBit(c+423,"SocTop rvcpu1 ex5 ex_stall_req", false,-1);
        tracep->declBit(c+486,"SocTop rvcpu1 ex5 timer_intr", false,-1);
        tracep->declBit(c+589,"SocTop rvcpu1 ex5 ex_stall", false,-1);
        tracep->declQuad(c+590,"SocTop rvcpu1 ex5 exe_res", false,-1, 63,0);
        tracep->declQuad(c+205,"SocTop rvcpu1 ex5 op2_i_mux", false,-1, 63,0);
        tracep->declQuad(c+207,"SocTop rvcpu1 ex5 op1_sub_op2", false,-1, 63,0);
        tracep->declQuad(c+209,"SocTop rvcpu1 ex5 op1_add_op2", false,-1, 63,0);
        tracep->declQuad(c+211,"SocTop rvcpu1 ex5 op1_addw_op2", false,-1, 63,0);
        tracep->declBit(c+213,"SocTop rvcpu1 ex5 op1_ls_op2", false,-1);
        tracep->declQuad(c+214,"SocTop rvcpu1 ex5 shift_res", false,-1, 63,0);
        tracep->declBus(c+216,"SocTop rvcpu1 ex5 op1_sllw_op2", false,-1, 31,0);
        tracep->declQuad(c+217,"SocTop rvcpu1 ex5 sllw_res", false,-1, 63,0);
        tracep->declBus(c+219,"SocTop rvcpu1 ex5 op1_srlw_op2", false,-1, 31,0);
        tracep->declQuad(c+220,"SocTop rvcpu1 ex5 srlw_res", false,-1, 63,0);
        tracep->declBus(c+222,"SocTop rvcpu1 ex5 op1_sraw_op2", false,-1, 31,0);
        tracep->declQuad(c+223,"SocTop rvcpu1 ex5 sraw_res", false,-1, 63,0);
        tracep->declBus(c+225,"SocTop rvcpu1 ex5 op1_subw_op2", false,-1, 31,0);
        tracep->declQuad(c+226,"SocTop rvcpu1 ex5 subw_res", false,-1, 63,0);
        tracep->declQuad(c+228,"SocTop rvcpu1 ex5 upper_imm", false,-1, 63,0);
        tracep->declBit(c+230,"SocTop rvcpu1 ex5 ex_flush_branch", false,-1);
        tracep->declBit(c+231,"SocTop rvcpu1 ex5 tmr_trap_ena", false,-1);
        tracep->declBus(c+232,"SocTop rvcpu1 ex5 csr_idx", false,-1, 11,0);
        tracep->declQuad(c+233,"SocTop rvcpu1 ex5 read_csr_data", false,-1, 63,0);
        tracep->declBit(c+235,"SocTop rvcpu1 ex5 trap_ena", false,-1);
        tracep->declBit(c+236,"SocTop rvcpu1 ex5 ecall_trap_ena", false,-1);
        tracep->declBit(c+237,"SocTop rvcpu1 ex5 cmt_mret_ena", false,-1);
        tracep->declBit(c+238,"SocTop rvcpu1 ex5 csr_wr_en", false,-1);
        tracep->declBit(c+239,"SocTop rvcpu1 ex5 csr_rd_en", false,-1);
        tracep->declQuad(c+240,"SocTop rvcpu1 ex5 wbck_csr_data", false,-1, 63,0);
        tracep->declQuad(c+242,"SocTop rvcpu1 ex5 trap_mcause_value", false,-1, 63,0);
        tracep->declQuad(c+244,"SocTop rvcpu1 ex5 mask_set_res", false,-1, 63,0);
        tracep->declQuad(c+246,"SocTop rvcpu1 ex5 mask_clear_res", false,-1, 63,0);
        tracep->declBit(c+662,"SocTop rvcpu1 ex5 csr0 clk", false,-1);
        tracep->declBit(c+663,"SocTop rvcpu1 ex5 csr0 rst", false,-1);
        tracep->declQuad(c+177,"SocTop rvcpu1 ex5 csr0 pc_i", false,-1, 63,0);
        tracep->declBit(c+238,"SocTop rvcpu1 ex5 csr0 csr_wr_en", false,-1);
        tracep->declBit(c+239,"SocTop rvcpu1 ex5 csr0 csr_rd_en", false,-1);
        tracep->declBus(c+232,"SocTop rvcpu1 ex5 csr0 csr_idx", false,-1, 11,0);
        tracep->declBit(c+237,"SocTop rvcpu1 ex5 csr0 cmt_mret_ena", false,-1);
        tracep->declBit(c+236,"SocTop rvcpu1 ex5 csr0 ecall_trap_ena", false,-1);
        tracep->declQuad(c+242,"SocTop rvcpu1 ex5 csr0 trap_mcause_value", false,-1, 63,0);
        tracep->declBit(c+486,"SocTop rvcpu1 ex5 csr0 tmr_intr_ena", false,-1);
        tracep->declBit(c+231,"SocTop rvcpu1 ex5 csr0 tmr_trap_ena", false,-1);
        tracep->declQuad(c+233,"SocTop rvcpu1 ex5 csr0 read_csr_data", false,-1, 63,0);
        tracep->declQuad(c+240,"SocTop rvcpu1 ex5 csr0 wbck_csr_data", false,-1, 63,0);
        tracep->declBit(c+589,"SocTop rvcpu1 ex5 csr0 ex_stall", false,-1);
        tracep->declBit(c+248,"SocTop rvcpu1 ex5 csr0 sel_mcycle", false,-1);
        tracep->declBit(c+249,"SocTop rvcpu1 ex5 csr0 rd_mcycle", false,-1);
        tracep->declBit(c+250,"SocTop rvcpu1 ex5 csr0 wr_mcycle", false,-1);
        tracep->declQuad(c+251,"SocTop rvcpu1 ex5 csr0 csr_mcycle", false,-1, 63,0);
        tracep->declBit(c+253,"SocTop rvcpu1 ex5 csr0 sel_mstatus", false,-1);
        tracep->declBit(c+254,"SocTop rvcpu1 ex5 csr0 rd_mstatus", false,-1);
        tracep->declBit(c+255,"SocTop rvcpu1 ex5 csr0 wr_mstatus", false,-1);
        tracep->declBit(c+256,"SocTop rvcpu1 ex5 csr0 mstatus_mpie_ena", false,-1);
        tracep->declBit(c+257,"SocTop rvcpu1 ex5 csr0 mstatus_mpie_nxt", false,-1);
        tracep->declBit(c+258,"SocTop rvcpu1 ex5 csr0 csr_mstatus_mpie", false,-1);
        tracep->declBit(c+256,"SocTop rvcpu1 ex5 csr0 mstatus_mie_ena", false,-1);
        tracep->declBit(c+259,"SocTop rvcpu1 ex5 csr0 mstatus_mie_nxt", false,-1);
        tracep->declBit(c+260,"SocTop rvcpu1 ex5 csr0 csr_mstatus_mie", false,-1);
        tracep->declBit(c+256,"SocTop rvcpu1 ex5 csr0 mstatus_mpp_ena", false,-1);
        tracep->declBus(c+261,"SocTop rvcpu1 ex5 csr0 mstatus_mpp_nxt", false,-1, 1,0);
        tracep->declBus(c+262,"SocTop rvcpu1 ex5 csr0 csr_mstatus_mpp", false,-1, 1,0);
        tracep->declBus(c+721,"SocTop rvcpu1 ex5 csr0 csr_mstatus_xs", false,-1, 1,0);
        tracep->declBus(c+263,"SocTop rvcpu1 ex5 csr0 csr_mstatus_fs", false,-1, 1,0);
        tracep->declBit(c+264,"SocTop rvcpu1 ex5 csr0 csr_mstatus_sd", false,-1);
        tracep->declQuad(c+265,"SocTop rvcpu1 ex5 csr0 csr_mstatus", false,-1, 63,0);
        tracep->declBit(c+267,"SocTop rvcpu1 ex5 csr0 sel_mtvec", false,-1);
        tracep->declBit(c+268,"SocTop rvcpu1 ex5 csr0 rd_mtvec", false,-1);
        tracep->declBit(c+269,"SocTop rvcpu1 ex5 csr0 wr_mtvec", false,-1);
        tracep->declQuad(c+270,"SocTop rvcpu1 ex5 csr0 csr_mtvec_base", false,-1, 63,2);
        tracep->declBus(c+721,"SocTop rvcpu1 ex5 csr0 csr_mtvec_mode", false,-1, 1,0);
        tracep->declQuad(c+272,"SocTop rvcpu1 ex5 csr0 csr_mtvec", false,-1, 63,0);
        tracep->declBit(c+274,"SocTop rvcpu1 ex5 csr0 sel_mepc", false,-1);
        tracep->declBit(c+275,"SocTop rvcpu1 ex5 csr0 rd_mepc", false,-1);
        tracep->declBit(c+276,"SocTop rvcpu1 ex5 csr0 wr_mepc", false,-1);
        tracep->declQuad(c+277,"SocTop rvcpu1 ex5 csr0 csr_mepc", false,-1, 63,0);
        tracep->declBit(c+279,"SocTop rvcpu1 ex5 csr0 sel_mcause", false,-1);
        tracep->declBit(c+280,"SocTop rvcpu1 ex5 csr0 rd_mcause", false,-1);
        tracep->declBit(c+281,"SocTop rvcpu1 ex5 csr0 wr_mcause", false,-1);
        tracep->declBit(c+282,"SocTop rvcpu1 ex5 csr0 csr_mcause_ena", false,-1);
        tracep->declQuad(c+283,"SocTop rvcpu1 ex5 csr0 csr_mcause_nxt", false,-1, 63,0);
        tracep->declQuad(c+285,"SocTop rvcpu1 ex5 csr0 csr_mcause", false,-1, 63,0);
        tracep->declBit(c+287,"SocTop rvcpu1 ex5 csr0 sle_mie", false,-1);
        tracep->declBit(c+288,"SocTop rvcpu1 ex5 csr0 rd_mie", false,-1);
        tracep->declBit(c+289,"SocTop rvcpu1 ex5 csr0 wr_mie", false,-1);
        tracep->declBit(c+290,"SocTop rvcpu1 ex5 csr0 csr_mie_mtie", false,-1);
        tracep->declQuad(c+291,"SocTop rvcpu1 ex5 csr0 csr_mie", false,-1, 63,0);
        tracep->declBit(c+293,"SocTop rvcpu1 ex5 csr0 sel_mip", false,-1);
        tracep->declBit(c+294,"SocTop rvcpu1 ex5 csr0 rd_mip", false,-1);
        tracep->declBit(c+295,"SocTop rvcpu1 ex5 csr0 csr_mip_mtip", false,-1);
        tracep->declQuad(c+296,"SocTop rvcpu1 ex5 csr0 csr_mip", false,-1, 63,0);
        tracep->declBit(c+298,"SocTop rvcpu1 ex5 csr0 sel_mscratch", false,-1);
        tracep->declBit(c+299,"SocTop rvcpu1 ex5 csr0 rd_mscrstch", false,-1);
        tracep->declBit(c+300,"SocTop rvcpu1 ex5 csr0 wr_mscrstch", false,-1);
        tracep->declQuad(c+301,"SocTop rvcpu1 ex5 csr0 csr_mscrstch", false,-1, 63,0);
        tracep->declBit(c+662,"SocTop rvcpu1 ex_mem6 clk", false,-1);
        tracep->declBit(c+663,"SocTop rvcpu1 ex_mem6 rst", false,-1);
        tracep->declQuad(c+534,"SocTop rvcpu1 ex_mem6 ex_mem_pc_i", false,-1, 63,0);
        tracep->declBus(c+539,"SocTop rvcpu1 ex_mem6 ex_mem_inst_i", false,-1, 31,0);
        tracep->declBus(c+531,"SocTop rvcpu1 ex_mem6 stall_ctrl", false,-1, 4,0);
        tracep->declBus(c+165,"SocTop rvcpu1 ex_mem6 ex_inst_type", false,-1, 7,0);
        tracep->declBit(c+164,"SocTop rvcpu1 ex_mem6 ex_rd_ena", false,-1);
        tracep->declQuad(c+511,"SocTop rvcpu1 ex_mem6 ex_rd_data", false,-1, 63,0);
        tracep->declBus(c+163,"SocTop rvcpu1 ex_mem6 ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+166,"SocTop rvcpu1 ex_mem6 ex_ls_sel", false,-1, 2,0);
        tracep->declQuad(c+167,"SocTop rvcpu1 ex_mem6 ex_ls_addr", false,-1, 63,0);
        tracep->declBus(c+187,"SocTop rvcpu1 ex_mem6 mem_inst_type", false,-1, 7,0);
        tracep->declBit(c+172,"SocTop rvcpu1 ex_mem6 mem_rd_ena", false,-1);
        tracep->declQuad(c+188,"SocTop rvcpu1 ex_mem6 mem_rd_data", false,-1, 63,0);
        tracep->declBus(c+171,"SocTop rvcpu1 ex_mem6 mem_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+193,"SocTop rvcpu1 ex_mem6 ex_mem_pc_o", false,-1, 63,0);
        tracep->declBus(c+196,"SocTop rvcpu1 ex_mem6 ex_mem_inst_o", false,-1, 31,0);
        tracep->declBus(c+190,"SocTop rvcpu1 ex_mem6 mem_ls_sel", false,-1, 2,0);
        tracep->declQuad(c+191,"SocTop rvcpu1 ex_mem6 mem_ls_addr", false,-1, 63,0);
        tracep->declBit(c+663,"SocTop rvcpu1 mem7 rst", false,-1);
        tracep->declBus(c+187,"SocTop rvcpu1 mem7 inst_type_i", false,-1, 7,0);
        tracep->declBit(c+172,"SocTop rvcpu1 mem7 rd_ena_i", false,-1);
        tracep->declQuad(c+188,"SocTop rvcpu1 mem7 rd_data_i", false,-1, 63,0);
        tracep->declBus(c+171,"SocTop rvcpu1 mem7 rd_addr_i", false,-1, 4,0);
        tracep->declQuad(c+193,"SocTop rvcpu1 mem7 mem_pc_i", false,-1, 63,0);
        tracep->declBus(c+196,"SocTop rvcpu1 mem7 mem_inst_i", false,-1, 31,0);
        tracep->declQuad(c+191,"SocTop rvcpu1 mem7 ls_addr_i", false,-1, 63,0);
        tracep->declBus(c+190,"SocTop rvcpu1 mem7 ls_sel_i", false,-1, 2,0);
        tracep->declQuad(c+471,"SocTop rvcpu1 mem7 data_addr_o", false,-1, 63,0);
        tracep->declBus(c+473,"SocTop rvcpu1 mem7 wmask_o", false,-1, 7,0);
        tracep->declQuad(c+482,"SocTop rvcpu1 mem7 data_i", false,-1, 63,0);
        tracep->declQuad(c+474,"SocTop rvcpu1 mem7 data_o", false,-1, 63,0);
        tracep->declBit(c+476,"SocTop rvcpu1 mem7 we", false,-1);
        tracep->declBit(c+477,"SocTop rvcpu1 mem7 re", false,-1);
        tracep->declBit(c+678,"SocTop rvcpu1 mem7 mem_finish", false,-1);
        tracep->declBit(c+172,"SocTop rvcpu1 mem7 rd_ena_o", false,-1);
        tracep->declQuad(c+532,"SocTop rvcpu1 mem7 rd_data_o", false,-1, 63,0);
        tracep->declBus(c+171,"SocTop rvcpu1 mem7 rd_addr_o", false,-1, 4,0);
        tracep->declQuad(c+536,"SocTop rvcpu1 mem7 mem_pc_o", false,-1, 63,0);
        tracep->declBus(c+540,"SocTop rvcpu1 mem7 mem_inst_o", false,-1, 31,0);
        tracep->declBit(c+694,"SocTop rvcpu1 mem7 mem_stall_req", false,-1);
        tracep->declQuad(c+450,"SocTop rvcpu1 mem7 load_data", false,-1, 63,0);
        tracep->declBus(c+303,"SocTop rvcpu1 mem7 byte_sel", false,-1, 2,0);
        tracep->declBus(c+304,"SocTop rvcpu1 mem7 half_byte_sel", false,-1, 1,0);
        tracep->declBit(c+305,"SocTop rvcpu1 mem7 word_sel", false,-1);
        tracep->declBus(c+592,"SocTop rvcpu1 mem7 data_byte", false,-1, 7,0);
        tracep->declBus(c+593,"SocTop rvcpu1 mem7 data_half_byte", false,-1, 15,0);
        tracep->declBus(c+594,"SocTop rvcpu1 mem7 data_word", false,-1, 31,0);
        tracep->declQuad(c+595,"SocTop rvcpu1 mem7 store_data", false,-1, 63,0);
        tracep->declBus(c+597,"SocTop rvcpu1 mem7 store_mask", false,-1, 7,0);
        tracep->declQuad(c+697,"SocTop rvcpu1 mem7 sb_data", false,-1, 63,0);
        tracep->declQuad(c+699,"SocTop rvcpu1 mem7 sh_data", false,-1, 63,0);
        tracep->declQuad(c+701,"SocTop rvcpu1 mem7 sw_data", false,-1, 63,0);
        tracep->declBus(c+703,"SocTop rvcpu1 mem7 sb_mask", false,-1, 7,0);
        tracep->declBus(c+704,"SocTop rvcpu1 mem7 sh_mask", false,-1, 7,0);
        tracep->declBus(c+705,"SocTop rvcpu1 mem7 sw_mask", false,-1, 7,0);
        tracep->declBit(c+662,"SocTop rvcpu1 mem_wb8 clk", false,-1);
        tracep->declBit(c+663,"SocTop rvcpu1 mem_wb8 rst", false,-1);
        tracep->declQuad(c+536,"SocTop rvcpu1 mem_wb8 wb_pc_i", false,-1, 63,0);
        tracep->declBus(c+540,"SocTop rvcpu1 mem_wb8 wb_inst_i", false,-1, 31,0);
        tracep->declBus(c+531,"SocTop rvcpu1 mem_wb8 stall_ctrl", false,-1, 4,0);
        tracep->declQuad(c+532,"SocTop rvcpu1 mem_wb8 mem_rd_data", false,-1, 63,0);
        tracep->declBus(c+171,"SocTop rvcpu1 mem_wb8 mem_rd_addr", false,-1, 4,0);
        tracep->declBit(c+172,"SocTop rvcpu1 mem_wb8 mem_rd_ena", false,-1);
        tracep->declQuad(c+175,"SocTop rvcpu1 mem_wb8 wb_rd_data", false,-1, 63,0);
        tracep->declBus(c+173,"SocTop rvcpu1 mem_wb8 wb_rd_addr", false,-1, 4,0);
        tracep->declBit(c+174,"SocTop rvcpu1 mem_wb8 wb_rd_ena", false,-1);
        tracep->declQuad(c+306,"SocTop rvcpu1 mem_wb8 wb_pc_o", false,-1, 63,0);
        tracep->declBus(c+308,"SocTop rvcpu1 mem_wb8 wb_inst_o", false,-1, 31,0);
        tracep->declQuad(c+309,"SocTop rvcpu1 mem_wb8 pc_data1", false,-1, 63,0);
        tracep->declBit(c+311,"SocTop rvcpu1 mem_wb8 difftest_exyn", false,-1);
        tracep->declBit(c+312,"SocTop rvcpu1 mem_wb8 teap_yn", false,-1);
        tracep->declQuad(c+313,"SocTop rvcpu1 mem_wb8 trap_code", false,-1, 63,0);
        tracep->declBit(c+663,"SocTop rvcpu1 ctrl9 rst", false,-1);
        tracep->declBit(c+510,"SocTop rvcpu1 ctrl9 if_stall_req", false,-1);
        tracep->declBit(c+689,"SocTop rvcpu1 ctrl9 id_stall_req", false,-1);
        tracep->declBit(c+423,"SocTop rvcpu1 ctrl9 ex_stall_req", false,-1);
        tracep->declBit(c+694,"SocTop rvcpu1 ctrl9 mem_stall_req", false,-1);
        tracep->declBus(c+531,"SocTop rvcpu1 ctrl9 stall_ctrl", false,-1, 4,0);
        tracep->declBit(c+662,"SocTop rvcpu1 regfile10 clk", false,-1);
        tracep->declBit(c+663,"SocTop rvcpu1 regfile10 rst", false,-1);
        tracep->declBus(c+173,"SocTop rvcpu1 regfile10 waddr", false,-1, 4,0);
        tracep->declQuad(c+175,"SocTop rvcpu1 regfile10 wdata", false,-1, 63,0);
        tracep->declBit(c+174,"SocTop rvcpu1 regfile10 we", false,-1);
        tracep->declBus(c+513,"SocTop rvcpu1 regfile10 raddr1", false,-1, 4,0);
        tracep->declQuad(c+690,"SocTop rvcpu1 regfile10 rdata1", false,-1, 63,0);
        tracep->declBit(c+514,"SocTop rvcpu1 regfile10 re1", false,-1);
        tracep->declBus(c+515,"SocTop rvcpu1 regfile10 raddr2", false,-1, 4,0);
        tracep->declQuad(c+692,"SocTop rvcpu1 regfile10 rdata2", false,-1, 63,0);
        tracep->declBit(c+516,"SocTop rvcpu1 regfile10 re2", false,-1);
        tracep->declBit(c+686,"SocTop rvcpu1 regfile10 x1_read_ena", false,-1);
        tracep->declQuad(c+684,"SocTop rvcpu1 regfile10 x1_data", false,-1, 63,0);
        tracep->declBus(c+509,"SocTop rvcpu1 regfile10 x1_addr", false,-1, 4,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+315+i*2,"SocTop rvcpu1 regfile10 regs", true,(i+0), 63,0);}}
        tracep->declBus(c+379,"SocTop rvcpu1 regfile10 i", false,-1, 31,0);
        tracep->declBit(c+662,"SocTop i_cache12 clk", false,-1);
        tracep->declBit(c+663,"SocTop i_cache12 rst", false,-1);
        tracep->declQuad(c+630,"SocTop i_cache12 inst_addr", false,-1, 63,0);
        tracep->declBit(c+663,"SocTop i_cache12 inst_ena", false,-1);
        tracep->declBit(c+481,"SocTop i_cache12 inst_ready", false,-1);
        tracep->declBus(c+478,"SocTop i_cache12 inst_data", false,-1, 31,0);
        tracep->declBit(c+479,"SocTop i_cache12 inst_valid", false,-1);
        tracep->declBit(c+480,"SocTop i_cache12 cache_read_ena", false,-1);
        tracep->declQuad(c+676,"SocTop i_cache12 cache_addr", false,-1, 63,0);
        tracep->declBus(c+7,"SocTop i_cache12 cache_or_data", false,-1, 31,0);
        tracep->declBit(c+633,"SocTop i_cache12 cache_in_ok", false,-1);
        tracep->declBit(c+485,"SocTop i_cache12 axi_working_ti", false,-1);
        tracep->declQuad(c+639,"SocTop i_cache12 i_in_teg", false,-1, 54,0);
        tracep->declBus(c+598,"SocTop i_cache12 state_inst", false,-1, 5,0);
        tracep->declBit(c+458,"SocTop i_cache12 inst_hit_ok", false,-1);
        tracep->declBit(c+459,"SocTop i_cache12 write_i_ok", false,-1);
        tracep->declBit(c+706,"SocTop i_cache12 state_sign", false,-1);
        tracep->declBit(c+460,"SocTop i_cache12 inst_in_cache1", false,-1);
        tracep->declBit(c+461,"SocTop i_cache12 inst_in_cache2", false,-1);
        tracep->declBit(c+462,"SocTop i_cache12 inst_write_cache", false,-1);
        tracep->declQuad(c+739,"SocTop i_cache12 out_addr", false,-1, 63,0);
        tracep->declBit(c+741,"SocTop i_cache12 out_ena", false,-1);
        tracep->declBit(c+641,"SocTop i_cache12 inst_chose1", false,-1);
        tracep->declBit(c+642,"SocTop i_cache12 inst_chose2", false,-1);
        tracep->declQuad(c+380,"SocTop i_cache12 addr_lock_reg", false,-1, 63,0);
        tracep->declBus(c+643,"SocTop i_cache12 i_cache_addr1", false,-1, 5,0);
        tracep->declQuad(c+644,"SocTop i_cache12 i_cache_tag1", false,-1, 55,0);
        tracep->declBit(c+599,"SocTop i_cache12 i_tag_ena1", false,-1);
        tracep->declQuad(c+646,"SocTop i_cache12 i_tag_data1", false,-1, 54,0);
        tracep->declBit(c+648,"SocTop i_cache12 i_tag_user1", false,-1);
        tracep->declBus(c+643,"SocTop i_cache12 i_cache_addr2", false,-1, 5,0);
        tracep->declQuad(c+644,"SocTop i_cache12 i_cache_tag2", false,-1, 55,0);
        tracep->declBit(c+600,"SocTop i_cache12 i_tag_ena2", false,-1);
        tracep->declQuad(c+649,"SocTop i_cache12 i_tag_data2", false,-1, 54,0);
        tracep->declBit(c+651,"SocTop i_cache12 i_tag_user2", false,-1);
        tracep->declBus(c+643,"SocTop i_cache12 i_addrdata1", false,-1, 5,0);
        tracep->declBus(c+707,"SocTop i_cache12 i_in_data1", false,-1, 31,0);
        tracep->declBit(c+742,"SocTop i_cache12 i_data_ena1", false,-1);
        tracep->declBus(c+382,"SocTop i_cache12 i_out_data1", false,-1, 31,0);
        tracep->declBus(c+643,"SocTop i_cache12 i_addrdata2", false,-1, 5,0);
        tracep->declBus(c+708,"SocTop i_cache12 i_in_data2", false,-1, 31,0);
        tracep->declBit(c+742,"SocTop i_cache12 i_data_ena2", false,-1);
        tracep->declBus(c+383,"SocTop i_cache12 i_out_data2", false,-1, 31,0);
        tracep->declBus(c+643,"SocTop i_cache12 i_count_addr", false,-1, 5,0);
        tracep->declBus(c+384,"SocTop i_cache12 i", false,-1, 31,0);
        tracep->declBit(c+662,"SocTop i_cache12 u_tag01 clk", false,-1);
        tracep->declBus(c+643,"SocTop i_cache12 u_tag01 addr_i", false,-1, 5,0);
        tracep->declQuad(c+644,"SocTop i_cache12 u_tag01 data_i", false,-1, 55,0);
        tracep->declBit(c+599,"SocTop i_cache12 u_tag01 write_ena", false,-1);
        tracep->declQuad(c+646,"SocTop i_cache12 u_tag01 tag_data", false,-1, 54,0);
        tracep->declBit(c+648,"SocTop i_cache12 u_tag01 tag_valid", false,-1);
        tracep->declQuad(c+646,"SocTop i_cache12 u_tag01 out_data", false,-1, 54,0);
        tracep->declBit(c+648,"SocTop i_cache12 u_tag01 out_vaild", false,-1);
        tracep->declBit(c+662,"SocTop i_cache12 u_tag02 clk", false,-1);
        tracep->declBus(c+643,"SocTop i_cache12 u_tag02 addr_i", false,-1, 5,0);
        tracep->declQuad(c+644,"SocTop i_cache12 u_tag02 data_i", false,-1, 55,0);
        tracep->declBit(c+600,"SocTop i_cache12 u_tag02 write_ena", false,-1);
        tracep->declQuad(c+649,"SocTop i_cache12 u_tag02 tag_data", false,-1, 54,0);
        tracep->declBit(c+651,"SocTop i_cache12 u_tag02 tag_valid", false,-1);
        tracep->declQuad(c+649,"SocTop i_cache12 u_tag02 out_data", false,-1, 54,0);
        tracep->declBit(c+651,"SocTop i_cache12 u_tag02 out_vaild", false,-1);
        tracep->declBit(c+662,"SocTop i_cache12 u_data01 clk", false,-1);
        tracep->declBus(c+643,"SocTop i_cache12 u_data01 addr_i", false,-1, 5,0);
        tracep->declBus(c+707,"SocTop i_cache12 u_data01 data_i", false,-1, 31,0);
        tracep->declBit(c+742,"SocTop i_cache12 u_data01 write_ena", false,-1);
        tracep->declBus(c+382,"SocTop i_cache12 u_data01 data_o", false,-1, 31,0);
        tracep->declBus(c+382,"SocTop i_cache12 u_data01 out_data", false,-1, 31,0);
        tracep->declBit(c+662,"SocTop i_cache12 u_data02 clk", false,-1);
        tracep->declBus(c+643,"SocTop i_cache12 u_data02 addr_i", false,-1, 5,0);
        tracep->declBus(c+708,"SocTop i_cache12 u_data02 data_i", false,-1, 31,0);
        tracep->declBit(c+742,"SocTop i_cache12 u_data02 write_ena", false,-1);
        tracep->declBus(c+383,"SocTop i_cache12 u_data02 data_o", false,-1, 31,0);
        tracep->declBus(c+383,"SocTop i_cache12 u_data02 out_data", false,-1, 31,0);
        tracep->declBit(c+662,"SocTop d_cache13 clk", false,-1);
        tracep->declBit(c+663,"SocTop d_cache13 rst", false,-1);
        tracep->declQuad(c+471,"SocTop d_cache13 mem_addr_i", false,-1, 63,0);
        tracep->declQuad(c+474,"SocTop d_cache13 mem_data_i", false,-1, 63,0);
        tracep->declBus(c+473,"SocTop d_cache13 mem_mask_i", false,-1, 7,0);
        tracep->declBit(c+477,"SocTop d_cache13 mem_data_read_ena", false,-1);
        tracep->declBit(c+476,"SocTop d_cache13 mem_data_writ_ena", false,-1);
        tracep->declQuad(c+482,"SocTop d_cache13 mem_data_out_cpu", false,-1, 63,0);
        tracep->declBit(c+678,"SocTop d_cache13 mem_data_finish", false,-1);
        tracep->declQuad(c+5,"SocTop d_cache13 in_dcache_data", false,-1, 63,0);
        tracep->declBit(c+632,"SocTop d_cache13 in_dcache_ok", false,-1);
        tracep->declQuad(c+471,"SocTop d_cache13 out_dcache_addr", false,-1, 63,0);
        tracep->declQuad(c+679,"SocTop d_cache13 out_dcache_data", false,-1, 63,0);
        tracep->declBit(c+484,"SocTop d_cache13 outr_dcache_ena", false,-1);
        tracep->declBit(c+681,"SocTop d_cache13 outw_dcache_ena", false,-1);
        tracep->declBus(c+601,"SocTop d_cache13 count_addr", false,-1, 5,0);
        tracep->declBit(c+602,"SocTop d_cache13 wirte_chose1", false,-1);
        tracep->declBit(c+603,"SocTop d_cache13 wirte_chose2", false,-1);
        tracep->declBus(c+604,"SocTop d_cache13 state_store", false,-1, 5,0);
        tracep->declBit(c+709,"SocTop d_cache13 store_ok", false,-1);
        tracep->declBit(c+463,"SocTop d_cache13 write_ok", false,-1);
        tracep->declBit(c+652,"SocTop d_cache13 wbck_ok", false,-1);
        tracep->declQuad(c+605,"SocTop d_cache13 in_teg", false,-1, 54,0);
        tracep->declBit(c+464,"SocTop d_cache13 write_incache", false,-1);
        tracep->declBit(c+465,"SocTop d_cache13 w_incache_ena1", false,-1);
        tracep->declBit(c+466,"SocTop d_cache13 w_incache_ena2", false,-1);
        tracep->declBus(c+607,"SocTop d_cache13 state_load", false,-1, 5,0);
        tracep->declBit(c+710,"SocTop d_cache13 load_ok", false,-1);
        tracep->declBit(c+653,"SocTop d_cache13 load_bc_ok", false,-1);
        tracep->declBit(c+467,"SocTop d_cache13 write_l_ok", false,-1);
        tracep->declBus(c+608,"SocTop d_cache13 count_addr2", false,-1, 5,0);
        tracep->declBit(c+711,"SocTop d_cache13 wbck_load_chose1", false,-1);
        tracep->declBit(c+468,"SocTop d_cache13 load_in_cache1", false,-1);
        tracep->declBit(c+469,"SocTop d_cache13 load_in_cache2", false,-1);
        tracep->declBit(c+470,"SocTop d_cache13 read_cache", false,-1);
        tracep->declBus(c+608,"SocTop d_cache13 count_a", false,-1, 5,0);
        tracep->declBus(c+385,"SocTop d_cache13 i", false,-1, 31,0);
        tracep->declBus(c+608,"SocTop d_cache13 dirty_addr", false,-1, 5,0);
        tracep->declBus(c+608,"SocTop d_cache13 addrtag1", false,-1, 5,0);
        tracep->declQuad(c+609,"SocTop d_cache13 datatag1", false,-1, 55,0);
        tracep->declBit(c+611,"SocTop d_cache13 tag_ena1", false,-1);
        tracep->declQuad(c+654,"SocTop d_cache13 tag_data1", false,-1, 54,0);
        tracep->declBit(c+656,"SocTop d_cache13 tag_user1", false,-1);
        tracep->declBus(c+608,"SocTop d_cache13 addrtag2", false,-1, 5,0);
        tracep->declQuad(c+609,"SocTop d_cache13 datatag2", false,-1, 55,0);
        tracep->declBit(c+612,"SocTop d_cache13 tag_ena2", false,-1);
        tracep->declQuad(c+657,"SocTop d_cache13 tag_data2", false,-1, 54,0);
        tracep->declBit(c+659,"SocTop d_cache13 tag_user2", false,-1);
        tracep->declBus(c+613,"SocTop d_cache13 addrdata1", false,-1, 5,0);
        tracep->declQuad(c+614,"SocTop d_cache13 in_data1", false,-1, 63,0);
        tracep->declBus(c+616,"SocTop d_cache13 data_ena1", false,-1, 7,0);
        tracep->declQuad(c+386,"SocTop d_cache13 out_data1", false,-1, 63,0);
        tracep->declBus(c+613,"SocTop d_cache13 addrdata2", false,-1, 5,0);
        tracep->declQuad(c+617,"SocTop d_cache13 in_data2", false,-1, 63,0);
        tracep->declBus(c+619,"SocTop d_cache13 data_ena2", false,-1, 7,0);
        tracep->declQuad(c+388,"SocTop d_cache13 out_data2", false,-1, 63,0);
        tracep->declBit(c+662,"SocTop d_cache13 u_tag0 clk", false,-1);
        tracep->declBus(c+608,"SocTop d_cache13 u_tag0 addr_i", false,-1, 5,0);
        tracep->declQuad(c+609,"SocTop d_cache13 u_tag0 data_i", false,-1, 55,0);
        tracep->declBit(c+611,"SocTop d_cache13 u_tag0 write_ena", false,-1);
        tracep->declQuad(c+654,"SocTop d_cache13 u_tag0 tag_data", false,-1, 54,0);
        tracep->declBit(c+656,"SocTop d_cache13 u_tag0 tag_valid", false,-1);
        tracep->declQuad(c+654,"SocTop d_cache13 u_tag0 out_data", false,-1, 54,0);
        tracep->declBit(c+656,"SocTop d_cache13 u_tag0 out_vaild", false,-1);
        tracep->declBit(c+662,"SocTop d_cache13 u_tag1 clk", false,-1);
        tracep->declBus(c+608,"SocTop d_cache13 u_tag1 addr_i", false,-1, 5,0);
        tracep->declQuad(c+609,"SocTop d_cache13 u_tag1 data_i", false,-1, 55,0);
        tracep->declBit(c+612,"SocTop d_cache13 u_tag1 write_ena", false,-1);
        tracep->declQuad(c+657,"SocTop d_cache13 u_tag1 tag_data", false,-1, 54,0);
        tracep->declBit(c+659,"SocTop d_cache13 u_tag1 tag_valid", false,-1);
        tracep->declQuad(c+657,"SocTop d_cache13 u_tag1 out_data", false,-1, 54,0);
        tracep->declBit(c+659,"SocTop d_cache13 u_tag1 out_vaild", false,-1);
        tracep->declBit(c+662,"SocTop d_cache13 u_data0 clk", false,-1);
        tracep->declBus(c+613,"SocTop d_cache13 u_data0 addr_i", false,-1, 5,0);
        tracep->declQuad(c+614,"SocTop d_cache13 u_data0 data_i", false,-1, 63,0);
        tracep->declBus(c+616,"SocTop d_cache13 u_data0 write_ena", false,-1, 7,0);
        tracep->declQuad(c+386,"SocTop d_cache13 u_data0 data_o", false,-1, 63,0);
        tracep->declQuad(c+386,"SocTop d_cache13 u_data0 out_data", false,-1, 63,0);
        tracep->declBit(c+662,"SocTop d_cache13 u_data1 clk", false,-1);
        tracep->declBus(c+613,"SocTop d_cache13 u_data1 addr_i", false,-1, 5,0);
        tracep->declQuad(c+617,"SocTop d_cache13 u_data1 data_i", false,-1, 63,0);
        tracep->declBus(c+619,"SocTop d_cache13 u_data1 write_ena", false,-1, 7,0);
        tracep->declQuad(c+388,"SocTop d_cache13 u_data1 data_o", false,-1, 63,0);
        tracep->declQuad(c+388,"SocTop d_cache13 u_data1 out_data", false,-1, 63,0);
        tracep->declBit(c+662,"SocTop arbitrate4 clk", false,-1);
        tracep->declBit(c+663,"SocTop arbitrate4 rst", false,-1);
        tracep->declQuad(c+471,"SocTop arbitrate4 d_cache_addr", false,-1, 63,0);
        tracep->declQuad(c+679,"SocTop arbitrate4 d_cache_data", false,-1, 63,0);
        tracep->declBit(c+484,"SocTop arbitrate4 d_cache_read_ena", false,-1);
        tracep->declBit(c+681,"SocTop arbitrate4 d_cache_write_ena", false,-1);
        tracep->declBus(c+738,"SocTop arbitrate4 d_cache_mask", false,-1, 7,0);
        tracep->declQuad(c+5,"SocTop arbitrate4 d_cache_data_o", false,-1, 63,0);
        tracep->declBit(c+632,"SocTop arbitrate4 d_cache_ok", false,-1);
        tracep->declQuad(c+676,"SocTop arbitrate4 i_cache_addr", false,-1, 63,0);
        tracep->declBit(c+480,"SocTop arbitrate4 i_cache_ena", false,-1);
        tracep->declBus(c+7,"SocTop arbitrate4 i_cache_data_o", false,-1, 31,0);
        tracep->declBit(c+633,"SocTop arbitrate4 i_cache_ok", false,-1);
        tracep->declBit(c+485,"SocTop arbitrate4 axi_working_ti", false,-1);
        tracep->declBus(c+713,"SocTop arbitrate4 axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+487,"SocTop arbitrate4 axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+714,"SocTop arbitrate4 axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+715,"SocTop arbitrate4 axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+716,"SocTop arbitrate4 axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+717,"SocTop arbitrate4 axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+718,"SocTop arbitrate4 axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+713,"SocTop arbitrate4 axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+489,"SocTop arbitrate4 axi_aw_valid", false,-1);
        tracep->declBit(c+8,"SocTop arbitrate4 axi_aw_ready", false,-1);
        tracep->declQuad(c+490,"SocTop arbitrate4 axi_w_data", false,-1, 63,0);
        tracep->declBus(c+9,"SocTop arbitrate4 axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+719,"SocTop arbitrate4 axi_w_last", false,-1);
        tracep->declBit(c+10,"SocTop arbitrate4 axi_w_valid", false,-1);
        tracep->declBit(c+11,"SocTop arbitrate4 axi_w_ready", false,-1);
        tracep->declBus(c+12,"SocTop arbitrate4 axi_b_id", false,-1, 3,0);
        tracep->declBus(c+13,"SocTop arbitrate4 axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+14,"SocTop arbitrate4 axi_b_valid", false,-1);
        tracep->declBit(c+719,"SocTop arbitrate4 axi_b_ready", false,-1);
        tracep->declBus(c+492,"SocTop arbitrate4 axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+493,"SocTop arbitrate4 axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+714,"SocTop arbitrate4 axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+715,"SocTop arbitrate4 axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+716,"SocTop arbitrate4 axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+717,"SocTop arbitrate4 axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+718,"SocTop arbitrate4 axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+713,"SocTop arbitrate4 axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+495,"SocTop arbitrate4 axi_ar_valid", false,-1);
        tracep->declBit(c+15,"SocTop arbitrate4 axi_ar_ready", false,-1);
        tracep->declBus(c+634,"SocTop arbitrate4 axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+16,"SocTop arbitrate4 axi_r_data", false,-1, 63,0);
        tracep->declBus(c+635,"SocTop arbitrate4 axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+636,"SocTop arbitrate4 axi_r_last", false,-1);
        tracep->declBit(c+18,"SocTop arbitrate4 axi_r_valid", false,-1);
        tracep->declBit(c+719,"SocTop arbitrate4 axi_r_ready", false,-1);
        tracep->declBit(c+452,"SocTop arbitrate4 aw_shankhand", false,-1);
        tracep->declBit(c+390,"SocTop arbitrate4 w_shankhand", false,-1);
        tracep->declBit(c+391,"SocTop arbitrate4 b_shankhand", false,-1);
        tracep->declBit(c+392,"SocTop arbitrate4 b_success", false,-1);
        tracep->declBus(c+393,"SocTop arbitrate4 transfor_state", false,-1, 1,0);
        tracep->declBus(c+620,"SocTop arbitrate4 transfor_state_nex", false,-1, 1,0);
        tracep->declBit(c+18,"SocTop arbitrate4 r_shankhand", false,-1);
        tracep->declBit(c+453,"SocTop arbitrate4 d_cache_ar_shankhand", false,-1);
        tracep->declBit(c+454,"SocTop arbitrate4 i_cache_ar_shankhand", false,-1);
        tracep->declBit(c+660,"SocTop arbitrate4 d_cache_r_shankhand", false,-1);
        tracep->declBit(c+661,"SocTop arbitrate4 i_cache_r_shankhand", false,-1);
        tracep->declBit(c+621,"SocTop arbitrate4 arb_sign", false,-1);
        tracep->declBit(c+622,"SocTop arbitrate4 i_cache_valid", false,-1);
        tracep->declBit(c+623,"SocTop arbitrate4 d_cache_valid", false,-1);
        tracep->declBus(c+394,"SocTop arbitrate4 i_cache_state", false,-1, 1,0);
        tracep->declBus(c+624,"SocTop arbitrate4 i_cache_state_nxt", false,-1, 1,0);
        tracep->declBus(c+395,"SocTop arbitrate4 d_cache_state", false,-1, 1,0);
        tracep->declBus(c+625,"SocTop arbitrate4 d_cache_state_nxt", false,-1, 1,0);
        tracep->declBit(c+633,"SocTop arbitrate4 i_cache_okreg", false,-1);
        tracep->declBit(c+396,"SocTop arbitrate4 d_cache_okreg", false,-1);
        tracep->declBus(c+7,"SocTop arbitrate4 i_cache_data_oupt", false,-1, 31,0);
        tracep->declQuad(c+5,"SocTop arbitrate4 d_cache_data_outp", false,-1, 63,0);
        tracep->declBit(c+662,"SocTop axi_mnq4 clk", false,-1);
        tracep->declBit(c+663,"SocTop axi_mnq4 rst", false,-1);
        tracep->declBus(c+61,"SocTop axi_mnq4 s_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+62,"SocTop axi_mnq4 s_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+64,"SocTop axi_mnq4 s_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+65,"SocTop axi_mnq4 s_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+66,"SocTop axi_mnq4 s_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+67,"SocTop axi_mnq4 s_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+68,"SocTop axi_mnq4 s_axi_aw_port", false,-1, 2,0);
        tracep->declBus(c+69,"SocTop axi_mnq4 s_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+71,"SocTop axi_mnq4 s_axi_aw_valid", false,-1);
        tracep->declBit(c+70,"SocTop axi_mnq4 s_axi_aw_ready", false,-1);
        tracep->declQuad(c+72,"SocTop axi_mnq4 s_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+74,"SocTop axi_mnq4 s_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+75,"SocTop axi_mnq4 s_axi_w_last", false,-1);
        tracep->declBit(c+76,"SocTop axi_mnq4 s_axi_w_valid", false,-1);
        tracep->declBit(c+77,"SocTop axi_mnq4 s_axi_w_ready", false,-1);
        tracep->declBus(c+61,"SocTop axi_mnq4 s_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+721,"SocTop axi_mnq4 s_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+78,"SocTop axi_mnq4 s_axi_b_valid", false,-1);
        tracep->declBit(c+722,"SocTop axi_mnq4 s_axi_b_ready", false,-1);
        tracep->declBus(c+79,"SocTop axi_mnq4 s_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+80,"SocTop axi_mnq4 s_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+82,"SocTop axi_mnq4 s_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+83,"SocTop axi_mnq4 s_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+84,"SocTop axi_mnq4 s_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+85,"SocTop axi_mnq4 s_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+86,"SocTop axi_mnq4 s_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+87,"SocTop axi_mnq4 s_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+88,"SocTop axi_mnq4 s_axi_ar_valid", false,-1);
        tracep->declBit(c+89,"SocTop axi_mnq4 s_axi_ar_ready", false,-1);
        tracep->declBus(c+90,"SocTop axi_mnq4 s_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+682,"SocTop axi_mnq4 s_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+721,"SocTop axi_mnq4 s_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+91,"SocTop axi_mnq4 s_axi_r_last", false,-1);
        tracep->declBit(c+92,"SocTop axi_mnq4 s_axi_r_valid", false,-1);
        tracep->declBit(c+93,"SocTop axi_mnq4 s_axi_r_ready", false,-1);
        tracep->declBit(c+151,"SocTop axi_mnq4 read_ram_ena", false,-1);
        tracep->declBit(c+152,"SocTop axi_mnq4 read_inst_ena", false,-1);
        tracep->declQuad(c+153,"SocTop axi_mnq4 addr_oup", false,-1, 63,0);
        tracep->declBus(c+668,"SocTop axi_mnq4 inst_data_in", false,-1, 31,0);
        tracep->declQuad(c+669,"SocTop axi_mnq4 ram_data_in", false,-1, 63,0);
        tracep->declBit(c+78,"SocTop axi_mnq4 write_ram_ena", false,-1);
        tracep->declQuad(c+157,"SocTop axi_mnq4 write_ram_data", false,-1, 63,0);
        tracep->declQuad(c+155,"SocTop axi_mnq4 write_ram_addr", false,-1, 63,0);
        tracep->declBit(c+397,"SocTop axi_mnq4 aw_shankhand", false,-1);
        tracep->declBit(c+398,"SocTop axi_mnq4 w_shankhand", false,-1);
        tracep->declBit(c+399,"SocTop axi_mnq4 b_shankhand", false,-1);
        tracep->declBus(c+400,"SocTop axi_mnq4 s_write_state", false,-1, 1,0);
        tracep->declBus(c+401,"SocTop axi_mnq4 s_write_state_nxt", false,-1, 1,0);
        tracep->declBit(c+402,"SocTop axi_mnq4 ar_shankhand", false,-1);
        tracep->declBit(c+403,"SocTop axi_mnq4 r_shankhand", false,-1);
        tracep->declBus(c+404,"SocTop axi_mnq4 s_read_state", false,-1, 1,0);
        tracep->declBus(c+405,"SocTop axi_mnq4 s_read_state_nxt", false,-1, 1,0);
        tracep->declQuad(c+406,"SocTop axi_mnq4 read_addr_reg", false,-1, 63,0);
        tracep->declQuad(c+408,"SocTop axi_mnq4 write_data_reg", false,-1, 63,0);
        tracep->declQuad(c+410,"SocTop axi_mnq4 write_addr_reg", false,-1, 63,0);
        tracep->declBit(c+662,"SocTop soc_axi45 clk", false,-1);
        tracep->declBit(c+663,"SocTop soc_axi45 rst", false,-1);
        tracep->declBus(c+507,"SocTop soc_axi45 prot_chose_write", false,-1, 2,0);
        tracep->declBus(c+508,"SocTop soc_axi45 prot_chose_read", false,-1, 2,0);
        tracep->declBus(c+713,"SocTop soc_axi45 master_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+487,"SocTop soc_axi45 master_axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+714,"SocTop soc_axi45 master_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+715,"SocTop soc_axi45 master_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+716,"SocTop soc_axi45 master_axi_aw_burst", false,-1, 1,0);
        tracep->declBus(c+717,"SocTop soc_axi45 master_axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+718,"SocTop soc_axi45 master_axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+713,"SocTop soc_axi45 master_axi_aw_qos", false,-1, 3,0);
        tracep->declBit(c+489,"SocTop soc_axi45 master_axi_aw_valid", false,-1);
        tracep->declBit(c+8,"SocTop soc_axi45 master_axi_aw_ready", false,-1);
        tracep->declQuad(c+490,"SocTop soc_axi45 master_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+9,"SocTop soc_axi45 master_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+719,"SocTop soc_axi45 master_axi_w_last", false,-1);
        tracep->declBit(c+10,"SocTop soc_axi45 master_axi_w_valid", false,-1);
        tracep->declBit(c+11,"SocTop soc_axi45 master_axi_w_ready", false,-1);
        tracep->declBus(c+12,"SocTop soc_axi45 master_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+13,"SocTop soc_axi45 master_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+719,"SocTop soc_axi45 master_axi_b_ready", false,-1);
        tracep->declBit(c+14,"SocTop soc_axi45 master_axi_b_valid", false,-1);
        tracep->declBus(c+492,"SocTop soc_axi45 master_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+493,"SocTop soc_axi45 master_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+714,"SocTop soc_axi45 master_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+715,"SocTop soc_axi45 master_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+716,"SocTop soc_axi45 master_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+717,"SocTop soc_axi45 master_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+718,"SocTop soc_axi45 master_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+713,"SocTop soc_axi45 master_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+495,"SocTop soc_axi45 master_axi_ar_valid", false,-1);
        tracep->declBit(c+15,"SocTop soc_axi45 master_axi_ar_ready", false,-1);
        tracep->declBus(c+634,"SocTop soc_axi45 master_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+16,"SocTop soc_axi45 master_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+635,"SocTop soc_axi45 master_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+636,"SocTop soc_axi45 master_axi_r_last", false,-1);
        tracep->declBit(c+18,"SocTop soc_axi45 master_axi_r_valid", false,-1);
        tracep->declBit(c+719,"SocTop soc_axi45 master_axi_r_ready", false,-1);
        tracep->declBus(c+19,"SocTop soc_axi45 slave_axi_aw_id", false,-1, 11,0);
        tracep->declArray(c+20,"SocTop soc_axi45 slave_axi_aw_addr", false,-1, 191,0);
        tracep->declBus(c+26,"SocTop soc_axi45 slave_axi_aw_len", false,-1, 23,0);
        tracep->declBus(c+27,"SocTop soc_axi45 slave_axi_aw_size", false,-1, 8,0);
        tracep->declBus(c+28,"SocTop soc_axi45 slave_axi_aw_burst", false,-1, 5,0);
        tracep->declBus(c+29,"SocTop soc_axi45 slave_axi_aw_cache", false,-1, 11,0);
        tracep->declBus(c+30,"SocTop soc_axi45 slave_axi_aw_prot", false,-1, 8,0);
        tracep->declBus(c+31,"SocTop soc_axi45 slave_axi_aw_qos", false,-1, 11,0);
        tracep->declBus(c+32,"SocTop soc_axi45 slave_axi_aw_valid", false,-1, 2,0);
        tracep->declBus(c+33,"SocTop soc_axi45 slave_axi_aw_ready", false,-1, 2,0);
        tracep->declArray(c+34,"SocTop soc_axi45 slave_axi_w_data", false,-1, 191,0);
        tracep->declBus(c+40,"SocTop soc_axi45 slave_axi_w_strb", false,-1, 23,0);
        tracep->declBus(c+41,"SocTop soc_axi45 slave_axi_w_last", false,-1, 2,0);
        tracep->declBus(c+42,"SocTop soc_axi45 slave_axi_w_valid", false,-1, 2,0);
        tracep->declBus(c+43,"SocTop soc_axi45 slave_axi_w_ready", false,-1, 2,0);
        tracep->declBus(c+496,"SocTop soc_axi45 slave_axi_b_id", false,-1, 11,0);
        tracep->declBus(c+1,"SocTop soc_axi45 slave_axi_b_resp", false,-1, 5,0);
        tracep->declBus(c+497,"SocTop soc_axi45 slave_axi_b_valid", false,-1, 2,0);
        tracep->declBus(c+720,"SocTop soc_axi45 slave_axi_b_ready", false,-1, 2,0);
        tracep->declBus(c+44,"SocTop soc_axi45 slave_axi_ar_id", false,-1, 11,0);
        tracep->declArray(c+45,"SocTop soc_axi45 slave_axi_ar_addr", false,-1, 191,0);
        tracep->declBus(c+51,"SocTop soc_axi45 slave_axi_ar_len", false,-1, 23,0);
        tracep->declBus(c+52,"SocTop soc_axi45 slave_axi_ar_size", false,-1, 8,0);
        tracep->declBus(c+53,"SocTop soc_axi45 slave_axi_ar_burst", false,-1, 5,0);
        tracep->declBus(c+54,"SocTop soc_axi45 slave_axi_ar_cache", false,-1, 11,0);
        tracep->declBus(c+55,"SocTop soc_axi45 slave_axi_ar_prot", false,-1, 8,0);
        tracep->declBus(c+56,"SocTop soc_axi45 slave_axi_ar_qos", false,-1, 11,0);
        tracep->declBus(c+57,"SocTop soc_axi45 slave_axi_ar_valid", false,-1, 2,0);
        tracep->declBus(c+58,"SocTop soc_axi45 slave_axi_ar_ready", false,-1, 2,0);
        tracep->declBus(c+637,"SocTop soc_axi45 slave_axi_r_id", false,-1, 11,0);
        tracep->declArray(c+498,"SocTop soc_axi45 slave_axi_r_data", false,-1, 191,0);
        tracep->declBus(c+2,"SocTop soc_axi45 slave_axi_r_resp", false,-1, 5,0);
        tracep->declBus(c+638,"SocTop soc_axi45 slave_axi_r_last", false,-1, 2,0);
        tracep->declBus(c+59,"SocTop soc_axi45 slave_axi_r_valid", false,-1, 2,0);
        tracep->declBus(c+60,"SocTop soc_axi45 slave_axi_r_ready", false,-1, 2,0);
        tracep->declBus(c+712,"SocTop soc_axi45 SLAVE_NUM", false,-1, 31,0);
        tracep->declBit(c+662,"SocTop time_axi6 clk", false,-1);
        tracep->declBit(c+663,"SocTop time_axi6 rst", false,-1);
        tracep->declBit(c+486,"SocTop time_axi6 time_interrupt", false,-1);
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
        tracep->declBus(c+422,"SocTop time_axi6 time_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+3,"SocTop time_axi6 time_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+504,"SocTop time_axi6 time_axi_b_valid", false,-1);
        tracep->declBit(c+723,"SocTop time_axi6 time_axi_b_ready", false,-1);
        tracep->declBus(c+111,"SocTop time_axi6 time_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+112,"SocTop time_axi6 time_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+114,"SocTop time_axi6 time_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+115,"SocTop time_axi6 time_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+116,"SocTop time_axi6 time_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+117,"SocTop time_axi6 time_axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+118,"SocTop time_axi6 time_axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+119,"SocTop time_axi6 time_axi_ar_qos", false,-1, 3,0);
        tracep->declBit(c+120,"SocTop time_axi6 time_axi_ar_valid", false,-1);
        tracep->declBit(c+121,"SocTop time_axi6 time_axi_ar_ready", false,-1);
        tracep->declBus(c+122,"SocTop time_axi6 time_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+505,"SocTop time_axi6 time_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+4,"SocTop time_axi6 time_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+123,"SocTop time_axi6 time_axi_r_last", false,-1);
        tracep->declBit(c+724,"SocTop time_axi6 time_axi_r_valid", false,-1);
        tracep->declBit(c+124,"SocTop time_axi6 time_axi_r_ready", false,-1);
        tracep->declQuad(c+626,"SocTop time_axi6 car_mtime_l", false,-1, 63,0);
        tracep->declQuad(c+628,"SocTop time_axi6 csr_mtime_h", false,-1, 63,0);
        tracep->declBit(c+743,"SocTop time_axi6 csr_mtime_l_r_ena", false,-1);
        tracep->declBit(c+744,"SocTop time_axi6 csr_mtine_h_r_ena", false,-1);
        tracep->declBit(c+412,"SocTop time_axi6 csr_mtime_l_w_ena", false,-1);
        tracep->declBit(c+413,"SocTop time_axi6 csr_mtime_h_w_ena", false,-1);
        tracep->declBit(c+414,"SocTop time_axi6 aw_shakehand", false,-1);
        tracep->declBit(c+415,"SocTop time_axi6 w_shakehand", false,-1);
        tracep->declBit(c+416,"SocTop time_axi6 mode_right", false,-1);
        tracep->declBus(c+417,"SocTop time_axi6 state_time_m", false,-1, 1,0);
        tracep->declBus(c+455,"SocTop time_axi6 state_time_m_nxt", false,-1, 1,0);
        tracep->declBit(c+418,"SocTop time_axi6 mode_right_r", false,-1);
        tracep->declBit(c+419,"SocTop time_axi6 ar_shakehand", false,-1);
        tracep->declQuad(c+456,"SocTop time_axi6 time_csr_link", false,-1, 63,0);
        tracep->declBus(c+420,"SocTop time_axi6 state_time_r", false,-1, 1,0);
        tracep->declBus(c+421,"SocTop time_axi6 state_time_r_nxt", false,-1, 1,0);
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
        tracep->fullQData(oldp+5,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_data_outp),64);
        tracep->fullIData(oldp+7,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_data_oupt),32);
        tracep->fullBit(oldp+8,(vlSelf->SocTop__DOT__t_axi_aw_ready));
        tracep->fullCData(oldp+9,(vlSelf->SocTop__DOT__t_axi_w_strb),8);
        tracep->fullBit(oldp+10,(vlSelf->SocTop__DOT__t_axi_w_valid));
        tracep->fullBit(oldp+11,(vlSelf->SocTop__DOT__t_axi_w_ready));
        tracep->fullCData(oldp+12,(vlSelf->SocTop__DOT__t_axi_b_id),4);
        tracep->fullCData(oldp+13,(vlSelf->SocTop__DOT__t_axi_b_resp),2);
        tracep->fullBit(oldp+14,(vlSelf->SocTop__DOT__t_axi_b_valid));
        tracep->fullBit(oldp+15,(vlSelf->SocTop__DOT__t_axi_ar_ready));
        tracep->fullQData(oldp+16,(vlSelf->SocTop__DOT__t_axi_r_data),64);
        tracep->fullBit(oldp+18,(vlSelf->SocTop__DOT__t_axi_r_valid));
        tracep->fullSData(oldp+19,(vlSelf->SocTop__DOT__add_axi_aw_id),12);
        tracep->fullWData(oldp+20,(vlSelf->SocTop__DOT__add_axi_aw_addr),192);
        tracep->fullIData(oldp+26,(vlSelf->SocTop__DOT__add_axi_aw_len),24);
        tracep->fullSData(oldp+27,(vlSelf->SocTop__DOT__add_axi_aw_size),9);
        tracep->fullCData(oldp+28,(vlSelf->SocTop__DOT__add_axi_aw_burst),6);
        tracep->fullSData(oldp+29,(vlSelf->SocTop__DOT__add_axi_aw_cache),12);
        tracep->fullSData(oldp+30,(vlSelf->SocTop__DOT__add_axi_aw_prot),9);
        tracep->fullSData(oldp+31,(vlSelf->SocTop__DOT__add_axi_aw_qos),12);
        tracep->fullCData(oldp+32,(vlSelf->SocTop__DOT__add_axi_aw_valid),3);
        tracep->fullCData(oldp+33,(vlSelf->SocTop__DOT__add_axi_aw_ready),3);
        tracep->fullWData(oldp+34,(vlSelf->SocTop__DOT__add_axi_w_data),192);
        tracep->fullIData(oldp+40,(vlSelf->SocTop__DOT__add_axi_w_strb),24);
        tracep->fullCData(oldp+41,(vlSelf->SocTop__DOT__add_axi_w_last),3);
        tracep->fullCData(oldp+42,(vlSelf->SocTop__DOT__add_axi_w_valid),3);
        tracep->fullCData(oldp+43,(vlSelf->SocTop__DOT__add_axi_w_ready),3);
        tracep->fullSData(oldp+44,(vlSelf->SocTop__DOT__add_axi_ar_id),12);
        tracep->fullWData(oldp+45,(vlSelf->SocTop__DOT__add_axi_ar_addr),192);
        tracep->fullIData(oldp+51,(vlSelf->SocTop__DOT__add_axi_ar_len),24);
        tracep->fullSData(oldp+52,(vlSelf->SocTop__DOT__add_axi_ar_size),9);
        tracep->fullCData(oldp+53,(vlSelf->SocTop__DOT__add_axi_ar_burst),6);
        tracep->fullSData(oldp+54,(vlSelf->SocTop__DOT__add_axi_ar_cache),12);
        tracep->fullSData(oldp+55,(vlSelf->SocTop__DOT__add_axi_ar_prot),9);
        tracep->fullSData(oldp+56,(vlSelf->SocTop__DOT__add_axi_ar_qos),12);
        tracep->fullCData(oldp+57,(vlSelf->SocTop__DOT__add_axi_ar_valid),3);
        tracep->fullCData(oldp+58,(vlSelf->SocTop__DOT__add_axi_ar_ready),3);
        tracep->fullCData(oldp+59,(vlSelf->SocTop__DOT__add_axi_r_valid),3);
        tracep->fullCData(oldp+60,(vlSelf->SocTop__DOT__add_axi_r_ready),3);
        tracep->fullCData(oldp+61,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_id) 
                                            >> 8U))),4);
        tracep->fullQData(oldp+62,((((QData)((IData)(
                                                     vlSelf->SocTop__DOT__add_axi_aw_addr[5U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SocTop__DOT__add_axi_aw_addr[4U])))),64);
        tracep->fullCData(oldp+64,((0xffU & (vlSelf->SocTop__DOT__add_axi_aw_len 
                                             >> 0x10U))),8);
        tracep->fullCData(oldp+65,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_size) 
                                          >> 6U))),3);
        tracep->fullCData(oldp+66,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_burst) 
                                          >> 4U))),2);
        tracep->fullCData(oldp+67,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_cache) 
                                            >> 8U))),4);
        tracep->fullCData(oldp+68,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_prot) 
                                          >> 6U))),3);
        tracep->fullCData(oldp+69,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_qos) 
                                            >> 8U))),4);
        tracep->fullBit(oldp+70,(vlSelf->SocTop__DOT__soc_axi_aw_ready));
        tracep->fullBit(oldp+71,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                        >> 2U))));
        tracep->fullQData(oldp+72,((((QData)((IData)(
                                                     vlSelf->SocTop__DOT__add_axi_w_data[5U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SocTop__DOT__add_axi_w_data[4U])))),64);
        tracep->fullCData(oldp+74,((0xffU & (vlSelf->SocTop__DOT__add_axi_w_strb 
                                             >> 0x10U))),8);
        tracep->fullBit(oldp+75,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_last) 
                                        >> 2U))));
        tracep->fullBit(oldp+76,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                        >> 2U))));
        tracep->fullBit(oldp+77,(vlSelf->SocTop__DOT__soc_axi_w_ready));
        tracep->fullBit(oldp+78,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))));
        tracep->fullCData(oldp+79,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                            >> 8U))),4);
        tracep->fullQData(oldp+80,((((QData)((IData)(
                                                     vlSelf->SocTop__DOT__add_axi_ar_addr[5U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SocTop__DOT__add_axi_ar_addr[4U])))),64);
        tracep->fullCData(oldp+82,((0xffU & (vlSelf->SocTop__DOT__add_axi_ar_len 
                                             >> 0x10U))),8);
        tracep->fullCData(oldp+83,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_size) 
                                          >> 6U))),3);
        tracep->fullCData(oldp+84,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_burst) 
                                          >> 4U))),2);
        tracep->fullCData(oldp+85,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_cache) 
                                            >> 8U))),4);
        tracep->fullCData(oldp+86,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_prot) 
                                          >> 6U))),3);
        tracep->fullCData(oldp+87,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_qos) 
                                            >> 8U))),4);
        tracep->fullBit(oldp+88,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                                        >> 2U))));
        tracep->fullBit(oldp+89,(vlSelf->SocTop__DOT__soc_axi_ar_ready));
        tracep->fullCData(oldp+90,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                     ? (0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                                >> 8U))
                                     : 0U)),4);
        tracep->fullBit(oldp+91,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))));
        tracep->fullBit(oldp+92,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))));
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
        tracep->fullCData(oldp+111,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                             >> 4U))),4);
        tracep->fullQData(oldp+112,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))),64);
        tracep->fullCData(oldp+114,((0xffU & (vlSelf->SocTop__DOT__add_axi_ar_len 
                                              >> 8U))),8);
        tracep->fullCData(oldp+115,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_size) 
                                           >> 3U))),3);
        tracep->fullCData(oldp+116,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_burst) 
                                           >> 2U))),2);
        tracep->fullCData(oldp+117,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_cache) 
                                             >> 4U))),4);
        tracep->fullCData(oldp+118,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_prot) 
                                           >> 3U))),3);
        tracep->fullCData(oldp+119,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_qos) 
                                             >> 4U))),4);
        tracep->fullBit(oldp+120,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                                         >> 1U))));
        tracep->fullBit(oldp+121,(vlSelf->SocTop__DOT__tim_axi_ar_ready));
        tracep->fullCData(oldp+122,(((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r))
                                      ? (0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                                 >> 4U))
                                      : 0U)),4);
        tracep->fullBit(oldp+123,(vlSelf->SocTop__DOT__tim_axi_r_last));
        tracep->fullBit(oldp+124,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                         >> 1U))));
        tracep->fullCData(oldp+125,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_id))),4);
        tracep->fullQData(oldp+126,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_aw_addr[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_aw_addr[0U])))),64);
        tracep->fullCData(oldp+128,((0xffU & vlSelf->SocTop__DOT__add_axi_aw_len)),8);
        tracep->fullCData(oldp+129,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_size))),3);
        tracep->fullCData(oldp+130,((3U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_burst))),2);
        tracep->fullCData(oldp+131,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_cache))),4);
        tracep->fullCData(oldp+132,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_prot))),3);
        tracep->fullCData(oldp+133,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_qos))),4);
        tracep->fullBit(oldp+134,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_valid))));
        tracep->fullQData(oldp+135,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_w_data[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_w_data[0U])))),64);
        tracep->fullCData(oldp+137,((0xffU & vlSelf->SocTop__DOT__add_axi_w_strb)),8);
        tracep->fullBit(oldp+138,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_w_last))));
        tracep->fullBit(oldp+139,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_w_valid))));
        tracep->fullCData(oldp+140,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_id))),4);
        tracep->fullQData(oldp+141,((((QData)((IData)(
                                                      vlSelf->SocTop__DOT__add_axi_ar_addr[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_ar_addr[0U])))),64);
        tracep->fullCData(oldp+143,((0xffU & vlSelf->SocTop__DOT__add_axi_ar_len)),8);
        tracep->fullCData(oldp+144,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_size))),3);
        tracep->fullCData(oldp+145,((3U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_burst))),2);
        tracep->fullCData(oldp+146,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_cache))),4);
        tracep->fullCData(oldp+147,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_prot))),3);
        tracep->fullCData(oldp+148,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_qos))),4);
        tracep->fullBit(oldp+149,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_valid))));
        tracep->fullBit(oldp+150,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_r_ready))));
        tracep->fullBit(oldp+151,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)) 
                                   & (0U == (0xfU & 
                                             ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                              >> 8U))))));
        tracep->fullBit(oldp+152,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)) 
                                   & (1U == (0xfU & 
                                             ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                              >> 8U))))));
        tracep->fullQData(oldp+153,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                      ? vlSelf->SocTop__DOT__axi_mnq4__DOT__read_addr_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+155,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))
                                      ? vlSelf->SocTop__DOT__axi_mnq4__DOT__write_addr_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+157,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))
                                      ? vlSelf->SocTop__DOT__axi_mnq4__DOT__write_data_reg
                                      : 0ULL)),64);
        tracep->fullQData(oldp+159,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc),64);
        tracep->fullIData(oldp+161,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst),32);
        tracep->fullBit(oldp+162,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena));
        tracep->fullCData(oldp+163,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr),5);
        tracep->fullBit(oldp+164,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena));
        tracep->fullCData(oldp+165,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type),8);
        tracep->fullCData(oldp+166,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_sel),3);
        tracep->fullQData(oldp+167,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_addr),64);
        tracep->fullQData(oldp+169,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena))
                                      ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data
                                      : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch)
                                          ? (4ULL + vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc)
                                          : 0ULL))),64);
        tracep->fullCData(oldp+171,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr),5);
        tracep->fullBit(oldp+172,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena));
        tracep->fullCData(oldp+173,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr),5);
        tracep->fullBit(oldp+174,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena));
        tracep->fullQData(oldp+175,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data),64);
        tracep->fullQData(oldp+177,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc),64);
        tracep->fullCData(oldp+179,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type),8);
        tracep->fullCData(oldp+180,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode),8);
        tracep->fullQData(oldp+181,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1),64);
        tracep->fullQData(oldp+183,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2),64);
        tracep->fullBit(oldp+185,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdena));
        tracep->fullSData(oldp+186,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset),12);
        tracep->fullCData(oldp+187,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type),8);
        tracep->fullQData(oldp+188,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data),64);
        tracep->fullCData(oldp+190,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel),3);
        tracep->fullQData(oldp+191,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr),64);
        tracep->fullQData(oldp+193,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_pc),64);
        tracep->fullIData(oldp+195,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_ex_inst),32);
        tracep->fullIData(oldp+196,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_inst),32);
        tracep->fullCData(oldp+197,((0x7fU & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)),7);
        tracep->fullCData(oldp+198,((0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+199,((7U & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                           >> 0xcU))),3);
        tracep->fullSData(oldp+200,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                     >> 0x14U)),12);
        tracep->fullCData(oldp+201,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+202,((0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                              >> 0x14U))),5);
        tracep->fullIData(oldp+203,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                     >> 0xcU)),20);
        tracep->fullSData(oldp+204,(((0xfe0U & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                 >> 7U)))),12);
        tracep->fullQData(oldp+205,((1ULL + (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))),64);
        tracep->fullQData(oldp+207,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sub_op2),64);
        tracep->fullQData(oldp+209,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2),64);
        tracep->fullQData(oldp+211,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_addw_op2),64);
        tracep->fullBit(oldp+213,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_ls_op2));
        tracep->fullQData(oldp+214,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__shift_res),64);
        tracep->fullIData(oldp+216,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sllw_op2),32);
        tracep->fullQData(oldp+217,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sllw_res),64);
        tracep->fullIData(oldp+219,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_srlw_op2),32);
        tracep->fullQData(oldp+220,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__srlw_res),64);
        tracep->fullIData(oldp+222,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sraw_op2),32);
        tracep->fullQData(oldp+223,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sraw_res),64);
        tracep->fullIData(oldp+225,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2),32);
        tracep->fullQData(oldp+226,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2)))),64);
        tracep->fullQData(oldp+228,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__upper_imm),64);
        tracep->fullBit(oldp+230,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch));
        tracep->fullBit(oldp+231,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena));
        tracep->fullSData(oldp+232,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx),12);
        tracep->fullQData(oldp+233,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data),64);
        tracep->fullBit(oldp+235,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena));
        tracep->fullBit(oldp+236,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena));
        tracep->fullBit(oldp+237,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena));
        tracep->fullBit(oldp+238,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en));
        tracep->fullBit(oldp+239,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en));
        tracep->fullQData(oldp+240,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data),64);
        tracep->fullQData(oldp+242,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value),64);
        tracep->fullQData(oldp+244,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
                                     | vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1)),64);
        tracep->fullQData(oldp+246,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
                                     & (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1))),64);
        tracep->fullBit(oldp+248,((0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+249,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en) 
                                   & (0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)))));
        tracep->fullBit(oldp+250,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en) 
                                   & (0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)))));
        tracep->fullQData(oldp+251,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcycle),64);
        tracep->fullBit(oldp+253,((0x300U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+254,(((0x300U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+255,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus));
        tracep->fullBit(oldp+256,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_ena));
        tracep->fullBit(oldp+257,((1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                          | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                          ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)
                                          : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena) 
                                             | ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                 ? (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                            >> 7U))
                                                 : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)))))));
        tracep->fullBit(oldp+258,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie));
        tracep->fullBit(oldp+259,((1U & ((~ ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                             | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))) 
                                         & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)
                                             ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)
                                             : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                 ? (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                            >> 3U))
                                                 : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)))))));
        tracep->fullBit(oldp+260,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie));
        tracep->fullCData(oldp+261,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                      ? 3U : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                      ? (IData)(
                                                                (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                                 >> 0xbU))
                                                      : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp)))))),2);
        tracep->fullCData(oldp+262,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp),2);
        tracep->fullCData(oldp+263,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs),2);
        tracep->fullBit(oldp+264,((3U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs))));
        tracep->fullQData(oldp+265,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus),64);
        tracep->fullBit(oldp+267,((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+268,(((((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en)) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
        tracep->fullBit(oldp+269,(((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
        tracep->fullQData(oldp+270,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base),62);
        tracep->fullQData(oldp+272,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base 
                                     << 2U)),64);
        tracep->fullBit(oldp+274,((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+275,((((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena))));
        tracep->fullBit(oldp+276,(((((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en)) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
        tracep->fullQData(oldp+277,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mepc),64);
        tracep->fullBit(oldp+279,((0x342U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+280,(((0x342U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+281,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause));
        tracep->fullBit(oldp+282,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
        tracep->fullQData(oldp+283,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                      ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value
                                      : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause)
                                          ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data
                                          : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause))),64);
        tracep->fullQData(oldp+285,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause),64);
        tracep->fullBit(oldp+287,((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+288,(((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+289,(((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
        tracep->fullBit(oldp+290,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie));
        tracep->fullQData(oldp+291,(((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie)) 
                                     << 7U)),64);
        tracep->fullBit(oldp+293,((0x344U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+294,(((0x344U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+295,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip));
        tracep->fullQData(oldp+296,((QData)((IData)(
                                                    ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip) 
                                                     << 7U)))),64);
        tracep->fullBit(oldp+298,((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
        tracep->fullBit(oldp+299,(((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
        tracep->fullBit(oldp+300,(((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
        tracep->fullQData(oldp+301,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mscrstch),64);
        tracep->fullCData(oldp+303,((7U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))),3);
        tracep->fullCData(oldp+304,((3U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                   >> 1U)))),2);
        tracep->fullBit(oldp+305,((1U & (IData)((vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                 >> 2U)))));
        tracep->fullQData(oldp+306,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_pc_o),64);
        tracep->fullIData(oldp+308,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o),32);
        tracep->fullQData(oldp+309,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__pc_data1),64);
        tracep->fullBit(oldp+311,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_exyn));
        tracep->fullBit(oldp+312,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__teap_yn));
        tracep->fullQData(oldp+313,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__trap_code),64);
        tracep->fullQData(oldp+315,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[0]),64);
        tracep->fullQData(oldp+317,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[1]),64);
        tracep->fullQData(oldp+319,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[2]),64);
        tracep->fullQData(oldp+321,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[3]),64);
        tracep->fullQData(oldp+323,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[4]),64);
        tracep->fullQData(oldp+325,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[5]),64);
        tracep->fullQData(oldp+327,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[6]),64);
        tracep->fullQData(oldp+329,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[7]),64);
        tracep->fullQData(oldp+331,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[8]),64);
        tracep->fullQData(oldp+333,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[9]),64);
        tracep->fullQData(oldp+335,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[10]),64);
        tracep->fullQData(oldp+337,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[11]),64);
        tracep->fullQData(oldp+339,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[12]),64);
        tracep->fullQData(oldp+341,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[13]),64);
        tracep->fullQData(oldp+343,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[14]),64);
        tracep->fullQData(oldp+345,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[15]),64);
        tracep->fullQData(oldp+347,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[16]),64);
        tracep->fullQData(oldp+349,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[17]),64);
        tracep->fullQData(oldp+351,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[18]),64);
        tracep->fullQData(oldp+353,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[19]),64);
        tracep->fullQData(oldp+355,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[20]),64);
        tracep->fullQData(oldp+357,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[21]),64);
        tracep->fullQData(oldp+359,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[22]),64);
        tracep->fullQData(oldp+361,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[23]),64);
        tracep->fullQData(oldp+363,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[24]),64);
        tracep->fullQData(oldp+365,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[25]),64);
        tracep->fullQData(oldp+367,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[26]),64);
        tracep->fullQData(oldp+369,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[27]),64);
        tracep->fullQData(oldp+371,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[28]),64);
        tracep->fullQData(oldp+373,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[29]),64);
        tracep->fullQData(oldp+375,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[30]),64);
        tracep->fullQData(oldp+377,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[31]),64);
        tracep->fullIData(oldp+379,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__i),32);
        tracep->fullQData(oldp+380,(vlSelf->SocTop__DOT__i_cache12__DOT__addr_lock_reg),64);
        tracep->fullIData(oldp+382,(vlSelf->SocTop__DOT__i_cache12__DOT__u_data01__DOT__out_data),32);
        tracep->fullIData(oldp+383,(vlSelf->SocTop__DOT__i_cache12__DOT__u_data02__DOT__out_data),32);
        tracep->fullIData(oldp+384,(vlSelf->SocTop__DOT__i_cache12__DOT__i),32);
        tracep->fullIData(oldp+385,(vlSelf->SocTop__DOT__d_cache13__DOT__i),32);
        tracep->fullQData(oldp+386,(vlSelf->SocTop__DOT__d_cache13__DOT__u_data0__DOT__out_data),64);
        tracep->fullQData(oldp+388,(vlSelf->SocTop__DOT__d_cache13__DOT__u_data1__DOT__out_data),64);
        tracep->fullBit(oldp+390,(((IData)(vlSelf->SocTop__DOT__t_axi_w_valid) 
                                   & (IData)(vlSelf->SocTop__DOT__t_axi_w_ready))));
        tracep->fullBit(oldp+391,(vlSelf->SocTop__DOT__arbitrate4__DOT__b_shankhand));
        tracep->fullBit(oldp+392,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__b_shankhand) 
                                   & (0U == (IData)(vlSelf->SocTop__DOT__t_axi_b_resp)))));
        tracep->fullCData(oldp+393,(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state),2);
        tracep->fullCData(oldp+394,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_state),2);
        tracep->fullCData(oldp+395,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_state),2);
        tracep->fullBit(oldp+396,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_okreg));
        tracep->fullBit(oldp+397,((((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                    >> 2U) & (IData)(vlSelf->SocTop__DOT__soc_axi_aw_ready))));
        tracep->fullBit(oldp+398,((((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                    >> 2U) & (IData)(vlSelf->SocTop__DOT__soc_axi_w_ready))));
        tracep->fullBit(oldp+399,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state)) 
                                   & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                      >> 2U))));
        tracep->fullCData(oldp+400,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state),2);
        tracep->fullCData(oldp+401,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state_nxt),2);
        tracep->fullBit(oldp+402,((((((IData)(vlSelf->SocTop__DOT__soc_axi_ar_ready) 
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
        tracep->fullBit(oldp+403,((((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                    >> 2U) & (2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)))));
        tracep->fullCData(oldp+404,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state),2);
        tracep->fullCData(oldp+405,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state_nxt),2);
        tracep->fullQData(oldp+406,(vlSelf->SocTop__DOT__axi_mnq4__DOT__read_addr_reg),64);
        tracep->fullQData(oldp+408,(vlSelf->SocTop__DOT__axi_mnq4__DOT__write_data_reg),64);
        tracep->fullQData(oldp+410,(vlSelf->SocTop__DOT__axi_mnq4__DOT__write_addr_reg),64);
        tracep->fullBit(oldp+412,(vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_l_w_ena));
        tracep->fullBit(oldp+413,(vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h_w_ena));
        tracep->fullBit(oldp+414,(vlSelf->SocTop__DOT__time_axi6__DOT__aw_shakehand));
        tracep->fullBit(oldp+415,(vlSelf->SocTop__DOT__time_axi6__DOT__w_shakehand));
        tracep->fullBit(oldp+416,(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right));
        tracep->fullCData(oldp+417,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m),2);
        tracep->fullBit(oldp+418,((IData)(((((((0U 
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
        tracep->fullBit(oldp+419,(vlSelf->SocTop__DOT__time_axi6__DOT__ar_shakehand));
        tracep->fullCData(oldp+420,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r),2);
        tracep->fullCData(oldp+421,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r_nxt),2);
        tracep->fullCData(oldp+422,(((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m_nxt))
                                      ? (0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_id) 
                                                 >> 4U))
                                      : 0U)),4);
        tracep->fullBit(oldp+423,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__if_stall_req))));
        tracep->fullQData(oldp+424,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr)
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
        tracep->fullBit(oldp+426,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+427,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x2000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+428,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x3000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+429,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x4000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+430,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+431,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+432,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x1000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+433,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x5000U 
                                                    == 
                                                    (0x40007000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+434,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+435,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x1000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+436,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x4000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+437,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x5000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+438,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+439,((1U & (IData)(((4U 
                                                  == 
                                                  (4U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+440,((1U & (IData)(((0x80U 
                                                  == 
                                                  (0x80U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+441,((1U & (IData)(((0x80U 
                                                  == 
                                                  (0x80U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
        tracep->fullBit(oldp+442,(((IData)(((0x80U 
                                             == (0x80U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                            & (0U == 
                                               (0x7000U 
                                                & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                   & (0U == (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                             >> 0x14U)))));
        tracep->fullBit(oldp+443,(((IData)(((0x80U 
                                             == (0x80U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                            & (0U == 
                                               (0x7000U 
                                                & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                   & (0x18U == (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+444,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr) 
                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena))));
        tracep->fullBit(oldp+445,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr) 
                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena))));
        tracep->fullBit(oldp+446,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))));
        tracep->fullQData(oldp+447,(((((- (QData)((IData)(
                                                          (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                           >> 0x1fU)))) 
                                       << 0xcU) | (QData)((IData)(
                                                                  (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                                   >> 0x14U)))) 
                                     + vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op)),64);
        tracep->fullBit(oldp+449,((1U & (((~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1)) 
                                          & (~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1))) 
                                         & (~ (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                                == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                               & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena)))))));
        tracep->fullQData(oldp+450,(((2U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type))
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
        tracep->fullBit(oldp+452,(((IData)(vlSelf->SocTop__DOT__t_axi_aw_valid) 
                                   & (IData)(vlSelf->SocTop__DOT__t_axi_aw_ready))));
        tracep->fullBit(oldp+453,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_valid) 
                                   & (IData)(vlSelf->SocTop__DOT__t_axi_ar_ready))));
        tracep->fullBit(oldp+454,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid) 
                                   & (IData)(vlSelf->SocTop__DOT__t_axi_ar_ready))));
        tracep->fullCData(oldp+455,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m_nxt),2);
        tracep->fullQData(oldp+456,(((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_l_w_ena)
                                      ? vlSelf->SocTop__DOT__time_axi6__DOT__car_mtime_l
                                      : ((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h_w_ena)
                                          ? vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h
                                          : 0ULL))),64);
        tracep->fullBit(oldp+458,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_hit_ok));
        tracep->fullBit(oldp+459,(vlSelf->SocTop__DOT__i_cache12__DOT__write_i_ok));
        tracep->fullBit(oldp+460,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_in_cache1));
        tracep->fullBit(oldp+461,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_in_cache2));
        tracep->fullBit(oldp+462,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_write_cache));
        tracep->fullBit(oldp+463,(vlSelf->SocTop__DOT__d_cache13__DOT__write_ok));
        tracep->fullBit(oldp+464,(vlSelf->SocTop__DOT__d_cache13__DOT__write_incache));
        tracep->fullBit(oldp+465,(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena1));
        tracep->fullBit(oldp+466,(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena2));
        tracep->fullBit(oldp+467,(vlSelf->SocTop__DOT__d_cache13__DOT__write_l_ok));
        tracep->fullBit(oldp+468,(vlSelf->SocTop__DOT__d_cache13__DOT__load_in_cache1));
        tracep->fullBit(oldp+469,(vlSelf->SocTop__DOT__d_cache13__DOT__load_in_cache2));
        tracep->fullBit(oldp+470,(vlSelf->SocTop__DOT__d_cache13__DOT__read_cache));
        tracep->fullQData(oldp+471,(vlSelf->SocTop__DOT__rvcpu_data_addr),64);
        tracep->fullCData(oldp+473,(vlSelf->SocTop__DOT__rvcpu_wmask),8);
        tracep->fullQData(oldp+474,(vlSelf->SocTop__DOT__rvcpu_data_o),64);
        tracep->fullBit(oldp+476,(vlSelf->SocTop__DOT__rvcpu_we));
        tracep->fullBit(oldp+477,(vlSelf->SocTop__DOT__rvcpu_re));
        tracep->fullIData(oldp+478,(vlSelf->SocTop__DOT__i_cache_inst_data),32);
        tracep->fullBit(oldp+479,((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_ti_sign)))));
        tracep->fullBit(oldp+480,(vlSelf->SocTop__DOT__i_cache_read_ena));
        tracep->fullBit(oldp+481,((1U & (~ ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl) 
                                            >> 1U)))));
        tracep->fullQData(oldp+482,(vlSelf->SocTop__DOT__d_cache_data_out),64);
        tracep->fullBit(oldp+484,(vlSelf->SocTop__DOT__d_cache_read_ena));
        tracep->fullBit(oldp+485,(vlSelf->SocTop__DOT__arbitrate_ti_sign));
        tracep->fullBit(oldp+486,((vlSelf->SocTop__DOT__time_axi6__DOT__car_mtime_l 
                                   > vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h)));
        tracep->fullQData(oldp+487,(vlSelf->SocTop__DOT__t_axi_aw_addr),64);
        tracep->fullBit(oldp+489,(vlSelf->SocTop__DOT__t_axi_aw_valid));
        tracep->fullQData(oldp+490,(vlSelf->SocTop__DOT__t_axi_w_data),64);
        tracep->fullCData(oldp+492,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid)
                                      ? 1U : 0U)),4);
        tracep->fullQData(oldp+493,(vlSelf->SocTop__DOT__t_axi_ar_addr),64);
        tracep->fullBit(oldp+495,(vlSelf->SocTop__DOT__t_axi_ar_valid));
        tracep->fullSData(oldp+496,(vlSelf->SocTop__DOT__add_axi_b_id),12);
        tracep->fullCData(oldp+497,(vlSelf->SocTop__DOT__add_axi_b_valid),3);
        tracep->fullWData(oldp+498,(vlSelf->SocTop__DOT__add_axi_r_data),192);
        tracep->fullBit(oldp+504,(vlSelf->SocTop__DOT__tim_axi_b_valid));
        tracep->fullQData(oldp+505,(vlSelf->SocTop__DOT__tim_axi_r_data),64);
        tracep->fullCData(oldp+507,(vlSelf->SocTop__DOT__prot_chose_write),3);
        tracep->fullCData(oldp+508,(vlSelf->SocTop__DOT__prot_chose_read),3);
        tracep->fullCData(oldp+509,((0x1fU & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                              >> 0xfU))),5);
        tracep->fullBit(oldp+510,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_stall_req));
        tracep->fullQData(oldp+511,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_data),64);
        tracep->fullCData(oldp+513,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1),5);
        tracep->fullBit(oldp+514,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1));
        tracep->fullCData(oldp+515,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2),5);
        tracep->fullBit(oldp+516,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2));
        tracep->fullCData(oldp+517,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type),8);
        tracep->fullCData(oldp+518,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode),8);
        tracep->fullQData(oldp+519,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op),64);
        tracep->fullQData(oldp+521,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op2),64);
        tracep->fullBit(oldp+523,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_ena));
        tracep->fullCData(oldp+524,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_addr),5);
        tracep->fullQData(oldp+525,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_pc),64);
        tracep->fullSData(oldp+527,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_s_offset),12);
        tracep->fullCData(oldp+528,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_memsel),3);
        tracep->fullBit(oldp+529,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_pip_jalrena));
        tracep->fullBit(oldp+530,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_if_flush));
        tracep->fullCData(oldp+531,(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl),5);
        tracep->fullQData(oldp+532,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_id_data),64);
        tracep->fullQData(oldp+534,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_ex_mem_pc),64);
        tracep->fullQData(oldp+536,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_pc),64);
        tracep->fullIData(oldp+538,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_id_ex_inst),32);
        tracep->fullIData(oldp+539,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_ex_mem_inst),32);
        tracep->fullIData(oldp+540,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_inst),32);
        tracep->fullIData(oldp+541,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm),20);
        tracep->fullSData(oldp+542,((vlSelf->SocTop__DOT__i_cache_inst_data 
                                     >> 0x14U)),12);
        tracep->fullSData(oldp+543,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm),12);
        tracep->fullCData(oldp+544,((0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)),7);
        tracep->fullBit(oldp+545,((IData)((0x6fU == 
                                           (0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)))));
        tracep->fullBit(oldp+546,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr));
        tracep->fullBit(oldp+547,((IData)((0x63U == 
                                           (0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)))));
        tracep->fullQData(oldp+548,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__operand1),64);
        tracep->fullQData(oldp+550,(((IData)((0x6fU 
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
        tracep->fullQData(oldp+552,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc),64);
        tracep->fullBit(oldp+554,((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))));
        tracep->fullCData(oldp+555,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__rs1),5);
        tracep->fullBit(oldp+556,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui));
        tracep->fullBit(oldp+557,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc));
        tracep->fullBit(oldp+558,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal));
        tracep->fullBit(oldp+559,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr));
        tracep->fullBit(oldp+560,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jump));
        tracep->fullBit(oldp+561,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srai));
        tracep->fullBit(oldp+562,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addiw));
        tracep->fullBit(oldp+563,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slliw));
        tracep->fullBit(oldp+564,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srliw));
        tracep->fullBit(oldp+565,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraiw));
        tracep->fullBit(oldp+566,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_add));
        tracep->fullBit(oldp+567,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sub));
        tracep->fullBit(oldp+568,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sll));
        tracep->fullBit(oldp+569,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slt));
        tracep->fullBit(oldp+570,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sltu));
        tracep->fullBit(oldp+571,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_xor));
        tracep->fullBit(oldp+572,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srl));
        tracep->fullBit(oldp+573,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sra));
        tracep->fullBit(oldp+574,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_or));
        tracep->fullBit(oldp+575,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_and));
        tracep->fullBit(oldp+576,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addw));
        tracep->fullBit(oldp+577,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_subw));
        tracep->fullBit(oldp+578,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sllw));
        tracep->fullBit(oldp+579,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srlw));
        tracep->fullBit(oldp+580,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraw));
        tracep->fullBit(oldp+581,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw));
        tracep->fullBit(oldp+582,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs));
        tracep->fullBit(oldp+583,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc));
        tracep->fullBit(oldp+584,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrwi));
        tracep->fullBit(oldp+585,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw) 
                                    | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs)) 
                                   | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc))));
        tracep->fullBit(oldp+586,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak));
        tracep->fullBit(oldp+587,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1));
        tracep->fullBit(oldp+588,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1));
        tracep->fullBit(oldp+589,((1U & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl) 
                                         >> 3U))));
        tracep->fullQData(oldp+590,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__exe_res),64);
        tracep->fullCData(oldp+592,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_byte),8);
        tracep->fullSData(oldp+593,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte),16);
        tracep->fullIData(oldp+594,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word),32);
        tracep->fullQData(oldp+595,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_data),64);
        tracep->fullCData(oldp+597,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_mask),8);
        tracep->fullCData(oldp+598,(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst),6);
        tracep->fullBit(oldp+599,(vlSelf->SocTop__DOT__i_cache12__DOT__i_tag_ena1));
        tracep->fullBit(oldp+600,(vlSelf->SocTop__DOT__i_cache12__DOT__i_tag_ena2));
        tracep->fullCData(oldp+601,(vlSelf->SocTop__DOT__d_cache13__DOT__count_addr),6);
        tracep->fullBit(oldp+602,(vlSelf->SocTop__DOT__d_cache13__DOT__wirte_chose1));
        tracep->fullBit(oldp+603,(vlSelf->SocTop__DOT__d_cache13__DOT__wirte_chose2));
        tracep->fullCData(oldp+604,(vlSelf->SocTop__DOT__d_cache13__DOT__state_store),6);
        tracep->fullQData(oldp+605,((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                     >> 9U)),55);
        tracep->fullCData(oldp+607,(vlSelf->SocTop__DOT__d_cache13__DOT__state_load),6);
        tracep->fullCData(oldp+608,((0x3fU & (IData)(
                                                     (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                      >> 3U)))),6);
        tracep->fullQData(oldp+609,((0x80000000000000ULL 
                                     | (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                        >> 9U))),56);
        tracep->fullBit(oldp+611,(vlSelf->SocTop__DOT__d_cache13__DOT__tag_ena1));
        tracep->fullBit(oldp+612,(vlSelf->SocTop__DOT__d_cache13__DOT__tag_ena2));
        tracep->fullCData(oldp+613,((0x3fU & (IData)(
                                                     (vlSelf->SocTop__DOT__rvcpu_data_o 
                                                      >> 3U)))),6);
        tracep->fullQData(oldp+614,(vlSelf->SocTop__DOT__d_cache13__DOT__in_data1),64);
        tracep->fullCData(oldp+616,(vlSelf->SocTop__DOT__d_cache13__DOT__data_ena1),8);
        tracep->fullQData(oldp+617,(vlSelf->SocTop__DOT__d_cache13__DOT__in_data2),64);
        tracep->fullCData(oldp+619,(vlSelf->SocTop__DOT__d_cache13__DOT__data_ena2),8);
        tracep->fullCData(oldp+620,(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state_nex),2);
        tracep->fullBit(oldp+621,(((IData)(vlSelf->SocTop__DOT__i_cache_read_ena) 
                                   & (IData)(vlSelf->SocTop__DOT__d_cache_read_ena))));
        tracep->fullBit(oldp+622,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid));
        tracep->fullBit(oldp+623,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_valid));
        tracep->fullCData(oldp+624,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_state_nxt),2);
        tracep->fullCData(oldp+625,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_state_nxt),2);
        tracep->fullQData(oldp+626,(vlSelf->SocTop__DOT__time_axi6__DOT__car_mtime_l),64);
        tracep->fullQData(oldp+628,(vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h),64);
        tracep->fullQData(oldp+630,(vlSelf->SocTop__DOT__rvcpu_inst_addr),64);
        tracep->fullBit(oldp+632,(vlSelf->SocTop__DOT__arbitrate_d_ok));
        tracep->fullBit(oldp+633,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_okreg));
        tracep->fullCData(oldp+634,(vlSelf->SocTop__DOT__t_axi_r_id),4);
        tracep->fullCData(oldp+635,(vlSelf->SocTop__DOT__t_axi_r_resp),2);
        tracep->fullBit(oldp+636,(vlSelf->SocTop__DOT__t_axi_r_last));
        tracep->fullSData(oldp+637,(vlSelf->SocTop__DOT__add_axi_r_id),12);
        tracep->fullCData(oldp+638,(vlSelf->SocTop__DOT__add_axi_r_last),3);
        tracep->fullQData(oldp+639,((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                     >> 9U)),55);
        tracep->fullBit(oldp+641,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_chose1));
        tracep->fullBit(oldp+642,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_chose2));
        tracep->fullCData(oldp+643,((0x3fU & (IData)(
                                                     (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                                      >> 3U)))),6);
        tracep->fullQData(oldp+644,((0x80000000000000ULL 
                                     | (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                        >> 9U))),56);
        tracep->fullQData(oldp+646,(vlSelf->SocTop__DOT__i_cache12__DOT__u_tag01__DOT__out_data),55);
        tracep->fullBit(oldp+648,(vlSelf->SocTop__DOT__i_cache12__DOT__u_tag01__DOT__out_vaild));
        tracep->fullQData(oldp+649,(vlSelf->SocTop__DOT__i_cache12__DOT__u_tag02__DOT__out_data),55);
        tracep->fullBit(oldp+651,(vlSelf->SocTop__DOT__i_cache12__DOT__u_tag02__DOT__out_vaild));
        tracep->fullBit(oldp+652,(vlSelf->SocTop__DOT__d_cache13__DOT__wbck_ok));
        tracep->fullBit(oldp+653,(vlSelf->SocTop__DOT__d_cache13__DOT__load_bc_ok));
        tracep->fullQData(oldp+654,(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_data),55);
        tracep->fullBit(oldp+656,(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_vaild));
        tracep->fullQData(oldp+657,(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_data),55);
        tracep->fullBit(oldp+659,(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_vaild));
        tracep->fullBit(oldp+660,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_r_shankhand));
        tracep->fullBit(oldp+661,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_r_shankhand));
        tracep->fullBit(oldp+662,(vlSelf->clk));
        tracep->fullBit(oldp+663,(vlSelf->rst));
        tracep->fullBit(oldp+664,(vlSelf->out_read_ram_ena));
        tracep->fullBit(oldp+665,(vlSelf->out_read_inst_ena));
        tracep->fullQData(oldp+666,(vlSelf->out_addr_outp),64);
        tracep->fullIData(oldp+668,(vlSelf->in_inst_data_in),32);
        tracep->fullQData(oldp+669,(vlSelf->in_ram_data_in),64);
        tracep->fullBit(oldp+671,(vlSelf->out_write_ram_ena));
        tracep->fullQData(oldp+672,(vlSelf->out_write_ram_data),64);
        tracep->fullQData(oldp+674,(vlSelf->out_write_ram_addr),64);
        tracep->fullQData(oldp+676,(((IData)(vlSelf->SocTop__DOT__arbitrate_ti_sign)
                                      ? vlSelf->SocTop__DOT__i_cache12__DOT__addr_lock_reg
                                      : vlSelf->SocTop__DOT__rvcpu_inst_addr)),64);
        tracep->fullBit(oldp+678,((((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                    & (4U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load))) 
                                   | ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__read_cache) 
                                      | (((IData)(vlSelf->SocTop__DOT__rvcpu_we) 
                                          & (4U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store))) 
                                         | (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__write_incache))))));
        tracep->fullQData(oldp+679,((((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
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
        tracep->fullBit(oldp+681,((((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                    & (0x20U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load))) 
                                   | (vlSelf->SocTop__DOT__d_cache13__DOT__dirty1
                                      [vlSelf->SocTop__DOT__d_cache13__DOT__count_addr] 
                                      & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                         [vlSelf->SocTop__DOT__d_cache13__DOT__count_addr] 
                                         >= vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                         [vlSelf->SocTop__DOT__d_cache13__DOT__count_addr])))));
        tracep->fullQData(oldp+682,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                      ? ((0U == (0xfU 
                                                 & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                                    >> 8U)))
                                          ? vlSelf->in_ram_data_in
                                          : (QData)((IData)(vlSelf->in_inst_data_in)))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+684,(((1U & ((~ (IData)(vlSelf->rst)) 
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
        tracep->fullBit(oldp+686,(((IData)(vlSelf->rst)
                                    ? 0U : (1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)))));
        tracep->fullQData(oldp+687,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
                                                 ? 
                                                (0xfffffffffffffffeULL 
                                                 & vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc)
                                                 : vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc))),64);
        tracep->fullBit(oldp+689,(((IData)(vlSelf->rst)
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
        tracep->fullQData(oldp+690,((((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1))
                                      ? ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                           == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                          & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                          ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                          : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                         [vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1])
                                      : 0ULL)),64);
        tracep->fullQData(oldp+692,((((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2))
                                      ? ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                           == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                          & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                          ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                          : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                         [vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2])
                                      : 0ULL)),64);
        tracep->fullBit(oldp+694,(((~ (IData)(vlSelf->rst)) 
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
        tracep->fullBit(oldp+695,(((IData)(vlSelf->rst)
                                    ? 0U : (1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1) 
                                                   & (2U 
                                                      == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                  & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1) 
                                                     == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)))))));
        tracep->fullBit(oldp+696,(((IData)(vlSelf->rst)
                                    ? 0U : (1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2) 
                                                   & (2U 
                                                      == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                  & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2) 
                                                     == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)))))));
        tracep->fullQData(oldp+697,(((IData)(vlSelf->rst)
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
        tracep->fullQData(oldp+699,(((IData)(vlSelf->rst)
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
        tracep->fullQData(oldp+701,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((1U 
                                                 & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                            >> 2U)))
                                                 ? 
                                                ((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)) 
                                                 << 0x20U)
                                                 : (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data))))),64);
        tracep->fullCData(oldp+703,(((IData)(vlSelf->rst)
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
        tracep->fullCData(oldp+704,(((IData)(vlSelf->rst)
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
        tracep->fullCData(oldp+705,(((IData)(vlSelf->rst)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                             >> 2U)))
                                               ? 0xf0U
                                               : 0xfU))),8);
        tracep->fullBit(oldp+706,((1U & ((~ (IData)(vlSelf->rst)) 
                                         & (~ ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl) 
                                               >> 1U))))));
        tracep->fullIData(oldp+707,(((((0x10U == (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst)) 
                                       & (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_okreg)) 
                                      & (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__inst_chose1))
                                      ? vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_data_oupt
                                      : 0U)),32);
        tracep->fullIData(oldp+708,(((((0x10U == (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst)) 
                                       & (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_okreg)) 
                                      & (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__inst_chose2))
                                      ? vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_data_oupt
                                      : 0U)),32);
        tracep->fullBit(oldp+709,(vlSelf->SocTop__DOT__d_cache13__DOT__store_ok));
        tracep->fullBit(oldp+710,(vlSelf->SocTop__DOT__d_cache13__DOT__load_ok));
        tracep->fullBit(oldp+711,((vlSelf->SocTop__DOT__d_cache13__DOT__dirty1
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
        tracep->fullIData(oldp+712,(3U),32);
        tracep->fullCData(oldp+713,(0U),4);
        tracep->fullCData(oldp+714,(0U),8);
        tracep->fullCData(oldp+715,(3U),3);
        tracep->fullCData(oldp+716,(1U),2);
        tracep->fullCData(oldp+717,(2U),4);
        tracep->fullCData(oldp+718,(0U),3);
        tracep->fullBit(oldp+719,(1U));
        tracep->fullCData(oldp+720,(vlSelf->SocTop__DOT__add_axi_b_ready),3);
        tracep->fullCData(oldp+721,(0U),2);
        tracep->fullBit(oldp+722,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                         >> 2U))));
        tracep->fullBit(oldp+723,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                         >> 1U))));
        tracep->fullBit(oldp+724,(vlSelf->SocTop__DOT__tim_axi_r_valid));
        tracep->fullBit(oldp+725,(vlSelf->SocTop__DOT__io_axi_aw_ready));
        tracep->fullBit(oldp+726,(vlSelf->SocTop__DOT__io_axi_w_ready));
        tracep->fullCData(oldp+727,(vlSelf->SocTop__DOT__io_axi_b_id),4);
        tracep->fullCData(oldp+728,(vlSelf->SocTop__DOT__io_axi_b_resp),2);
        tracep->fullBit(oldp+729,(vlSelf->SocTop__DOT__io_axi_b_valid));
        tracep->fullBit(oldp+730,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_b_ready))));
        tracep->fullBit(oldp+731,(vlSelf->SocTop__DOT__io_axi_ar_ready));
        tracep->fullCData(oldp+732,(vlSelf->SocTop__DOT__io_axi_r_id),4);
        tracep->fullQData(oldp+733,(vlSelf->SocTop__DOT__io_axi_r_data),64);
        tracep->fullCData(oldp+735,(vlSelf->SocTop__DOT__io_axi_r_resp),2);
        tracep->fullBit(oldp+736,(vlSelf->SocTop__DOT__io_axi_r_last));
        tracep->fullBit(oldp+737,(vlSelf->SocTop__DOT__io_axi_r_valid));
        tracep->fullCData(oldp+738,(0xffU),8);
        tracep->fullQData(oldp+739,(vlSelf->SocTop__DOT__i_cache12__DOT__out_addr),64);
        tracep->fullBit(oldp+741,(vlSelf->SocTop__DOT__i_cache12__DOT__out_ena));
        tracep->fullBit(oldp+742,(0U));
        tracep->fullBit(oldp+743,(vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_l_r_ena));
        tracep->fullBit(oldp+744,(vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtine_h_r_ena));
    }
}
