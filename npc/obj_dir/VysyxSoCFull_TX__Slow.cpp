// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull_TX.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

//==========


void VysyxSoCFull_TX___ctor_var_reset(VysyxSoCFull_TX* vlSelf);

VysyxSoCFull_TX::VysyxSoCFull_TX(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VysyxSoCFull_TX___ctor_var_reset(this);
}

void VysyxSoCFull_TX::__Vconfigure(VysyxSoCFull__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VysyxSoCFull_TX::~VysyxSoCFull_TX() {
}

void VysyxSoCFull_TX___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__10(VysyxSoCFull_TX* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TX___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__10\n"); );
    // Variables
    CData/*5:0*/ __PVT___readys_mask_T_3;
    CData/*0:0*/ __PVT__ioX_cq__DOT___wen_T;
    CData/*0:0*/ __PVT__ioX_cq_1__DOT___wen_T;
    CData/*0:0*/ __PVT__ioX_cq_2__DOT___wen_T;
    CData/*0:0*/ __PVT__ioX_cq_3__DOT___wen_T;
    CData/*0:0*/ __PVT__ioX_cq_4__DOT___wen_T;
    SData/*11:0*/ __PVT___readys_unready_T_1;
    SData/*11:0*/ __PVT___readys_unready_T_3;
    IData/*19:0*/ __PVT___mask_T_1;
    IData/*19:0*/ __PVT___mask_T_3;
    IData/*19:0*/ __PVT___mask_T_5;
    IData/*19:0*/ __PVT___mask_T_7;
    IData/*19:0*/ __PVT___mask_T_12;
    IData/*19:0*/ __PVT___mask_T_14;
    IData/*19:0*/ __PVT___mask_T_16;
    IData/*19:0*/ __PVT___mask_T_18;
    IData/*19:0*/ __PVT___mask_T_23;
    IData/*19:0*/ __PVT___mask_T_25;
    IData/*19:0*/ __PVT___mask_T_27;
    IData/*19:0*/ __PVT___mask_T_29;
    IData/*19:0*/ __PVT___mask_T_34;
    IData/*19:0*/ __PVT___mask_T_36;
    IData/*19:0*/ __PVT___mask_T_38;
    IData/*19:0*/ __PVT___mask_T_40;
    IData/*19:0*/ __PVT___mask_T_45;
    IData/*19:0*/ __PVT___mask_T_47;
    IData/*19:0*/ __PVT___mask_T_49;
    IData/*19:0*/ __PVT___mask_T_51;
    // Body
    vlSelf->__PVT__forceXmit = (0U == (IData)(vlSelf->__PVT__xmit));
    vlSelf->__PVT___xmit_T_1 = (3U & ((IData)(vlSelf->__PVT__xmit) 
                                      - (IData)(1U)));
    vlSelf->__PVT__qb_q__DOT___valid_0_T_6 = vlSelf->__PVT__qb_q__DOT__valid_0;
    vlSelf->__PVT__qc_q__DOT___valid_0_T_6 = vlSelf->__PVT__qc_q__DOT__valid_0;
    vlSelf->__PVT__qe_q__DOT___valid_0_T_6 = vlSelf->__PVT__qe_q__DOT__valid_0;
    __PVT___mask_T_1 = (vlSelf->__PVT__rx_a | (0x7ffffU 
                                               & (vlSelf->__PVT__rx_a 
                                                  >> 1U)));
    __PVT___mask_T_12 = (vlSelf->__PVT__rx_b | (0x7ffffU 
                                                & (vlSelf->__PVT__rx_b 
                                                   >> 1U)));
    __PVT___mask_T_23 = (vlSelf->__PVT__rx_c | (0x7ffffU 
                                                & (vlSelf->__PVT__rx_c 
                                                   >> 1U)));
    __PVT___mask_T_34 = (vlSelf->__PVT__rx_d | (0x7ffffU 
                                                & (vlSelf->__PVT__rx_d 
                                                   >> 1U)));
    __PVT___mask_T_45 = (vlSelf->__PVT__rx_e | (0x7ffffU 
                                                & (vlSelf->__PVT__rx_e 
                                                   >> 1U)));
    vlSelf->__PVT__allowReturn = (1U & ((~ (((((IData)(vlSelf->__PVT__ioX_cq__DOT__valid_0) 
                                               | (IData)(vlSelf->__PVT__ioX_cq_1__DOT__valid_0)) 
                                              | (IData)(vlSelf->__PVT__ioX_cq_2__DOT__valid_0)) 
                                             | (IData)(vlSelf->__PVT__ioX_cq_3__DOT__valid_0)) 
                                            | (IData)(vlSelf->__PVT__ioX_cq_4__DOT__valid_0))) 
                                        | (0U == (IData)(vlSelf->__PVT__xmit))));
    vlSelf->__PVT__rxInc_sink_io_deq_valid = ((IData)(vlSelf->__PVT__rxInc_sink__DOT__valid_reg) 
                                              & (IData)(vlSelf->__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__txInc_sink_io_deq_valid = ((IData)(vlSelf->__PVT__txInc_sink__DOT__valid_reg) 
                                              & (IData)(vlSelf->__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__rxQ__DOT___valid_0_T_6 = (1U & (
                                                   (~ (IData)(vlSelf->__PVT__rxQ__DOT__valid_1)) 
                                                   | (IData)(vlSelf->__PVT__rxQ__DOT__valid_0)));
    vlSelf->__PVT__rxQ__DOT___valid_1_T_6 = ((IData)(vlSelf->__PVT__rxQ__DOT__valid_0) 
                                             | (IData)(vlSelf->__PVT__rxQ__DOT__valid_1));
    vlSelf->__PVT__rxQ__DOT___wen_T_3 = 1U;
    vlSelf->__PVT__rxQ__DOT___wen_T_10 = 0U;
    vlSelf->__PVT__ioX_allow_1 = (1U & ((~ (IData)(vlSelf->__PVT__ioX_first_1)) 
                                        | VL_LTES_III(1,21,21, 0U, 
                                                      (0x1fffffU 
                                                       & (vlSelf->__PVT__tx_b 
                                                          - (IData)(vlSelf->__PVT__qb_q__DOT__elts_0_beats))))));
    vlSelf->__PVT__ioX_allow_2 = (1U & ((~ (IData)(vlSelf->__PVT__ioX_first_2)) 
                                        | VL_LTES_III(1,21,21, 0U, 
                                                      (0x1fffffU 
                                                       & (vlSelf->__PVT__tx_c 
                                                          - (IData)(vlSelf->__PVT__qc_q__DOT__elts_0_beats))))));
    vlSelf->__PVT__ioX_allow_4 = (1U & ((~ (IData)(vlSelf->__PVT__ioX_first_4)) 
                                        | VL_LTES_III(1,21,21, 0U, 
                                                      (0x1fffffU 
                                                       & (vlSelf->__PVT__tx_e 
                                                          - (IData)(vlSelf->__PVT__qe_q__DOT__elts_0_beats))))));
    vlSelf->__PVT__ioX_allow = (1U & ((~ (IData)(vlSelf->__PVT__ioX_first)) 
                                      | VL_LTES_III(1,21,21, 0U, 
                                                    (0x1fffffU 
                                                     & (vlSelf->__PVT__tx_a 
                                                        - (IData)(vlSelf->__PVT__qa_q__DOT__elts_0_beats))))));
    vlSelf->__PVT__ioX_allow_3 = (1U & ((~ (IData)(vlSelf->__PVT__ioX_first_3)) 
                                        | VL_LTES_III(1,21,21, 0U, 
                                                      (0x1fffffU 
                                                       & (vlSelf->__PVT__tx_d 
                                                          - (IData)(vlSelf->__PVT__qd_q__DOT__elts_0_beats))))));
    vlSelf->__PVT__qb_q__DOT___valid_1_T_6 = vlSelf->__PVT__qb_q__DOT__valid_1;
    vlSelf->__PVT__qc_q__DOT___valid_1_T_6 = vlSelf->__PVT__qc_q__DOT__valid_1;
    vlSelf->__PVT__qe_q__DOT___valid_1_T_6 = vlSelf->__PVT__qe_q__DOT__valid_1;
    vlSelf->__PVT__rxInc_sink__DOT__sink_valid_0_reset 
        = ((IData)(vlSymsp->TOP.reset) | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_));
    __PVT___mask_T_3 = (__PVT___mask_T_1 | (0x3ffffU 
                                            & (__PVT___mask_T_1 
                                               >> 2U)));
    __PVT___mask_T_14 = (__PVT___mask_T_12 | (0x3ffffU 
                                              & (__PVT___mask_T_12 
                                                 >> 2U)));
    __PVT___mask_T_25 = (__PVT___mask_T_23 | (0x3ffffU 
                                              & (__PVT___mask_T_23 
                                                 >> 2U)));
    __PVT___mask_T_36 = (__PVT___mask_T_34 | (0x3ffffU 
                                              & (__PVT___mask_T_34 
                                                 >> 2U)));
    __PVT___mask_T_47 = (__PVT___mask_T_45 | (0x3ffffU 
                                              & (__PVT___mask_T_45 
                                                 >> 2U)));
    vlSelf->__PVT__f_valid = ((IData)(vlSelf->__PVT__rxQ__DOT__valid_0) 
                              & (IData)(vlSelf->__PVT__allowReturn));
    vlSelf->__PVT__rxInc_sink__DOT__ridx_incremented 
        = ((IData)(vlSelf->__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->__PVT__rxInc_sink__DOT__ridx_ridx_bin) 
              + (IData)(vlSelf->__PVT__rxInc_sink_io_deq_valid)));
    vlSelf->__PVT__txInc_sink__DOT__ridx_incremented 
        = ((IData)(vlSelf->__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->__PVT__txInc_sink__DOT__ridx_ridx_bin) 
              + (IData)(vlSelf->__PVT__txInc_sink_io_deq_valid)));
    vlSelf->__PVT__qb_q_io_deq_ready = ((~ (IData)(vlSelf->__PVT__ioX_cq_1__DOT__valid_1)) 
                                        & (IData)(vlSelf->__PVT__ioX_allow_1));
    __PVT__ioX_cq_1__DOT___wen_T = ((~ (IData)(vlSelf->__PVT__ioX_cq_1__DOT__valid_1)) 
                                    & ((IData)(vlSelf->__PVT__qb_q__DOT__valid_0) 
                                       & (IData)(vlSelf->__PVT__ioX_allow_1)));
    vlSelf->__PVT__qc_q_io_deq_ready = ((~ (IData)(vlSelf->__PVT__ioX_cq_2__DOT__valid_1)) 
                                        & (IData)(vlSelf->__PVT__ioX_allow_2));
    __PVT__ioX_cq_2__DOT___wen_T = ((~ (IData)(vlSelf->__PVT__ioX_cq_2__DOT__valid_1)) 
                                    & ((IData)(vlSelf->__PVT__qc_q__DOT__valid_0) 
                                       & (IData)(vlSelf->__PVT__ioX_allow_2)));
    vlSelf->__PVT__qe_q_io_deq_ready = ((~ (IData)(vlSelf->__PVT__ioX_cq_4__DOT__valid_1)) 
                                        & (IData)(vlSelf->__PVT__ioX_allow_4));
    __PVT__ioX_cq_4__DOT___wen_T = ((~ (IData)(vlSelf->__PVT__ioX_cq_4__DOT__valid_1)) 
                                    & ((IData)(vlSelf->__PVT__qe_q__DOT__valid_0) 
                                       & (IData)(vlSelf->__PVT__ioX_allow_4)));
    vlSelf->__PVT__qa_q_io_deq_ready = ((~ (IData)(vlSelf->__PVT__ioX_cq__DOT__valid_1)) 
                                        & (IData)(vlSelf->__PVT__ioX_allow));
    __PVT__ioX_cq__DOT___wen_T = ((~ (IData)(vlSelf->__PVT__ioX_cq__DOT__valid_1)) 
                                  & ((IData)(vlSelf->__PVT__qa_q__DOT__valid_0) 
                                     & (IData)(vlSelf->__PVT__ioX_allow)));
    vlSelf->__PVT__qd_q_io_deq_ready = ((~ (IData)(vlSelf->__PVT__ioX_cq_3__DOT__valid_1)) 
                                        & (IData)(vlSelf->__PVT__ioX_allow_3));
    __PVT__ioX_cq_3__DOT___wen_T = ((~ (IData)(vlSelf->__PVT__ioX_cq_3__DOT__valid_1)) 
                                    & ((IData)(vlSelf->__PVT__qd_q__DOT__valid_0) 
                                       & (IData)(vlSelf->__PVT__ioX_allow_3)));
    __PVT___mask_T_5 = (__PVT___mask_T_3 | (0xffffU 
                                            & (__PVT___mask_T_3 
                                               >> 4U)));
    __PVT___mask_T_16 = (__PVT___mask_T_14 | (0xffffU 
                                              & (__PVT___mask_T_14 
                                                 >> 4U)));
    __PVT___mask_T_27 = (__PVT___mask_T_25 | (0xffffU 
                                              & (__PVT___mask_T_25 
                                                 >> 4U)));
    __PVT___mask_T_38 = (__PVT___mask_T_36 | (0xffffU 
                                              & (__PVT___mask_T_36 
                                                 >> 4U)));
    __PVT___mask_T_49 = (__PVT___mask_T_47 | (0xffffU 
                                              & (__PVT___mask_T_47 
                                                 >> 4U)));
    vlSelf->__PVT__requests = (((IData)(vlSelf->__PVT__f_valid) 
                                << 5U) | (((IData)(vlSelf->__PVT__ioX_cq_4__DOT__valid_0) 
                                           << 4U) | 
                                          (((IData)(vlSelf->__PVT__ioX_cq_3__DOT__valid_0) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__ioX_cq_2__DOT__valid_0) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__ioX_cq_1__DOT__valid_0) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__ioX_cq__DOT__valid_0))))));
    vlSelf->__PVT__qb_q__DOT__wen = ((IData)(vlSelf->__PVT__qb_q_io_deq_ready) 
                                     & (IData)(vlSelf->__PVT__qb_q__DOT__valid_1));
    vlSelf->__PVT___ioX_first_T_1 = ((IData)(vlSelf->__PVT__qb_q_io_deq_ready) 
                                     & (IData)(vlSelf->__PVT__qb_q__DOT__valid_0));
    vlSelf->__PVT__ioX_cq_1__DOT___valid_0_T_6 = ((IData)(__PVT__ioX_cq_1__DOT___wen_T) 
                                                  | (IData)(vlSelf->__PVT__ioX_cq_1__DOT__valid_0));
    vlSelf->__PVT__ioX_cq_1__DOT___valid_1_T_6 = (((IData)(__PVT__ioX_cq_1__DOT___wen_T) 
                                                   & (IData)(vlSelf->__PVT__ioX_cq_1__DOT__valid_0)) 
                                                  | (IData)(vlSelf->__PVT__ioX_cq_1__DOT__valid_1));
    vlSelf->__PVT__ioX_cq_1__DOT___wen_T_3 = ((IData)(vlSelf->__PVT__ioX_cq_1__DOT__valid_1) 
                                              | (IData)(__PVT__ioX_cq_1__DOT___wen_T));
    vlSelf->__PVT__ioX_cq_1__DOT___wen_T_10 = ((IData)(__PVT__ioX_cq_1__DOT___wen_T) 
                                               & (IData)(vlSelf->__PVT__ioX_cq_1__DOT__valid_1));
    vlSelf->__PVT__qc_q__DOT__wen = ((IData)(vlSelf->__PVT__qc_q_io_deq_ready) 
                                     & (IData)(vlSelf->__PVT__qc_q__DOT__valid_1));
    vlSelf->__PVT___ioX_first_T_2 = ((IData)(vlSelf->__PVT__qc_q_io_deq_ready) 
                                     & (IData)(vlSelf->__PVT__qc_q__DOT__valid_0));
    vlSelf->__PVT__ioX_cq_2__DOT___valid_0_T_6 = ((IData)(__PVT__ioX_cq_2__DOT___wen_T) 
                                                  | (IData)(vlSelf->__PVT__ioX_cq_2__DOT__valid_0));
    vlSelf->__PVT__ioX_cq_2__DOT___valid_1_T_6 = (((IData)(__PVT__ioX_cq_2__DOT___wen_T) 
                                                   & (IData)(vlSelf->__PVT__ioX_cq_2__DOT__valid_0)) 
                                                  | (IData)(vlSelf->__PVT__ioX_cq_2__DOT__valid_1));
    vlSelf->__PVT__ioX_cq_2__DOT___wen_T_3 = ((IData)(vlSelf->__PVT__ioX_cq_2__DOT__valid_1) 
                                              | (IData)(__PVT__ioX_cq_2__DOT___wen_T));
    vlSelf->__PVT__ioX_cq_2__DOT___wen_T_10 = ((IData)(__PVT__ioX_cq_2__DOT___wen_T) 
                                               & (IData)(vlSelf->__PVT__ioX_cq_2__DOT__valid_1));
    vlSelf->__PVT__qe_q__DOT__wen = ((IData)(vlSelf->__PVT__qe_q_io_deq_ready) 
                                     & (IData)(vlSelf->__PVT__qe_q__DOT__valid_1));
    vlSelf->__PVT___ioX_first_T_4 = ((IData)(vlSelf->__PVT__qe_q_io_deq_ready) 
                                     & (IData)(vlSelf->__PVT__qe_q__DOT__valid_0));
    vlSelf->__PVT__ioX_cq_4__DOT___valid_0_T_6 = ((IData)(__PVT__ioX_cq_4__DOT___wen_T) 
                                                  | (IData)(vlSelf->__PVT__ioX_cq_4__DOT__valid_0));
    vlSelf->__PVT__ioX_cq_4__DOT___valid_1_T_6 = (((IData)(__PVT__ioX_cq_4__DOT___wen_T) 
                                                   & (IData)(vlSelf->__PVT__ioX_cq_4__DOT__valid_0)) 
                                                  | (IData)(vlSelf->__PVT__ioX_cq_4__DOT__valid_1));
    vlSelf->__PVT__ioX_cq_4__DOT___wen_T_3 = ((IData)(vlSelf->__PVT__ioX_cq_4__DOT__valid_1) 
                                              | (IData)(__PVT__ioX_cq_4__DOT___wen_T));
    vlSelf->__PVT__ioX_cq_4__DOT___wen_T_10 = ((IData)(__PVT__ioX_cq_4__DOT___wen_T) 
                                               & (IData)(vlSelf->__PVT__ioX_cq_4__DOT__valid_1));
    vlSelf->__PVT___ioX_first_T = ((IData)(vlSelf->__PVT__qa_q_io_deq_ready) 
                                   & (IData)(vlSelf->__PVT__qa_q__DOT__valid_0));
    vlSelf->__PVT__ioX_cq__DOT___valid_0_T_6 = ((IData)(__PVT__ioX_cq__DOT___wen_T) 
                                                | (IData)(vlSelf->__PVT__ioX_cq__DOT__valid_0));
    vlSelf->__PVT__ioX_cq__DOT___valid_1_T_6 = (((IData)(__PVT__ioX_cq__DOT___wen_T) 
                                                 & (IData)(vlSelf->__PVT__ioX_cq__DOT__valid_0)) 
                                                | (IData)(vlSelf->__PVT__ioX_cq__DOT__valid_1));
    vlSelf->__PVT__ioX_cq__DOT___wen_T_3 = ((IData)(vlSelf->__PVT__ioX_cq__DOT__valid_1) 
                                            | (IData)(__PVT__ioX_cq__DOT___wen_T));
    vlSelf->__PVT__ioX_cq__DOT___wen_T_10 = ((IData)(__PVT__ioX_cq__DOT___wen_T) 
                                             & (IData)(vlSelf->__PVT__ioX_cq__DOT__valid_1));
    vlSelf->__PVT___ioX_first_T_3 = ((IData)(vlSelf->__PVT__qd_q_io_deq_ready) 
                                     & (IData)(vlSelf->__PVT__qd_q__DOT__valid_0));
    vlSelf->__PVT__ioX_cq_3__DOT___valid_0_T_6 = ((IData)(__PVT__ioX_cq_3__DOT___wen_T) 
                                                  | (IData)(vlSelf->__PVT__ioX_cq_3__DOT__valid_0));
    vlSelf->__PVT__ioX_cq_3__DOT___valid_1_T_6 = (((IData)(__PVT__ioX_cq_3__DOT___wen_T) 
                                                   & (IData)(vlSelf->__PVT__ioX_cq_3__DOT__valid_0)) 
                                                  | (IData)(vlSelf->__PVT__ioX_cq_3__DOT__valid_1));
    vlSelf->__PVT__ioX_cq_3__DOT___wen_T_3 = ((IData)(vlSelf->__PVT__ioX_cq_3__DOT__valid_1) 
                                              | (IData)(__PVT__ioX_cq_3__DOT___wen_T));
    vlSelf->__PVT__ioX_cq_3__DOT___wen_T_10 = ((IData)(__PVT__ioX_cq_3__DOT___wen_T) 
                                               & (IData)(vlSelf->__PVT__ioX_cq_3__DOT__valid_1));
    __PVT___mask_T_7 = (__PVT___mask_T_5 | (0xfffU 
                                            & (__PVT___mask_T_5 
                                               >> 8U)));
    __PVT___mask_T_18 = (__PVT___mask_T_16 | (0xfffU 
                                              & (__PVT___mask_T_16 
                                                 >> 8U)));
    __PVT___mask_T_29 = (__PVT___mask_T_27 | (0xfffU 
                                              & (__PVT___mask_T_27 
                                                 >> 8U)));
    __PVT___mask_T_40 = (__PVT___mask_T_38 | (0xfffU 
                                              & (__PVT___mask_T_38 
                                                 >> 8U)));
    __PVT___mask_T_51 = (__PVT___mask_T_49 | (0xfffU 
                                              & (__PVT___mask_T_49 
                                                 >> 8U)));
    vlSelf->__PVT___send_T = ((IData)(vlSelf->__PVT__state) 
                              & (IData)(vlSelf->__PVT__requests));
    vlSelf->__PVT__readys_filter = ((((IData)(vlSelf->__PVT__requests) 
                                      & (~ (IData)(vlSelf->__PVT__readys_mask))) 
                                     << 6U) | (((IData)(vlSelf->__PVT__f_valid) 
                                                << 5U) 
                                               | (((IData)(vlSelf->__PVT__ioX_cq_4__DOT__valid_0) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->__PVT__ioX_cq_3__DOT__valid_0) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->__PVT__ioX_cq_2__DOT__valid_0) 
                                                         << 2U) 
                                                        | (((IData)(vlSelf->__PVT__ioX_cq_1__DOT__valid_0) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->__PVT__ioX_cq__DOT__valid_0)))))));
    vlSelf->__PVT___GEN_1 = ((IData)(vlSelf->__PVT___ioX_first_T_1)
                              ? (IData)(vlSelf->__PVT__qb_q__DOT__elts_0_last)
                              : (IData)(vlSelf->__PVT__ioX_first_1));
    vlSelf->__PVT___ioX_tx_bT_6 = (0x1fffffU & ((((IData)(vlSelf->__PVT___ioX_first_T_1) 
                                                  & (IData)(vlSelf->__PVT__ioX_first_1))
                                                  ? 
                                                 (vlSelf->__PVT__tx_b 
                                                  - (IData)(vlSelf->__PVT__qb_q__DOT__elts_0_beats))
                                                  : vlSelf->__PVT__tx_b) 
                                                + ((IData)(vlSelf->__PVT__txInc_sink_io_deq_valid)
                                                    ? 
                                                   (0xfffffU 
                                                    & ((vlSelf->__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                        << 4U) 
                                                       | (vlSelf->__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                                          >> 0x1cU)))
                                                    : 0U)));
    vlSelf->__PVT___GEN_2 = ((IData)(vlSelf->__PVT___ioX_first_T_2)
                              ? (IData)(vlSelf->__PVT__qc_q__DOT__elts_0_last)
                              : (IData)(vlSelf->__PVT__ioX_first_2));
    vlSelf->__PVT___ioX_tx_c_T_6 = (0x1fffffU & ((((IData)(vlSelf->__PVT___ioX_first_T_2) 
                                                   & (IData)(vlSelf->__PVT__ioX_first_2))
                                                   ? 
                                                  (vlSelf->__PVT__tx_c 
                                                   - (IData)(vlSelf->__PVT__qc_q__DOT__elts_0_beats))
                                                   : vlSelf->__PVT__tx_c) 
                                                 + 
                                                 ((IData)(vlSelf->__PVT__txInc_sink_io_deq_valid)
                                                   ? 
                                                  (0xfffffU 
                                                   & (vlSelf->__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                                      >> 8U))
                                                   : 0U)));
    vlSelf->__PVT___GEN_4 = ((IData)(vlSelf->__PVT___ioX_first_T_4)
                              ? (IData)(vlSelf->__PVT__qe_q__DOT__elts_0_last)
                              : (IData)(vlSelf->__PVT__ioX_first_4));
    vlSelf->__PVT___ioX_tx_e_T_6 = (0x1fffffU & ((((IData)(vlSelf->__PVT___ioX_first_T_4) 
                                                   & (IData)(vlSelf->__PVT__ioX_first_4))
                                                   ? 
                                                  (vlSelf->__PVT__tx_e 
                                                   - (IData)(vlSelf->__PVT__qe_q__DOT__elts_0_beats))
                                                   : vlSelf->__PVT__tx_e) 
                                                 + 
                                                 ((IData)(vlSelf->__PVT__txInc_sink_io_deq_valid)
                                                   ? 
                                                  (0xfffffU 
                                                   & vlSelf->__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])
                                                   : 0U)));
    vlSelf->__PVT___GEN_0 = ((IData)(vlSelf->__PVT___ioX_first_T)
                              ? (IData)(vlSelf->__PVT__qa_q__DOT__elts_0_last)
                              : (IData)(vlSelf->__PVT__ioX_first));
    vlSelf->__PVT___ioX_tx_a_T_6 = (0x1fffffU & ((((IData)(vlSelf->__PVT___ioX_first_T) 
                                                   & (IData)(vlSelf->__PVT__ioX_first))
                                                   ? 
                                                  (vlSelf->__PVT__tx_a 
                                                   - (IData)(vlSelf->__PVT__qa_q__DOT__elts_0_beats))
                                                   : vlSelf->__PVT__tx_a) 
                                                 + 
                                                 ((IData)(vlSelf->__PVT__txInc_sink_io_deq_valid)
                                                   ? 
                                                  (0xfffffU 
                                                   & ((vlSelf->__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                       << 0x10U) 
                                                      | (vlSelf->__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                         >> 0x10U)))
                                                   : 0U)));
    vlSelf->__PVT___GEN_3 = ((IData)(vlSelf->__PVT___ioX_first_T_3)
                              ? (IData)(vlSelf->__PVT__qd_q__DOT__elts_0_last)
                              : (IData)(vlSelf->__PVT__ioX_first_3));
    vlSelf->__PVT___ioX_tx_d_T_6 = (0x1fffffU & ((((IData)(vlSelf->__PVT___ioX_first_T_3) 
                                                   & (IData)(vlSelf->__PVT__ioX_first_3))
                                                   ? 
                                                  (vlSelf->__PVT__tx_d 
                                                   - (IData)(vlSelf->__PVT__qd_q__DOT__elts_0_beats))
                                                   : vlSelf->__PVT__tx_d) 
                                                 + 
                                                 ((IData)(vlSelf->__PVT__txInc_sink_io_deq_valid)
                                                   ? 
                                                  (0xfffffU 
                                                   & ((vlSelf->__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                                       << 0xcU) 
                                                      | (vlSelf->__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U] 
                                                         >> 0x14U)))
                                                   : 0U)));
    vlSelf->__PVT___mask_T_9 = (__PVT___mask_T_7 | 
                                (0xfU & (__PVT___mask_T_7 
                                         >> 0x10U)));
    vlSelf->__PVT___mask_T_20 = (__PVT___mask_T_18 
                                 | (0xfU & (__PVT___mask_T_18 
                                            >> 0x10U)));
    vlSelf->__PVT___mask_T_31 = (__PVT___mask_T_29 
                                 | (0xfU & (__PVT___mask_T_29 
                                            >> 0x10U)));
    vlSelf->__PVT___mask_T_42 = (__PVT___mask_T_40 
                                 | (0xfU & (__PVT___mask_T_40 
                                            >> 0x10U)));
    vlSelf->__PVT___mask_T_53 = (__PVT___mask_T_51 
                                 | (0xfU & (__PVT___mask_T_51 
                                            >> 0x10U)));
    __PVT___readys_unready_T_1 = ((IData)(vlSelf->__PVT__readys_filter) 
                                  | (0x7ffU & ((IData)(vlSelf->__PVT__readys_filter) 
                                               >> 1U)));
    vlSelf->__PVT___msbOH_T_1 = (0xfffffU & ((~ vlSelf->__PVT__rx_a) 
                                             | (0x7ffffU 
                                                & (vlSelf->__PVT___mask_T_9 
                                                   >> 1U))));
    vlSelf->__PVT__rx_z = (0x1fffffU & (((IData)(vlSelf->__PVT__rxQ__DOT__valid_1)
                                          ? vlSelf->__PVT__rx_a
                                          : (0x7ffffU 
                                             & (vlSelf->__PVT__rx_a 
                                                & (vlSelf->__PVT___mask_T_9 
                                                   >> 1U)))) 
                                        + ((IData)(vlSelf->__PVT__rxInc_sink_io_deq_valid)
                                            ? (0xfffffU 
                                               & ((vlSelf->__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                   << 0x10U) 
                                                  | (vlSelf->__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                     >> 0x10U)))
                                            : 0U)));
    vlSelf->__PVT___msbOH_T_3 = (0xfffffU & ((~ vlSelf->__PVT__rx_b) 
                                             | (0x7ffffU 
                                                & (vlSelf->__PVT___mask_T_20 
                                                   >> 1U))));
    vlSelf->__PVT__rx_z_1 = (0x1fffffU & (((IData)(vlSelf->__PVT__rxQ__DOT__valid_1)
                                            ? vlSelf->__PVT__rx_b
                                            : (0x7ffffU 
                                               & (vlSelf->__PVT__rx_b 
                                                  & (vlSelf->__PVT___mask_T_20 
                                                     >> 1U)))) 
                                          + ((IData)(vlSelf->__PVT__rxInc_sink_io_deq_valid)
                                              ? (0xfffffU 
                                                 & ((vlSelf->__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                     << 4U) 
                                                    | (vlSelf->__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                                       >> 0x1cU)))
                                              : 0U)));
    vlSelf->__PVT___msbOH_T_5 = (0xfffffU & ((~ vlSelf->__PVT__rx_c) 
                                             | (0x7ffffU 
                                                & (vlSelf->__PVT___mask_T_31 
                                                   >> 1U))));
    vlSelf->__PVT__rx_z_2 = (0x1fffffU & (((IData)(vlSelf->__PVT__rxQ__DOT__valid_1)
                                            ? vlSelf->__PVT__rx_c
                                            : (0x7ffffU 
                                               & (vlSelf->__PVT__rx_c 
                                                  & (vlSelf->__PVT___mask_T_31 
                                                     >> 1U)))) 
                                          + ((IData)(vlSelf->__PVT__rxInc_sink_io_deq_valid)
                                              ? (0xfffffU 
                                                 & (vlSelf->__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                                    >> 8U))
                                              : 0U)));
    vlSelf->__PVT___msbOH_T_7 = (0xfffffU & ((~ vlSelf->__PVT__rx_d) 
                                             | (0x7ffffU 
                                                & (vlSelf->__PVT___mask_T_42 
                                                   >> 1U))));
    vlSelf->__PVT__rx_z_3 = (0x1fffffU & (((IData)(vlSelf->__PVT__rxQ__DOT__valid_1)
                                            ? vlSelf->__PVT__rx_d
                                            : (0x7ffffU 
                                               & (vlSelf->__PVT__rx_d 
                                                  & (vlSelf->__PVT___mask_T_42 
                                                     >> 1U)))) 
                                          + ((IData)(vlSelf->__PVT__rxInc_sink_io_deq_valid)
                                              ? (0xfffffU 
                                                 & ((vlSelf->__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                                     << 0xcU) 
                                                    | (vlSelf->__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U] 
                                                       >> 0x14U)))
                                              : 0U)));
    vlSelf->__PVT___msbOH_T_9 = (0xfffffU & ((~ vlSelf->__PVT__rx_e) 
                                             | (0x7ffffU 
                                                & (vlSelf->__PVT___mask_T_53 
                                                   >> 1U))));
    vlSelf->__PVT__rx_z_4 = (0x1fffffU & (((IData)(vlSelf->__PVT__rxQ__DOT__valid_1)
                                            ? vlSelf->__PVT__rx_e
                                            : (0x7ffffU 
                                               & (vlSelf->__PVT__rx_e 
                                                  & (vlSelf->__PVT___mask_T_53 
                                                     >> 1U)))) 
                                          + ((IData)(vlSelf->__PVT__rxInc_sink_io_deq_valid)
                                              ? (0xfffffU 
                                                 & vlSelf->__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])
                                              : 0U)));
    __PVT___readys_unready_T_3 = ((IData)(__PVT___readys_unready_T_1) 
                                  | (0x3ffU & ((IData)(__PVT___readys_unready_T_1) 
                                               >> 2U)));
    vlSelf->__PVT___msb_T_1 = ((0x1fU & (~ (vlSelf->__PVT___msbOH_T_1 
                                            >> 0xfU))) 
                               | (0xfffeU & ((~ vlSelf->__PVT___msbOH_T_1) 
                                             << 1U)));
    vlSelf->__PVT___msb_T_6 = ((0x1fU & (~ (vlSelf->__PVT___msbOH_T_3 
                                            >> 0xfU))) 
                               | (0xfffeU & ((~ vlSelf->__PVT___msbOH_T_3) 
                                             << 1U)));
    vlSelf->__PVT___msb_T_11 = ((0x1fU & (~ (vlSelf->__PVT___msbOH_T_5 
                                             >> 0xfU))) 
                                | (0xfffeU & ((~ vlSelf->__PVT___msbOH_T_5) 
                                              << 1U)));
    vlSelf->__PVT___msb_T_16 = ((0x1fU & (~ (vlSelf->__PVT___msbOH_T_7 
                                             >> 0xfU))) 
                                | (0xfffeU & ((~ vlSelf->__PVT___msbOH_T_7) 
                                              << 1U)));
    vlSelf->__PVT___msb_T_21 = ((0x1fU & (~ (vlSelf->__PVT___msbOH_T_9 
                                             >> 0xfU))) 
                                | (0xfffeU & ((~ vlSelf->__PVT___msbOH_T_9) 
                                              << 1U)));
    vlSelf->__PVT__readys_unready = ((0x7ffU & (((IData)(__PVT___readys_unready_T_3) 
                                                 >> 1U) 
                                                | (0x7fU 
                                                   & ((IData)(__PVT___readys_unready_T_3) 
                                                      >> 5U)))) 
                                     | ((IData)(vlSelf->__PVT__readys_mask) 
                                        << 6U));
    vlSelf->__PVT___msb_T_2 = (0xffU & (((IData)(vlSelf->__PVT___msb_T_1) 
                                         >> 8U) | (IData)(vlSelf->__PVT___msb_T_1)));
    vlSelf->__PVT___msb_T_7 = (0xffU & (((IData)(vlSelf->__PVT___msb_T_6) 
                                         >> 8U) | (IData)(vlSelf->__PVT___msb_T_6)));
    vlSelf->__PVT___msb_T_12 = (0xffU & (((IData)(vlSelf->__PVT___msb_T_11) 
                                          >> 8U) | (IData)(vlSelf->__PVT___msb_T_11)));
    vlSelf->__PVT___msb_T_17 = (0xffU & (((IData)(vlSelf->__PVT___msb_T_16) 
                                          >> 8U) | (IData)(vlSelf->__PVT___msb_T_16)));
    vlSelf->__PVT___msb_T_22 = (0xffU & (((IData)(vlSelf->__PVT___msb_T_21) 
                                          >> 8U) | (IData)(vlSelf->__PVT___msb_T_21)));
    vlSelf->__PVT___readys_readys_T_2 = (0x3fU & (((IData)(vlSelf->__PVT__readys_unready) 
                                                   >> 6U) 
                                                  & (IData)(vlSelf->__PVT__readys_unready)));
    vlSelf->__PVT___msb_T_3 = (0xfU & (((IData)(vlSelf->__PVT___msb_T_2) 
                                        >> 4U) | (IData)(vlSelf->__PVT___msb_T_2)));
    vlSelf->__PVT___msb_T_8 = (0xfU & (((IData)(vlSelf->__PVT___msb_T_7) 
                                        >> 4U) | (IData)(vlSelf->__PVT___msb_T_7)));
    vlSelf->__PVT___msb_T_13 = (0xfU & (((IData)(vlSelf->__PVT___msb_T_12) 
                                         >> 4U) | (IData)(vlSelf->__PVT___msb_T_12)));
    vlSelf->__PVT___msb_T_18 = (0xfU & (((IData)(vlSelf->__PVT___msb_T_17) 
                                         >> 4U) | (IData)(vlSelf->__PVT___msb_T_17)));
    vlSelf->__PVT___msb_T_23 = (0xfU & (((IData)(vlSelf->__PVT___msb_T_22) 
                                         >> 4U) | (IData)(vlSelf->__PVT___msb_T_22)));
    vlSelf->__PVT___readys_mask_T = ((~ (IData)(vlSelf->__PVT___readys_readys_T_2)) 
                                     & (IData)(vlSelf->__PVT__requests));
    vlSelf->__PVT__allowed = (0x3fU & ((IData)(vlSelf->__PVT__first)
                                        ? (~ (IData)(vlSelf->__PVT___readys_readys_T_2))
                                        : (IData)(vlSelf->__PVT__state)));
    vlSelf->__PVT__header_hi = (((((IData)((0U != (0x1fU 
                                                   & (~ 
                                                      (vlSelf->__PVT___msbOH_T_9 
                                                       >> 0xfU))))) 
                                   << 9U) << 0xaU) 
                                 | ((((IData)((0U != 
                                               (0xffU 
                                                & ((IData)(vlSelf->__PVT___msb_T_21) 
                                                   >> 8U)))) 
                                      << 8U) << 0xaU) 
                                    | ((((IData)((0U 
                                                  != 
                                                  (0xfU 
                                                   & ((IData)(vlSelf->__PVT___msb_T_22) 
                                                      >> 4U)))) 
                                         << 7U) << 0xaU) 
                                       | ((((IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelf->__PVT___msb_T_23) 
                                                         >> 2U)))) 
                                            << 6U) 
                                           << 0xaU) 
                                          | ((0x8000U 
                                              & (((IData)(vlSelf->__PVT___msb_T_23) 
                                                  << 0xcU) 
                                                 | ((IData)(vlSelf->__PVT___msb_T_23) 
                                                    << 0xeU))) 
                                             | ((((IData)(
                                                          (0U 
                                                           != 
                                                           (0x1fU 
                                                            & (~ 
                                                               (vlSelf->__PVT___msbOH_T_7 
                                                                >> 0xfU))))) 
                                                  << 4U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (0xffU 
                                                               & ((IData)(vlSelf->__PVT___msb_T_16) 
                                                                  >> 8U)))) 
                                                     << 3U) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xfU 
                                                                  & ((IData)(vlSelf->__PVT___msb_T_17) 
                                                                     >> 4U)))) 
                                                        << 2U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (3U 
                                                                     & ((IData)(vlSelf->__PVT___msb_T_18) 
                                                                        >> 2U)))) 
                                                           << 1U) 
                                                          | (IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0xaU 
                                                                      & (IData)(vlSelf->__PVT___msb_T_18)))))))) 
                                                << 0xaU)))))) 
                                | (((IData)((0U != 
                                             (0x1fU 
                                              & (~ 
                                                 (vlSelf->__PVT___msbOH_T_5 
                                                  >> 0xfU))))) 
                                    << 9U) | (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & ((IData)(vlSelf->__PVT___msb_T_11) 
                                                            >> 8U)))) 
                                               << 8U) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (0xfU 
                                                            & ((IData)(vlSelf->__PVT___msb_T_12) 
                                                               >> 4U)))) 
                                                  << 7U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (3U 
                                                               & ((IData)(vlSelf->__PVT___msb_T_13) 
                                                                  >> 2U)))) 
                                                     << 6U) 
                                                    | ((0x20U 
                                                        & (((IData)(vlSelf->__PVT___msb_T_13) 
                                                            << 2U) 
                                                           | ((IData)(vlSelf->__PVT___msb_T_13) 
                                                              << 4U))) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x1fU 
                                                                     & (~ 
                                                                        (vlSelf->__PVT___msbOH_T_3 
                                                                         >> 0xfU))))) 
                                                           << 4U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->__PVT___msb_T_6) 
                                                                           >> 8U)))) 
                                                              << 3U) 
                                                             | (((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0xfU 
                                                                           & ((IData)(vlSelf->__PVT___msb_T_7) 
                                                                              >> 4U)))) 
                                                                 << 2U) 
                                                                | (((IData)(
                                                                            (0U 
                                                                             != 
                                                                             (3U 
                                                                              & ((IData)(vlSelf->__PVT___msb_T_8) 
                                                                                >> 2U)))) 
                                                                    << 1U) 
                                                                   | (IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0xaU 
                                                                               & (IData)(vlSelf->__PVT___msb_T_8))))))))))))));
    __PVT___readys_mask_T_3 = ((IData)(vlSelf->__PVT___readys_mask_T) 
                               | (0x3eU & ((IData)(vlSelf->__PVT___readys_mask_T) 
                                           << 1U)));
    vlSelf->__PVT__grant = ((IData)(vlSelf->__PVT__first)
                             ? (IData)(vlSelf->__PVT___readys_mask_T)
                             : (IData)(vlSelf->__PVT__state));
    vlSelf->__PVT__ioX_cq__DOT__wen = ((1U & (IData)(vlSelf->__PVT__allowed))
                                        ? (IData)(vlSelf->__PVT__ioX_cq__DOT___wen_T_3)
                                        : ((IData)(__PVT__ioX_cq__DOT___wen_T) 
                                           & (~ (IData)(vlSelf->__PVT__ioX_cq__DOT__valid_0))));
    vlSelf->__PVT__ioX_cq_1__DOT__wen = ((2U & (IData)(vlSelf->__PVT__allowed))
                                          ? (IData)(vlSelf->__PVT__ioX_cq_1__DOT___wen_T_3)
                                          : ((IData)(__PVT__ioX_cq_1__DOT___wen_T) 
                                             & (~ (IData)(vlSelf->__PVT__ioX_cq_1__DOT__valid_0))));
    vlSelf->__PVT__ioX_cq_2__DOT__wen = ((4U & (IData)(vlSelf->__PVT__allowed))
                                          ? (IData)(vlSelf->__PVT__ioX_cq_2__DOT___wen_T_3)
                                          : ((IData)(__PVT__ioX_cq_2__DOT___wen_T) 
                                             & (~ (IData)(vlSelf->__PVT__ioX_cq_2__DOT__valid_0))));
    vlSelf->__PVT__ioX_cq_3__DOT__wen = ((8U & (IData)(vlSelf->__PVT__allowed))
                                          ? (IData)(vlSelf->__PVT__ioX_cq_3__DOT___wen_T_3)
                                          : ((IData)(__PVT__ioX_cq_3__DOT___wen_T) 
                                             & (~ (IData)(vlSelf->__PVT__ioX_cq_3__DOT__valid_0))));
    vlSelf->__PVT__ioX_cq_4__DOT__wen = ((0x10U & (IData)(vlSelf->__PVT__allowed))
                                          ? (IData)(vlSelf->__PVT__ioX_cq_4__DOT___wen_T_3)
                                          : ((IData)(__PVT__ioX_cq_4__DOT___wen_T) 
                                             & (~ (IData)(vlSelf->__PVT__ioX_cq_4__DOT__valid_0))));
    vlSelf->__PVT__ioX_cq__DOT__wen_1 = ((1U & (IData)(vlSelf->__PVT__allowed))
                                          ? (IData)(vlSelf->__PVT__ioX_cq__DOT___wen_T_10)
                                          : (((IData)(__PVT__ioX_cq__DOT___wen_T) 
                                              & (IData)(vlSelf->__PVT__ioX_cq__DOT__valid_0)) 
                                             & (~ (IData)(vlSelf->__PVT__ioX_cq__DOT__valid_1))));
    vlSelf->__PVT__ioX_cq_1__DOT__wen_1 = ((2U & (IData)(vlSelf->__PVT__allowed))
                                            ? (IData)(vlSelf->__PVT__ioX_cq_1__DOT___wen_T_10)
                                            : (((IData)(__PVT__ioX_cq_1__DOT___wen_T) 
                                                & (IData)(vlSelf->__PVT__ioX_cq_1__DOT__valid_0)) 
                                               & (~ (IData)(vlSelf->__PVT__ioX_cq_1__DOT__valid_1))));
    vlSelf->__PVT__ioX_cq_2__DOT__wen_1 = ((4U & (IData)(vlSelf->__PVT__allowed))
                                            ? (IData)(vlSelf->__PVT__ioX_cq_2__DOT___wen_T_10)
                                            : (((IData)(__PVT__ioX_cq_2__DOT___wen_T) 
                                                & (IData)(vlSelf->__PVT__ioX_cq_2__DOT__valid_0)) 
                                               & (~ (IData)(vlSelf->__PVT__ioX_cq_2__DOT__valid_1))));
    vlSelf->__PVT__ioX_cq_3__DOT__wen_1 = ((8U & (IData)(vlSelf->__PVT__allowed))
                                            ? (IData)(vlSelf->__PVT__ioX_cq_3__DOT___wen_T_10)
                                            : (((IData)(__PVT__ioX_cq_3__DOT___wen_T) 
                                                & (IData)(vlSelf->__PVT__ioX_cq_3__DOT__valid_0)) 
                                               & (~ (IData)(vlSelf->__PVT__ioX_cq_3__DOT__valid_1))));
    vlSelf->__PVT__ioX_cq_4__DOT__wen_1 = ((0x10U & (IData)(vlSelf->__PVT__allowed))
                                            ? (IData)(vlSelf->__PVT__ioX_cq_4__DOT___wen_T_10)
                                            : (((IData)(__PVT__ioX_cq_4__DOT___wen_T) 
                                                & (IData)(vlSelf->__PVT__ioX_cq_4__DOT__valid_0)) 
                                               & (~ (IData)(vlSelf->__PVT__ioX_cq_4__DOT__valid_1))));
    vlSelf->__PVT__rxQ_io_deq_ready = (((IData)(vlSelf->__PVT__allowed) 
                                        >> 5U) & (IData)(vlSelf->__PVT__allowReturn));
    vlSelf->__PVT__rxQ_io_enq_bits_data = (5U | ((vlSelf->__PVT__header_hi 
                                                  << 0xcU) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & (~ 
                                                                  (vlSelf->__PVT___msbOH_T_1 
                                                                   >> 0xfU))))) 
                                                     << 0xbU) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xffU 
                                                                  & ((IData)(vlSelf->__PVT___msb_T_1) 
                                                                     >> 8U)))) 
                                                        << 0xaU) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0xfU 
                                                                     & ((IData)(vlSelf->__PVT___msb_T_2) 
                                                                        >> 4U)))) 
                                                           << 9U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (3U 
                                                                        & ((IData)(vlSelf->__PVT___msb_T_3) 
                                                                           >> 2U)))) 
                                                              << 8U) 
                                                             | (0x80U 
                                                                & (((IData)(vlSelf->__PVT___msb_T_3) 
                                                                    << 4U) 
                                                                   | ((IData)(vlSelf->__PVT___msb_T_3) 
                                                                      << 6U)))))))));
    vlSelf->__PVT___readys_mask_T_6 = ((IData)(__PVT___readys_mask_T_3) 
                                       | (0x3cU & ((IData)(__PVT___readys_mask_T_3) 
                                                   << 2U)));
    vlSelf->__PVT___GEN_8 = (((IData)(vlSelf->__PVT__first)
                               ? (IData)(vlSelf->__PVT__rxQ__DOT__valid_0)
                               : (0U != (IData)(vlSelf->__PVT___send_T)))
                              ? (0U != ((IData)(vlSelf->__PVT__grant) 
                                        & (((IData)(vlSelf->__PVT__rxQ__DOT__elts_0_last) 
                                            << 5U) 
                                           | (((IData)(vlSelf->__PVT__ioX_cq_4__DOT__elts_0_last) 
                                               << 4U) 
                                              | (((IData)(vlSelf->__PVT__ioX_cq_3__DOT__elts_0_last) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__PVT__ioX_cq_2__DOT__elts_0_last) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__PVT__ioX_cq_1__DOT__elts_0_last) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__PVT__ioX_cq__DOT__elts_0_last))))))))
                              : (IData)(vlSelf->__PVT__first));
    if (vlSelf->__PVT__rxQ_io_deq_ready) {
        vlSelf->__PVT__rxQ__DOT__wen = (1U & (IData)(vlSelf->__PVT__rxQ__DOT___wen_T_3));
        vlSelf->__PVT__rxQ__DOT__wen_1 = vlSelf->__PVT__rxQ__DOT___wen_T_10;
    } else {
        vlSelf->__PVT__rxQ__DOT__wen = (1U & ((~ (IData)(vlSelf->__PVT__rxQ__DOT__valid_1)) 
                                              & (~ (IData)(vlSelf->__PVT__rxQ__DOT__valid_0))));
        vlSelf->__PVT__rxQ__DOT__wen_1 = (((~ (IData)(vlSelf->__PVT__rxQ__DOT__valid_1)) 
                                           & (IData)(vlSelf->__PVT__rxQ__DOT__valid_0)) 
                                          & (~ (IData)(vlSelf->__PVT__rxQ__DOT__valid_1)));
    }
}

