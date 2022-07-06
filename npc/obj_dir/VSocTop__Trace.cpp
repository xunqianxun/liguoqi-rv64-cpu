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
    VlWide<4>/*127:0*/ __Vtemp49;
    VlWide<6>/*191:0*/ __Vtemp51;
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
            tracep->chgQData(oldp+12,(vlSelf->SocTop__DOT__d_cache_data_out),64);
            tracep->chgQData(oldp+14,(vlSelf->SocTop__DOT__d_cache_out_addr),64);
            tracep->chgCData(oldp+16,(vlSelf->SocTop__DOT__d_cache_out_type),4);
            tracep->chgBit(oldp+17,(vlSelf->SocTop__DOT__t_axi_ar_ready));
            tracep->chgCData(oldp+18,(vlSelf->SocTop__DOT__t_axi_r_id),4);
            tracep->chgQData(oldp+19,(vlSelf->SocTop__DOT__t_axi_r_data),64);
            tracep->chgCData(oldp+21,(vlSelf->SocTop__DOT__t_axi_r_resp),2);
            tracep->chgBit(oldp+22,(vlSelf->SocTop__DOT__t_axi_r_valid));
            tracep->chgSData(oldp+23,(vlSelf->SocTop__DOT__add_axi_aw_id),12);
            tracep->chgWData(oldp+24,(vlSelf->SocTop__DOT__add_axi_aw_addr),192);
            tracep->chgIData(oldp+30,(vlSelf->SocTop__DOT__add_axi_aw_len),24);
            tracep->chgSData(oldp+31,(vlSelf->SocTop__DOT__add_axi_aw_size),9);
            tracep->chgCData(oldp+32,(vlSelf->SocTop__DOT__add_axi_aw_burst),6);
            tracep->chgSData(oldp+33,(vlSelf->SocTop__DOT__add_axi_aw_cache),12);
            tracep->chgSData(oldp+34,(vlSelf->SocTop__DOT__add_axi_aw_prot),9);
            tracep->chgSData(oldp+35,(vlSelf->SocTop__DOT__add_axi_aw_qos),12);
            tracep->chgCData(oldp+36,(vlSelf->SocTop__DOT__add_axi_aw_valid),3);
            tracep->chgCData(oldp+37,((((IData)(vlSelf->SocTop__DOT__soc_axi_aw_ready) 
                                        << 2U) | (((IData)(vlSelf->SocTop__DOT__tim_axi_aw_ready) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->SocTop__DOT__io_axi_aw_ready)))),3);
            tracep->chgWData(oldp+38,(vlSelf->SocTop__DOT__add_axi_w_data),192);
            tracep->chgIData(oldp+44,(vlSelf->SocTop__DOT__add_axi_w_strb),24);
            tracep->chgCData(oldp+45,(vlSelf->SocTop__DOT__add_axi_w_last),3);
            tracep->chgCData(oldp+46,(vlSelf->SocTop__DOT__add_axi_w_valid),3);
            tracep->chgCData(oldp+47,((((IData)(vlSelf->SocTop__DOT__soc_axi_w_ready) 
                                        << 2U) | (((IData)(vlSelf->SocTop__DOT__tim_axi_w_ready) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->SocTop__DOT__io_axi_w_ready)))),3);
            tracep->chgCData(oldp+48,(vlSelf->SocTop__DOT__add_axi_b_ready),3);
            tracep->chgSData(oldp+49,(vlSelf->SocTop__DOT__add_axi_ar_id),12);
            tracep->chgWData(oldp+50,(vlSelf->SocTop__DOT__add_axi_ar_addr),192);
            tracep->chgIData(oldp+56,(vlSelf->SocTop__DOT__add_axi_ar_len),24);
            tracep->chgSData(oldp+57,(vlSelf->SocTop__DOT__add_axi_ar_size),9);
            tracep->chgCData(oldp+58,(vlSelf->SocTop__DOT__add_axi_ar_burst),6);
            tracep->chgSData(oldp+59,(vlSelf->SocTop__DOT__add_axi_ar_cache),12);
            tracep->chgSData(oldp+60,(vlSelf->SocTop__DOT__add_axi_ar_prot),9);
            tracep->chgSData(oldp+61,(vlSelf->SocTop__DOT__add_axi_ar_qos),12);
            tracep->chgCData(oldp+62,(vlSelf->SocTop__DOT__add_axi_ar_valid),3);
            tracep->chgCData(oldp+63,(vlSelf->SocTop__DOT__add_axi_r_ready),3);
            tracep->chgCData(oldp+64,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_id) 
                                               >> 8U))),4);
            tracep->chgQData(oldp+65,((((QData)((IData)(
                                                        vlSelf->SocTop__DOT__add_axi_aw_addr[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SocTop__DOT__add_axi_aw_addr[4U])))),64);
            tracep->chgCData(oldp+67,((0xffU & (vlSelf->SocTop__DOT__add_axi_aw_len 
                                                >> 0x10U))),8);
            tracep->chgCData(oldp+68,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_size) 
                                             >> 6U))),3);
            tracep->chgCData(oldp+69,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_burst) 
                                             >> 4U))),2);
            tracep->chgCData(oldp+70,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_cache) 
                                               >> 8U))),4);
            tracep->chgCData(oldp+71,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_prot) 
                                             >> 6U))),3);
            tracep->chgCData(oldp+72,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_qos) 
                                               >> 8U))),4);
            tracep->chgBit(oldp+73,(vlSelf->SocTop__DOT__soc_axi_aw_ready));
            tracep->chgBit(oldp+74,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                           >> 2U))));
            tracep->chgQData(oldp+75,((((QData)((IData)(
                                                        vlSelf->SocTop__DOT__add_axi_w_data[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SocTop__DOT__add_axi_w_data[4U])))),64);
            tracep->chgCData(oldp+77,((0xffU & (vlSelf->SocTop__DOT__add_axi_w_strb 
                                                >> 0x10U))),8);
            tracep->chgBit(oldp+78,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_last) 
                                           >> 2U))));
            tracep->chgBit(oldp+79,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                           >> 2U))));
            tracep->chgBit(oldp+80,(vlSelf->SocTop__DOT__soc_axi_w_ready));
            tracep->chgBit(oldp+81,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                           >> 2U))));
            tracep->chgCData(oldp+82,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                               >> 8U))),4);
            tracep->chgQData(oldp+83,((((QData)((IData)(
                                                        vlSelf->SocTop__DOT__add_axi_ar_addr[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SocTop__DOT__add_axi_ar_addr[4U])))),64);
            tracep->chgCData(oldp+85,((0xffU & (vlSelf->SocTop__DOT__add_axi_ar_len 
                                                >> 0x10U))),8);
            tracep->chgCData(oldp+86,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_size) 
                                             >> 6U))),3);
            tracep->chgCData(oldp+87,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_burst) 
                                             >> 4U))),2);
            tracep->chgCData(oldp+88,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_cache) 
                                               >> 8U))),4);
            tracep->chgCData(oldp+89,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_prot) 
                                             >> 6U))),3);
            tracep->chgCData(oldp+90,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_qos) 
                                               >> 8U))),4);
            tracep->chgBit(oldp+91,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                                           >> 2U))));
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
            tracep->chgBit(oldp+110,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                            >> 1U))));
            tracep->chgCData(oldp+111,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                                >> 4U))),4);
            tracep->chgQData(oldp+112,((((QData)((IData)(
                                                         vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))),64);
            tracep->chgCData(oldp+114,((0xffU & (vlSelf->SocTop__DOT__add_axi_ar_len 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+115,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_size) 
                                              >> 3U))),3);
            tracep->chgCData(oldp+116,((3U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_burst) 
                                              >> 2U))),2);
            tracep->chgCData(oldp+117,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_cache) 
                                                >> 4U))),4);
            tracep->chgCData(oldp+118,((7U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_prot) 
                                              >> 3U))),3);
            tracep->chgCData(oldp+119,((0xfU & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_qos) 
                                                >> 4U))),4);
            tracep->chgBit(oldp+120,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_valid) 
                                            >> 1U))));
            tracep->chgBit(oldp+121,(vlSelf->SocTop__DOT__tim_axi_ar_ready));
            tracep->chgQData(oldp+122,(vlSelf->SocTop__DOT__tim_axi_r_data),64);
            tracep->chgBit(oldp+124,((1U & ((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                            >> 1U))));
            tracep->chgCData(oldp+125,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_id))),4);
            tracep->chgQData(oldp+126,((((QData)((IData)(
                                                         vlSelf->SocTop__DOT__add_axi_aw_addr[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SocTop__DOT__add_axi_aw_addr[0U])))),64);
            tracep->chgCData(oldp+128,((0xffU & vlSelf->SocTop__DOT__add_axi_aw_len)),8);
            tracep->chgCData(oldp+129,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_size))),3);
            tracep->chgCData(oldp+130,((3U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_burst))),2);
            tracep->chgCData(oldp+131,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_cache))),4);
            tracep->chgCData(oldp+132,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_prot))),3);
            tracep->chgCData(oldp+133,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_aw_qos))),4);
            tracep->chgBit(oldp+134,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_valid))));
            tracep->chgQData(oldp+135,((((QData)((IData)(
                                                         vlSelf->SocTop__DOT__add_axi_w_data[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SocTop__DOT__add_axi_w_data[0U])))),64);
            tracep->chgCData(oldp+137,((0xffU & vlSelf->SocTop__DOT__add_axi_w_strb)),8);
            tracep->chgBit(oldp+138,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_w_last))));
            tracep->chgBit(oldp+139,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_w_valid))));
            tracep->chgBit(oldp+140,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_b_ready))));
            tracep->chgCData(oldp+141,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_id))),4);
            tracep->chgQData(oldp+142,((((QData)((IData)(
                                                         vlSelf->SocTop__DOT__add_axi_ar_addr[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SocTop__DOT__add_axi_ar_addr[0U])))),64);
            tracep->chgCData(oldp+144,((0xffU & vlSelf->SocTop__DOT__add_axi_ar_len)),8);
            tracep->chgCData(oldp+145,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_size))),3);
            tracep->chgCData(oldp+146,((3U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_burst))),2);
            tracep->chgCData(oldp+147,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_cache))),4);
            tracep->chgCData(oldp+148,((7U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_prot))),3);
            tracep->chgCData(oldp+149,((0xfU & (IData)(vlSelf->SocTop__DOT__add_axi_ar_qos))),4);
            tracep->chgBit(oldp+150,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_ar_valid))));
            tracep->chgBit(oldp+151,((1U & (IData)(vlSelf->SocTop__DOT__add_axi_r_ready))));
            tracep->chgBit(oldp+152,(vlSelf->SocTop__DOT__axi_mnq4__DOT__ar_shankhand));
            tracep->chgQData(oldp+153,(((IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__ar_shankhand)
                                         ? (((QData)((IData)(
                                                             vlSelf->SocTop__DOT__add_axi_ar_addr[5U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->SocTop__DOT__add_axi_ar_addr[4U])))
                                         : 0ULL)),64);
            tracep->chgCData(oldp+155,((0x1fU & (vlSelf->SocTop__DOT__i_cache_inst_data 
                                                 >> 0xfU))),5);
            tracep->chgQData(oldp+156,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_data),64);
            tracep->chgCData(oldp+158,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1),5);
            tracep->chgBit(oldp+159,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1));
            tracep->chgCData(oldp+160,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2),5);
            tracep->chgBit(oldp+161,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2));
            tracep->chgBit(oldp+162,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ctrl_req));
            tracep->chgCData(oldp+163,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type),8);
            tracep->chgCData(oldp+164,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_opcode),8);
            tracep->chgQData(oldp+165,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op),64);
            tracep->chgBit(oldp+167,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_ena));
            tracep->chgBit(oldp+168,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_pip_jalrena));
            tracep->chgBit(oldp+169,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_if_flush));
            tracep->chgCData(oldp+170,(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl),5);
            tracep->chgQData(oldp+171,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_id_data),64);
            tracep->chgBit(oldp+173,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_ctrl_req));
            tracep->chgQData(oldp+174,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_pc),64);
            tracep->chgIData(oldp+176,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_mem_wb_inst),32);
            tracep->chgIData(oldp+177,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm),20);
            tracep->chgSData(oldp+178,((vlSelf->SocTop__DOT__i_cache_inst_data 
                                        >> 0x14U)),12);
            tracep->chgSData(oldp+179,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm),12);
            tracep->chgCData(oldp+180,((0x7fU & vlSelf->SocTop__DOT__i_cache_inst_data)),7);
            tracep->chgBit(oldp+181,((IData)((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->SocTop__DOT__i_cache_inst_data)))));
            tracep->chgBit(oldp+182,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr));
            tracep->chgBit(oldp+183,((IData)((0x63U 
                                              == (0x7fU 
                                                  & vlSelf->SocTop__DOT__i_cache_inst_data)))));
            tracep->chgQData(oldp+184,(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc),64);
            tracep->chgCData(oldp+186,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__rs1),5);
            tracep->chgBit(oldp+187,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_lui));
            tracep->chgBit(oldp+188,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_auipc));
            tracep->chgBit(oldp+189,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jal));
            tracep->chgBit(oldp+190,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr));
            tracep->chgBit(oldp+191,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jump));
            tracep->chgBit(oldp+192,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srai));
            tracep->chgBit(oldp+193,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addiw));
            tracep->chgBit(oldp+194,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slliw));
            tracep->chgBit(oldp+195,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srliw));
            tracep->chgBit(oldp+196,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraiw));
            tracep->chgBit(oldp+197,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_add));
            tracep->chgBit(oldp+198,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sub));
            tracep->chgBit(oldp+199,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sll));
            tracep->chgBit(oldp+200,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_slt));
            tracep->chgBit(oldp+201,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sltu));
            tracep->chgBit(oldp+202,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_xor));
            tracep->chgBit(oldp+203,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srl));
            tracep->chgBit(oldp+204,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sra));
            tracep->chgBit(oldp+205,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_or));
            tracep->chgBit(oldp+206,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_and));
            tracep->chgBit(oldp+207,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_div));
            tracep->chgBit(oldp+208,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divu));
            tracep->chgBit(oldp+209,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mul));
            tracep->chgBit(oldp+210,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulh));
            tracep->chgBit(oldp+211,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulhsu));
            tracep->chgBit(oldp+212,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulhu));
            tracep->chgBit(oldp+213,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_rem));
            tracep->chgBit(oldp+214,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remu));
            tracep->chgBit(oldp+215,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_addw));
            tracep->chgBit(oldp+216,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_subw));
            tracep->chgBit(oldp+217,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sllw));
            tracep->chgBit(oldp+218,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_srlw));
            tracep->chgBit(oldp+219,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_sraw));
            tracep->chgBit(oldp+220,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divuw));
            tracep->chgBit(oldp+221,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_divw));
            tracep->chgBit(oldp+222,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_mulw));
            tracep->chgBit(oldp+223,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remuw));
            tracep->chgBit(oldp+224,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_remw));
            tracep->chgBit(oldp+225,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw));
            tracep->chgBit(oldp+226,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs));
            tracep->chgBit(oldp+227,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc));
            tracep->chgBit(oldp+228,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrwi));
            tracep->chgBit(oldp+229,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw) 
                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs)) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc))));
            tracep->chgBit(oldp+230,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak));
            tracep->chgBit(oldp+231,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1));
            tracep->chgBit(oldp+232,(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1));
            tracep->chgBit(oldp+233,((1U & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__stall_ctrl) 
                                            >> 3U))));
            tracep->chgQData(oldp+234,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__exe_res),64);
            tracep->chgCData(oldp+236,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_byte),8);
            tracep->chgSData(oldp+237,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_half_byte),16);
            tracep->chgIData(oldp+238,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__data_word),32);
            tracep->chgQData(oldp+239,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_data),64);
            tracep->chgCData(oldp+241,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem7__DOT__store_mask),8);
            tracep->chgBit(oldp+242,(vlSelf->SocTop__DOT__i_cache2__DOT__icache_if_shankhand));
            tracep->chgCData(oldp+243,(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst_nxt),6);
            tracep->chgBit(oldp+244,(vlSelf->SocTop__DOT__i_cache2__DOT__inst_hit_ok));
            tracep->chgQData(oldp+245,((vlSelf->SocTop__DOT__rvcpu_data_addr 
                                        >> 9U)),55);
            tracep->chgCData(oldp+247,((0x3fU & (IData)(
                                                        (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                         >> 3U)))),6);
            tracep->chgCData(oldp+248,(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread_nxt),6);
            tracep->chgBit(oldp+249,(vlSelf->SocTop__DOT__d_cache3__DOT__mem_hit_ok));
            tracep->chgQData(oldp+250,(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_addr),64);
            tracep->chgQData(oldp+252,(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_data),64);
            tracep->chgCData(oldp+254,(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_type),4);
            tracep->chgBit(oldp+255,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_i_ok));
            tracep->chgQData(oldp+256,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_addr),64);
            tracep->chgCData(oldp+258,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_data_ena1),8);
            tracep->chgBit(oldp+259,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_tag_ena1));
            tracep->chgCData(oldp+260,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_data_ena2),8);
            tracep->chgBit(oldp+261,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_tag_ena2));
            tracep->chgBit(oldp+262,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_resp));
            tracep->chgCData(oldp+263,(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite_nxt),6);
            tracep->chgCData(oldp+264,(vlSelf->SocTop__DOT__d_cache3__DOT__hitw_data_strb1),8);
            tracep->chgCData(oldp+265,(vlSelf->SocTop__DOT__d_cache3__DOT__hitw_data_strb2),8);
            tracep->chgQData(oldp+266,(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_addr),64);
            tracep->chgQData(oldp+268,(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_data),64);
            tracep->chgCData(oldp+270,(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_type),4);
            tracep->chgBit(oldp+271,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_i_ok));
            tracep->chgQData(oldp+272,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_addr),64);
            tracep->chgCData(oldp+274,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_data_ena1),8);
            tracep->chgBit(oldp+275,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_tag_ena1));
            tracep->chgCData(oldp+276,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_data_ena2),8);
            tracep->chgBit(oldp+277,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_tag_ena2));
            tracep->chgBit(oldp+278,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_resp));
            tracep->chgBit(oldp+279,(vlSelf->SocTop__DOT__d_cache3__DOT__tag_ena1));
            tracep->chgBit(oldp+280,(vlSelf->SocTop__DOT__d_cache3__DOT__tag_ena2));
            tracep->chgCData(oldp+281,(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena1),8);
            tracep->chgQData(oldp+282,(vlSelf->SocTop__DOT__d_cache3__DOT__in_rem_data1),64);
            tracep->chgCData(oldp+284,(vlSelf->SocTop__DOT__d_cache3__DOT__data_ena2),8);
            tracep->chgQData(oldp+285,((0x80000000000000ULL 
                                        | (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                           >> 9U))),56);
            tracep->chgBit(oldp+287,(vlSelf->SocTop__DOT__arbitrate4__DOT__read_dcache_shankhand));
            tracep->chgBit(oldp+288,(vlSelf->SocTop__DOT__arbitrate4__DOT__write_dcache_shankhand));
            tracep->chgBit(oldp+289,(vlSelf->SocTop__DOT__arbitrate4__DOT__read_icache_shankhand));
            tracep->chgCData(oldp+290,(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state_nxt),3);
            tracep->chgBit(oldp+291,(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_success));
            tracep->chgBit(oldp+292,(vlSelf->SocTop__DOT__arbitrate4__DOT__dwrite_success));
            tracep->chgBit(oldp+293,(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_success));
            tracep->chgBit(oldp+294,(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_arshankhand));
            tracep->chgBit(oldp+295,(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_arshankhand));
            tracep->chgBit(oldp+296,(vlSelf->SocTop__DOT__arbitrate4__DOT__dwrite_awshankhand));
            tracep->chgBit(oldp+297,(vlSelf->SocTop__DOT__arbitrate4__DOT__dwrite_wshankhand));
            tracep->chgBit(oldp+298,((((IData)(vlSelf->SocTop__DOT__add_axi_aw_valid) 
                                       >> 2U) & (IData)(vlSelf->SocTop__DOT__soc_axi_aw_ready))));
            tracep->chgBit(oldp+299,((((IData)(vlSelf->SocTop__DOT__add_axi_w_valid) 
                                       >> 2U) & (IData)(vlSelf->SocTop__DOT__soc_axi_w_ready))));
            tracep->chgCData(oldp+300,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state_nxt),2);
            tracep->chgBit(oldp+301,(vlSelf->SocTop__DOT__axi_mnq4__DOT__ar_shankhand));
            tracep->chgCData(oldp+302,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state_nxt),2);
            tracep->chgBit(oldp+303,((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                       & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__ar_shakehand)) 
                                      & (0x2004000ULL 
                                         == (((QData)((IData)(
                                                              vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))))));
            tracep->chgBit(oldp+304,((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                       & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__ar_shakehand)) 
                                      & (0x200bff8ULL 
                                         == (((QData)((IData)(
                                                              vlSelf->SocTop__DOT__add_axi_ar_addr[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->SocTop__DOT__add_axi_ar_addr[2U])))))));
            tracep->chgBit(oldp+305,(((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                        & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__w_shakehand)) 
                                       & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__aw_shakehand)) 
                                      & (0x2004000ULL 
                                         == (((QData)((IData)(
                                                              vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))))));
            tracep->chgBit(oldp+306,(((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
                                        & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__w_shakehand)) 
                                       & (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__aw_shakehand)) 
                                      & (0x200bff8ULL 
                                         == (((QData)((IData)(
                                                              vlSelf->SocTop__DOT__add_axi_aw_addr[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->SocTop__DOT__add_axi_aw_addr[2U])))))));
            tracep->chgQData(oldp+307,(vlSelf->SocTop__DOT__time_axi6__DOT__wmask),64);
            tracep->chgBit(oldp+309,(vlSelf->SocTop__DOT__time_axi6__DOT__aw_shakehand));
            tracep->chgBit(oldp+310,(vlSelf->SocTop__DOT__time_axi6__DOT__w_shakehand));
            tracep->chgBit(oldp+311,(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right));
            tracep->chgCData(oldp+312,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m_nxt),2);
            tracep->chgBit(oldp+313,((IData)(((((((0U 
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
            tracep->chgBit(oldp+314,(vlSelf->SocTop__DOT__time_axi6__DOT__ar_shakehand));
            tracep->chgCData(oldp+315,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r_nxt),2);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgBit(oldp+316,(((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
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
            tracep->chgQData(oldp+317,(((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                                         ? vlSelf->SocTop__DOT__d_cache3__DOT__dirty_out_data
                                         : ((8U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))
                                             ? vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_out_data
                                             : 0ULL))),64);
            tracep->chgBit(oldp+319,(((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))
                                       ? (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_resp)
                                       : ((0x10U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                                          & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_resp)))));
            tracep->chgSData(oldp+320,(((0xf00U & (IData)(vlSelf->SocTop__DOT__add_axi_aw_id)) 
                                        | ((((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m))
                                              ? (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__time_reg_id)
                                              : 0U) 
                                            << 4U) 
                                           | (IData)(vlSelf->SocTop__DOT__io_axi_b_id)))),12);
            tracep->chgCData(oldp+321,((((IData)(vlSelf->SocTop__DOT__soc_axi_ar_ready) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->SocTop__DOT__tim_axi_ar_ready) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->SocTop__DOT__io_axi_ar_ready)))),3);
            tracep->chgSData(oldp+322,(((((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                           ? (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__r_s_axi_ar_id)
                                           : 0U) << 8U) 
                                        | ((((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r))
                                              ? (0xfU 
                                                 & ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                                    >> 4U))
                                              : 0U) 
                                            << 4U) 
                                           | (IData)(vlSelf->SocTop__DOT__io_axi_r_id)))),12);
            tracep->chgCData(oldp+323,(((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r))
                                         ? (0xfU & 
                                            ((IData)(vlSelf->SocTop__DOT__add_axi_ar_id) 
                                             >> 4U))
                                         : 0U)),4);
            tracep->chgCData(oldp+324,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_rd_ena)
                                         ? ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak)
                                             ? 0xbU
                                             : (0x1fU 
                                                & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                   >> 7U)))
                                         : 0U)),5);
            tracep->chgSData(oldp+325,((0xfffU & ((2U 
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
            tracep->chgQData(oldp+326,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__inst_jalr)
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
            tracep->chgBit(oldp+328,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+329,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x2000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+330,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x3000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+331,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x4000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+332,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x6000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+333,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+334,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x1000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+335,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x5000U 
                                                       == 
                                                       (0x40007000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+336,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+337,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x1000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+338,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x4000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+339,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x5000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+340,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x6000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+341,((1U & (IData)(
                                                   ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+342,((1U & (IData)(
                                                   ((0x80U 
                                                     == 
                                                     (0x80U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x6000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+343,((1U & (IData)(
                                                   ((0x80U 
                                                     == 
                                                     (0x80U 
                                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))))));
            tracep->chgBit(oldp+344,(((IData)(((0x80U 
                                                == 
                                                (0x80U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                               & (0U 
                                                  == 
                                                  (0x7000U 
                                                   & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                      & (0U == (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+345,(((IData)(((0x80U 
                                                == 
                                                (0x80U 
                                                 & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_type))) 
                                               & (0U 
                                                  == 
                                                  (0x7000U 
                                                   & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)))) 
                                      & (0x18U == (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+346,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr) 
                                       == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena))));
            tracep->chgBit(oldp+347,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr) 
                                       == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena))));
            tracep->chgBit(oldp+348,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                       == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))));
            tracep->chgQData(oldp+349,(((((- (QData)((IData)(
                                                             (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                              >> 0x1fU)))) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                            >> 0x14U)))) 
                                        + vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_op)),64);
            tracep->chgBit(oldp+351,((1U & (((~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__ex_op1)) 
                                             & (~ (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id3__DOT__mem_op1))) 
                                            & (~ (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                                   == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                                  & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena)))))));
            tracep->chgQData(oldp+352,(((2U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type))
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
            tracep->chgBit(oldp+354,(((IData)(vlSelf->SocTop__DOT__rvcpu_re) 
                                      & (1U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)))));
            tracep->chgBit(oldp+355,(((IData)(vlSelf->SocTop__DOT__rvcpu_we) 
                                      & (1U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)))));
            tracep->chgBit(oldp+356,(((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread)) 
                                      & (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                                           == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                               >> 9U)) 
                                          & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild)) 
                                         | ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                                             == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                 >> 9U)) 
                                            & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))))));
            tracep->chgBit(oldp+357,(((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite)) 
                                      & (((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data 
                                           == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                               >> 9U)) 
                                          & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild)) 
                                         | ((vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data 
                                             == (vlSelf->SocTop__DOT__rvcpu_data_addr 
                                                 >> 9U)) 
                                            & (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild))))));
            tracep->chgBit(oldp+358,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state)) 
                                      & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                         >> 2U))));
            tracep->chgBit(oldp+359,((((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                       >> 2U) & (2U 
                                                 == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)))));
            tracep->chgQData(oldp+360,((((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
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
            tracep->chgQData(oldp+362,((((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
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
            tracep->chgBit(oldp+364,(((IData)(vlSelf->SocTop__DOT__tim_axi_b_valid) 
                                      & ((IData)(vlSelf->SocTop__DOT__add_axi_b_ready) 
                                         >> 1U))));
            tracep->chgBit(oldp+365,(((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r)) 
                                      & ((IData)(vlSelf->SocTop__DOT__add_axi_r_ready) 
                                         >> 1U))));
            tracep->chgQData(oldp+366,(((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__mode_right) 
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
            tracep->chgQData(oldp+368,(vlSelf->SocTop__DOT__rvcpu_inst_addr),64);
            tracep->chgBit(oldp+370,(vlSelf->SocTop__DOT__i_cache_read_ena));
            tracep->chgQData(oldp+371,(vlSelf->SocTop__DOT__i_cache_addr),64);
            tracep->chgBit(oldp+373,(vlSelf->SocTop__DOT__i_caceh_resp));
            tracep->chgQData(oldp+374,(vlSelf->SocTop__DOT__arbitrate_d_data),64);
            tracep->chgBit(oldp+376,(vlSelf->SocTop__DOT__arbitrate_d_ok));
            tracep->chgQData(oldp+377,(vlSelf->SocTop__DOT__arbitrate_i_data),64);
            tracep->chgBit(oldp+379,(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_cache_valid));
            tracep->chgBit(oldp+380,((vlSelf->SocTop__DOT__time_axi6__DOT__car_mtime_l 
                                      > vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h)));
            tracep->chgCData(oldp+381,(vlSelf->SocTop__DOT__arbitrate4__DOT__dwrite_aw_id),4);
            tracep->chgQData(oldp+382,(vlSelf->SocTop__DOT__arbitrate4__DOT__dwrite_aw_addr),64);
            tracep->chgCData(oldp+384,(vlSelf->SocTop__DOT__arbitrate4__DOT__dwrite_aw_len),8);
            tracep->chgCData(oldp+385,(vlSelf->SocTop__DOT__arbitrate4__DOT__dwrite_aw_size),3);
            tracep->chgCData(oldp+386,(vlSelf->SocTop__DOT__arbitrate4__DOT__dwrite_aw_burst),2);
            tracep->chgCData(oldp+387,(vlSelf->SocTop__DOT__arbitrate4__DOT__dwrite_aw_cache),4);
            tracep->chgCData(oldp+388,(vlSelf->SocTop__DOT__arbitrate4__DOT__dwrite_aw_port),3);
            tracep->chgCData(oldp+389,(vlSelf->SocTop__DOT__arbitrate4__DOT__dwrite_aw_qos),4);
            tracep->chgBit(oldp+390,(vlSelf->SocTop__DOT__arbitrate4__DOT__dwrite_aw_valid));
            tracep->chgQData(oldp+391,(vlSelf->SocTop__DOT__arbitrate4__DOT__dwrite_w_data),64);
            tracep->chgCData(oldp+393,(vlSelf->SocTop__DOT__arbitrate4__DOT__dwrite_w_strb),8);
            tracep->chgBit(oldp+394,(vlSelf->SocTop__DOT__arbitrate4__DOT__dwrite_w_last));
            tracep->chgBit(oldp+395,(vlSelf->SocTop__DOT__arbitrate4__DOT__dwrite_w_valid));
            tracep->chgCData(oldp+396,(((4U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state))
                                         ? (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_ar_id)
                                         : ((5U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state))
                                             ? (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_ar_id)
                                             : 0U))),4);
            tracep->chgQData(oldp+397,(((4U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state))
                                         ? vlSelf->SocTop__DOT__arbitrate4__DOT__iread_ar_addr
                                         : ((5U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state))
                                             ? vlSelf->SocTop__DOT__arbitrate4__DOT__dread_ar_addr
                                             : 0ULL))),64);
            tracep->chgCData(oldp+399,(((4U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state))
                                         ? (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_ar_len)
                                         : ((5U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state))
                                             ? (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_ar_len)
                                             : 0U))),8);
            tracep->chgCData(oldp+400,(((4U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state))
                                         ? (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_ar_size)
                                         : ((5U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state))
                                             ? (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_ar_size)
                                             : 3U))),3);
            tracep->chgCData(oldp+401,(((4U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state))
                                         ? (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_ar_burst)
                                         : ((5U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state))
                                             ? (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_ar_burst)
                                             : 1U))),2);
            tracep->chgCData(oldp+402,(((4U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state))
                                         ? (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_ar_cache)
                                         : ((5U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state))
                                             ? (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_ar_cache)
                                             : 2U))),4);
            tracep->chgCData(oldp+403,(((4U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state))
                                         ? (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_ar_prot)
                                         : ((5U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state))
                                             ? (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_ar_prot)
                                             : 0U))),3);
            tracep->chgCData(oldp+404,(((4U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state))
                                         ? (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_ar_qos)
                                         : ((5U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state))
                                             ? (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_ar_qos)
                                             : 0U))),4);
            tracep->chgBit(oldp+405,(((4U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state))
                                       ? (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_ar_valid)
                                       : ((5U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state)) 
                                          & (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_ar_valid)))));
            tracep->chgBit(oldp+406,(((4U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state)) 
                                      | (5U == (IData)(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state)))));
            tracep->chgCData(oldp+407,((((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__time_reg_resp) 
                                         << 2U) | (IData)(vlSelf->SocTop__DOT__io_axi_b_resp))),6);
            tracep->chgCData(oldp+408,((((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state)) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->SocTop__DOT__tim_axi_b_valid) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->SocTop__DOT__io_axi_b_valid)))),3);
            tracep->chgCData(oldp+409,((((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->SocTop__DOT__tim_axi_r_last) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->SocTop__DOT__io_axi_r_last)))),3);
            tracep->chgCData(oldp+410,((((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state)) 
                                         << 2U) | (
                                                   ((2U 
                                                     == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r)) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->SocTop__DOT__io_axi_r_valid)))),3);
            tracep->chgBit(oldp+411,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))));
            tracep->chgBit(oldp+412,(vlSelf->SocTop__DOT__soc_axi_ar_ready));
            tracep->chgCData(oldp+413,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                         ? (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__r_s_axi_ar_id)
                                         : 0U)),4);
            tracep->chgBit(oldp+414,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))));
            tracep->chgBit(oldp+415,((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))));
            tracep->chgCData(oldp+416,(((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m))
                                         ? (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__time_reg_id)
                                         : 0U)),4);
            tracep->chgCData(oldp+417,(vlSelf->SocTop__DOT__time_axi6__DOT__time_reg_resp),2);
            tracep->chgBit(oldp+418,(vlSelf->SocTop__DOT__tim_axi_b_valid));
            tracep->chgBit(oldp+419,(vlSelf->SocTop__DOT__tim_axi_r_last));
            tracep->chgBit(oldp+420,((2U == (IData)(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r))));
            tracep->chgQData(oldp+421,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))
                                         ? vlSelf->SocTop__DOT__axi_mnq4__DOT__write_addr_reg
                                         : 0ULL)),64);
            tracep->chgQData(oldp+423,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state))
                                         ? vlSelf->SocTop__DOT__axi_mnq4__DOT__write_data_reg
                                         : 0ULL)),64);
            tracep->chgQData(oldp+425,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc),64);
            tracep->chgIData(oldp+427,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst),32);
            tracep->chgBit(oldp+428,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_pc_branchena));
            tracep->chgCData(oldp+429,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr),5);
            tracep->chgBit(oldp+430,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_ena));
            tracep->chgCData(oldp+431,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type),8);
            tracep->chgCData(oldp+432,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_sel),3);
            tracep->chgQData(oldp+433,(((IData)((0U 
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
            tracep->chgQData(oldp+435,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena) 
                                         | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena))
                                         ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data
                                         : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch)
                                             ? (4ULL 
                                                + vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc)
                                             : 0ULL))),64);
            tracep->chgBit(oldp+437,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_div_req));
            tracep->chgCData(oldp+438,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_addr),5);
            tracep->chgBit(oldp+439,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_ena));
            tracep->chgCData(oldp+440,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr),5);
            tracep->chgBit(oldp+441,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena));
            tracep->chgQData(oldp+442,(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data),64);
            tracep->chgQData(oldp+444,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc),64);
            tracep->chgCData(oldp+446,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_type),8);
            tracep->chgCData(oldp+447,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_opcode),8);
            tracep->chgQData(oldp+448,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1),64);
            tracep->chgQData(oldp+450,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2),64);
            tracep->chgBit(oldp+452,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdena));
            tracep->chgSData(oldp+453,(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_offset),12);
            tracep->chgCData(oldp+454,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_type),8);
            tracep->chgQData(oldp+455,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data),64);
            tracep->chgCData(oldp+457,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_sel),3);
            tracep->chgQData(oldp+458,(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr),64);
            tracep->chgQData(oldp+460,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_pc),64);
            tracep->chgIData(oldp+462,(vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_ex_inst),32);
            tracep->chgIData(oldp+463,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_mem_mem_inst),32);
            tracep->chgBit(oldp+464,(vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__ex_pc_change));
            tracep->chgBit(oldp+465,(vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__id_pc_change));
            tracep->chgQData(oldp+466,(vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__pc_ex),64);
            tracep->chgQData(oldp+468,(vlSelf->SocTop__DOT__rvcpu1__DOT__pc1__DOT__pc_id),64);
            tracep->chgBit(oldp+470,(vlSelf->SocTop__DOT__rvcpu1__DOT__if_id2__DOT__fl_bub_temp));
            tracep->chgCData(oldp+471,((0x7fU & vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)),7);
            tracep->chgCData(oldp+472,((0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+473,((7U & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                              >> 0xcU))),3);
            tracep->chgSData(oldp+474,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                        >> 0x14U)),12);
            tracep->chgCData(oldp+475,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+476,((0x1fU & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                 >> 0x14U))),5);
            tracep->chgIData(oldp+477,((vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                        >> 0xcU)),20);
            tracep->chgSData(oldp+478,(((0xfe0U & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                            >> 7U)))),12);
            tracep->chgQData(oldp+479,((1ULL + (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))),64);
            tracep->chgQData(oldp+481,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sub_op2),64);
            tracep->chgQData(oldp+483,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2),64);
            tracep->chgQData(oldp+485,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_addw_op2),64);
            tracep->chgBit(oldp+487,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_ls_op2));
            tracep->chgQData(oldp+488,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__shift_res),64);
            tracep->chgIData(oldp+490,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sllw_op2),32);
            tracep->chgQData(oldp+491,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sllw_res),64);
            tracep->chgIData(oldp+493,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_srlw_op2),32);
            tracep->chgQData(oldp+494,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__srlw_res),64);
            tracep->chgIData(oldp+496,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_sraw_op2),32);
            tracep->chgQData(oldp+497,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__sraw_res),64);
            tracep->chgIData(oldp+499,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2),32);
            tracep->chgQData(oldp+500,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2)))),64);
            tracep->chgQData(oldp+502,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__upper_imm),64);
            tracep->chgQData(oldp+504,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_data),64);
            tracep->chgBit(oldp+506,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_finish_sign));
            tracep->chgBit(oldp+507,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__mul_ready));
            tracep->chgQData(oldp+508,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divrem_data),64);
            tracep->chgBit(oldp+510,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__finish_sign));
            tracep->chgBit(oldp+511,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__dr_ready));
            tracep->chgQData(oldp+512,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_divdata),64);
            tracep->chgQData(oldp+514,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op2_divdata),64);
            tracep->chgBit(oldp+516,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch));
            tracep->chgBit(oldp+517,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena));
            tracep->chgSData(oldp+518,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx),12);
            tracep->chgQData(oldp+519,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data),64);
            tracep->chgBit(oldp+521,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_ena));
            tracep->chgBit(oldp+522,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena));
            tracep->chgBit(oldp+523,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena));
            tracep->chgBit(oldp+524,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en));
            tracep->chgBit(oldp+525,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en));
            tracep->chgQData(oldp+526,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data),64);
            tracep->chgQData(oldp+528,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value),64);
            tracep->chgQData(oldp+530,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
                                        | vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1)),64);
            tracep->chgQData(oldp+532,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
                                        & (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1))),64);
            tracep->chgBit(oldp+534,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__mult_valid));
            tracep->chgBit(oldp+535,((1U & (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                    >> 0x3fU)))));
            tracep->chgBit(oldp+536,((1U & (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2 
                                                    >> 0x3fU)))));
            tracep->chgQData(oldp+537,(((1U & (IData)(
                                                      (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1 
                                                       >> 0x3fU)))
                                         ? (1ULL + 
                                            (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1))
                                         : vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op1)),64);
            tracep->chgQData(oldp+539,(((1U & (IData)(
                                                      (vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2 
                                                       >> 0x3fU)))
                                         ? (1ULL + 
                                            (~ vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2))
                                         : vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_op2)),64);
            tracep->chgWData(oldp+541,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand),128);
            tracep->chgQData(oldp+545,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multipler),64);
            if ((1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multipler))) {
                __Vtemp49[0U] = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[0U];
                __Vtemp49[1U] = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[1U];
                __Vtemp49[2U] = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[2U];
                __Vtemp49[3U] = vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multiplcand[3U];
            } else {
                __Vtemp49[0U] = 0U;
                __Vtemp49[1U] = 0U;
                __Vtemp49[2U] = 0U;
                __Vtemp49[3U] = 0U;
            }
            tracep->chgWData(oldp+547,(__Vtemp49),128);
            tracep->chgWData(oldp+551,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp),128);
            tracep->chgBit(oldp+555,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_signbit));
            tracep->chgBit(oldp+556,((1U & (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_divdata 
                                                    >> 0x3fU)))));
            tracep->chgBit(oldp+557,((1U & (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op2_divdata 
                                                    >> 0x3fU)))));
            tracep->chgQData(oldp+558,(((1U & (IData)(
                                                      (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_divdata 
                                                       >> 0x3fU)))
                                         ? (1ULL + 
                                            (~ vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_divdata))
                                         : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op1_divdata)),64);
            tracep->chgQData(oldp+560,(((1U & (IData)(
                                                      (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op2_divdata 
                                                       >> 0x3fU)))
                                         ? (1ULL + 
                                            (~ vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op2_divdata))
                                         : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__op2_divdata)),64);
            tracep->chgBit(oldp+562,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__div_rem_signbit));
            tracep->chgCData(oldp+563,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__counter),8);
            tracep->chgWData(oldp+564,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a),128);
            tracep->chgWData(oldp+568,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_b),128);
            tracep->chgQData(oldp+572,((1ULL + (~ (
                                                   ((QData)((IData)(
                                                                    vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[0U])))))),64);
            tracep->chgBit(oldp+574,((0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+575,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en) 
                                      & (0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)))));
            tracep->chgBit(oldp+576,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en) 
                                      & (0xb00U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)))));
            tracep->chgQData(oldp+577,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcycle),64);
            tracep->chgBit(oldp+579,((0x300U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+580,(((0x300U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
            tracep->chgBit(oldp+581,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus));
            tracep->chgBit(oldp+582,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_ena));
            tracep->chgBit(oldp+583,((1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                             | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                             ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)
                                             : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena) 
                                                | ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                    ? (IData)(
                                                              (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                               >> 7U))
                                                    : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)))))));
            tracep->chgBit(oldp+584,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie));
            tracep->chgBit(oldp+585,((1U & ((~ ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                                | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))) 
                                            & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)
                                                ? (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)
                                                : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                                                    ? (IData)(
                                                              (vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                                               >> 3U))
                                                    : (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)))))));
            tracep->chgBit(oldp+586,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie));
            tracep->chgCData(oldp+587,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
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
            tracep->chgCData(oldp+588,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp),2);
            tracep->chgCData(oldp+589,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs),2);
            tracep->chgBit(oldp+590,((3U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs))));
            tracep->chgQData(oldp+591,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus),64);
            tracep->chgBit(oldp+593,((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+594,(((((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en)) 
                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
            tracep->chgBit(oldp+595,(((0x305U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
            tracep->chgQData(oldp+596,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base),62);
            tracep->chgQData(oldp+598,((vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base 
                                        << 2U)),64);
            tracep->chgBit(oldp+600,((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+601,((((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                       & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en)) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena))));
            tracep->chgBit(oldp+602,(((((0x341U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                        & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en)) 
                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
            tracep->chgQData(oldp+603,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mepc),64);
            tracep->chgBit(oldp+605,((0x342U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+606,(((0x342U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
            tracep->chgBit(oldp+607,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause));
            tracep->chgBit(oldp+608,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause) 
                                       | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                      | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))));
            tracep->chgQData(oldp+609,((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                                         | (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))
                                         ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value
                                         : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause)
                                             ? vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data
                                             : vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause))),64);
            tracep->chgQData(oldp+611,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause),64);
            tracep->chgBit(oldp+613,((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+614,(((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
            tracep->chgBit(oldp+615,(((0x304U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
            tracep->chgBit(oldp+616,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie));
            tracep->chgQData(oldp+617,(((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie)) 
                                        << 7U)),64);
            tracep->chgBit(oldp+619,((0x344U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+620,(((0x344U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
            tracep->chgBit(oldp+621,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip));
            tracep->chgQData(oldp+622,((QData)((IData)(
                                                       ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip) 
                                                        << 7U)))),64);
            tracep->chgBit(oldp+624,((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx))));
            tracep->chgBit(oldp+625,(((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))));
            tracep->chgBit(oldp+626,(((0x340U == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                      & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en))));
            tracep->chgQData(oldp+627,(vlSelf->SocTop__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mscrstch),64);
            tracep->chgCData(oldp+629,((7U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr))),3);
            tracep->chgCData(oldp+630,((3U & (IData)(
                                                     (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                      >> 1U)))),2);
            tracep->chgBit(oldp+631,((1U & (IData)(
                                                   (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                    >> 2U)))));
            tracep->chgQData(oldp+632,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_pc_o),64);
            tracep->chgIData(oldp+634,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__wb_inst_o),32);
            tracep->chgQData(oldp+635,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__pc_data1),64);
            tracep->chgBit(oldp+637,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__difftest_exyn));
            tracep->chgBit(oldp+638,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__teap_yn));
            tracep->chgQData(oldp+639,(vlSelf->SocTop__DOT__rvcpu1__DOT__mem_wb8__DOT__trap_code),64);
            tracep->chgQData(oldp+641,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[0]),64);
            tracep->chgQData(oldp+643,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[1]),64);
            tracep->chgQData(oldp+645,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[2]),64);
            tracep->chgQData(oldp+647,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[3]),64);
            tracep->chgQData(oldp+649,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[4]),64);
            tracep->chgQData(oldp+651,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[5]),64);
            tracep->chgQData(oldp+653,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[6]),64);
            tracep->chgQData(oldp+655,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[7]),64);
            tracep->chgQData(oldp+657,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[8]),64);
            tracep->chgQData(oldp+659,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[9]),64);
            tracep->chgQData(oldp+661,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[10]),64);
            tracep->chgQData(oldp+663,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[11]),64);
            tracep->chgQData(oldp+665,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[12]),64);
            tracep->chgQData(oldp+667,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[13]),64);
            tracep->chgQData(oldp+669,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[14]),64);
            tracep->chgQData(oldp+671,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[15]),64);
            tracep->chgQData(oldp+673,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[16]),64);
            tracep->chgQData(oldp+675,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[17]),64);
            tracep->chgQData(oldp+677,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[18]),64);
            tracep->chgQData(oldp+679,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[19]),64);
            tracep->chgQData(oldp+681,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[20]),64);
            tracep->chgQData(oldp+683,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[21]),64);
            tracep->chgQData(oldp+685,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[22]),64);
            tracep->chgQData(oldp+687,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[23]),64);
            tracep->chgQData(oldp+689,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[24]),64);
            tracep->chgQData(oldp+691,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[25]),64);
            tracep->chgQData(oldp+693,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[26]),64);
            tracep->chgQData(oldp+695,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[27]),64);
            tracep->chgQData(oldp+697,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[28]),64);
            tracep->chgQData(oldp+699,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[29]),64);
            tracep->chgQData(oldp+701,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[30]),64);
            tracep->chgQData(oldp+703,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs[31]),64);
            tracep->chgIData(oldp+705,(vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__i),32);
            tracep->chgQData(oldp+706,((vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                        >> 9U)),55);
            tracep->chgCData(oldp+708,((0x3fU & (IData)(
                                                        (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                                         >> 3U)))),6);
            tracep->chgCData(oldp+709,(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst),6);
            tracep->chgBit(oldp+710,((0x20U == (IData)(vlSelf->SocTop__DOT__i_cache2__DOT__state_inst))));
            tracep->chgBit(oldp+711,(vlSelf->SocTop__DOT__i_cache2__DOT__read_ok));
            tracep->chgQData(oldp+712,(vlSelf->SocTop__DOT__i_cache2__DOT__miss_data),64);
            tracep->chgBit(oldp+714,(vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_o));
            tracep->chgBit(oldp+715,(vlSelf->SocTop__DOT__i_cache2__DOT__miss_ena_t));
            tracep->chgBit(oldp+716,(vlSelf->SocTop__DOT__i_cache2__DOT__write_i_ok));
            tracep->chgQData(oldp+717,(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__out_data),55);
            tracep->chgBit(oldp+719,(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag01__DOT__out_vaild));
            tracep->chgQData(oldp+720,(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__out_data),55);
            tracep->chgBit(oldp+722,(vlSelf->SocTop__DOT__i_cache2__DOT__u_tag02__DOT__out_vaild));
            tracep->chgQData(oldp+723,(vlSelf->SocTop__DOT__i_cache2__DOT__u_data01__DOT__out_data),64);
            tracep->chgQData(oldp+725,(vlSelf->SocTop__DOT__i_cache2__DOT__u_data02__DOT__out_data),64);
            tracep->chgIData(oldp+727,(vlSelf->SocTop__DOT__i_cache2__DOT__i),32);
            tracep->chgQData(oldp+728,((0x80000000000000ULL 
                                        | (vlSelf->SocTop__DOT__rvcpu_inst_addr 
                                           >> 9U))),56);
            tracep->chgBit(oldp+730,((1U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))));
            tracep->chgBit(oldp+731,((1U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))));
            tracep->chgCData(oldp+732,(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread),6);
            tracep->chgBit(oldp+733,((2U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dread))));
            tracep->chgBit(oldp+734,(vlSelf->SocTop__DOT__d_cache3__DOT__read_ok));
            tracep->chgBit(oldp+735,(vlSelf->SocTop__DOT__d_cache3__DOT__dirty_ok));
            tracep->chgCData(oldp+736,(vlSelf->SocTop__DOT__d_cache3__DOT__missr_out_type),4);
            tracep->chgCData(oldp+737,(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite),6);
            tracep->chgBit(oldp+738,((2U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))));
            tracep->chgBit(oldp+739,(vlSelf->SocTop__DOT__d_cache3__DOT__read_w_ok));
            tracep->chgBit(oldp+740,((4U == (IData)(vlSelf->SocTop__DOT__d_cache3__DOT__state_dwrite))));
            tracep->chgBit(oldp+741,(vlSelf->SocTop__DOT__d_cache3__DOT__dirtyw_ok));
            tracep->chgCData(oldp+742,(vlSelf->SocTop__DOT__d_cache3__DOT__missw_out_type),4);
            tracep->chgIData(oldp+743,(vlSelf->SocTop__DOT__d_cache3__DOT__i),32);
            tracep->chgQData(oldp+744,(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_data),55);
            tracep->chgBit(oldp+746,(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag0__DOT__out_vaild));
            tracep->chgQData(oldp+747,(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_data),55);
            tracep->chgBit(oldp+749,(vlSelf->SocTop__DOT__d_cache3__DOT__u_tag1__DOT__out_vaild));
            tracep->chgQData(oldp+750,(vlSelf->SocTop__DOT__d_cache3__DOT__u_data0__DOT__out_data),64);
            tracep->chgQData(oldp+752,(vlSelf->SocTop__DOT__d_cache3__DOT__u_data1__DOT__out_data),64);
            tracep->chgCData(oldp+754,(vlSelf->SocTop__DOT__arbitrate4__DOT__arbitrate_state),3);
            tracep->chgCData(oldp+755,(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_ar_id),4);
            tracep->chgQData(oldp+756,(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_ar_addr),64);
            tracep->chgCData(oldp+758,(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_ar_len),8);
            tracep->chgCData(oldp+759,(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_ar_size),3);
            tracep->chgCData(oldp+760,(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_ar_burst),2);
            tracep->chgCData(oldp+761,(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_ar_cache),4);
            tracep->chgCData(oldp+762,(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_ar_prot),3);
            tracep->chgCData(oldp+763,(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_ar_qos),4);
            tracep->chgBit(oldp+764,(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_ar_valid));
            tracep->chgBit(oldp+765,(vlSelf->SocTop__DOT__arbitrate4__DOT__dread_cache_valid));
            tracep->chgCData(oldp+766,(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_ar_id),4);
            tracep->chgQData(oldp+767,(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_ar_addr),64);
            tracep->chgCData(oldp+769,(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_ar_len),8);
            tracep->chgCData(oldp+770,(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_ar_size),3);
            tracep->chgCData(oldp+771,(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_ar_burst),2);
            tracep->chgCData(oldp+772,(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_ar_cache),4);
            tracep->chgCData(oldp+773,(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_ar_prot),3);
            tracep->chgCData(oldp+774,(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_ar_qos),4);
            tracep->chgBit(oldp+775,(vlSelf->SocTop__DOT__arbitrate4__DOT__iread_ar_valid));
            tracep->chgBit(oldp+776,(vlSelf->SocTop__DOT__arbitrate4__DOT__dwrite_cache_valid));
            tracep->chgCData(oldp+777,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state),2);
            tracep->chgCData(oldp+778,(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state),2);
            tracep->chgQData(oldp+779,(vlSelf->SocTop__DOT__axi_mnq4__DOT__write_data_reg),64);
            tracep->chgQData(oldp+781,(vlSelf->SocTop__DOT__axi_mnq4__DOT__write_addr_reg),64);
            tracep->chgCData(oldp+783,(vlSelf->SocTop__DOT__axi_mnq4__DOT__r_s_axi_ar_id),4);
            tracep->chgQData(oldp+784,(vlSelf->SocTop__DOT__time_axi6__DOT__car_mtime_l),64);
            tracep->chgQData(oldp+786,(vlSelf->SocTop__DOT__time_axi6__DOT__csr_mtime_h),64);
            tracep->chgCData(oldp+788,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_m),2);
            tracep->chgCData(oldp+789,(vlSelf->SocTop__DOT__time_axi6__DOT__time_reg_id),4);
            tracep->chgCData(oldp+790,(vlSelf->SocTop__DOT__time_axi6__DOT__state_time_r),2);
        }
        tracep->chgBit(oldp+791,(vlSelf->clk));
        tracep->chgBit(oldp+792,(vlSelf->rst));
        tracep->chgBit(oldp+793,(vlSelf->read_ena_sign_));
        tracep->chgQData(oldp+794,(vlSelf->out_addr_outp),64);
        tracep->chgQData(oldp+796,(vlSelf->read_data_sign_),64);
        tracep->chgBit(oldp+798,(vlSelf->out_write_ram_ena));
        tracep->chgQData(oldp+799,(vlSelf->out_write_ram_data),64);
        tracep->chgQData(oldp+801,(vlSelf->out_write_ram_addr),64);
        tracep->chgBit(oldp+803,((1U & (~ (IData)(vlSelf->rst)))));
        tracep->chgBit(oldp+804,(((~ (IData)(vlSelf->rst)) 
                                  & (IData)(vlSelf->SocTop__DOT__soc_axi_aw_ready))));
        tracep->chgBit(oldp+805,(((~ (IData)(vlSelf->rst)) 
                                  & (IData)(vlSelf->SocTop__DOT__soc_axi_w_ready))));
        tracep->chgCData(oldp+806,(((IData)(vlSelf->rst)
                                     ? 0U : (0xfU & 
                                             ((IData)(vlSelf->SocTop__DOT__add_axi_aw_id) 
                                              >> 8U)))),4);
        tracep->chgCData(oldp+807,(((IData)(vlSelf->rst)
                                     ? 0U : (3U & (
                                                   (0xfffffffU 
                                                    & ((IData)(vlSelf->SocTop__DOT__time_axi6__DOT__time_reg_resp) 
                                                       >> 2U)) 
                                                   | ((IData)(vlSelf->SocTop__DOT__io_axi_b_resp) 
                                                      >> 4U))))),2);
        tracep->chgBit(oldp+808,(((~ (IData)(vlSelf->rst)) 
                                  & (2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_write_state)))));
        __Vtemp51[0U] = (IData)(vlSelf->SocTop__DOT__io_axi_r_data);
        __Vtemp51[1U] = (IData)((vlSelf->SocTop__DOT__io_axi_r_data 
                                 >> 0x20U));
        __Vtemp51[2U] = (IData)(vlSelf->SocTop__DOT__tim_axi_r_data);
        __Vtemp51[3U] = (IData)((vlSelf->SocTop__DOT__tim_axi_r_data 
                                 >> 0x20U));
        __Vtemp51[4U] = (IData)(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                  ? vlSelf->read_data_sign_
                                  : 0ULL));
        __Vtemp51[5U] = (IData)((((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                   ? vlSelf->read_data_sign_
                                   : 0ULL) >> 0x20U));
        tracep->chgWData(oldp+809,(__Vtemp51),192);
        tracep->chgQData(oldp+815,(((2U == (IData)(vlSelf->SocTop__DOT__axi_mnq4__DOT__s_read_state))
                                     ? vlSelf->read_data_sign_
                                     : 0ULL)),64);
        tracep->chgQData(oldp+817,(((1U & ((~ (IData)(vlSelf->rst)) 
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
        tracep->chgBit(oldp+819,(((IData)(vlSelf->rst)
                                   ? 0U : (1U & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)))));
        tracep->chgQData(oldp+820,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
                                                ? (0xfffffffffffffffeULL 
                                                   & vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc)
                                                : vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc))),64);
        tracep->chgBit(oldp+822,(((~ (IData)(vlSelf->rst)) 
                                  & (IData)(vlSelf->SocTop__DOT__i_cache_inst_valid))));
        tracep->chgQData(oldp+823,(((IData)(vlSelf->rst)
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
        tracep->chgQData(oldp+825,(((IData)(vlSelf->rst)
                                     ? 0ULL : vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_pc)),64);
        tracep->chgCData(oldp+827,(((IData)(vlSelf->rst)
                                     ? 0U : (7U & (vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst 
                                                   >> 0xcU)))),3);
        tracep->chgQData(oldp+828,((((~ (IData)(vlSelf->rst)) 
                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1))
                                     ? ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                          == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                         & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                         ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                         : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                        [vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1])
                                     : 0ULL)),64);
        tracep->chgQData(oldp+830,((((~ (IData)(vlSelf->rst)) 
                                     & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2))
                                     ? ((((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_addr) 
                                          == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2)) 
                                         & (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__wb_id_ena))
                                         ? vlSelf->SocTop__DOT__rvcpu1__DOT__wb_regfile_data
                                         : vlSelf->SocTop__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                        [vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2])
                                     : 0ULL)),64);
        tracep->chgQData(oldp+832,(((IData)(vlSelf->rst)
                                     ? 0ULL : vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_pc)),64);
        tracep->chgIData(oldp+834,(((IData)(vlSelf->rst)
                                     ? 0U : vlSelf->SocTop__DOT__rvcpu1__DOT__if_id_inst)),32);
        tracep->chgIData(oldp+835,(((IData)(vlSelf->rst)
                                     ? 0U : vlSelf->SocTop__DOT__rvcpu1__DOT__id_ex_ex_inst)),32);
        tracep->chgQData(oldp+836,(((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
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
        tracep->chgQData(oldp+838,(((IData)((0x6fU 
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
        tracep->chgBit(oldp+840,(((IData)(vlSelf->rst)
                                   ? 0U : (1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena1) 
                                                  & (2U 
                                                     == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                 & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr1) 
                                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)))))));
        tracep->chgBit(oldp+841,(((IData)(vlSelf->rst)
                                   ? 0U : (1U & (((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_ena2) 
                                                  & (2U 
                                                     == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                                 & ((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__id_reg_addr2) 
                                                    == (IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__idex_ex_rdaddr)))))));
        tracep->chgQData(oldp+842,(((IData)(vlSelf->rst)
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
        tracep->chgQData(oldp+844,(((IData)(vlSelf->rst)
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
        tracep->chgQData(oldp+846,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((1U 
                                                & (IData)(
                                                          (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                           >> 2U)))
                                                ? ((QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data)) 
                                                   << 0x20U)
                                                : (QData)((IData)(vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_data))))),64);
        tracep->chgCData(oldp+848,(((IData)(vlSelf->rst)
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
        tracep->chgCData(oldp+849,(((IData)(vlSelf->rst)
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
        tracep->chgCData(oldp+850,(((IData)(vlSelf->rst)
                                     ? 0U : ((1U & (IData)(
                                                           (vlSelf->SocTop__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                            >> 2U)))
                                              ? 0xf0U
                                              : 0xfU))),8);
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
