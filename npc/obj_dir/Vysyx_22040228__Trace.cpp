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
    VlWide<4>/*127:0*/ __Vtemp1125;
    VlWide<4>/*127:0*/ __Vtemp1128;
    VlWide<4>/*127:0*/ __Vtemp1135;
    VlWide<4>/*127:0*/ __Vtemp1140;
    VlWide<4>/*127:0*/ __Vtemp1147;
    VlWide<4>/*127:0*/ __Vtemp1152;
    VlWide<4>/*127:0*/ __Vtemp1160;
    VlWide<4>/*127:0*/ __Vtemp1168;
    VlWide<4>/*127:0*/ __Vtemp1169;
    VlWide<4>/*127:0*/ __Vtemp1178;
    VlWide<4>/*127:0*/ __Vtemp1179;
    VlWide<4>/*127:0*/ __Vtemp1195;
    VlWide<4>/*127:0*/ __Vtemp1202;
    VlWide<4>/*127:0*/ __Vtemp1203;
    VlWide<4>/*127:0*/ __Vtemp1220;
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
            tracep->chgIData(oldp+171,(vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U]),32);
            tracep->chgIData(oldp+172,(vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U]),32);
            tracep->chgIData(oldp+173,(vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U]),32);
            tracep->chgIData(oldp+174,(vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U]),32);
            tracep->chgIData(oldp+175,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm1),20);
            tracep->chgSData(oldp+176,((vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U] 
                                        >> 0x14U)),12);
            tracep->chgSData(oldp+177,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm1),12);
            tracep->chgIData(oldp+178,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm2),20);
            tracep->chgSData(oldp+179,((vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U] 
                                        >> 0x14U)),12);
            tracep->chgSData(oldp+180,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm2),12);
            tracep->chgIData(oldp+181,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm3),20);
            tracep->chgSData(oldp+182,((vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] 
                                        >> 0x14U)),12);
            tracep->chgSData(oldp+183,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm3),12);
            tracep->chgIData(oldp+184,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm4),20);
            tracep->chgSData(oldp+185,((vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] 
                                        >> 0x14U)),12);
            tracep->chgSData(oldp+186,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm4),12);
            tracep->chgCData(oldp+187,((0x7fU & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U])),7);
            tracep->chgCData(oldp+188,((0x7fU & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U])),7);
            tracep->chgCData(oldp+189,((0x7fU & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U])),7);
            tracep->chgCData(oldp+190,((0x7fU & vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U])),7);
            tracep->chgBit(oldp+191,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal1));
            tracep->chgBit(oldp+192,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr1));
            tracep->chgBit(oldp+193,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx1));
            tracep->chgBit(oldp+194,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal2));
            tracep->chgBit(oldp+195,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr2));
            tracep->chgBit(oldp+196,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx2));
            tracep->chgBit(oldp+197,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal3));
            tracep->chgBit(oldp+198,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr3));
            tracep->chgBit(oldp+199,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx3));
            tracep->chgBit(oldp+200,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal4));
            tracep->chgBit(oldp+201,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr4));
            tracep->chgBit(oldp+202,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx4));
            tracep->chgQData(oldp+203,((4ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)),64);
            tracep->chgQData(oldp+205,((8ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)),64);
            tracep->chgQData(oldp+207,((0xcULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)),64);
            tracep->chgBit(oldp+209,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena1));
            tracep->chgBit(oldp+210,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena2));
            tracep->chgBit(oldp+211,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena3));
            tracep->chgBit(oldp+212,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena4));
            tracep->chgCData(oldp+213,(((0U == (0xfU 
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
            tracep->chgBit(oldp+214,((1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__i_cache_inst_valid)))));
            tracep->chgCData(oldp+215,(((0xcU == (0xfU 
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
            tracep->chgCData(oldp+216,(((0xcU == (0xfU 
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
            tracep->chgQData(oldp+217,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_temp),64);
            tracep->chgBit(oldp+219,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_temp_ena));
            tracep->chgCData(oldp+220,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[0]),4);
            tracep->chgCData(oldp+221,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[1]),4);
            tracep->chgCData(oldp+222,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[2]),4);
            tracep->chgCData(oldp+223,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[3]),4);
            tracep->chgCData(oldp+224,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[4]),4);
            tracep->chgCData(oldp+225,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[5]),4);
            tracep->chgCData(oldp+226,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[6]),4);
            tracep->chgCData(oldp+227,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[7]),4);
            tracep->chgCData(oldp+228,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[8]),4);
            tracep->chgCData(oldp+229,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[9]),4);
            tracep->chgCData(oldp+230,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[10]),4);
            tracep->chgCData(oldp+231,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[11]),4);
            tracep->chgCData(oldp+232,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[12]),4);
            tracep->chgCData(oldp+233,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[13]),4);
            tracep->chgCData(oldp+234,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[14]),4);
            tracep->chgCData(oldp+235,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[15]),4);
            tracep->chgCData(oldp+236,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addo),3);
            tracep->chgCData(oldp+237,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadt),3);
            tracep->chgCData(oldp+238,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadw),3);
            tracep->chgWData(oldp+239,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc),256);
            tracep->chgWData(oldp+247,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst),128);
            tracep->chgWData(oldp+251,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc),256);
            tracep->chgWData(oldp+259,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst),128);
            tracep->chgBit(oldp+263,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__clean_temp));
            tracep->chgBit(oldp+264,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_clean));
            tracep->chgCData(oldp+265,((0x7fU & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)),7);
            tracep->chgCData(oldp+266,((0x1fU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+267,((7U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                              >> 0xcU))),3);
            tracep->chgSData(oldp+268,((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                        >> 0x14U)),12);
            tracep->chgCData(oldp+269,((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+270,((0x1fU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                 >> 0x14U))),5);
            tracep->chgIData(oldp+271,((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                        >> 0xcU)),20);
            tracep->chgSData(oldp+272,(((0xfe0U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                            >> 7U)))),12);
            tracep->chgSData(oldp+273,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__b_imm),12);
            tracep->chgBit(oldp+274,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_fence_i));
            tracep->chgCData(oldp+275,((0x7fU & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)),7);
            tracep->chgCData(oldp+276,((0x1fU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+277,((7U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                              >> 0xcU))),3);
            tracep->chgSData(oldp+278,((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                        >> 0x14U)),12);
            tracep->chgCData(oldp+279,((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+280,((0x1fU & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                 >> 0x14U))),5);
            tracep->chgIData(oldp+281,((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                        >> 0xcU)),20);
            tracep->chgSData(oldp+282,(((0xfe0U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                            >> 7U)))),12);
            tracep->chgSData(oldp+283,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__b_imm),12);
            tracep->chgBit(oldp+284,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_fence_i));
            tracep->chgCData(oldp+285,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__reg_exe_name[0]),5);
            tracep->chgCData(oldp+286,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__reg_exe_name[1]),5);
            tracep->chgCData(oldp+287,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__reg_exe_name[2]),5);
            tracep->chgQData(oldp+288,((1ULL + (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data))),64);
            tracep->chgQData(oldp+290,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_sub_op2),64);
            tracep->chgQData(oldp+292,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_add_op2),64);
            tracep->chgQData(oldp+294,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_addw_op2),64);
            tracep->chgBit(oldp+296,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_ls_op2));
            tracep->chgQData(oldp+297,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__shift_res),64);
            tracep->chgIData(oldp+299,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_sllw_op2),32);
            tracep->chgQData(oldp+300,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__sllw_res),64);
            tracep->chgIData(oldp+302,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_srlw_op2),32);
            tracep->chgQData(oldp+303,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__srlw_res),64);
            tracep->chgIData(oldp+305,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_sraw_op2),32);
            tracep->chgQData(oldp+306,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__sraw_res),64);
            tracep->chgIData(oldp+308,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_subw_op2),32);
            tracep->chgQData(oldp+309,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_subw_op2 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_subw_op2)))),64);
            tracep->chgQData(oldp+311,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__upper_imm),64);
            tracep->chgQData(oldp+313,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_data),64);
            tracep->chgBit(oldp+315,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_finish_sign));
            tracep->chgBit(oldp+316,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_ready));
            tracep->chgBit(oldp+317,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__finish));
            tracep->chgBit(oldp+318,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__dr_ready));
            tracep->chgQData(oldp+319,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_divdata),64);
            tracep->chgQData(oldp+321,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op2_divdata),64);
            tracep->chgBit(oldp+323,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena));
            tracep->chgSData(oldp+324,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx),12);
            tracep->chgQData(oldp+325,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__read_csr_data),64);
            tracep->chgBit(oldp+327,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena));
            tracep->chgBit(oldp+328,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__cmt_mret_ena));
            tracep->chgBit(oldp+329,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en));
            tracep->chgBit(oldp+330,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en));
            tracep->chgQData(oldp+331,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data),64);
            tracep->chgQData(oldp+333,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__trap_mcause_value),64);
            tracep->chgQData(oldp+335,((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__read_csr_data 
                                        | vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data)),64);
            tracep->chgQData(oldp+337,((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__read_csr_data 
                                        & (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data))),64);
            tracep->chgBit(oldp+339,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__mult_valid));
            tracep->chgBit(oldp+340,((1U & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                                                    >> 0x3fU)))));
            tracep->chgBit(oldp+341,((1U & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data 
                                                    >> 0x3fU)))));
            tracep->chgQData(oldp+342,(((1U & (IData)(
                                                      (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data 
                                                       >> 0x3fU)))
                                         ? (1ULL + 
                                            (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data))
                                         : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data)),64);
            tracep->chgQData(oldp+344,(((1U & (IData)(
                                                      (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data 
                                                       >> 0x3fU)))
                                         ? (1ULL + 
                                            (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data))
                                         : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data)),64);
            tracep->chgWData(oldp+346,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand),128);
            tracep->chgQData(oldp+350,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multipler),64);
            if ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multipler))) {
                __Vtemp1125[0U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[0U];
                __Vtemp1125[1U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[1U];
                __Vtemp1125[2U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[2U];
                __Vtemp1125[3U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand[3U];
            } else {
                __Vtemp1125[0U] = 0U;
                __Vtemp1125[1U] = 0U;
                __Vtemp1125[2U] = 0U;
                __Vtemp1125[3U] = 0U;
            }
            tracep->chgWData(oldp+352,(__Vtemp1125),128);
            tracep->chgWData(oldp+356,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp),128);
            tracep->chgBit(oldp+360,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_signbit));
            tracep->chgCData(oldp+361,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__counter),7);
            tracep->chgBit(oldp+362,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__sign));
            tracep->chgQData(oldp+363,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__dividend_t),64);
            tracep->chgQData(oldp+365,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__divider_t),64);
            tracep->chgWData(oldp+367,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a),129);
            tracep->chgWData(oldp+372,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_b),65);
            tracep->chgBit(oldp+375,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__sigin_inst));
            tracep->chgBit(oldp+376,((0xb00U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx))));
            tracep->chgBit(oldp+377,(((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en) 
                                      & (0xb00U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)))));
            tracep->chgBit(oldp+378,(((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en) 
                                      & (0xb00U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)))));
            tracep->chgQData(oldp+379,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mcycle),64);
            tracep->chgBit(oldp+381,((0x300U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx))));
            tracep->chgBit(oldp+382,(((0x300U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en))));
            tracep->chgBit(oldp+383,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mstatus));
            tracep->chgBit(oldp+384,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__mstatus_mpie_ena));
            tracep->chgBit(oldp+385,((1U & (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena) 
                                             | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena))
                                             ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mie)
                                             : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__cmt_mret_ena) 
                                                | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mstatus)
                                                    ? (IData)(
                                                              (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data 
                                                               >> 7U))
                                                    : (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mpie)))))));
            tracep->chgBit(oldp+386,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mpie));
            tracep->chgBit(oldp+387,((1U & ((~ ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena) 
                                                | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena))) 
                                            & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__cmt_mret_ena)
                                                ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mpie)
                                                : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mstatus)
                                                    ? (IData)(
                                                              (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data 
                                                               >> 3U))
                                                    : (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mie)))))));
            tracep->chgBit(oldp+388,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mie));
            tracep->chgCData(oldp+389,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena) 
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
            tracep->chgCData(oldp+390,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mpp),2);
            tracep->chgCData(oldp+391,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_fs),2);
            tracep->chgBit(oldp+392,((3U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_fs))));
            tracep->chgQData(oldp+393,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus),64);
            tracep->chgBit(oldp+395,((0x305U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx))));
            tracep->chgBit(oldp+396,(((((0x305U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                        & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en)) 
                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena)) 
                                      | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena))));
            tracep->chgBit(oldp+397,(((0x305U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en))));
            tracep->chgQData(oldp+398,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mtvec_base),62);
            tracep->chgQData(oldp+400,((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mtvec_base 
                                        << 2U)),64);
            tracep->chgBit(oldp+402,((0x341U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx))));
            tracep->chgBit(oldp+403,((((0x341U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                       & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en)) 
                                      | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__cmt_mret_ena))));
            tracep->chgBit(oldp+404,(((((0x341U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                        & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en)) 
                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena)) 
                                      | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena))));
            tracep->chgQData(oldp+405,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mepc),64);
            tracep->chgBit(oldp+407,((0x342U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx))));
            tracep->chgBit(oldp+408,(((0x342U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en))));
            tracep->chgBit(oldp+409,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mcause));
            tracep->chgBit(oldp+410,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mcause) 
                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena)) 
                                      | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena))));
            tracep->chgQData(oldp+411,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena) 
                                         | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena))
                                         ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__trap_mcause_value
                                         : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mcause)
                                             ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data
                                             : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mcause))),64);
            tracep->chgQData(oldp+413,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mcause),64);
            tracep->chgBit(oldp+415,((0x304U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx))));
            tracep->chgBit(oldp+416,(((0x304U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en))));
            tracep->chgBit(oldp+417,(((0x304U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en))));
            tracep->chgBit(oldp+418,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mie_mtie));
            tracep->chgQData(oldp+419,(((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mie_mtie)) 
                                        << 7U)),64);
            tracep->chgBit(oldp+421,((0x344U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx))));
            tracep->chgBit(oldp+422,(((0x344U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en))));
            tracep->chgBit(oldp+423,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mip_mtip));
            tracep->chgQData(oldp+424,((QData)((IData)(
                                                       ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mip_mtip) 
                                                        << 7U)))),64);
            tracep->chgBit(oldp+426,((0x340U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx))));
            tracep->chgBit(oldp+427,(((0x340U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en))));
            tracep->chgBit(oldp+428,(((0x340U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en))));
            tracep->chgQData(oldp+429,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mscrstch),64);
            tracep->chgBit(oldp+431,((0xf11U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx))));
            tracep->chgBit(oldp+432,(((0xf11U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en))));
            tracep->chgQData(oldp+433,((1ULL + (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data))),64);
            tracep->chgQData(oldp+435,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_sub_op2),64);
            tracep->chgQData(oldp+437,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_add_op2),64);
            tracep->chgQData(oldp+439,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_addw_op2),64);
            tracep->chgBit(oldp+441,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_ls_op2));
            tracep->chgQData(oldp+442,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__shift_res),64);
            tracep->chgIData(oldp+444,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_sllw_op2),32);
            tracep->chgQData(oldp+445,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__sllw_res),64);
            tracep->chgIData(oldp+447,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_srlw_op2),32);
            tracep->chgQData(oldp+448,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__srlw_res),64);
            tracep->chgIData(oldp+450,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_sraw_op2),32);
            tracep->chgQData(oldp+451,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__sraw_res),64);
            tracep->chgIData(oldp+453,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_subw_op2),32);
            tracep->chgQData(oldp+454,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_subw_op2 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_subw_op2)))),64);
            tracep->chgQData(oldp+456,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__upper_imm),64);
            tracep->chgQData(oldp+458,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_data),64);
            tracep->chgBit(oldp+460,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_finish_sign));
            tracep->chgBit(oldp+461,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_ready));
            tracep->chgBit(oldp+462,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__finish));
            tracep->chgBit(oldp+463,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__dr_ready));
            tracep->chgQData(oldp+464,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_divdata),64);
            tracep->chgQData(oldp+466,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op2_divdata),64);
            tracep->chgBit(oldp+468,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__mult_valid));
            tracep->chgBit(oldp+469,((1U & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                                                    >> 0x3fU)))));
            tracep->chgBit(oldp+470,((1U & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data 
                                                    >> 0x3fU)))));
            tracep->chgQData(oldp+471,(((1U & (IData)(
                                                      (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data 
                                                       >> 0x3fU)))
                                         ? (1ULL + 
                                            (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data))
                                         : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data)),64);
            tracep->chgQData(oldp+473,(((1U & (IData)(
                                                      (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data 
                                                       >> 0x3fU)))
                                         ? (1ULL + 
                                            (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data))
                                         : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data)),64);
            tracep->chgWData(oldp+475,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand),128);
            tracep->chgQData(oldp+479,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multipler),64);
            if ((1U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multipler))) {
                __Vtemp1128[0U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[0U];
                __Vtemp1128[1U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[1U];
                __Vtemp1128[2U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[2U];
                __Vtemp1128[3U] = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand[3U];
            } else {
                __Vtemp1128[0U] = 0U;
                __Vtemp1128[1U] = 0U;
                __Vtemp1128[2U] = 0U;
                __Vtemp1128[3U] = 0U;
            }
            tracep->chgWData(oldp+481,(__Vtemp1128),128);
            tracep->chgWData(oldp+485,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp),128);
            tracep->chgBit(oldp+489,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_signbit));
            tracep->chgCData(oldp+490,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__counter),7);
            tracep->chgBit(oldp+491,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__sign));
            tracep->chgQData(oldp+492,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__dividend_t),64);
            tracep->chgQData(oldp+494,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__divider_t),64);
            tracep->chgWData(oldp+496,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a),129);
            tracep->chgWData(oldp+501,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_b),65);
            tracep->chgBit(oldp+504,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__sigin_inst));
            tracep->chgCData(oldp+505,((7U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset))),3);
            tracep->chgCData(oldp+506,((3U & (IData)(
                                                     (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                      >> 1U)))),2);
            tracep->chgBit(oldp+507,((1U & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                    >> 2U)))));
            tracep->chgWData(oldp+508,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff[0]),68);
            tracep->chgWData(oldp+511,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff[1]),68);
            tracep->chgWData(oldp+514,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff[2]),68);
            tracep->chgWData(oldp+517,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff[3]),68);
            tracep->chgWData(oldp+520,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff[4]),68);
            tracep->chgWData(oldp+523,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff[5]),68);
            tracep->chgWData(oldp+526,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff[6]),68);
            tracep->chgWData(oldp+529,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff[7]),68);
            tracep->chgCData(oldp+532,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_addrbuff[0]),5);
            tracep->chgCData(oldp+533,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_addrbuff[1]),5);
            tracep->chgCData(oldp+534,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_addrbuff[2]),5);
            tracep->chgCData(oldp+535,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_addrbuff[3]),5);
            tracep->chgCData(oldp+536,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_addrbuff[4]),5);
            tracep->chgCData(oldp+537,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_addrbuff[5]),5);
            tracep->chgCData(oldp+538,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_addrbuff[6]),5);
            tracep->chgCData(oldp+539,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_addrbuff[7]),5);
            tracep->chgQData(oldp+540,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_databuff[0]),64);
            tracep->chgQData(oldp+542,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_databuff[1]),64);
            tracep->chgQData(oldp+544,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_databuff[2]),64);
            tracep->chgQData(oldp+546,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_databuff[3]),64);
            tracep->chgQData(oldp+548,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_databuff[4]),64);
            tracep->chgQData(oldp+550,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_databuff[5]),64);
            tracep->chgQData(oldp+552,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_databuff[6]),64);
            tracep->chgQData(oldp+554,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_databuff[7]),64);
            tracep->chgBit(oldp+556,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_enabuff[0]));
            tracep->chgBit(oldp+557,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_enabuff[1]));
            tracep->chgBit(oldp+558,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_enabuff[2]));
            tracep->chgBit(oldp+559,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_enabuff[3]));
            tracep->chgBit(oldp+560,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_enabuff[4]));
            tracep->chgBit(oldp+561,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_enabuff[5]));
            tracep->chgBit(oldp+562,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_enabuff[6]));
            tracep->chgBit(oldp+563,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_enabuff[7]));
            tracep->chgBit(oldp+564,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff1_pc1));
            tracep->chgBit(oldp+565,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff1_pc2));
            tracep->chgBit(oldp+566,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff1_pc3));
            tracep->chgBit(oldp+567,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff2_pc1));
            tracep->chgBit(oldp+568,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff2_pc2));
            tracep->chgBit(oldp+569,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff2_pc3));
            tracep->chgBit(oldp+570,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff3_pc1));
            tracep->chgBit(oldp+571,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff3_pc2));
            tracep->chgBit(oldp+572,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff3_pc3));
            tracep->chgBit(oldp+573,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff4_pc1));
            tracep->chgBit(oldp+574,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff4_pc2));
            tracep->chgBit(oldp+575,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff4_pc3));
            tracep->chgBit(oldp+576,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff5_pc1));
            tracep->chgBit(oldp+577,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff5_pc2));
            tracep->chgBit(oldp+578,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff5_pc3));
            tracep->chgBit(oldp+579,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff6_pc1));
            tracep->chgBit(oldp+580,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff6_pc2));
            tracep->chgBit(oldp+581,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff6_pc3));
            tracep->chgBit(oldp+582,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff7_pc1));
            tracep->chgBit(oldp+583,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff7_pc2));
            tracep->chgBit(oldp+584,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff7_pc3));
            tracep->chgBit(oldp+585,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff8_pc1));
            tracep->chgBit(oldp+586,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff8_pc2));
            tracep->chgBit(oldp+587,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff8_pc3));
            tracep->chgBit(oldp+588,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff1));
            tracep->chgBit(oldp+589,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff2));
            tracep->chgBit(oldp+590,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff3));
            tracep->chgBit(oldp+591,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff4));
            tracep->chgBit(oldp+592,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff5));
            tracep->chgBit(oldp+593,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff6));
            tracep->chgBit(oldp+594,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff7));
            tracep->chgBit(oldp+595,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff8_pc1) 
                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff8_pc2)) 
                                      | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff8_pc3))));
            tracep->chgBit(oldp+596,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc7));
            tracep->chgBit(oldp+597,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc6));
            tracep->chgBit(oldp+598,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc5));
            tracep->chgBit(oldp+599,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc4));
            tracep->chgBit(oldp+600,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc3));
            tracep->chgBit(oldp+601,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc2));
            tracep->chgBit(oldp+602,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc1));
            tracep->chgBit(oldp+603,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc0));
            tracep->chgBit(oldp+604,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__difftest_ena));
            tracep->chgQData(oldp+605,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__difftest_pc),64);
            tracep->chgQData(oldp+607,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[0]),64);
            tracep->chgQData(oldp+609,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[1]),64);
            tracep->chgQData(oldp+611,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[2]),64);
            tracep->chgQData(oldp+613,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[3]),64);
            tracep->chgQData(oldp+615,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[4]),64);
            tracep->chgQData(oldp+617,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[5]),64);
            tracep->chgQData(oldp+619,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[6]),64);
            tracep->chgQData(oldp+621,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[7]),64);
            tracep->chgQData(oldp+623,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[8]),64);
            tracep->chgQData(oldp+625,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[9]),64);
            tracep->chgQData(oldp+627,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[10]),64);
            tracep->chgQData(oldp+629,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[11]),64);
            tracep->chgQData(oldp+631,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[12]),64);
            tracep->chgQData(oldp+633,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[13]),64);
            tracep->chgQData(oldp+635,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[14]),64);
            tracep->chgQData(oldp+637,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[15]),64);
            tracep->chgQData(oldp+639,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[16]),64);
            tracep->chgQData(oldp+641,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[17]),64);
            tracep->chgQData(oldp+643,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[18]),64);
            tracep->chgQData(oldp+645,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[19]),64);
            tracep->chgQData(oldp+647,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[20]),64);
            tracep->chgQData(oldp+649,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[21]),64);
            tracep->chgQData(oldp+651,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[22]),64);
            tracep->chgQData(oldp+653,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[23]),64);
            tracep->chgQData(oldp+655,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[24]),64);
            tracep->chgQData(oldp+657,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[25]),64);
            tracep->chgQData(oldp+659,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[26]),64);
            tracep->chgQData(oldp+661,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[27]),64);
            tracep->chgQData(oldp+663,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[28]),64);
            tracep->chgQData(oldp+665,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[29]),64);
            tracep->chgQData(oldp+667,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[30]),64);
            tracep->chgQData(oldp+669,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[31]),64);
            tracep->chgIData(oldp+671,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__i),32);
            tracep->chgIData(oldp+672,((0x3fffffU & (IData)(
                                                            (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                             >> 0xaU)))),22);
            tracep->chgCData(oldp+673,((0x3fU & (IData)(
                                                        (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                         >> 4U)))),6);
            tracep->chgCData(oldp+674,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst),6);
            tracep->chgCData(oldp+675,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__fence_counter),7);
            tracep->chgBit(oldp+676,((0x20U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst))));
            tracep->chgBit(oldp+677,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__read_ok));
            tracep->chgBit(oldp+678,(((4U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
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
            tracep->chgWData(oldp+679,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_),256);
            tracep->chgWData(oldp+687,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_),128);
            tracep->chgBit(oldp+691,(((4U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
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
            tracep->chgBit(oldp+692,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__write_i_ok));
            tracep->chgBit(oldp+693,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cahce_miss_ena));
            tracep->chgQData(oldp+694,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cache_miss_addr),64);
            tracep->chgBit(oldp+696,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__write_m_ok));
            tracep->chgBit(oldp+697,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cache_mism_ena));
            tracep->chgQData(oldp+698,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cahce_mism_addr),64);
            tracep->chgCData(oldp+700,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl),2);
            tracep->chgCData(oldp+701,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl_n),2);
            tracep->chgWData(oldp+702,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date),128);
            tracep->chgBit(oldp+706,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o));
            tracep->chgBit(oldp+707,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t));
            tracep->chgCData(oldp+708,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh),3);
            tracep->chgCData(oldp+709,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh_n),3);
            tracep->chgWData(oldp+710,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data),128);
            tracep->chgBit(oldp+714,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o));
            tracep->chgBit(oldp+715,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t));
            tracep->chgBit(oldp+716,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__oteg_ena_i));
            tracep->chgBit(oldp+717,((0xa8U != (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))));
            tracep->chgIData(oldp+718,(((0xa8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                         ? 0U : (0x3fffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                                                            >> 0xaU))))),22);
            tracep->chgCData(oldp+719,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__oteg_addr_i),6);
            tracep->chgIData(oldp+720,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_data_r),22);
            tracep->chgBit(oldp+721,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r));
            tracep->chgBit(oldp+722,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__tteg_ena_i));
            tracep->chgIData(oldp+723,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_data_r),22);
            tracep->chgBit(oldp+724,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r));
            tracep->chgWData(oldp+725,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outo),128);
            if (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                 & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o))) {
                __Vtemp1135[0U] = 0xffffffffU;
                __Vtemp1135[1U] = 0xffffffffU;
                __Vtemp1135[2U] = 0xffffffffU;
                __Vtemp1135[3U] = 0xffffffffU;
            } else {
                __Vtemp1135[0U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                    ? 0xffffffffU : 0U);
                __Vtemp1135[1U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                    ? 0xffffffffU : 0U);
                __Vtemp1135[2U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                    ? 0xffffffffU : 0U);
                __Vtemp1135[3U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                    ? 0xffffffffU : 0U);
            }
            tracep->chgWData(oldp+729,(__Vtemp1135),128);
            if (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                 & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o))) {
                __Vtemp1140[0U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[0U];
                __Vtemp1140[1U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[1U];
                __Vtemp1140[2U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[2U];
                __Vtemp1140[3U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[3U];
            } else {
                __Vtemp1140[0U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                    ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[0U]
                                    : 0U);
                __Vtemp1140[1U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                    ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[1U]
                                    : 0U);
                __Vtemp1140[2U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                    ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[2U]
                                    : 0U);
                __Vtemp1140[3U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                    ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[3U]
                                    : 0U);
            }
            tracep->chgWData(oldp+733,(__Vtemp1140),128);
            tracep->chgBit(oldp+737,((((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                       & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o)) 
                                      | ((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                         & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o)))));
            tracep->chgWData(oldp+738,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outt),128);
            if (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                 & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t))) {
                __Vtemp1147[0U] = 0xffffffffU;
                __Vtemp1147[1U] = 0xffffffffU;
                __Vtemp1147[2U] = 0xffffffffU;
                __Vtemp1147[3U] = 0xffffffffU;
            } else {
                __Vtemp1147[0U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                    ? 0xffffffffU : 0U);
                __Vtemp1147[1U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                    ? 0xffffffffU : 0U);
                __Vtemp1147[2U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                    ? 0xffffffffU : 0U);
                __Vtemp1147[3U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                    ? 0xffffffffU : 0U);
            }
            tracep->chgWData(oldp+742,(__Vtemp1147),128);
            if (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                 & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t))) {
                __Vtemp1152[0U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[0U];
                __Vtemp1152[1U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[1U];
                __Vtemp1152[2U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[2U];
                __Vtemp1152[3U] = vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date[3U];
            } else {
                __Vtemp1152[0U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                    ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[0U]
                                    : 0U);
                __Vtemp1152[1U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                    ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[1U]
                                    : 0U);
                __Vtemp1152[2U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                    ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[2U]
                                    : 0U);
                __Vtemp1152[3U] = (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                    ? vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data[3U]
                                    : 0U);
            }
            tracep->chgWData(oldp+746,(__Vtemp1152),128);
            tracep->chgBit(oldp+750,((((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                       & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t)) 
                                      | ((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                         & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t)))));
            tracep->chgIData(oldp+751,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i),32);
            tracep->chgBit(oldp+752,((1U & (~ (((2U 
                                                 == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o)) 
                                               | ((8U 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o)))))));
            __Vtemp1160[0U] = (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o))
                                   ? 0xffffffffU : 
                                  (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                    ? 0xffffffffU : 0U)));
            __Vtemp1160[1U] = (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o))
                                   ? 0xffffffffU : 
                                  (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                    ? 0xffffffffU : 0U)));
            __Vtemp1160[2U] = (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o))
                                   ? 0xffffffffU : 
                                  (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                    ? 0xffffffffU : 0U)));
            __Vtemp1160[3U] = (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o))
                                   ? 0xffffffffU : 
                                  (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o))
                                    ? 0xffffffffU : 0U)));
            tracep->chgWData(oldp+753,(__Vtemp1160),128);
            tracep->chgBit(oldp+757,((1U & (~ (((2U 
                                                 == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t)) 
                                               | ((8U 
                                                   == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t)))))));
            __Vtemp1168[0U] = (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t))
                                   ? 0xffffffffU : 
                                  (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                    ? 0xffffffffU : 0U)));
            __Vtemp1168[1U] = (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t))
                                   ? 0xffffffffU : 
                                  (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                    ? 0xffffffffU : 0U)));
            __Vtemp1168[2U] = (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t))
                                   ? 0xffffffffU : 
                                  (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                    ? 0xffffffffU : 0U)));
            __Vtemp1168[3U] = (~ (((2U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                   & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t))
                                   ? 0xffffffffU : 
                                  (((8U == (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst)) 
                                    & (IData)(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t))
                                    ? 0xffffffffU : 0U)));
            tracep->chgWData(oldp+758,(__Vtemp1168),128);
            tracep->chgCData(oldp+762,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter),7);
            tracep->chgBit(oldp+763,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_valid_req));
            tracep->chgBit(oldp+764,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__read_request));
            tracep->chgBit(oldp+765,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__read_request));
            tracep->chgBit(oldp+766,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_request));
            tracep->chgBit(oldp+767,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_success));
            tracep->chgBit(oldp+768,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_write_valid1));
            tracep->chgBit(oldp+769,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_write_valid2));
            tracep->chgQData(oldp+770,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_data_out),64);
            tracep->chgQData(oldp+772,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_addr_out),64);
            tracep->chgCData(oldp+774,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_type_out),4);
            tracep->chgBit(oldp+775,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__delay_oclk));
            tracep->chgBit(oldp+776,((1U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))));
            tracep->chgBit(oldp+777,((1U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))));
            tracep->chgCData(oldp+778,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread),6);
            tracep->chgBit(oldp+779,((2U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))));
            tracep->chgBit(oldp+780,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__read_ok));
            tracep->chgBit(oldp+781,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_ok));
            tracep->chgCData(oldp+782,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_out_type),4);
            tracep->chgBit(oldp+783,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_ena));
            tracep->chgBit(oldp+784,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regr));
            tracep->chgBit(oldp+785,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regr_));
            tracep->chgCData(oldp+786,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite),6);
            tracep->chgBit(oldp+787,((2U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))));
            tracep->chgBit(oldp+788,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__read_w_ok));
            tracep->chgBit(oldp+789,((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))));
            tracep->chgBit(oldp+790,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_ok));
            tracep->chgCData(oldp+791,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_out_type),4);
            tracep->chgBit(oldp+792,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_ena));
            tracep->chgBit(oldp+793,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regw));
            tracep->chgBit(oldp+794,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regw_));
            tracep->chgIData(oldp+795,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__i),32);
            tracep->chgIData(oldp+796,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__j),32);
            tracep->chgIData(oldp+797,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r),23);
            tracep->chgBit(oldp+798,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r));
            tracep->chgIData(oldp+799,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r),23);
            tracep->chgBit(oldp+800,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r));
            tracep->chgWData(oldp+801,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out),128);
            tracep->chgCData(oldp+805,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state),3);
            tracep->chgBit(oldp+806,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_dread));
            tracep->chgBit(oldp+807,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_unread));
            tracep->chgBit(oldp+808,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_dwrite));
            tracep->chgBit(oldp+809,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_unwrite));
            tracep->chgBit(oldp+810,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_iread));
            tracep->chgCData(oldp+811,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state),3);
            tracep->chgBit(oldp+812,((((((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_dread) 
                                         | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_dwrite)) 
                                        | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_iread)) 
                                       | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_unread)) 
                                      | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_unwrite))));
            tracep->chgBit(oldp+813,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__aw_enable));
            tracep->chgCData(oldp+814,(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_write_state),2);
            tracep->chgCData(oldp+815,(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state),2);
            tracep->chgQData(oldp+816,(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__write_data_reg),64);
            tracep->chgQData(oldp+818,(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__write_addr_reg),64);
            tracep->chgCData(oldp+820,(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__r_s_axi_ar_id),4);
            tracep->chgQData(oldp+821,(vlSelf->ysyx_22040228__DOT__clint6__DOT__csr_mtime),64);
            tracep->chgQData(oldp+823,(vlSelf->ysyx_22040228__DOT__clint6__DOT__csr_mtimecmp),64);
            tracep->chgCData(oldp+825,(vlSelf->ysyx_22040228__DOT__clint6__DOT__timer_state),2);
            tracep->chgCData(oldp+826,(vlSelf->ysyx_22040228__DOT__clint6__DOT__timew_state),2);
            tracep->chgCData(oldp+827,(vlSelf->ysyx_22040228__DOT__clint6__DOT__timeraw_id_temp),4);
            tracep->chgQData(oldp+828,(vlSelf->ysyx_22040228__DOT__clint6__DOT__read_csrdata_temp),64);
            tracep->chgCData(oldp+830,(vlSelf->ysyx_22040228__DOT__clint6__DOT__timerar_id_temp),4);
            tracep->chgCData(oldp+831,(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_write_state),2);
            tracep->chgCData(oldp+832,(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state),2);
            tracep->chgQData(oldp+833,(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__write_data_reg),64);
            tracep->chgQData(oldp+835,(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__write_addr_reg),64);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgQData(oldp+837,(((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
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
            tracep->chgBit(oldp+839,(((IData)(vlSelf->ysyx_22040228__DOT__uncache_mmio7__DOT__uncache)
                                       ? (IData)(vlSelf->ysyx_22040228__DOT__uncache_arb_finish)
                                       : (IData)(vlSelf->ysyx_22040228__DOT__uncache_dc_finish))));
            tracep->chgCData(oldp+840,(((2U == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state))
                                         ? (0xfU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_id))
                                         : 0U)),4);
            tracep->chgQData(oldp+841,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal1) 
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
            tracep->chgCData(oldp+843,((((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena1) 
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
            tracep->chgBit(oldp+844,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+845,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0x2000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+846,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0x3000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+847,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0x4000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+848,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0x6000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+849,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+850,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0x1000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+851,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0x5000U 
                                                       == 
                                                       (0x40007000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+852,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+853,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0x1000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+854,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0x4000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+855,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0x5000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+856,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0x6000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+857,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) 
                                                    & (0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst)))))));
            tracep->chgBit(oldp+858,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr0) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena0))));
            tracep->chgBit(oldp+859,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr1) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena1))));
            tracep->chgBit(oldp+860,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr2) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena2))));
            tracep->chgBit(oldp+861,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr3) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena3))));
            tracep->chgBit(oldp+862,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr4) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena4))));
            tracep->chgBit(oldp+863,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr5) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena5))));
            tracep->chgBit(oldp+864,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr6) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena6))));
            tracep->chgBit(oldp+865,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr7) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena7))));
            tracep->chgBit(oldp+866,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_addr) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_ena))));
            tracep->chgBit(oldp+867,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_addr) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_ena))));
            tracep->chgQData(oldp+868,(((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__forcast_state)
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
            tracep->chgQData(oldp+870,(((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_jalr)
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
            tracep->chgQData(oldp+872,(((((- (QData)((IData)(
                                                             (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                              >> 0x1fU)))) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                            >> 0x14U)))) 
                                        + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op1)),64);
            tracep->chgBit(oldp+874,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+875,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0x2000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+876,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0x3000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+877,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0x4000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+878,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0x6000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+879,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+880,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0x1000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+881,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0x5000U 
                                                       == 
                                                       (0x40007000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+882,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+883,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0x1000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+884,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0x4000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+885,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0x5000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+886,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0x6000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+887,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) 
                                                    & (0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst)))))));
            tracep->chgBit(oldp+888,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr0) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena0))));
            tracep->chgBit(oldp+889,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr1) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena1))));
            tracep->chgBit(oldp+890,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr2) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena2))));
            tracep->chgBit(oldp+891,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr3) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena3))));
            tracep->chgBit(oldp+892,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr4) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena4))));
            tracep->chgBit(oldp+893,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr5) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena5))));
            tracep->chgBit(oldp+894,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr6) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena6))));
            tracep->chgBit(oldp+895,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr7) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena7))));
            tracep->chgBit(oldp+896,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_addr) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_ena))));
            tracep->chgBit(oldp+897,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_addr) 
                                       == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_ena))));
            tracep->chgQData(oldp+898,(((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__forcast_state)
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
            tracep->chgQData(oldp+900,(((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_jalr)
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
            tracep->chgQData(oldp+902,(((((- (QData)((IData)(
                                                             (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                              >> 0x1fU)))) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                            >> 0x14U)))) 
                                        + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op1)),64);
            tracep->chgBit(oldp+904,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__busy[0]));
            tracep->chgBit(oldp+905,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__busy[1]));
            tracep->chgBit(oldp+906,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__busy[2]));
            tracep->chgBit(oldp+907,(((IData)(vlSelf->ysyx_22040228__DOT__uncache_dc_re) 
                                      & (1U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread)))));
            tracep->chgBit(oldp+908,(((IData)(vlSelf->ysyx_22040228__DOT__uncache_dc_we) 
                                      & (1U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)))));
            tracep->chgBit(oldp+909,(((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread)) 
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
            VL_EXTEND_WQ(128,64, __Vtemp1169, vlSelf->ysyx_22040228__DOT__data_cache3__DOT__strb_extection);
            if ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))) {
                __Vtemp1178[0U] = (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                     == (0x7fffffU 
                                         & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                    >> 9U)))) 
                                    & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                    ? __Vtemp1169[0U]
                                    : 0U);
                __Vtemp1178[1U] = (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                     == (0x7fffffU 
                                         & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                    >> 9U)))) 
                                    & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                    ? __Vtemp1169[1U]
                                    : 0U);
                __Vtemp1178[2U] = (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                     == (0x7fffffU 
                                         & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                    >> 9U)))) 
                                    & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                    ? __Vtemp1169[2U]
                                    : (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                                         == (0x7fffffU 
                                             & (IData)(
                                                       (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                        >> 9U)))) 
                                        & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))
                                        ? (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__strb_extection)
                                        : 0U));
                __Vtemp1178[3U] = (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                     == (0x7fffffU 
                                         & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                    >> 9U)))) 
                                    & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                    ? __Vtemp1169[3U]
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
                __Vtemp1178[0U] = 0U;
                __Vtemp1178[1U] = 0U;
                __Vtemp1178[2U] = 0U;
                __Vtemp1178[3U] = 0U;
            }
            tracep->chgWData(oldp+910,(__Vtemp1178),128);
            tracep->chgBit(oldp+914,(((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite)) 
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
            tracep->chgBit(oldp+915,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty1
                                     [(0x3fU & (IData)(
                                                       (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                        >> 3U)))]));
            tracep->chgBit(oldp+916,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty2
                                     [(0x3fU & (IData)(
                                                       (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                        >> 3U)))]));
            tracep->chgIData(oldp+917,(((0xa8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode))
                                         ? 0U : (0x7fffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                            >> 9U))))),23);
            VL_EXTEND_WQ(128,64, __Vtemp1179, vlSelf->ysyx_22040228__DOT__data_cache3__DOT__strb_extection);
            if ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))) {
                __Vtemp1195[0U] = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[0U];
                __Vtemp1195[1U] = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[1U];
                __Vtemp1195[2U] = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[2U];
                __Vtemp1195[3U] = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[3U];
            } else {
                __Vtemp1195[0U] = ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                    ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                        ? (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                             == (0x7fffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                            >> 9U)))) 
                                            & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                            ? __Vtemp1179[0U]
                                            : 0U) : 0U)
                                    : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                        ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[0U]
                                        : 0U));
                __Vtemp1195[1U] = ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                    ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                        ? (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                             == (0x7fffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                            >> 9U)))) 
                                            & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                            ? __Vtemp1179[1U]
                                            : 0U) : 0U)
                                    : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                        ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[1U]
                                        : 0U));
                __Vtemp1195[2U] = ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                    ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                        ? (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                             == (0x7fffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                            >> 9U)))) 
                                            & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                            ? __Vtemp1179[2U]
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
                __Vtemp1195[3U] = ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                    ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                        ? (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                             == (0x7fffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                            >> 9U)))) 
                                            & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                            ? __Vtemp1179[3U]
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
            tracep->chgWData(oldp+918,(__Vtemp1195),128);
            if ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))) {
                __Vtemp1202[0U] = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[0U];
                __Vtemp1202[1U] = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[1U];
                __Vtemp1202[2U] = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[2U];
                __Vtemp1202[3U] = vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp[3U];
            } else {
                __Vtemp1202[0U] = ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                    ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__hitw_data_temp[0U]
                                    : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                        ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[0U]
                                        : 0U));
                __Vtemp1202[1U] = ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                    ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__hitw_data_temp[1U]
                                    : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                        ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[1U]
                                        : 0U));
                __Vtemp1202[2U] = ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                    ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__hitw_data_temp[2U]
                                    : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                        ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[2U]
                                        : 0U));
                __Vtemp1202[3U] = ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                    ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__hitw_data_temp[3U]
                                    : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                        ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp[3U]
                                        : 0U));
            }
            tracep->chgWData(oldp+922,(__Vtemp1202),128);
            tracep->chgBit(oldp+926,(((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
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
            tracep->chgBit(oldp+927,((1U & (~ ((0x10U 
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
            VL_EXTEND_WQ(128,64, __Vtemp1203, vlSelf->ysyx_22040228__DOT__data_cache3__DOT__strb_extection);
            __Vtemp1220[0U] = (~ ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                                   ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[0U]
                                   : ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                       ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                           ? (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                                == 
                                                (0x7fffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                            >> 9U)))) 
                                               & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                               ? __Vtemp1203[0U]
                                               : 0U)
                                           : 0U) : 
                                      ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                        ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[0U]
                                        : 0U))));
            __Vtemp1220[1U] = (~ ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                                   ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[1U]
                                   : ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                       ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                           ? (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                                == 
                                                (0x7fffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                            >> 9U)))) 
                                               & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                               ? __Vtemp1203[1U]
                                               : 0U)
                                           : 0U) : 
                                      ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                        ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[1U]
                                        : 0U))));
            __Vtemp1220[2U] = (~ ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                                   ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[2U]
                                   : ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                       ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                           ? (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                                == 
                                                (0x7fffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                            >> 9U)))) 
                                               & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                               ? __Vtemp1203[2U]
                                               : ((
                                                   (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                                                    == 
                                                    (0x7fffffU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                                >> 9U)))) 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))
                                                   ? (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__strb_extection)
                                                   : 0U))
                                           : 0U) : 
                                      ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                        ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[2U]
                                        : 0U))));
            __Vtemp1220[3U] = (~ ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread))
                                   ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb[3U]
                                   : ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                       ? ((4U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                           ? (((vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                                == 
                                                (0x7fffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                            >> 9U)))) 
                                               & (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                               ? __Vtemp1203[3U]
                                               : ((
                                                   (vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
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
                                           : 0U) : 
                                      ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite))
                                        ? vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb[3U]
                                        : 0U))));
            tracep->chgWData(oldp+928,(__Vtemp1220),128);
            tracep->chgCData(oldp+932,(((4U & (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state))
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
            tracep->chgBit(oldp+933,(((2U == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_write_state)) 
                                      & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_b_ready) 
                                         >> 2U))));
            tracep->chgBit(oldp+934,((((IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_ready) 
                                       >> 2U) & (2U 
                                                 == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state)))));
            tracep->chgQData(oldp+935,((((IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__success_aw) 
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
            tracep->chgQData(oldp+937,((((IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__success_aw) 
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
            tracep->chgBit(oldp+939,(((2U == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_write_state)) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_b_ready))));
            tracep->chgBit(oldp+940,(((IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_ready) 
                                      & (2U == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state)))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+941,(vlSelf->ysyx_22040228__DOT__rvcpu_data_addr),64);
            tracep->chgCData(oldp+943,(vlSelf->ysyx_22040228__DOT__rvcpu_wmask),8);
            tracep->chgQData(oldp+944,(vlSelf->ysyx_22040228__DOT__rvcpu_data_o),64);
            tracep->chgBit(oldp+946,(vlSelf->ysyx_22040228__DOT__rvcpu_we));
            tracep->chgBit(oldp+947,(vlSelf->ysyx_22040228__DOT__rvcpu_re));
            tracep->chgQData(oldp+948,(vlSelf->ysyx_22040228__DOT__uncache_arb_data),64);
            tracep->chgQData(oldp+950,(vlSelf->ysyx_22040228__DOT__uncache_arb_addr),64);
            tracep->chgCData(oldp+952,(((IData)(vlSelf->ysyx_22040228__DOT__uncache_mmio7__DOT__uncache)
                                         ? (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_wmask)
                                         : 0U)),8);
            tracep->chgBit(oldp+953,(vlSelf->ysyx_22040228__DOT__uncache_arb_we));
            tracep->chgBit(oldp+954,(vlSelf->ysyx_22040228__DOT__uncache_arb_re));
            tracep->chgQData(oldp+955,(vlSelf->ysyx_22040228__DOT__uncache_dc_data),64);
            tracep->chgQData(oldp+957,(vlSelf->ysyx_22040228__DOT__uncache_dc_addr),64);
            tracep->chgCData(oldp+959,(vlSelf->ysyx_22040228__DOT__uncache_dc_mask),8);
            tracep->chgBit(oldp+960,(vlSelf->ysyx_22040228__DOT__uncache_dc_we));
            tracep->chgBit(oldp+961,(vlSelf->ysyx_22040228__DOT__uncache_dc_re));
            tracep->chgBit(oldp+962,(vlSelf->ysyx_22040228__DOT__uncache_dc_finish));
            tracep->chgQData(oldp+963,(vlSelf->ysyx_22040228__DOT__d_cache_data_out),64);
            tracep->chgQData(oldp+965,(vlSelf->ysyx_22040228__DOT__d_cache_out_addr),64);
            tracep->chgQData(oldp+967,(vlSelf->ysyx_22040228__DOT__d_cache_out_data),64);
            tracep->chgCData(oldp+969,(vlSelf->ysyx_22040228__DOT__d_cache_out_type),4);
            tracep->chgQData(oldp+970,(vlSelf->ysyx_22040228__DOT__t_axi_aw_addr),64);
            tracep->chgQData(oldp+972,(vlSelf->ysyx_22040228__DOT__t_axi_w_data),64);
            tracep->chgCData(oldp+974,(vlSelf->ysyx_22040228__DOT__t_axi_w_strb),8);
            tracep->chgCData(oldp+975,(vlSelf->ysyx_22040228__DOT__t_axi_b_id),4);
            tracep->chgBit(oldp+976,(vlSelf->ysyx_22040228__DOT__t_axi_b_valid));
            tracep->chgQData(oldp+977,(vlSelf->ysyx_22040228__DOT__t_axi_ar_addr),64);
            tracep->chgCData(oldp+979,(vlSelf->ysyx_22040228__DOT__t_axi_r_id),4);
            tracep->chgQData(oldp+980,(vlSelf->ysyx_22040228__DOT__t_axi_r_data),64);
            tracep->chgBit(oldp+982,(vlSelf->ysyx_22040228__DOT__t_axi_r_last));
            tracep->chgBit(oldp+983,(vlSelf->ysyx_22040228__DOT__t_axi_r_valid));
            tracep->chgSData(oldp+984,(vlSelf->ysyx_22040228__DOT__add_axi_aw_id),12);
            tracep->chgWData(oldp+985,(vlSelf->ysyx_22040228__DOT__add_axi_aw_addr),192);
            tracep->chgIData(oldp+991,(vlSelf->ysyx_22040228__DOT__add_axi_aw_len),24);
            tracep->chgSData(oldp+992,(vlSelf->ysyx_22040228__DOT__add_axi_aw_size),9);
            tracep->chgCData(oldp+993,(vlSelf->ysyx_22040228__DOT__add_axi_aw_burst),6);
            tracep->chgSData(oldp+994,(vlSelf->ysyx_22040228__DOT__add_axi_aw_cache),12);
            tracep->chgSData(oldp+995,(vlSelf->ysyx_22040228__DOT__add_axi_aw_prot),9);
            tracep->chgSData(oldp+996,(vlSelf->ysyx_22040228__DOT__add_axi_aw_qos),12);
            tracep->chgCData(oldp+997,(vlSelf->ysyx_22040228__DOT__add_axi_aw_valid),3);
            tracep->chgCData(oldp+998,(vlSelf->ysyx_22040228__DOT__add_axi_aw_ready),3);
            tracep->chgWData(oldp+999,(vlSelf->ysyx_22040228__DOT__add_axi_w_data),192);
            tracep->chgIData(oldp+1005,(vlSelf->ysyx_22040228__DOT__add_axi_w_strb),24);
            tracep->chgCData(oldp+1006,(vlSelf->ysyx_22040228__DOT__add_axi_w_last),3);
            tracep->chgCData(oldp+1007,(vlSelf->ysyx_22040228__DOT__add_axi_w_valid),3);
            tracep->chgCData(oldp+1008,(vlSelf->ysyx_22040228__DOT__add_axi_w_ready),3);
            tracep->chgSData(oldp+1009,(vlSelf->ysyx_22040228__DOT__add_axi_b_id),12);
            tracep->chgCData(oldp+1010,(vlSelf->ysyx_22040228__DOT__add_axi_b_ready),3);
            tracep->chgSData(oldp+1011,(vlSelf->ysyx_22040228__DOT__add_axi_ar_id),12);
            tracep->chgWData(oldp+1012,(vlSelf->ysyx_22040228__DOT__add_axi_ar_addr),192);
            tracep->chgIData(oldp+1018,(vlSelf->ysyx_22040228__DOT__add_axi_ar_len),24);
            tracep->chgSData(oldp+1019,(vlSelf->ysyx_22040228__DOT__add_axi_ar_size),9);
            tracep->chgCData(oldp+1020,(vlSelf->ysyx_22040228__DOT__add_axi_ar_burst),6);
            tracep->chgSData(oldp+1021,(vlSelf->ysyx_22040228__DOT__add_axi_ar_cache),12);
            tracep->chgSData(oldp+1022,(vlSelf->ysyx_22040228__DOT__add_axi_ar_prot),9);
            tracep->chgSData(oldp+1023,(vlSelf->ysyx_22040228__DOT__add_axi_ar_qos),12);
            tracep->chgCData(oldp+1024,(vlSelf->ysyx_22040228__DOT__add_axi_ar_valid),3);
            tracep->chgSData(oldp+1025,(vlSelf->ysyx_22040228__DOT__add_axi_r_id),12);
            tracep->chgWData(oldp+1026,(vlSelf->ysyx_22040228__DOT__add_axi_r_data),192);
            tracep->chgCData(oldp+1032,(vlSelf->ysyx_22040228__DOT__add_axi_r_ready),3);
            tracep->chgCData(oldp+1033,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_id) 
                                                 >> 8U))),4);
            tracep->chgQData(oldp+1034,((((QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[5U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[4U])))),64);
            tracep->chgCData(oldp+1036,((0xffU & (vlSelf->ysyx_22040228__DOT__add_axi_aw_len 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1037,((7U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_size) 
                                               >> 6U))),3);
            tracep->chgCData(oldp+1038,((3U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_burst) 
                                               >> 4U))),2);
            tracep->chgCData(oldp+1039,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_cache) 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1040,((7U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_prot) 
                                               >> 6U))),3);
            tracep->chgCData(oldp+1041,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_qos) 
                                                 >> 8U))),4);
            tracep->chgBit(oldp+1042,(vlSelf->ysyx_22040228__DOT__soc_axi_aw_ready));
            tracep->chgBit(oldp+1043,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_valid) 
                                             >> 2U))));
            tracep->chgQData(oldp+1044,((((QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__add_axi_w_data[5U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__add_axi_w_data[4U])))),64);
            tracep->chgCData(oldp+1046,((0xffU & (vlSelf->ysyx_22040228__DOT__add_axi_w_strb 
                                                  >> 0x10U))),8);
            tracep->chgBit(oldp+1047,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_last) 
                                             >> 2U))));
            tracep->chgBit(oldp+1048,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_valid) 
                                             >> 2U))));
            tracep->chgBit(oldp+1049,(vlSelf->ysyx_22040228__DOT__soc_axi_w_ready));
            tracep->chgBit(oldp+1050,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_b_ready) 
                                             >> 2U))));
            tracep->chgCData(oldp+1051,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_id) 
                                                 >> 8U))),4);
            tracep->chgQData(oldp+1052,((((QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[5U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[4U])))),64);
            tracep->chgCData(oldp+1054,((0xffU & (vlSelf->ysyx_22040228__DOT__add_axi_ar_len 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1055,((7U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_size) 
                                               >> 6U))),3);
            tracep->chgCData(oldp+1056,((3U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_burst) 
                                               >> 4U))),2);
            tracep->chgCData(oldp+1057,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_cache) 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1058,((7U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_prot) 
                                               >> 6U))),3);
            tracep->chgCData(oldp+1059,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_qos) 
                                                 >> 8U))),4);
            tracep->chgBit(oldp+1060,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_valid) 
                                             >> 2U))));
            tracep->chgBit(oldp+1061,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_ready) 
                                             >> 2U))));
            tracep->chgCData(oldp+1062,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_id) 
                                                 >> 4U))),4);
            tracep->chgQData(oldp+1063,((((QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[2U])))),64);
            tracep->chgCData(oldp+1065,((0xffU & (vlSelf->ysyx_22040228__DOT__add_axi_aw_len 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1066,((7U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_size) 
                                               >> 3U))),3);
            tracep->chgCData(oldp+1067,((3U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_burst) 
                                               >> 2U))),2);
            tracep->chgCData(oldp+1068,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_cache) 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1069,((7U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_prot) 
                                               >> 3U))),3);
            tracep->chgCData(oldp+1070,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_qos) 
                                                 >> 4U))),4);
            tracep->chgBit(oldp+1071,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_valid) 
                                             >> 1U))));
            tracep->chgQData(oldp+1072,((((QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__add_axi_w_data[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__add_axi_w_data[2U])))),64);
            tracep->chgCData(oldp+1074,((0xffU & (vlSelf->ysyx_22040228__DOT__add_axi_w_strb 
                                                  >> 8U))),8);
            tracep->chgBit(oldp+1075,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_last) 
                                             >> 1U))));
            tracep->chgBit(oldp+1076,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_valid) 
                                             >> 1U))));
            tracep->chgBit(oldp+1077,(vlSelf->ysyx_22040228__DOT__clint6__DOT__success_aw));
            tracep->chgBit(oldp+1078,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_b_ready) 
                                             >> 1U))));
            tracep->chgCData(oldp+1079,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_id) 
                                                 >> 4U))),4);
            tracep->chgQData(oldp+1080,((((QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[2U])))),64);
            tracep->chgCData(oldp+1082,((0xffU & (vlSelf->ysyx_22040228__DOT__add_axi_ar_len 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1083,((7U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_size) 
                                               >> 3U))),3);
            tracep->chgCData(oldp+1084,((3U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_burst) 
                                               >> 2U))),2);
            tracep->chgCData(oldp+1085,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_cache) 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1086,((7U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_prot) 
                                               >> 3U))),3);
            tracep->chgCData(oldp+1087,((0xfU & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_qos) 
                                                 >> 4U))),4);
            tracep->chgBit(oldp+1088,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_valid) 
                                             >> 1U))));
            tracep->chgBit(oldp+1089,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_ready) 
                                             >> 1U))));
            tracep->chgCData(oldp+1090,((0xfU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_id))),4);
            tracep->chgQData(oldp+1091,((((QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[0U])))),64);
            tracep->chgCData(oldp+1093,((0xffU & vlSelf->ysyx_22040228__DOT__add_axi_aw_len)),8);
            tracep->chgCData(oldp+1094,((7U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_size))),3);
            tracep->chgCData(oldp+1095,((3U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_burst))),2);
            tracep->chgCData(oldp+1096,((0xfU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_cache))),4);
            tracep->chgCData(oldp+1097,((7U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_prot))),3);
            tracep->chgCData(oldp+1098,((0xfU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_qos))),4);
            tracep->chgBit(oldp+1099,(vlSelf->ysyx_22040228__DOT__io_axi_aw_ready));
            tracep->chgBit(oldp+1100,((1U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_valid))));
            tracep->chgQData(oldp+1101,((((QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__add_axi_w_data[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__add_axi_w_data[0U])))),64);
            tracep->chgCData(oldp+1103,((0xffU & vlSelf->ysyx_22040228__DOT__add_axi_w_strb)),8);
            tracep->chgBit(oldp+1104,((1U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_last))));
            tracep->chgBit(oldp+1105,((1U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_valid))));
            tracep->chgBit(oldp+1106,(vlSelf->ysyx_22040228__DOT__io_axi_w_ready));
            tracep->chgBit(oldp+1107,((1U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_b_ready))));
            tracep->chgCData(oldp+1108,((0xfU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_id))),4);
            tracep->chgQData(oldp+1109,((((QData)((IData)(
                                                          vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[0U])))),64);
            tracep->chgCData(oldp+1111,((0xffU & vlSelf->ysyx_22040228__DOT__add_axi_ar_len)),8);
            tracep->chgCData(oldp+1112,((7U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_size))),3);
            tracep->chgCData(oldp+1113,((3U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_burst))),2);
            tracep->chgCData(oldp+1114,((0xfU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_cache))),4);
            tracep->chgCData(oldp+1115,((7U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_prot))),3);
            tracep->chgCData(oldp+1116,((0xfU & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_qos))),4);
            tracep->chgBit(oldp+1117,((1U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_valid))));
            tracep->chgBit(oldp+1118,((1U & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_r_ready))));
            tracep->chgCData(oldp+1119,(vlSelf->ysyx_22040228__DOT__mmio_thing),3);
            tracep->chgBit(oldp+1120,(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__ar_shankhand));
            tracep->chgQData(oldp+1121,(((IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__ar_shankhand)
                                          ? (((QData)((IData)(
                                                              vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[5U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[4U])))
                                          : 0ULL)),64);
            tracep->chgQData(oldp+1123,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf_pc_data),64);
            tracep->chgCData(oldp+1125,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1addr),5);
            tracep->chgCData(oldp+1126,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr),5);
            tracep->chgBit(oldp+1127,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1ena));
            tracep->chgBit(oldp+1128,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2ena));
            tracep->chgCData(oldp+1129,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type),8);
            tracep->chgCData(oldp+1130,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_opcode),8);
            tracep->chgQData(oldp+1131,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op1),64);
            tracep->chgQData(oldp+1133,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op2),64);
            tracep->chgBit(oldp+1135,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_ena));
            tracep->chgCData(oldp+1136,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_addr),5);
            tracep->chgQData(oldp+1137,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_pc),64);
            tracep->chgIData(oldp+1139,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_inst),32);
            tracep->chgQData(oldp+1140,(((IData)((0U 
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
            tracep->chgQData(oldp+1142,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump1_pc),64);
            tracep->chgBit(oldp+1144,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump1_ena));
            tracep->chgCData(oldp+1145,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_so_type),6);
            tracep->chgBit(oldp+1146,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type) 
                                             >> 2U))));
            tracep->chgBit(oldp+1147,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__data_jf));
            tracep->chgCData(oldp+1148,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr),5);
            tracep->chgCData(oldp+1149,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr),5);
            tracep->chgBit(oldp+1150,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1ena));
            tracep->chgBit(oldp+1151,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2ena));
            tracep->chgCData(oldp+1152,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type),8);
            tracep->chgCData(oldp+1153,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_opcode),8);
            tracep->chgQData(oldp+1154,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op1),64);
            tracep->chgQData(oldp+1156,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op2),64);
            tracep->chgBit(oldp+1158,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_ena));
            tracep->chgCData(oldp+1159,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_addr),5);
            tracep->chgQData(oldp+1160,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_pc),64);
            tracep->chgIData(oldp+1162,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_inst),32);
            tracep->chgQData(oldp+1163,(((IData)((0U 
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
            tracep->chgBit(oldp+1165,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__data_jf));
            tracep->chgBit(oldp+1166,((1U & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type) 
                                             >> 2U))));
            tracep->chgQData(oldp+1167,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump2_pc),64);
            tracep->chgBit(oldp+1169,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump2_ena));
            tracep->chgCData(oldp+1170,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_so_type),6);
            tracep->chgCData(oldp+1171,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose1),3);
            tracep->chgCData(oldp+1172,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose2),3);
            tracep->chgBit(oldp+1173,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop1));
            tracep->chgBit(oldp+1174,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop2));
            tracep->chgBit(oldp+1175,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleano));
            tracep->chgBit(oldp+1176,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleant));
            tracep->chgBit(oldp+1177,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudt_stop_trap));
            tracep->chgBit(oldp+1178,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_trap));
            tracep->chgQData(oldp+1179,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_submit_pc),64);
            tracep->chgQData(oldp+1181,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc),64);
            tracep->chgQData(oldp+1183,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_data),64);
            tracep->chgQData(oldp+1185,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc),64);
            tracep->chgQData(oldp+1187,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_data),64);
            tracep->chgQData(oldp+1189,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc),64);
            tracep->chgQData(oldp+1191,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__load_data),64);
            tracep->chgBit(oldp+1193,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_so_busy));
            tracep->chgQData(oldp+1194,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_datag),64);
            tracep->chgCData(oldp+1196,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addrg),5);
            tracep->chgBit(oldp+1197,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_enag));
            tracep->chgQData(oldp+1198,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__operand2),64);
            tracep->chgQData(oldp+1200,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_temp),64);
            tracep->chgQData(oldp+1202,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__forc_jumppc),64);
            tracep->chgQData(oldp+1204,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_jnxtpc_temp),64);
            tracep->chgCData(oldp+1206,(((0xcU == (0xfU 
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
            tracep->chgCData(oldp+1207,(((0xcU == (0xfU 
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
            tracep->chgBit(oldp+1208,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__should_updata));
            tracep->chgCData(oldp+1209,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__rs1),5);
            tracep->chgBit(oldp+1210,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_lui));
            tracep->chgBit(oldp+1211,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_auipc));
            tracep->chgBit(oldp+1212,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_jal));
            tracep->chgBit(oldp+1213,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_jalr));
            tracep->chgBit(oldp+1214,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_jump));
            tracep->chgBit(oldp+1215,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_srai));
            tracep->chgBit(oldp+1216,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_addiw));
            tracep->chgBit(oldp+1217,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_slliw));
            tracep->chgBit(oldp+1218,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_srliw));
            tracep->chgBit(oldp+1219,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sraiw));
            tracep->chgBit(oldp+1220,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_add));
            tracep->chgBit(oldp+1221,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sub));
            tracep->chgBit(oldp+1222,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sll));
            tracep->chgBit(oldp+1223,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_slt));
            tracep->chgBit(oldp+1224,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sltu));
            tracep->chgBit(oldp+1225,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_xor));
            tracep->chgBit(oldp+1226,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_srl));
            tracep->chgBit(oldp+1227,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sra));
            tracep->chgBit(oldp+1228,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_or));
            tracep->chgBit(oldp+1229,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_and));
            tracep->chgBit(oldp+1230,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_div));
            tracep->chgBit(oldp+1231,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_divu));
            tracep->chgBit(oldp+1232,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mul));
            tracep->chgBit(oldp+1233,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulh));
            tracep->chgBit(oldp+1234,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulhsu));
            tracep->chgBit(oldp+1235,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulhu));
            tracep->chgBit(oldp+1236,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_rem));
            tracep->chgBit(oldp+1237,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_remu));
            tracep->chgBit(oldp+1238,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_addw));
            tracep->chgBit(oldp+1239,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_subw));
            tracep->chgBit(oldp+1240,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sllw));
            tracep->chgBit(oldp+1241,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_srlw));
            tracep->chgBit(oldp+1242,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sraw));
            tracep->chgBit(oldp+1243,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_divuw));
            tracep->chgBit(oldp+1244,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_divw));
            tracep->chgBit(oldp+1245,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulw));
            tracep->chgBit(oldp+1246,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_remuw));
            tracep->chgBit(oldp+1247,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_remw));
            tracep->chgBit(oldp+1248,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrw));
            tracep->chgBit(oldp+1249,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrs));
            tracep->chgBit(oldp+1250,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrc));
            tracep->chgBit(oldp+1251,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrwi));
            tracep->chgBit(oldp+1252,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrsi));
            tracep->chgBit(oldp+1253,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrci));
            tracep->chgBit(oldp+1254,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrw) 
                                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrs)) 
                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrc))));
            tracep->chgBit(oldp+1255,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrwi) 
                                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrsi)) 
                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrci))));
            tracep->chgBit(oldp+1256,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_ecall));
            tracep->chgBit(oldp+1257,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_ebreak));
            tracep->chgBit(oldp+1258,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mret));
            tracep->chgSData(oldp+1259,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__store_addr_offset),12);
            tracep->chgBit(oldp+1260,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op1));
            tracep->chgBit(oldp+1261,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op1));
            tracep->chgBit(oldp+1262,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com1_op1));
            tracep->chgBit(oldp+1263,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com2_op1));
            tracep->chgBit(oldp+1264,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com3_op1));
            tracep->chgBit(oldp+1265,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com4_op1));
            tracep->chgBit(oldp+1266,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com5_op1));
            tracep->chgBit(oldp+1267,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com6_op1));
            tracep->chgBit(oldp+1268,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com7_op1));
            tracep->chgBit(oldp+1269,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com8_op1));
            tracep->chgBit(oldp+1270,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__wb1_op1));
            tracep->chgBit(oldp+1271,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__wb2_op1));
            tracep->chgBit(oldp+1272,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__wb3_op1));
            tracep->chgBit(oldp+1273,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                                        > vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op1) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op1)))));
            tracep->chgBit(oldp+1274,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                                        < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op1) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op1)))));
            tracep->chgBit(oldp+1275,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__mem_op1));
            tracep->chgBit(oldp+1276,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                        < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op1) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__mem_op1)))));
            tracep->chgBit(oldp+1277,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                        < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op1) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__mem_op1)))));
            tracep->chgBit(oldp+1278,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op2));
            tracep->chgBit(oldp+1279,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op2));
            tracep->chgBit(oldp+1280,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__wb2_op2));
            tracep->chgBit(oldp+1281,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                                        > vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op2) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op2)))));
            tracep->chgBit(oldp+1282,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                                        < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op2) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op2)))));
            tracep->chgBit(oldp+1283,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__mem_op2));
            tracep->chgBit(oldp+1284,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                        < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op2) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__mem_op2)))));
            tracep->chgBit(oldp+1285,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                        < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op2) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__mem_op2)))));
            tracep->chgBit(oldp+1286,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__forcast_state));
            tracep->chgQData(oldp+1287,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__op1_sub_op2),64);
            tracep->chgBit(oldp+1289,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__op1_ls_op2));
            tracep->chgBit(oldp+1290,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__forcast_state));
            tracep->chgBit(oldp+1291,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__jalr_pc_ena));
            tracep->chgBit(oldp+1292,((1U & (((((((
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
            tracep->chgCData(oldp+1293,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__rs1),5);
            tracep->chgBit(oldp+1294,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_lui));
            tracep->chgBit(oldp+1295,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_auipc));
            tracep->chgBit(oldp+1296,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_jal));
            tracep->chgBit(oldp+1297,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_jalr));
            tracep->chgBit(oldp+1298,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_jump));
            tracep->chgBit(oldp+1299,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_srai));
            tracep->chgBit(oldp+1300,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_addiw));
            tracep->chgBit(oldp+1301,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_slliw));
            tracep->chgBit(oldp+1302,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_srliw));
            tracep->chgBit(oldp+1303,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sraiw));
            tracep->chgBit(oldp+1304,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_add));
            tracep->chgBit(oldp+1305,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sub));
            tracep->chgBit(oldp+1306,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sll));
            tracep->chgBit(oldp+1307,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_slt));
            tracep->chgBit(oldp+1308,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sltu));
            tracep->chgBit(oldp+1309,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_xor));
            tracep->chgBit(oldp+1310,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_srl));
            tracep->chgBit(oldp+1311,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sra));
            tracep->chgBit(oldp+1312,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_or));
            tracep->chgBit(oldp+1313,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_and));
            tracep->chgBit(oldp+1314,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_div));
            tracep->chgBit(oldp+1315,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_divu));
            tracep->chgBit(oldp+1316,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mul));
            tracep->chgBit(oldp+1317,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulh));
            tracep->chgBit(oldp+1318,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulhsu));
            tracep->chgBit(oldp+1319,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulhu));
            tracep->chgBit(oldp+1320,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_rem));
            tracep->chgBit(oldp+1321,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_remu));
            tracep->chgBit(oldp+1322,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_addw));
            tracep->chgBit(oldp+1323,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_subw));
            tracep->chgBit(oldp+1324,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sllw));
            tracep->chgBit(oldp+1325,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_srlw));
            tracep->chgBit(oldp+1326,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sraw));
            tracep->chgBit(oldp+1327,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_divuw));
            tracep->chgBit(oldp+1328,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_divw));
            tracep->chgBit(oldp+1329,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulw));
            tracep->chgBit(oldp+1330,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_remuw));
            tracep->chgBit(oldp+1331,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_remw));
            tracep->chgBit(oldp+1332,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrw));
            tracep->chgBit(oldp+1333,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrs));
            tracep->chgBit(oldp+1334,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrc));
            tracep->chgBit(oldp+1335,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrwi));
            tracep->chgBit(oldp+1336,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrsi));
            tracep->chgBit(oldp+1337,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrci));
            tracep->chgBit(oldp+1338,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrw) 
                                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrs)) 
                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrc))));
            tracep->chgBit(oldp+1339,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrwi) 
                                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrsi)) 
                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrci))));
            tracep->chgBit(oldp+1340,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_ecall));
            tracep->chgBit(oldp+1341,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_ebreak));
            tracep->chgBit(oldp+1342,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mret));
            tracep->chgSData(oldp+1343,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__store_addr_offset),12);
            tracep->chgBit(oldp+1344,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op1));
            tracep->chgBit(oldp+1345,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op1));
            tracep->chgBit(oldp+1346,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com1_op1));
            tracep->chgBit(oldp+1347,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com2_op1));
            tracep->chgBit(oldp+1348,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com3_op1));
            tracep->chgBit(oldp+1349,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com4_op1));
            tracep->chgBit(oldp+1350,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com5_op1));
            tracep->chgBit(oldp+1351,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com6_op1));
            tracep->chgBit(oldp+1352,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com7_op1));
            tracep->chgBit(oldp+1353,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com8_op1));
            tracep->chgBit(oldp+1354,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__wb1_op1));
            tracep->chgBit(oldp+1355,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__wb2_op1));
            tracep->chgBit(oldp+1356,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__wb3_op1));
            tracep->chgBit(oldp+1357,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                                        > vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op1) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op1)))));
            tracep->chgBit(oldp+1358,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                                        < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op1) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op1)))));
            tracep->chgBit(oldp+1359,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op1));
            tracep->chgBit(oldp+1360,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                        < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op1) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op1)))));
            tracep->chgBit(oldp+1361,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                        < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op1) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op1)))));
            tracep->chgBit(oldp+1362,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op2));
            tracep->chgBit(oldp+1363,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op2));
            tracep->chgBit(oldp+1364,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__wb2_op2));
            tracep->chgBit(oldp+1365,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                                        > vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op2) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op2)))));
            tracep->chgBit(oldp+1366,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                                        < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op2) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op2)))));
            tracep->chgBit(oldp+1367,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op2));
            tracep->chgBit(oldp+1368,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                        < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op2) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op2)))));
            tracep->chgBit(oldp+1369,(((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                        < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op2) 
                                          & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op2)))));
            tracep->chgBit(oldp+1370,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__forcast_state));
            tracep->chgQData(oldp+1371,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__op1_sub_op2),64);
            tracep->chgBit(oldp+1373,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__op1_ls_op2));
            tracep->chgBit(oldp+1374,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__forcast_state));
            tracep->chgBit(oldp+1375,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__jalr_pc_ena));
            tracep->chgBit(oldp+1376,((1U & (((((((
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
            tracep->chgBit(oldp+1377,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_waw));
            tracep->chgBit(oldp+1378,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudt_stop_waw));
            tracep->chgBit(oldp+1379,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo1_stop_war));
            tracep->chgBit(oldp+1380,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo2_stop_war));
            tracep->chgBit(oldp+1381,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudt1_stop_war));
            tracep->chgBit(oldp+1382,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudt2_stop_war));
            tracep->chgBit(oldp+1383,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_so_type) 
                                        >> 3U) & ((
                                                   ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_waw) 
                                                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo1_stop_war)) 
                                                   | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo2_stop_war)) 
                                                  | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_hard)))));
            tracep->chgBit(oldp+1384,((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_so_type) 
                                        >> 3U) & ((
                                                   ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_waw) 
                                                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo1_stop_war)) 
                                                   | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo2_stop_war)) 
                                                  | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_hard)))));
            tracep->chgBit(oldp+1385,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_hard));
            tracep->chgBit(oldp+1386,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudt_stop_hard));
            tracep->chgQData(oldp+1387,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__exe_res),64);
            tracep->chgQData(oldp+1389,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__divrem_data),64);
            tracep->chgQData(oldp+1391,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__yushu),64);
            tracep->chgQData(oldp+1393,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__shang),64);
            tracep->chgQData(oldp+1395,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__exe_res),64);
            tracep->chgQData(oldp+1397,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__divrem_data),64);
            tracep->chgQData(oldp+1399,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__yushu),64);
            tracep->chgQData(oldp+1401,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__shang),64);
            tracep->chgCData(oldp+1403,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__data_byte),8);
            tracep->chgSData(oldp+1404,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__data_half_byte),16);
            tracep->chgIData(oldp+1405,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__data_word),32);
            tracep->chgQData(oldp+1406,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__store_data),64);
            tracep->chgCData(oldp+1408,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__store_mask),8);
            tracep->chgCData(oldp+1409,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__es__DOT__gating),3);
            tracep->chgBit(oldp+1410,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__decode1_ena));
            tracep->chgBit(oldp+1411,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__decode2_ena));
            tracep->chgWData(oldp+1412,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__old_ready),67);
            tracep->chgBit(oldp+1415,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__diff_ena));
            tracep->chgCData(oldp+1416,(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__clean_submcont),8);
            tracep->chgBit(oldp+1417,(((IData)(vlSelf->ysyx_22040228__DOT__rvcpu_we) 
                                       | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_re))));
            tracep->chgBit(oldp+1418,(vlSelf->ysyx_22040228__DOT__uncache_mmio7__DOT__uncache));
            tracep->chgBit(oldp+1419,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__icache_if_shankhand));
            tracep->chgCData(oldp+1420,(vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst_nxt),6);
            tracep->chgIData(oldp+1421,((0x7fffffU 
                                         & (IData)(
                                                   (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                    >> 9U)))),23);
            tracep->chgCData(oldp+1422,((0x3fU & (IData)(
                                                         (vlSelf->ysyx_22040228__DOT__uncache_dc_addr 
                                                          >> 3U)))),6);
            tracep->chgCData(oldp+1423,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread_nxt),6);
            tracep->chgBit(oldp+1424,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__mem_hit_ok));
            tracep->chgQData(oldp+1425,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_out_addr),64);
            tracep->chgQData(oldp+1427,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_out_data),64);
            tracep->chgCData(oldp+1429,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_out_type),4);
            tracep->chgBit(oldp+1430,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_clean_o));
            tracep->chgBit(oldp+1431,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_clean_t));
            tracep->chgBit(oldp+1432,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_i_ok));
            tracep->chgQData(oldp+1433,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_out_addr),64);
            tracep->chgWData(oldp+1435,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb),128);
            tracep->chgBit(oldp+1439,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_tag_ena1));
            tracep->chgWData(oldp+1440,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp),128);
            tracep->chgBit(oldp+1444,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_tag_ena2));
            tracep->chgCData(oldp+1445,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite_nxt),6);
            tracep->chgWData(oldp+1446,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__hitw_data_temp),128);
            tracep->chgQData(oldp+1450,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__strb_extection),64);
            tracep->chgQData(oldp+1452,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_out_addr),64);
            tracep->chgQData(oldp+1454,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_out_data),64);
            tracep->chgCData(oldp+1456,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_out_type),4);
            tracep->chgBit(oldp+1457,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_clean_o));
            tracep->chgBit(oldp+1458,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_clean_t));
            tracep->chgBit(oldp+1459,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_i_ok));
            tracep->chgQData(oldp+1460,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_out_addr),64);
            tracep->chgWData(oldp+1462,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb),128);
            tracep->chgBit(oldp+1466,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_tag_ena1));
            tracep->chgWData(oldp+1467,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp),128);
            tracep->chgBit(oldp+1471,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_tag_ena2));
            tracep->chgBit(oldp+1472,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__oteg_ena_i));
            tracep->chgCData(oldp+1473,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__oteg_addr_i),6);
            tracep->chgBit(oldp+1474,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__tteg_ena_i));
            tracep->chgCData(oldp+1475,(vlSelf->ysyx_22040228__DOT__data_cache3__DOT__tteg_addr_i),6);
            tracep->chgBit(oldp+1476,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_dcache_shankhand));
            tracep->chgBit(oldp+1477,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__write_dcache_shankhand));
            tracep->chgBit(oldp+1478,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_icache_shankhand));
            tracep->chgBit(oldp+1479,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_uncahce_shankhand));
            tracep->chgBit(oldp+1480,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__write_uncahce_shankhand));
            tracep->chgCData(oldp+1481,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state_n),3);
            tracep->chgBit(oldp+1482,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_dread));
            tracep->chgBit(oldp+1483,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_dwrite));
            tracep->chgBit(oldp+1484,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_iread));
            tracep->chgBit(oldp+1485,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_uncahceread));
            tracep->chgBit(oldp+1486,(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_uncahcewrite));
            tracep->chgBit(oldp+1487,((((((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_dcache_shankhand) 
                                          | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__write_dcache_shankhand)) 
                                         | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_icache_shankhand)) 
                                        | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_uncahce_shankhand)) 
                                       | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__write_uncahce_shankhand))));
            tracep->chgBit(oldp+1488,((((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_valid) 
                                        >> 2U) & (IData)(vlSelf->ysyx_22040228__DOT__soc_axi_aw_ready))));
            tracep->chgBit(oldp+1489,((((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_valid) 
                                        >> 2U) & (IData)(vlSelf->ysyx_22040228__DOT__soc_axi_w_ready))));
            tracep->chgCData(oldp+1490,(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_write_state_nxt),2);
            tracep->chgBit(oldp+1491,(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__ar_shankhand));
            tracep->chgCData(oldp+1492,(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state_nxt),2);
            tracep->chgBit(oldp+1493,(vlSelf->ysyx_22040228__DOT__clint6__DOT__success_r));
            tracep->chgBit(oldp+1494,(vlSelf->ysyx_22040228__DOT__clint6__DOT__success_b));
            tracep->chgBit(oldp+1495,(vlSelf->ysyx_22040228__DOT__clint6__DOT__resp_success));
            tracep->chgQData(oldp+1496,(vlSelf->ysyx_22040228__DOT__clint6__DOT__wmask),64);
            tracep->chgCData(oldp+1498,(vlSelf->ysyx_22040228__DOT__clint6__DOT__timer_state_n),2);
            tracep->chgCData(oldp+1499,(vlSelf->ysyx_22040228__DOT__clint6__DOT__timew_state_n),2);
            tracep->chgBit(oldp+1500,((((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_valid) 
                                        >> 1U) & (0x200bff8ULL 
                                                  == 
                                                  (((QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[2U])))))));
            tracep->chgBit(oldp+1501,((((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_valid) 
                                        >> 1U) & (0x2004000ULL 
                                                  == 
                                                  (((QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[2U])))))));
            tracep->chgBit(oldp+1502,(((IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__success_aw) 
                                       & (0x200bff8ULL 
                                          == (((QData)((IData)(
                                                               vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[2U])))))));
            tracep->chgBit(oldp+1503,(((IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__success_aw) 
                                       & (0x2004000ULL 
                                          == (((QData)((IData)(
                                                               vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[2U])))))));
            tracep->chgBit(oldp+1504,(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__aw_shankhand));
            tracep->chgBit(oldp+1505,(((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_valid) 
                                       & (IData)(vlSelf->ysyx_22040228__DOT__io_axi_w_ready))));
            tracep->chgCData(oldp+1506,(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_write_state_nxt),2);
            tracep->chgBit(oldp+1507,(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__ar_shankhand));
            tracep->chgCData(oldp+1508,(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state_nxt),2);
        }
        tracep->chgBit(oldp+1509,(vlSelf->clk));
        tracep->chgBit(oldp+1510,(vlSelf->rst));
        tracep->chgQData(oldp+1511,(vlSelf->out_slave_addr_),64);
        tracep->chgQData(oldp+1513,(vlSelf->out_serial_data_),64);
        tracep->chgBit(oldp+1515,(vlSelf->out_serial_write_));
        tracep->chgBit(oldp+1516,(vlSelf->out_rtc_read_));
        tracep->chgQData(oldp+1517,(vlSelf->in_rtc_data_),64);
        tracep->chgBit(oldp+1519,(vlSelf->read_ena_sign_));
        tracep->chgQData(oldp+1520,(vlSelf->out_addr_outp),64);
        tracep->chgQData(oldp+1522,(vlSelf->read_data_sign_),64);
        tracep->chgBit(oldp+1524,(vlSelf->out_write_ram_ena));
        tracep->chgQData(oldp+1525,(vlSelf->out_write_ram_data),64);
        tracep->chgQData(oldp+1527,(vlSelf->out_write_ram_addr),64);
        tracep->chgCData(oldp+1529,(((IData)(vlSelf->rst)
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
        tracep->chgCData(oldp+1530,(((IData)(vlSelf->rst)
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
        tracep->chgBit(oldp+1531,((1U & (~ (IData)(vlSelf->rst)))));
        tracep->chgBit(oldp+1532,((1U & ((~ (IData)(vlSelf->rst)) 
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
        tracep->chgBit(oldp+1533,((1U & ((~ (IData)(vlSelf->rst)) 
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
        tracep->chgBit(oldp+1534,((1U & ((~ (IData)(vlSelf->rst)) 
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
        tracep->chgQData(oldp+1535,(((2U == (IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state))
                                      ? vlSelf->read_data_sign_
                                      : 0ULL)),64);
        tracep->chgQData(oldp+1537,(((2U == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state))
                                      ? vlSelf->in_rtc_data_
                                      : 0ULL)),64);
        tracep->chgCData(oldp+1539,(((IData)(vlSelf->rst)
                                      ? 0U : (7U & 
                                              (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                               >> 0xcU)))),3);
        tracep->chgCData(oldp+1540,(((IData)(vlSelf->rst)
                                      ? 0U : (7U & 
                                              (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                               >> 0xcU)))),3);
        tracep->chgIData(oldp+1541,(((IData)(vlSelf->rst)
                                      ? 0U : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst)),32);
        tracep->chgIData(oldp+1542,(((IData)(vlSelf->rst)
                                      ? 0U : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst)),32);
        tracep->chgIData(oldp+1543,(((IData)(vlSelf->rst)
                                      ? 0U : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_inst)),32);
        tracep->chgQData(oldp+1544,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1ena) 
                                                  & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addrg) 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr))) 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_enag))
                                                 ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_datag
                                                 : 
                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr]))),64);
        tracep->chgQData(oldp+1546,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2ena) 
                                                  & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addrg) 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr))) 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_enag))
                                                 ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_datag
                                                 : 
                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr]))),64);
        tracep->chgQData(oldp+1548,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1ena) 
                                                  & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addrg) 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1addr))) 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_enag))
                                                 ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_datag
                                                 : 
                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1addr]))),64);
        tracep->chgQData(oldp+1550,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2ena) 
                                                  & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addrg) 
                                                     == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr))) 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_enag))
                                                 ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_datag
                                                 : 
                                                vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr]))),64);
        tracep->chgQData(oldp+1552,(((IData)(vlSelf->rst)
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
        tracep->chgQData(oldp+1554,(((IData)(vlSelf->rst)
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
        tracep->chgQData(oldp+1556,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((1U 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                            >> 2U)))
                                                 ? 
                                                ((QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data)) 
                                                 << 0x20U)
                                                 : (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data))))),64);
        tracep->chgCData(oldp+1558,(((IData)(vlSelf->rst)
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
        tracep->chgCData(oldp+1559,(((IData)(vlSelf->rst)
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
        tracep->chgCData(oldp+1560,(((IData)(vlSelf->rst)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset 
                                                             >> 2U)))
                                               ? 0xf0U
                                               : 0xfU))),8);
        tracep->chgBit(oldp+1561,((1U & (((~ (IData)(vlSelf->rst)) 
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