void VysyxSoCFull_TX___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__12(VysyxSoCFull_TX* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TX___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__12\n"); );
    // Variables
    CData/*0:0*/ __PVT__qd_q__DOT___wen_T;
    // Body
    __PVT__qd_q__DOT___wen_T = ((~ (IData)(vlSelf->__PVT__qd_q__DOT__valid_1)) 
                                & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_valid));
    vlSelf->__PVT__qd_q__DOT___valid_0_T_6 = ((IData)(__PVT__qd_q__DOT___wen_T) 
                                              | (IData)(vlSelf->__PVT__qd_q__DOT__valid_0));
    vlSelf->__PVT__qd_q__DOT___valid_1_T_6 = (((IData)(__PVT__qd_q__DOT___wen_T) 
                                               & (IData)(vlSelf->__PVT__qd_q__DOT__valid_0)) 
                                              | (IData)(vlSelf->__PVT__qd_q__DOT__valid_1));
    vlSelf->__PVT__qd_q__DOT___wen_T_3 = ((IData)(vlSelf->__PVT__qd_q__DOT__valid_1) 
                                          | (IData)(__PVT__qd_q__DOT___wen_T));
    vlSelf->__PVT__qd_q__DOT___wen_T_10 = ((IData)(__PVT__qd_q__DOT___wen_T) 
                                           & (IData)(vlSelf->__PVT__qd_q__DOT__valid_1));
    if (vlSelf->__PVT__qd_q_io_deq_ready) {
        vlSelf->__PVT__qd_q__DOT__wen = vlSelf->__PVT__qd_q__DOT___wen_T_3;
        vlSelf->__PVT__qd_q__DOT__wen_1 = vlSelf->__PVT__qd_q__DOT___wen_T_10;
    } else {
        vlSelf->__PVT__qd_q__DOT__wen = ((IData)(__PVT__qd_q__DOT___wen_T) 
                                         & (~ (IData)(vlSelf->__PVT__qd_q__DOT__valid_0)));
        vlSelf->__PVT__qd_q__DOT__wen_1 = (((IData)(__PVT__qd_q__DOT___wen_T) 
                                            & (IData)(vlSelf->__PVT__qd_q__DOT__valid_0)) 
                                           & (~ (IData)(vlSelf->__PVT__qd_q__DOT__valid_1)));
    }
}

