// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22040228__Syms.h"


void Vysyx_22040228___024root__traceChgSub0(Vysyx_22040228___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_22040228___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22040228___024root* const __restrict vlSelf = static_cast<Vysyx_22040228___024root*>(voidSelf);
    Vysyx_22040228__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vysyx_22040228___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

extern const VlWide<8>/*255:0*/ Vysyx_22040228__ConstPool__CONST_9e67c271_0;

void Vysyx_22040228___024root__traceChgSub0(Vysyx_22040228___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040228__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<8>/*255:0*/ __Vtemp427;
    VlWide<4>/*127:0*/ __Vtemp430;
    VlWide<4>/*127:0*/ __Vtemp433;
    VlWide<4>/*127:0*/ __Vtemp440;
    VlWide<4>/*127:0*/ __Vtemp445;
    VlWide<4>/*127:0*/ __Vtemp452;
    VlWide<4>/*127:0*/ __Vtemp457;
    VlWide<4>/*127:0*/ __Vtemp465;
    VlWide<4>/*127:0*/ __Vtemp473;
    VlWide<4>/*127:0*/ __Vtemp474;
    VlWide<4>/*127:0*/ __Vtemp483;
    VlWide<4>/*127:0*/ __Vtemp484;
    VlWide<4>/*127:0*/ __Vtemp500;
    VlWide<4>/*127:0*/ __Vtemp507;
    VlWide<4>/*127:0*/ __Vtemp508;
    VlWide<4>/*127:0*/ __Vtemp525;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr),64);
            tracep->chgBit(oldp+2,((0xa8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))));
            tracep->chgCData(oldp+3,(vlSelf->ysyx_22040228__DOT__rvcpu_inst_counter),3);
            tracep->chgBit(oldp+4,(vlSelf->ysyx_22040228__DOT__rvcpu_empty));
            tracep->chgQData(oldp+5,(vlSelf->ysyx_22040228__DOT__uncache_arb_data_o),64);
            tracep->chgBit(oldp+7,(vlSelf->ysyx_22040228__DOT__uncache_arb_finish));
            tracep->chgWData(oldp+8,(vlSelf->ysyx_22040228__DOT__i_cache_inst_data),128);
            tracep->chgBit(oldp+12,(vlSelf->ysyx_22040228__DOT__i_cache_inst_valid));
            tracep->chgBit(oldp+13,(((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))
                                      ? (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cahce_miss_ena)
                                      : ((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                         & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cache_mism_ena)))));
            tracep->chgQData(oldp+14,(vlSelf->ysyx_22040228__DOT__i_cache_addr),64);
            tracep->chgBit(oldp+16,(((4U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                     & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_readyout_))));
            if ((4U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))) {
                __Vtemp427[0U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[0U];
                __Vtemp427[1U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[1U];
                __Vtemp427[2U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[2U];
                __Vtemp427[3U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[3U];
                __Vtemp427[4U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[4U];
                __Vtemp427[5U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[5U];
                __Vtemp427[6U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[6U];
                __Vtemp427[7U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_[7U];
            } else {
                __Vtemp427[0U] = Vysyx_22040228__ConstPool__CONST_9e67c271_0[0U];
                __Vtemp427[1U] = Vysyx_22040228__ConstPool__CONST_9e67c271_0[1U];
                __Vtemp427[2U] = Vysyx_22040228__ConstPool__CONST_9e67c271_0[2U];
                __Vtemp427[3U] = Vysyx_22040228__ConstPool__CONST_9e67c271_0[3U];
                __Vtemp427[4U] = Vysyx_22040228__ConstPool__CONST_9e67c271_0[4U];
                __Vtemp427[5U] = Vysyx_22040228__ConstPool__CONST_9e67c271_0[5U];
                __Vtemp427[6U] = Vysyx_22040228__ConstPool__CONST_9e67c271_0[6U];
                __Vtemp427[7U] = Vysyx_22040228__ConstPool__CONST_9e67c271_0[7U];
            }
            tracep->chgWData(oldp+17,(__Vtemp427),256);
            tracep->chgQData(oldp+25,(vlSelf->ysyx_22040228__DOT__arbitrate_d_data),64);
            tracep->chgBit(oldp+27,(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok));
            tracep->chgQData(oldp+28,(vlSelf->ysyx_22040228__DOT__arbitrate_i_data),64);
            tracep->chgBit(oldp+30,(vlSelf->ysyx_22040228__DOT__arbitrate_i_ok));
            tracep->chgBit(oldp+31,(vlSelf->ysyx_22040228__DOT__time_init_sign));
            tracep->chgCData(oldp+32,(vlSelf->ysyx_22040228__DOT__t_axi_aw_id),4);
            tracep->chgCData(oldp+33,(vlSelf->ysyx_22040228__DOT__t_axi_aw_size),3);
            tracep->chgBit(oldp+34,(vlSelf->ysyx_22040228__DOT__t_axi_aw_valid));
            tracep->chgBit(oldp+35,(vlSelf->ysyx_22040228__DOT__t_axi_w_valid));
            tracep->chgCData(oldp+36,(vlSelf->ysyx_22040228__DOT__t_axi_ar_id),4);
            tracep->chgCData(oldp+37,(vlSelf->ysyx_22040228__DOT__t_axi_ar_size),3);
            tracep->chgBit(oldp+38,(vlSelf->ysyx_22040228__DOT__t_axi_ar_valid));
            tracep->chgCData(oldp+39,(vlSelf->ysyx_22040228__DOT__add_axi_b_valid),3);
            tracep->chgCData(oldp+40,(vlSelf->ysyx_22040228__DOT__add_axi_ar_ready),3);
            tracep->chgCData(oldp+41,(vlSelf->ysyx_22040228__DOT__add_axi_r_last),3);
            tracep->chgCData(oldp+42,(vlSelf->ysyx_22040228__DOT__add_axi_r_valid),3);
            tracep->chgBit(oldp+43,((2U == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_write_state))));
            tracep->chgBit(oldp+44,(vlSelf->ysyx_22040228__DOT__soc_axi_ar_ready));
            tracep->chgCData(oldp+45,(((2U == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state))
                                        ? (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__r_s_axi_ar_id)
                                        : 0U)),4);
            tracep->chgBit(oldp+46,((2U == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state))));
            tracep->chgBit(oldp+47,((2U == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state))));
            tracep->chgCData(oldp+48,(((2U == (IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__timew_state))
                                        ? (IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__timeraw_id_temp)
                                        : 0U)),4);
            tracep->chgBit(oldp+49,((2U == (IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__timew_state))));
            tracep->chgCData(oldp+50,(((3U == (IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__timer_state))
                                        ? (IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__timerar_id_temp)
                                        : 0U)),4);
            tracep->chgQData(oldp+51,(((3U == (IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__timer_state))
                                        ? vlSelf->ysyx_22040228__DOT__clint6__DOT__read_csrdata_temp
                                        : 0ULL)),64);
            tracep->chgBit(oldp+53,((3U == (IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__timer_state))));
            tracep->chgBit(oldp+54,((2U == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_write_state))));
            tracep->chgBit(oldp+55,(vlSelf->ysyx_22040228__DOT__io_axi_ar_ready));
            tracep->chgBit(oldp+56,((2U == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state))));
            tracep->chgBit(oldp+57,((2U == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state))));
            tracep->chgQData(oldp+58,(((2U == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_write_state))
                                        ? vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__write_addr_reg
                                        : 0ULL)),64);
            tracep->chgQData(oldp+60,(((2U == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_write_state))
                                        ? vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__write_data_reg
                                        : 0ULL)),64);
            tracep->chgCData(oldp+62,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr),4);
            tracep->chgBit(oldp+63,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1));
            tracep->chgCData(oldp+64,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_regsf_addr),5);
            tracep->chgBit(oldp+65,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_regsf_ena));
            tracep->chgBit(oldp+66,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jread1));
            tracep->chgBit(oldp+67,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jread2));
            tracep->chgQData(oldp+68,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_pc),64);
            tracep->chgIData(oldp+70,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst),32);
            tracep->chgQData(oldp+71,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_pc),64);
            tracep->chgIData(oldp+73,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst),32);
            tracep->chgCData(oldp+74,((0xfU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                               >> 2U))),4);
            tracep->chgCData(oldp+75,((0xfU & (IData)(
                                                      (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_pc 
                                                       >> 2U)))),4);
            tracep->chgCData(oldp+76,((0xfU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                               >> 2U))),4);
            tracep->chgCData(oldp+77,((0xfU & (IData)(
                                                      (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_pc 
                                                       >> 2U)))),4);
            tracep->chgBit(oldp+78,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_timer_init));
            tracep->chgQData(oldp+79,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_pc),64);
            tracep->chgIData(oldp+81,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst),32);
            tracep->chgCData(oldp+82,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_type),8);
            tracep->chgCData(oldp+83,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode),8);
            tracep->chgQData(oldp+84,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data),64);
            tracep->chgQData(oldp+86,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data),64);
            tracep->chgBit(oldp+88,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_rd_ena));
            tracep->chgCData(oldp+89,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_rd_addr),5);
            tracep->chgQData(oldp+90,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_pc),64);
            tracep->chgIData(oldp+92,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst),32);
            tracep->chgCData(oldp+93,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_type),8);
            tracep->chgCData(oldp+94,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode),8);
            tracep->chgQData(oldp+95,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data),64);
            tracep->chgQData(oldp+97,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data),64);
            tracep->chgBit(oldp+99,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_rd_ena));
            tracep->chgCData(oldp+100,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_rd_addr),5);
            tracep->chgQData(oldp+101,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_pc),64);
            tracep->chgIData(oldp+103,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_inst),32);
            tracep->chgCData(oldp+104,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_inst_type),8);
            tracep->chgQData(oldp+105,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data),64);
            tracep->chgBit(oldp+107,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_rd_ena));
            tracep->chgCData(oldp+108,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_rd_addr),5);
            tracep->chgQData(oldp+109,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset),64);
            tracep->chgCData(oldp+111,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel),3);
            tracep->chgBit(oldp+112,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_ena));
            tracep->chgBit(oldp+113,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_div_req));
            tracep->chgQData(oldp+114,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_pc_pc),64);
            tracep->chgBit(oldp+116,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__trap_ena));
            tracep->chgBit(oldp+117,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_div_req));
            tracep->chgQData(oldp+118,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_dara),64);
            tracep->chgCData(oldp+120,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_addr),5);
            tracep->chgBit(oldp+121,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_ena));
            tracep->chgQData(oldp+122,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_dara),64);
            tracep->chgCData(oldp+124,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_addr),5);
            tracep->chgBit(oldp+125,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_ena));
            tracep->chgQData(oldp+126,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_dara),64);
            tracep->chgCData(oldp+128,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_addr),5);
            tracep->chgBit(oldp+129,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_ena));
            tracep->chgIData(oldp+130,(vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U]),32);
            tracep->chgIData(oldp+131,(vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U]),32);
            tracep->chgIData(oldp+132,(vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U]),32);
            tracep->chgIData(oldp+133,(vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U]),32);
            tracep->chgIData(oldp+134,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm1),20);
            tracep->chgSData(oldp+135,((vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U] 
                                        >> 0x14U)),12);
            tracep->chgSData(oldp+136,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm1),12);
            tracep->chgIData(oldp+137,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm2),20);
            tracep->chgSData(oldp+138,((vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U] 
                                        >> 0x14U)),12);
            tracep->chgSData(oldp+139,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm2),12);
            tracep->chgIData(oldp+140,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm3),20);
            tracep->chgSData(oldp+141,((vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] 
                                        >> 0x14U)),12);
            tracep->chgSData(oldp+142,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm3),12);
            tracep->chgIData(oldp+143,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm4),20);
            tracep->chgSData(oldp+144,((vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] 
                                        >> 0x14U)),12);
            tracep->chgSData(oldp+145,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm4),12);
            tracep->chgCData(oldp+146,((0x7fU & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U])),7);
            tracep->chgCData(oldp+147,((0x7fU & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U])),7);
            tracep->chgCData(oldp+148,((0x7fU & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U])),7);
            tracep->chgCData(oldp+149,((0x7fU & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U])),7);
            tracep->chgBit(oldp+150,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal1));
            tracep->chgBit(oldp+151,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr1));
            tracep->chgBit(oldp+152,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx1));
            tracep->chgBit(oldp+153,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal2));
            tracep->chgBit(oldp+154,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr2));
            tracep->chgBit(oldp+155,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx2));
            tracep->chgBit(oldp+156,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal3));
            tracep->chgBit(oldp+157,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr3));
            tracep->chgBit(oldp+158,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx3));
            tracep->chgBit(oldp+159,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal4));
            tracep->chgBit(oldp+160,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr4));
            tracep->chgBit(oldp+161,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx4));
            tracep->chgQData(oldp+162,((4ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)),64);
            tracep->chgQData(oldp+164,((8ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)),64);
            tracep->chgQData(oldp+166,((0xcULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)),64);
            tracep->chgBit(oldp+168,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena1));
            tracep->chgBit(oldp+169,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena2));
            tracep->chgBit(oldp+170,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena3));
            tracep->chgBit(oldp+171,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena4));
            tracep->chgCData(oldp+172,(((0U == (0xfU 
                                                & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)))
                                         ? 0x10U : 
                                        ((4U == (0xfU 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)))
                                          ? 0xcU : 
                                         ((8U == (0xfU 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)))
                                           ? 8U : (
                                                   (0xcU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)))
                                                    ? 4U
                                                    : 0U))))),5);
            tracep->chgBit(oldp+173,((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__i_cache_inst_valid)))));
            tracep->chgQData(oldp+174,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_temp),64);
            tracep->chgBit(oldp+176,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_temp_ena));
            tracep->chgCData(oldp+177,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[0]),4);
            tracep->chgCData(oldp+178,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[1]),4);
            tracep->chgCData(oldp+179,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[2]),4);
            tracep->chgCData(oldp+180,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[3]),4);
            tracep->chgCData(oldp+181,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[4]),4);
            tracep->chgCData(oldp+182,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[5]),4);
            tracep->chgCData(oldp+183,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[6]),4);
            tracep->chgCData(oldp+184,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[7]),4);
            tracep->chgCData(oldp+185,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[8]),4);
            tracep->chgCData(oldp+186,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[9]),4);
            tracep->chgCData(oldp+187,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[10]),4);
            tracep->chgCData(oldp+188,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[11]),4);
            tracep->chgCData(oldp+189,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[12]),4);
            tracep->chgCData(oldp+190,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[13]),4);
            tracep->chgCData(oldp+191,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[14]),4);
            tracep->chgCData(oldp+192,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[15]),4);
            tracep->chgCData(oldp+193,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addo),3);
            tracep->chgCData(oldp+194,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadt),3);
            tracep->chgCData(oldp+195,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadw),3);
            tracep->chgWData(oldp+196,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc),256);
            tracep->chgWData(oldp+204,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst),128);
            tracep->chgWData(oldp+208,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc),256);
            tracep->chgWData(oldp+216,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst),128);
            tracep->chgBit(oldp+220,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__clean_temp));
            tracep->chgBit(oldp+221,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_clean));
            tracep->chgCData(oldp+222,((0x7fU & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)),7);
            tracep->chgCData(oldp+223,((0x1fU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+224,((7U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                              >> 0xcU))),3);
            tracep->chgSData(oldp+225,((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                        >> 0x14U)),12);
            tracep->chgCData(oldp+226,((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+227,((0x1fU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                 >> 0x14U))),5);
            tracep->chgIData(oldp+228,((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                        >> 0xcU)),20);
            tracep->chgSData(oldp+229,(((0xfe0U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                            >> 7U)))),12);
            tracep->chgSData(oldp+230,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__b_imm),12);
            tracep->chgBit(oldp+231,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_fence_i));
            tracep->chgCData(oldp+232,((0x7fU & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)),7);
            tracep->chgCData(oldp+233,((0x1fU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+234,((7U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                              >> 0xcU))),3);
            tracep->chgSData(oldp+235,((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                        >> 0x14U)),12);
            tracep->chgCData(oldp+236,((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+237,((0x1fU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                 >> 0x14U))),5);
            tracep->chgIData(oldp+238,((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                        >> 0xcU)),20);
            tracep->chgSData(oldp+239,(((0xfe0U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                            >> 7U)))),12);
            tracep->chgSData(oldp+240,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__b_imm),12);
            tracep->chgBit(oldp+241,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_fence_i));
            tracep->chgCData(oldp+242,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__reg_exe_name[0]),5);
            tracep->chgCData(oldp+243,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__reg_exe_name[1]),5);
            tracep->chgCData(oldp+244,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__reg_exe_name[2]),5);
            tracep->chgQData(oldp+245,((1ULL + (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data))),64);
            tracep->chgQData(oldp+247,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_sub_op2),64);
            tracep->chgQData(oldp+249,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_add_op2),64);
            tracep->chgQData(oldp+251,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_addw_op2),64);
            tracep->chgBit(oldp+253,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_ls_op2));
            tracep->chgQData(oldp+254,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__shift_res),64);
            tracep->chgIData(oldp+256,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_sllw_op2),32);
            tracep->chgQData(oldp+257,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__sllw_res),64);
            tracep->chgIData(oldp+259,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_srlw_op2),32);
            tracep->chgQData(oldp+260,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__srlw_res),64);
            tracep->chgIData(oldp+262,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_sraw_op2),32);
            tracep->chgQData(oldp+263,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__sraw_res),64);
            tracep->chgIData(oldp+265,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_subw_op2),32);
            tracep->chgQData(oldp+266,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_subw_op2 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_subw_op2)))),64);
            tracep->chgQData(oldp+268,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__upper_imm),64);
            tracep->chgQData(oldp+270,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_data),64);
            tracep->chgBit(oldp+272,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_finish_sign));
            tracep->chgBit(oldp+273,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_ready));
            tracep->chgBit(oldp+274,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__finish));
            tracep->chgBit(oldp+275,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__dr_ready));
            tracep->chgQData(oldp+276,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_divdata),64);
            tracep->chgQData(oldp+278,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op2_divdata),64);
            tracep->chgBit(oldp+280,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena));
            tracep->chgSData(oldp+281,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx),12);
            tracep->chgQData(oldp+282,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__read_csr_data),64);
            tracep->chgBit(oldp+284,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena));
            tracep->chgBit(oldp+285,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__cmt_mret_ena));
            tracep->chgBit(oldp+286,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en));
            tracep->chgBit(oldp+287,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en));
            tracep->chgQData(oldp+288,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data),64);
            tracep->chgQData(oldp+290,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__trap_mcause_value),64);
            tracep->chgQData(oldp+292,((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__read_csr_data 
                                        | vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data)),64);
            tracep->chgQData(oldp+294,((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__read_csr_data 
                                        & (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data))),64);
            tracep->chgBit(oldp+296,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__mult_valid));
            tracep->chgBit(oldp+297,((1U & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                                                    >> 0x3fU)))));
            tracep->chgBit(oldp+298,((1U & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data 
                                                    >> 0x3fU)))));
            tracep->chgQData(oldp+299,(((1U & (IData)(
                                                      (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                                                       >> 0x3fU)))
                                         ? (1ULL + 
                                            (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data))
                                         : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data)),64);
            tracep->chgQData(oldp+301,(((1U & (IData)(
                                                      (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data 
                                                       >> 0x3fU)))
                                         ? (1ULL + 
                                            (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data))
                                         : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data)),64);
            tracep->chgWData(oldp+303,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand),128);
            tracep->chgQData(oldp+307,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multipler),64);
            if ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multipler))) {
                __Vtemp430[0U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[0U];
                __Vtemp430[1U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[1U];
                __Vtemp430[2U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[2U];
                __Vtemp430[3U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[3U];
            } else {
                __Vtemp430[0U] = 0U;
                __Vtemp430[1U] = 0U;
                __Vtemp430[2U] = 0U;
                __Vtemp430[3U] = 0U;
            }
            tracep->chgWData(oldp+309,(__Vtemp430),128);
            tracep->chgWData(oldp+313,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp),128);
            tracep->chgBit(oldp+317,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_signbit));
            tracep->chgCData(oldp+318,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__counter),7);
            tracep->chgBit(oldp+319,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__sign));
            tracep->chgQData(oldp+320,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__dividend_t),64);
            tracep->chgQData(oldp+322,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__divider_t),64);
            tracep->chgWData(oldp+324,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a),129);
            tracep->chgWData(oldp+329,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_b),65);
            tracep->chgBit(oldp+332,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__sigin_inst));
            tracep->chgBit(oldp+333,((0xb00U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx))));
            tracep->chgBit(oldp+334,(((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en) 
                                      & (0xb00U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)))));
            tracep->chgBit(oldp+335,(((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en) 
                                      & (0xb00U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)))));
            tracep->chgQData(oldp+336,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mcycle),64);
            tracep->chgBit(oldp+338,((0x300U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx))));
            tracep->chgBit(oldp+339,(((0x300U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en))));
            tracep->chgBit(oldp+340,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mstatus));
            tracep->chgBit(oldp+341,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__mstatus_mpie_ena));
            tracep->chgBit(oldp+342,((1U & (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena) 
                                             | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena))
                                             ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mie)
                                             : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__cmt_mret_ena) 
                                                | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mstatus)
                                                    ? (IData)(
                                                              (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data 
                                                               >> 7U))
                                                    : (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mpie)))))));
            tracep->chgBit(oldp+343,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mpie));
            tracep->chgBit(oldp+344,((1U & ((~ ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena) 
                                                | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena))) 
                                            & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__cmt_mret_ena)
                                                ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mpie)
                                                : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mstatus)
                                                    ? (IData)(
                                                              (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data 
                                                               >> 3U))
                                                    : (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mie)))))));
            tracep->chgBit(oldp+345,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mie));
            tracep->chgCData(oldp+346,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena) 
                                         | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena))
                                         ? 3U : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__cmt_mret_ena)
                                                  ? 0U
                                                  : 
                                                 (3U 
                                                  & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mstatus)
                                                      ? (IData)(
                                                                (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data 
                                                                 >> 0xbU))
                                                      : (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mpp)))))),2);
            tracep->chgCData(oldp+347,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mpp),2);
            tracep->chgCData(oldp+348,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_fs),2);
            tracep->chgBit(oldp+349,((3U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_fs))));
            tracep->chgQData(oldp+350,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus),64);
            tracep->chgBit(oldp+352,((0x305U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx))));
            tracep->chgBit(oldp+353,(((((0x305U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                        & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en)) 
                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena)) 
                                      | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena))));
            tracep->chgBit(oldp+354,(((0x305U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en))));
            tracep->chgQData(oldp+355,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mtvec_base),62);
            tracep->chgQData(oldp+357,((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mtvec_base 
                                        << 2U)),64);
            tracep->chgBit(oldp+359,((0x341U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx))));
            tracep->chgBit(oldp+360,((((0x341U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                       & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en)) 
                                      | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__cmt_mret_ena))));
            tracep->chgBit(oldp+361,(((((0x341U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                        & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en)) 
                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena)) 
                                      | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena))));
            tracep->chgQData(oldp+362,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mepc),64);
            tracep->chgBit(oldp+364,((0x342U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx))));
            tracep->chgBit(oldp+365,(((0x342U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en))));
            tracep->chgBit(oldp+366,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mcause));
            tracep->chgBit(oldp+367,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mcause) 
                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena)) 
                                      | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena))));
            tracep->chgQData(oldp+368,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena) 
                                         | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena))
                                         ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__trap_mcause_value
                                         : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mcause)
                                             ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data
                                             : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mcause))),64);
            tracep->chgQData(oldp+370,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mcause),64);
            tracep->chgBit(oldp+372,((0x304U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx))));
            tracep->chgBit(oldp+373,(((0x304U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en))));
            tracep->chgBit(oldp+374,(((0x304U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en))));
            tracep->chgBit(oldp+375,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mie_mtie));
            tracep->chgQData(oldp+376,(((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mie_mtie)) 
                                        << 7U)),64);
            tracep->chgBit(oldp+378,((0x344U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx))));
            tracep->chgBit(oldp+379,(((0x344U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en))));
            tracep->chgBit(oldp+380,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mip_mtip));
            tracep->chgQData(oldp+381,((QData)((IData)(
                                                       ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mip_mtip) 
                                                        << 7U)))),64);
            tracep->chgBit(oldp+383,((0x340U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx))));
            tracep->chgBit(oldp+384,(((0x340U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en))));
            tracep->chgBit(oldp+385,(((0x340U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en))));
            tracep->chgQData(oldp+386,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mscrstch),64);
            tracep->chgBit(oldp+388,((0xf11U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx))));
            tracep->chgBit(oldp+389,(((0xf11U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en))));
            tracep->chgQData(oldp+390,((1ULL + (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data))),64);
            tracep->chgQData(oldp+392,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_sub_op2),64);
            tracep->chgQData(oldp+394,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_add_op2),64);
            tracep->chgQData(oldp+396,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_addw_op2),64);
            tracep->chgBit(oldp+398,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_ls_op2));
            tracep->chgQData(oldp+399,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__shift_res),64);
            tracep->chgIData(oldp+401,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_sllw_op2),32);
            tracep->chgQData(oldp+402,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__sllw_res),64);
            tracep->chgIData(oldp+404,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_srlw_op2),32);
            tracep->chgQData(oldp+405,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__srlw_res),64);
            tracep->chgIData(oldp+407,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_sraw_op2),32);
            tracep->chgQData(oldp+408,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__sraw_res),64);
            tracep->chgIData(oldp+410,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_subw_op2),32);
            tracep->chgQData(oldp+411,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_subw_op2 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_subw_op2)))),64);
            tracep->chgQData(oldp+413,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__upper_imm),64);
            tracep->chgQData(oldp+415,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_data),64);
            tracep->chgBit(oldp+417,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_finish_sign));
            tracep->chgBit(oldp+418,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_ready));
            tracep->chgBit(oldp+419,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__finish));
            tracep->chgBit(oldp+420,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__dr_ready));
            tracep->chgQData(oldp+421,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_divdata),64);
            tracep->chgQData(oldp+423,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op2_divdata),64);
            tracep->chgBit(oldp+425,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__mult_valid));
            tracep->chgBit(oldp+426,((1U & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                                                    >> 0x3fU)))));
            tracep->chgBit(oldp+427,((1U & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data 
                                                    >> 0x3fU)))));
            tracep->chgQData(oldp+428,(((1U & (IData)(
                                                      (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                                                       >> 0x3fU)))
                                         ? (1ULL + 
                                            (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data))
                                         : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data)),64);
            tracep->chgQData(oldp+430,(((1U & (IData)(
                                                      (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data 
                                                       >> 0x3fU)))
                                         ? (1ULL + 
                                            (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data))
                                         : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data)),64);
            tracep->chgWData(oldp+432,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand),128);
            tracep->chgQData(oldp+436,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multipler),64);
            if ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multipler))) {
                __Vtemp433[0U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[0U];
                __Vtemp433[1U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[1U];
                __Vtemp433[2U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[2U];
                __Vtemp433[3U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[3U];
            } else {
                __Vtemp433[0U] = 0U;
                __Vtemp433[1U] = 0U;
                __Vtemp433[2U] = 0U;
                __Vtemp433[3U] = 0U;
            }
            tracep->chgWData(oldp+438,(__Vtemp433),128);
            tracep->chgWData(oldp+442,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp),128);
            tracep->chgBit(oldp+446,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_signbit));
            tracep->chgCData(oldp+447,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__counter),7);
            tracep->chgBit(oldp+448,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__sign));
            tracep->chgQData(oldp+449,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__dividend_t),64);
            tracep->chgQData(oldp+451,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__divider_t),64);
            tracep->chgWData(oldp+453,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a),129);
            tracep->chgWData(oldp+458,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_b),65);
            tracep->chgBit(oldp+461,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__sigin_inst));
            tracep->chgCData(oldp+462,((7U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset))),3);
            tracep->chgCData(oldp+463,((3U & (IData)(
                                                     (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                      >> 1U)))),2);
            tracep->chgBit(oldp+464,((1U & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                    >> 2U)))));
            tracep->chgQData(oldp+465,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[0]),64);
            tracep->chgQData(oldp+467,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[1]),64);
            tracep->chgQData(oldp+469,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[2]),64);
            tracep->chgQData(oldp+471,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[3]),64);
            tracep->chgQData(oldp+473,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[4]),64);
            tracep->chgQData(oldp+475,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[5]),64);
            tracep->chgQData(oldp+477,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[6]),64);
            tracep->chgQData(oldp+479,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[7]),64);
            tracep->chgQData(oldp+481,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[8]),64);
            tracep->chgQData(oldp+483,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[9]),64);
            tracep->chgQData(oldp+485,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[10]),64);
            tracep->chgQData(oldp+487,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[11]),64);
            tracep->chgQData(oldp+489,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[12]),64);
            tracep->chgQData(oldp+491,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[13]),64);
            tracep->chgQData(oldp+493,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[14]),64);
            tracep->chgQData(oldp+495,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[15]),64);
            tracep->chgQData(oldp+497,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[16]),64);
            tracep->chgQData(oldp+499,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[17]),64);
            tracep->chgQData(oldp+501,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[18]),64);
            tracep->chgQData(oldp+503,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[19]),64);
            tracep->chgQData(oldp+505,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[20]),64);
            tracep->chgQData(oldp+507,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[21]),64);
            tracep->chgQData(oldp+509,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[22]),64);
            tracep->chgQData(oldp+511,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[23]),64);
            tracep->chgQData(oldp+513,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[24]),64);
            tracep->chgQData(oldp+515,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[25]),64);
            tracep->chgQData(oldp+517,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[26]),64);
            tracep->chgQData(oldp+519,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[27]),64);
            tracep->chgQData(oldp+521,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[28]),64);
            tracep->chgQData(oldp+523,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[29]),64);
            tracep->chgQData(oldp+525,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[30]),64);
            tracep->chgQData(oldp+527,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[31]),64);
            tracep->chgIData(oldp+529,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__i),32);
            tracep->chgIData(oldp+530,((0x3fffffU & (IData)(
                                                            (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                             >> 0xaU)))),22);
            tracep->chgCData(oldp+531,((0x3fU & (IData)(
                                                        (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                         >> 4U)))),6);
            tracep->chgCData(oldp+532,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst),6);
            tracep->chgCData(oldp+533,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__fence_counter),7);
            tracep->chgBit(oldp+534,((0x20U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))));
            tracep->chgBit(oldp+535,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__read_ok));
            tracep->chgBit(oldp+536,(((4U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                      & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu_empty) 
                                         & (((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_data_r 
                                              == (0x3fffffU 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                             >> 0xaU)))) 
                                             & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r)) 
                                            | ((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_data_r 
                                                == 
                                                (0x3fffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                            >> 0xaU)))) 
                                               & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r)))))));
            tracep->chgWData(oldp+537,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_),256);
            tracep->chgWData(oldp+545,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_),128);
            tracep->chgBit(oldp+549,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_readyout_));
            tracep->chgBit(oldp+550,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__write_i_ok));
            tracep->chgBit(oldp+551,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cahce_miss_ena));
            tracep->chgQData(oldp+552,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cache_miss_addr),64);
            tracep->chgBit(oldp+554,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__write_m_ok));
            tracep->chgBit(oldp+555,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cache_mism_ena));
            tracep->chgQData(oldp+556,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cahce_mism_addr),64);
            tracep->chgCData(oldp+558,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl),2);
            tracep->chgCData(oldp+559,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl_n),2);
            tracep->chgWData(oldp+560,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date),128);
            tracep->chgBit(oldp+564,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o));
            tracep->chgBit(oldp+565,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t));
            tracep->chgCData(oldp+566,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh),3);
            tracep->chgCData(oldp+567,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh_n),3);
            tracep->chgWData(oldp+568,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data),128);
            tracep->chgBit(oldp+572,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o));
            tracep->chgBit(oldp+573,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t));
            tracep->chgBit(oldp+574,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__oteg_ena_i));
            tracep->chgBit(oldp+575,((0xa8U != (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))));
            tracep->chgIData(oldp+576,(((0xa8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                         ? 0U : (0x3fffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                            >> 0xaU))))),22);
            tracep->chgCData(oldp+577,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__oteg_addr_i),6);
            tracep->chgIData(oldp+578,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_data_r),22);
            tracep->chgBit(oldp+579,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r));
            tracep->chgBit(oldp+580,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__tteg_ena_i));
            tracep->chgCData(oldp+581,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__tteg_addr_i),6);
            tracep->chgIData(oldp+582,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_data_r),22);
            tracep->chgBit(oldp+583,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r));
            tracep->chgWData(oldp+584,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outo),128);
            if (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                 & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o))) {
                __Vtemp440[0U] = 0xffffffffU;
                __Vtemp440[1U] = 0xffffffffU;
                __Vtemp440[2U] = 0xffffffffU;
                __Vtemp440[3U] = 0xffffffffU;
            } else {
                __Vtemp440[0U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                   ? 0xffffffffU : 0U);
                __Vtemp440[1U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                   ? 0xffffffffU : 0U);
                __Vtemp440[2U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                   ? 0xffffffffU : 0U);
                __Vtemp440[3U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                   ? 0xffffffffU : 0U);
            }
            tracep->chgWData(oldp+588,(__Vtemp440),128);
            if (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                 & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o))) {
                __Vtemp445[0U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[0U];
                __Vtemp445[1U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[1U];
                __Vtemp445[2U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[2U];
                __Vtemp445[3U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[3U];
            } else {
                __Vtemp445[0U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                   ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[0U]
                                   : 0U);
                __Vtemp445[1U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                   ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[1U]
                                   : 0U);
                __Vtemp445[2U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                   ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[2U]
                                   : 0U);
                __Vtemp445[3U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                   ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[3U]
                                   : 0U);
            }
            tracep->chgWData(oldp+592,(__Vtemp445),128);
            tracep->chgBit(oldp+596,((((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                       & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o)) 
                                      | ((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                         & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o)))));
            tracep->chgWData(oldp+597,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outt),128);
            if (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                 & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t))) {
                __Vtemp452[0U] = 0xffffffffU;
                __Vtemp452[1U] = 0xffffffffU;
                __Vtemp452[2U] = 0xffffffffU;
                __Vtemp452[3U] = 0xffffffffU;
            } else {
                __Vtemp452[0U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                   ? 0xffffffffU : 0U);
                __Vtemp452[1U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                   ? 0xffffffffU : 0U);
                __Vtemp452[2U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                   ? 0xffffffffU : 0U);
                __Vtemp452[3U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                   ? 0xffffffffU : 0U);
            }
            tracep->chgWData(oldp+601,(__Vtemp452),128);
            if (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                 & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t))) {
                __Vtemp457[0U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[0U];
                __Vtemp457[1U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[1U];
                __Vtemp457[2U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[2U];
                __Vtemp457[3U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[3U];
            } else {
                __Vtemp457[0U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                   ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[0U]
                                   : 0U);
                __Vtemp457[1U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                   ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[1U]
                                   : 0U);
                __Vtemp457[2U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                   ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[2U]
                                   : 0U);
                __Vtemp457[3U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                   ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[3U]
                                   : 0U);
            }
            tracep->chgWData(oldp+605,(__Vtemp457),128);
            tracep->chgBit(oldp+609,((((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                       & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t)) 
                                      | ((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                         & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t)))));
            tracep->chgIData(oldp+610,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i),32);
            tracep->chgBit(oldp+611,((1U & (~ (((2U 
                                                 == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o)) 
                                               | ((8U 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o)))))));
            __Vtemp465[0U] = (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                  & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o))
                                  ? 0xffffffffU : (
                                                   ((8U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                                    ? 0xffffffffU
                                                    : 0U)));
            __Vtemp465[1U] = (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                  & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o))
                                  ? 0xffffffffU : (
                                                   ((8U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                                    ? 0xffffffffU
                                                    : 0U)));
            __Vtemp465[2U] = (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                  & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o))
                                  ? 0xffffffffU : (
                                                   ((8U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                                    ? 0xffffffffU
                                                    : 0U)));
            __Vtemp465[3U] = (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                  & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o))
                                  ? 0xffffffffU : (
                                                   ((8U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                                    ? 0xffffffffU
                                                    : 0U)));
            tracep->chgWData(oldp+612,(__Vtemp465),128);
            tracep->chgBit(oldp+616,((1U & (~ (((2U 
                                                 == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t)) 
                                               | ((8U 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t)))))));
            __Vtemp473[0U] = (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                  & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t))
                                  ? 0xffffffffU : (
                                                   ((8U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                                    ? 0xffffffffU
                                                    : 0U)));
            __Vtemp473[1U] = (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                  & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t))
                                  ? 0xffffffffU : (
                                                   ((8U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                                    ? 0xffffffffU
                                                    : 0U)));
            __Vtemp473[2U] = (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                  & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t))
                                  ? 0xffffffffU : (
                                                   ((8U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                                    ? 0xffffffffU
                                                    : 0U)));
            __Vtemp473[3U] = (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                  & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t))
                                  ? 0xffffffffU : (
                                                   ((8U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                                    ? 0xffffffffU
                                                    : 0U)));
            tracep->chgWData(oldp+617,(__Vtemp473),128);
            tracep->chgCData(oldp+621,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter),7);
            tracep->chgBit(oldp+622,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_valid_req));
            tracep->chgBit(oldp+623,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__read_request));
            tracep->chgBit(oldp+624,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__read_request));
            tracep->chgBit(oldp+625,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_request));
            tracep->chgBit(oldp+626,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_success));
            tracep->chgBit(oldp+627,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_write_valid1));
            tracep->chgBit(oldp+628,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_write_valid2));
            tracep->chgQData(oldp+629,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_data_out),64);
            tracep->chgQData(oldp+631,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_addr_out),64);
            tracep->chgCData(oldp+633,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_type_out),4);
            tracep->chgBit(oldp+634,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__delay_oclk));
            tracep->chgBit(oldp+635,((1U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))));
            tracep->chgBit(oldp+636,((1U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))));
            tracep->chgCData(oldp+637,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread),6);
            tracep->chgBit(oldp+638,((2U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))));
            tracep->chgBit(oldp+639,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__read_ok));
            tracep->chgBit(oldp+640,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_ok));
            tracep->chgCData(oldp+641,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_out_type),4);
            tracep->chgBit(oldp+642,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_ena));
            tracep->chgBit(oldp+643,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regr));
            tracep->chgBit(oldp+644,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regr_));
            tracep->chgCData(oldp+645,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite),6);
            tracep->chgBit(oldp+646,((2U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))));
            tracep->chgBit(oldp+647,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__read_w_ok));
            tracep->chgBit(oldp+648,((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))));
            tracep->chgBit(oldp+649,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_ok));
            tracep->chgCData(oldp+650,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_out_type),4);
            tracep->chgBit(oldp+651,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_ena));
            tracep->chgBit(oldp+652,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regw));
            tracep->chgBit(oldp+653,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regw_));
            tracep->chgIData(oldp+654,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__i),32);
            tracep->chgIData(oldp+655,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__j),32);
            tracep->chgIData(oldp+656,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r),23);
            tracep->chgBit(oldp+657,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r));
            tracep->chgIData(oldp+658,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r),23);
            tracep->chgBit(oldp+659,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r));
            tracep->chgWData(oldp+660,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out),128);
            tracep->chgCData(oldp+664,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state),3);
            tracep->chgBit(oldp+665,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_dread));
            tracep->chgBit(oldp+666,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_unread));
            tracep->chgBit(oldp+667,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_dwrite));
            tracep->chgBit(oldp+668,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_unwrite));
            tracep->chgBit(oldp+669,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_iread));
            tracep->chgCData(oldp+670,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state),3);
            tracep->chgBit(oldp+671,((((((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_dread) 
                                         | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_dwrite)) 
                                        | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_iread)) 
                                       | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_unread)) 
                                      | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_unwrite))));
            tracep->chgBit(oldp+672,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__aw_enable));
            tracep->chgCData(oldp+673,(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_write_state),2);
            tracep->chgCData(oldp+674,(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state),2);
            tracep->chgQData(oldp+675,(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__write_data_reg),64);
            tracep->chgQData(oldp+677,(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__write_addr_reg),64);
            tracep->chgCData(oldp+679,(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__r_s_axi_ar_id),4);
            tracep->chgQData(oldp+680,(vlSelf->ysyx_22040228__DOT__clint6__DOT__csr_mtime),64);
            tracep->chgQData(oldp+682,(vlSelf->ysyx_22040228__DOT__clint6__DOT__csr_mtimecmp),64);
            tracep->chgCData(oldp+684,(vlSelf->ysyx_22040228__DOT__clint6__DOT__timer_state),2);
            tracep->chgCData(oldp+685,(vlSelf->ysyx_22040228__DOT__clint6__DOT__timew_state),2);
            tracep->chgCData(oldp+686,(vlSelf->ysyx_22040228__DOT__clint6__DOT__timeraw_id_temp),4);
            tracep->chgQData(oldp+687,(vlSelf->ysyx_22040228__DOT__clint6__DOT__read_csrdata_temp),64);
            tracep->chgCData(oldp+689,(vlSelf->ysyx_22040228__DOT__clint6__DOT__timerar_id_temp),4);
            tracep->chgCData(oldp+690,(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_write_state),2);
            tracep->chgCData(oldp+691,(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state),2);
            tracep->chgQData(oldp+692,(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__write_data_reg),64);
            tracep->chgQData(oldp+694,(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__write_addr_reg),64);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgQData(oldp+696,(((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                                         ? (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                              == (0x7fffffU 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                             >> 9U)))) 
                                             & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                             ? (((QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out[0U])))
                                             : (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                                                  == 
                                                  (0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                              >> 9U)))) 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out[2U])))
                                                 : 0ULL))
                                         : 0ULL)),64);
            tracep->chgBit(oldp+698,(((IData)(vlSelf->ysyx_22040228__DOT__uncache_mmio7__DOT__uncache)
                                       ? (IData)(vlSelf->ysyx_22040228__DOT__uncache_arb_finish)
                                       : (IData)(vlSelf->ysyx_22040228__DOT__uncache_dc_finish))));
            tracep->chgCData(oldp+699,(((2U == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state))
                                         ? (0xfU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_id))
                                         : 0U)),4);
            tracep->chgQData(oldp+700,((((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena1) 
                                           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena2)) 
                                          | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena3)) 
                                         | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena4))
                                         ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__forc_jumppc
                                         : (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                            + (QData)((IData)(
                                                              ((0U 
                                                                == 
                                                                (0xfU 
                                                                 & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)))
                                                                ? 0x10U
                                                                : 
                                                               ((4U 
                                                                 == 
                                                                 (0xfU 
                                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)))
                                                                 ? 0xcU
                                                                 : 
                                                                ((8U 
                                                                  == 
                                                                  (0xfU 
                                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)))
                                                                  ? 8U
                                                                  : 
                                                                 ((0xcU 
                                                                   == 
                                                                   (0xfU 
                                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)))
                                                                   ? 4U
                                                                   : 0U))))))))),64);
            tracep->chgBit(oldp+702,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+703,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0x2000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+704,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0x3000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+705,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0x4000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+706,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0x6000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+707,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+708,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0x1000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+709,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0x5000U 
                                                       == 
                                                       (0x40007000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+710,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+711,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0x1000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+712,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0x4000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+713,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0x5000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+714,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0x6000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+715,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+716,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_addr) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_ena))));
            tracep->chgBit(oldp+717,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_addr) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_ena))));
            tracep->chgBit(oldp+718,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_addr) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_ena))));
            tracep->chgQData(oldp+719,(((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__forcast_state)
                                         ? 0ULL : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jread1)
                                                    ? 
                                                   (4ULL 
                                                    + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_pc)
                                                    : 
                                                   ((((- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__b_imm) 
                                                                             >> 0xbU))))) 
                                                      << 0xcU) 
                                                     | (QData)((IData)(
                                                                       (0xfffU 
                                                                        & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__b_imm) 
                                                                           << 1U))))) 
                                                    + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_pc)))),64);
            tracep->chgQData(oldp+721,(((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_jalr)
                                         ? (0xfffffffffffffffeULL 
                                            & ((((- (QData)((IData)(
                                                                    (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                                     >> 0x1fU)))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                                   >> 0x14U)))) 
                                               + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op1))
                                         : 0ULL)),64);
            tracep->chgQData(oldp+723,(((((- (QData)((IData)(
                                                             (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                              >> 0x1fU)))) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                            >> 0x14U)))) 
                                        + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op1)),64);
            tracep->chgBit(oldp+725,((1U & ((((((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op1)) 
                                                & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op1))) 
                                               & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__mem_op1))) 
                                              & (~ 
                                                 (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_addr) 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1addr)) 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_ena)))) 
                                             & (~ (
                                                   ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_addr) 
                                                    == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1addr)) 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_ena)))) 
                                            & (~ (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_addr) 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1addr)) 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_ena)))))));
            tracep->chgBit(oldp+726,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+727,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0x2000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+728,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0x3000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+729,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0x4000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+730,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0x6000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+731,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+732,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0x1000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+733,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0x5000U 
                                                       == 
                                                       (0x40007000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+734,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+735,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0x1000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+736,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0x4000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+737,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0x5000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+738,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0x6000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+739,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+740,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_addr) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_ena))));
            tracep->chgBit(oldp+741,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_addr) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_ena))));
            tracep->chgBit(oldp+742,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_addr) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_ena))));
            tracep->chgQData(oldp+743,(((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__forcast_state)
                                         ? 0ULL : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jread2)
                                                    ? 
                                                   (4ULL 
                                                    + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_pc)
                                                    : 
                                                   ((((- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__b_imm) 
                                                                             >> 0xbU))))) 
                                                      << 0xcU) 
                                                     | (QData)((IData)(
                                                                       (0xfffU 
                                                                        & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__b_imm) 
                                                                           << 1U))))) 
                                                    + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_pc)))),64);
            tracep->chgQData(oldp+745,(((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_jalr)
                                         ? (0xfffffffffffffffeULL 
                                            & ((((- (QData)((IData)(
                                                                    (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                                     >> 0x1fU)))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                                   >> 0x14U)))) 
                                               + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op1))
                                         : 0ULL)),64);
            tracep->chgQData(oldp+747,(((((- (QData)((IData)(
                                                             (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                              >> 0x1fU)))) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                            >> 0x14U)))) 
                                        + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op1)),64);
            tracep->chgBit(oldp+749,((1U & ((((((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op1)) 
                                                & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op1))) 
                                               & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op1))) 
                                              & (~ 
                                                 (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_addr) 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr)) 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_ena)))) 
                                             & (~ (
                                                   ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_addr) 
                                                    == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr)) 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_ena)))) 
                                            & (~ (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_addr) 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr)) 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_ena)))))));
            tracep->chgBit(oldp+750,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__busy[0]));
            tracep->chgBit(oldp+751,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__busy[1]));
            tracep->chgBit(oldp+752,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__busy[2]));
            tracep->chgBit(oldp+753,(((IData)(vlSelf->ysyx_22040228__DOT__uncache_dc_re) 
                                      & (1U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread)))));
            tracep->chgBit(oldp+754,(((IData)(vlSelf->ysyx_22040228__DOT__uncache_dc_we) 
                                      & (1U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)))));
            tracep->chgBit(oldp+755,(((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread)) 
                                      & (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                           == (0x7fffffU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                          >> 9U)))) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r)) 
                                         | ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                                             == (0x7fffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                            >> 9U)))) 
                                            & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))))));
            VL_EXTEND_WQ(128,64, __Vtemp474, vlSelf->ysyx_22040228__DOT__data_cache3__DOT__strb_extection);
            if ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))) {
                __Vtemp483[0U] = (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                    == (0x7fffffU & (IData)(
                                                            (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                             >> 9U)))) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                   ? __Vtemp474[0U]
                                   : 0U);
                __Vtemp483[1U] = (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                    == (0x7fffffU & (IData)(
                                                            (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                             >> 9U)))) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                   ? __Vtemp474[1U]
                                   : 0U);
                __Vtemp483[2U] = (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                    == (0x7fffffU & (IData)(
                                                            (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                             >> 9U)))) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                   ? __Vtemp474[2U]
                                   : (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                                        == (0x7fffffU 
                                            & (IData)(
                                                      (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                       >> 9U)))) 
                                       & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))
                                       ? (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__strb_extection)
                                       : 0U));
                __Vtemp483[3U] = (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                    == (0x7fffffU & (IData)(
                                                            (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                             >> 9U)))) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                   ? __Vtemp474[3U]
                                   : (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                                        == (0x7fffffU 
                                            & (IData)(
                                                      (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                       >> 9U)))) 
                                       & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))
                                       ? (IData)((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__strb_extection 
                                                  >> 0x20U))
                                       : 0U));
            } else {
                __Vtemp483[0U] = 0U;
                __Vtemp483[1U] = 0U;
                __Vtemp483[2U] = 0U;
                __Vtemp483[3U] = 0U;
            }
            tracep->chgWData(oldp+756,(__Vtemp483),128);
            tracep->chgBit(oldp+760,(((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
                                      & (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                           == (0x7fffffU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                          >> 9U)))) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r)) 
                                         | ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                                             == (0x7fffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                            >> 9U)))) 
                                            & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))))));
            tracep->chgBit(oldp+761,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty1
                                     [(0x3fU & (IData)(
                                                       (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                        >> 3U)))]));
            tracep->chgBit(oldp+762,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty2
                                     [(0x3fU & (IData)(
                                                       (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                        >> 3U)))]));
            tracep->chgIData(oldp+763,(((0xa8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                         ? 0U : (0x7fffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                            >> 9U))))),23);
            VL_EXTEND_WQ(128,64, __Vtemp484, vlSelf->ysyx_22040228__DOT__data_cache3__DOT__strb_extection);
            if ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))) {
                __Vtemp500[0U] = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[0U];
                __Vtemp500[1U] = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[1U];
                __Vtemp500[2U] = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[2U];
                __Vtemp500[3U] = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[3U];
            } else {
                __Vtemp500[0U] = ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                   ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                       ? (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                            == (0x7fffffU 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                           >> 9U)))) 
                                           & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                           ? __Vtemp484[0U]
                                           : 0U) : 0U)
                                   : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                       ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[0U]
                                       : 0U));
                __Vtemp500[1U] = ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                   ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                       ? (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                            == (0x7fffffU 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                           >> 9U)))) 
                                           & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                           ? __Vtemp484[1U]
                                           : 0U) : 0U)
                                   : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                       ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[1U]
                                       : 0U));
                __Vtemp500[2U] = ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                   ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                       ? (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                            == (0x7fffffU 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                           >> 9U)))) 
                                           & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                           ? __Vtemp484[2U]
                                           : (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                                                == 
                                                (0x7fffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                            >> 9U)))) 
                                               & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))
                                               ? (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__strb_extection)
                                               : 0U))
                                       : 0U) : ((0x10U 
                                                 == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                                 ? 
                                                vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[2U]
                                                 : 0U));
                __Vtemp500[3U] = ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                   ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                       ? (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                            == (0x7fffffU 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                           >> 9U)))) 
                                           & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                           ? __Vtemp484[3U]
                                           : (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                                                == 
                                                (0x7fffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                            >> 9U)))) 
                                               & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))
                                               ? (IData)(
                                                         (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__strb_extection 
                                                          >> 0x20U))
                                               : 0U))
                                       : 0U) : ((0x10U 
                                                 == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                                 ? 
                                                vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[3U]
                                                 : 0U));
            }
            tracep->chgWData(oldp+764,(__Vtemp500),128);
            if ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))) {
                __Vtemp507[0U] = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[0U];
                __Vtemp507[1U] = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[1U];
                __Vtemp507[2U] = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[2U];
                __Vtemp507[3U] = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[3U];
            } else {
                __Vtemp507[0U] = ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                   ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__hitw_data_temp[0U]
                                   : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                       ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[0U]
                                       : 0U));
                __Vtemp507[1U] = ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                   ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__hitw_data_temp[1U]
                                   : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                       ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[1U]
                                       : 0U));
                __Vtemp507[2U] = ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                   ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__hitw_data_temp[2U]
                                   : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                       ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[2U]
                                       : 0U));
                __Vtemp507[3U] = ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                   ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__hitw_data_temp[3U]
                                   : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                       ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[3U]
                                       : 0U));
            }
            tracep->chgWData(oldp+768,(__Vtemp507),128);
            tracep->chgBit(oldp+772,(((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                                       ? (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_ena)
                                       : ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                           ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
                                              & (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                                   == 
                                                   (0x7fffffU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                               >> 9U)))) 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r)) 
                                                 | ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                                                     == 
                                                     (0x7fffffU 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                                 >> 9U)))) 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))))
                                           : ((0x10U 
                                               == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
                                              & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_ena))))));
            tracep->chgBit(oldp+773,((1U & (~ ((0x10U 
                                                == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                                                ? (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_ena)
                                                : (
                                                   (4U 
                                                    == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                                    ? 
                                                   ((4U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
                                                    & (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                                         == 
                                                         (0x7fffffU 
                                                          & (IData)(
                                                                    (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                                     >> 9U)))) 
                                                        & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r)) 
                                                       | ((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                                                           == 
                                                           (0x7fffffU 
                                                            & (IData)(
                                                                      (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                                       >> 9U)))) 
                                                          & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))))
                                                    : 
                                                   ((0x10U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_ena))))))));
            VL_EXTEND_WQ(128,64, __Vtemp508, vlSelf->ysyx_22040228__DOT__data_cache3__DOT__strb_extection);
            __Vtemp525[0U] = (~ ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                                  ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[0U]
                                  : ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                      ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                          ? (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                               == (0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                              >> 9U)))) 
                                              & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                              ? __Vtemp508[0U]
                                              : 0U)
                                          : 0U) : (
                                                   (0x10U 
                                                    == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                                    ? 
                                                   vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[0U]
                                                    : 0U))));
            __Vtemp525[1U] = (~ ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                                  ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[1U]
                                  : ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                      ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                          ? (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                               == (0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                              >> 9U)))) 
                                              & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                              ? __Vtemp508[1U]
                                              : 0U)
                                          : 0U) : (
                                                   (0x10U 
                                                    == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                                    ? 
                                                   vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[1U]
                                                    : 0U))));
            __Vtemp525[2U] = (~ ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                                  ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[2U]
                                  : ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                      ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                          ? (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                               == (0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                              >> 9U)))) 
                                              & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                              ? __Vtemp508[2U]
                                              : (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                                                   == 
                                                   (0x7fffffU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                               >> 9U)))) 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))
                                                  ? (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__strb_extection)
                                                  : 0U))
                                          : 0U) : (
                                                   (0x10U 
                                                    == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                                    ? 
                                                   vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[2U]
                                                    : 0U))));
            __Vtemp525[3U] = (~ ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                                  ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[3U]
                                  : ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                      ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                          ? (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                               == (0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                              >> 9U)))) 
                                              & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                              ? __Vtemp508[3U]
                                              : (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                                                   == 
                                                   (0x7fffffU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                               >> 9U)))) 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))
                                                  ? (IData)(
                                                            (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__strb_extection 
                                                             >> 0x20U))
                                                  : 0U))
                                          : 0U) : (
                                                   (0x10U 
                                                    == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                                    ? 
                                                   vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[3U]
                                                    : 0U))));
            tracep->chgWData(oldp+774,(__Vtemp525),128);
            tracep->chgCData(oldp+778,(((4U & (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state))
                                         ? ((2U & (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state))
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state))
                                                 ? 1U
                                                 : 
                                                ((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_unread)
                                                  ? 1U
                                                  : 6U))
                                             : ((1U 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state))
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_dread)
                                                  ? 1U
                                                  : 5U)
                                                 : 
                                                ((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_iread)
                                                  ? 1U
                                                  : 4U)))
                                         : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state))
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state))
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_unwrite)
                                                  ? 1U
                                                  : 3U)
                                                 : 
                                                ((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_dwrite)
                                                  ? 1U
                                                  : 2U))
                                             : ((1U 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state))
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_dcache_shankhand)
                                                  ? 5U
                                                  : 
                                                 ((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_uncahce_shankhand)
                                                   ? 6U
                                                   : 
                                                  ((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__write_dcache_shankhand)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__write_uncahce_shankhand)
                                                     ? 3U
                                                     : 
                                                    ((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_icache_shankhand)
                                                      ? 4U
                                                      : 1U)))))
                                                 : 1U)))),3);
            tracep->chgBit(oldp+779,(((2U == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_write_state)) 
                                      & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_b_ready) 
                                         >> 2U))));
            tracep->chgBit(oldp+780,((((IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_ready) 
                                       >> 2U) & (2U 
                                                 == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state)))));
            tracep->chgQData(oldp+781,((((IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__success_aw) 
                                         & (0x200bff8ULL 
                                            == (((QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[2U])))))
                                         ? ((vlSelf->ysyx_22040228__DOT__clint6__DOT__wmask 
                                             & (((QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__add_axi_w_data[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__add_axi_w_data[2U])))) 
                                            | ((~ vlSelf->ysyx_22040228__DOT__clint6__DOT__wmask) 
                                               & vlSelf->ysyx_22040228__DOT__clint6__DOT__csr_mtime))
                                         : (1ULL + vlSelf->ysyx_22040228__DOT__clint6__DOT__csr_mtime))),64);
            tracep->chgQData(oldp+783,((((IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__success_aw) 
                                         & (0x2004000ULL 
                                            == (((QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[2U])))))
                                         ? ((vlSelf->ysyx_22040228__DOT__clint6__DOT__wmask 
                                             & (((QData)((IData)(
                                                                 vlSelf->ysyx_22040228__DOT__add_axi_w_data[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ysyx_22040228__DOT__add_axi_w_data[2U])))) 
                                            | ((~ vlSelf->ysyx_22040228__DOT__clint6__DOT__wmask) 
                                               & vlSelf->ysyx_22040228__DOT__clint6__DOT__csr_mtimecmp))
                                         : vlSelf->ysyx_22040228__DOT__clint6__DOT__csr_mtimecmp)),64);
            tracep->chgBit(oldp+785,(((2U == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_write_state)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_b_ready))));
            tracep->chgBit(oldp+786,(((IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_ready) 
                                      & (2U == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state)))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+787,(vlSelf->ysyx_22040228__DOT__rvcpu_data_addr),64);
            tracep->chgCData(oldp+789,(vlSelf->ysyx_22040228__DOT__rvcpu_wmask),8);
            tracep->chgQData(oldp+790,(vlSelf->ysyx_22040228__DOT__rvcpu_data_o),64);
            tracep->chgBit(oldp+792,(vlSelf->ysyx_22040228__DOT__rvcpu_we));
            tracep->chgBit(oldp+793,(vlSelf->ysyx_22040228__DOT__rvcpu_re));
            tracep->chgQData(oldp+794,(vlSelf->ysyx_22040228__DOT__uncache_arb_data),64);
            tracep->chgQData(oldp+796,(vlSelf->ysyx_22040228__DOT__uncache_arb_addr),64);
            tracep->chgCData(oldp+798,(((IData)(vlSelf->ysyx_22040228__DOT__uncache_mmio7__DOT__uncache)
                                         ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_wmask)
                                         : 0U)),8);
            tracep->chgBit(oldp+799,(vlSelf->ysyx_22040228__DOT__uncache_arb_we));
            tracep->chgBit(oldp+800,(vlSelf->ysyx_22040228__DOT__uncache_arb_re));
            tracep->chgQData(oldp+801,(vlSelf->ysyx_22040228__DOT__uncache_dc_data),64);
            tracep->chgQData(oldp+803,(vlSelf->ysyx_22040228__DOT__uncache_dc_addr),64);
            tracep->chgCData(oldp+805,(vlSelf->ysyx_22040228__DOT__uncache_dc_mask),8);
            tracep->chgBit(oldp+806,(vlSelf->ysyx_22040228__DOT__uncache_dc_we));
            tracep->chgBit(oldp+807,(vlSelf->ysyx_22040228__DOT__uncache_dc_re));
            tracep->chgBit(oldp+808,(vlSelf->ysyx_22040228__DOT__uncache_dc_finish));
            tracep->chgQData(oldp+809,(vlSelf->ysyx_22040228__DOT__d_cache_data_out),64);
            tracep->chgQData(oldp+811,(vlSelf->ysyx_22040228__DOT__d_cache_out_addr),64);
            tracep->chgQData(oldp+813,(vlSelf->ysyx_22040228__DOT__d_cache_out_data),64);
            tracep->chgCData(oldp+815,(vlSelf->ysyx_22040228__DOT__d_cache_out_type),4);
            tracep->chgQData(oldp+816,(vlSelf->ysyx_22040228__DOT__t_axi_aw_addr),64);
            tracep->chgQData(oldp+818,(vlSelf->ysyx_22040228__DOT__t_axi_w_data),64);
            tracep->chgCData(oldp+820,(vlSelf->ysyx_22040228__DOT__t_axi_w_strb),8);
            tracep->chgCData(oldp+821,(vlSelf->ysyx_22040228__DOT__t_axi_b_id),4);
            tracep->chgBit(oldp+822,(vlSelf->ysyx_22040228__DOT__t_axi_b_valid));
            tracep->chgQData(oldp+823,(vlSelf->ysyx_22040228__DOT__t_axi_ar_addr),64);
            tracep->chgCData(oldp+825,(vlSelf->ysyx_22040228__DOT__t_axi_r_id),4);
            tracep->chgQData(oldp+826,(vlSelf->ysyx_22040228__DOT__t_axi_r_data),64);
            tracep->chgBit(oldp+828,(vlSelf->ysyx_22040228__DOT__t_axi_r_last));
            tracep->chgBit(oldp+829,(vlSelf->ysyx_22040228__DOT__t_axi_r_valid));
            tracep->chgSData(oldp+830,(vlSelf->ysyx_22040228__DOT__add_axi_aw_id),12);
            tracep->chgWData(oldp+831,(vlSelf->ysyx_22040228__DOT__add_axi_aw_addr),192);
            tracep->chgIData(oldp+837,(vlSelf->ysyx_22040228__DOT__add_axi_aw_len),24);
            tracep->chgSData(oldp+838,(vlSelf->ysyx_22040228__DOT__add_axi_aw_size),9);
            tracep->chgCData(oldp+839,(vlSelf->ysyx_22040228__DOT__add_axi_aw_burst),6);
            tracep->chgSData(oldp+840,(vlSelf->ysyx_22040228__DOT__add_axi_aw_cache),12);
            tracep->chgSData(oldp+841,(vlSelf->ysyx_22040228__DOT__add_axi_aw_prot),9);
            tracep->chgSData(oldp+842,(vlSelf->ysyx_22040228__DOT__add_axi_aw_qos),12);
            tracep->chgCData(oldp+843,(vlSelf->ysyx_22040228__DOT__add_axi_aw_valid),3);
            tracep->chgCData(oldp+844,(vlSelf->ysyx_22040228__DOT__add_axi_aw_ready),3);
            tracep->chgWData(oldp+845,(vlSelf->ysyx_22040228__DOT__add_axi_w_data),192);
            tracep->chgIData(oldp+851,(vlSelf->ysyx_22040228__DOT__add_axi_w_strb),24);
            tracep->chgCData(oldp+852,(vlSelf->ysyx_22040228__DOT__add_axi_w_last),3);
            tracep->chgCData(oldp+853,(vlSelf->ysyx_22040228__DOT__add_axi_w_valid),3);
            tracep->chgCData(oldp+854,(vlSelf->ysyx_22040228__DOT__add_axi_w_ready),3);
            tracep->chgSData(oldp+855,(vlSelf->ysyx_22040228__DOT__add_axi_b_id),12);
            tracep->chgCData(oldp+856,(vlSelf->ysyx_22040228__DOT__add_axi_b_ready),3);
            tracep->chgSData(oldp+857,(vlSelf->ysyx_22040228__DOT__add_axi_ar_id),12);
            tracep->chgWData(oldp+858,(vlSelf->ysyx_22040228__DOT__add_axi_ar_addr),192);
            tracep->chgIData(oldp+864,(vlSelf->ysyx_22040228__DOT__add_axi_ar_len),24);
            tracep->chgSData(oldp+865,(vlSelf->ysyx_22040228__DOT__add_axi_ar_size),9);
            tracep->chgCData(oldp+866,(vlSelf->ysyx_22040228__DOT__add_axi_ar_burst),6);
            tracep->chgSData(oldp+867,(vlSelf->ysyx_22040228__DOT__add_axi_ar_cache),12);
            tracep->chgSData(oldp+868,(vlSelf->ysyx_22040228__DOT__add_axi_ar_prot),9);
            tracep->chgSData(oldp+869,(vlSelf->ysyx_22040228__DOT__add_axi_ar_qos),12);
            tracep->chgCData(oldp+870,(vlSelf->ysyx_22040228__DOT__add_axi_ar_valid),3);
            tracep->chgSData(oldp+871,(vlSelf->ysyx_22040228__DOT__add_axi_r_id),12);
            tracep->chgWData(oldp+872,(vlSelf->ysyx_22040228__DOT__add_axi_r_data),192);
            tracep->chgCData(oldp+878,(vlSelf->ysyx_22040228__DOT__add_axi_r_ready),3);
            tracep->chgCData(oldp+879,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_id) 
                                                >> 8U))),4);
            tracep->chgQData(oldp+880,((((QData)((IData)(
                                                         vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[4U])))),64);
            tracep->chgCData(oldp+882,((0xffU & (vlSelf->ysyx_22040228__DOT__add_axi_aw_len 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+883,((7U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_size) 
                                              >> 6U))),3);
            tracep->chgCData(oldp+884,((3U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_burst) 
                                              >> 4U))),2);
            tracep->chgCData(oldp+885,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_cache) 
                                                >> 8U))),4);
            tracep->chgCData(oldp+886,((7U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_prot) 
                                              >> 6U))),3);
            tracep->chgCData(oldp+887,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_qos) 
                                                >> 8U))),4);
            tracep->chgBit(oldp+888,(vlSelf->ysyx_22040228__DOT__soc_axi_aw_ready));
            tracep->chgBit(oldp+889,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_valid) 
                                            >> 2U))));
            tracep->chgQData(oldp+890,((((QData)((IData)(
                                                         vlSelf->ysyx_22040228__DOT__add_axi_w_data[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__add_axi_w_data[4U])))),64);
            tracep->chgCData(oldp+892,((0xffU & (vlSelf->ysyx_22040228__DOT__add_axi_w_strb 
                                                 >> 0x10U))),8);
            tracep->chgBit(oldp+893,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_last) 
                                            >> 2U))));
            tracep->chgBit(oldp+894,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_valid) 
                                            >> 2U))));
            tracep->chgBit(oldp+895,(vlSelf->ysyx_22040228__DOT__soc_axi_w_ready));
            tracep->chgBit(oldp+896,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_b_ready) 
                                            >> 2U))));
            tracep->chgCData(oldp+897,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_id) 
                                                >> 8U))),4);
            tracep->chgQData(oldp+898,((((QData)((IData)(
                                                         vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[4U])))),64);
            tracep->chgCData(oldp+900,((0xffU & (vlSelf->ysyx_22040228__DOT__add_axi_ar_len 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+901,((7U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_size) 
                                              >> 6U))),3);
            tracep->chgCData(oldp+902,((3U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_burst) 
                                              >> 4U))),2);
            tracep->chgCData(oldp+903,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_cache) 
                                                >> 8U))),4);
            tracep->chgCData(oldp+904,((7U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_prot) 
                                              >> 6U))),3);
            tracep->chgCData(oldp+905,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_qos) 
                                                >> 8U))),4);
            tracep->chgBit(oldp+906,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_valid) 
                                            >> 2U))));
            tracep->chgBit(oldp+907,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_ready) 
                                            >> 2U))));
            tracep->chgCData(oldp+908,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_id) 
                                                >> 4U))),4);
            tracep->chgQData(oldp+909,((((QData)((IData)(
                                                         vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[2U])))),64);
            tracep->chgCData(oldp+911,((0xffU & (vlSelf->ysyx_22040228__DOT__add_axi_aw_len 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+912,((7U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_size) 
                                              >> 3U))),3);
            tracep->chgCData(oldp+913,((3U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_burst) 
                                              >> 2U))),2);
            tracep->chgCData(oldp+914,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_cache) 
                                                >> 4U))),4);
            tracep->chgCData(oldp+915,((7U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_prot) 
                                              >> 3U))),3);
            tracep->chgCData(oldp+916,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_qos) 
                                                >> 4U))),4);
            tracep->chgBit(oldp+917,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_valid) 
                                            >> 1U))));
            tracep->chgQData(oldp+918,((((QData)((IData)(
                                                         vlSelf->ysyx_22040228__DOT__add_axi_w_data[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__add_axi_w_data[2U])))),64);
            tracep->chgCData(oldp+920,((0xffU & (vlSelf->ysyx_22040228__DOT__add_axi_w_strb 
                                                 >> 8U))),8);
            tracep->chgBit(oldp+921,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_last) 
                                            >> 1U))));
            tracep->chgBit(oldp+922,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_valid) 
                                            >> 1U))));
            tracep->chgBit(oldp+923,(vlSelf->ysyx_22040228__DOT__clint6__DOT__success_aw));
            tracep->chgBit(oldp+924,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_b_ready) 
                                            >> 1U))));
            tracep->chgCData(oldp+925,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_id) 
                                                >> 4U))),4);
            tracep->chgQData(oldp+926,((((QData)((IData)(
                                                         vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[2U])))),64);
            tracep->chgCData(oldp+928,((0xffU & (vlSelf->ysyx_22040228__DOT__add_axi_ar_len 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+929,((7U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_size) 
                                              >> 3U))),3);
            tracep->chgCData(oldp+930,((3U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_burst) 
                                              >> 2U))),2);
            tracep->chgCData(oldp+931,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_cache) 
                                                >> 4U))),4);
            tracep->chgCData(oldp+932,((7U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_prot) 
                                              >> 3U))),3);
            tracep->chgCData(oldp+933,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_qos) 
                                                >> 4U))),4);
            tracep->chgBit(oldp+934,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_valid) 
                                            >> 1U))));
            tracep->chgBit(oldp+935,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_ready) 
                                            >> 1U))));
            tracep->chgCData(oldp+936,((0xfU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_id))),4);
            tracep->chgQData(oldp+937,((((QData)((IData)(
                                                         vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[0U])))),64);
            tracep->chgCData(oldp+939,((0xffU & vlSelf->ysyx_22040228__DOT__add_axi_aw_len)),8);
            tracep->chgCData(oldp+940,((7U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_size))),3);
            tracep->chgCData(oldp+941,((3U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_burst))),2);
            tracep->chgCData(oldp+942,((0xfU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_cache))),4);
            tracep->chgCData(oldp+943,((7U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_prot))),3);
            tracep->chgCData(oldp+944,((0xfU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_qos))),4);
            tracep->chgBit(oldp+945,(vlSelf->ysyx_22040228__DOT__io_axi_aw_ready));
            tracep->chgBit(oldp+946,((1U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_valid))));
            tracep->chgQData(oldp+947,((((QData)((IData)(
                                                         vlSelf->ysyx_22040228__DOT__add_axi_w_data[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__add_axi_w_data[0U])))),64);
            tracep->chgCData(oldp+949,((0xffU & vlSelf->ysyx_22040228__DOT__add_axi_w_strb)),8);
            tracep->chgBit(oldp+950,((1U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_last))));
            tracep->chgBit(oldp+951,((1U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_valid))));
            tracep->chgBit(oldp+952,(vlSelf->ysyx_22040228__DOT__io_axi_w_ready));
            tracep->chgBit(oldp+953,((1U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_b_ready))));
            tracep->chgCData(oldp+954,((0xfU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_id))),4);
            tracep->chgQData(oldp+955,((((QData)((IData)(
                                                         vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[0U])))),64);
            tracep->chgCData(oldp+957,((0xffU & vlSelf->ysyx_22040228__DOT__add_axi_ar_len)),8);
            tracep->chgCData(oldp+958,((7U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_size))),3);
            tracep->chgCData(oldp+959,((3U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_burst))),2);
            tracep->chgCData(oldp+960,((0xfU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_cache))),4);
            tracep->chgCData(oldp+961,((7U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_prot))),3);
            tracep->chgCData(oldp+962,((0xfU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_qos))),4);
            tracep->chgBit(oldp+963,((1U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_valid))));
            tracep->chgBit(oldp+964,((1U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_ready))));
            tracep->chgCData(oldp+965,(vlSelf->ysyx_22040228__DOT__mmio_thing),3);
            tracep->chgBit(oldp+966,(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__ar_shankhand));
            tracep->chgQData(oldp+967,(((IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__ar_shankhand)
                                         ? (((QData)((IData)(
                                                             vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[5U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[4U])))
                                         : 0ULL)),64);
            tracep->chgCData(oldp+969,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1addr),5);
            tracep->chgCData(oldp+970,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr),5);
            tracep->chgBit(oldp+971,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1ena));
            tracep->chgBit(oldp+972,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2ena));
            tracep->chgCData(oldp+973,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type),8);
            tracep->chgCData(oldp+974,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_opcode),8);
            tracep->chgQData(oldp+975,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op1),64);
            tracep->chgQData(oldp+977,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op2),64);
            tracep->chgBit(oldp+979,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_ena));
            tracep->chgCData(oldp+980,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_addr),5);
            tracep->chgQData(oldp+981,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_pc),64);
            tracep->chgIData(oldp+983,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_inst),32);
            tracep->chgQData(oldp+984,(((IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))))
                                         ? (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op1 
                                            + (((- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__store_addr_offset) 
                                                                       >> 0xbU))))) 
                                                << 0xcU) 
                                               | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__store_addr_offset))))
                                         : 0ULL)),64);
            tracep->chgQData(oldp+986,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump1_pc),64);
            tracep->chgBit(oldp+988,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump1_ena));
            tracep->chgCData(oldp+989,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_so_type),6);
            tracep->chgBit(oldp+990,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type) 
                                            >> 2U))));
            tracep->chgBit(oldp+991,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__data_jf));
            tracep->chgCData(oldp+992,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr),5);
            tracep->chgCData(oldp+993,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr),5);
            tracep->chgBit(oldp+994,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1ena));
            tracep->chgBit(oldp+995,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2ena));
            tracep->chgCData(oldp+996,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type),8);
            tracep->chgCData(oldp+997,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_opcode),8);
            tracep->chgQData(oldp+998,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op1),64);
            tracep->chgQData(oldp+1000,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op2),64);
            tracep->chgBit(oldp+1002,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_ena));
            tracep->chgCData(oldp+1003,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_addr),5);
            tracep->chgQData(oldp+1004,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_pc),64);
            tracep->chgIData(oldp+1006,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_inst),32);
            tracep->chgQData(oldp+1007,(((IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))))
                                          ? (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op1 
                                             + (((- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__store_addr_offset) 
                                                                        >> 0xbU))))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__store_addr_offset))))
                                          : 0ULL)),64);
            tracep->chgBit(oldp+1009,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__data_jf));
            tracep->chgBit(oldp+1010,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type) 
                                             >> 2U))));
            tracep->chgQData(oldp+1011,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump2_pc),64);
            tracep->chgBit(oldp+1013,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump2_ena));
            tracep->chgCData(oldp+1014,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_so_type),6);
            tracep->chgCData(oldp+1015,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose1),3);
            tracep->chgCData(oldp+1016,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose2),3);
            tracep->chgBit(oldp+1017,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop1));
            tracep->chgBit(oldp+1018,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop2));
            tracep->chgBit(oldp+1019,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleano));
            tracep->chgBit(oldp+1020,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleant));
            tracep->chgBit(oldp+1021,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudt_stop_trap));
            tracep->chgBit(oldp+1022,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_trap));
            tracep->chgQData(oldp+1023,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_submit_pc),64);
            tracep->chgQData(oldp+1025,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc),64);
            tracep->chgQData(oldp+1027,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_data),64);
            tracep->chgQData(oldp+1029,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc),64);
            tracep->chgQData(oldp+1031,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_data),64);
            tracep->chgQData(oldp+1033,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc),64);
            tracep->chgQData(oldp+1035,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__load_data),64);
            tracep->chgBit(oldp+1037,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_so_busy));
            tracep->chgQData(oldp+1038,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__operand2),64);
            tracep->chgQData(oldp+1040,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_temp),64);
            tracep->chgQData(oldp+1042,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__forc_jumppc),64);
            tracep->chgCData(oldp+1044,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_counter_temp),3);
            tracep->chgBit(oldp+1045,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__should_updata));
            tracep->chgCData(oldp+1046,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__rs1),5);
            tracep->chgBit(oldp+1047,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_lui));
            tracep->chgBit(oldp+1048,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_auipc));
            tracep->chgBit(oldp+1049,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_jal));
            tracep->chgBit(oldp+1050,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_jalr));
            tracep->chgBit(oldp+1051,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_jump));
            tracep->chgBit(oldp+1052,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_srai));
            tracep->chgBit(oldp+1053,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_addiw));
            tracep->chgBit(oldp+1054,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_slliw));
            tracep->chgBit(oldp+1055,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_srliw));
            tracep->chgBit(oldp+1056,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sraiw));
            tracep->chgBit(oldp+1057,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_add));
            tracep->chgBit(oldp+1058,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sub));
            tracep->chgBit(oldp+1059,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sll));
            tracep->chgBit(oldp+1060,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_slt));
            tracep->chgBit(oldp+1061,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sltu));
            tracep->chgBit(oldp+1062,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_xor));
            tracep->chgBit(oldp+1063,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_srl));
            tracep->chgBit(oldp+1064,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sra));
            tracep->chgBit(oldp+1065,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_or));
            tracep->chgBit(oldp+1066,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_and));
            tracep->chgBit(oldp+1067,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_div));
            tracep->chgBit(oldp+1068,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_divu));
            tracep->chgBit(oldp+1069,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mul));
            tracep->chgBit(oldp+1070,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulh));
            tracep->chgBit(oldp+1071,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulhsu));
            tracep->chgBit(oldp+1072,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulhu));
            tracep->chgBit(oldp+1073,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_rem));
            tracep->chgBit(oldp+1074,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_remu));
            tracep->chgBit(oldp+1075,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_addw));
            tracep->chgBit(oldp+1076,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_subw));
            tracep->chgBit(oldp+1077,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sllw));
            tracep->chgBit(oldp+1078,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_srlw));
            tracep->chgBit(oldp+1079,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sraw));
            tracep->chgBit(oldp+1080,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_divuw));
            tracep->chgBit(oldp+1081,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_divw));
            tracep->chgBit(oldp+1082,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulw));
            tracep->chgBit(oldp+1083,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_remuw));
            tracep->chgBit(oldp+1084,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_remw));
            tracep->chgBit(oldp+1085,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrw));
            tracep->chgBit(oldp+1086,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrs));
            tracep->chgBit(oldp+1087,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrc));
            tracep->chgBit(oldp+1088,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrwi));
            tracep->chgBit(oldp+1089,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrsi));
            tracep->chgBit(oldp+1090,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrci));
            tracep->chgBit(oldp+1091,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrw) 
                                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrs)) 
                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrc))));
            tracep->chgBit(oldp+1092,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrwi) 
                                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrsi)) 
                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrci))));
            tracep->chgBit(oldp+1093,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_ecall));
            tracep->chgBit(oldp+1094,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_ebreak));
            tracep->chgBit(oldp+1095,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mret));
            tracep->chgSData(oldp+1096,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__store_addr_offset),12);
            tracep->chgBit(oldp+1097,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op1));
            tracep->chgBit(oldp+1098,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op1));
            tracep->chgBit(oldp+1099,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                                        > vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op1) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op1)))));
            tracep->chgBit(oldp+1100,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                                        < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op1) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op1)))));
            tracep->chgBit(oldp+1101,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__mem_op1));
            tracep->chgBit(oldp+1102,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                        < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op1) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__mem_op1)))));
            tracep->chgBit(oldp+1103,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                        < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op1) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__mem_op1)))));
            tracep->chgBit(oldp+1104,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op2));
            tracep->chgBit(oldp+1105,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op2));
            tracep->chgBit(oldp+1106,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                                        > vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op2) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op2)))));
            tracep->chgBit(oldp+1107,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                                        < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op2) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op2)))));
            tracep->chgBit(oldp+1108,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__mem_op2));
            tracep->chgBit(oldp+1109,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                        < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op2) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__mem_op2)))));
            tracep->chgBit(oldp+1110,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                        < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op2) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__mem_op2)))));
            tracep->chgBit(oldp+1111,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__forcast_state));
            tracep->chgQData(oldp+1112,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__op1_sub_op2),64);
            tracep->chgBit(oldp+1114,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__op1_ls_op2));
            tracep->chgBit(oldp+1115,((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__forcast_state)))));
            tracep->chgBit(oldp+1116,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__jalr_pc_ena));
            tracep->chgCData(oldp+1117,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__rs1),5);
            tracep->chgBit(oldp+1118,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_lui));
            tracep->chgBit(oldp+1119,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_auipc));
            tracep->chgBit(oldp+1120,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_jal));
            tracep->chgBit(oldp+1121,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_jalr));
            tracep->chgBit(oldp+1122,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_jump));
            tracep->chgBit(oldp+1123,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_srai));
            tracep->chgBit(oldp+1124,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_addiw));
            tracep->chgBit(oldp+1125,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_slliw));
            tracep->chgBit(oldp+1126,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_srliw));
            tracep->chgBit(oldp+1127,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sraiw));
            tracep->chgBit(oldp+1128,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_add));
            tracep->chgBit(oldp+1129,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sub));
            tracep->chgBit(oldp+1130,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sll));
            tracep->chgBit(oldp+1131,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_slt));
            tracep->chgBit(oldp+1132,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sltu));
            tracep->chgBit(oldp+1133,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_xor));
            tracep->chgBit(oldp+1134,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_srl));
            tracep->chgBit(oldp+1135,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sra));
            tracep->chgBit(oldp+1136,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_or));
            tracep->chgBit(oldp+1137,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_and));
            tracep->chgBit(oldp+1138,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_div));
            tracep->chgBit(oldp+1139,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_divu));
            tracep->chgBit(oldp+1140,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mul));
            tracep->chgBit(oldp+1141,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulh));
            tracep->chgBit(oldp+1142,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulhsu));
            tracep->chgBit(oldp+1143,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulhu));
            tracep->chgBit(oldp+1144,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_rem));
            tracep->chgBit(oldp+1145,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_remu));
            tracep->chgBit(oldp+1146,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_addw));
            tracep->chgBit(oldp+1147,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_subw));
            tracep->chgBit(oldp+1148,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sllw));
            tracep->chgBit(oldp+1149,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_srlw));
            tracep->chgBit(oldp+1150,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sraw));
            tracep->chgBit(oldp+1151,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_divuw));
            tracep->chgBit(oldp+1152,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_divw));
            tracep->chgBit(oldp+1153,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulw));
            tracep->chgBit(oldp+1154,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_remuw));
            tracep->chgBit(oldp+1155,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_remw));
            tracep->chgBit(oldp+1156,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrw));
            tracep->chgBit(oldp+1157,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrs));
            tracep->chgBit(oldp+1158,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrc));
            tracep->chgBit(oldp+1159,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrwi));
            tracep->chgBit(oldp+1160,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrsi));
            tracep->chgBit(oldp+1161,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrci));
            tracep->chgBit(oldp+1162,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrw) 
                                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrs)) 
                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrc))));
            tracep->chgBit(oldp+1163,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrwi) 
                                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrsi)) 
                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrci))));
            tracep->chgBit(oldp+1164,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_ecall));
            tracep->chgBit(oldp+1165,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_ebreak));
            tracep->chgBit(oldp+1166,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mret));
            tracep->chgSData(oldp+1167,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__store_addr_offset),12);
            tracep->chgBit(oldp+1168,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op1));
            tracep->chgBit(oldp+1169,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op1));
            tracep->chgBit(oldp+1170,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                                        > vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op1) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op1)))));
            tracep->chgBit(oldp+1171,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                                        < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op1) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op1)))));
            tracep->chgBit(oldp+1172,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op1));
            tracep->chgBit(oldp+1173,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                        < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op1) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op1)))));
            tracep->chgBit(oldp+1174,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                        < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op1) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op1)))));
            tracep->chgBit(oldp+1175,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op2));
            tracep->chgBit(oldp+1176,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op2));
            tracep->chgBit(oldp+1177,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                                        > vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op2) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op2)))));
            tracep->chgBit(oldp+1178,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                                        < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op2) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op2)))));
            tracep->chgBit(oldp+1179,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op2));
            tracep->chgBit(oldp+1180,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                        < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op2) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op2)))));
            tracep->chgBit(oldp+1181,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                        < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op2) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op2)))));
            tracep->chgBit(oldp+1182,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__forcast_state));
            tracep->chgQData(oldp+1183,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__op1_sub_op2),64);
            tracep->chgBit(oldp+1185,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__op1_ls_op2));
            tracep->chgBit(oldp+1186,((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__forcast_state)))));
            tracep->chgBit(oldp+1187,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__jalr_pc_ena));
            tracep->chgBit(oldp+1188,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_waw));
            tracep->chgBit(oldp+1189,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudt_stop_waw));
            tracep->chgBit(oldp+1190,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo1_stop_war));
            tracep->chgBit(oldp+1191,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo2_stop_war));
            tracep->chgBit(oldp+1192,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudt1_stop_war));
            tracep->chgBit(oldp+1193,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudt2_stop_war));
            tracep->chgBit(oldp+1194,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_so_type) 
                                        >> 3U) & ((
                                                   ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_waw) 
                                                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo1_stop_war)) 
                                                   | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo2_stop_war)) 
                                                  | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_hard)))));
            tracep->chgBit(oldp+1195,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_so_type) 
                                        >> 3U) & ((
                                                   ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_waw) 
                                                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo1_stop_war)) 
                                                   | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo2_stop_war)) 
                                                  | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_hard)))));
            tracep->chgBit(oldp+1196,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_hard));
            tracep->chgBit(oldp+1197,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudt_stop_hard));
            tracep->chgQData(oldp+1198,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__exe_res),64);
            tracep->chgQData(oldp+1200,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__divrem_data),64);
            tracep->chgQData(oldp+1202,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__yushu),64);
            tracep->chgQData(oldp+1204,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__shang),64);
            tracep->chgQData(oldp+1206,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__exe_res),64);
            tracep->chgQData(oldp+1208,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__divrem_data),64);
            tracep->chgQData(oldp+1210,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__yushu),64);
            tracep->chgQData(oldp+1212,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__shang),64);
            tracep->chgCData(oldp+1214,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__data_byte),8);
            tracep->chgSData(oldp+1215,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__data_half_byte),16);
            tracep->chgIData(oldp+1216,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__data_word),32);
            tracep->chgQData(oldp+1217,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__store_data),64);
            tracep->chgCData(oldp+1219,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__store_mask),8);
            tracep->chgCData(oldp+1220,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__es__DOT__gating),3);
            tracep->chgBit(oldp+1221,(((IData)(vlSelf->ysyx_22040228__DOT__rvcpu_we) 
                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_re))));
            tracep->chgBit(oldp+1222,(vlSelf->ysyx_22040228__DOT__uncache_mmio7__DOT__uncache));
            tracep->chgBit(oldp+1223,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__icache_if_shankhand));
            tracep->chgCData(oldp+1224,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst_nxt),6);
            tracep->chgIData(oldp+1225,((0x7fffffU 
                                         & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                    >> 9U)))),23);
            tracep->chgCData(oldp+1226,((0x3fU & (IData)(
                                                         (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                          >> 3U)))),6);
            tracep->chgCData(oldp+1227,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread_nxt),6);
            tracep->chgBit(oldp+1228,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__mem_hit_ok));
            tracep->chgQData(oldp+1229,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_out_addr),64);
            tracep->chgQData(oldp+1231,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_out_data),64);
            tracep->chgCData(oldp+1233,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_out_type),4);
            tracep->chgBit(oldp+1234,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_clean_o));
            tracep->chgBit(oldp+1235,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_clean_t));
            tracep->chgBit(oldp+1236,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_i_ok));
            tracep->chgQData(oldp+1237,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_out_addr),64);
            tracep->chgWData(oldp+1239,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb),128);
            tracep->chgBit(oldp+1243,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_tag_ena1));
            tracep->chgWData(oldp+1244,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp),128);
            tracep->chgBit(oldp+1248,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_tag_ena2));
            tracep->chgCData(oldp+1249,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite_nxt),6);
            tracep->chgWData(oldp+1250,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__hitw_data_temp),128);
            tracep->chgQData(oldp+1254,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__strb_extection),64);
            tracep->chgQData(oldp+1256,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_out_addr),64);
            tracep->chgQData(oldp+1258,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_out_data),64);
            tracep->chgCData(oldp+1260,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_out_type),4);
            tracep->chgBit(oldp+1261,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_clean_o));
            tracep->chgBit(oldp+1262,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_clean_t));
            tracep->chgBit(oldp+1263,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_i_ok));
            tracep->chgQData(oldp+1264,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_out_addr),64);
            tracep->chgWData(oldp+1266,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb),128);
            tracep->chgBit(oldp+1270,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_tag_ena1));
            tracep->chgWData(oldp+1271,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp),128);
            tracep->chgBit(oldp+1275,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_tag_ena2));
            tracep->chgBit(oldp+1276,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__oteg_ena_i));
            tracep->chgCData(oldp+1277,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__oteg_addr_i),6);
            tracep->chgBit(oldp+1278,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__tteg_ena_i));
            tracep->chgCData(oldp+1279,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__tteg_addr_i),6);
            tracep->chgBit(oldp+1280,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_dcache_shankhand));
            tracep->chgBit(oldp+1281,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__write_dcache_shankhand));
            tracep->chgBit(oldp+1282,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_icache_shankhand));
            tracep->chgBit(oldp+1283,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_uncahce_shankhand));
            tracep->chgBit(oldp+1284,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__write_uncahce_shankhand));
            tracep->chgCData(oldp+1285,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state_n),3);
            tracep->chgBit(oldp+1286,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_dread));
            tracep->chgBit(oldp+1287,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_dwrite));
            tracep->chgBit(oldp+1288,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_iread));
            tracep->chgBit(oldp+1289,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_uncahceread));
            tracep->chgBit(oldp+1290,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_uncahcewrite));
            tracep->chgBit(oldp+1291,((((((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_dcache_shankhand) 
                                          | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__write_dcache_shankhand)) 
                                         | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_icache_shankhand)) 
                                        | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_uncahce_shankhand)) 
                                       | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__write_uncahce_shankhand))));
            tracep->chgBit(oldp+1292,((((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_valid) 
                                        >> 2U) & (IData)(vlSelf->ysyx_22040228__DOT__soc_axi_aw_ready))));
            tracep->chgBit(oldp+1293,((((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_valid) 
                                        >> 2U) & (IData)(vlSelf->ysyx_22040228__DOT__soc_axi_w_ready))));
            tracep->chgCData(oldp+1294,(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_write_state_nxt),2);
            tracep->chgBit(oldp+1295,(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__ar_shankhand));
            tracep->chgCData(oldp+1296,(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state_nxt),2);
            tracep->chgBit(oldp+1297,(vlSelf->ysyx_22040228__DOT__clint6__DOT__success_r));
            tracep->chgBit(oldp+1298,(vlSelf->ysyx_22040228__DOT__clint6__DOT__success_b));
            tracep->chgBit(oldp+1299,(vlSelf->ysyx_22040228__DOT__clint6__DOT__resp_success));
            tracep->chgQData(oldp+1300,(vlSelf->ysyx_22040228__DOT__clint6__DOT__wmask),64);
            tracep->chgCData(oldp+1302,(vlSelf->ysyx_22040228__DOT__clint6__DOT__timer_state_n),2);
            tracep->chgCData(oldp+1303,(vlSelf->ysyx_22040228__DOT__clint6__DOT__timew_state_n),2);
            tracep->chgBit(oldp+1304,((((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_valid) 
                                        >> 1U) & (0x200bff8ULL 
                                                  == 
                                                  (((QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[2U])))))));
            tracep->chgBit(oldp+1305,((((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_valid) 
                                        >> 1U) & (0x2004000ULL 
                                                  == 
                                                  (((QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[2U])))))));
            tracep->chgBit(oldp+1306,(((IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__success_aw) 
                                       & (0x200bff8ULL 
                                          == (((QData)((IData)(
                                                               vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[2U])))))));
            tracep->chgBit(oldp+1307,(((IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__success_aw) 
                                       & (0x2004000ULL 
                                          == (((QData)((IData)(
                                                               vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[2U])))))));
            tracep->chgBit(oldp+1308,(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__aw_shankhand));
            tracep->chgBit(oldp+1309,(((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_valid) 
                                       & (IData)(vlSelf->ysyx_22040228__DOT__io_axi_w_ready))));
            tracep->chgCData(oldp+1310,(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_write_state_nxt),2);
            tracep->chgBit(oldp+1311,(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__ar_shankhand));
            tracep->chgCData(oldp+1312,(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state_nxt),2);
        }
        tracep->chgBit(oldp+1313,(vlSelf->clk));
        tracep->chgBit(oldp+1314,(vlSelf->rst));
        tracep->chgQData(oldp+1315,(vlSelf->out_slave_addr_),64);
        tracep->chgQData(oldp+1317,(vlSelf->out_serial_data_),64);
        tracep->chgBit(oldp+1319,(vlSelf->out_serial_write_));
        tracep->chgBit(oldp+1320,(vlSelf->out_rtc_read_));
        tracep->chgQData(oldp+1321,(vlSelf->in_rtc_data_),64);
        tracep->chgBit(oldp+1323,(vlSelf->read_ena_sign_));
        tracep->chgQData(oldp+1324,(vlSelf->out_addr_outp),64);
        tracep->chgQData(oldp+1326,(vlSelf->read_data_sign_),64);
        tracep->chgBit(oldp+1328,(vlSelf->out_write_ram_ena));
        tracep->chgQData(oldp+1329,(vlSelf->out_write_ram_data),64);
        tracep->chgQData(oldp+1331,(vlSelf->out_write_ram_addr),64);
        tracep->chgCData(oldp+1333,(((IData)(vlSelf->rst)
                                      ? 7U : (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_inst_type) 
                                               & (0U 
                                                  == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel)))
                                               ? 0U
                                               : (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_inst_type) 
                                                   & (1U 
                                                      == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel)))
                                                   ? 1U
                                                   : 
                                                  (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_inst_type) 
                                                    & (2U 
                                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel)))
                                                    ? 2U
                                                    : 
                                                   (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_inst_type) 
                                                     & (3U 
                                                        == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel)))
                                                     ? 4U
                                                     : 7U)))))),3);
        tracep->chgCData(oldp+1334,(((IData)(vlSelf->rst)
                                      ? 7U : ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_inst_type) 
                                                >> 1U) 
                                               & ((0U 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel)) 
                                                  | (4U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel))))
                                               ? 0U
                                               : ((
                                                   ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_inst_type) 
                                                    >> 1U) 
                                                   & ((1U 
                                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel)) 
                                                      | (5U 
                                                         == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel))))
                                                   ? 1U
                                                   : 
                                                  ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_inst_type) 
                                                     >> 1U) 
                                                    & ((2U 
                                                        == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel)) 
                                                       | (6U 
                                                          == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel))))
                                                    ? 2U
                                                    : 
                                                   ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_inst_type) 
                                                      >> 1U) 
                                                     & (3U 
                                                        == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel)))
                                                     ? 4U
                                                     : 7U)))))),3);
        tracep->chgBit(oldp+1335,((1U & (~ (IData)(vlSelf->rst)))));
        tracep->chgBit(oldp+1336,((1U & ((~ (IData)(vlSelf->rst)) 
                                         & ((1U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                             ? (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_ready)
                                             : ((2U 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_ready) 
                                                 >> 1U)
                                                 : 
                                                (((IData)(vlSelf->ysyx_22040228__DOT__mmio_thing) 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_ready)) 
                                                 >> 2U)))))));
        tracep->chgBit(oldp+1337,((1U & ((~ (IData)(vlSelf->rst)) 
                                         & ((1U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                             ? (IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_ready)
                                             : ((2U 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_ready) 
                                                 >> 1U)
                                                 : 
                                                (((IData)(vlSelf->ysyx_22040228__DOT__mmio_thing) 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_ready)) 
                                                 >> 2U)))))));
        tracep->chgBit(oldp+1338,((1U & ((~ (IData)(vlSelf->rst)) 
                                         & ((1U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                             ? (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_ready)
                                             : ((2U 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_ready) 
                                                 >> 1U)
                                                 : 
                                                (((IData)(vlSelf->ysyx_22040228__DOT__mmio_thing) 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_ready)) 
                                                 >> 2U)))))));
        tracep->chgQData(oldp+1339,(((2U == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state))
                                      ? vlSelf->read_data_sign_
                                      : 0ULL)),64);
        tracep->chgQData(oldp+1341,(((2U == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state))
                                      ? vlSelf->in_rtc_data_
                                      : 0ULL)),64);
        tracep->chgQData(oldp+1343,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_regsf_ena) 
                                                  & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_addr) 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_regsf_addr))) 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_ena))
                                                 ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_dara
                                                 : 
                                                ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_regsf_ena) 
                                                   & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_addr) 
                                                      == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_regsf_addr))) 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_ena))
                                                  ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_dara
                                                  : 
                                                 ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_regsf_ena) 
                                                    & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_addr) 
                                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_regsf_addr))) 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_ena))
                                                   ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_dara
                                                   : 
                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                  [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_regsf_addr]))))),64);
        tracep->chgCData(oldp+1345,(((IData)(vlSelf->rst)
                                      ? 0U : (7U & 
                                              (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                               >> 0xcU)))),3);
        tracep->chgCData(oldp+1346,(((IData)(vlSelf->rst)
                                      ? 0U : (7U & 
                                              (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                               >> 0xcU)))),3);
        tracep->chgIData(oldp+1347,(((IData)(vlSelf->rst)
                                      ? 0U : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst)),32);
        tracep->chgIData(oldp+1348,(((IData)(vlSelf->rst)
                                      ? 0U : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst)),32);
        tracep->chgIData(oldp+1349,(((IData)(vlSelf->rst)
                                      ? 0U : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_inst)),32);
        tracep->chgQData(oldp+1350,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1ena) 
                                                  & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_addr) 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr))) 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_ena))
                                                 ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_dara
                                                 : 
                                                ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1ena) 
                                                   & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_addr) 
                                                      == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr))) 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_ena))
                                                  ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_dara
                                                  : 
                                                 ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1ena) 
                                                    & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_addr) 
                                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr))) 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_ena))
                                                   ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_dara
                                                   : 
                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                  [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr]))))),64);
        tracep->chgQData(oldp+1352,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2ena) 
                                                  & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_addr) 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr))) 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_ena))
                                                 ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_dara
                                                 : 
                                                ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2ena) 
                                                   & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_addr) 
                                                      == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr))) 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_ena))
                                                  ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_dara
                                                  : 
                                                 ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2ena) 
                                                    & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_addr) 
                                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr))) 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_ena))
                                                   ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_dara
                                                   : 
                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                  [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr]))))),64);
        tracep->chgQData(oldp+1354,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1ena) 
                                                  & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_addr) 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1addr))) 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_ena))
                                                 ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_dara
                                                 : 
                                                ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1ena) 
                                                   & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_addr) 
                                                      == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1addr))) 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_ena))
                                                  ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_dara
                                                  : 
                                                 ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1ena) 
                                                    & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_addr) 
                                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1addr))) 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_ena))
                                                   ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_dara
                                                   : 
                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                  [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1addr]))))),64);
        tracep->chgQData(oldp+1356,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2ena) 
                                                  & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_addr) 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr))) 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_ena))
                                                 ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_dara
                                                 : 
                                                ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2ena) 
                                                   & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_addr) 
                                                      == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr))) 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_ena))
                                                  ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_dara
                                                  : 
                                                 ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2ena) 
                                                    & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_addr) 
                                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr))) 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_ena))
                                                   ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_dara
                                                   : 
                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                  [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr]))))),64);
        tracep->chgQData(oldp+1358,((((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr1) 
                                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr2)) 
                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr3)) 
                                      | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr4))
                                      ? ((IData)(vlSelf->rst)
                                          ? 0ULL : 
                                         ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_regsf_ena) 
                                            & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_addr) 
                                               == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_regsf_addr))) 
                                           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_ena))
                                           ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_dara
                                           : ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_regsf_ena) 
                                                & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_addr) 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_regsf_addr))) 
                                               & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_ena))
                                               ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_dara
                                               : ((
                                                   ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_regsf_ena) 
                                                    & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_addr) 
                                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_regsf_addr))) 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_ena))
                                                   ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_dara
                                                   : 
                                                  vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                  [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_regsf_addr]))))
                                      : (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal1) 
                                          | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx1))
                                          ? vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr
                                          : (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal2) 
                                              | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx2))
                                              ? (4ULL 
                                                 + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)
                                              : (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal3) 
                                                  | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx3))
                                                  ? 
                                                 (8ULL 
                                                  + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)
                                                  : 
                                                 (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal4) 
                                                   | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx4))
                                                   ? 
                                                  (0xcULL 
                                                   + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)
                                                   : vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)))))),64);
        tracep->chgQData(oldp+1360,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((1U 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                            >> 2U)))
                                                 ? 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                             >> 1U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data)))) 
                                                   << 0x38U)
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data)))) 
                                                   << 0x30U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data)))) 
                                                   << 0x28U)
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data)))) 
                                                   << 0x20U)))
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                             >> 1U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data)))) 
                                                   << 0x18U)
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data)))) 
                                                   << 0x10U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data)))) 
                                                   << 8U)
                                                   : (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data))))))))),64);
        tracep->chgQData(oldp+1362,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                             >> 1U))))
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data))))
                                                 : 
                                                ((1U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                              >> 1U))))
                                                  ? 
                                                 ((QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data)))) 
                                                  << 0x10U)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                               >> 1U))))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data)))) 
                                                   << 0x20U)
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data)))) 
                                                   << 0x30U)))))),64);
        tracep->chgQData(oldp+1364,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((1U 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                            >> 2U)))
                                                 ? 
                                                ((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data)) 
                                                 << 0x20U)
                                                 : (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data))))),64);
        tracep->chgCData(oldp+1366,(((IData)(vlSelf->rst)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset))
                                                    ? 0x80U
                                                    : 0x40U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset))
                                                    ? 0x20U
                                                    : 0x10U))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset))
                                                    ? 8U
                                                    : 4U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset))
                                                    ? 2U
                                                    : 1U))))),8);
        tracep->chgCData(oldp+1367,(((IData)(vlSelf->rst)
                                      ? 0U : ((0U == 
                                               (3U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                           >> 1U))))
                                               ? 3U
                                               : ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                               >> 1U))))
                                                   ? 0xcU
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                                >> 1U))))
                                                    ? 0x30U
                                                    : 0xc0U))))),8);
        tracep->chgCData(oldp+1368,(((IData)(vlSelf->rst)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                             >> 2U)))
                                               ? 0xf0U
                                               : 0xfU))),8);
        tracep->chgBit(oldp+1369,((1U & (((~ (IData)(vlSelf->rst)) 
                                          & ((1U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                              ? (IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_ready)
                                              : ((2U 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                                  ? 
                                                 ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_ready) 
                                                  >> 1U)
                                                  : 
                                                 (((IData)(vlSelf->ysyx_22040228__DOT__mmio_thing) 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_ready)) 
                                                  >> 2U)))) 
                                         | ((~ (IData)(vlSelf->rst)) 
                                            & ((1U 
                                                & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                                ? (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_ready)
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                                    ? 
                                                   ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_ready) 
                                                    >> 1U)
                                                    : 
                                                   (((IData)(vlSelf->ysyx_22040228__DOT__mmio_thing) 
                                                     & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_ready)) 
                                                    >> 2U))))))));
    }
}

void Vysyx_22040228___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vysyx_22040228___024root* const __restrict vlSelf = static_cast<Vysyx_22040228___024root*>(voidSelf);
    Vysyx_22040228__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
