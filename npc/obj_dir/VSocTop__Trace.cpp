// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSocTop__Syms.h"


void VSocTop___024root__traceChgSub0(VSocTop___024root* vlSelf, VerilatedVcd* tracep);

void VSocTop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VSocTop___024root* const __restrict vlSelf = static_cast<VSocTop___024root*>(voidSelf);
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VSocTop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VSocTop___024root__traceChgSub0(VSocTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgCData(oldp+0,(vlSelf->SocTop__DOT__add_axi_b_resp),6);
            tracep->chgCData(oldp+1,(vlSelf->SocTop__DOT__add_axi_r_resp),6);
            tracep->chgCData(oldp+2,(vlSelf->SocTop__DOT__tim_axi_b_resp),2);
            tracep->chgCData(oldp+3,(vlSelf->SocTop__DOT__tim_axi_r_resp),2);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+4,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_data_outp),64);
            tracep->chgIData(oldp+6,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_data_oupt),32);
            tracep->chgBit(oldp+7,(vlSelf->SocTop__DOT__t_axi_aw_ready));
            tracep->chgCData(oldp+8,(vlSelf->SocTop__DOT__t_axi_w_strb),8);
            tracep->chgBit(oldp+9,(vlSelf->SocTop__DOT__t_axi_w_valid));
            tracep->chgBit(oldp+10,(vlSelf->SocTop__DOT__t_axi_w_ready));
            tracep->chgCData(oldp+11,(vlSelf->SocTop__DOT__t_axi_b_id),4);
            tracep->chgCData(oldp+12,(vlSelf->SocTop__DOT__t_axi_b_resp),2);
            tracep->chgBit(oldp+13,(vlSelf->SocTop__DOT__t_axi_b_valid));
            tracep->chgBit(oldp+14,(vlSelf->SocTop__DOT__t_axi_ar_ready));
            tracep->chgQData(oldp+15,(vlSelf->SocTop__DOT__t_axi_r_data),64);
            tracep->chgBit(oldp+17,(vlSelf->SocTop__DOT__t_axi_r_valid));
            tracep->chgSData(oldp+18,(vlSelf->SocTop__DOT__add_axi_aw_id),12);
            tracep->chgWData(oldp+19,(vlSelf->SocTop__DOT__add_axi_aw_addr),192);
            tracep->chgIData(oldp+25,(vlSelf->SocTop__DOT__add_axi_aw_len),24);
            tracep->chgSData(oldp+26,(vlSelf->SocTop__DOT__add_axi_aw_size),9);
            tracep->chgCData(oldp+27,(vlSelf->SocTop__DOT__add_axi_aw_burst),6);
            tracep->chgSData(oldp+28,(vlSelf->SocTop__DOT__add_axi_aw_cache),12);
            tracep->chgSData(oldp+29,(vlSelf->SocTop__DOT__add_axi_aw_prot),9);
            tracep->chgSData(oldp+30,(vlSelf->SocTop__DOT__add_axi_aw_qos),12);
            tracep->chgCData(oldp+31,(vlSelf->SocTop__DOT__add_axi_aw_valid),3);
            tracep->chgCData(oldp+32,(vlSelf->SocTop__DOT__add_axi_aw_ready),3);
            tracep->chgWData(oldp+33,(vlSelf->SocTop__DOT__add_axi_w_data),192);
            tracep->chgIData(oldp+39,(vlSelf->SocTop__DOT__add_axi_w_strb),24);
            tracep->chgCData(oldp+40,(vlSelf->SocTop__DOT__add_axi_w_last),3);
            tracep->chgCData(oldp+41,(vlSelf->SocTop__DOT__add_axi_w_valid),3);
            tracep->chgCData(oldp+42,(vlSelf->SocTop__DOT__add_axi_w_ready),3);
            tracep->chgSData(oldp+43,(vlSelf->SocTop__DOT__add_axi_ar_id),12);
            tracep->chgWData(oldp+44,(vlSelf->SocTop__DOT__add_axi_ar_addr),192);
            tracep->chgIData(oldp+50,(vlSelf->SocTop__DOT__add_axi_ar_len),24);
            tracep->chgSData(oldp+51,(vlSelf->SocTop__DOT__add_axi_ar_size),9);
            tracep->chgCData(oldp+52,(vlSelf->SocTop__DOT__add_axi_ar_burst),6);
            tracep->chgSData(oldp+53,(vlSelf->SocTop__DOT__add_axi_ar_cache),12);
            tracep->chgSData(oldp+54,(vlSelf->SocTop__DOT__add_axi_ar_prot),9);
            tracep->chgSData(oldp+55,(vlSelf->SocTop__DOT__add_axi_ar_qos),12);
            tracep->chgCData(oldp+56,(vlSelf->SocTop__DOT__add_axi_ar_valid),3);
            tracep->chgCData(oldp+57,(vlSelf->SocTop__DOT__add_axi_ar_ready),3);
            tracep->chgCData(oldp+58,(vlSelf->SocTop__DOT__add_axi_r_valid),3);
            tracep->chgCData(oldp+59,(vlSelf->SocTop__DOT__add_axi_r_ready),3);
            tracep->chgCData(oldp+60,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_id) 
                                               >> 8U))),4);
            tracep->chgQData(oldp+61,((((QData)((IData)(
                                                        vlSelf->SocTop__DOT__add_axi_aw_addr[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SocTop__DOT__add_axi_aw_addr[4U])))),64);
            tracep->chgCData(oldp+63,((0xffU & (vlSelf->SocTop__DOT__add_axi_aw_len 
                                                >> 0x10U))),8);
            tracep->chgCData(oldp+64,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_size) 
                                             >> 6U))),3);
            tracep->chgCData(oldp+65,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_burst) 
                                             >> 4U))),2);
            tracep->chgCData(oldp+66,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_cache) 
                                               >> 8U))),4);
            tracep->chgCData(oldp+67,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_prot) 
                                             >> 6U))),3);
            tracep->chgCData(oldp+68,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_qos) 
                                               >> 8U))),4);
            tracep->chgBit(oldp+69,(vlSelf->SocTop__DOT__soc_axi_aw_ready));
            tracep->chgBit(oldp+70,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                           >> 2U))));
            tracep->chgQData(oldp+71,((((QData)((IData)(
                                                        vlSelf->SocTop__DOT__add_axi_w_data[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SocTop__DOT__add_axi_w_data[4U])))),64);
            tracep->chgCData(oldp+73,((0xffU & (vlSelf->SocTop__DOT__add_axi_w_strb 
                                                >> 0x10U))),8);
            tracep->chgBit(oldp+74,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_last) 
                                           >> 2U))));
            tracep->chgBit(oldp+75,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                           >> 2U))));
            tracep->chgBit(oldp+76,(vlSelf->SocTop__DOT__soc_axi_w_ready));
            tracep->chgBit(oldp+77,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))));
            tracep->chgCData(oldp+78,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                               >> 8U))),4);
            tracep->chgQData(oldp+79,((((QData)((IData)(
                                                        vlSelf->SocTop__DOT__add_axi_ar_addr[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SocTop__DOT__add_axi_ar_addr[4U])))),64);
            tracep->chgCData(oldp+81,((0xffU & (vlSelf->SocTop__DOT__add_axi_ar_len 
                                                >> 0x10U))),8);
            tracep->chgCData(oldp+82,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_size) 
                                             >> 6U))),3);
            tracep->chgCData(oldp+83,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_burst) 
                                             >> 4U))),2);
            tracep->chgCData(oldp+84,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_cache) 
                                               >> 8U))),4);
            tracep->chgCData(oldp+85,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_prot) 
                                             >> 6U))),3);
            tracep->chgCData(oldp+86,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_qos) 
                                               >> 8U))),4);
            tracep->chgBit(oldp+87,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                                           >> 2U))));
            tracep->chgBit(oldp+88,(vlSelf->SocTop__DOT__soc_axi_ar_ready));
            tracep->chgCData(oldp+89,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                        ? (0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                                   >> 8U))
                                        : 0U)),4);
            tracep->chgBit(oldp+90,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))));
            tracep->chgBit(oldp+91,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))));
            tracep->chgBit(oldp+92,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                           >> 2U))));
            tracep->chgCData(oldp+93,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_id) 
                                               >> 4U))),4);
            tracep->chgQData(oldp+94,((((QData)((IData)(
                                                        vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))),64);
            tracep->chgCData(oldp+96,((0xffU & (vlSelf->SocTop__DOT__add_axi_aw_len 
                                                >> 8U))),8);
            tracep->chgCData(oldp+97,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_size) 
                                             >> 3U))),3);
            tracep->chgCData(oldp+98,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_burst) 
                                             >> 2U))),2);
            tracep->chgCData(oldp+99,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_cache) 
                                               >> 4U))),4);
            tracep->chgCData(oldp+100,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_prot) 
                                              >> 3U))),3);
            tracep->chgCData(oldp+101,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_qos) 
                                                >> 4U))),4);
            tracep->chgBit(oldp+102,(vlSelf->SocTop__DOT__tim_axi_aw_ready));
            tracep->chgBit(oldp+103,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                            >> 1U))));
            tracep->chgQData(oldp+104,((((QData)((IData)(
                                                         vlSelf->SocTop__DOT__add_axi_w_data[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SocTop__DOT__add_axi_w_data[2U])))),64);
            tracep->chgCData(oldp+106,((0xffU & (vlSelf->SocTop__DOT__add_axi_w_strb 
                                                 >> 8U))),8);
            tracep->chgBit(oldp+107,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_last) 
                                            >> 1U))));
            tracep->chgBit(oldp+108,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                            >> 1U))));
            tracep->chgBit(oldp+109,(vlSelf->SocTop__DOT__tim_axi_w_ready));
            tracep->chgCData(oldp+110,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                                >> 4U))),4);
            tracep->chgQData(oldp+111,((((QData)((IData)(
                                                         vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))),64);
            tracep->chgCData(oldp+113,((0xffU & (vlSelf->SocTop__DOT__add_axi_ar_len 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+114,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_size) 
                                              >> 3U))),3);
            tracep->chgCData(oldp+115,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_burst) 
                                              >> 2U))),2);
            tracep->chgCData(oldp+116,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_cache) 
                                                >> 4U))),4);
            tracep->chgCData(oldp+117,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_prot) 
                                              >> 3U))),3);
            tracep->chgCData(oldp+118,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_qos) 
                                                >> 4U))),4);
            tracep->chgBit(oldp+119,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                                            >> 1U))));
            tracep->chgBit(oldp+120,(vlSelf->SocTop__DOT__tim_axi_ar_ready));
            tracep->chgCData(oldp+121,(((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r))
                                         ? (0xfU & 
                                            ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                             >> 4U))
                                         : 0U)),4);
            tracep->chgBit(oldp+122,(vlSelf->SocTop__DOT__tim_axi_r_last));
            tracep->chgBit(oldp+123,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                            >> 1U))));
            tracep->chgCData(oldp+124,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_id))),4);
            tracep->chgQData(oldp+125,((((QData)((IData)(
                                                         vlSelf->SocTop__DOT__add_axi_aw_addr[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SocTop__DOT__add_axi_aw_addr[0U])))),64);
            tracep->chgCData(oldp+127,((0xffU & vlSelf->SocTop__DOT__add_axi_aw_len)),8);
            tracep->chgCData(oldp+128,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_size))),3);
            tracep->chgCData(oldp+129,((3U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_burst))),2);
            tracep->chgCData(oldp+130,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_cache))),4);
            tracep->chgCData(oldp+131,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_prot))),3);
            tracep->chgCData(oldp+132,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_qos))),4);
            tracep->chgBit(oldp+133,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_valid))));
            tracep->chgQData(oldp+134,((((QData)((IData)(
                                                         vlSelf->SocTop__DOT__add_axi_w_data[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SocTop__DOT__add_axi_w_data[0U])))),64);
            tracep->chgCData(oldp+136,((0xffU & vlSelf->SocTop__DOT__add_axi_w_strb)),8);
            tracep->chgBit(oldp+137,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_w_last))));
            tracep->chgBit(oldp+138,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_w_valid))));
            tracep->chgCData(oldp+139,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_id))),4);
            tracep->chgQData(oldp+140,((((QData)((IData)(
                                                         vlSelf->SocTop__DOT__add_axi_ar_addr[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SocTop__DOT__add_axi_ar_addr[0U])))),64);
            tracep->chgCData(oldp+142,((0xffU & vlSelf->SocTop__DOT__add_axi_ar_len)),8);
            tracep->chgCData(oldp+143,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_size))),3);
            tracep->chgCData(oldp+144,((3U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_burst))),2);
            tracep->chgCData(oldp+145,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_cache))),4);
            tracep->chgCData(oldp+146,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_prot))),3);
            tracep->chgCData(oldp+147,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_qos))),4);
            tracep->chgBit(oldp+148,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_valid))));
            tracep->chgBit(oldp+149,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_r_ready))));
            tracep->chgBit(oldp+150,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)) 
                                      & (0U == (0xfU 
                                                & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                                   >> 8U))))));
            tracep->chgBit(oldp+151,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)) 
                                      & (1U == (0xfU 
                                                & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                                   >> 8U))))));
            tracep->chgQData(oldp+152,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                         ? vlSelf->SocTop__DOT__axi_mnq4__DOT__read_addr_reg
                                         : 0ULL)),64);
            tracep->chgQData(oldp+154,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))
                                         ? vlSelf->SocTop__DOT__axi_mnq4__DOT__write_addr_reg
                                         : 0ULL)),64);
            tracep->chgQData(oldp+156,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))
                                         ? vlSelf->SocTop__DOT__axi_mnq4__DOT__write_data_reg
                                         : 0ULL)),64);
            tracep->chgQData(oldp+158,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc),64);
            tracep->chgIData(oldp+160,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst),32);
            tracep->chgBit(oldp+161,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena));
            tracep->chgCData(oldp+162,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr),5);
            tracep->chgBit(oldp+163,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena));
            tracep->chgCData(oldp+164,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type),8);
            tracep->chgCData(oldp+165,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_sel),3);
            tracep->chgQData(oldp+166,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_addr),64);
            tracep->chgQData(oldp+168,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena) 
                                         | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena))
                                         ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data
                                         : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch)
                                             ? (4ULL 
                                                + vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc)
                                             : 0ULL))),64);
            tracep->chgCData(oldp+170,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr),5);
            tracep->chgBit(oldp+171,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena));
            tracep->chgCData(oldp+172,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr),5);
            tracep->chgBit(oldp+173,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena));
            tracep->chgQData(oldp+174,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data),64);
            tracep->chgQData(oldp+176,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc),64);
            tracep->chgCData(oldp+178,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type),8);
            tracep->chgCData(oldp+179,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode),8);
            tracep->chgQData(oldp+180,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1),64);
            tracep->chgQData(oldp+182,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2),64);
            tracep->chgBit(oldp+184,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdena));
            tracep->chgSData(oldp+185,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset),12);
            tracep->chgCData(oldp+186,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type),8);
            tracep->chgQData(oldp+187,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data),64);
            tracep->chgCData(oldp+189,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel),3);
            tracep->chgQData(oldp+190,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr),64);
            tracep->chgQData(oldp+192,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_pc),64);
            tracep->chgIData(oldp+194,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_ex_inst),32);
            tracep->chgIData(oldp+195,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_inst),32);
            tracep->chgCData(oldp+196,((0x7fU & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)),7);
            tracep->chgCData(oldp+197,((0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+198,((7U & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                              >> 0xcU))),3);
            tracep->chgSData(oldp+199,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                        >> 0x14U)),12);
            tracep->chgCData(oldp+200,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+201,((0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                 >> 0x14U))),5);
            tracep->chgIData(oldp+202,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                        >> 0xcU)),20);
            tracep->chgSData(oldp+203,(((0xfe0U & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                            >> 7U)))),12);
            tracep->chgQData(oldp+204,((1ULL + (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))),64);
            tracep->chgQData(oldp+206,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sub_op2),64);
            tracep->chgQData(oldp+208,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2),64);
            tracep->chgQData(oldp+210,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_addw_op2),64);
            tracep->chgBit(oldp+212,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_ls_op2));
            tracep->chgQData(oldp+213,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__shift_res),64);
            tracep->chgIData(oldp+215,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sllw_op2),32);
            tracep->chgQData(oldp+216,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sllw_res),64);
            tracep->chgIData(oldp+218,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_srlw_op2),32);
            tracep->chgQData(oldp+219,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__srlw_res),64);
            tracep->chgIData(oldp+221,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sraw_op2),32);
            tracep->chgQData(oldp+222,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sraw_res),64);
            tracep->chgIData(oldp+224,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2),32);
            tracep->chgQData(oldp+225,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2)))),64);
            tracep->chgQData(oldp+227,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__upper_imm),64);
            tracep->chgBit(oldp+229,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch));
            tracep->chgBit(oldp+230,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena));
            tracep->chgSData(oldp+231,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx),12);
            tracep->chgQData(oldp+232,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data),64);
            tracep->chgBit(oldp+234,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena));
            tracep->chgBit(oldp+235,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena));
            tracep->chgBit(oldp+236,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena));
            tracep->chgBit(oldp+237,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en));
            tracep->chgBit(oldp+238,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en));
            tracep->chgQData(oldp+239,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data),64);
            tracep->chgQData(oldp+241,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value),64);
            tracep->chgQData(oldp+243,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
                                        | vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1)),64);
            tracep->chgQData(oldp+245,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
                                        & (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1))),64);
            tracep->chgBit(oldp+247,((0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+248,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en) 
                                      & (0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)))));
            tracep->chgBit(oldp+249,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en) 
                                      & (0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)))));
            tracep->chgQData(oldp+250,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcycle),64);
            tracep->chgBit(oldp+252,((0x300U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+253,(((0x300U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
            tracep->chgBit(oldp+254,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus));
            tracep->chgBit(oldp+255,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_ena));
            tracep->chgBit(oldp+256,((1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                             | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                             ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)
                                             : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena) 
                                                | ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                    ? (IData)(
                                                              (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                               >> 7U))
                                                    : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)))))));
            tracep->chgBit(oldp+257,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie));
            tracep->chgBit(oldp+258,((1U & ((~ ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                                | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))) 
                                            & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)
                                                ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)
                                                : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                    ? (IData)(
                                                              (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                               >> 3U))
                                                    : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)))))));
            tracep->chgBit(oldp+259,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie));
            tracep->chgCData(oldp+260,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                         | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                         ? 3U : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)
                                                  ? 0U
                                                  : 
                                                 (3U 
                                                  & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                      ? (IData)(
                                                                (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                                 >> 0xbU))
                                                      : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp)))))),2);
            tracep->chgCData(oldp+261,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp),2);
            tracep->chgCData(oldp+262,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs),2);
            tracep->chgBit(oldp+263,((3U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs))));
            tracep->chgQData(oldp+264,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus),64);
            tracep->chgBit(oldp+266,((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+267,(((((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en)) 
                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
            tracep->chgBit(oldp+268,(((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
            tracep->chgQData(oldp+269,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base),62);
            tracep->chgQData(oldp+271,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base 
                                        << 2U)),64);
            tracep->chgBit(oldp+273,((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+274,((((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en)) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena))));
            tracep->chgBit(oldp+275,(((((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en)) 
                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
            tracep->chgQData(oldp+276,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mepc),64);
            tracep->chgBit(oldp+278,((0x342U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+279,(((0x342U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
            tracep->chgBit(oldp+280,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause));
            tracep->chgBit(oldp+281,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause) 
                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
            tracep->chgQData(oldp+282,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                         | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                         ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value
                                         : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause)
                                             ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data
                                             : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause))),64);
            tracep->chgQData(oldp+284,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause),64);
            tracep->chgBit(oldp+286,((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+287,(((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
            tracep->chgBit(oldp+288,(((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
            tracep->chgBit(oldp+289,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie));
            tracep->chgQData(oldp+290,(((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie)) 
                                        << 7U)),64);
            tracep->chgBit(oldp+292,((0x344U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+293,(((0x344U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
            tracep->chgBit(oldp+294,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip));
            tracep->chgQData(oldp+295,((QData)((IData)(
                                                       ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip) 
                                                        << 7U)))),64);
            tracep->chgBit(oldp+297,((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+298,(((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
            tracep->chgBit(oldp+299,(((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
            tracep->chgQData(oldp+300,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mscrstch),64);
            tracep->chgCData(oldp+302,((7U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))),3);
            tracep->chgCData(oldp+303,((3U & (IData)(
                                                     (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                      >> 1U)))),2);
            tracep->chgBit(oldp+304,((1U & (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                    >> 2U)))));
            tracep->chgQData(oldp+305,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_pc_o),64);
            tracep->chgIData(oldp+307,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o),32);
            tracep->chgQData(oldp+308,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__pc_data1),64);
            tracep->chgBit(oldp+310,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_exyn));
            tracep->chgBit(oldp+311,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__teap_yn));
            tracep->chgQData(oldp+312,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__trap_code),64);
            tracep->chgQData(oldp+314,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[0]),64);
            tracep->chgQData(oldp+316,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[1]),64);
            tracep->chgQData(oldp+318,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[2]),64);
            tracep->chgQData(oldp+320,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[3]),64);
            tracep->chgQData(oldp+322,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[4]),64);
            tracep->chgQData(oldp+324,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[5]),64);
            tracep->chgQData(oldp+326,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[6]),64);
            tracep->chgQData(oldp+328,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[7]),64);
            tracep->chgQData(oldp+330,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[8]),64);
            tracep->chgQData(oldp+332,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[9]),64);
            tracep->chgQData(oldp+334,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[10]),64);
            tracep->chgQData(oldp+336,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[11]),64);
            tracep->chgQData(oldp+338,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[12]),64);
            tracep->chgQData(oldp+340,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[13]),64);
            tracep->chgQData(oldp+342,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[14]),64);
            tracep->chgQData(oldp+344,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[15]),64);
            tracep->chgQData(oldp+346,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[16]),64);
            tracep->chgQData(oldp+348,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[17]),64);
            tracep->chgQData(oldp+350,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[18]),64);
            tracep->chgQData(oldp+352,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[19]),64);
            tracep->chgQData(oldp+354,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[20]),64);
            tracep->chgQData(oldp+356,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[21]),64);
            tracep->chgQData(oldp+358,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[22]),64);
            tracep->chgQData(oldp+360,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[23]),64);
            tracep->chgQData(oldp+362,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[24]),64);
            tracep->chgQData(oldp+364,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[25]),64);
            tracep->chgQData(oldp+366,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[26]),64);
            tracep->chgQData(oldp+368,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[27]),64);
            tracep->chgQData(oldp+370,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[28]),64);
            tracep->chgQData(oldp+372,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[29]),64);
            tracep->chgQData(oldp+374,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[30]),64);
            tracep->chgQData(oldp+376,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[31]),64);
            tracep->chgIData(oldp+378,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__i),32);
            tracep->chgQData(oldp+379,(vlSelf->SocTop__DOT__i_cache12__DOT__addr_lock_reg),64);
            tracep->chgIData(oldp+381,(vlSelf->SocTop__DOT__i_cache12__DOT__u_data01__DOT__out_data),32);
            tracep->chgIData(oldp+382,(vlSelf->SocTop__DOT__i_cache12__DOT__u_data02__DOT__out_data),32);
            tracep->chgIData(oldp+383,(vlSelf->SocTop__DOT__i_cache12__DOT__i),32);
            tracep->chgIData(oldp+384,(vlSelf->SocTop__DOT__d_cache13__DOT__i),32);
            tracep->chgQData(oldp+385,(vlSelf->SocTop__DOT__d_cache13__DOT__u_data0__DOT__out_data),64);
            tracep->chgQData(oldp+387,(vlSelf->SocTop__DOT__d_cache13__DOT__u_data1__DOT__out_data),64);
            tracep->chgBit(oldp+389,(((IData)(vlSelf->SocTop__DOT__t_axi_w_valid) 
                                      & (IData)(vlSelf->SocTop__DOT__t_axi_w_ready))));
            tracep->chgBit(oldp+390,(vlSelf->SocTop__DOT__arbitrate4__DOT__b_shankhand));
            tracep->chgBit(oldp+391,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__b_shankhand) 
                                      & (0U == (IData)(vlSelf->SocTop__DOT__t_axi_b_resp)))));
            tracep->chgCData(oldp+392,(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state),2);
            tracep->chgCData(oldp+393,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_state),2);
            tracep->chgCData(oldp+394,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_state),2);
            tracep->chgBit(oldp+395,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_okreg));
            tracep->chgBit(oldp+396,((((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                       >> 2U) & (IData)(vlSelf->SocTop__DOT__soc_axi_aw_ready))));
            tracep->chgBit(oldp+397,((((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                       >> 2U) & (IData)(vlSelf->SocTop__DOT__soc_axi_w_ready))));
            tracep->chgBit(oldp+398,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state)) 
                                      & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                         >> 2U))));
            tracep->chgCData(oldp+399,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state),2);
            tracep->chgCData(oldp+400,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state_nxt),2);
            tracep->chgBit(oldp+401,((((((IData)(vlSelf->SocTop__DOT__soc_axi_ar_ready) 
                                         & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                                            >> 2U)) 
                                        & (0U == (0xffU 
                                                  & (vlSelf->SocTop__DOT__add_axi_ar_len 
                                                     >> 0x10U)))) 
                                       & (3U == (7U 
                                                 & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_size) 
                                                    >> 6U)))) 
                                      & (1U == (3U 
                                                & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_burst) 
                                                   >> 4U))))));
            tracep->chgBit(oldp+402,((((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                       >> 2U) & (2U 
                                                 == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)))));
            tracep->chgCData(oldp+403,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state),2);
            tracep->chgCData(oldp+404,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state_nxt),2);
            tracep->chgQData(oldp+405,(vlSelf->SocTop__DOT__axi_mnq4__DOT__read_addr_reg),64);
            tracep->chgQData(oldp+407,(vlSelf->SocTop__DOT__axi_mnq4__DOT__write_data_reg),64);
            tracep->chgQData(oldp+409,(vlSelf->SocTop__DOT__axi_mnq4__DOT__write_addr_reg),64);
            tracep->chgBit(oldp+411,(vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_l_w_ena));
            tracep->chgBit(oldp+412,(vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h_w_ena));
            tracep->chgBit(oldp+413,(vlSelf->SocTop__DOT__time_axi6__DOT__aw_shakehand));
            tracep->chgBit(oldp+414,(vlSelf->SocTop__DOT__time_axi6__DOT__w_shakehand));
            tracep->chgBit(oldp+415,(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right));
            tracep->chgCData(oldp+416,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m),2);
            tracep->chgBit(oldp+417,((IData)(((((((0U 
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
                                               & (0U 
                                                  == 
                                                  (0x38U 
                                                   & (IData)(vlSelf->SocTop__DOT__add_axi_ar_prot)))) 
                                              & (0U 
                                                 == 
                                                 (0xf0U 
                                                  & (IData)(vlSelf->SocTop__DOT__add_axi_ar_qos)))))));
            tracep->chgBit(oldp+418,(vlSelf->SocTop__DOT__time_axi6__DOT__ar_shakehand));
            tracep->chgCData(oldp+419,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r),2);
            tracep->chgCData(oldp+420,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r_nxt),2);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [3U]))) {
            tracep->chgCData(oldp+421,(((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m_nxt))
                                         ? (0xfU & 
                                            ((IData)(vlSelf->SocTop__DOT__add_axi_aw_id) 
                                             >> 4U))
                                         : 0U)),4);
            tracep->chgBit(oldp+422,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__if_stall_req))));
            tracep->chgQData(oldp+423,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr)
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
            tracep->chgBit(oldp+425,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+426,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x2000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+427,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x3000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+428,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x4000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+429,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x6000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+430,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+431,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x1000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+432,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x5000U 
                                                       == 
                                                       (0x40007000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+433,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+434,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x1000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+435,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x4000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+436,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x5000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+437,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x6000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+438,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+439,((1U & (IData)(
                                                   ((0x80U 
                                                     == 
                                                     (0x80U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x6000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+440,((1U & (IData)(
                                                   ((0x80U 
                                                     == 
                                                     (0x80U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+441,(((IData)(((0x80U 
                                                == 
                                                (0x80U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                               & (0U 
                                                  == 
                                                  (0x7000U 
                                                   & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                      & (0U == (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+442,(((IData)(((0x80U 
                                                == 
                                                (0x80U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                               & (0U 
                                                  == 
                                                  (0x7000U 
                                                   & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                      & (0x18U == (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+443,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr) 
                                       == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena))));
            tracep->chgBit(oldp+444,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr) 
                                       == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena))));
            tracep->chgBit(oldp+445,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                       == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))));
            tracep->chgQData(oldp+446,(((((- (QData)((IData)(
                                                             (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                              >> 0x1fU)))) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                            >> 0x14U)))) 
                                        + vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op)),64);
            tracep->chgBit(oldp+448,((1U & (((~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1)) 
                                             & (~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1))) 
                                            & (~ (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                                   == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena)))))));
            tracep->chgQData(oldp+449,(((2U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type))
                                         ? ((4U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                                             ? ((2U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                                                  ? 0ULL
                                                  : (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word)))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                                                  ? (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte))
                                                  : (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_byte))))
                                             : ((2U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel))
                                                  ? vlSelf->SocTop__DOT__d_cache_data_out
                                                  : 
                                                 (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word 
                                                                               >> 0x1fU))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word))))
                                                 : 
                                                ((1U 
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
            tracep->chgBit(oldp+451,(((IData)(vlSelf->SocTop__DOT__t_axi_aw_valid) 
                                      & (IData)(vlSelf->SocTop__DOT__t_axi_aw_ready))));
            tracep->chgBit(oldp+452,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_valid) 
                                      & (IData)(vlSelf->SocTop__DOT__t_axi_ar_ready))));
            tracep->chgBit(oldp+453,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid) 
                                      & (IData)(vlSelf->SocTop__DOT__t_axi_ar_ready))));
            tracep->chgCData(oldp+454,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m_nxt),2);
            tracep->chgQData(oldp+455,(((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_l_w_ena)
                                         ? vlSelf->SocTop__DOT__time_axi6__DOT__car_mtime_l
                                         : ((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h_w_ena)
                                             ? vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h
                                             : 0ULL))),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+457,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_hit_ok));
            tracep->chgBit(oldp+458,(vlSelf->SocTop__DOT__i_cache12__DOT__write_i_ok));
            tracep->chgBit(oldp+459,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_in_cache1));
            tracep->chgBit(oldp+460,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_in_cache2));
            tracep->chgBit(oldp+461,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_write_cache));
            tracep->chgBit(oldp+462,(vlSelf->SocTop__DOT__d_cache13__DOT__write_ok));
            tracep->chgBit(oldp+463,(vlSelf->SocTop__DOT__d_cache13__DOT__write_incache));
            tracep->chgBit(oldp+464,(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena1));
            tracep->chgBit(oldp+465,(vlSelf->SocTop__DOT__d_cache13__DOT__w_incache_ena2));
            tracep->chgBit(oldp+466,(vlSelf->SocTop__DOT__d_cache13__DOT__write_l_ok));
            tracep->chgBit(oldp+467,(vlSelf->SocTop__DOT__d_cache13__DOT__load_in_cache1));
            tracep->chgBit(oldp+468,(vlSelf->SocTop__DOT__d_cache13__DOT__load_in_cache2));
            tracep->chgBit(oldp+469,(vlSelf->SocTop__DOT__d_cache13__DOT__read_cache));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgQData(oldp+470,(vlSelf->SocTop__DOT__rvcpu_data_addr),64);
            tracep->chgCData(oldp+472,(vlSelf->SocTop__DOT__rvcpu_wmask),8);
            tracep->chgQData(oldp+473,(vlSelf->SocTop__DOT__rvcpu_data_o),64);
            tracep->chgBit(oldp+475,(vlSelf->SocTop__DOT__rvcpu_we));
            tracep->chgBit(oldp+476,(vlSelf->SocTop__DOT__rvcpu_re));
            tracep->chgIData(oldp+477,(vlSelf->SocTop__DOT__i_cache_inst_data),32);
            tracep->chgBit(oldp+478,((1U & (~ (IData)(vlSelf->SocTop__DOT__arbitrate_ti_sign)))));
            tracep->chgBit(oldp+479,(vlSelf->SocTop__DOT__i_cache_read_ena));
            tracep->chgBit(oldp+480,((1U & (~ ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl) 
                                               >> 1U)))));
            tracep->chgQData(oldp+481,(vlSelf->SocTop__DOT__d_cache_data_out),64);
            tracep->chgBit(oldp+483,(vlSelf->SocTop__DOT__d_cache_read_ena));
            tracep->chgBit(oldp+484,(vlSelf->SocTop__DOT__arbitrate_ti_sign));
            tracep->chgBit(oldp+485,((vlSelf->SocTop__DOT__time_axi6__DOT__car_mtime_l 
                                      > vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h)));
            tracep->chgQData(oldp+486,(vlSelf->SocTop__DOT__t_axi_aw_addr),64);
            tracep->chgBit(oldp+488,(vlSelf->SocTop__DOT__t_axi_aw_valid));
            tracep->chgQData(oldp+489,(vlSelf->SocTop__DOT__t_axi_w_data),64);
            tracep->chgCData(oldp+491,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid)
                                         ? 1U : 0U)),4);
            tracep->chgQData(oldp+492,(vlSelf->SocTop__DOT__t_axi_ar_addr),64);
            tracep->chgBit(oldp+494,(vlSelf->SocTop__DOT__t_axi_ar_valid));
            tracep->chgSData(oldp+495,(vlSelf->SocTop__DOT__add_axi_b_id),12);
            tracep->chgCData(oldp+496,(vlSelf->SocTop__DOT__add_axi_b_valid),3);
            tracep->chgWData(oldp+497,(vlSelf->SocTop__DOT__add_axi_r_data),192);
            tracep->chgBit(oldp+503,(vlSelf->SocTop__DOT__tim_axi_b_valid));
            tracep->chgQData(oldp+504,(vlSelf->SocTop__DOT__tim_axi_r_data),64);
            tracep->chgCData(oldp+506,(vlSelf->SocTop__DOT__prot_chose_write),3);
            tracep->chgCData(oldp+507,(vlSelf->SocTop__DOT__prot_chose_read),3);
            tracep->chgCData(oldp+508,((0x1fU & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                                 >> 0xfU))),5);
            tracep->chgBit(oldp+509,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_stall_req));
            tracep->chgQData(oldp+510,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_data),64);
            tracep->chgCData(oldp+512,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1),5);
            tracep->chgBit(oldp+513,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1));
            tracep->chgCData(oldp+514,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2),5);
            tracep->chgBit(oldp+515,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2));
            tracep->chgCData(oldp+516,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type),8);
            tracep->chgCData(oldp+517,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode),8);
            tracep->chgQData(oldp+518,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op),64);
            tracep->chgQData(oldp+520,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op2),64);
            tracep->chgBit(oldp+522,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_ena));
            tracep->chgCData(oldp+523,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_addr),5);
            tracep->chgQData(oldp+524,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_pc),64);
            tracep->chgSData(oldp+526,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_s_offset),12);
            tracep->chgCData(oldp+527,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_memsel),3);
            tracep->chgBit(oldp+528,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_pip_jalrena));
            tracep->chgBit(oldp+529,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_if_flush));
            tracep->chgCData(oldp+530,(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl),5);
            tracep->chgQData(oldp+531,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_id_data),64);
            tracep->chgQData(oldp+533,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_ex_mem_pc),64);
            tracep->chgQData(oldp+535,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_pc),64);
            tracep->chgIData(oldp+537,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_id_ex_inst),32);
            tracep->chgIData(oldp+538,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_ex_mem_inst),32);
            tracep->chgIData(oldp+539,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_inst),32);
            tracep->chgIData(oldp+540,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm),20);
            tracep->chgSData(oldp+541,((vlSelf->SocTop__DOT__i_cache_inst_data 
                                        >> 0x14U)),12);
            tracep->chgSData(oldp+542,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm),12);
            tracep->chgCData(oldp+543,((0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)),7);
            tracep->chgBit(oldp+544,((IData)((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->SocTop__DOT__i_cache_inst_data)))));
            tracep->chgBit(oldp+545,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr));
            tracep->chgBit(oldp+546,((IData)((0x63U 
                                              == (0x7fU 
                                                  & vlSelf->SocTop__DOT__i_cache_inst_data)))));
            tracep->chgQData(oldp+547,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__operand1),64);
            tracep->chgQData(oldp+549,(((IData)((0x6fU 
                                                 == 
                                                 (0x7fU 
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
                                         : ((IData)(
                                                    (0x63U 
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
                                                 ? 
                                                (((- (QData)((IData)(
                                                                     (vlSelf->SocTop__DOT__i_cache_inst_data 
                                                                      >> 0x1fU)))) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   (vlSelf->SocTop__DOT__i_cache_inst_data 
                                                                    >> 0x14U))))
                                                 : 4ULL)))),64);
            tracep->chgQData(oldp+551,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc),64);
            tracep->chgBit(oldp+553,((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl))));
            tracep->chgCData(oldp+554,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__rs1),5);
            tracep->chgBit(oldp+555,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui));
            tracep->chgBit(oldp+556,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc));
            tracep->chgBit(oldp+557,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal));
            tracep->chgBit(oldp+558,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr));
            tracep->chgBit(oldp+559,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jump));
            tracep->chgBit(oldp+560,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srai));
            tracep->chgBit(oldp+561,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addiw));
            tracep->chgBit(oldp+562,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slliw));
            tracep->chgBit(oldp+563,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srliw));
            tracep->chgBit(oldp+564,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraiw));
            tracep->chgBit(oldp+565,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_add));
            tracep->chgBit(oldp+566,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sub));
            tracep->chgBit(oldp+567,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sll));
            tracep->chgBit(oldp+568,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slt));
            tracep->chgBit(oldp+569,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sltu));
            tracep->chgBit(oldp+570,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_xor));
            tracep->chgBit(oldp+571,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srl));
            tracep->chgBit(oldp+572,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sra));
            tracep->chgBit(oldp+573,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_or));
            tracep->chgBit(oldp+574,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_and));
            tracep->chgBit(oldp+575,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addw));
            tracep->chgBit(oldp+576,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_subw));
            tracep->chgBit(oldp+577,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sllw));
            tracep->chgBit(oldp+578,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srlw));
            tracep->chgBit(oldp+579,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraw));
            tracep->chgBit(oldp+580,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw));
            tracep->chgBit(oldp+581,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs));
            tracep->chgBit(oldp+582,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc));
            tracep->chgBit(oldp+583,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrwi));
            tracep->chgBit(oldp+584,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw) 
                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs)) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc))));
            tracep->chgBit(oldp+585,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak));
            tracep->chgBit(oldp+586,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1));
            tracep->chgBit(oldp+587,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1));
            tracep->chgBit(oldp+588,((1U & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl) 
                                            >> 3U))));
            tracep->chgQData(oldp+589,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__exe_res),64);
            tracep->chgCData(oldp+591,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_byte),8);
            tracep->chgSData(oldp+592,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte),16);
            tracep->chgIData(oldp+593,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word),32);
            tracep->chgQData(oldp+594,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_data),64);
            tracep->chgCData(oldp+596,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_mask),8);
            tracep->chgCData(oldp+597,(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst),6);
            tracep->chgBit(oldp+598,(vlSelf->SocTop__DOT__i_cache12__DOT__i_tag_ena1));
            tracep->chgBit(oldp+599,(vlSelf->SocTop__DOT__i_cache12__DOT__i_tag_ena2));
            tracep->chgCData(oldp+600,(vlSelf->SocTop__DOT__d_cache13__DOT__count_addr),6);
            tracep->chgBit(oldp+601,(vlSelf->SocTop__DOT__d_cache13__DOT__wirte_chose1));
            tracep->chgBit(oldp+602,(vlSelf->SocTop__DOT__d_cache13__DOT__wirte_chose2));
            tracep->chgCData(oldp+603,(vlSelf->SocTop__DOT__d_cache13__DOT__state_store),6);
            tracep->chgQData(oldp+604,((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                        >> 9U)),55);
            tracep->chgCData(oldp+606,(vlSelf->SocTop__DOT__d_cache13__DOT__state_load),6);
            tracep->chgCData(oldp+607,((0x3fU & (IData)(
                                                        (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                         >> 3U)))),6);
            tracep->chgQData(oldp+608,((0x80000000000000ULL 
                                        | (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                           >> 9U))),56);
            tracep->chgBit(oldp+610,(vlSelf->SocTop__DOT__d_cache13__DOT__tag_ena1));
            tracep->chgBit(oldp+611,(vlSelf->SocTop__DOT__d_cache13__DOT__tag_ena2));
            tracep->chgCData(oldp+612,((0x3fU & (IData)(
                                                        (vlSelf->SocTop__DOT__rvcpu_data_o 
                                                         >> 3U)))),6);
            tracep->chgQData(oldp+613,(vlSelf->SocTop__DOT__d_cache13__DOT__in_data1),64);
            tracep->chgCData(oldp+615,(vlSelf->SocTop__DOT__d_cache13__DOT__data_ena1),8);
            tracep->chgQData(oldp+616,(vlSelf->SocTop__DOT__d_cache13__DOT__in_data2),64);
            tracep->chgCData(oldp+618,(vlSelf->SocTop__DOT__d_cache13__DOT__data_ena2),8);
            tracep->chgCData(oldp+619,(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state_nex),2);
            tracep->chgBit(oldp+620,(((IData)(vlSelf->SocTop__DOT__i_cache_read_ena) 
                                      & (IData)(vlSelf->SocTop__DOT__d_cache_read_ena))));
            tracep->chgBit(oldp+621,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid));
            tracep->chgBit(oldp+622,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_valid));
            tracep->chgCData(oldp+623,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_state_nxt),2);
            tracep->chgCData(oldp+624,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_state_nxt),2);
            tracep->chgQData(oldp+625,(vlSelf->SocTop__DOT__time_axi6__DOT__car_mtime_l),64);
            tracep->chgQData(oldp+627,(vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
            tracep->chgQData(oldp+629,(vlSelf->SocTop__DOT__rvcpu_inst_addr),64);
            tracep->chgBit(oldp+631,(vlSelf->SocTop__DOT__arbitrate_d_ok));
            tracep->chgBit(oldp+632,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_okreg));
            tracep->chgCData(oldp+633,(vlSelf->SocTop__DOT__t_axi_r_id),4);
            tracep->chgCData(oldp+634,(vlSelf->SocTop__DOT__t_axi_r_resp),2);
            tracep->chgBit(oldp+635,(vlSelf->SocTop__DOT__t_axi_r_last));
            tracep->chgSData(oldp+636,(vlSelf->SocTop__DOT__add_axi_r_id),12);
            tracep->chgCData(oldp+637,(vlSelf->SocTop__DOT__add_axi_r_last),3);
            tracep->chgQData(oldp+638,((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                        >> 9U)),55);
            tracep->chgBit(oldp+640,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_chose1));
            tracep->chgBit(oldp+641,(vlSelf->SocTop__DOT__i_cache12__DOT__inst_chose2));
            tracep->chgCData(oldp+642,((0x3fU & (IData)(
                                                        (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                                         >> 3U)))),6);
            tracep->chgQData(oldp+643,((0x80000000000000ULL 
                                        | (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                           >> 9U))),56);
            tracep->chgQData(oldp+645,(vlSelf->SocTop__DOT__i_cache12__DOT__u_tag01__DOT__out_data),55);
            tracep->chgBit(oldp+647,(vlSelf->SocTop__DOT__i_cache12__DOT__u_tag01__DOT__out_vaild));
            tracep->chgQData(oldp+648,(vlSelf->SocTop__DOT__i_cache12__DOT__u_tag02__DOT__out_data),55);
            tracep->chgBit(oldp+650,(vlSelf->SocTop__DOT__i_cache12__DOT__u_tag02__DOT__out_vaild));
            tracep->chgBit(oldp+651,(vlSelf->SocTop__DOT__d_cache13__DOT__wbck_ok));
            tracep->chgBit(oldp+652,(vlSelf->SocTop__DOT__d_cache13__DOT__load_bc_ok));
            tracep->chgQData(oldp+653,(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_data),55);
            tracep->chgBit(oldp+655,(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag0__DOT__out_vaild));
            tracep->chgQData(oldp+656,(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_data),55);
            tracep->chgBit(oldp+658,(vlSelf->SocTop__DOT__d_cache13__DOT__u_tag1__DOT__out_vaild));
            tracep->chgBit(oldp+659,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_r_shankhand));
            tracep->chgBit(oldp+660,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_r_shankhand));
        }
        tracep->chgBit(oldp+661,(vlSelf->clk));
        tracep->chgBit(oldp+662,(vlSelf->rst));
        tracep->chgBit(oldp+663,(vlSelf->out_read_ram_ena));
        tracep->chgBit(oldp+664,(vlSelf->out_read_inst_ena));
        tracep->chgQData(oldp+665,(vlSelf->out_addr_outp),64);
        tracep->chgIData(oldp+667,(vlSelf->in_inst_data_in),32);
        tracep->chgQData(oldp+668,(vlSelf->in_ram_data_in),64);
        tracep->chgBit(oldp+670,(vlSelf->out_write_ram_ena));
        tracep->chgQData(oldp+671,(vlSelf->out_write_ram_data),64);
        tracep->chgQData(oldp+673,(vlSelf->out_write_ram_addr),64);
        tracep->chgQData(oldp+675,(((IData)(vlSelf->SocTop__DOT__arbitrate_ti_sign)
                                     ? vlSelf->SocTop__DOT__i_cache12__DOT__addr_lock_reg
                                     : vlSelf->SocTop__DOT__rvcpu_inst_addr)),64);
        tracep->chgBit(oldp+677,((((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                   & (4U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load))) 
                                  | ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__read_cache) 
                                     | (((IData)(vlSelf->SocTop__DOT__rvcpu_we) 
                                         & (4U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store))) 
                                        | (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__write_incache))))));
        tracep->chgQData(oldp+678,((((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
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
        tracep->chgBit(oldp+680,((((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                   & (0x20U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load))) 
                                  | (vlSelf->SocTop__DOT__d_cache13__DOT__dirty1
                                     [vlSelf->SocTop__DOT__d_cache13__DOT__count_addr] 
                                     & (vlSelf->SocTop__DOT__d_cache13__DOT__counter1
                                        [vlSelf->SocTop__DOT__d_cache13__DOT__count_addr] 
                                        >= vlSelf->SocTop__DOT__d_cache13__DOT__counter2
                                        [vlSelf->SocTop__DOT__d_cache13__DOT__count_addr])))));
        tracep->chgQData(oldp+681,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                     ? ((0U == (0xfU 
                                                & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                                   >> 8U)))
                                         ? vlSelf->in_ram_data_in
                                         : (QData)((IData)(vlSelf->in_inst_data_in)))
                                     : 0ULL)),64);
        tracep->chgQData(oldp+683,(((1U & ((~ (IData)(vlSelf->rst)) 
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
                                        [(0x1fU & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                                   >> 0xfU))])
                                     : 0ULL)),64);
        tracep->chgBit(oldp+685,(((IData)(vlSelf->rst)
                                   ? 0U : (1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)))));
        tracep->chgQData(oldp+686,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
                                                ? (0xfffffffffffffffeULL 
                                                   & vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc)
                                                : vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc))),64);
        tracep->chgBit(oldp+688,(((IData)(vlSelf->rst)
                                   ? 0U : (1U & ((((IData)(vlSelf->rst)
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
        tracep->chgQData(oldp+689,((((~ (IData)(vlSelf->rst)) 
                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1))
                                     ? ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                          == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                         & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                         ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                         : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                        [vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1])
                                     : 0ULL)),64);
        tracep->chgQData(oldp+691,((((~ (IData)(vlSelf->rst)) 
                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2))
                                     ? ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                          == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                         & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                         ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                         : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                        [vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2])
                                     : 0ULL)),64);
        tracep->chgBit(oldp+693,(((~ (IData)(vlSelf->rst)) 
                                  & (((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu_we)) 
                                     & (~ (((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                            & (4U == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_load))) 
                                           | ((IData)(vlSelf->SocTop__DOT__d_cache13__DOT__read_cache) 
                                              | (((IData)(vlSelf->SocTop__DOT__rvcpu_we) 
                                                  & (4U 
                                                     == (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__state_store))) 
                                                 | (IData)(vlSelf->SocTop__DOT__d_cache13__DOT__write_incache)))))))));
        tracep->chgBit(oldp+694,(((IData)(vlSelf->rst)
                                   ? 0U : (1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1) 
                                                  & (2U 
                                                     == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                 & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1) 
                                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)))))));
        tracep->chgBit(oldp+695,(((IData)(vlSelf->rst)
                                   ? 0U : (1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2) 
                                                  & (2U 
                                                     == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                 & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2) 
                                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)))))));
        tracep->chgQData(oldp+696,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((1U 
                                                & (IData)(
                                                          (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                           >> 2U)))
                                                ? (
                                                   (1U 
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
                                                : (
                                                   (1U 
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
        tracep->chgQData(oldp+698,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((0U 
                                                == 
                                                (3U 
                                                 & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                            >> 1U))))
                                                ? (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data))))
                                                : (
                                                   (1U 
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
        tracep->chgQData(oldp+700,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((1U 
                                                & (IData)(
                                                          (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                           >> 2U)))
                                                ? ((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)) 
                                                   << 0x20U)
                                                : (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data))))),64);
        tracep->chgCData(oldp+702,(((IData)(vlSelf->rst)
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
        tracep->chgCData(oldp+703,(((IData)(vlSelf->rst)
                                     ? 0U : ((0U == 
                                              (3U & (IData)(
                                                            (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                             >> 1U))))
                                              ? 3U : 
                                             ((1U == 
                                               (3U 
                                                & (IData)(
                                                          (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                           >> 1U))))
                                               ? 0xcU
                                               : ((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                               >> 1U))))
                                                   ? 0x30U
                                                   : 0xc0U))))),8);
        tracep->chgCData(oldp+704,(((IData)(vlSelf->rst)
                                     ? 0U : ((1U & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                            >> 2U)))
                                              ? 0xf0U
                                              : 0xfU))),8);
        tracep->chgBit(oldp+705,((1U & ((~ (IData)(vlSelf->rst)) 
                                        & (~ ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl) 
                                              >> 1U))))));
        tracep->chgIData(oldp+706,(((((0x10U == (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst)) 
                                      & (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_okreg)) 
                                     & (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__inst_chose1))
                                     ? vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_data_oupt
                                     : 0U)),32);
        tracep->chgIData(oldp+707,(((((0x10U == (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__state_inst)) 
                                      & (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_okreg)) 
                                     & (IData)(vlSelf->SocTop__DOT__i_cache12__DOT__inst_chose2))
                                     ? vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_data_oupt
                                     : 0U)),32);
        tracep->chgBit(oldp+708,(vlSelf->SocTop__DOT__d_cache13__DOT__store_ok));
        tracep->chgBit(oldp+709,(vlSelf->SocTop__DOT__d_cache13__DOT__load_ok));
        tracep->chgBit(oldp+710,((vlSelf->SocTop__DOT__d_cache13__DOT__dirty1
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
    }
}

void VSocTop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VSocTop___024root* const __restrict vlSelf = static_cast<VSocTop___024root*>(voidSelf);
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    }
}