void VysyxSoCFull_TX___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__11(VysyxSoCFull_TX* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TX___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__11\n"); );
    // Variables
    CData/*5:0*/ __PVT___readys_mask_T_3;
    CData/*0:0*/ __PVT__ioX_cq__DOT___wen_T;
    CData/*0:0*/ __PVT__ioX_cq_1__DOT___wen_T;
    CData/*0:0*/ __PVT__ioX_cq_2__DOT___wen_T;
    CData/*0:0*/ __PVT__ioX_cq_3__DOT___wen_T;
    CData/*0:0*/ __PVT__ioX_cq_4__DOT___wen_T;
    SData/*11:0*/ __PVT___readys_unready_T_1;
    SData/*11:0*/ __PVT___readys_unready_T_3;
    IData/*19:0*/ __PVT___mask_T_1;
    IData/*19:0*/ __PVT___mask_T_3;
    IData/*19:0*/ __PVT___mask_T_5;
    IData/*19:0*/ __PVT___mask_T_7;
    IData/*19:0*/ __PVT___mask_T_12;
    IData/*19:0*/ __PVT___mask_T_14;
    IData/*19:0*/ __PVT___mask_T_16;
    IData/*19:0*/ __PVT___mask_T_18;
    IData/*19:0*/ __PVT___mask_T_23;
    IData/*19:0*/ __PVT___mask_T_25;
    IData/*19:0*/ __PVT___mask_T_27;
    IData/*19:0*/ __PVT___mask_T_29;
    IData/*19:0*/ __PVT___mask_T_34;
    IData/*19:0*/ __PVT___mask_T_36;
    IData/*19:0*/ __PVT___mask_T_38;
    IData/*19:0*/ __PVT___mask_T_40;
    IData/*19:0*/ __PVT___mask_T_45;
    IData/*19:0*/ __PVT___mask_T_47;
    IData/*19:0*/ __PVT___mask_T_49;
    IData/*19:0*/ __PVT___mask_T_51;
    // Body
    vlSelf->__PVT__forceXmit = (0U == (IData)(vlSelf->__PVT__xmit));
    vlSelf->__PVT___xmit_T_1 = (3U & ((IData)(vlSelf->__PVT__xmit) 
                                      - (IData)(1U)));
    vlSelf->__PVT__qb_q__DOT___valid_0_T_6 = vlSelf->__PVT__qb_q__DOT__valid_0;
    vlSelf->__PVT__qc_q__DOT___valid_0_T_6 = vlSelf->__PVT__qc_q__DOT__valid_0;
    vlSelf->__PVT__qe_q__DOT___valid_0_T_6 = vlSelf->__PVT__qe_q__DOT__valid_0;
    __PVT___mask_T_1 = (vlSelf->__PVT__rx_a | (0x7ffffU 
                                               & (vlSelf->__PVT__rx_a 
                                                  >> 1U)));
    __PVT___mask_T_12 = (vlSelf->__PVT__rx_b | (0x7ffffU 
                                                & (vlSelf->__PVT__rx_b 
                                                   >> 1U)));
    __PVT___mask_T_23 = (vlSelf->__PVT__rx_c | (0x7ffffU 
                                                & (vlSelf->__PVT__rx_c 
                                                   >> 1U)));
    __PVT___mask_T_34 = (vlSelf->__PVT__rx_d | (0x7ffffU 
                                                & (vlSelf->__PVT__rx_d 
                                                   >> 1U)));
    __PVT___mask_T_45 = (vlSelf->__PVT__rx_e | (0x7ffffU 
                                                & (vlSelf->__PVT__rx_e 
                                                   >> 1U)));
    vlSelf->__PVT__allowReturn = (1U & ((~ (((((IData)(vlSelf->__PVT__ioX_cq__DOT__valid_0) 
                                               | (IData)(vlSelf->__PVT__ioX_cq_1__DOT__valid_0)) 
                                              | (IData)(vlSelf->__PVT__ioX_cq_2__DOT__valid_0)) 
                                             | (IData)(vlSelf->__PVT__ioX_cq_3__DOT__valid_0)) 
                                            | (IData)(vlSelf->__PVT__ioX_cq_4__DOT__valid_0))) 
                                        | (0U == (IData)(vlSelf->__PVT__xmit))));
    vlSelf->__PVT__rxInc_sink_io_deq_valid = ((IData)(vlSelf->__PVT__rxInc_sink__DOT__valid_reg) 
                                              & (IData)(vlSelf->__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__txInc_sink_io_deq_valid = ((IData)(vlSelf->__PVT__txInc_sink__DOT__valid_reg) 
                                              & (IData)(vlSelf->__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__rxQ__DOT___valid_0_T_6 = (1U & (
                                                   (~ (IData)(vlSelf->__PVT__rxQ__DOT__valid_1)) 
                                                   | (IData)(vlSelf->__PVT__rxQ__DOT__valid_0)));
    vlSelf->__PVT__rxQ__DOT___valid_1_T_6 = ((IData)(vlSelf->__PVT__rxQ__DOT__valid_0) 
                                             | (IData)(vlSelf->__PVT__rxQ__DOT__valid_1));
    vlSelf->__PVT__rxQ__DOT___wen_T_3 = 1U;
    vlSelf->__PVT__rxQ__DOT___wen_T_10 = 0U;
    vlSelf->__PVT__ioX_allow_1 = (1U & ((~ (IData)(vlSelf->__PVT__ioX_first_1)) 
                                        | VL_LTES_III(1,21,21, 0U, 
                                                      (0x1fffffU 
                                                       & (vlSelf->__PVT__tx_b 
                                                          - (IData)(vlSelf->__PVT__qb_q__DOT__elts_0_beats))))));
    vlSelf->__PVT__ioX_allow_2 = (1U & ((~ (IData)(vlSelf->__PVT__ioX_first_2)) 
                                        | VL_LTES_III(1,21,21, 0U, 
                                                      (0x1fffffU 
                                                       & (vlSelf->__PVT__tx_c 
                                                          - (IData)(vlSelf->__PVT__qc_q__DOT__elts_0_beats))))));
    vlSelf->__PVT__ioX_allow_4 = (1U & ((~ (IData)(vlSelf->__PVT__ioX_first_4)) 
                                        | VL_LTES_III(1,21,21, 0U, 
                                                      (0x1fffffU 
                                                       & (vlSelf->__PVT__tx_e 
                                                          - (IData)(vlSelf->__PVT__qe_q__DOT__elts_0_beats))))));
    vlSelf->__PVT__ioX_allow = (1U & ((~ (IData)(vlSelf->__PVT__ioX_first)) 
                                      | VL_LTES_III(1,21,21, 0U, 
                                                    (0x1fffffU 
                                                     & (vlSelf->__PVT__tx_a 
                                                        - (IData)(vlSelf->__PVT__qa_q__DOT__elts_0_beats))))));
    vlSelf->__PVT__ioX_allow_3 = (1U & ((~ (IData)(vlSelf->__PVT__ioX_first_3)) 
                                        | VL_LTES_III(1,21,21, 0U, 
                                                      (0x1fffffU 
                                                       & (vlSelf->__PVT__tx_d 
                                                          - (IData)(vlSelf->__PVT__qd_q__DOT__elts_0_beats))))));
    vlSelf->__PVT__qb_q__DOT___valid_1_T_6 = vlSelf->__PVT__qb_q__DOT__valid_1;
    vlSelf->__PVT__qc_q__DOT___valid_1_T_6 = vlSelf->__PVT__qc_q__DOT__valid_1;
    vlSelf->__PVT__qe_q__DOT___valid_1_T_6 = vlSelf->__PVT__qe_q__DOT__valid_1;
    vlSelf->__PVT__rxInc_sink__DOT__sink_valid_0_reset 
        = ((IData)(vlSymsp->TOP.reset) | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_));
    __PVT___mask_T_3 = (__PVT___mask_T_1 | (0x3ffffU 
                                            & (__PVT___mask_T_1 
                                               >> 2U)));
    __PVT___mask_T_14 = (__PVT___mask_T_12 | (0x3ffffU 
                                              & (__PVT___mask_T_12 
                                                 >> 2U)));
    __PVT___mask_T_25 = (__PVT___mask_T_23 | (0x3ffffU 
                                              & (__PVT___mask_T_23 
                                                 >> 2U)));
    __PVT___mask_T_36 = (__PVT___mask_T_34 | (0x3ffffU 
                                              & (__PVT___mask_T_34 
                                                 >> 2U)));
    __PVT___mask_T_47 = (__PVT___mask_T_45 | (0x3ffffU 
                                              & (__PVT___mask_T_45 
                                                 >> 2U)));
    vlSelf->__PVT__f_valid = ((IData)(vlSelf->__PVT__rxQ__DOT__valid_0) 
                              & (IData)(vlSelf->__PVT__allowReturn));
    vlSelf->__PVT__rxInc_sink__DOT__ridx_incremented 
        = ((IData)(vlSelf->__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->__PVT__rxInc_sink__DOT__ridx_ridx_bin) 
              + (IData)(vlSelf->__PVT__rxInc_sink_io_deq_valid)));
    vlSelf->__PVT__txInc_sink__DOT__ridx_incremented 
        = ((IData)(vlSelf->__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->__PVT__txInc_sink__DOT__ridx_ridx_bin) 
              + (IData)(vlSelf->__PVT__txInc_sink_io_deq_valid)));
    vlSelf->__PVT__qb_q_io_deq_ready = ((~ (IData)(vlSelf->__PVT__ioX_cq_1__DOT__valid_1)) 
                                        & (IData)(vlSelf->__PVT__ioX_allow_1));
    __PVT__ioX_cq_1__DOT___wen_T = ((~ (IData)(vlSelf->__PVT__ioX_cq_1__DOT__valid_1)) 
                                    & ((IData)(vlSelf->__PVT__qb_q__DOT__valid_0) 
                                       & (IData)(vlSelf->__PVT__ioX_allow_1)));
    vlSelf->__PVT__qc_q_io_deq_ready = ((~ (IData)(vlSelf->__PVT__ioX_cq_2__DOT__valid_1)) 
                                        & (IData)(vlSelf->__PVT__ioX_allow_2));
    __PVT__ioX_cq_2__DOT___wen_T = ((~ (IData)(vlSelf->__PVT__ioX_cq_2__DOT__valid_1)) 
                                    & ((IData)(vlSelf->__PVT__qc_q__DOT__valid_0) 
                                       & (IData)(vlSelf->__PVT__ioX_allow_2)));
    vlSelf->__PVT__qe_q_io_deq_ready = ((~ (IData)(vlSelf->__PVT__ioX_cq_4__DOT__valid_1)) 
                                        & (IData)(vlSelf->__PVT__ioX_allow_4));
    __PVT__ioX_cq_4__DOT___wen_T = ((~ (IData)(vlSelf->__PVT__ioX_cq_4__DOT__valid_1)) 
                                    & ((IData)(vlSelf->__PVT__qe_q__DOT__valid_0) 
                                       & (IData)(vlSelf->__PVT__ioX_allow_4)));
    vlSelf->__PVT__qa_q_io_deq_ready = ((~ (IData)(vlSelf->__PVT__ioX_cq__DOT__valid_1)) 
                                        & (IData)(vlSelf->__PVT__ioX_allow));
    __PVT__ioX_cq__DOT___wen_T = ((~ (IData)(vlSelf->__PVT__ioX_cq__DOT__valid_1)) 
                                  & ((IData)(vlSelf->__PVT__qa_q__DOT__valid_0) 
                                     & (IData)(vlSelf->__PVT__ioX_allow)));
    vlSelf->__PVT__qd_q_io_deq_ready = ((~ (IData)(vlSelf->__PVT__ioX_cq_3__DOT__valid_1)) 
                                        & (IData)(vlSelf->__PVT__ioX_allow_3));
    __PVT__ioX_cq_3__DOT___wen_T = ((~ (IData)(vlSelf->__PVT__ioX_cq_3__DOT__valid_1)) 
                                    & ((IData)(vlSelf->__PVT__qd_q__DOT__valid_0) 
                                       & (IData)(vlSelf->__PVT__ioX_allow_3)));
    __PVT___mask_T_5 = (__PVT___mask_T_3 | (0xffffU 
                                            & (__PVT___mask_T_3 
                                               >> 4U)));
    __PVT___mask_T_16 = (__PVT___mask_T_14 | (0xffffU 
                                              & (__PVT___mask_T_14 
                                                 >> 4U)));
    __PVT___mask_T_27 = (__PVT___mask_T_25 | (0xffffU 
                                              & (__PVT___mask_T_25 
                                                 >> 4U)));
    __PVT___mask_T_38 = (__PVT___mask_T_36 | (0xffffU 
                                              & (__PVT___mask_T_36 
                                                 >> 4U)));
    __PVT___mask_T_49 = (__PVT___mask_T_47 | (0xffffU 
                                              & (__PVT___mask_T_47 
                                                 >> 4U)));
    vlSelf->__PVT__requests = (((IData)(vlSelf->__PVT__f_valid) 
                                << 5U) | (((IData)(vlSelf->__PVT__ioX_cq_4__DOT__valid_0) 
                                           << 4U) | 
                                          (((IData)(vlSelf->__PVT__ioX_cq_3__DOT__valid_0) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__ioX_cq_2__DOT__valid_0) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__ioX_cq_1__DOT__valid_0) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__ioX_cq__DOT__valid_0))))));
    vlSelf->__PVT__qb_q__DOT__wen = ((IData)(vlSelf->__PVT__qb_q_io_deq_ready) 
                                     & (IData)(vlSelf->__PVT__qb_q__DOT__valid_1));
    vlSelf->__PVT___ioX_first_T_1 = ((IData)(vlSelf->__PVT__qb_q_io_deq_ready) 
                                     & (IData)(vlSelf->__PVT__qb_q__DOT__valid_0));
    vlSelf->__PVT__ioX_cq_1__DOT___valid_0_T_6 = ((IData)(__PVT__ioX_cq_1__DOT___wen_T) 
                                                  | (IData)(vlSelf->__PVT__ioX_cq_1__DOT__valid_0));
    vlSelf->__PVT__ioX_cq_1__DOT___valid_1_T_6 = (((IData)(__PVT__ioX_cq_1__DOT___wen_T) 
                                                   & (IData)(vlSelf->__PVT__ioX_cq_1__DOT__valid_0)) 
                                                  | (IData)(vlSelf->__PVT__ioX_cq_1__DOT__valid_1));
    vlSelf->__PVT__ioX_cq_1__DOT___wen_T_3 = ((IData)(vlSelf->__PVT__ioX_cq_1__DOT__valid_1) 
                                              | (IData)(__PVT__ioX_cq_1__DOT___wen_T));
    vlSelf->__PVT__ioX_cq_1__DOT___wen_T_10 = ((IData)(__PVT__ioX_cq_1__DOT___wen_T) 
                                               & (IData)(vlSelf->__PVT__ioX_cq_1__DOT__valid_1));
    vlSelf->__PVT__qc_q__DOT__wen = ((IData)(vlSelf->__PVT__qc_q_io_deq_ready) 
                                     & (IData)(vlSelf->__PVT__qc_q__DOT__valid_1));
    vlSelf->__PVT___ioX_first_T_2 = ((IData)(vlSelf->__PVT__qc_q_io_deq_ready) 
                                     & (IData)(vlSelf->__PVT__qc_q__DOT__valid_0));
    vlSelf->__PVT__ioX_cq_2__DOT___valid_0_T_6 = ((IData)(__PVT__ioX_cq_2__DOT___wen_T) 
                                                  | (IData)(vlSelf->__PVT__ioX_cq_2__DOT__valid_0));
    vlSelf->__PVT__ioX_cq_2__DOT___valid_1_T_6 = (((IData)(__PVT__ioX_cq_2__DOT___wen_T) 
                                                   & (IData)(vlSelf->__PVT__ioX_cq_2__DOT__valid_0)) 
                                                  | (IData)(vlSelf->__PVT__ioX_cq_2__DOT__valid_1));
    vlSelf->__PVT__ioX_cq_2__DOT___wen_T_3 = ((IData)(vlSelf->__PVT__ioX_cq_2__DOT__valid_1) 
                                              | (IData)(__PVT__ioX_cq_2__DOT___wen_T));
    vlSelf->__PVT__ioX_cq_2__DOT___wen_T_10 = ((IData)(__PVT__ioX_cq_2__DOT___wen_T) 
                                               & (IData)(vlSelf->__PVT__ioX_cq_2__DOT__valid_1));
    vlSelf->__PVT__qe_q__DOT__wen = ((IData)(vlSelf->__PVT__qe_q_io_deq_ready) 
                                     & (IData)(vlSelf->__PVT__qe_q__DOT__valid_1));
    vlSelf->__PVT___ioX_first_T_4 = ((IData)(vlSelf->__PVT__qe_q_io_deq_ready) 
                                     & (IData)(vlSelf->__PVT__qe_q__DOT__valid_0));
    vlSelf->__PVT__ioX_cq_4__DOT___valid_0_T_6 = ((IData)(__PVT__ioX_cq_4__DOT___wen_T) 
                                                  | (IData)(vlSelf->__PVT__ioX_cq_4__DOT__valid_0));
    vlSelf->__PVT__ioX_cq_4__DOT___valid_1_T_6 = (((IData)(__PVT__ioX_cq_4__DOT___wen_T) 
                                                   & (IData)(vlSelf->__PVT__ioX_cq_4__DOT__valid_0)) 
                                                  | (IData)(vlSelf->__PVT__ioX_cq_4__DOT__valid_1));
    vlSelf->__PVT__ioX_cq_4__DOT___wen_T_3 = ((IData)(vlSelf->__PVT__ioX_cq_4__DOT__valid_1) 
                                              | (IData)(__PVT__ioX_cq_4__DOT___wen_T));
    vlSelf->__PVT__ioX_cq_4__DOT___wen_T_10 = ((IData)(__PVT__ioX_cq_4__DOT___wen_T) 
                                               & (IData)(vlSelf->__PVT__ioX_cq_4__DOT__valid_1));
    vlSelf->__PVT___ioX_first_T = ((IData)(vlSelf->__PVT__qa_q_io_deq_ready) 
                                   & (IData)(vlSelf->__PVT__qa_q__DOT__valid_0));
    vlSelf->__PVT__ioX_cq__DOT___valid_0_T_6 = ((IData)(__PVT__ioX_cq__DOT___wen_T) 
                                                | (IData)(vlSelf->__PVT__ioX_cq__DOT__valid_0));
    vlSelf->__PVT__ioX_cq__DOT___valid_1_T_6 = (((IData)(__PVT__ioX_cq__DOT___wen_T) 
                                                 & (IData)(vlSelf->__PVT__ioX_cq__DOT__valid_0)) 
                                                | (IData)(vlSelf->__PVT__ioX_cq__DOT__valid_1));
    vlSelf->__PVT__ioX_cq__DOT___wen_T_3 = ((IData)(vlSelf->__PVT__ioX_cq__DOT__valid_1) 
                                            | (IData)(__PVT__ioX_cq__DOT___wen_T));
    vlSelf->__PVT__ioX_cq__DOT___wen_T_10 = ((IData)(__PVT__ioX_cq__DOT___wen_T) 
                                             & (IData)(vlSelf->__PVT__ioX_cq__DOT__valid_1));
    vlSelf->__PVT___ioX_first_T_3 = ((IData)(vlSelf->__PVT__qd_q_io_deq_ready) 
                                     & (IData)(vlSelf->__PVT__qd_q__DOT__valid_0));
    vlSelf->__PVT__ioX_cq_3__DOT___valid_0_T_6 = ((IData)(__PVT__ioX_cq_3__DOT___wen_T) 
                                                  | (IData)(vlSelf->__PVT__ioX_cq_3__DOT__valid_0));
    vlSelf->__PVT__ioX_cq_3__DOT___valid_1_T_6 = (((IData)(__PVT__ioX_cq_3__DOT___wen_T) 
                                                   & (IData)(vlSelf->__PVT__ioX_cq_3__DOT__valid_0)) 
                                                  | (IData)(vlSelf->__PVT__ioX_cq_3__DOT__valid_1));
    vlSelf->__PVT__ioX_cq_3__DOT___wen_T_3 = ((IData)(vlSelf->__PVT__ioX_cq_3__DOT__valid_1) 
                                              | (IData)(__PVT__ioX_cq_3__DOT___wen_T));
    vlSelf->__PVT__ioX_cq_3__DOT___wen_T_10 = ((IData)(__PVT__ioX_cq_3__DOT___wen_T) 
                                               & (IData)(vlSelf->__PVT__ioX_cq_3__DOT__valid_1));
    __PVT___mask_T_7 = (__PVT___mask_T_5 | (0xfffU 
                                            & (__PVT___mask_T_5 
                                               >> 8U)));
    __PVT___mask_T_18 = (__PVT___mask_T_16 | (0xfffU 
                                              & (__PVT___mask_T_16 
                                                 >> 8U)));
    __PVT___mask_T_29 = (__PVT___mask_T_27 | (0xfffU 
                                              & (__PVT___mask_T_27 
                                                 >> 8U)));
    __PVT___mask_T_40 = (__PVT___mask_T_38 | (0xfffU 
                                              & (__PVT___mask_T_38 
                                                 >> 8U)));
    __PVT___mask_T_51 = (__PVT___mask_T_49 | (0xfffU 
                                              & (__PVT___mask_T_49 
                                                 >> 8U)));
    vlSelf->__PVT___send_T = ((IData)(vlSelf->__PVT__state) 
                              & (IData)(vlSelf->__PVT__requests));
    vlSelf->__PVT__readys_filter = ((((IData)(vlSelf->__PVT__requests) 
                                      & (~ (IData)(vlSelf->__PVT__readys_mask))) 
                                     << 6U) | (((IData)(vlSelf->__PVT__f_valid) 
                                                << 5U) 
                                               | (((IData)(vlSelf->__PVT__ioX_cq_4__DOT__valid_0) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->__PVT__ioX_cq_3__DOT__valid_0) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->__PVT__ioX_cq_2__DOT__valid_0) 
                                                         << 2U) 
                                                        | (((IData)(vlSelf->__PVT__ioX_cq_1__DOT__valid_0) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->__PVT__ioX_cq__DOT__valid_0)))))));
    vlSelf->__PVT___GEN_1 = ((IData)(vlSelf->__PVT___ioX_first_T_1)
                              ? (IData)(vlSelf->__PVT__qb_q__DOT__elts_0_last)
                              : (IData)(vlSelf->__PVT__ioX_first_1));
    vlSelf->__PVT___ioX_tx_bT_6 = (0x1fffffU & ((((IData)(vlSelf->__PVT___ioX_first_T_1) 
                                                  & (IData)(vlSelf->__PVT__ioX_first_1))
                                                  ? 
                                                 (vlSelf->__PVT__tx_b 
                                                  - (IData)(vlSelf->__PVT__qb_q__DOT__elts_0_beats))
                                                  : vlSelf->__PVT__tx_b) 
                                                + ((IData)(vlSelf->__PVT__txInc_sink_io_deq_valid)
                                                    ? 
                                                   (0xfffffU 
                                                    & ((vlSelf->__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                        << 4U) 
                                                       | (vlSelf->__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                                          >> 0x1cU)))
                                                    : 0U)));
    vlSelf->__PVT___GEN_2 = ((IData)(vlSelf->__PVT___ioX_first_T_2)
                              ? (IData)(vlSelf->__PVT__qc_q__DOT__elts_0_last)
                              : (IData)(vlSelf->__PVT__ioX_first_2));
    vlSelf->__PVT___ioX_tx_c_T_6 = (0x1fffffU & ((((IData)(vlSelf->__PVT___ioX_first_T_2) 
                                                   & (IData)(vlSelf->__PVT__ioX_first_2))
                                                   ? 
                                                  (vlSelf->__PVT__tx_c 
                                                   - (IData)(vlSelf->__PVT__qc_q__DOT__elts_0_beats))
                                                   : vlSelf->__PVT__tx_c) 
                                                 + 
                                                 ((IData)(vlSelf->__PVT__txInc_sink_io_deq_valid)
                                                   ? 
                                                  (0xfffffU 
                                                   & (vlSelf->__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                                      >> 8U))
                                                   : 0U)));
    vlSelf->__PVT___GEN_4 = ((IData)(vlSelf->__PVT___ioX_first_T_4)
                              ? (IData)(vlSelf->__PVT__qe_q__DOT__elts_0_last)
                              : (IData)(vlSelf->__PVT__ioX_first_4));
    vlSelf->__PVT___ioX_tx_e_T_6 = (0x1fffffU & ((((IData)(vlSelf->__PVT___ioX_first_T_4) 
                                                   & (IData)(vlSelf->__PVT__ioX_first_4))
                                                   ? 
                                                  (vlSelf->__PVT__tx_e 
                                                   - (IData)(vlSelf->__PVT__qe_q__DOT__elts_0_beats))
                                                   : vlSelf->__PVT__tx_e) 
                                                 + 
                                                 ((IData)(vlSelf->__PVT__txInc_sink_io_deq_valid)
                                                   ? 
                                                  (0xfffffU 
                                                   & vlSelf->__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])
                                                   : 0U)));
    vlSelf->__PVT___GEN_0 = ((IData)(vlSelf->__PVT___ioX_first_T)
                              ? (IData)(vlSelf->__PVT__qa_q__DOT__elts_0_last)
                              : (IData)(vlSelf->__PVT__ioX_first));
    vlSelf->__PVT___ioX_tx_a_T_6 = (0x1fffffU & ((((IData)(vlSelf->__PVT___ioX_first_T) 
                                                   & (IData)(vlSelf->__PVT__ioX_first))
                                                   ? 
                                                  (vlSelf->__PVT__tx_a 
                                                   - (IData)(vlSelf->__PVT__qa_q__DOT__elts_0_beats))
                                                   : vlSelf->__PVT__tx_a) 
                                                 + 
                                                 ((IData)(vlSelf->__PVT__txInc_sink_io_deq_valid)
                                                   ? 
                                                  (0xfffffU 
                                                   & ((vlSelf->__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                       << 0x10U) 
                                                      | (vlSelf->__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                         >> 0x10U)))
                                                   : 0U)));
    vlSelf->__PVT___GEN_3 = ((IData)(vlSelf->__PVT___ioX_first_T_3)
                              ? (IData)(vlSelf->__PVT__qd_q__DOT__elts_0_last)
                              : (IData)(vlSelf->__PVT__ioX_first_3));
    vlSelf->__PVT___ioX_tx_d_T_6 = (0x1fffffU & ((((IData)(vlSelf->__PVT___ioX_first_T_3) 
                                                   & (IData)(vlSelf->__PVT__ioX_first_3))
                                                   ? 
                                                  (vlSelf->__PVT__tx_d 
                                                   - (IData)(vlSelf->__PVT__qd_q__DOT__elts_0_beats))
                                                   : vlSelf->__PVT__tx_d) 
                                                 + 
                                                 ((IData)(vlSelf->__PVT__txInc_sink_io_deq_valid)
                                                   ? 
                                                  (0xfffffU 
                                                   & ((vlSelf->__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                                       << 0xcU) 
                                                      | (vlSelf->__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U] 
                                                         >> 0x14U)))
                                                   : 0U)));
    vlSelf->__PVT___mask_T_9 = (__PVT___mask_T_7 | 
                                (0xfU & (__PVT___mask_T_7 
                                         >> 0x10U)));
    vlSelf->__PVT___mask_T_20 = (__PVT___mask_T_18 
                                 | (0xfU & (__PVT___mask_T_18 
                                            >> 0x10U)));
    vlSelf->__PVT___mask_T_31 = (__PVT___mask_T_29 
                                 | (0xfU & (__PVT___mask_T_29 
                                            >> 0x10U)));
    vlSelf->__PVT___mask_T_42 = (__PVT___mask_T_40 
                                 | (0xfU & (__PVT___mask_T_40 
                                            >> 0x10U)));
    vlSelf->__PVT___mask_T_53 = (__PVT___mask_T_51 
                                 | (0xfU & (__PVT___mask_T_51 
                                            >> 0x10U)));
    __PVT___readys_unready_T_1 = ((IData)(vlSelf->__PVT__readys_filter) 
                                  | (0x7ffU & ((IData)(vlSelf->__PVT__readys_filter) 
                                               >> 1U)));
    vlSelf->__PVT___msbOH_T_1 = (0xfffffU & ((~ vlSelf->__PVT__rx_a) 
                                             | (0x7ffffU 
                                                & (vlSelf->__PVT___mask_T_9 
                                                   >> 1U))));
    vlSelf->__PVT__rx_z = (0x1fffffU & (((IData)(vlSelf->__PVT__rxQ__DOT__valid_1)
                                          ? vlSelf->__PVT__rx_a
                                          : (0x7ffffU 
                                             & (vlSelf->__PVT__rx_a 
                                                & (vlSelf->__PVT___mask_T_9 
                                                   >> 1U)))) 
                                        + ((IData)(vlSelf->__PVT__rxInc_sink_io_deq_valid)
                                            ? (0xfffffU 
                                               & ((vlSelf->__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                   << 0x10U) 
                                                  | (vlSelf->__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                     >> 0x10U)))
                                            : 0U)));
    vlSelf->__PVT___msbOH_T_3 = (0xfffffU & ((~ vlSelf->__PVT__rx_b) 
                                             | (0x7ffffU 
                                                & (vlSelf->__PVT___mask_T_20 
                                                   >> 1U))));
    vlSelf->__PVT__rx_z_1 = (0x1fffffU & (((IData)(vlSelf->__PVT__rxQ__DOT__valid_1)
                                            ? vlSelf->__PVT__rx_b
                                            : (0x7ffffU 
                                               & (vlSelf->__PVT__rx_b 
                                                  & (vlSelf->__PVT___mask_T_20 
                                                     >> 1U)))) 
                                          + ((IData)(vlSelf->__PVT__rxInc_sink_io_deq_valid)
                                              ? (0xfffffU 
                                                 & ((vlSelf->__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                     << 4U) 
                                                    | (vlSelf->__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                                       >> 0x1cU)))
                                              : 0U)));
    vlSelf->__PVT___msbOH_T_5 = (0xfffffU & ((~ vlSelf->__PVT__rx_c) 
                                             | (0x7ffffU 
                                                & (vlSelf->__PVT___mask_T_31 
                                                   >> 1U))));
    vlSelf->__PVT__rx_z_2 = (0x1fffffU & (((IData)(vlSelf->__PVT__rxQ__DOT__valid_1)
                                            ? vlSelf->__PVT__rx_c
                                            : (0x7ffffU 
                                               & (vlSelf->__PVT__rx_c 
                                                  & (vlSelf->__PVT___mask_T_31 
                                                     >> 1U)))) 
                                          + ((IData)(vlSelf->__PVT__rxInc_sink_io_deq_valid)
                                              ? (0xfffffU 
                                                 & (vlSelf->__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                                    >> 8U))
                                              : 0U)));
    vlSelf->__PVT___msbOH_T_7 = (0xfffffU & ((~ vlSelf->__PVT__rx_d) 
                                             | (0x7ffffU 
                                                & (vlSelf->__PVT___mask_T_42 
                                                   >> 1U))));
    vlSelf->__PVT__rx_z_3 = (0x1fffffU & (((IData)(vlSelf->__PVT__rxQ__DOT__valid_1)
                                            ? vlSelf->__PVT__rx_d
                                            : (0x7ffffU 
                                               & (vlSelf->__PVT__rx_d 
                                                  & (vlSelf->__PVT___mask_T_42 
                                                     >> 1U)))) 
                                          + ((IData)(vlSelf->__PVT__rxInc_sink_io_deq_valid)
                                              ? (0xfffffU 
                                                 & ((vlSelf->__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                                     << 0xcU) 
                                                    | (vlSelf->__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U] 
                                                       >> 0x14U)))
                                              : 0U)));
    vlSelf->__PVT___msbOH_T_9 = (0xfffffU & ((~ vlSelf->__PVT__rx_e) 
                                             | (0x7ffffU 
                                                & (vlSelf->__PVT___mask_T_53 
                                                   >> 1U))));
    vlSelf->__PVT__rx_z_4 = (0x1fffffU & (((IData)(vlSelf->__PVT__rxQ__DOT__valid_1)
                                            ? vlSelf->__PVT__rx_e
                                            : (0x7ffffU 
                                               & (vlSelf->__PVT__rx_e 
                                                  & (vlSelf->__PVT___mask_T_53 
                                                     >> 1U)))) 
                                          + ((IData)(vlSelf->__PVT__rxInc_sink_io_deq_valid)
                                              ? (0xfffffU 
                                                 & vlSelf->__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])
                                              : 0U)));
    __PVT___readys_unready_T_3 = ((IData)(__PVT___readys_unready_T_1) 
                                  | (0x3ffU & ((IData)(__PVT___readys_unready_T_1) 
                                               >> 2U)));
    vlSelf->__PVT___msb_T_1 = ((0x1fU & (~ (vlSelf->__PVT___msbOH_T_1 
                                            >> 0xfU))) 
                               | (0xfffeU & ((~ vlSelf->__PVT___msbOH_T_1) 
                                             << 1U)));
    vlSelf->__PVT___msb_T_6 = ((0x1fU & (~ (vlSelf->__PVT___msbOH_T_3 
                                            >> 0xfU))) 
                               | (0xfffeU & ((~ vlSelf->__PVT___msbOH_T_3) 
                                             << 1U)));
    vlSelf->__PVT___msb_T_11 = ((0x1fU & (~ (vlSelf->__PVT___msbOH_T_5 
                                             >> 0xfU))) 
                                | (0xfffeU & ((~ vlSelf->__PVT___msbOH_T_5) 
                                              << 1U)));
    vlSelf->__PVT___msb_T_16 = ((0x1fU & (~ (vlSelf->__PVT___msbOH_T_7 
                                             >> 0xfU))) 
                                | (0xfffeU & ((~ vlSelf->__PVT___msbOH_T_7) 
                                              << 1U)));
    vlSelf->__PVT___msb_T_21 = ((0x1fU & (~ (vlSelf->__PVT___msbOH_T_9 
                                             >> 0xfU))) 
                                | (0xfffeU & ((~ vlSelf->__PVT___msbOH_T_9) 
                                              << 1U)));
    vlSelf->__PVT__readys_unready = ((0x7ffU & (((IData)(__PVT___readys_unready_T_3) 
                                                 >> 1U) 
                                                | (0x7fU 
                                                   & ((IData)(__PVT___readys_unready_T_3) 
                                                      >> 5U)))) 
                                     | ((IData)(vlSelf->__PVT__readys_mask) 
                                        << 6U));
    vlSelf->__PVT___msb_T_2 = (0xffU & (((IData)(vlSelf->__PVT___msb_T_1) 
                                         >> 8U) | (IData)(vlSelf->__PVT___msb_T_1)));
    vlSelf->__PVT___msb_T_7 = (0xffU & (((IData)(vlSelf->__PVT___msb_T_6) 
                                         >> 8U) | (IData)(vlSelf->__PVT___msb_T_6)));
    vlSelf->__PVT___msb_T_12 = (0xffU & (((IData)(vlSelf->__PVT___msb_T_11) 
                                          >> 8U) | (IData)(vlSelf->__PVT___msb_T_11)));
    vlSelf->__PVT___msb_T_17 = (0xffU & (((IData)(vlSelf->__PVT___msb_T_16) 
                                          >> 8U) | (IData)(vlSelf->__PVT___msb_T_16)));
    vlSelf->__PVT___msb_T_22 = (0xffU & (((IData)(vlSelf->__PVT___msb_T_21) 
                                          >> 8U) | (IData)(vlSelf->__PVT___msb_T_21)));
    vlSelf->__PVT___readys_readys_T_2 = (0x3fU & (((IData)(vlSelf->__PVT__readys_unready) 
                                                   >> 6U) 
                                                  & (IData)(vlSelf->__PVT__readys_unready)));
    vlSelf->__PVT___msb_T_3 = (0xfU & (((IData)(vlSelf->__PVT___msb_T_2) 
                                        >> 4U) | (IData)(vlSelf->__PVT___msb_T_2)));
    vlSelf->__PVT___msb_T_8 = (0xfU & (((IData)(vlSelf->__PVT___msb_T_7) 
                                        >> 4U) | (IData)(vlSelf->__PVT___msb_T_7)));
    vlSelf->__PVT___msb_T_13 = (0xfU & (((IData)(vlSelf->__PVT___msb_T_12) 
                                         >> 4U) | (IData)(vlSelf->__PVT___msb_T_12)));
    vlSelf->__PVT___msb_T_18 = (0xfU & (((IData)(vlSelf->__PVT___msb_T_17) 
                                         >> 4U) | (IData)(vlSelf->__PVT___msb_T_17)));
    vlSelf->__PVT___msb_T_23 = (0xfU & (((IData)(vlSelf->__PVT___msb_T_22) 
                                         >> 4U) | (IData)(vlSelf->__PVT___msb_T_22)));
    vlSelf->__PVT___readys_mask_T = ((~ (IData)(vlSelf->__PVT___readys_readys_T_2)) 
                                     & (IData)(vlSelf->__PVT__requests));
    vlSelf->__PVT__allowed = (0x3fU & ((IData)(vlSelf->__PVT__first)
                                        ? (~ (IData)(vlSelf->__PVT___readys_readys_T_2))
                                        : (IData)(vlSelf->__PVT__state)));
    vlSelf->__PVT__header_hi = (((((IData)((0U != (0x1fU 
                                                   & (~ 
                                                      (vlSelf->__PVT___msbOH_T_9 
                                                       >> 0xfU))))) 
                                   << 9U) << 0xaU) 
                                 | ((((IData)((0U != 
                                               (0xffU 
                                                & ((IData)(vlSelf->__PVT___msb_T_21) 
                                                   >> 8U)))) 
                                      << 8U) << 0xaU) 
                                    | ((((IData)((0U 
                                                  != 
                                                  (0xfU 
                                                   & ((IData)(vlSelf->__PVT___msb_T_22) 
                                                      >> 4U)))) 
                                         << 7U) << 0xaU) 
                                       | ((((IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelf->__PVT___msb_T_23) 
                                                         >> 2U)))) 
                                            << 6U) 
                                           << 0xaU) 
                                          | ((0x8000U 
                                              & (((IData)(vlSelf->__PVT___msb_T_23) 
                                                  << 0xcU) 
                                                 | ((IData)(vlSelf->__PVT___msb_T_23) 
                                                    << 0xeU))) 
                                             | ((((IData)(
                                                          (0U 
                                                           != 
                                                           (0x1fU 
                                                            & (~ 
                                                               (vlSelf->__PVT___msbOH_T_7 
                                                                >> 0xfU))))) 
                                                  << 4U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (0xffU 
                                                               & ((IData)(vlSelf->__PVT___msb_T_16) 
                                                                  >> 8U)))) 
                                                     << 3U) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xfU 
                                                                  & ((IData)(vlSelf->__PVT___msb_T_17) 
                                                                     >> 4U)))) 
                                                        << 2U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (3U 
                                                                     & ((IData)(vlSelf->__PVT___msb_T_18) 
                                                                        >> 2U)))) 
                                                           << 1U) 
                                                          | (IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0xaU 
                                                                      & (IData)(vlSelf->__PVT___msb_T_18)))))))) 
                                                << 0xaU)))))) 
                                | (((IData)((0U != 
                                             (0x1fU 
                                              & (~ 
                                                 (vlSelf->__PVT___msbOH_T_5 
                                                  >> 0xfU))))) 
                                    << 9U) | (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & ((IData)(vlSelf->__PVT___msb_T_11) 
                                                            >> 8U)))) 
                                               << 8U) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (0xfU 
                                                            & ((IData)(vlSelf->__PVT___msb_T_12) 
                                                               >> 4U)))) 
                                                  << 7U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (3U 
                                                               & ((IData)(vlSelf->__PVT___msb_T_13) 
                                                                  >> 2U)))) 
                                                     << 6U) 
                                                    | ((0x20U 
                                                        & (((IData)(vlSelf->__PVT___msb_T_13) 
                                                            << 2U) 
                                                           | ((IData)(vlSelf->__PVT___msb_T_13) 
                                                              << 4U))) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x1fU 
                                                                     & (~ 
                                                                        (vlSelf->__PVT___msbOH_T_3 
                                                                         >> 0xfU))))) 
                                                           << 4U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->__PVT___msb_T_6) 
                                                                           >> 8U)))) 
                                                              << 3U) 
                                                             | (((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0xfU 
                                                                           & ((IData)(vlSelf->__PVT___msb_T_7) 
                                                                              >> 4U)))) 
                                                                 << 2U) 
                                                                | (((IData)(
                                                                            (0U 
                                                                             != 
                                                                             (3U 
                                                                              & ((IData)(vlSelf->__PVT___msb_T_8) 
                                                                                >> 2U)))) 
                                                                    << 1U) 
                                                                   | (IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0xaU 
                                                                               & (IData)(vlSelf->__PVT___msb_T_8))))))))))))));
    __PVT___readys_mask_T_3 = ((IData)(vlSelf->__PVT___readys_mask_T) 
                               | (0x3eU & ((IData)(vlSelf->__PVT___readys_mask_T) 
                                           << 1U)));
    vlSelf->__PVT__grant = ((IData)(vlSelf->__PVT__first)
                             ? (IData)(vlSelf->__PVT___readys_mask_T)
                             : (IData)(vlSelf->__PVT__state));
    vlSelf->__PVT__ioX_cq__DOT__wen = ((1U & (IData)(vlSelf->__PVT__allowed))
                                        ? (IData)(vlSelf->__PVT__ioX_cq__DOT___wen_T_3)
                                        : ((IData)(__PVT__ioX_cq__DOT___wen_T) 
                                           & (~ (IData)(vlSelf->__PVT__ioX_cq__DOT__valid_0))));
    vlSelf->__PVT__ioX_cq_1__DOT__wen = ((2U & (IData)(vlSelf->__PVT__allowed))
                                          ? (IData)(vlSelf->__PVT__ioX_cq_1__DOT___wen_T_3)
                                          : ((IData)(__PVT__ioX_cq_1__DOT___wen_T) 
                                             & (~ (IData)(vlSelf->__PVT__ioX_cq_1__DOT__valid_0))));
    vlSelf->__PVT__ioX_cq_2__DOT__wen = ((4U & (IData)(vlSelf->__PVT__allowed))
                                          ? (IData)(vlSelf->__PVT__ioX_cq_2__DOT___wen_T_3)
                                          : ((IData)(__PVT__ioX_cq_2__DOT___wen_T) 
                                             & (~ (IData)(vlSelf->__PVT__ioX_cq_2__DOT__valid_0))));
    vlSelf->__PVT__ioX_cq_3__DOT__wen = ((8U & (IData)(vlSelf->__PVT__allowed))
                                          ? (IData)(vlSelf->__PVT__ioX_cq_3__DOT___wen_T_3)
                                          : ((IData)(__PVT__ioX_cq_3__DOT___wen_T) 
                                             & (~ (IData)(vlSelf->__PVT__ioX_cq_3__DOT__valid_0))));
    vlSelf->__PVT__ioX_cq_4__DOT__wen = ((0x10U & (IData)(vlSelf->__PVT__allowed))
                                          ? (IData)(vlSelf->__PVT__ioX_cq_4__DOT___wen_T_3)
                                          : ((IData)(__PVT__ioX_cq_4__DOT___wen_T) 
                                             & (~ (IData)(vlSelf->__PVT__ioX_cq_4__DOT__valid_0))));
    vlSelf->__PVT__ioX_cq__DOT__wen_1 = ((1U & (IData)(vlSelf->__PVT__allowed))
                                          ? (IData)(vlSelf->__PVT__ioX_cq__DOT___wen_T_10)
                                          : (((IData)(__PVT__ioX_cq__DOT___wen_T) 
                                              & (IData)(vlSelf->__PVT__ioX_cq__DOT__valid_0)) 
                                             & (~ (IData)(vlSelf->__PVT__ioX_cq__DOT__valid_1))));
    vlSelf->__PVT__ioX_cq_1__DOT__wen_1 = ((2U & (IData)(vlSelf->__PVT__allowed))
                                            ? (IData)(vlSelf->__PVT__ioX_cq_1__DOT___wen_T_10)
                                            : (((IData)(__PVT__ioX_cq_1__DOT___wen_T) 
                                                & (IData)(vlSelf->__PVT__ioX_cq_1__DOT__valid_0)) 
                                               & (~ (IData)(vlSelf->__PVT__ioX_cq_1__DOT__valid_1))));
    vlSelf->__PVT__ioX_cq_2__DOT__wen_1 = ((4U & (IData)(vlSelf->__PVT__allowed))
                                            ? (IData)(vlSelf->__PVT__ioX_cq_2__DOT___wen_T_10)
                                            : (((IData)(__PVT__ioX_cq_2__DOT___wen_T) 
                                                & (IData)(vlSelf->__PVT__ioX_cq_2__DOT__valid_0)) 
                                               & (~ (IData)(vlSelf->__PVT__ioX_cq_2__DOT__valid_1))));
    vlSelf->__PVT__ioX_cq_3__DOT__wen_1 = ((8U & (IData)(vlSelf->__PVT__allowed))
                                            ? (IData)(vlSelf->__PVT__ioX_cq_3__DOT___wen_T_10)
                                            : (((IData)(__PVT__ioX_cq_3__DOT___wen_T) 
                                                & (IData)(vlSelf->__PVT__ioX_cq_3__DOT__valid_0)) 
                                               & (~ (IData)(vlSelf->__PVT__ioX_cq_3__DOT__valid_1))));
    vlSelf->__PVT__ioX_cq_4__DOT__wen_1 = ((0x10U & (IData)(vlSelf->__PVT__allowed))
                                            ? (IData)(vlSelf->__PVT__ioX_cq_4__DOT___wen_T_10)
                                            : (((IData)(__PVT__ioX_cq_4__DOT___wen_T) 
                                                & (IData)(vlSelf->__PVT__ioX_cq_4__DOT__valid_0)) 
                                               & (~ (IData)(vlSelf->__PVT__ioX_cq_4__DOT__valid_1))));
    vlSelf->__PVT__rxQ_io_deq_ready = (((IData)(vlSelf->__PVT__allowed) 
                                        >> 5U) & (IData)(vlSelf->__PVT__allowReturn));
    vlSelf->__PVT__rxQ_io_enq_bits_data = (5U | ((vlSelf->__PVT__header_hi 
                                                  << 0xcU) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & (~ 
                                                                  (vlSelf->__PVT___msbOH_T_1 
                                                                   >> 0xfU))))) 
                                                     << 0xbU) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xffU 
                                                                  & ((IData)(vlSelf->__PVT___msb_T_1) 
                                                                     >> 8U)))) 
                                                        << 0xaU) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0xfU 
                                                                     & ((IData)(vlSelf->__PVT___msb_T_2) 
                                                                        >> 4U)))) 
                                                           << 9U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (3U 
                                                                        & ((IData)(vlSelf->__PVT___msb_T_3) 
                                                                           >> 2U)))) 
                                                              << 8U) 
                                                             | (0x80U 
                                                                & (((IData)(vlSelf->__PVT___msb_T_3) 
                                                                    << 4U) 
                                                                   | ((IData)(vlSelf->__PVT___msb_T_3) 
                                                                      << 6U)))))))));
    vlSelf->__PVT___readys_mask_T_6 = ((IData)(__PVT___readys_mask_T_3) 
                                       | (0x3cU & ((IData)(__PVT___readys_mask_T_3) 
                                                   << 2U)));
    vlSelf->__PVT___GEN_8 = (((IData)(vlSelf->__PVT__first)
                               ? (IData)(vlSelf->__PVT__rxQ__DOT__valid_0)
                               : (0U != (IData)(vlSelf->__PVT___send_T)))
                              ? (0U != ((IData)(vlSelf->__PVT__grant) 
                                        & (((IData)(vlSelf->__PVT__rxQ__DOT__elts_0_last) 
                                            << 5U) 
                                           | (((IData)(vlSelf->__PVT__ioX_cq_4__DOT__elts_0_last) 
                                               << 4U) 
                                              | (((IData)(vlSelf->__PVT__ioX_cq_3__DOT__elts_0_last) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__PVT__ioX_cq_2__DOT__elts_0_last) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__PVT__ioX_cq_1__DOT__elts_0_last) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__PVT__ioX_cq__DOT__elts_0_last))))))))
                              : (IData)(vlSelf->__PVT__first));
    if (vlSelf->__PVT__rxQ_io_deq_ready) {
        vlSelf->__PVT__rxQ__DOT__wen = (1U & (IData)(vlSelf->__PVT__rxQ__DOT___wen_T_3));
        vlSelf->__PVT__rxQ__DOT__wen_1 = vlSelf->__PVT__rxQ__DOT___wen_T_10;
    } else {
        vlSelf->__PVT__rxQ__DOT__wen = (1U & ((~ (IData)(vlSelf->__PVT__rxQ__DOT__valid_1)) 
                                              & (~ (IData)(vlSelf->__PVT__rxQ__DOT__valid_0))));
        vlSelf->__PVT__rxQ__DOT__wen_1 = (((~ (IData)(vlSelf->__PVT__rxQ__DOT__valid_1)) 
                                           & (IData)(vlSelf->__PVT__rxQ__DOT__valid_0)) 
                                          & (~ (IData)(vlSelf->__PVT__rxQ__DOT__valid_1)));
    }
}

