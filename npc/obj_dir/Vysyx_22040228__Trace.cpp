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

void Vysyx_22040228___024root__traceChgSub0(Vysyx_22040228___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040228__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp653;
    VlWide<4>/*127:0*/ __Vtemp656;
    VlWide<4>/*127:0*/ __Vtemp663;
    VlWide<4>/*127:0*/ __Vtemp668;
    VlWide<4>/*127:0*/ __Vtemp675;
    VlWide<4>/*127:0*/ __Vtemp680;
    VlWide<4>/*127:0*/ __Vtemp688;
    VlWide<4>/*127:0*/ __Vtemp696;
    VlWide<4>/*127:0*/ __Vtemp697;
    VlWide<4>/*127:0*/ __Vtemp706;
    VlWide<4>/*127:0*/ __Vtemp707;
    VlWide<4>/*127:0*/ __Vtemp723;
    VlWide<4>/*127:0*/ __Vtemp730;
    VlWide<4>/*127:0*/ __Vtemp731;
    VlWide<4>/*127:0*/ __Vtemp748;
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
                                     & ((4U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                        & ((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_empty)) 
                                           | (((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_data_r 
                                                == 
                                                (0x3fffffU 
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
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r))))))));
            tracep->chgWData(oldp+17,(vlSelf->ysyx_22040228__DOT__i_cache_pc),256);
            tracep->chgQData(oldp+25,(vlSelf->ysyx_22040228__DOT__arbitrate_d_data),64);
            tracep->chgBit(oldp+27,(vlSelf->ysyx_22040228__DOT__arbitrate_d_ok));
            tracep->chgQData(oldp+28,(vlSelf->ysyx_22040228__DOT__arbitrate_i_data),64);
            tracep->chgBit(oldp+30,(vlSelf->ysyx_22040228__DOT__arbitrate_i_ok));
            tracep->chgCData(oldp+31,(vlSelf->ysyx_22040228__DOT__t_axi_aw_id),4);
            tracep->chgCData(oldp+32,(vlSelf->ysyx_22040228__DOT__t_axi_aw_size),3);
            tracep->chgBit(oldp+33,(vlSelf->ysyx_22040228__DOT__t_axi_aw_valid));
            tracep->chgBit(oldp+34,(vlSelf->ysyx_22040228__DOT__t_axi_w_valid));
            tracep->chgCData(oldp+35,(vlSelf->ysyx_22040228__DOT__t_axi_ar_id),4);
            tracep->chgCData(oldp+36,(vlSelf->ysyx_22040228__DOT__t_axi_ar_size),3);
            tracep->chgBit(oldp+37,(vlSelf->ysyx_22040228__DOT__t_axi_ar_valid));
            tracep->chgCData(oldp+38,(vlSelf->ysyx_22040228__DOT__add_axi_b_valid),3);
            tracep->chgCData(oldp+39,(vlSelf->ysyx_22040228__DOT__add_axi_ar_ready),3);
            tracep->chgCData(oldp+40,(vlSelf->ysyx_22040228__DOT__add_axi_r_last),3);
            tracep->chgCData(oldp+41,(vlSelf->ysyx_22040228__DOT__add_axi_r_valid),3);
            tracep->chgCData(oldp+42,(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__r_s_axi_aw_id),4);
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
            tracep->chgBit(oldp+65,(((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr1) 
                                     | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr2) 
                                        | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr3) 
                                           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr4))))));
            tracep->chgCData(oldp+66,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__check_pcif),4);
            tracep->chgBit(oldp+67,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jread1));
            tracep->chgBit(oldp+68,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jread2));
            tracep->chgQData(oldp+69,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_pc),64);
            tracep->chgIData(oldp+71,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst),32);
            tracep->chgQData(oldp+72,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_pc),64);
            tracep->chgIData(oldp+74,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst),32);
            tracep->chgCData(oldp+75,((0xfU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                               >> 2U))),4);
            tracep->chgCData(oldp+76,((0xfU & (IData)(
                                                      (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_pc 
                                                       >> 2U)))),4);
            tracep->chgCData(oldp+77,((0xfU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                               >> 2U))),4);
            tracep->chgCData(oldp+78,((0xfU & (IData)(
                                                      (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_pc 
                                                       >> 2U)))),4);
            tracep->chgBit(oldp+79,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_timer_init));
            tracep->chgQData(oldp+80,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_pc),64);
            tracep->chgIData(oldp+82,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst),32);
            tracep->chgCData(oldp+83,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_type),8);
            tracep->chgCData(oldp+84,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode),8);
            tracep->chgQData(oldp+85,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data),64);
            tracep->chgQData(oldp+87,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data),64);
            tracep->chgBit(oldp+89,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_rd_ena));
            tracep->chgCData(oldp+90,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_rd_addr),5);
            tracep->chgQData(oldp+91,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_pc),64);
            tracep->chgIData(oldp+93,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst),32);
            tracep->chgCData(oldp+94,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_type),8);
            tracep->chgCData(oldp+95,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode),8);
            tracep->chgQData(oldp+96,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data),64);
            tracep->chgQData(oldp+98,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data),64);
            tracep->chgBit(oldp+100,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_rd_ena));
            tracep->chgCData(oldp+101,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_rd_addr),5);
            tracep->chgQData(oldp+102,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_pc),64);
            tracep->chgIData(oldp+104,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_inst),32);
            tracep->chgCData(oldp+105,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_inst_type),8);
            tracep->chgQData(oldp+106,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data),64);
            tracep->chgBit(oldp+108,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_rd_ena));
            tracep->chgCData(oldp+109,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_rd_addr),5);
            tracep->chgQData(oldp+110,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset),64);
            tracep->chgCData(oldp+112,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel),3);
            tracep->chgBit(oldp+113,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_ena));
            tracep->chgBit(oldp+114,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_div_req));
            tracep->chgQData(oldp+115,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_pc_pc),64);
            tracep->chgBit(oldp+117,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__trap_ena));
            tracep->chgBit(oldp+118,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_div_req));
            tracep->chgQData(oldp+119,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_pc),64);
            tracep->chgQData(oldp+121,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_dara),64);
            tracep->chgCData(oldp+123,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_addr),5);
            tracep->chgIData(oldp+124,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_inst),32);
            tracep->chgBit(oldp+125,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_ena));
            tracep->chgQData(oldp+126,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_pc),64);
            tracep->chgQData(oldp+128,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_dara),64);
            tracep->chgCData(oldp+130,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_addr),5);
            tracep->chgIData(oldp+131,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_inst),32);
            tracep->chgBit(oldp+132,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_ena));
            tracep->chgQData(oldp+133,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_pc),64);
            tracep->chgQData(oldp+135,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_dara),64);
            tracep->chgCData(oldp+137,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_addr),5);
            tracep->chgBit(oldp+138,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_ena));
            tracep->chgQData(oldp+139,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data0),64);
            tracep->chgCData(oldp+141,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr0),5);
            tracep->chgBit(oldp+142,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena0));
            tracep->chgQData(oldp+143,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data1),64);
            tracep->chgCData(oldp+145,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr1),5);
            tracep->chgBit(oldp+146,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena1));
            tracep->chgQData(oldp+147,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data2),64);
            tracep->chgCData(oldp+149,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr2),5);
            tracep->chgBit(oldp+150,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena2));
            tracep->chgQData(oldp+151,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data3),64);
            tracep->chgCData(oldp+153,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr3),5);
            tracep->chgBit(oldp+154,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena3));
            tracep->chgQData(oldp+155,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data4),64);
            tracep->chgCData(oldp+157,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr4),5);
            tracep->chgBit(oldp+158,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena4));
            tracep->chgQData(oldp+159,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data5),64);
            tracep->chgCData(oldp+161,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr5),5);
            tracep->chgBit(oldp+162,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena5));
            tracep->chgQData(oldp+163,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data6),64);
            tracep->chgCData(oldp+165,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr6),5);
            tracep->chgBit(oldp+166,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena6));
            tracep->chgQData(oldp+167,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data7),64);
            tracep->chgCData(oldp+169,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr7),5);
            tracep->chgBit(oldp+170,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena7));
            tracep->chgQData(oldp+171,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_datag),64);
            tracep->chgCData(oldp+173,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addrg),5);
            tracep->chgBit(oldp+174,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_enag));
            tracep->chgIData(oldp+175,(vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U]),32);
            tracep->chgIData(oldp+176,(vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U]),32);
            tracep->chgIData(oldp+177,(vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U]),32);
            tracep->chgIData(oldp+178,(vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U]),32);
            tracep->chgIData(oldp+179,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm1),20);
            tracep->chgSData(oldp+180,((vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U] 
                                        >> 0x14U)),12);
            tracep->chgSData(oldp+181,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm1),12);
            tracep->chgIData(oldp+182,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm2),20);
            tracep->chgSData(oldp+183,((vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U] 
                                        >> 0x14U)),12);
            tracep->chgSData(oldp+184,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm2),12);
            tracep->chgIData(oldp+185,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm3),20);
            tracep->chgSData(oldp+186,((vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] 
                                        >> 0x14U)),12);
            tracep->chgSData(oldp+187,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm3),12);
            tracep->chgIData(oldp+188,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm4),20);
            tracep->chgSData(oldp+189,((vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] 
                                        >> 0x14U)),12);
            tracep->chgSData(oldp+190,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm4),12);
            tracep->chgCData(oldp+191,((0x7fU & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U])),7);
            tracep->chgCData(oldp+192,((0x7fU & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U])),7);
            tracep->chgCData(oldp+193,((0x7fU & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U])),7);
            tracep->chgCData(oldp+194,((0x7fU & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U])),7);
            tracep->chgBit(oldp+195,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal1));
            tracep->chgBit(oldp+196,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr1));
            tracep->chgBit(oldp+197,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx1));
            tracep->chgBit(oldp+198,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal2));
            tracep->chgBit(oldp+199,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr2));
            tracep->chgBit(oldp+200,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx2));
            tracep->chgBit(oldp+201,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal3));
            tracep->chgBit(oldp+202,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr3));
            tracep->chgBit(oldp+203,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx3));
            tracep->chgBit(oldp+204,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal4));
            tracep->chgBit(oldp+205,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr4));
            tracep->chgBit(oldp+206,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx4));
            tracep->chgQData(oldp+207,((4ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)),64);
            tracep->chgQData(oldp+209,((8ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)),64);
            tracep->chgQData(oldp+211,((0xcULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)),64);
            tracep->chgBit(oldp+213,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena1));
            tracep->chgBit(oldp+214,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena2));
            tracep->chgBit(oldp+215,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena3));
            tracep->chgBit(oldp+216,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena4));
            tracep->chgCData(oldp+217,(((0U == (0xfU 
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
            tracep->chgBit(oldp+218,((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__i_cache_inst_valid)))));
            tracep->chgCData(oldp+219,(((0xcU == (0xfU 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_pc_pc)))
                                         ? 1U : ((8U 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_pc_pc)))
                                                  ? 2U
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_pc_pc)))
                                                   ? 3U
                                                   : 4U)))),3);
            tracep->chgCData(oldp+220,(((0xcU == (0xfU 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_temp)))
                                         ? 1U : ((8U 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_temp)))
                                                  ? 2U
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_temp)))
                                                   ? 3U
                                                   : 4U)))),3);
            tracep->chgQData(oldp+221,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_temp),64);
            tracep->chgBit(oldp+223,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_temp_ena));
            tracep->chgCData(oldp+224,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[0]),4);
            tracep->chgCData(oldp+225,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[1]),4);
            tracep->chgCData(oldp+226,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[2]),4);
            tracep->chgCData(oldp+227,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[3]),4);
            tracep->chgCData(oldp+228,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[4]),4);
            tracep->chgCData(oldp+229,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[5]),4);
            tracep->chgCData(oldp+230,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[6]),4);
            tracep->chgCData(oldp+231,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[7]),4);
            tracep->chgCData(oldp+232,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[8]),4);
            tracep->chgCData(oldp+233,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[9]),4);
            tracep->chgCData(oldp+234,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[10]),4);
            tracep->chgCData(oldp+235,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[11]),4);
            tracep->chgCData(oldp+236,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[12]),4);
            tracep->chgCData(oldp+237,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[13]),4);
            tracep->chgCData(oldp+238,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[14]),4);
            tracep->chgCData(oldp+239,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[15]),4);
            tracep->chgCData(oldp+240,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addo),3);
            tracep->chgCData(oldp+241,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadt),3);
            tracep->chgCData(oldp+242,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadw),3);
            tracep->chgWData(oldp+243,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc),256);
            tracep->chgWData(oldp+251,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst),128);
            tracep->chgWData(oldp+255,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc),256);
            tracep->chgWData(oldp+263,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst),128);
            tracep->chgBit(oldp+267,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__clean_temp));
            tracep->chgBit(oldp+268,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_clean));
            tracep->chgCData(oldp+269,((0x7fU & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)),7);
            tracep->chgCData(oldp+270,((0x1fU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+271,((7U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                              >> 0xcU))),3);
            tracep->chgSData(oldp+272,((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                        >> 0x14U)),12);
            tracep->chgCData(oldp+273,((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+274,((0x1fU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                 >> 0x14U))),5);
            tracep->chgIData(oldp+275,((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                        >> 0xcU)),20);
            tracep->chgSData(oldp+276,(((0xfe0U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                            >> 7U)))),12);
            tracep->chgSData(oldp+277,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__b_imm),12);
            tracep->chgBit(oldp+278,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_fence_i));
            tracep->chgCData(oldp+279,((0x7fU & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)),7);
            tracep->chgCData(oldp+280,((0x1fU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+281,((7U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                              >> 0xcU))),3);
            tracep->chgSData(oldp+282,((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                        >> 0x14U)),12);
            tracep->chgCData(oldp+283,((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+284,((0x1fU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                 >> 0x14U))),5);
            tracep->chgIData(oldp+285,((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                        >> 0xcU)),20);
            tracep->chgSData(oldp+286,(((0xfe0U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                            >> 7U)))),12);
            tracep->chgSData(oldp+287,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__b_imm),12);
            tracep->chgBit(oldp+288,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_fence_i));
            tracep->chgCData(oldp+289,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__reg_exe_name[0]),5);
            tracep->chgCData(oldp+290,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__reg_exe_name[1]),5);
            tracep->chgCData(oldp+291,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__reg_exe_name[2]),5);
            tracep->chgQData(oldp+292,((1ULL + (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data))),64);
            tracep->chgQData(oldp+294,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_sub_op2),64);
            tracep->chgQData(oldp+296,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_add_op2),64);
            tracep->chgQData(oldp+298,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_addw_op2),64);
            tracep->chgBit(oldp+300,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_ls_op2));
            tracep->chgQData(oldp+301,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__shift_res),64);
            tracep->chgIData(oldp+303,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_sllw_op2),32);
            tracep->chgQData(oldp+304,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__sllw_res),64);
            tracep->chgIData(oldp+306,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_srlw_op2),32);
            tracep->chgQData(oldp+307,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__srlw_res),64);
            tracep->chgIData(oldp+309,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_sraw_op2),32);
            tracep->chgQData(oldp+310,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__sraw_res),64);
            tracep->chgIData(oldp+312,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_subw_op2),32);
            tracep->chgQData(oldp+313,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_subw_op2 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_subw_op2)))),64);
            tracep->chgQData(oldp+315,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__upper_imm),64);
            tracep->chgQData(oldp+317,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_data),64);
            tracep->chgBit(oldp+319,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_finish_sign));
            tracep->chgBit(oldp+320,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_ready));
            tracep->chgBit(oldp+321,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__finish));
            tracep->chgBit(oldp+322,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__dr_ready));
            tracep->chgQData(oldp+323,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_divdata),64);
            tracep->chgQData(oldp+325,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op2_divdata),64);
            tracep->chgBit(oldp+327,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena));
            tracep->chgSData(oldp+328,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx),12);
            tracep->chgQData(oldp+329,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__read_csr_data),64);
            tracep->chgBit(oldp+331,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena));
            tracep->chgBit(oldp+332,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__cmt_mret_ena));
            tracep->chgBit(oldp+333,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en));
            tracep->chgBit(oldp+334,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en));
            tracep->chgQData(oldp+335,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data),64);
            tracep->chgQData(oldp+337,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__trap_mcause_value),64);
            tracep->chgQData(oldp+339,((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__read_csr_data 
                                        | vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data)),64);
            tracep->chgQData(oldp+341,((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__read_csr_data 
                                        & (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data))),64);
            tracep->chgBit(oldp+343,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__mult_valid));
            tracep->chgBit(oldp+344,((1U & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                                                    >> 0x3fU)))));
            tracep->chgBit(oldp+345,((1U & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data 
                                                    >> 0x3fU)))));
            tracep->chgQData(oldp+346,(((1U & (IData)(
                                                      (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                                                       >> 0x3fU)))
                                         ? (1ULL + 
                                            (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data))
                                         : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data)),64);
            tracep->chgQData(oldp+348,(((1U & (IData)(
                                                      (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data 
                                                       >> 0x3fU)))
                                         ? (1ULL + 
                                            (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data))
                                         : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data)),64);
            tracep->chgWData(oldp+350,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand),128);
            tracep->chgQData(oldp+354,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multipler),64);
            if ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multipler))) {
                __Vtemp653[0U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[0U];
                __Vtemp653[1U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[1U];
                __Vtemp653[2U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[2U];
                __Vtemp653[3U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[3U];
            } else {
                __Vtemp653[0U] = 0U;
                __Vtemp653[1U] = 0U;
                __Vtemp653[2U] = 0U;
                __Vtemp653[3U] = 0U;
            }
            tracep->chgWData(oldp+356,(__Vtemp653),128);
            tracep->chgWData(oldp+360,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp),128);
            tracep->chgBit(oldp+364,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_signbit));
            tracep->chgCData(oldp+365,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__counter),7);
            tracep->chgBit(oldp+366,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__sign));
            tracep->chgQData(oldp+367,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__dividend_t),64);
            tracep->chgQData(oldp+369,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__divider_t),64);
            tracep->chgWData(oldp+371,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a),129);
            tracep->chgWData(oldp+376,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_b),65);
            tracep->chgBit(oldp+379,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__sigin_inst));
            tracep->chgBit(oldp+380,((0xb00U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx))));
            tracep->chgBit(oldp+381,(((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en) 
                                      & (0xb00U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)))));
            tracep->chgBit(oldp+382,(((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en) 
                                      & (0xb00U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)))));
            tracep->chgQData(oldp+383,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mcycle),64);
            tracep->chgBit(oldp+385,((0x300U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx))));
            tracep->chgBit(oldp+386,(((0x300U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en))));
            tracep->chgBit(oldp+387,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mstatus));
            tracep->chgBit(oldp+388,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__mstatus_mpie_ena));
            tracep->chgBit(oldp+389,((1U & (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena) 
                                             | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena))
                                             ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mie)
                                             : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__cmt_mret_ena) 
                                                | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mstatus)
                                                    ? (IData)(
                                                              (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data 
                                                               >> 7U))
                                                    : (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mpie)))))));
            tracep->chgBit(oldp+390,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mpie));
            tracep->chgBit(oldp+391,((1U & ((~ ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena) 
                                                | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena))) 
                                            & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__cmt_mret_ena)
                                                ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mpie)
                                                : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mstatus)
                                                    ? (IData)(
                                                              (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data 
                                                               >> 3U))
                                                    : (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mie)))))));
            tracep->chgBit(oldp+392,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mie));
            tracep->chgCData(oldp+393,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena) 
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
            tracep->chgCData(oldp+394,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mpp),2);
            tracep->chgCData(oldp+395,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_fs),2);
            tracep->chgBit(oldp+396,((3U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_fs))));
            tracep->chgQData(oldp+397,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus),64);
            tracep->chgBit(oldp+399,((0x305U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx))));
            tracep->chgBit(oldp+400,(((((0x305U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                        & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en)) 
                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena)) 
                                      | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena))));
            tracep->chgBit(oldp+401,(((0x305U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en))));
            tracep->chgQData(oldp+402,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mtvec_base),62);
            tracep->chgQData(oldp+404,((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mtvec_base 
                                        << 2U)),64);
            tracep->chgBit(oldp+406,((0x341U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx))));
            tracep->chgBit(oldp+407,((((0x341U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                       & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en)) 
                                      | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__cmt_mret_ena))));
            tracep->chgBit(oldp+408,(((((0x341U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                        & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en)) 
                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena)) 
                                      | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena))));
            tracep->chgQData(oldp+409,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mepc),64);
            tracep->chgBit(oldp+411,((0x342U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx))));
            tracep->chgBit(oldp+412,(((0x342U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en))));
            tracep->chgBit(oldp+413,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mcause));
            tracep->chgBit(oldp+414,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mcause) 
                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena)) 
                                      | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena))));
            tracep->chgQData(oldp+415,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena) 
                                         | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena))
                                         ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__trap_mcause_value
                                         : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mcause)
                                             ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data
                                             : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mcause))),64);
            tracep->chgQData(oldp+417,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mcause),64);
            tracep->chgBit(oldp+419,((0x304U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx))));
            tracep->chgBit(oldp+420,(((0x304U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en))));
            tracep->chgBit(oldp+421,(((0x304U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en))));
            tracep->chgBit(oldp+422,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mie_mtie));
            tracep->chgQData(oldp+423,(((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mie_mtie)) 
                                        << 7U)),64);
            tracep->chgBit(oldp+425,((0x344U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx))));
            tracep->chgBit(oldp+426,(((0x344U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en))));
            tracep->chgBit(oldp+427,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mip_mtip));
            tracep->chgQData(oldp+428,((QData)((IData)(
                                                       ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mip_mtip) 
                                                        << 7U)))),64);
            tracep->chgBit(oldp+430,((0x340U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx))));
            tracep->chgBit(oldp+431,(((0x340U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en))));
            tracep->chgBit(oldp+432,(((0x340U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en))));
            tracep->chgQData(oldp+433,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mscrstch),64);
            tracep->chgBit(oldp+435,((0xf11U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx))));
            tracep->chgBit(oldp+436,(((0xf11U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en))));
            tracep->chgQData(oldp+437,((1ULL + (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data))),64);
            tracep->chgQData(oldp+439,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_sub_op2),64);
            tracep->chgQData(oldp+441,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_add_op2),64);
            tracep->chgQData(oldp+443,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_addw_op2),64);
            tracep->chgBit(oldp+445,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_ls_op2));
            tracep->chgQData(oldp+446,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__shift_res),64);
            tracep->chgIData(oldp+448,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_sllw_op2),32);
            tracep->chgQData(oldp+449,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__sllw_res),64);
            tracep->chgIData(oldp+451,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_srlw_op2),32);
            tracep->chgQData(oldp+452,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__srlw_res),64);
            tracep->chgIData(oldp+454,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_sraw_op2),32);
            tracep->chgQData(oldp+455,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__sraw_res),64);
            tracep->chgIData(oldp+457,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_subw_op2),32);
            tracep->chgQData(oldp+458,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_subw_op2 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_subw_op2)))),64);
            tracep->chgQData(oldp+460,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__upper_imm),64);
            tracep->chgQData(oldp+462,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_data),64);
            tracep->chgBit(oldp+464,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_finish_sign));
            tracep->chgBit(oldp+465,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_ready));
            tracep->chgBit(oldp+466,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__finish));
            tracep->chgBit(oldp+467,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__dr_ready));
            tracep->chgQData(oldp+468,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_divdata),64);
            tracep->chgQData(oldp+470,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op2_divdata),64);
            tracep->chgBit(oldp+472,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__mult_valid));
            tracep->chgBit(oldp+473,((1U & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                                                    >> 0x3fU)))));
            tracep->chgBit(oldp+474,((1U & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data 
                                                    >> 0x3fU)))));
            tracep->chgQData(oldp+475,(((1U & (IData)(
                                                      (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                                                       >> 0x3fU)))
                                         ? (1ULL + 
                                            (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data))
                                         : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data)),64);
            tracep->chgQData(oldp+477,(((1U & (IData)(
                                                      (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data 
                                                       >> 0x3fU)))
                                         ? (1ULL + 
                                            (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data))
                                         : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data)),64);
            tracep->chgWData(oldp+479,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand),128);
            tracep->chgQData(oldp+483,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multipler),64);
            if ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multipler))) {
                __Vtemp656[0U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[0U];
                __Vtemp656[1U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[1U];
                __Vtemp656[2U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[2U];
                __Vtemp656[3U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[3U];
            } else {
                __Vtemp656[0U] = 0U;
                __Vtemp656[1U] = 0U;
                __Vtemp656[2U] = 0U;
                __Vtemp656[3U] = 0U;
            }
            tracep->chgWData(oldp+485,(__Vtemp656),128);
            tracep->chgWData(oldp+489,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp),128);
            tracep->chgBit(oldp+493,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_signbit));
            tracep->chgCData(oldp+494,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__counter),7);
            tracep->chgBit(oldp+495,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__sign));
            tracep->chgQData(oldp+496,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__dividend_t),64);
            tracep->chgQData(oldp+498,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__divider_t),64);
            tracep->chgWData(oldp+500,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a),129);
            tracep->chgWData(oldp+505,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_b),65);
            tracep->chgBit(oldp+508,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__sigin_inst));
            tracep->chgCData(oldp+509,((7U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset))),3);
            tracep->chgCData(oldp+510,((3U & (IData)(
                                                     (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                      >> 1U)))),2);
            tracep->chgBit(oldp+511,((1U & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                    >> 2U)))));
            tracep->chgWData(oldp+512,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff[0]),67);
            tracep->chgWData(oldp+515,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff[1]),67);
            tracep->chgWData(oldp+518,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff[2]),67);
            tracep->chgWData(oldp+521,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff[3]),67);
            tracep->chgWData(oldp+524,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff[4]),67);
            tracep->chgWData(oldp+527,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff[5]),67);
            tracep->chgWData(oldp+530,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff[6]),67);
            tracep->chgWData(oldp+533,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff[7]),67);
            tracep->chgCData(oldp+536,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_addrbuff[0]),5);
            tracep->chgCData(oldp+537,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_addrbuff[1]),5);
            tracep->chgCData(oldp+538,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_addrbuff[2]),5);
            tracep->chgCData(oldp+539,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_addrbuff[3]),5);
            tracep->chgCData(oldp+540,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_addrbuff[4]),5);
            tracep->chgCData(oldp+541,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_addrbuff[5]),5);
            tracep->chgCData(oldp+542,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_addrbuff[6]),5);
            tracep->chgCData(oldp+543,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_addrbuff[7]),5);
            tracep->chgQData(oldp+544,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_databuff[0]),64);
            tracep->chgQData(oldp+546,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_databuff[1]),64);
            tracep->chgQData(oldp+548,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_databuff[2]),64);
            tracep->chgQData(oldp+550,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_databuff[3]),64);
            tracep->chgQData(oldp+552,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_databuff[4]),64);
            tracep->chgQData(oldp+554,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_databuff[5]),64);
            tracep->chgQData(oldp+556,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_databuff[6]),64);
            tracep->chgQData(oldp+558,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_databuff[7]),64);
            tracep->chgBit(oldp+560,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_enabuff[0]));
            tracep->chgBit(oldp+561,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_enabuff[1]));
            tracep->chgBit(oldp+562,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_enabuff[2]));
            tracep->chgBit(oldp+563,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_enabuff[3]));
            tracep->chgBit(oldp+564,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_enabuff[4]));
            tracep->chgBit(oldp+565,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_enabuff[5]));
            tracep->chgBit(oldp+566,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_enabuff[6]));
            tracep->chgBit(oldp+567,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_enabuff[7]));
            tracep->chgBit(oldp+568,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_validbuff[0]));
            tracep->chgBit(oldp+569,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_validbuff[1]));
            tracep->chgBit(oldp+570,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_validbuff[2]));
            tracep->chgBit(oldp+571,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_validbuff[3]));
            tracep->chgBit(oldp+572,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_validbuff[4]));
            tracep->chgBit(oldp+573,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_validbuff[5]));
            tracep->chgBit(oldp+574,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_validbuff[6]));
            tracep->chgBit(oldp+575,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_validbuff[7]));
            tracep->chgWData(oldp+576,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__old_ready),67);
            tracep->chgBit(oldp+579,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__diff_ena));
            tracep->chgCData(oldp+580,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__clean_submcont),8);
            tracep->chgQData(oldp+581,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[0]),64);
            tracep->chgQData(oldp+583,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[1]),64);
            tracep->chgQData(oldp+585,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[2]),64);
            tracep->chgQData(oldp+587,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[3]),64);
            tracep->chgQData(oldp+589,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[4]),64);
            tracep->chgQData(oldp+591,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[5]),64);
            tracep->chgQData(oldp+593,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[6]),64);
            tracep->chgQData(oldp+595,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[7]),64);
            tracep->chgQData(oldp+597,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[8]),64);
            tracep->chgQData(oldp+599,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[9]),64);
            tracep->chgQData(oldp+601,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[10]),64);
            tracep->chgQData(oldp+603,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[11]),64);
            tracep->chgQData(oldp+605,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[12]),64);
            tracep->chgQData(oldp+607,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[13]),64);
            tracep->chgQData(oldp+609,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[14]),64);
            tracep->chgQData(oldp+611,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[15]),64);
            tracep->chgQData(oldp+613,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[16]),64);
            tracep->chgQData(oldp+615,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[17]),64);
            tracep->chgQData(oldp+617,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[18]),64);
            tracep->chgQData(oldp+619,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[19]),64);
            tracep->chgQData(oldp+621,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[20]),64);
            tracep->chgQData(oldp+623,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[21]),64);
            tracep->chgQData(oldp+625,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[22]),64);
            tracep->chgQData(oldp+627,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[23]),64);
            tracep->chgQData(oldp+629,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[24]),64);
            tracep->chgQData(oldp+631,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[25]),64);
            tracep->chgQData(oldp+633,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[26]),64);
            tracep->chgQData(oldp+635,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[27]),64);
            tracep->chgQData(oldp+637,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[28]),64);
            tracep->chgQData(oldp+639,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[29]),64);
            tracep->chgQData(oldp+641,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[30]),64);
            tracep->chgQData(oldp+643,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[31]),64);
            tracep->chgIData(oldp+645,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__i),32);
            tracep->chgIData(oldp+646,((0x3fffffU & (IData)(
                                                            (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                             >> 0xaU)))),22);
            tracep->chgCData(oldp+647,((0x3fU & (IData)(
                                                        (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                         >> 4U)))),6);
            tracep->chgCData(oldp+648,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst),6);
            tracep->chgCData(oldp+649,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__fence_counter),7);
            tracep->chgBit(oldp+650,((0x20U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))));
            tracep->chgBit(oldp+651,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__read_ok));
            tracep->chgBit(oldp+652,(((4U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
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
            tracep->chgWData(oldp+653,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_),256);
            tracep->chgWData(oldp+661,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_),128);
            tracep->chgBit(oldp+665,(((4U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                      & ((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_empty)) 
                                         | (((vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_data_r 
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
            tracep->chgBit(oldp+666,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__write_i_ok));
            tracep->chgBit(oldp+667,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cahce_miss_ena));
            tracep->chgQData(oldp+668,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cache_miss_addr),64);
            tracep->chgBit(oldp+670,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__write_m_ok));
            tracep->chgBit(oldp+671,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cache_mism_ena));
            tracep->chgQData(oldp+672,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cahce_mism_addr),64);
            tracep->chgCData(oldp+674,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl),2);
            tracep->chgCData(oldp+675,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl_n),2);
            tracep->chgWData(oldp+676,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date),128);
            tracep->chgBit(oldp+680,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o));
            tracep->chgBit(oldp+681,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t));
            tracep->chgCData(oldp+682,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh),3);
            tracep->chgCData(oldp+683,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh_n),3);
            tracep->chgWData(oldp+684,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data),128);
            tracep->chgBit(oldp+688,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o));
            tracep->chgBit(oldp+689,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t));
            tracep->chgBit(oldp+690,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__oteg_ena_i));
            tracep->chgBit(oldp+691,((0xa8U != (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))));
            tracep->chgIData(oldp+692,(((0xa8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                         ? 0U : (0x3fffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                            >> 0xaU))))),22);
            tracep->chgCData(oldp+693,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__oteg_addr_i),6);
            tracep->chgIData(oldp+694,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_data_r),22);
            tracep->chgBit(oldp+695,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r));
            tracep->chgBit(oldp+696,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__tteg_ena_i));
            tracep->chgIData(oldp+697,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_data_r),22);
            tracep->chgBit(oldp+698,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r));
            tracep->chgWData(oldp+699,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outo),128);
            if (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                 & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o))) {
                __Vtemp663[0U] = 0xffffffffU;
                __Vtemp663[1U] = 0xffffffffU;
                __Vtemp663[2U] = 0xffffffffU;
                __Vtemp663[3U] = 0xffffffffU;
            } else {
                __Vtemp663[0U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                   ? 0xffffffffU : 0U);
                __Vtemp663[1U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                   ? 0xffffffffU : 0U);
                __Vtemp663[2U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                   ? 0xffffffffU : 0U);
                __Vtemp663[3U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                   ? 0xffffffffU : 0U);
            }
            tracep->chgWData(oldp+703,(__Vtemp663),128);
            if (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                 & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o))) {
                __Vtemp668[0U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[0U];
                __Vtemp668[1U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[1U];
                __Vtemp668[2U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[2U];
                __Vtemp668[3U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[3U];
            } else {
                __Vtemp668[0U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                   ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[0U]
                                   : 0U);
                __Vtemp668[1U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                   ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[1U]
                                   : 0U);
                __Vtemp668[2U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                   ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[2U]
                                   : 0U);
                __Vtemp668[3U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                   ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[3U]
                                   : 0U);
            }
            tracep->chgWData(oldp+707,(__Vtemp668),128);
            tracep->chgBit(oldp+711,((((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                       & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o)) 
                                      | ((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                         & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o)))));
            tracep->chgWData(oldp+712,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outt),128);
            if (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                 & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t))) {
                __Vtemp675[0U] = 0xffffffffU;
                __Vtemp675[1U] = 0xffffffffU;
                __Vtemp675[2U] = 0xffffffffU;
                __Vtemp675[3U] = 0xffffffffU;
            } else {
                __Vtemp675[0U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                   ? 0xffffffffU : 0U);
                __Vtemp675[1U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                   ? 0xffffffffU : 0U);
                __Vtemp675[2U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                   ? 0xffffffffU : 0U);
                __Vtemp675[3U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                   ? 0xffffffffU : 0U);
            }
            tracep->chgWData(oldp+716,(__Vtemp675),128);
            if (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                 & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t))) {
                __Vtemp680[0U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[0U];
                __Vtemp680[1U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[1U];
                __Vtemp680[2U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[2U];
                __Vtemp680[3U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[3U];
            } else {
                __Vtemp680[0U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                   ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[0U]
                                   : 0U);
                __Vtemp680[1U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                   ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[1U]
                                   : 0U);
                __Vtemp680[2U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                   ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[2U]
                                   : 0U);
                __Vtemp680[3U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                   ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[3U]
                                   : 0U);
            }
            tracep->chgWData(oldp+720,(__Vtemp680),128);
            tracep->chgBit(oldp+724,((((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                       & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t)) 
                                      | ((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                         & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t)))));
            tracep->chgIData(oldp+725,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i),32);
            tracep->chgBit(oldp+726,((1U & (~ (((2U 
                                                 == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o)) 
                                               | ((8U 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o)))))));
            __Vtemp688[0U] = (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                  & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o))
                                  ? 0xffffffffU : (
                                                   ((8U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                                    ? 0xffffffffU
                                                    : 0U)));
            __Vtemp688[1U] = (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                  & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o))
                                  ? 0xffffffffU : (
                                                   ((8U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                                    ? 0xffffffffU
                                                    : 0U)));
            __Vtemp688[2U] = (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                  & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o))
                                  ? 0xffffffffU : (
                                                   ((8U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                                    ? 0xffffffffU
                                                    : 0U)));
            __Vtemp688[3U] = (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                  & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o))
                                  ? 0xffffffffU : (
                                                   ((8U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                                    ? 0xffffffffU
                                                    : 0U)));
            tracep->chgWData(oldp+727,(__Vtemp688),128);
            tracep->chgBit(oldp+731,((1U & (~ (((2U 
                                                 == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t)) 
                                               | ((8U 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t)))))));
            __Vtemp696[0U] = (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                  & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t))
                                  ? 0xffffffffU : (
                                                   ((8U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                                    ? 0xffffffffU
                                                    : 0U)));
            __Vtemp696[1U] = (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                  & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t))
                                  ? 0xffffffffU : (
                                                   ((8U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                                    ? 0xffffffffU
                                                    : 0U)));
            __Vtemp696[2U] = (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                  & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t))
                                  ? 0xffffffffU : (
                                                   ((8U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                                    ? 0xffffffffU
                                                    : 0U)));
            __Vtemp696[3U] = (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                  & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t))
                                  ? 0xffffffffU : (
                                                   ((8U 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                                    ? 0xffffffffU
                                                    : 0U)));
            tracep->chgWData(oldp+732,(__Vtemp696),128);
            tracep->chgCData(oldp+736,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter),7);
            tracep->chgBit(oldp+737,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_valid_req));
            tracep->chgBit(oldp+738,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__read_request));
            tracep->chgBit(oldp+739,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__read_request));
            tracep->chgBit(oldp+740,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_request));
            tracep->chgBit(oldp+741,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_success));
            tracep->chgBit(oldp+742,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_write_valid1));
            tracep->chgBit(oldp+743,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_write_valid2));
            tracep->chgQData(oldp+744,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_data_out),64);
            tracep->chgQData(oldp+746,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_addr_out),64);
            tracep->chgCData(oldp+748,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_type_out),4);
            tracep->chgBit(oldp+749,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__delay_oclk));
            tracep->chgBit(oldp+750,((1U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))));
            tracep->chgBit(oldp+751,((1U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))));
            tracep->chgCData(oldp+752,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread),6);
            tracep->chgBit(oldp+753,((2U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))));
            tracep->chgBit(oldp+754,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__read_ok));
            tracep->chgBit(oldp+755,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_ok));
            tracep->chgCData(oldp+756,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_out_type),4);
            tracep->chgBit(oldp+757,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_ena));
            tracep->chgBit(oldp+758,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regr));
            tracep->chgBit(oldp+759,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regr_));
            tracep->chgCData(oldp+760,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite),6);
            tracep->chgBit(oldp+761,((2U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))));
            tracep->chgBit(oldp+762,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__read_w_ok));
            tracep->chgBit(oldp+763,((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))));
            tracep->chgBit(oldp+764,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_ok));
            tracep->chgCData(oldp+765,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_out_type),4);
            tracep->chgBit(oldp+766,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_ena));
            tracep->chgBit(oldp+767,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regw));
            tracep->chgBit(oldp+768,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regw_));
            tracep->chgIData(oldp+769,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__i),32);
            tracep->chgIData(oldp+770,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__j),32);
            tracep->chgIData(oldp+771,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r),23);
            tracep->chgBit(oldp+772,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r));
            tracep->chgIData(oldp+773,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r),23);
            tracep->chgBit(oldp+774,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r));
            tracep->chgWData(oldp+775,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out),128);
            tracep->chgCData(oldp+779,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state),3);
            tracep->chgBit(oldp+780,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_dread));
            tracep->chgBit(oldp+781,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_unread));
            tracep->chgBit(oldp+782,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_dwrite));
            tracep->chgBit(oldp+783,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_unwrite));
            tracep->chgBit(oldp+784,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_iread));
            tracep->chgCData(oldp+785,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state),3);
            tracep->chgBit(oldp+786,((((((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_dread) 
                                         | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_dwrite)) 
                                        | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_iread)) 
                                       | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_unread)) 
                                      | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_unwrite))));
            tracep->chgBit(oldp+787,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__aw_enable));
            tracep->chgCData(oldp+788,(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_write_state),2);
            tracep->chgCData(oldp+789,(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state),2);
            tracep->chgQData(oldp+790,(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__write_data_reg),64);
            tracep->chgQData(oldp+792,(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__write_addr_reg),64);
            tracep->chgCData(oldp+794,(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__r_s_axi_ar_id),4);
            tracep->chgQData(oldp+795,(vlSelf->ysyx_22040228__DOT__clint6__DOT__csr_mtime),64);
            tracep->chgQData(oldp+797,(vlSelf->ysyx_22040228__DOT__clint6__DOT__csr_mtimecmp),64);
            tracep->chgCData(oldp+799,(vlSelf->ysyx_22040228__DOT__clint6__DOT__timer_state),2);
            tracep->chgCData(oldp+800,(vlSelf->ysyx_22040228__DOT__clint6__DOT__timew_state),2);
            tracep->chgCData(oldp+801,(vlSelf->ysyx_22040228__DOT__clint6__DOT__timeraw_id_temp),4);
            tracep->chgQData(oldp+802,(vlSelf->ysyx_22040228__DOT__clint6__DOT__read_csrdata_temp),64);
            tracep->chgCData(oldp+804,(vlSelf->ysyx_22040228__DOT__clint6__DOT__timerar_id_temp),4);
            tracep->chgCData(oldp+805,(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_write_state),2);
            tracep->chgCData(oldp+806,(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state),2);
            tracep->chgQData(oldp+807,(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__write_data_reg),64);
            tracep->chgQData(oldp+809,(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__write_addr_reg),64);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgQData(oldp+811,(((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
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
            tracep->chgBit(oldp+813,(((IData)(vlSelf->ysyx_22040228__DOT__uncache_mmio7__DOT__uncache)
                                       ? (IData)(vlSelf->ysyx_22040228__DOT__uncache_arb_finish)
                                       : (IData)(vlSelf->ysyx_22040228__DOT__uncache_dc_finish))));
            tracep->chgCData(oldp+814,(((2U == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state))
                                         ? (0xfU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_id))
                                         : 0U)),4);
            tracep->chgQData(oldp+815,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal1) 
                                         | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx1) 
                                            & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1)))
                                         ? vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr
                                         : (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx1) 
                                             & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1)))
                                             ? vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr
                                             : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr1)
                                                 ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf_pc_data
                                                 : 
                                                (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal2) 
                                                  | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx2) 
                                                     & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1)))
                                                  ? 
                                                 (4ULL 
                                                  + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)
                                                  : 
                                                 (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx2) 
                                                   & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1)))
                                                   ? 
                                                  (4ULL 
                                                   + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)
                                                   : 
                                                  ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr2)
                                                    ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf_pc_data
                                                    : 
                                                   (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal3) 
                                                     | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx3) 
                                                        & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1)))
                                                     ? 
                                                    (8ULL 
                                                     + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)
                                                     : 
                                                    (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx3) 
                                                      & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1)))
                                                      ? 
                                                     (8ULL 
                                                      + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)
                                                      : 
                                                     ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr3)
                                                       ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf_pc_data
                                                       : 
                                                      (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal4) 
                                                        | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx4) 
                                                           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1)))
                                                        ? 
                                                       (0xcULL 
                                                        + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)
                                                        : 
                                                       (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx4) 
                                                         & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1)))
                                                         ? 
                                                        (0xcULL 
                                                         + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)
                                                         : 
                                                        ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr4)
                                                          ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf_pc_data
                                                          : vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr))))))))))))),64);
            tracep->chgCData(oldp+817,((((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena1) 
                                           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena2)) 
                                          | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena3)) 
                                         | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena4))
                                         ? ((0U == 
                                             (0xfU 
                                              & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__forc_jumppc)))
                                             ? 4U : 
                                            ((4U == 
                                              (0xfU 
                                               & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__forc_jumppc)))
                                              ? 3U : 
                                             ((8U == 
                                               (0xfU 
                                                & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__forc_jumppc)))
                                               ? 2U
                                               : ((0xcU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__forc_jumppc)))
                                                   ? 1U
                                                   : 4U))))
                                         : ((0xcU == 
                                             (0xfU 
                                              & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_jnxtpc_temp)))
                                             ? 1U : 
                                            ((8U == 
                                              (0xfU 
                                               & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_jnxtpc_temp)))
                                              ? 2U : 
                                             ((4U == 
                                               (0xfU 
                                                & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_jnxtpc_temp)))
                                               ? 3U
                                               : 4U))))),3);
            tracep->chgBit(oldp+818,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+819,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0x2000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+820,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0x3000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+821,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0x4000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+822,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0x6000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+823,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+824,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0x1000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+825,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0x5000U 
                                                       == 
                                                       (0x40007000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+826,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+827,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0x1000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+828,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0x4000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+829,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0x5000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+830,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0x6000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+831,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+832,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr0) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena0))));
            tracep->chgBit(oldp+833,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr1) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena1))));
            tracep->chgBit(oldp+834,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr2) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena2))));
            tracep->chgBit(oldp+835,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr3) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena3))));
            tracep->chgBit(oldp+836,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr4) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena4))));
            tracep->chgBit(oldp+837,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr5) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena5))));
            tracep->chgBit(oldp+838,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr6) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena6))));
            tracep->chgBit(oldp+839,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr7) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena7))));
            tracep->chgBit(oldp+840,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_addr) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_ena))));
            tracep->chgBit(oldp+841,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_addr) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_ena))));
            tracep->chgQData(oldp+842,(((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__forcast_state)
                                         ? ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jread1)
                                             ? (4ULL 
                                                + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_pc)
                                             : ((((- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__b_imm) 
                                                                         >> 0xbU))))) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   (0xfffU 
                                                                    & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__b_imm) 
                                                                       << 1U))))) 
                                                + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_pc))
                                         : 0ULL)),64);
            tracep->chgQData(oldp+844,(((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_jalr)
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
            tracep->chgQData(oldp+846,(((((- (QData)((IData)(
                                                             (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                              >> 0x1fU)))) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                            >> 0x14U)))) 
                                        + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op1)),64);
            tracep->chgBit(oldp+848,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+849,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0x2000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+850,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0x3000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+851,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0x4000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+852,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0x6000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+853,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+854,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0x1000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+855,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0x5000U 
                                                       == 
                                                       (0x40007000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+856,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+857,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0x1000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+858,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0x4000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+859,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0x5000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+860,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0x6000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+861,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+862,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr0) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena0))));
            tracep->chgBit(oldp+863,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr1) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena1))));
            tracep->chgBit(oldp+864,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr2) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena2))));
            tracep->chgBit(oldp+865,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr3) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena3))));
            tracep->chgBit(oldp+866,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr4) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena4))));
            tracep->chgBit(oldp+867,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr5) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena5))));
            tracep->chgBit(oldp+868,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr6) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena6))));
            tracep->chgBit(oldp+869,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr7) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena7))));
            tracep->chgBit(oldp+870,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_addr) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_ena))));
            tracep->chgBit(oldp+871,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_addr) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_ena))));
            tracep->chgQData(oldp+872,(((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__forcast_state)
                                         ? ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jread2)
                                             ? (4ULL 
                                                + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_pc)
                                             : ((((- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__b_imm) 
                                                                         >> 0xbU))))) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   (0xfffU 
                                                                    & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__b_imm) 
                                                                       << 1U))))) 
                                                + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_pc))
                                         : 0ULL)),64);
            tracep->chgQData(oldp+874,(((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_jalr)
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
            tracep->chgQData(oldp+876,(((((- (QData)((IData)(
                                                             (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                              >> 0x1fU)))) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                            >> 0x14U)))) 
                                        + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op1)),64);
            tracep->chgBit(oldp+878,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__busy[0]));
            tracep->chgBit(oldp+879,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__busy[1]));
            tracep->chgBit(oldp+880,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__busy[2]));
            tracep->chgBit(oldp+881,(((IData)(vlSelf->ysyx_22040228__DOT__uncache_dc_re) 
                                      & (1U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread)))));
            tracep->chgBit(oldp+882,(((IData)(vlSelf->ysyx_22040228__DOT__uncache_dc_we) 
                                      & (1U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)))));
            tracep->chgBit(oldp+883,(((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread)) 
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
            VL_EXTEND_WQ(128,64, __Vtemp697, vlSelf->ysyx_22040228__DOT__data_cache3__DOT__strb_extection);
            if ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))) {
                __Vtemp706[0U] = (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                    == (0x7fffffU & (IData)(
                                                            (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                             >> 9U)))) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                   ? __Vtemp697[0U]
                                   : 0U);
                __Vtemp706[1U] = (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                    == (0x7fffffU & (IData)(
                                                            (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                             >> 9U)))) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                   ? __Vtemp697[1U]
                                   : 0U);
                __Vtemp706[2U] = (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                    == (0x7fffffU & (IData)(
                                                            (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                             >> 9U)))) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                   ? __Vtemp697[2U]
                                   : (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                                        == (0x7fffffU 
                                            & (IData)(
                                                      (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                       >> 9U)))) 
                                       & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))
                                       ? (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__strb_extection)
                                       : 0U));
                __Vtemp706[3U] = (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                    == (0x7fffffU & (IData)(
                                                            (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                             >> 9U)))) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                   ? __Vtemp697[3U]
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
                __Vtemp706[0U] = 0U;
                __Vtemp706[1U] = 0U;
                __Vtemp706[2U] = 0U;
                __Vtemp706[3U] = 0U;
            }
            tracep->chgWData(oldp+884,(__Vtemp706),128);
            tracep->chgBit(oldp+888,(((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
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
            tracep->chgBit(oldp+889,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty1
                                     [(0x3fU & (IData)(
                                                       (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                        >> 3U)))]));
            tracep->chgBit(oldp+890,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty2
                                     [(0x3fU & (IData)(
                                                       (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                        >> 3U)))]));
            tracep->chgIData(oldp+891,(((0xa8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                         ? 0U : (0x7fffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                            >> 9U))))),23);
            VL_EXTEND_WQ(128,64, __Vtemp707, vlSelf->ysyx_22040228__DOT__data_cache3__DOT__strb_extection);
            if ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))) {
                __Vtemp723[0U] = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[0U];
                __Vtemp723[1U] = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[1U];
                __Vtemp723[2U] = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[2U];
                __Vtemp723[3U] = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[3U];
            } else {
                __Vtemp723[0U] = ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                   ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                       ? (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                            == (0x7fffffU 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                           >> 9U)))) 
                                           & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                           ? __Vtemp707[0U]
                                           : 0U) : 0U)
                                   : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                       ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[0U]
                                       : 0U));
                __Vtemp723[1U] = ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                   ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                       ? (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                            == (0x7fffffU 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                           >> 9U)))) 
                                           & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                           ? __Vtemp707[1U]
                                           : 0U) : 0U)
                                   : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                       ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[1U]
                                       : 0U));
                __Vtemp723[2U] = ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                   ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                       ? (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                            == (0x7fffffU 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                           >> 9U)))) 
                                           & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                           ? __Vtemp707[2U]
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
                __Vtemp723[3U] = ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                   ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                       ? (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                            == (0x7fffffU 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                           >> 9U)))) 
                                           & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                           ? __Vtemp707[3U]
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
            tracep->chgWData(oldp+892,(__Vtemp723),128);
            if ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))) {
                __Vtemp730[0U] = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[0U];
                __Vtemp730[1U] = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[1U];
                __Vtemp730[2U] = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[2U];
                __Vtemp730[3U] = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[3U];
            } else {
                __Vtemp730[0U] = ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                   ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__hitw_data_temp[0U]
                                   : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                       ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[0U]
                                       : 0U));
                __Vtemp730[1U] = ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                   ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__hitw_data_temp[1U]
                                   : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                       ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[1U]
                                       : 0U));
                __Vtemp730[2U] = ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                   ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__hitw_data_temp[2U]
                                   : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                       ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[2U]
                                       : 0U));
                __Vtemp730[3U] = ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                   ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__hitw_data_temp[3U]
                                   : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                       ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[3U]
                                       : 0U));
            }
            tracep->chgWData(oldp+896,(__Vtemp730),128);
            tracep->chgBit(oldp+900,(((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
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
            tracep->chgBit(oldp+901,((1U & (~ ((0x10U 
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
            VL_EXTEND_WQ(128,64, __Vtemp731, vlSelf->ysyx_22040228__DOT__data_cache3__DOT__strb_extection);
            __Vtemp748[0U] = (~ ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                                  ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[0U]
                                  : ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                      ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                          ? (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                               == (0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                              >> 9U)))) 
                                              & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                              ? __Vtemp731[0U]
                                              : 0U)
                                          : 0U) : (
                                                   (0x10U 
                                                    == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                                    ? 
                                                   vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[0U]
                                                    : 0U))));
            __Vtemp748[1U] = (~ ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                                  ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[1U]
                                  : ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                      ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                          ? (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                               == (0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                              >> 9U)))) 
                                              & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                              ? __Vtemp731[1U]
                                              : 0U)
                                          : 0U) : (
                                                   (0x10U 
                                                    == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                                    ? 
                                                   vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[1U]
                                                    : 0U))));
            __Vtemp748[2U] = (~ ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                                  ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[2U]
                                  : ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                      ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                          ? (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                               == (0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                              >> 9U)))) 
                                              & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                              ? __Vtemp731[2U]
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
            __Vtemp748[3U] = (~ ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                                  ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[3U]
                                  : ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                      ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                          ? (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                               == (0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                              >> 9U)))) 
                                              & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                              ? __Vtemp731[3U]
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
            tracep->chgWData(oldp+902,(__Vtemp748),128);
            tracep->chgCData(oldp+906,(((4U & (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state))
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
            tracep->chgBit(oldp+907,(((2U == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_write_state)) 
                                      & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_b_ready) 
                                         >> 2U))));
            tracep->chgBit(oldp+908,((((IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_ready) 
                                       >> 2U) & (2U 
                                                 == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state)))));
            tracep->chgQData(oldp+909,((((IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__success_aw) 
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
            tracep->chgQData(oldp+911,((((IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__success_aw) 
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
            tracep->chgBit(oldp+913,(((2U == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_write_state)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_b_ready))));
            tracep->chgBit(oldp+914,(((IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_ready) 
                                      & (2U == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state)))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+915,(vlSelf->ysyx_22040228__DOT__rvcpu_data_addr),64);
            tracep->chgCData(oldp+917,(vlSelf->ysyx_22040228__DOT__rvcpu_wmask),8);
            tracep->chgQData(oldp+918,(vlSelf->ysyx_22040228__DOT__rvcpu_data_o),64);
            tracep->chgBit(oldp+920,(vlSelf->ysyx_22040228__DOT__rvcpu_we));
            tracep->chgBit(oldp+921,(vlSelf->ysyx_22040228__DOT__rvcpu_re));
            tracep->chgQData(oldp+922,(vlSelf->ysyx_22040228__DOT__uncache_arb_data),64);
            tracep->chgQData(oldp+924,(vlSelf->ysyx_22040228__DOT__uncache_arb_addr),64);
            tracep->chgCData(oldp+926,(((IData)(vlSelf->ysyx_22040228__DOT__uncache_mmio7__DOT__uncache)
                                         ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_wmask)
                                         : 0U)),8);
            tracep->chgBit(oldp+927,(vlSelf->ysyx_22040228__DOT__uncache_arb_we));
            tracep->chgBit(oldp+928,(vlSelf->ysyx_22040228__DOT__uncache_arb_re));
            tracep->chgQData(oldp+929,(vlSelf->ysyx_22040228__DOT__uncache_dc_data),64);
            tracep->chgQData(oldp+931,(vlSelf->ysyx_22040228__DOT__uncache_dc_addr),64);
            tracep->chgCData(oldp+933,(vlSelf->ysyx_22040228__DOT__uncache_dc_mask),8);
            tracep->chgBit(oldp+934,(vlSelf->ysyx_22040228__DOT__uncache_dc_we));
            tracep->chgBit(oldp+935,(vlSelf->ysyx_22040228__DOT__uncache_dc_re));
            tracep->chgBit(oldp+936,(vlSelf->ysyx_22040228__DOT__uncache_dc_finish));
            tracep->chgQData(oldp+937,(vlSelf->ysyx_22040228__DOT__d_cache_data_out),64);
            tracep->chgQData(oldp+939,(vlSelf->ysyx_22040228__DOT__d_cache_out_addr),64);
            tracep->chgQData(oldp+941,(vlSelf->ysyx_22040228__DOT__d_cache_out_data),64);
            tracep->chgCData(oldp+943,(vlSelf->ysyx_22040228__DOT__d_cache_out_type),4);
            tracep->chgQData(oldp+944,(vlSelf->ysyx_22040228__DOT__t_axi_aw_addr),64);
            tracep->chgQData(oldp+946,(vlSelf->ysyx_22040228__DOT__t_axi_w_data),64);
            tracep->chgCData(oldp+948,(vlSelf->ysyx_22040228__DOT__t_axi_w_strb),8);
            tracep->chgCData(oldp+949,(vlSelf->ysyx_22040228__DOT__t_axi_b_id),4);
            tracep->chgBit(oldp+950,(vlSelf->ysyx_22040228__DOT__t_axi_b_valid));
            tracep->chgQData(oldp+951,(vlSelf->ysyx_22040228__DOT__t_axi_ar_addr),64);
            tracep->chgCData(oldp+953,(vlSelf->ysyx_22040228__DOT__t_axi_r_id),4);
            tracep->chgQData(oldp+954,(vlSelf->ysyx_22040228__DOT__t_axi_r_data),64);
            tracep->chgBit(oldp+956,(vlSelf->ysyx_22040228__DOT__t_axi_r_last));
            tracep->chgBit(oldp+957,(vlSelf->ysyx_22040228__DOT__t_axi_r_valid));
            tracep->chgSData(oldp+958,(vlSelf->ysyx_22040228__DOT__add_axi_aw_id),12);
            tracep->chgWData(oldp+959,(vlSelf->ysyx_22040228__DOT__add_axi_aw_addr),192);
            tracep->chgIData(oldp+965,(vlSelf->ysyx_22040228__DOT__add_axi_aw_len),24);
            tracep->chgSData(oldp+966,(vlSelf->ysyx_22040228__DOT__add_axi_aw_size),9);
            tracep->chgCData(oldp+967,(vlSelf->ysyx_22040228__DOT__add_axi_aw_burst),6);
            tracep->chgSData(oldp+968,(vlSelf->ysyx_22040228__DOT__add_axi_aw_cache),12);
            tracep->chgSData(oldp+969,(vlSelf->ysyx_22040228__DOT__add_axi_aw_prot),9);
            tracep->chgSData(oldp+970,(vlSelf->ysyx_22040228__DOT__add_axi_aw_qos),12);
            tracep->chgCData(oldp+971,(vlSelf->ysyx_22040228__DOT__add_axi_aw_valid),3);
            tracep->chgCData(oldp+972,(vlSelf->ysyx_22040228__DOT__add_axi_aw_ready),3);
            tracep->chgWData(oldp+973,(vlSelf->ysyx_22040228__DOT__add_axi_w_data),192);
            tracep->chgIData(oldp+979,(vlSelf->ysyx_22040228__DOT__add_axi_w_strb),24);
            tracep->chgCData(oldp+980,(vlSelf->ysyx_22040228__DOT__add_axi_w_last),3);
            tracep->chgCData(oldp+981,(vlSelf->ysyx_22040228__DOT__add_axi_w_valid),3);
            tracep->chgCData(oldp+982,(vlSelf->ysyx_22040228__DOT__add_axi_w_ready),3);
            tracep->chgSData(oldp+983,(vlSelf->ysyx_22040228__DOT__add_axi_b_id),12);
            tracep->chgCData(oldp+984,(vlSelf->ysyx_22040228__DOT__add_axi_b_ready),3);
            tracep->chgSData(oldp+985,(vlSelf->ysyx_22040228__DOT__add_axi_ar_id),12);
            tracep->chgWData(oldp+986,(vlSelf->ysyx_22040228__DOT__add_axi_ar_addr),192);
            tracep->chgIData(oldp+992,(vlSelf->ysyx_22040228__DOT__add_axi_ar_len),24);
            tracep->chgSData(oldp+993,(vlSelf->ysyx_22040228__DOT__add_axi_ar_size),9);
            tracep->chgCData(oldp+994,(vlSelf->ysyx_22040228__DOT__add_axi_ar_burst),6);
            tracep->chgSData(oldp+995,(vlSelf->ysyx_22040228__DOT__add_axi_ar_cache),12);
            tracep->chgSData(oldp+996,(vlSelf->ysyx_22040228__DOT__add_axi_ar_prot),9);
            tracep->chgSData(oldp+997,(vlSelf->ysyx_22040228__DOT__add_axi_ar_qos),12);
            tracep->chgCData(oldp+998,(vlSelf->ysyx_22040228__DOT__add_axi_ar_valid),3);
            tracep->chgSData(oldp+999,(vlSelf->ysyx_22040228__DOT__add_axi_r_id),12);
            tracep->chgWData(oldp+1000,(vlSelf->ysyx_22040228__DOT__add_axi_r_data),192);
            tracep->chgCData(oldp+1006,(vlSelf->ysyx_22040228__DOT__add_axi_r_ready),3);
            tracep->chgCData(oldp+1007,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_id) 
                                                 >> 8U))),4);
            tracep->chgQData(oldp+1008,((((QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[5U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[4U])))),64);
            tracep->chgCData(oldp+1010,((0xffU & (vlSelf->ysyx_22040228__DOT__add_axi_aw_len 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1011,((7U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_size) 
                                               >> 6U))),3);
            tracep->chgCData(oldp+1012,((3U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_burst) 
                                               >> 4U))),2);
            tracep->chgCData(oldp+1013,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_cache) 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1014,((7U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_prot) 
                                               >> 6U))),3);
            tracep->chgCData(oldp+1015,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_qos) 
                                                 >> 8U))),4);
            tracep->chgBit(oldp+1016,(vlSelf->ysyx_22040228__DOT__soc_axi_aw_ready));
            tracep->chgBit(oldp+1017,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_valid) 
                                             >> 2U))));
            tracep->chgQData(oldp+1018,((((QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__add_axi_w_data[5U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__add_axi_w_data[4U])))),64);
            tracep->chgCData(oldp+1020,((0xffU & (vlSelf->ysyx_22040228__DOT__add_axi_w_strb 
                                                  >> 0x10U))),8);
            tracep->chgBit(oldp+1021,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_last) 
                                             >> 2U))));
            tracep->chgBit(oldp+1022,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_valid) 
                                             >> 2U))));
            tracep->chgBit(oldp+1023,(vlSelf->ysyx_22040228__DOT__soc_axi_w_ready));
            tracep->chgBit(oldp+1024,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_b_ready) 
                                             >> 2U))));
            tracep->chgCData(oldp+1025,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_id) 
                                                 >> 8U))),4);
            tracep->chgQData(oldp+1026,((((QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[5U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[4U])))),64);
            tracep->chgCData(oldp+1028,((0xffU & (vlSelf->ysyx_22040228__DOT__add_axi_ar_len 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1029,((7U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_size) 
                                               >> 6U))),3);
            tracep->chgCData(oldp+1030,((3U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_burst) 
                                               >> 4U))),2);
            tracep->chgCData(oldp+1031,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_cache) 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1032,((7U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_prot) 
                                               >> 6U))),3);
            tracep->chgCData(oldp+1033,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_qos) 
                                                 >> 8U))),4);
            tracep->chgBit(oldp+1034,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_valid) 
                                             >> 2U))));
            tracep->chgBit(oldp+1035,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_ready) 
                                             >> 2U))));
            tracep->chgCData(oldp+1036,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_id) 
                                                 >> 4U))),4);
            tracep->chgQData(oldp+1037,((((QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[2U])))),64);
            tracep->chgCData(oldp+1039,((0xffU & (vlSelf->ysyx_22040228__DOT__add_axi_aw_len 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1040,((7U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_size) 
                                               >> 3U))),3);
            tracep->chgCData(oldp+1041,((3U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_burst) 
                                               >> 2U))),2);
            tracep->chgCData(oldp+1042,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_cache) 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1043,((7U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_prot) 
                                               >> 3U))),3);
            tracep->chgCData(oldp+1044,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_qos) 
                                                 >> 4U))),4);
            tracep->chgBit(oldp+1045,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_valid) 
                                             >> 1U))));
            tracep->chgQData(oldp+1046,((((QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__add_axi_w_data[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__add_axi_w_data[2U])))),64);
            tracep->chgCData(oldp+1048,((0xffU & (vlSelf->ysyx_22040228__DOT__add_axi_w_strb 
                                                  >> 8U))),8);
            tracep->chgBit(oldp+1049,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_last) 
                                             >> 1U))));
            tracep->chgBit(oldp+1050,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_valid) 
                                             >> 1U))));
            tracep->chgBit(oldp+1051,(vlSelf->ysyx_22040228__DOT__clint6__DOT__success_aw));
            tracep->chgBit(oldp+1052,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_b_ready) 
                                             >> 1U))));
            tracep->chgCData(oldp+1053,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_id) 
                                                 >> 4U))),4);
            tracep->chgQData(oldp+1054,((((QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[2U])))),64);
            tracep->chgCData(oldp+1056,((0xffU & (vlSelf->ysyx_22040228__DOT__add_axi_ar_len 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1057,((7U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_size) 
                                               >> 3U))),3);
            tracep->chgCData(oldp+1058,((3U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_burst) 
                                               >> 2U))),2);
            tracep->chgCData(oldp+1059,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_cache) 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1060,((7U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_prot) 
                                               >> 3U))),3);
            tracep->chgCData(oldp+1061,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_qos) 
                                                 >> 4U))),4);
            tracep->chgBit(oldp+1062,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_valid) 
                                             >> 1U))));
            tracep->chgBit(oldp+1063,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_ready) 
                                             >> 1U))));
            tracep->chgCData(oldp+1064,((0xfU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_id))),4);
            tracep->chgQData(oldp+1065,((((QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[0U])))),64);
            tracep->chgCData(oldp+1067,((0xffU & vlSelf->ysyx_22040228__DOT__add_axi_aw_len)),8);
            tracep->chgCData(oldp+1068,((7U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_size))),3);
            tracep->chgCData(oldp+1069,((3U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_burst))),2);
            tracep->chgCData(oldp+1070,((0xfU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_cache))),4);
            tracep->chgCData(oldp+1071,((7U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_prot))),3);
            tracep->chgCData(oldp+1072,((0xfU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_qos))),4);
            tracep->chgBit(oldp+1073,(vlSelf->ysyx_22040228__DOT__io_axi_aw_ready));
            tracep->chgBit(oldp+1074,((1U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_valid))));
            tracep->chgQData(oldp+1075,((((QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__add_axi_w_data[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__add_axi_w_data[0U])))),64);
            tracep->chgCData(oldp+1077,((0xffU & vlSelf->ysyx_22040228__DOT__add_axi_w_strb)),8);
            tracep->chgBit(oldp+1078,((1U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_last))));
            tracep->chgBit(oldp+1079,((1U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_valid))));
            tracep->chgBit(oldp+1080,(vlSelf->ysyx_22040228__DOT__io_axi_w_ready));
            tracep->chgBit(oldp+1081,((1U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_b_ready))));
            tracep->chgCData(oldp+1082,((0xfU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_id))),4);
            tracep->chgQData(oldp+1083,((((QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[0U])))),64);
            tracep->chgCData(oldp+1085,((0xffU & vlSelf->ysyx_22040228__DOT__add_axi_ar_len)),8);
            tracep->chgCData(oldp+1086,((7U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_size))),3);
            tracep->chgCData(oldp+1087,((3U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_burst))),2);
            tracep->chgCData(oldp+1088,((0xfU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_cache))),4);
            tracep->chgCData(oldp+1089,((7U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_prot))),3);
            tracep->chgCData(oldp+1090,((0xfU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_qos))),4);
            tracep->chgBit(oldp+1091,((1U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_valid))));
            tracep->chgBit(oldp+1092,((1U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_ready))));
            tracep->chgCData(oldp+1093,(vlSelf->ysyx_22040228__DOT__mmio_thing),3);
            tracep->chgBit(oldp+1094,(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__ar_shankhand));
            tracep->chgQData(oldp+1095,(((IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__ar_shankhand)
                                          ? (((QData)((IData)(
                                                              vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[5U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[4U])))
                                          : 0ULL)),64);
            tracep->chgQData(oldp+1097,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf_pc_data),64);
            tracep->chgCData(oldp+1099,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1addr),5);
            tracep->chgCData(oldp+1100,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr),5);
            tracep->chgBit(oldp+1101,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1ena));
            tracep->chgBit(oldp+1102,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2ena));
            tracep->chgCData(oldp+1103,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type),8);
            tracep->chgCData(oldp+1104,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_opcode),8);
            tracep->chgQData(oldp+1105,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op1),64);
            tracep->chgQData(oldp+1107,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op2),64);
            tracep->chgBit(oldp+1109,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_ena));
            tracep->chgCData(oldp+1110,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_addr),5);
            tracep->chgQData(oldp+1111,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_pc),64);
            tracep->chgIData(oldp+1113,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_inst),32);
            tracep->chgQData(oldp+1114,(((IData)((0U 
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
            tracep->chgQData(oldp+1116,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump1_pc),64);
            tracep->chgBit(oldp+1118,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump1_ena));
            tracep->chgCData(oldp+1119,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_so_type),6);
            tracep->chgBit(oldp+1120,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type) 
                                             >> 2U))));
            tracep->chgBit(oldp+1121,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__data_jf));
            tracep->chgCData(oldp+1122,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr),5);
            tracep->chgCData(oldp+1123,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr),5);
            tracep->chgBit(oldp+1124,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1ena));
            tracep->chgBit(oldp+1125,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2ena));
            tracep->chgCData(oldp+1126,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type),8);
            tracep->chgCData(oldp+1127,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_opcode),8);
            tracep->chgQData(oldp+1128,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op1),64);
            tracep->chgQData(oldp+1130,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op2),64);
            tracep->chgBit(oldp+1132,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_ena));
            tracep->chgCData(oldp+1133,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_addr),5);
            tracep->chgQData(oldp+1134,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_pc),64);
            tracep->chgIData(oldp+1136,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_inst),32);
            tracep->chgQData(oldp+1137,(((IData)((0U 
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
            tracep->chgBit(oldp+1139,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__data_jf));
            tracep->chgBit(oldp+1140,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type) 
                                             >> 2U))));
            tracep->chgQData(oldp+1141,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump2_pc),64);
            tracep->chgBit(oldp+1143,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump2_ena));
            tracep->chgCData(oldp+1144,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_so_type),6);
            tracep->chgCData(oldp+1145,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose1),3);
            tracep->chgCData(oldp+1146,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose2),3);
            tracep->chgBit(oldp+1147,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop1));
            tracep->chgBit(oldp+1148,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop2));
            tracep->chgBit(oldp+1149,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleano));
            tracep->chgBit(oldp+1150,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleant));
            tracep->chgBit(oldp+1151,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudt_stop_trap));
            tracep->chgBit(oldp+1152,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_trap));
            tracep->chgQData(oldp+1153,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_submit_pc),64);
            tracep->chgQData(oldp+1155,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc),64);
            tracep->chgQData(oldp+1157,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_data),64);
            tracep->chgQData(oldp+1159,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc),64);
            tracep->chgQData(oldp+1161,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_data),64);
            tracep->chgQData(oldp+1163,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc),64);
            tracep->chgQData(oldp+1165,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__load_data),64);
            tracep->chgBit(oldp+1167,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_so_busy));
            tracep->chgQData(oldp+1168,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__operand2),64);
            tracep->chgQData(oldp+1170,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_temp),64);
            tracep->chgQData(oldp+1172,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__forc_jumppc),64);
            tracep->chgQData(oldp+1174,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_jnxtpc_temp),64);
            tracep->chgCData(oldp+1176,(((0xcU == (0xfU 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump1_pc)))
                                          ? 1U : ((8U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump1_pc)))
                                                   ? 2U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump1_pc)))
                                                    ? 3U
                                                    : 4U)))),3);
            tracep->chgCData(oldp+1177,(((0xcU == (0xfU 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump2_pc)))
                                          ? 1U : ((8U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump2_pc)))
                                                   ? 2U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump2_pc)))
                                                    ? 3U
                                                    : 4U)))),3);
            tracep->chgBit(oldp+1178,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__should_updata));
            tracep->chgCData(oldp+1179,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__rs1),5);
            tracep->chgBit(oldp+1180,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_lui));
            tracep->chgBit(oldp+1181,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_auipc));
            tracep->chgBit(oldp+1182,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_jal));
            tracep->chgBit(oldp+1183,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_jalr));
            tracep->chgBit(oldp+1184,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_jump));
            tracep->chgBit(oldp+1185,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_srai));
            tracep->chgBit(oldp+1186,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_addiw));
            tracep->chgBit(oldp+1187,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_slliw));
            tracep->chgBit(oldp+1188,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_srliw));
            tracep->chgBit(oldp+1189,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sraiw));
            tracep->chgBit(oldp+1190,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_add));
            tracep->chgBit(oldp+1191,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sub));
            tracep->chgBit(oldp+1192,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sll));
            tracep->chgBit(oldp+1193,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_slt));
            tracep->chgBit(oldp+1194,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sltu));
            tracep->chgBit(oldp+1195,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_xor));
            tracep->chgBit(oldp+1196,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_srl));
            tracep->chgBit(oldp+1197,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sra));
            tracep->chgBit(oldp+1198,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_or));
            tracep->chgBit(oldp+1199,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_and));
            tracep->chgBit(oldp+1200,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_div));
            tracep->chgBit(oldp+1201,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_divu));
            tracep->chgBit(oldp+1202,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mul));
            tracep->chgBit(oldp+1203,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulh));
            tracep->chgBit(oldp+1204,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulhsu));
            tracep->chgBit(oldp+1205,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulhu));
            tracep->chgBit(oldp+1206,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_rem));
            tracep->chgBit(oldp+1207,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_remu));
            tracep->chgBit(oldp+1208,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_addw));
            tracep->chgBit(oldp+1209,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_subw));
            tracep->chgBit(oldp+1210,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sllw));
            tracep->chgBit(oldp+1211,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_srlw));
            tracep->chgBit(oldp+1212,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sraw));
            tracep->chgBit(oldp+1213,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_divuw));
            tracep->chgBit(oldp+1214,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_divw));
            tracep->chgBit(oldp+1215,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulw));
            tracep->chgBit(oldp+1216,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_remuw));
            tracep->chgBit(oldp+1217,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_remw));
            tracep->chgBit(oldp+1218,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrw));
            tracep->chgBit(oldp+1219,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrs));
            tracep->chgBit(oldp+1220,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrc));
            tracep->chgBit(oldp+1221,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrwi));
            tracep->chgBit(oldp+1222,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrsi));
            tracep->chgBit(oldp+1223,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrci));
            tracep->chgBit(oldp+1224,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrw) 
                                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrs)) 
                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrc))));
            tracep->chgBit(oldp+1225,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrwi) 
                                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrsi)) 
                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrci))));
            tracep->chgBit(oldp+1226,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_ecall));
            tracep->chgBit(oldp+1227,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_ebreak));
            tracep->chgBit(oldp+1228,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mret));
            tracep->chgSData(oldp+1229,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__store_addr_offset),12);
            tracep->chgBit(oldp+1230,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op1));
            tracep->chgBit(oldp+1231,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op1));
            tracep->chgBit(oldp+1232,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com1_op1));
            tracep->chgBit(oldp+1233,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com2_op1));
            tracep->chgBit(oldp+1234,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com3_op1));
            tracep->chgBit(oldp+1235,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com4_op1));
            tracep->chgBit(oldp+1236,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com5_op1));
            tracep->chgBit(oldp+1237,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com6_op1));
            tracep->chgBit(oldp+1238,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com7_op1));
            tracep->chgBit(oldp+1239,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com8_op1));
            tracep->chgBit(oldp+1240,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__wb1_op1));
            tracep->chgBit(oldp+1241,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__wb2_op1));
            tracep->chgBit(oldp+1242,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__wb3_op1));
            tracep->chgBit(oldp+1243,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                                        > vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op1) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op1)))));
            tracep->chgBit(oldp+1244,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                                        < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op1) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op1)))));
            tracep->chgBit(oldp+1245,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__mem_op1));
            tracep->chgBit(oldp+1246,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                        < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op1) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__mem_op1)))));
            tracep->chgBit(oldp+1247,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                        < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op1) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__mem_op1)))));
            tracep->chgBit(oldp+1248,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op2));
            tracep->chgBit(oldp+1249,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op2));
            tracep->chgBit(oldp+1250,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__wb2_op2));
            tracep->chgBit(oldp+1251,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                                        > vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op2) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op2)))));
            tracep->chgBit(oldp+1252,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                                        < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op2) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op2)))));
            tracep->chgBit(oldp+1253,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__mem_op2));
            tracep->chgBit(oldp+1254,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                        < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op2) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__mem_op2)))));
            tracep->chgBit(oldp+1255,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                        < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op2) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__mem_op2)))));
            tracep->chgBit(oldp+1256,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__forcast_state));
            tracep->chgQData(oldp+1257,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__op1_sub_op2),64);
            tracep->chgBit(oldp+1259,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__op1_ls_op2));
            tracep->chgBit(oldp+1260,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__forcast_state));
            tracep->chgBit(oldp+1261,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__jalr_pc_ena));
            tracep->chgBit(oldp+1262,((1U & (((((((
                                                   (((((((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op1)) 
                                                         & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op1))) 
                                                        & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__mem_op1))) 
                                                       & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__wb1_op1))) 
                                                      & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__wb2_op1))) 
                                                     & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__wb3_op1))) 
                                                    & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com1_op1))) 
                                                   & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com2_op1))) 
                                                  & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com3_op1))) 
                                                 & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com4_op1))) 
                                                & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com5_op1))) 
                                               & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com6_op1))) 
                                              & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com7_op1))) 
                                             & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com8_op1))))));
            tracep->chgCData(oldp+1263,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__rs1),5);
            tracep->chgBit(oldp+1264,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_lui));
            tracep->chgBit(oldp+1265,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_auipc));
            tracep->chgBit(oldp+1266,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_jal));
            tracep->chgBit(oldp+1267,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_jalr));
            tracep->chgBit(oldp+1268,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_jump));
            tracep->chgBit(oldp+1269,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_srai));
            tracep->chgBit(oldp+1270,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_addiw));
            tracep->chgBit(oldp+1271,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_slliw));
            tracep->chgBit(oldp+1272,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_srliw));
            tracep->chgBit(oldp+1273,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sraiw));
            tracep->chgBit(oldp+1274,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_add));
            tracep->chgBit(oldp+1275,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sub));
            tracep->chgBit(oldp+1276,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sll));
            tracep->chgBit(oldp+1277,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_slt));
            tracep->chgBit(oldp+1278,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sltu));
            tracep->chgBit(oldp+1279,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_xor));
            tracep->chgBit(oldp+1280,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_srl));
            tracep->chgBit(oldp+1281,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sra));
            tracep->chgBit(oldp+1282,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_or));
            tracep->chgBit(oldp+1283,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_and));
            tracep->chgBit(oldp+1284,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_div));
            tracep->chgBit(oldp+1285,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_divu));
            tracep->chgBit(oldp+1286,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mul));
            tracep->chgBit(oldp+1287,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulh));
            tracep->chgBit(oldp+1288,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulhsu));
            tracep->chgBit(oldp+1289,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulhu));
            tracep->chgBit(oldp+1290,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_rem));
            tracep->chgBit(oldp+1291,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_remu));
            tracep->chgBit(oldp+1292,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_addw));
            tracep->chgBit(oldp+1293,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_subw));
            tracep->chgBit(oldp+1294,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sllw));
            tracep->chgBit(oldp+1295,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_srlw));
            tracep->chgBit(oldp+1296,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sraw));
            tracep->chgBit(oldp+1297,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_divuw));
            tracep->chgBit(oldp+1298,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_divw));
            tracep->chgBit(oldp+1299,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulw));
            tracep->chgBit(oldp+1300,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_remuw));
            tracep->chgBit(oldp+1301,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_remw));
            tracep->chgBit(oldp+1302,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrw));
            tracep->chgBit(oldp+1303,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrs));
            tracep->chgBit(oldp+1304,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrc));
            tracep->chgBit(oldp+1305,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrwi));
            tracep->chgBit(oldp+1306,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrsi));
            tracep->chgBit(oldp+1307,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrci));
            tracep->chgBit(oldp+1308,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrw) 
                                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrs)) 
                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrc))));
            tracep->chgBit(oldp+1309,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrwi) 
                                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrsi)) 
                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrci))));
            tracep->chgBit(oldp+1310,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_ecall));
            tracep->chgBit(oldp+1311,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_ebreak));
            tracep->chgBit(oldp+1312,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mret));
            tracep->chgSData(oldp+1313,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__store_addr_offset),12);
            tracep->chgBit(oldp+1314,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op1));
            tracep->chgBit(oldp+1315,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op1));
            tracep->chgBit(oldp+1316,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com1_op1));
            tracep->chgBit(oldp+1317,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com2_op1));
            tracep->chgBit(oldp+1318,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com3_op1));
            tracep->chgBit(oldp+1319,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com4_op1));
            tracep->chgBit(oldp+1320,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com5_op1));
            tracep->chgBit(oldp+1321,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com6_op1));
            tracep->chgBit(oldp+1322,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com7_op1));
            tracep->chgBit(oldp+1323,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com8_op1));
            tracep->chgBit(oldp+1324,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__wb1_op1));
            tracep->chgBit(oldp+1325,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__wb2_op1));
            tracep->chgBit(oldp+1326,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__wb3_op1));
            tracep->chgBit(oldp+1327,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                                        > vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op1) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op1)))));
            tracep->chgBit(oldp+1328,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                                        < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op1) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op1)))));
            tracep->chgBit(oldp+1329,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op1));
            tracep->chgBit(oldp+1330,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                        < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op1) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op1)))));
            tracep->chgBit(oldp+1331,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                        < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op1) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op1)))));
            tracep->chgBit(oldp+1332,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op2));
            tracep->chgBit(oldp+1333,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op2));
            tracep->chgBit(oldp+1334,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__wb2_op2));
            tracep->chgBit(oldp+1335,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                                        > vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op2) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op2)))));
            tracep->chgBit(oldp+1336,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                                        < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op2) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op2)))));
            tracep->chgBit(oldp+1337,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op2));
            tracep->chgBit(oldp+1338,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                        < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op2) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op2)))));
            tracep->chgBit(oldp+1339,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                        < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op2) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op2)))));
            tracep->chgBit(oldp+1340,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__forcast_state));
            tracep->chgQData(oldp+1341,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__op1_sub_op2),64);
            tracep->chgBit(oldp+1343,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__op1_ls_op2));
            tracep->chgBit(oldp+1344,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__forcast_state));
            tracep->chgBit(oldp+1345,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__jalr_pc_ena));
            tracep->chgBit(oldp+1346,((1U & (((((((
                                                   (((((((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op1)) 
                                                         & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op1))) 
                                                        & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op1))) 
                                                       & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__wb1_op1))) 
                                                      & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__wb2_op1))) 
                                                     & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__wb3_op1))) 
                                                    & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com1_op1))) 
                                                   & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com2_op1))) 
                                                  & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com3_op1))) 
                                                 & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com4_op1))) 
                                                & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com5_op1))) 
                                               & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com6_op1))) 
                                              & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com7_op1))) 
                                             & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com8_op1))))));
            tracep->chgBit(oldp+1347,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_waw));
            tracep->chgBit(oldp+1348,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudt_stop_waw));
            tracep->chgBit(oldp+1349,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo1_stop_war));
            tracep->chgBit(oldp+1350,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo2_stop_war));
            tracep->chgBit(oldp+1351,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudt1_stop_war));
            tracep->chgBit(oldp+1352,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudt2_stop_war));
            tracep->chgBit(oldp+1353,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_so_type) 
                                        >> 3U) & ((
                                                   ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_waw) 
                                                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo1_stop_war)) 
                                                   | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo2_stop_war)) 
                                                  | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_hard)))));
            tracep->chgBit(oldp+1354,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_so_type) 
                                        >> 3U) & ((
                                                   ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_waw) 
                                                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo1_stop_war)) 
                                                   | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo2_stop_war)) 
                                                  | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_hard)))));
            tracep->chgBit(oldp+1355,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_hard));
            tracep->chgBit(oldp+1356,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudt_stop_hard));
            tracep->chgQData(oldp+1357,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__exe_res),64);
            tracep->chgQData(oldp+1359,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__divrem_data),64);
            tracep->chgQData(oldp+1361,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__yushu),64);
            tracep->chgQData(oldp+1363,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__shang),64);
            tracep->chgQData(oldp+1365,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__exe_res),64);
            tracep->chgQData(oldp+1367,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__divrem_data),64);
            tracep->chgQData(oldp+1369,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__yushu),64);
            tracep->chgQData(oldp+1371,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__shang),64);
            tracep->chgCData(oldp+1373,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__data_byte),8);
            tracep->chgSData(oldp+1374,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__data_half_byte),16);
            tracep->chgIData(oldp+1375,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__data_word),32);
            tracep->chgQData(oldp+1376,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__store_data),64);
            tracep->chgCData(oldp+1378,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__store_mask),8);
            tracep->chgCData(oldp+1379,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__es__DOT__gating),3);
            tracep->chgBit(oldp+1380,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__decode1_ena));
            tracep->chgBit(oldp+1381,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__decode2_ena));
            tracep->chgBit(oldp+1382,(((IData)(vlSelf->ysyx_22040228__DOT__rvcpu_we) 
                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_re))));
            tracep->chgBit(oldp+1383,(vlSelf->ysyx_22040228__DOT__uncache_mmio7__DOT__uncache));
            tracep->chgBit(oldp+1384,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__icache_if_shankhand));
            tracep->chgCData(oldp+1385,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst_nxt),6);
            tracep->chgIData(oldp+1386,((0x7fffffU 
                                         & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                    >> 9U)))),23);
            tracep->chgCData(oldp+1387,((0x3fU & (IData)(
                                                         (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                          >> 3U)))),6);
            tracep->chgCData(oldp+1388,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread_nxt),6);
            tracep->chgBit(oldp+1389,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__mem_hit_ok));
            tracep->chgQData(oldp+1390,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_out_addr),64);
            tracep->chgQData(oldp+1392,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_out_data),64);
            tracep->chgCData(oldp+1394,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_out_type),4);
            tracep->chgBit(oldp+1395,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_clean_o));
            tracep->chgBit(oldp+1396,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_clean_t));
            tracep->chgBit(oldp+1397,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_i_ok));
            tracep->chgQData(oldp+1398,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_out_addr),64);
            tracep->chgWData(oldp+1400,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb),128);
            tracep->chgBit(oldp+1404,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_tag_ena1));
            tracep->chgWData(oldp+1405,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp),128);
            tracep->chgBit(oldp+1409,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_tag_ena2));
            tracep->chgCData(oldp+1410,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite_nxt),6);
            tracep->chgWData(oldp+1411,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__hitw_data_temp),128);
            tracep->chgQData(oldp+1415,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__strb_extection),64);
            tracep->chgQData(oldp+1417,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_out_addr),64);
            tracep->chgQData(oldp+1419,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_out_data),64);
            tracep->chgCData(oldp+1421,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_out_type),4);
            tracep->chgBit(oldp+1422,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_clean_o));
            tracep->chgBit(oldp+1423,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_clean_t));
            tracep->chgBit(oldp+1424,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_i_ok));
            tracep->chgQData(oldp+1425,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_out_addr),64);
            tracep->chgWData(oldp+1427,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb),128);
            tracep->chgBit(oldp+1431,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_tag_ena1));
            tracep->chgWData(oldp+1432,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp),128);
            tracep->chgBit(oldp+1436,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_tag_ena2));
            tracep->chgBit(oldp+1437,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__oteg_ena_i));
            tracep->chgCData(oldp+1438,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__oteg_addr_i),6);
            tracep->chgBit(oldp+1439,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__tteg_ena_i));
            tracep->chgCData(oldp+1440,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__tteg_addr_i),6);
            tracep->chgBit(oldp+1441,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_dcache_shankhand));
            tracep->chgBit(oldp+1442,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__write_dcache_shankhand));
            tracep->chgBit(oldp+1443,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_icache_shankhand));
            tracep->chgBit(oldp+1444,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_uncahce_shankhand));
            tracep->chgBit(oldp+1445,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__write_uncahce_shankhand));
            tracep->chgCData(oldp+1446,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state_n),3);
            tracep->chgBit(oldp+1447,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_dread));
            tracep->chgBit(oldp+1448,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_dwrite));
            tracep->chgBit(oldp+1449,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_iread));
            tracep->chgBit(oldp+1450,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_uncahceread));
            tracep->chgBit(oldp+1451,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_uncahcewrite));
            tracep->chgBit(oldp+1452,((((((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_dcache_shankhand) 
                                          | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__write_dcache_shankhand)) 
                                         | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_icache_shankhand)) 
                                        | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_uncahce_shankhand)) 
                                       | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__write_uncahce_shankhand))));
            tracep->chgBit(oldp+1453,((((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_valid) 
                                        >> 2U) & (IData)(vlSelf->ysyx_22040228__DOT__soc_axi_aw_ready))));
            tracep->chgBit(oldp+1454,((((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_valid) 
                                        >> 2U) & (IData)(vlSelf->ysyx_22040228__DOT__soc_axi_w_ready))));
            tracep->chgCData(oldp+1455,(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_write_state_nxt),2);
            tracep->chgBit(oldp+1456,(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__ar_shankhand));
            tracep->chgCData(oldp+1457,(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state_nxt),2);
            tracep->chgBit(oldp+1458,(vlSelf->ysyx_22040228__DOT__clint6__DOT__success_r));
            tracep->chgBit(oldp+1459,(vlSelf->ysyx_22040228__DOT__clint6__DOT__success_b));
            tracep->chgBit(oldp+1460,(vlSelf->ysyx_22040228__DOT__clint6__DOT__resp_success));
            tracep->chgQData(oldp+1461,(vlSelf->ysyx_22040228__DOT__clint6__DOT__wmask),64);
            tracep->chgCData(oldp+1463,(vlSelf->ysyx_22040228__DOT__clint6__DOT__timer_state_n),2);
            tracep->chgCData(oldp+1464,(vlSelf->ysyx_22040228__DOT__clint6__DOT__timew_state_n),2);
            tracep->chgBit(oldp+1465,((((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_valid) 
                                        >> 1U) & (0x200bff8ULL 
                                                  == 
                                                  (((QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[2U])))))));
            tracep->chgBit(oldp+1466,((((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_valid) 
                                        >> 1U) & (0x2004000ULL 
                                                  == 
                                                  (((QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[2U])))))));
            tracep->chgBit(oldp+1467,(((IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__success_aw) 
                                       & (0x200bff8ULL 
                                          == (((QData)((IData)(
                                                               vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[2U])))))));
            tracep->chgBit(oldp+1468,(((IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__success_aw) 
                                       & (0x2004000ULL 
                                          == (((QData)((IData)(
                                                               vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[2U])))))));
            tracep->chgBit(oldp+1469,(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__aw_shankhand));
            tracep->chgBit(oldp+1470,(((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_valid) 
                                       & (IData)(vlSelf->ysyx_22040228__DOT__io_axi_w_ready))));
            tracep->chgCData(oldp+1471,(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_write_state_nxt),2);
            tracep->chgBit(oldp+1472,(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__ar_shankhand));
            tracep->chgCData(oldp+1473,(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state_nxt),2);
        }
        tracep->chgBit(oldp+1474,(vlSelf->clk));
        tracep->chgBit(oldp+1475,(vlSelf->rst));
        tracep->chgQData(oldp+1476,(vlSelf->out_slave_addr_),64);
        tracep->chgQData(oldp+1478,(vlSelf->out_serial_data_),64);
        tracep->chgBit(oldp+1480,(vlSelf->out_serial_write_));
        tracep->chgBit(oldp+1481,(vlSelf->out_rtc_read_));
        tracep->chgQData(oldp+1482,(vlSelf->in_rtc_data_),64);
        tracep->chgBit(oldp+1484,(vlSelf->read_ena_sign_));
        tracep->chgQData(oldp+1485,(vlSelf->out_addr_outp),64);
        tracep->chgQData(oldp+1487,(vlSelf->read_data_sign_),64);
        tracep->chgBit(oldp+1489,(vlSelf->out_write_ram_ena));
        tracep->chgQData(oldp+1490,(vlSelf->out_write_ram_data),64);
        tracep->chgQData(oldp+1492,(vlSelf->out_write_ram_addr),64);
        tracep->chgCData(oldp+1494,(((IData)(vlSelf->rst)
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
        tracep->chgCData(oldp+1495,(((IData)(vlSelf->rst)
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
        tracep->chgBit(oldp+1496,((1U & (~ (IData)(vlSelf->rst)))));
        tracep->chgBit(oldp+1497,((1U & ((~ (IData)(vlSelf->rst)) 
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
        tracep->chgBit(oldp+1498,((1U & ((~ (IData)(vlSelf->rst)) 
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
        tracep->chgBit(oldp+1499,((1U & ((~ (IData)(vlSelf->rst)) 
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
        tracep->chgQData(oldp+1500,(((2U == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state))
                                      ? vlSelf->read_data_sign_
                                      : 0ULL)),64);
        tracep->chgQData(oldp+1502,(((2U == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state))
                                      ? vlSelf->in_rtc_data_
                                      : 0ULL)),64);
        tracep->chgCData(oldp+1504,(((IData)(vlSelf->rst)
                                      ? 0U : (7U & 
                                              (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                               >> 0xcU)))),3);
        tracep->chgCData(oldp+1505,(((IData)(vlSelf->rst)
                                      ? 0U : (7U & 
                                              (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                               >> 0xcU)))),3);
        tracep->chgIData(oldp+1506,(((IData)(vlSelf->rst)
                                      ? 0U : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst)),32);
        tracep->chgIData(oldp+1507,(((IData)(vlSelf->rst)
                                      ? 0U : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst)),32);
        tracep->chgIData(oldp+1508,(((IData)(vlSelf->rst)
                                      ? 0U : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_inst)),32);
        tracep->chgQData(oldp+1509,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1ena) 
                                                  & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addrg) 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr))) 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_enag))
                                                 ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_datag
                                                 : 
                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr]))),64);
        tracep->chgQData(oldp+1511,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2ena) 
                                                  & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addrg) 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr))) 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_enag))
                                                 ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_datag
                                                 : 
                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr]))),64);
        tracep->chgQData(oldp+1513,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1ena) 
                                                  & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addrg) 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1addr))) 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_enag))
                                                 ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_datag
                                                 : 
                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1addr]))),64);
        tracep->chgQData(oldp+1515,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2ena) 
                                                  & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addrg) 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr))) 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_enag))
                                                 ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_datag
                                                 : 
                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr]))),64);
        tracep->chgQData(oldp+1517,(((IData)(vlSelf->rst)
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
        tracep->chgQData(oldp+1519,(((IData)(vlSelf->rst)
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
        tracep->chgQData(oldp+1521,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((1U 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                            >> 2U)))
                                                 ? 
                                                ((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data)) 
                                                 << 0x20U)
                                                 : (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data))))),64);
        tracep->chgCData(oldp+1523,(((IData)(vlSelf->rst)
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
        tracep->chgCData(oldp+1524,(((IData)(vlSelf->rst)
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
        tracep->chgCData(oldp+1525,(((IData)(vlSelf->rst)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                             >> 2U)))
                                               ? 0xf0U
                                               : 0xfU))),8);
        tracep->chgBit(oldp+1526,((1U & (((~ (IData)(vlSelf->rst)) 
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
