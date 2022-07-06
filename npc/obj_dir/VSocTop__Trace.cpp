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
    VlWide<4>/*127:0*/ __Vtemp47;
    VlWide<6>/*191:0*/ __Vtemp49;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgCData(oldp+0,((((IData)(vlSelf->SocTop__DOT__tim_axi_r_resp) 
                                       << 2U) | (IData)(vlSelf->SocTop__DOT__io_axi_r_resp))),6);
            tracep->chgCData(oldp+1,(vlSelf->SocTop__DOT__tim_axi_r_resp),2);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+2,(vlSelf->SocTop__DOT__rvcpu_data_addr),64);
            tracep->chgCData(oldp+4,(vlSelf->SocTop__DOT__rvcpu_wmask),8);
            tracep->chgQData(oldp+5,(vlSelf->SocTop__DOT__rvcpu_data_o),64);
            tracep->chgBit(oldp+7,(vlSelf->SocTop__DOT__rvcpu_we));
            tracep->chgBit(oldp+8,(vlSelf->SocTop__DOT__rvcpu_re));
            tracep->chgBit(oldp+9,(vlSelf->SocTop__DOT__core_stall_l));
            tracep->chgIData(oldp+10,(vlSelf->SocTop__DOT__i_cache_inst_data),32);
            tracep->chgBit(oldp+11,(vlSelf->SocTop__DOT__i_cache_inst_valid));
            tracep->chgBit(oldp+12,(vlSelf->SocTop__DOT__i_cache_read_ena));
            tracep->chgQData(oldp+13,(vlSelf->SocTop__DOT__i_cache_addr),64);
            tracep->chgBit(oldp+15,(vlSelf->SocTop__DOT__i_caceh_resp));
            tracep->chgQData(oldp+16,(vlSelf->SocTop__DOT__d_cache_data_out),64);
            tracep->chgQData(oldp+18,(vlSelf->SocTop__DOT__d_cache_out_addr),64);
            tracep->chgCData(oldp+20,(vlSelf->SocTop__DOT__d_cache_out_type),4);
            tracep->chgQData(oldp+21,(vlSelf->SocTop__DOT__arbitrate_d_data),64);
            tracep->chgBit(oldp+23,(vlSelf->SocTop__DOT__arbitrate_d_ok));
            tracep->chgQData(oldp+24,(vlSelf->SocTop__DOT__arbitrate_i_data),64);
            tracep->chgBit(oldp+26,(vlSelf->SocTop__DOT__arbitrate_i_ok));
            tracep->chgBit(oldp+27,(vlSelf->SocTop__DOT__arbitrate_ti_sign));
            tracep->chgBit(oldp+28,(vlSelf->SocTop__DOT__t_axi_aw_valid));
            tracep->chgCData(oldp+29,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid)
                                        ? 1U : 0U)),4);
            tracep->chgQData(oldp+30,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid)
                                        ? vlSelf->SocTop__DOT__i_cache_addr
                                        : ((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_valid)
                                            ? vlSelf->SocTop__DOT__d_cache_out_addr
                                            : 0ULL))),64);
            tracep->chgBit(oldp+32,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid) 
                                     | (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_valid))));
            tracep->chgBit(oldp+33,(vlSelf->SocTop__DOT__t_axi_ar_ready));
            tracep->chgCData(oldp+34,(vlSelf->SocTop__DOT__t_axi_r_id),4);
            tracep->chgQData(oldp+35,(vlSelf->SocTop__DOT__t_axi_r_data),64);
            tracep->chgCData(oldp+37,(vlSelf->SocTop__DOT__t_axi_r_resp),2);
            tracep->chgBit(oldp+38,(vlSelf->SocTop__DOT__t_axi_r_valid));
            tracep->chgSData(oldp+39,(vlSelf->SocTop__DOT__add_axi_aw_id),12);
            tracep->chgWData(oldp+40,(vlSelf->SocTop__DOT__add_axi_aw_addr),192);
            tracep->chgIData(oldp+46,(vlSelf->SocTop__DOT__add_axi_aw_len),24);
            tracep->chgSData(oldp+47,(vlSelf->SocTop__DOT__add_axi_aw_size),9);
            tracep->chgCData(oldp+48,(vlSelf->SocTop__DOT__add_axi_aw_burst),6);
            tracep->chgSData(oldp+49,(vlSelf->SocTop__DOT__add_axi_aw_cache),12);
            tracep->chgSData(oldp+50,(vlSelf->SocTop__DOT__add_axi_aw_prot),9);
            tracep->chgSData(oldp+51,(vlSelf->SocTop__DOT__add_axi_aw_qos),12);
            tracep->chgCData(oldp+52,(vlSelf->SocTop__DOT__add_axi_aw_valid),3);
            tracep->chgCData(oldp+53,((((IData)(vlSelf->SocTop__DOT__soc_axi_aw_ready) 
                                        << 2U) | (((IData)(vlSelf->SocTop__DOT__tim_axi_aw_ready) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->SocTop__DOT__io_axi_aw_ready)))),3);
            tracep->chgWData(oldp+54,(vlSelf->SocTop__DOT__add_axi_w_data),192);
            tracep->chgIData(oldp+60,(vlSelf->SocTop__DOT__add_axi_w_strb),24);
            tracep->chgCData(oldp+61,(vlSelf->SocTop__DOT__add_axi_w_last),3);
            tracep->chgCData(oldp+62,(vlSelf->SocTop__DOT__add_axi_w_valid),3);
            tracep->chgCData(oldp+63,((((IData)(vlSelf->SocTop__DOT__soc_axi_w_ready) 
                                        << 2U) | (((IData)(vlSelf->SocTop__DOT__tim_axi_w_ready) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->SocTop__DOT__io_axi_w_ready)))),3);
            tracep->chgCData(oldp+64,(vlSelf->SocTop__DOT__add_axi_b_ready),3);
            tracep->chgSData(oldp+65,(vlSelf->SocTop__DOT__add_axi_ar_id),12);
            tracep->chgWData(oldp+66,(vlSelf->SocTop__DOT__add_axi_ar_addr),192);
            tracep->chgIData(oldp+72,(vlSelf->SocTop__DOT__add_axi_ar_len),24);
            tracep->chgSData(oldp+73,(vlSelf->SocTop__DOT__add_axi_ar_size),9);
            tracep->chgCData(oldp+74,(vlSelf->SocTop__DOT__add_axi_ar_burst),6);
            tracep->chgSData(oldp+75,(vlSelf->SocTop__DOT__add_axi_ar_cache),12);
            tracep->chgSData(oldp+76,(vlSelf->SocTop__DOT__add_axi_ar_prot),9);
            tracep->chgSData(oldp+77,(vlSelf->SocTop__DOT__add_axi_ar_qos),12);
            tracep->chgCData(oldp+78,(vlSelf->SocTop__DOT__add_axi_ar_valid),3);
            tracep->chgCData(oldp+79,(vlSelf->SocTop__DOT__add_axi_r_ready),3);
            tracep->chgCData(oldp+80,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_id) 
                                               >> 8U))),4);
            tracep->chgQData(oldp+81,((((QData)((IData)(
                                                        vlSelf->SocTop__DOT__add_axi_aw_addr[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SocTop__DOT__add_axi_aw_addr[4U])))),64);
            tracep->chgCData(oldp+83,((0xffU & (vlSelf->SocTop__DOT__add_axi_aw_len 
                                                >> 0x10U))),8);
            tracep->chgCData(oldp+84,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_size) 
                                             >> 6U))),3);
            tracep->chgCData(oldp+85,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_burst) 
                                             >> 4U))),2);
            tracep->chgCData(oldp+86,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_cache) 
                                               >> 8U))),4);
            tracep->chgCData(oldp+87,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_prot) 
                                             >> 6U))),3);
            tracep->chgCData(oldp+88,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_qos) 
                                               >> 8U))),4);
            tracep->chgBit(oldp+89,(vlSelf->SocTop__DOT__soc_axi_aw_ready));
            tracep->chgBit(oldp+90,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                           >> 2U))));
            tracep->chgQData(oldp+91,((((QData)((IData)(
                                                        vlSelf->SocTop__DOT__add_axi_w_data[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SocTop__DOT__add_axi_w_data[4U])))),64);
            tracep->chgCData(oldp+93,((0xffU & (vlSelf->SocTop__DOT__add_axi_w_strb 
                                                >> 0x10U))),8);
            tracep->chgBit(oldp+94,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_last) 
                                           >> 2U))));
            tracep->chgBit(oldp+95,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                           >> 2U))));
            tracep->chgBit(oldp+96,(vlSelf->SocTop__DOT__soc_axi_w_ready));
            tracep->chgBit(oldp+97,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                           >> 2U))));
            tracep->chgCData(oldp+98,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                               >> 8U))),4);
            tracep->chgQData(oldp+99,((((QData)((IData)(
                                                        vlSelf->SocTop__DOT__add_axi_ar_addr[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SocTop__DOT__add_axi_ar_addr[4U])))),64);
            tracep->chgCData(oldp+101,((0xffU & (vlSelf->SocTop__DOT__add_axi_ar_len 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+102,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_size) 
                                              >> 6U))),3);
            tracep->chgCData(oldp+103,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_burst) 
                                              >> 4U))),2);
            tracep->chgCData(oldp+104,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_cache) 
                                                >> 8U))),4);
            tracep->chgCData(oldp+105,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_prot) 
                                              >> 6U))),3);
            tracep->chgCData(oldp+106,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_qos) 
                                                >> 8U))),4);
            tracep->chgBit(oldp+107,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                                            >> 2U))));
            tracep->chgBit(oldp+108,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                            >> 2U))));
            tracep->chgCData(oldp+109,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_id) 
                                                >> 4U))),4);
            tracep->chgQData(oldp+110,((((QData)((IData)(
                                                         vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))),64);
            tracep->chgCData(oldp+112,((0xffU & (vlSelf->SocTop__DOT__add_axi_aw_len 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+113,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_size) 
                                              >> 3U))),3);
            tracep->chgCData(oldp+114,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_burst) 
                                              >> 2U))),2);
            tracep->chgCData(oldp+115,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_cache) 
                                                >> 4U))),4);
            tracep->chgCData(oldp+116,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_prot) 
                                              >> 3U))),3);
            tracep->chgCData(oldp+117,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_qos) 
                                                >> 4U))),4);
            tracep->chgBit(oldp+118,(vlSelf->SocTop__DOT__tim_axi_aw_ready));
            tracep->chgBit(oldp+119,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                            >> 1U))));
            tracep->chgQData(oldp+120,((((QData)((IData)(
                                                         vlSelf->SocTop__DOT__add_axi_w_data[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SocTop__DOT__add_axi_w_data[2U])))),64);
            tracep->chgCData(oldp+122,((0xffU & (vlSelf->SocTop__DOT__add_axi_w_strb 
                                                 >> 8U))),8);
            tracep->chgBit(oldp+123,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_last) 
                                            >> 1U))));
            tracep->chgBit(oldp+124,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                            >> 1U))));
            tracep->chgBit(oldp+125,(vlSelf->SocTop__DOT__tim_axi_w_ready));
            tracep->chgBit(oldp+126,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                            >> 1U))));
            tracep->chgCData(oldp+127,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                                >> 4U))),4);
            tracep->chgQData(oldp+128,((((QData)((IData)(
                                                         vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))),64);
            tracep->chgCData(oldp+130,((0xffU & (vlSelf->SocTop__DOT__add_axi_ar_len 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+131,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_size) 
                                              >> 3U))),3);
            tracep->chgCData(oldp+132,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_burst) 
                                              >> 2U))),2);
            tracep->chgCData(oldp+133,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_cache) 
                                                >> 4U))),4);
            tracep->chgCData(oldp+134,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_prot) 
                                              >> 3U))),3);
            tracep->chgCData(oldp+135,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_qos) 
                                                >> 4U))),4);
            tracep->chgBit(oldp+136,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                                            >> 1U))));
            tracep->chgBit(oldp+137,(vlSelf->SocTop__DOT__tim_axi_ar_ready));
            tracep->chgQData(oldp+138,(vlSelf->SocTop__DOT__tim_axi_r_data),64);
            tracep->chgBit(oldp+140,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                            >> 1U))));
            tracep->chgCData(oldp+141,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_id))),4);
            tracep->chgQData(oldp+142,((((QData)((IData)(
                                                         vlSelf->SocTop__DOT__add_axi_aw_addr[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SocTop__DOT__add_axi_aw_addr[0U])))),64);
            tracep->chgCData(oldp+144,((0xffU & vlSelf->SocTop__DOT__add_axi_aw_len)),8);
            tracep->chgCData(oldp+145,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_size))),3);
            tracep->chgCData(oldp+146,((3U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_burst))),2);
            tracep->chgCData(oldp+147,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_cache))),4);
            tracep->chgCData(oldp+148,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_prot))),3);
            tracep->chgCData(oldp+149,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_qos))),4);
            tracep->chgBit(oldp+150,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_valid))));
            tracep->chgQData(oldp+151,((((QData)((IData)(
                                                         vlSelf->SocTop__DOT__add_axi_w_data[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SocTop__DOT__add_axi_w_data[0U])))),64);
            tracep->chgCData(oldp+153,((0xffU & vlSelf->SocTop__DOT__add_axi_w_strb)),8);
            tracep->chgBit(oldp+154,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_w_last))));
            tracep->chgBit(oldp+155,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_w_valid))));
            tracep->chgBit(oldp+156,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_b_ready))));
            tracep->chgCData(oldp+157,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_id))),4);
            tracep->chgQData(oldp+158,((((QData)((IData)(
                                                         vlSelf->SocTop__DOT__add_axi_ar_addr[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SocTop__DOT__add_axi_ar_addr[0U])))),64);
            tracep->chgCData(oldp+160,((0xffU & vlSelf->SocTop__DOT__add_axi_ar_len)),8);
            tracep->chgCData(oldp+161,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_size))),3);
            tracep->chgCData(oldp+162,((3U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_burst))),2);
            tracep->chgCData(oldp+163,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_cache))),4);
            tracep->chgCData(oldp+164,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_prot))),3);
            tracep->chgCData(oldp+165,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_qos))),4);
            tracep->chgBit(oldp+166,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_valid))));
            tracep->chgBit(oldp+167,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_r_ready))));
            tracep->chgBit(oldp+168,(vlSelf->SocTop__DOT__axi_mnq4__DOT__ar_shankhand));
            tracep->chgQData(oldp+169,(((IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__ar_shankhand)
                                         ? (((QData)((IData)(
                                                             vlSelf->SocTop__DOT__add_axi_ar_addr[5U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->SocTop__DOT__add_axi_ar_addr[4U])))
                                         : 0ULL)),64);
            tracep->chgCData(oldp+171,((0x1fU & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                                 >> 0xfU))),5);
            tracep->chgQData(oldp+172,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_data),64);
            tracep->chgCData(oldp+174,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1),5);
            tracep->chgBit(oldp+175,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1));
            tracep->chgCData(oldp+176,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2),5);
            tracep->chgBit(oldp+177,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2));
            tracep->chgBit(oldp+178,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ctrl_req));
            tracep->chgCData(oldp+179,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type),8);
            tracep->chgCData(oldp+180,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode),8);
            tracep->chgQData(oldp+181,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op),64);
            tracep->chgBit(oldp+183,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_ena));
            tracep->chgBit(oldp+184,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_pip_jalrena));
            tracep->chgBit(oldp+185,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_if_flush));
            tracep->chgCData(oldp+186,(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl),5);
            tracep->chgQData(oldp+187,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_id_data),64);
            tracep->chgBit(oldp+189,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_ctrl_req));
            tracep->chgQData(oldp+190,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_pc),64);
            tracep->chgIData(oldp+192,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_inst),32);
            tracep->chgIData(oldp+193,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm),20);
            tracep->chgSData(oldp+194,((vlSelf->SocTop__DOT__i_cache_inst_data 
                                        >> 0x14U)),12);
            tracep->chgSData(oldp+195,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm),12);
            tracep->chgCData(oldp+196,((0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)),7);
            tracep->chgBit(oldp+197,((IData)((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->SocTop__DOT__i_cache_inst_data)))));
            tracep->chgBit(oldp+198,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr));
            tracep->chgBit(oldp+199,((IData)((0x63U 
                                              == (0x7fU 
                                                  & vlSelf->SocTop__DOT__i_cache_inst_data)))));
            tracep->chgQData(oldp+200,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc),64);
            tracep->chgCData(oldp+202,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__rs1),5);
            tracep->chgBit(oldp+203,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui));
            tracep->chgBit(oldp+204,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc));
            tracep->chgBit(oldp+205,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal));
            tracep->chgBit(oldp+206,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr));
            tracep->chgBit(oldp+207,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jump));
            tracep->chgBit(oldp+208,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srai));
            tracep->chgBit(oldp+209,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addiw));
            tracep->chgBit(oldp+210,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slliw));
            tracep->chgBit(oldp+211,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srliw));
            tracep->chgBit(oldp+212,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraiw));
            tracep->chgBit(oldp+213,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_add));
            tracep->chgBit(oldp+214,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sub));
            tracep->chgBit(oldp+215,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sll));
            tracep->chgBit(oldp+216,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slt));
            tracep->chgBit(oldp+217,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sltu));
            tracep->chgBit(oldp+218,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_xor));
            tracep->chgBit(oldp+219,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srl));
            tracep->chgBit(oldp+220,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sra));
            tracep->chgBit(oldp+221,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_or));
            tracep->chgBit(oldp+222,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_and));
            tracep->chgBit(oldp+223,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_div));
            tracep->chgBit(oldp+224,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divu));
            tracep->chgBit(oldp+225,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mul));
            tracep->chgBit(oldp+226,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulh));
            tracep->chgBit(oldp+227,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulhsu));
            tracep->chgBit(oldp+228,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulhu));
            tracep->chgBit(oldp+229,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_rem));
            tracep->chgBit(oldp+230,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remu));
            tracep->chgBit(oldp+231,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addw));
            tracep->chgBit(oldp+232,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_subw));
            tracep->chgBit(oldp+233,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sllw));
            tracep->chgBit(oldp+234,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srlw));
            tracep->chgBit(oldp+235,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraw));
            tracep->chgBit(oldp+236,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divuw));
            tracep->chgBit(oldp+237,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divw));
            tracep->chgBit(oldp+238,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulw));
            tracep->chgBit(oldp+239,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remuw));
            tracep->chgBit(oldp+240,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remw));
            tracep->chgBit(oldp+241,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw));
            tracep->chgBit(oldp+242,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs));
            tracep->chgBit(oldp+243,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc));
            tracep->chgBit(oldp+244,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrwi));
            tracep->chgBit(oldp+245,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw) 
                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs)) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc))));
            tracep->chgBit(oldp+246,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak));
            tracep->chgBit(oldp+247,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1));
            tracep->chgBit(oldp+248,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1));
            tracep->chgBit(oldp+249,((1U & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl) 
                                            >> 3U))));
            tracep->chgQData(oldp+250,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__exe_res),64);
            tracep->chgCData(oldp+252,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_byte),8);
            tracep->chgSData(oldp+253,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte),16);
            tracep->chgIData(oldp+254,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word),32);
            tracep->chgQData(oldp+255,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_data),64);
            tracep->chgCData(oldp+257,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_mask),8);
            tracep->chgBit(oldp+258,(vlSelf->SocTop__DOT__i_cache2__DOT__icache_if_shankhand));
            tracep->chgCData(oldp+259,(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst_nxt),6);
            tracep->chgBit(oldp+260,(vlSelf->SocTop__DOT__i_cache2__DOT__inst_hit_ok));
            tracep->chgQData(oldp+261,(vlSelf->SocTop__DOT__i_cache2__DOT__miss_data),64);
            tracep->chgBit(oldp+263,(vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_o));
            tracep->chgBit(oldp+264,(vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_t));
            tracep->chgBit(oldp+265,(vlSelf->SocTop__DOT__i_cache2__DOT__write_i_ok));
            tracep->chgQData(oldp+266,((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                        >> 9U)),55);
            tracep->chgCData(oldp+268,((0x3fU & (IData)(
                                                        (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                         >> 3U)))),6);
            tracep->chgCData(oldp+269,(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread_nxt),6);
            tracep->chgBit(oldp+270,(vlSelf->SocTop__DOT__d_cache3__DOT__mem_hit_ok));
            tracep->chgBit(oldp+271,(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_ok));
            tracep->chgQData(oldp+272,(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_addr),64);
            tracep->chgQData(oldp+274,(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_data),64);
            tracep->chgCData(oldp+276,(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_type),4);
            tracep->chgBit(oldp+277,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_i_ok));
            tracep->chgCData(oldp+278,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_type),4);
            tracep->chgQData(oldp+279,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_addr),64);
            tracep->chgCData(oldp+281,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_data_ena1),8);
            tracep->chgBit(oldp+282,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_tag_ena1));
            tracep->chgCData(oldp+283,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_data_ena2),8);
            tracep->chgBit(oldp+284,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_tag_ena2));
            tracep->chgBit(oldp+285,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_resp));
            tracep->chgCData(oldp+286,(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite_nxt),6);
            tracep->chgCData(oldp+287,(vlSelf->SocTop__DOT__d_cache3__DOT__hitw_data_strb1),8);
            tracep->chgCData(oldp+288,(vlSelf->SocTop__DOT__d_cache3__DOT__hitw_data_strb2),8);
            tracep->chgBit(oldp+289,(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_ok));
            tracep->chgQData(oldp+290,(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_addr),64);
            tracep->chgQData(oldp+292,(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_data),64);
            tracep->chgCData(oldp+294,(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_type),4);
            tracep->chgBit(oldp+295,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_i_ok));
            tracep->chgCData(oldp+296,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_type),4);
            tracep->chgQData(oldp+297,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_addr),64);
            tracep->chgCData(oldp+299,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_data_ena1),8);
            tracep->chgBit(oldp+300,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_tag_ena1));
            tracep->chgCData(oldp+301,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_data_ena2),8);
            tracep->chgBit(oldp+302,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_tag_ena2));
            tracep->chgBit(oldp+303,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_resp));
            tracep->chgBit(oldp+304,(vlSelf->SocTop__DOT__d_cache3__DOT__tag_ena1));
            tracep->chgBit(oldp+305,(vlSelf->SocTop__DOT__d_cache3__DOT__tag_ena2));
            tracep->chgCData(oldp+306,(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena1),8);
            tracep->chgQData(oldp+307,(vlSelf->SocTop__DOT__d_cache3__DOT__in_rem_data1),64);
            tracep->chgCData(oldp+309,(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena2),8);
            tracep->chgQData(oldp+310,((0x80000000000000ULL 
                                        | (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                           >> 9U))),56);
            tracep->chgBit(oldp+312,(vlSelf->SocTop__DOT__arbitrate4__DOT__b_shankhand));
            tracep->chgCData(oldp+313,(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state_nex),2);
            tracep->chgBit(oldp+314,(vlSelf->SocTop__DOT__arbitrate4__DOT__b_shankhand));
            tracep->chgBit(oldp+315,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_valid) 
                                      & (IData)(vlSelf->SocTop__DOT__t_axi_ar_ready))));
            tracep->chgBit(oldp+316,(((IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid) 
                                      & (IData)(vlSelf->SocTop__DOT__t_axi_ar_ready))));
            tracep->chgBit(oldp+317,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_r_shankhand));
            tracep->chgBit(oldp+318,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_r_shankhand));
            tracep->chgBit(oldp+319,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_valid));
            tracep->chgBit(oldp+320,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_valid));
            tracep->chgCData(oldp+321,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_state_nxt),2);
            tracep->chgCData(oldp+322,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_state_nxt),2);
            tracep->chgBit(oldp+323,(vlSelf->SocTop__DOT__arbitrate4__DOT__r_dcache_valid));
            tracep->chgBit(oldp+324,((((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                       >> 2U) & (IData)(vlSelf->SocTop__DOT__soc_axi_aw_ready))));
            tracep->chgBit(oldp+325,((((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                       >> 2U) & (IData)(vlSelf->SocTop__DOT__soc_axi_w_ready))));
            tracep->chgCData(oldp+326,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state_nxt),2);
            tracep->chgBit(oldp+327,(vlSelf->SocTop__DOT__axi_mnq4__DOT__ar_shankhand));
            tracep->chgCData(oldp+328,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state_nxt),2);
            tracep->chgBit(oldp+329,((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                       & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__ar_shakehand)) 
                                      & (0x2004000ULL 
                                         == (((QData)((IData)(
                                                              vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))))));
            tracep->chgBit(oldp+330,((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                       & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__ar_shakehand)) 
                                      & (0x200bff8ULL 
                                         == (((QData)((IData)(
                                                              vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))))));
            tracep->chgBit(oldp+331,(((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                        & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__w_shakehand)) 
                                       & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__aw_shakehand)) 
                                      & (0x2004000ULL 
                                         == (((QData)((IData)(
                                                              vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))))));
            tracep->chgBit(oldp+332,(((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                        & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__w_shakehand)) 
                                       & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__aw_shakehand)) 
                                      & (0x200bff8ULL 
                                         == (((QData)((IData)(
                                                              vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))))));
            tracep->chgQData(oldp+333,(vlSelf->SocTop__DOT__time_axi6__DOT__wmask),64);
            tracep->chgBit(oldp+335,(vlSelf->SocTop__DOT__time_axi6__DOT__aw_shakehand));
            tracep->chgBit(oldp+336,(vlSelf->SocTop__DOT__time_axi6__DOT__w_shakehand));
            tracep->chgBit(oldp+337,(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right));
            tracep->chgCData(oldp+338,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m_nxt),2);
            tracep->chgBit(oldp+339,((IData)(((((((0U 
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
            tracep->chgBit(oldp+340,(vlSelf->SocTop__DOT__time_axi6__DOT__ar_shakehand));
            tracep->chgCData(oldp+341,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r_nxt),2);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgBit(oldp+342,(((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                                       ? ((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
                                          & (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                                               == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                   >> 9U)) 
                                              & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild)) 
                                             | ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                                                 == 
                                                 (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                  >> 9U)) 
                                                & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))))
                                       : ((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                                          & ((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                                             & (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                                                  == 
                                                  (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                   >> 9U)) 
                                                 & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild)) 
                                                | ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                                                    == 
                                                    (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                     >> 9U)) 
                                                   & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))))))));
            tracep->chgQData(oldp+343,(((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                                         ? vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_data
                                         : ((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                                             ? vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_data
                                             : 0ULL))),64);
            tracep->chgBit(oldp+345,(((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                                       ? (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_resp)
                                       : ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                                          & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_resp)))));
            tracep->chgQData(oldp+346,((((0U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state)) 
                                         | (1U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state)))
                                         ? vlSelf->SocTop__DOT__d_cache_out_addr
                                         : 0ULL)),64);
            tracep->chgQData(oldp+348,((((0U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state)) 
                                         | (1U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state)))
                                         ? ((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                                             ? vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_data
                                             : ((8U 
                                                 == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                                                 ? vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_data
                                                 : 0ULL))
                                         : 0ULL)),64);
            tracep->chgSData(oldp+350,(((0xf00U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_id)) 
                                        | ((((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m))
                                              ? (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__time_reg_id)
                                              : 0U) 
                                            << 4U) 
                                           | (IData)(vlSelf->SocTop__DOT__io_axi_b_id)))),12);
            tracep->chgCData(oldp+351,((((IData)(vlSelf->SocTop__DOT__soc_axi_ar_ready) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->SocTop__DOT__tim_axi_ar_ready) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->SocTop__DOT__io_axi_ar_ready)))),3);
            tracep->chgSData(oldp+352,(((((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                           ? (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__r_s_axi_ar_id)
                                           : 0U) << 8U) 
                                        | ((((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r))
                                              ? (0xfU 
                                                 & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                                    >> 4U))
                                              : 0U) 
                                            << 4U) 
                                           | (IData)(vlSelf->SocTop__DOT__io_axi_r_id)))),12);
            tracep->chgCData(oldp+353,(((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r))
                                         ? (0xfU & 
                                            ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                             >> 4U))
                                         : 0U)),4);
            tracep->chgCData(oldp+354,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_ena)
                                         ? ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak)
                                             ? 0xbU
                                             : (0x1fU 
                                                & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                   >> 7U)))
                                         : 0U)),5);
            tracep->chgSData(oldp+355,((0xfffU & ((2U 
                                                   & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))
                                                   ? 
                                                  (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                   >> 0x14U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))
                                                    ? 
                                                   ((0xfe0U 
                                                     & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                        >> 0x14U)) 
                                                    | (0x1fU 
                                                       & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                          >> 7U)))
                                                    : 0U)))),12);
            tracep->chgQData(oldp+356,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr)
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
            tracep->chgBit(oldp+358,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+359,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x2000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+360,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x3000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+361,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x4000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+362,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x6000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+363,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+364,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x1000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+365,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x5000U 
                                                       == 
                                                       (0x40007000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+366,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+367,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x1000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+368,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x4000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+369,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x5000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+370,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x6000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+371,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+372,((1U & (IData)(
                                                   ((0x80U 
                                                     == 
                                                     (0x80U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x6000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+373,((1U & (IData)(
                                                   ((0x80U 
                                                     == 
                                                     (0x80U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+374,(((IData)(((0x80U 
                                                == 
                                                (0x80U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                               & (0U 
                                                  == 
                                                  (0x7000U 
                                                   & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                      & (0U == (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+375,(((IData)(((0x80U 
                                                == 
                                                (0x80U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                               & (0U 
                                                  == 
                                                  (0x7000U 
                                                   & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                      & (0x18U == (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+376,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr) 
                                       == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena))));
            tracep->chgBit(oldp+377,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr) 
                                       == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena))));
            tracep->chgBit(oldp+378,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                       == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))));
            tracep->chgQData(oldp+379,(((((- (QData)((IData)(
                                                             (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                              >> 0x1fU)))) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                            >> 0x14U)))) 
                                        + vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op)),64);
            tracep->chgBit(oldp+381,((1U & (((~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1)) 
                                             & (~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1))) 
                                            & (~ (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                                   == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena)))))));
            tracep->chgQData(oldp+382,(((2U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type))
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
            tracep->chgBit(oldp+384,(((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                      & (1U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)))));
            tracep->chgBit(oldp+385,(((IData)(vlSelf->SocTop__DOT__rvcpu_we) 
                                      & (1U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)))));
            tracep->chgBit(oldp+386,(((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
                                      & (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                                           == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                               >> 9U)) 
                                          & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild)) 
                                         | ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                                             == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                 >> 9U)) 
                                            & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))))));
            tracep->chgBit(oldp+387,(((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                                      & (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                                           == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                               >> 9U)) 
                                          & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild)) 
                                         | ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                                             == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                 >> 9U)) 
                                            & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))))));
            tracep->chgBit(oldp+388,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state)) 
                                      & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                         >> 2U))));
            tracep->chgBit(oldp+389,((((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                       >> 2U) & (2U 
                                                 == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)))));
            tracep->chgQData(oldp+390,((((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
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
            tracep->chgQData(oldp+392,((((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
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
            tracep->chgBit(oldp+394,(((IData)(vlSelf->SocTop__DOT__tim_axi_b_valid) 
                                      & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                         >> 1U))));
            tracep->chgBit(oldp+395,(((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r)) 
                                      & ((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                         >> 1U))));
            tracep->chgQData(oldp+396,(((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
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
                                                == 
                                                (((QData)((IData)(
                                                                  vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))))
                                             ? vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h
                                             : 0ULL))),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+398,(vlSelf->SocTop__DOT__rvcpu_inst_addr),64);
            tracep->chgBit(oldp+400,((vlSelf->SocTop__DOT__time_axi6__DOT__car_mtime_l 
                                      > vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h)));
            tracep->chgBit(oldp+401,(vlSelf->SocTop__DOT__t_axi_w_valid));
            tracep->chgCData(oldp+402,((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__time_reg_resp) 
                                         << 2U) | (IData)(vlSelf->SocTop__DOT__io_axi_b_resp))),6);
            tracep->chgCData(oldp+403,((((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state)) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->SocTop__DOT__tim_axi_b_valid) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->SocTop__DOT__io_axi_b_valid)))),3);
            tracep->chgCData(oldp+404,((((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->SocTop__DOT__tim_axi_r_last) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->SocTop__DOT__io_axi_r_last)))),3);
            tracep->chgCData(oldp+405,((((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)) 
                                         << 2U) | (
                                                   ((2U 
                                                     == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r)) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->SocTop__DOT__io_axi_r_valid)))),3);
            tracep->chgBit(oldp+406,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))));
            tracep->chgBit(oldp+407,(vlSelf->SocTop__DOT__soc_axi_ar_ready));
            tracep->chgCData(oldp+408,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                         ? (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__r_s_axi_ar_id)
                                         : 0U)),4);
            tracep->chgBit(oldp+409,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))));
            tracep->chgBit(oldp+410,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))));
            tracep->chgCData(oldp+411,(((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m))
                                         ? (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__time_reg_id)
                                         : 0U)),4);
            tracep->chgCData(oldp+412,(vlSelf->SocTop__DOT__time_axi6__DOT__time_reg_resp),2);
            tracep->chgBit(oldp+413,(vlSelf->SocTop__DOT__tim_axi_b_valid));
            tracep->chgBit(oldp+414,(vlSelf->SocTop__DOT__tim_axi_r_last));
            tracep->chgBit(oldp+415,((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r))));
            tracep->chgQData(oldp+416,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))
                                         ? vlSelf->SocTop__DOT__axi_mnq4__DOT__write_addr_reg
                                         : 0ULL)),64);
            tracep->chgQData(oldp+418,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))
                                         ? vlSelf->SocTop__DOT__axi_mnq4__DOT__write_data_reg
                                         : 0ULL)),64);
            tracep->chgQData(oldp+420,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc),64);
            tracep->chgIData(oldp+422,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst),32);
            tracep->chgBit(oldp+423,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena));
            tracep->chgCData(oldp+424,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr),5);
            tracep->chgBit(oldp+425,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena));
            tracep->chgCData(oldp+426,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type),8);
            tracep->chgCData(oldp+427,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_sel),3);
            tracep->chgQData(oldp+428,(((IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type))))
                                         ? (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                            + (((- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset) 
                                                                       >> 0xbU))))) 
                                                << 0xcU) 
                                               | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset))))
                                         : 0ULL)),64);
            tracep->chgQData(oldp+430,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena) 
                                         | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena))
                                         ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data
                                         : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch)
                                             ? (4ULL 
                                                + vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc)
                                             : 0ULL))),64);
            tracep->chgBit(oldp+432,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_div_req));
            tracep->chgCData(oldp+433,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr),5);
            tracep->chgBit(oldp+434,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena));
            tracep->chgCData(oldp+435,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr),5);
            tracep->chgBit(oldp+436,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena));
            tracep->chgQData(oldp+437,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data),64);
            tracep->chgQData(oldp+439,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc),64);
            tracep->chgCData(oldp+441,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type),8);
            tracep->chgCData(oldp+442,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode),8);
            tracep->chgQData(oldp+443,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1),64);
            tracep->chgQData(oldp+445,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2),64);
            tracep->chgBit(oldp+447,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdena));
            tracep->chgSData(oldp+448,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset),12);
            tracep->chgCData(oldp+449,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type),8);
            tracep->chgQData(oldp+450,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data),64);
            tracep->chgCData(oldp+452,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel),3);
            tracep->chgQData(oldp+453,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr),64);
            tracep->chgQData(oldp+455,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_pc),64);
            tracep->chgIData(oldp+457,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_ex_inst),32);
            tracep->chgIData(oldp+458,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_inst),32);
            tracep->chgBit(oldp+459,(vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__ex_pc_change));
            tracep->chgBit(oldp+460,(vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__id_pc_change));
            tracep->chgQData(oldp+461,(vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__pc_ex),64);
            tracep->chgQData(oldp+463,(vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__pc_id),64);
            tracep->chgBit(oldp+465,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id2__DOT__fl_bub_temp));
            tracep->chgCData(oldp+466,((0x7fU & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)),7);
            tracep->chgCData(oldp+467,((0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+468,((7U & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                              >> 0xcU))),3);
            tracep->chgSData(oldp+469,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                        >> 0x14U)),12);
            tracep->chgCData(oldp+470,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+471,((0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                 >> 0x14U))),5);
            tracep->chgIData(oldp+472,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                        >> 0xcU)),20);
            tracep->chgSData(oldp+473,(((0xfe0U & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                            >> 7U)))),12);
            tracep->chgQData(oldp+474,((1ULL + (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))),64);
            tracep->chgQData(oldp+476,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sub_op2),64);
            tracep->chgQData(oldp+478,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2),64);
            tracep->chgQData(oldp+480,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_addw_op2),64);
            tracep->chgBit(oldp+482,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_ls_op2));
            tracep->chgQData(oldp+483,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__shift_res),64);
            tracep->chgIData(oldp+485,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sllw_op2),32);
            tracep->chgQData(oldp+486,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sllw_res),64);
            tracep->chgIData(oldp+488,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_srlw_op2),32);
            tracep->chgQData(oldp+489,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__srlw_res),64);
            tracep->chgIData(oldp+491,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sraw_op2),32);
            tracep->chgQData(oldp+492,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sraw_res),64);
            tracep->chgIData(oldp+494,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2),32);
            tracep->chgQData(oldp+495,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2)))),64);
            tracep->chgQData(oldp+497,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__upper_imm),64);
            tracep->chgQData(oldp+499,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_data),64);
            tracep->chgBit(oldp+501,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_finish_sign));
            tracep->chgBit(oldp+502,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_ready));
            tracep->chgQData(oldp+503,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divrem_data),64);
            tracep->chgBit(oldp+505,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__finish_sign));
            tracep->chgBit(oldp+506,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__dr_ready));
            tracep->chgQData(oldp+507,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_divdata),64);
            tracep->chgQData(oldp+509,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op2_divdata),64);
            tracep->chgBit(oldp+511,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch));
            tracep->chgBit(oldp+512,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena));
            tracep->chgSData(oldp+513,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx),12);
            tracep->chgQData(oldp+514,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data),64);
            tracep->chgBit(oldp+516,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena));
            tracep->chgBit(oldp+517,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena));
            tracep->chgBit(oldp+518,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena));
            tracep->chgBit(oldp+519,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en));
            tracep->chgBit(oldp+520,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en));
            tracep->chgQData(oldp+521,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data),64);
            tracep->chgQData(oldp+523,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value),64);
            tracep->chgQData(oldp+525,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
                                        | vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1)),64);
            tracep->chgQData(oldp+527,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
                                        & (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1))),64);
            tracep->chgBit(oldp+529,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__mult_valid));
            tracep->chgBit(oldp+530,((1U & (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                    >> 0x3fU)))));
            tracep->chgBit(oldp+531,((1U & (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2 
                                                    >> 0x3fU)))));
            tracep->chgQData(oldp+532,(((1U & (IData)(
                                                      (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                       >> 0x3fU)))
                                         ? (1ULL + 
                                            (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1))
                                         : vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1)),64);
            tracep->chgQData(oldp+534,(((1U & (IData)(
                                                      (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2 
                                                       >> 0x3fU)))
                                         ? (1ULL + 
                                            (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))
                                         : vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)),64);
            tracep->chgWData(oldp+536,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand),128);
            tracep->chgQData(oldp+540,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multipler),64);
            if ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multipler))) {
                __Vtemp47[0U] = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[0U];
                __Vtemp47[1U] = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[1U];
                __Vtemp47[2U] = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[2U];
                __Vtemp47[3U] = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[3U];
            } else {
                __Vtemp47[0U] = 0U;
                __Vtemp47[1U] = 0U;
                __Vtemp47[2U] = 0U;
                __Vtemp47[3U] = 0U;
            }
            tracep->chgWData(oldp+542,(__Vtemp47),128);
            tracep->chgWData(oldp+546,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp),128);
            tracep->chgBit(oldp+550,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_signbit));
            tracep->chgBit(oldp+551,((1U & (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_divdata 
                                                    >> 0x3fU)))));
            tracep->chgBit(oldp+552,((1U & (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op2_divdata 
                                                    >> 0x3fU)))));
            tracep->chgQData(oldp+553,(((1U & (IData)(
                                                      (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_divdata 
                                                       >> 0x3fU)))
                                         ? (1ULL + 
                                            (~ vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_divdata))
                                         : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_divdata)),64);
            tracep->chgQData(oldp+555,(((1U & (IData)(
                                                      (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op2_divdata 
                                                       >> 0x3fU)))
                                         ? (1ULL + 
                                            (~ vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op2_divdata))
                                         : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op2_divdata)),64);
            tracep->chgBit(oldp+557,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__div_rem_signbit));
            tracep->chgCData(oldp+558,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__counter),8);
            tracep->chgWData(oldp+559,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a),128);
            tracep->chgWData(oldp+563,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_b),128);
            tracep->chgQData(oldp+567,((1ULL + (~ (
                                                   ((QData)((IData)(
                                                                    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[0U])))))),64);
            tracep->chgBit(oldp+569,((0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+570,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en) 
                                      & (0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)))));
            tracep->chgBit(oldp+571,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en) 
                                      & (0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)))));
            tracep->chgQData(oldp+572,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcycle),64);
            tracep->chgBit(oldp+574,((0x300U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+575,(((0x300U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
            tracep->chgBit(oldp+576,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus));
            tracep->chgBit(oldp+577,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_ena));
            tracep->chgBit(oldp+578,((1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                             | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                             ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)
                                             : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena) 
                                                | ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                    ? (IData)(
                                                              (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                               >> 7U))
                                                    : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)))))));
            tracep->chgBit(oldp+579,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie));
            tracep->chgBit(oldp+580,((1U & ((~ ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                                | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))) 
                                            & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)
                                                ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)
                                                : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                    ? (IData)(
                                                              (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                               >> 3U))
                                                    : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)))))));
            tracep->chgBit(oldp+581,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie));
            tracep->chgCData(oldp+582,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
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
            tracep->chgCData(oldp+583,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp),2);
            tracep->chgCData(oldp+584,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs),2);
            tracep->chgBit(oldp+585,((3U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs))));
            tracep->chgQData(oldp+586,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus),64);
            tracep->chgBit(oldp+588,((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+589,(((((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en)) 
                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
            tracep->chgBit(oldp+590,(((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
            tracep->chgQData(oldp+591,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base),62);
            tracep->chgQData(oldp+593,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base 
                                        << 2U)),64);
            tracep->chgBit(oldp+595,((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+596,((((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en)) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena))));
            tracep->chgBit(oldp+597,(((((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en)) 
                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
            tracep->chgQData(oldp+598,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mepc),64);
            tracep->chgBit(oldp+600,((0x342U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+601,(((0x342U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
            tracep->chgBit(oldp+602,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause));
            tracep->chgBit(oldp+603,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause) 
                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
            tracep->chgQData(oldp+604,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                         | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                         ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value
                                         : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause)
                                             ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data
                                             : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause))),64);
            tracep->chgQData(oldp+606,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause),64);
            tracep->chgBit(oldp+608,((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+609,(((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
            tracep->chgBit(oldp+610,(((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
            tracep->chgBit(oldp+611,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie));
            tracep->chgQData(oldp+612,(((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie)) 
                                        << 7U)),64);
            tracep->chgBit(oldp+614,((0x344U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+615,(((0x344U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
            tracep->chgBit(oldp+616,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip));
            tracep->chgQData(oldp+617,((QData)((IData)(
                                                       ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip) 
                                                        << 7U)))),64);
            tracep->chgBit(oldp+619,((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+620,(((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
            tracep->chgBit(oldp+621,(((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
            tracep->chgQData(oldp+622,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mscrstch),64);
            tracep->chgCData(oldp+624,((7U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))),3);
            tracep->chgCData(oldp+625,((3U & (IData)(
                                                     (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                      >> 1U)))),2);
            tracep->chgBit(oldp+626,((1U & (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                    >> 2U)))));
            tracep->chgQData(oldp+627,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_pc_o),64);
            tracep->chgIData(oldp+629,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o),32);
            tracep->chgQData(oldp+630,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__pc_data1),64);
            tracep->chgBit(oldp+632,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_exyn));
            tracep->chgBit(oldp+633,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__teap_yn));
            tracep->chgQData(oldp+634,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__trap_code),64);
            tracep->chgQData(oldp+636,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[0]),64);
            tracep->chgQData(oldp+638,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[1]),64);
            tracep->chgQData(oldp+640,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[2]),64);
            tracep->chgQData(oldp+642,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[3]),64);
            tracep->chgQData(oldp+644,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[4]),64);
            tracep->chgQData(oldp+646,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[5]),64);
            tracep->chgQData(oldp+648,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[6]),64);
            tracep->chgQData(oldp+650,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[7]),64);
            tracep->chgQData(oldp+652,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[8]),64);
            tracep->chgQData(oldp+654,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[9]),64);
            tracep->chgQData(oldp+656,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[10]),64);
            tracep->chgQData(oldp+658,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[11]),64);
            tracep->chgQData(oldp+660,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[12]),64);
            tracep->chgQData(oldp+662,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[13]),64);
            tracep->chgQData(oldp+664,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[14]),64);
            tracep->chgQData(oldp+666,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[15]),64);
            tracep->chgQData(oldp+668,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[16]),64);
            tracep->chgQData(oldp+670,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[17]),64);
            tracep->chgQData(oldp+672,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[18]),64);
            tracep->chgQData(oldp+674,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[19]),64);
            tracep->chgQData(oldp+676,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[20]),64);
            tracep->chgQData(oldp+678,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[21]),64);
            tracep->chgQData(oldp+680,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[22]),64);
            tracep->chgQData(oldp+682,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[23]),64);
            tracep->chgQData(oldp+684,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[24]),64);
            tracep->chgQData(oldp+686,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[25]),64);
            tracep->chgQData(oldp+688,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[26]),64);
            tracep->chgQData(oldp+690,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[27]),64);
            tracep->chgQData(oldp+692,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[28]),64);
            tracep->chgQData(oldp+694,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[29]),64);
            tracep->chgQData(oldp+696,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[30]),64);
            tracep->chgQData(oldp+698,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[31]),64);
            tracep->chgIData(oldp+700,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__i),32);
            tracep->chgQData(oldp+701,((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                        >> 9U)),55);
            tracep->chgCData(oldp+703,((0x3fU & (IData)(
                                                        (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                                         >> 3U)))),6);
            tracep->chgCData(oldp+704,(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst),6);
            tracep->chgBit(oldp+705,((0x20U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst))));
            tracep->chgBit(oldp+706,(vlSelf->SocTop__DOT__i_cache2__DOT__read_ok));
            tracep->chgQData(oldp+707,(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__out_data),55);
            tracep->chgBit(oldp+709,(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__out_vaild));
            tracep->chgQData(oldp+710,(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__out_data),55);
            tracep->chgBit(oldp+712,(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__out_vaild));
            tracep->chgQData(oldp+713,(vlSelf->SocTop__DOT__i_cache2__DOT__u_data01__DOT__out_data),64);
            tracep->chgQData(oldp+715,(vlSelf->SocTop__DOT__i_cache2__DOT__u_data02__DOT__out_data),64);
            tracep->chgIData(oldp+717,(vlSelf->SocTop__DOT__i_cache2__DOT__i),32);
            tracep->chgQData(oldp+718,((0x80000000000000ULL 
                                        | (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                           >> 9U))),56);
            tracep->chgBit(oldp+720,((1U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))));
            tracep->chgBit(oldp+721,((1U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))));
            tracep->chgCData(oldp+722,(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread),6);
            tracep->chgBit(oldp+723,((2U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))));
            tracep->chgBit(oldp+724,(vlSelf->SocTop__DOT__d_cache3__DOT__read_ok));
            tracep->chgCData(oldp+725,(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite),6);
            tracep->chgBit(oldp+726,((2U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))));
            tracep->chgBit(oldp+727,(vlSelf->SocTop__DOT__d_cache3__DOT__read_w_ok));
            tracep->chgBit(oldp+728,((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))));
            tracep->chgIData(oldp+729,(vlSelf->SocTop__DOT__d_cache3__DOT__i),32);
            tracep->chgQData(oldp+730,(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data),55);
            tracep->chgBit(oldp+732,(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild));
            tracep->chgQData(oldp+733,(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data),55);
            tracep->chgBit(oldp+735,(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild));
            tracep->chgQData(oldp+736,(vlSelf->SocTop__DOT__d_cache3__DOT__u_data0__DOT__out_data),64);
            tracep->chgQData(oldp+738,(vlSelf->SocTop__DOT__d_cache3__DOT__u_data1__DOT__out_data),64);
            tracep->chgCData(oldp+740,(vlSelf->SocTop__DOT__arbitrate4__DOT__transfor_state),2);
            tracep->chgCData(oldp+741,(vlSelf->SocTop__DOT__arbitrate4__DOT__i_cache_state),2);
            tracep->chgCData(oldp+742,(vlSelf->SocTop__DOT__arbitrate4__DOT__d_cache_state),2);
            tracep->chgCData(oldp+743,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state),2);
            tracep->chgCData(oldp+744,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state),2);
            tracep->chgQData(oldp+745,(vlSelf->SocTop__DOT__axi_mnq4__DOT__write_data_reg),64);
            tracep->chgQData(oldp+747,(vlSelf->SocTop__DOT__axi_mnq4__DOT__write_addr_reg),64);
            tracep->chgCData(oldp+749,(vlSelf->SocTop__DOT__axi_mnq4__DOT__r_s_axi_ar_id),4);
            tracep->chgQData(oldp+750,(vlSelf->SocTop__DOT__time_axi6__DOT__car_mtime_l),64);
            tracep->chgQData(oldp+752,(vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h),64);
            tracep->chgCData(oldp+754,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m),2);
            tracep->chgCData(oldp+755,(vlSelf->SocTop__DOT__time_axi6__DOT__time_reg_id),4);
            tracep->chgCData(oldp+756,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r),2);
        }
        tracep->chgBit(oldp+757,(vlSelf->clk));
        tracep->chgBit(oldp+758,(vlSelf->rst));
        tracep->chgBit(oldp+759,(vlSelf->read_ena_sign_));
        tracep->chgQData(oldp+760,(vlSelf->out_addr_outp),64);
        tracep->chgQData(oldp+762,(vlSelf->read_data_sign_),64);
        tracep->chgBit(oldp+764,(vlSelf->out_write_ram_ena));
        tracep->chgQData(oldp+765,(vlSelf->out_write_ram_data),64);
        tracep->chgQData(oldp+767,(vlSelf->out_write_ram_addr),64);
        tracep->chgBit(oldp+769,((1U & (~ (IData)(vlSelf->rst)))));
        tracep->chgBit(oldp+770,(((~ (IData)(vlSelf->rst)) 
                                  & (IData)(vlSelf->SocTop__DOT__soc_axi_aw_ready))));
        tracep->chgBit(oldp+771,(((~ (IData)(vlSelf->rst)) 
                                  & (IData)(vlSelf->SocTop__DOT__soc_axi_w_ready))));
        tracep->chgCData(oldp+772,(((IData)(vlSelf->rst)
                                     ? 0U : (0xfU & 
                                             ((IData)(vlSelf->SocTop__DOT__add_axi_aw_id) 
                                              >> 8U)))),4);
        tracep->chgCData(oldp+773,(((IData)(vlSelf->rst)
                                     ? 0U : (3U & (
                                                   (0xfffffffU 
                                                    & ((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__time_reg_resp) 
                                                       >> 2U)) 
                                                   | ((IData)(vlSelf->SocTop__DOT__io_axi_b_resp) 
                                                      >> 4U))))),2);
        tracep->chgBit(oldp+774,(((~ (IData)(vlSelf->rst)) 
                                  & (2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state)))));
        __Vtemp49[0U] = (IData)(vlSelf->SocTop__DOT__io_axi_r_data);
        __Vtemp49[1U] = (IData)((vlSelf->SocTop__DOT__io_axi_r_data 
                                 >> 0x20U));
        __Vtemp49[2U] = (IData)(vlSelf->SocTop__DOT__tim_axi_r_data);
        __Vtemp49[3U] = (IData)((vlSelf->SocTop__DOT__tim_axi_r_data 
                                 >> 0x20U));
        __Vtemp49[4U] = (IData)(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                  ? vlSelf->read_data_sign_
                                  : 0ULL));
        __Vtemp49[5U] = (IData)((((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                   ? vlSelf->read_data_sign_
                                   : 0ULL) >> 0x20U));
        tracep->chgWData(oldp+775,(__Vtemp49),192);
        tracep->chgQData(oldp+781,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                     ? vlSelf->read_data_sign_
                                     : 0ULL)),64);
        tracep->chgQData(oldp+783,(((1U & ((~ (IData)(vlSelf->rst)) 
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
        tracep->chgBit(oldp+785,(((IData)(vlSelf->rst)
                                   ? 0U : (1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)))));
        tracep->chgQData(oldp+786,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
                                                ? (0xfffffffffffffffeULL 
                                                   & vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc)
                                                : vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc))),64);
        tracep->chgBit(oldp+788,(((~ (IData)(vlSelf->rst)) 
                                  & (IData)(vlSelf->SocTop__DOT__i_cache_inst_valid))));
        tracep->chgQData(oldp+789,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2)
                                                ? (
                                                   (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr) 
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
                                                : ((IData)(
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
        tracep->chgQData(oldp+791,(((IData)(vlSelf->rst)
                                     ? 0ULL : vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc)),64);
        tracep->chgCData(oldp+793,(((IData)(vlSelf->rst)
                                     ? 0U : (7U & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                   >> 0xcU)))),3);
        tracep->chgQData(oldp+794,((((~ (IData)(vlSelf->rst)) 
                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1))
                                     ? ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                          == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                         & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                         ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                         : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                        [vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1])
                                     : 0ULL)),64);
        tracep->chgQData(oldp+796,((((~ (IData)(vlSelf->rst)) 
                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2))
                                     ? ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                          == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                         & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                         ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                         : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                        [vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2])
                                     : 0ULL)),64);
        tracep->chgQData(oldp+798,(((IData)(vlSelf->rst)
                                     ? 0ULL : vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc)),64);
        tracep->chgIData(oldp+800,(((IData)(vlSelf->rst)
                                     ? 0U : vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)),32);
        tracep->chgIData(oldp+801,(((IData)(vlSelf->rst)
                                     ? 0U : vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_ex_inst)),32);
        tracep->chgQData(oldp+802,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
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
        tracep->chgQData(oldp+804,(((IData)((0x6fU 
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
        tracep->chgBit(oldp+806,(((IData)(vlSelf->rst)
                                   ? 0U : (1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1) 
                                                  & (2U 
                                                     == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                 & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1) 
                                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)))))));
        tracep->chgBit(oldp+807,(((IData)(vlSelf->rst)
                                   ? 0U : (1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2) 
                                                  & (2U 
                                                     == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                 & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2) 
                                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)))))));
        tracep->chgQData(oldp+808,(((IData)(vlSelf->rst)
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
        tracep->chgQData(oldp+810,(((IData)(vlSelf->rst)
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
        tracep->chgQData(oldp+812,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((1U 
                                                & (IData)(
                                                          (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                           >> 2U)))
                                                ? ((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)) 
                                                   << 0x20U)
                                                : (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data))))),64);
        tracep->chgCData(oldp+814,(((IData)(vlSelf->rst)
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
        tracep->chgCData(oldp+815,(((IData)(vlSelf->rst)
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
        tracep->chgCData(oldp+816,(((IData)(vlSelf->rst)
                                     ? 0U : ((1U & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                            >> 2U)))
                                              ? 0xf0U
                                              : 0xfU))),8);
        tracep->chgBit(oldp+817,(((IData)(vlSelf->SocTop__DOT__t_axi_aw_valid) 
                                  & ((~ (IData)(vlSelf->rst)) 
                                     & (IData)(vlSelf->SocTop__DOT__soc_axi_aw_ready)))));
        tracep->chgBit(oldp+818,(((IData)(vlSelf->SocTop__DOT__t_axi_w_valid) 
                                  & ((~ (IData)(vlSelf->rst)) 
                                     & (IData)(vlSelf->SocTop__DOT__soc_axi_w_ready)))));
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
    }
}