void VysyxSoCFull_TX___ctor_var_reset(VysyxSoCFull_TX* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TX___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_c2b_clk = VL_RAND_RESET_I(1);
    vlSelf->io_c2b_rst = VL_RAND_RESET_I(1);
    vlSelf->io_c2b_send = VL_RAND_RESET_I(1);
    vlSelf->io_c2b_data = VL_RAND_RESET_I(32);
    vlSelf->io_sa_ready = VL_RAND_RESET_I(1);
    vlSelf->io_sa_valid = VL_RAND_RESET_I(1);
    vlSelf->io_sa_bits_data = VL_RAND_RESET_I(32);
    vlSelf->io_sa_bits_last = VL_RAND_RESET_I(1);
    vlSelf->io_sa_bits_beats = VL_RAND_RESET_I(7);
    vlSelf->io_sb_ready = VL_RAND_RESET_I(1);
    vlSelf->io_sb_bits_data = VL_RAND_RESET_I(32);
    vlSelf->io_sb_bits_last = VL_RAND_RESET_I(1);
    vlSelf->io_sc_ready = VL_RAND_RESET_I(1);
    vlSelf->io_sc_bits_data = VL_RAND_RESET_I(32);
    vlSelf->io_sc_bits_last = VL_RAND_RESET_I(1);
    vlSelf->io_sd_ready = VL_RAND_RESET_I(1);
    vlSelf->io_sd_valid = VL_RAND_RESET_I(1);
    vlSelf->io_sd_bits_data = VL_RAND_RESET_I(32);
    vlSelf->io_sd_bits_last = VL_RAND_RESET_I(1);
    vlSelf->io_sd_bits_beats = VL_RAND_RESET_I(7);
    vlSelf->io_se_bits_data = VL_RAND_RESET_I(32);
    vlSelf->io_rxc_mem_0_a = VL_RAND_RESET_I(20);
    vlSelf->io_rxc_mem_0_b = VL_RAND_RESET_I(20);
    vlSelf->io_rxc_mem_0_c = VL_RAND_RESET_I(20);
    vlSelf->io_rxc_mem_0_d = VL_RAND_RESET_I(20);
    vlSelf->io_rxc_mem_0_e = VL_RAND_RESET_I(20);
    vlSelf->io_rxc_ridx = VL_RAND_RESET_I(1);
    vlSelf->io_rxc_widx = VL_RAND_RESET_I(1);
    vlSelf->io_rxc_safe_ridx_valid = VL_RAND_RESET_I(1);
    vlSelf->io_rxc_safe_widx_valid = VL_RAND_RESET_I(1);
    vlSelf->io_rxc_safe_source_reset_n = VL_RAND_RESET_I(1);
    vlSelf->io_rxc_safe_sink_reset_n = VL_RAND_RESET_I(1);
    vlSelf->io_txc_mem_0_a = VL_RAND_RESET_I(20);
    vlSelf->io_txc_mem_0_b = VL_RAND_RESET_I(20);
    vlSelf->io_txc_mem_0_c = VL_RAND_RESET_I(20);
    vlSelf->io_txc_mem_0_d = VL_RAND_RESET_I(20);
    vlSelf->io_txc_mem_0_e = VL_RAND_RESET_I(20);
    vlSelf->io_txc_ridx = VL_RAND_RESET_I(1);
    vlSelf->io_txc_widx = VL_RAND_RESET_I(1);
    vlSelf->io_txc_safe_ridx_valid = VL_RAND_RESET_I(1);
    vlSelf->io_txc_safe_widx_valid = VL_RAND_RESET_I(1);
    vlSelf->io_txc_safe_source_reset_n = VL_RAND_RESET_I(1);
    vlSelf->io_txc_safe_sink_reset_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rxInc_sink_io_deq_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__txInc_sink_io_deq_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qa_q_io_deq_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qb_q_io_deq_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qc_q_io_deq_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qd_q_io_deq_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qe_q_io_deq_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rxQ_io_enq_bits_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rxQ_io_deq_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rx_a = VL_RAND_RESET_I(20);
    vlSelf->__PVT__rx_b = VL_RAND_RESET_I(20);
    vlSelf->__PVT__rx_c = VL_RAND_RESET_I(20);
    vlSelf->__PVT__rx_d = VL_RAND_RESET_I(20);
    vlSelf->__PVT__rx_e = VL_RAND_RESET_I(20);
    vlSelf->__PVT__tx_a = VL_RAND_RESET_I(20);
    vlSelf->__PVT__tx_b = VL_RAND_RESET_I(20);
    vlSelf->__PVT__tx_c = VL_RAND_RESET_I(20);
    vlSelf->__PVT__tx_d = VL_RAND_RESET_I(20);
    vlSelf->__PVT__tx_e = VL_RAND_RESET_I(20);
    vlSelf->__PVT___ioX_first_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_first = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_allow = VL_RAND_RESET_I(1);
    vlSelf->__PVT___ioX_tx_a_T_6 = VL_RAND_RESET_I(21);
    vlSelf->__PVT___ioX_first_T_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_first_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_allow_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___ioX_tx_bT_6 = VL_RAND_RESET_I(21);
    vlSelf->__PVT___ioX_first_T_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_first_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_allow_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___ioX_tx_c_T_6 = VL_RAND_RESET_I(21);
    vlSelf->__PVT___ioX_first_T_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_first_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_allow_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___ioX_tx_d_T_6 = VL_RAND_RESET_I(21);
    vlSelf->__PVT___ioX_first_T_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_first_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_allow_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___ioX_tx_e_T_6 = VL_RAND_RESET_I(21);
    vlSelf->__PVT___mask_T_9 = VL_RAND_RESET_I(20);
    vlSelf->__PVT___msbOH_T_1 = VL_RAND_RESET_I(20);
    vlSelf->__PVT___msb_T_1 = VL_RAND_RESET_I(16);
    vlSelf->__PVT___msb_T_2 = VL_RAND_RESET_I(8);
    vlSelf->__PVT___msb_T_3 = VL_RAND_RESET_I(4);
    vlSelf->__PVT___mask_T_20 = VL_RAND_RESET_I(20);
    vlSelf->__PVT___msbOH_T_3 = VL_RAND_RESET_I(20);
    vlSelf->__PVT___msb_T_6 = VL_RAND_RESET_I(16);
    vlSelf->__PVT___msb_T_7 = VL_RAND_RESET_I(8);
    vlSelf->__PVT___msb_T_8 = VL_RAND_RESET_I(4);
    vlSelf->__PVT___mask_T_31 = VL_RAND_RESET_I(20);
    vlSelf->__PVT___msbOH_T_5 = VL_RAND_RESET_I(20);
    vlSelf->__PVT___msb_T_11 = VL_RAND_RESET_I(16);
    vlSelf->__PVT___msb_T_12 = VL_RAND_RESET_I(8);
    vlSelf->__PVT___msb_T_13 = VL_RAND_RESET_I(4);
    vlSelf->__PVT___mask_T_42 = VL_RAND_RESET_I(20);
    vlSelf->__PVT___msbOH_T_7 = VL_RAND_RESET_I(20);
    vlSelf->__PVT___msb_T_16 = VL_RAND_RESET_I(16);
    vlSelf->__PVT___msb_T_17 = VL_RAND_RESET_I(8);
    vlSelf->__PVT___msb_T_18 = VL_RAND_RESET_I(4);
    vlSelf->__PVT___mask_T_53 = VL_RAND_RESET_I(20);
    vlSelf->__PVT___msbOH_T_9 = VL_RAND_RESET_I(20);
    vlSelf->__PVT___msb_T_21 = VL_RAND_RESET_I(16);
    vlSelf->__PVT___msb_T_22 = VL_RAND_RESET_I(8);
    vlSelf->__PVT___msb_T_23 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__header_hi = VL_RAND_RESET_I(20);
    vlSelf->__PVT__rx_z = VL_RAND_RESET_I(21);
    vlSelf->__PVT__rx_z_1 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__rx_z_2 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__rx_z_3 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__rx_z_4 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__xmit = VL_RAND_RESET_I(2);
    vlSelf->__PVT__forceXmit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__allowReturn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__f_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__requests = VL_RAND_RESET_I(6);
    vlSelf->__PVT___xmit_T_1 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__first = VL_RAND_RESET_I(1);
    vlSelf->__PVT__readys_mask = VL_RAND_RESET_I(6);
    vlSelf->__PVT__readys_filter = VL_RAND_RESET_I(12);
    vlSelf->__PVT__readys_unready = VL_RAND_RESET_I(12);
    vlSelf->__PVT___readys_readys_T_2 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__state = VL_RAND_RESET_I(6);
    vlSelf->__PVT__allowed = VL_RAND_RESET_I(6);
    vlSelf->__PVT___readys_mask_T = VL_RAND_RESET_I(6);
    vlSelf->__PVT___readys_mask_T_6 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__grant = VL_RAND_RESET_I(6);
    vlSelf->__PVT___send_T = VL_RAND_RESET_I(6);
    vlSelf->__PVT___GEN_8 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_c2b_send_REG = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_c2b_send_REG_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_c2b_data_REG = VL_RAND_RESET_I(6);
    vlSelf->__PVT__io_c2b_data_REG_1_0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_c2b_data_REG_1_1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_c2b_data_REG_1_2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_c2b_data_REG_1_3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_c2b_data_REG_1_4 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_c2b_data_REG_1_5 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_c2b_data_REG_2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rxInc_sink__DOT__sink_valid_0_reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rxInc_sink__DOT__ridx_ridx_bin = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rxInc_sink__DOT__ridx_incremented = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rxInc_sink__DOT__valid_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rxInc_sink__DOT__ridx_gray = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(100, vlSelf->__PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg);
    vlSelf->__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__txInc_sink__DOT__ridx_ridx_bin = VL_RAND_RESET_I(1);
    vlSelf->__PVT__txInc_sink__DOT__ridx_incremented = VL_RAND_RESET_I(1);
    vlSelf->__PVT__txInc_sink__DOT__valid_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__txInc_sink__DOT__ridx_gray = VL_RAND_RESET_I(1);
    vlSelf->__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(100, vlSelf->__PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg);
    vlSelf->__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qa_q__DOT__valid_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qa_q__DOT__valid_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qa_q__DOT__elts_0_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__qa_q__DOT__elts_0_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qa_q__DOT__elts_0_beats = VL_RAND_RESET_I(7);
    vlSelf->__PVT__qa_q__DOT__elts_1_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__qa_q__DOT__elts_1_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qa_q__DOT__elts_1_beats = VL_RAND_RESET_I(7);
    vlSelf->__PVT__qa_q__DOT___wen_T_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qa_q__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qa_q__DOT___valid_0_T_6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qa_q__DOT___wen_T_10 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qa_q__DOT__wen_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qa_q__DOT___valid_1_T_6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qb_q__DOT__valid_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qb_q__DOT__valid_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qb_q__DOT__elts_0_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__qb_q__DOT__elts_0_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qb_q__DOT__elts_0_beats = VL_RAND_RESET_I(7);
    vlSelf->__PVT__qb_q__DOT__elts_1_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__qb_q__DOT__elts_1_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qb_q__DOT__elts_1_beats = VL_RAND_RESET_I(7);
    vlSelf->__PVT__qb_q__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qb_q__DOT___valid_0_T_6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qb_q__DOT___valid_1_T_6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qc_q__DOT__valid_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qc_q__DOT__valid_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qc_q__DOT__elts_0_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__qc_q__DOT__elts_0_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qc_q__DOT__elts_0_beats = VL_RAND_RESET_I(7);
    vlSelf->__PVT__qc_q__DOT__elts_1_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__qc_q__DOT__elts_1_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qc_q__DOT__elts_1_beats = VL_RAND_RESET_I(7);
    vlSelf->__PVT__qc_q__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qc_q__DOT___valid_0_T_6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qc_q__DOT___valid_1_T_6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qd_q__DOT__valid_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qd_q__DOT__valid_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qd_q__DOT__elts_0_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__qd_q__DOT__elts_0_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qd_q__DOT__elts_0_beats = VL_RAND_RESET_I(7);
    vlSelf->__PVT__qd_q__DOT__elts_1_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__qd_q__DOT__elts_1_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qd_q__DOT__elts_1_beats = VL_RAND_RESET_I(7);
    vlSelf->__PVT__qd_q__DOT___wen_T_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qd_q__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qd_q__DOT___valid_0_T_6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qd_q__DOT___wen_T_10 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qd_q__DOT__wen_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qd_q__DOT___valid_1_T_6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qe_q__DOT__valid_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qe_q__DOT__valid_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qe_q__DOT__elts_0_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__qe_q__DOT__elts_0_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qe_q__DOT__elts_0_beats = VL_RAND_RESET_I(7);
    vlSelf->__PVT__qe_q__DOT__elts_1_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__qe_q__DOT__elts_1_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qe_q__DOT__elts_1_beats = VL_RAND_RESET_I(7);
    vlSelf->__PVT__qe_q__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qe_q__DOT___valid_0_T_6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qe_q__DOT___valid_1_T_6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq__DOT__valid_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq__DOT__valid_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq__DOT__elts_0_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ioX_cq__DOT__elts_0_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq__DOT__elts_0_beats = VL_RAND_RESET_I(7);
    vlSelf->__PVT__ioX_cq__DOT__elts_1_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ioX_cq__DOT__elts_1_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq__DOT__elts_1_beats = VL_RAND_RESET_I(7);
    vlSelf->__PVT__ioX_cq__DOT___wen_T_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq__DOT___valid_0_T_6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq__DOT___wen_T_10 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq__DOT__wen_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq__DOT___valid_1_T_6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_1__DOT__valid_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_1__DOT__valid_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_1__DOT__elts_0_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ioX_cq_1__DOT__elts_0_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_1__DOT__elts_0_beats = VL_RAND_RESET_I(7);
    vlSelf->__PVT__ioX_cq_1__DOT__elts_1_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ioX_cq_1__DOT__elts_1_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_1__DOT__elts_1_beats = VL_RAND_RESET_I(7);
    vlSelf->__PVT__ioX_cq_1__DOT___wen_T_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_1__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_1__DOT___valid_0_T_6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_1__DOT___wen_T_10 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_1__DOT__wen_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_1__DOT___valid_1_T_6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_2__DOT__valid_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_2__DOT__valid_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_2__DOT__elts_0_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ioX_cq_2__DOT__elts_0_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_2__DOT__elts_0_beats = VL_RAND_RESET_I(7);
    vlSelf->__PVT__ioX_cq_2__DOT__elts_1_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ioX_cq_2__DOT__elts_1_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_2__DOT__elts_1_beats = VL_RAND_RESET_I(7);
    vlSelf->__PVT__ioX_cq_2__DOT___wen_T_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_2__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_2__DOT___valid_0_T_6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_2__DOT___wen_T_10 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_2__DOT__wen_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_2__DOT___valid_1_T_6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_3__DOT__valid_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_3__DOT__valid_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_3__DOT__elts_0_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ioX_cq_3__DOT__elts_0_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_3__DOT__elts_0_beats = VL_RAND_RESET_I(7);
    vlSelf->__PVT__ioX_cq_3__DOT__elts_1_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ioX_cq_3__DOT__elts_1_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_3__DOT__elts_1_beats = VL_RAND_RESET_I(7);
    vlSelf->__PVT__ioX_cq_3__DOT___wen_T_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_3__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_3__DOT___valid_0_T_6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_3__DOT___wen_T_10 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_3__DOT__wen_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_3__DOT___valid_1_T_6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_4__DOT__valid_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_4__DOT__valid_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_4__DOT__elts_0_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ioX_cq_4__DOT__elts_0_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_4__DOT__elts_0_beats = VL_RAND_RESET_I(7);
    vlSelf->__PVT__ioX_cq_4__DOT__elts_1_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ioX_cq_4__DOT__elts_1_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_4__DOT__elts_1_beats = VL_RAND_RESET_I(7);
    vlSelf->__PVT__ioX_cq_4__DOT___wen_T_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_4__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_4__DOT___valid_0_T_6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_4__DOT___wen_T_10 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_4__DOT__wen_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ioX_cq_4__DOT___valid_1_T_6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rxQ__DOT__valid_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rxQ__DOT__valid_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rxQ__DOT__elts_0_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rxQ__DOT__elts_0_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rxQ__DOT__elts_0_beats = VL_RAND_RESET_I(7);
    vlSelf->__PVT__rxQ__DOT__elts_1_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rxQ__DOT__elts_1_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rxQ__DOT__elts_1_beats = VL_RAND_RESET_I(7);
    vlSelf->__PVT__rxQ__DOT___wen_T_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rxQ__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rxQ__DOT___valid_0_T_6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rxQ__DOT___wen_T_10 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rxQ__DOT__wen_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rxQ__DOT___valid_1_T_6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_c2b_rst_reg__DOT__reg_ = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__rxInc_sink__DOT__ridx_ridx_bin = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__txInc_sink__DOT__ridx_ridx_bin = VL_RAND_RESET_I(1);
}
