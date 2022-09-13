// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull_RX.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

//==========


void VysyxSoCFull_RX___ctor_var_reset(VysyxSoCFull_RX* vlSelf);

VysyxSoCFull_RX::VysyxSoCFull_RX(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VysyxSoCFull_RX___ctor_var_reset(this);
}

void VysyxSoCFull_RX::__Vconfigure(VysyxSoCFull__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VysyxSoCFull_RX::~VysyxSoCFull_RX() {
}

void VysyxSoCFull_RX___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__11(VysyxSoCFull_RX* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_RX___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__11\n"); );
    // Body
    vlSelf->__PVT__hqa__DOT__fq__DOT___enq_ptr_wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__enq_ptr)));
    vlSelf->__PVT__hqb__DOT__fq__DOT___enq_ptr_wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__enq_ptr)));
    vlSelf->__PVT__hqc__DOT__fq__DOT___enq_ptr_wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__enq_ptr)));
    vlSelf->__PVT__hqd__DOT__fq__DOT___enq_ptr_wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__enq_ptr)));
    vlSelf->__PVT__hqe__DOT__fq__DOT___enq_ptr_wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__enq_ptr)));
    vlSelf->__PVT__first = (0U == (IData)(vlSelf->__PVT__first_count));
    vlSelf->__PVT___first_count_T_1 = (0x1fU & ((IData)(vlSelf->__PVT__first_count) 
                                                - (IData)(1U)));
    vlSelf->__PVT__hqa__DOT__fq__DOT___wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__deq_ptr)));
    vlSelf->__PVT__hqb__DOT__fq__DOT___wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__deq_ptr)));
    vlSelf->__PVT__hqc__DOT__fq__DOT___wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__deq_ptr)));
    vlSelf->__PVT__hqd__DOT__fq__DOT___wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__deq_ptr)));
    vlSelf->__PVT__hqe__DOT__fq__DOT___wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__deq_ptr)));
    vlSelf->__PVT__hqa__DOT__fq__DOT__ptr_match = ((IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__enq_ptr) 
                                                   == (IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__deq_ptr));
    vlSelf->__PVT__hqb__DOT__fq__DOT__ptr_match = ((IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__enq_ptr) 
                                                   == (IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__deq_ptr));
    vlSelf->__PVT__hqc__DOT__fq__DOT__ptr_match = ((IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__enq_ptr) 
                                                   == (IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__deq_ptr));
    vlSelf->__PVT__hqd__DOT__fq__DOT__ptr_match = ((IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__enq_ptr) 
                                                   == (IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__deq_ptr));
    vlSelf->__PVT__hqe__DOT__fq__DOT__ptr_match = ((IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__enq_ptr) 
                                                   == (IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__deq_ptr));
    vlSelf->__PVT__first_beats_beats = ((0x1eU & (((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->__PVT__b2c_data 
                                                       >> 9U))) 
                                                  >> 2U)) 
                                        | (2U >= (0xfU 
                                                  & (vlSelf->__PVT__b2c_data 
                                                     >> 9U))));
    vlSelf->__PVT__formatValid = ((IData)(vlSelf->__PVT__b2c_send) 
                                  & (0U == (IData)(vlSelf->__PVT__first_count)));
    vlSelf->__PVT__io_txc_source_io_enq_ready = ((IData)(vlSelf->__PVT__io_txc_source__DOT__ready_reg) 
                                                 & (IData)(vlSelf->__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__io_rxc_source_io_enq_ready = ((IData)(vlSelf->__PVT__io_rxc_source__DOT__ready_reg) 
                                                 & (IData)(vlSelf->__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__io_txc_source__DOT__source_valid_0_reset 
        = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) 
           | (IData)(vlSymsp->TOP.reset));
    vlSelf->__PVT__hqa__DOT__fq__DOT__full = ((IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__ptr_match) 
                                              & (IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__maybe_full));
    vlSelf->__PVT__hqa__DOT__fq__DOT__empty = ((IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__ptr_match) 
                                               & (~ (IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__maybe_full)));
    vlSelf->__PVT__hqb__DOT__fq__DOT__full = ((IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__ptr_match) 
                                              & (IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__maybe_full));
    vlSelf->__PVT__hqb__DOT__fq__DOT__empty = ((IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__ptr_match) 
                                               & (~ (IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__maybe_full)));
    vlSelf->__PVT__hqc__DOT__fq__DOT__full = ((IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__ptr_match) 
                                              & (IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__maybe_full));
    vlSelf->__PVT__hqc__DOT__fq__DOT__empty = ((IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__ptr_match) 
                                               & (~ (IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__maybe_full)));
    vlSelf->__PVT__hqd__DOT__fq__DOT__full = ((IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__ptr_match) 
                                              & (IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__maybe_full));
    vlSelf->__PVT__hqd__DOT__fq__DOT__empty = ((IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__ptr_match) 
                                               & (~ (IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__maybe_full)));
    vlSelf->__PVT__hqe__DOT__fq__DOT__full = ((IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__ptr_match) 
                                              & (IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__maybe_full));
    vlSelf->__PVT__hqe__DOT__fq__DOT__empty = ((IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__ptr_match) 
                                               & (~ (IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__maybe_full)));
    vlSelf->__PVT___first_beats_c_T_1 = ((8U & vlSelf->__PVT__b2c_data)
                                          ? (IData)(vlSelf->__PVT__first_beats_beats)
                                          : 0U);
    vlSelf->__PVT___GEN_7 = (7U & ((IData)(vlSelf->__PVT__formatValid)
                                    ? vlSelf->__PVT__b2c_data
                                    : (IData)(vlSelf->__PVT__format_r)));
    vlSelf->__PVT__hqa__DOT__fq__DOT__atLeastTwo = 
        ((IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__full) 
         | (2U <= (0x1fU & ((IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__enq_ptr) 
                            - (IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__deq_ptr)))));
    vlSelf->__PVT__hqb__DOT__fq__DOT__atLeastTwo = 
        ((IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__full) 
         | (2U <= (0x1fU & ((IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__enq_ptr) 
                            - (IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__deq_ptr)))));
    vlSelf->__PVT__hqc__DOT__fq__DOT__atLeastTwo = 
        ((IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__full) 
         | (2U <= (0x1fU & ((IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__enq_ptr) 
                            - (IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__deq_ptr)))));
    vlSelf->__PVT__hqd__DOT__fq__DOT__atLeastTwo = 
        ((IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__full) 
         | (2U <= (0x1fU & ((IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__enq_ptr) 
                            - (IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__deq_ptr)))));
    vlSelf->__PVT__hqe__DOT__fq__DOT__atLeastTwo = 
        ((IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__full) 
         | (2U <= (0x1fU & ((IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__enq_ptr) 
                            - (IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__deq_ptr)))));
    vlSelf->__PVT__tx_z = (0x1fffffU & (vlSelf->__PVT__tx_a 
                                        + ((7U & ((IData)(vlSelf->__PVT__b2c_send) 
                                                  & (((IData)(1U) 
                                                      << (IData)(vlSelf->__PVT___GEN_7)) 
                                                     >> 5U)))
                                            ? ((0x14U 
                                                < (0x1fU 
                                                   & (vlSelf->__PVT__b2c_data 
                                                      >> 7U)))
                                                ? 0xfffffU
                                                : (0xfffffU 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & (vlSelf->__PVT__b2c_data 
                                                           >> 7U))) 
                                                      >> 1U)))
                                            : 0U)));
    vlSelf->__PVT__tx_z_1 = (0x1fffffU & (vlSelf->__PVT__tx_b 
                                          + ((7U & 
                                              ((IData)(vlSelf->__PVT__b2c_send) 
                                               & (((IData)(1U) 
                                                   << (IData)(vlSelf->__PVT___GEN_7)) 
                                                  >> 5U)))
                                              ? ((0x14U 
                                                  < 
                                                  (0x1fU 
                                                   & (vlSelf->__PVT__b2c_data 
                                                      >> 0xcU)))
                                                  ? 0xfffffU
                                                  : 
                                                 (0xfffffU 
                                                  & (((IData)(1U) 
                                                      << 
                                                      (0x1fU 
                                                       & (vlSelf->__PVT__b2c_data 
                                                          >> 0xcU))) 
                                                     >> 1U)))
                                              : 0U)));
    vlSelf->__PVT__tx_z_2 = (0x1fffffU & (vlSelf->__PVT__tx_c 
                                          + ((7U & 
                                              ((IData)(vlSelf->__PVT__b2c_send) 
                                               & (((IData)(1U) 
                                                   << (IData)(vlSelf->__PVT___GEN_7)) 
                                                  >> 5U)))
                                              ? ((0x14U 
                                                  < 
                                                  (0x1fU 
                                                   & (vlSelf->__PVT__b2c_data 
                                                      >> 0x11U)))
                                                  ? 0xfffffU
                                                  : 
                                                 (0xfffffU 
                                                  & (((IData)(1U) 
                                                      << 
                                                      (0x1fU 
                                                       & (vlSelf->__PVT__b2c_data 
                                                          >> 0x11U))) 
                                                     >> 1U)))
                                              : 0U)));
    vlSelf->__PVT__tx_z_3 = (0x1fffffU & (vlSelf->__PVT__tx_d 
                                          + ((7U & 
                                              ((IData)(vlSelf->__PVT__b2c_send) 
                                               & (((IData)(1U) 
                                                   << (IData)(vlSelf->__PVT___GEN_7)) 
                                                  >> 5U)))
                                              ? ((0x14U 
                                                  < 
                                                  (0x1fU 
                                                   & (vlSelf->__PVT__b2c_data 
                                                      >> 0x16U)))
                                                  ? 0xfffffU
                                                  : 
                                                 (0xfffffU 
                                                  & (((IData)(1U) 
                                                      << 
                                                      (0x1fU 
                                                       & (vlSelf->__PVT__b2c_data 
                                                          >> 0x16U))) 
                                                     >> 1U)))
                                              : 0U)));
    vlSelf->__PVT__tx_z_4 = (0x1fffffU & (vlSelf->__PVT__tx_e 
                                          + ((7U & 
                                              ((IData)(vlSelf->__PVT__b2c_send) 
                                               & (((IData)(1U) 
                                                   << (IData)(vlSelf->__PVT___GEN_7)) 
                                                  >> 5U)))
                                              ? ((0x14U 
                                                  < 
                                                  (vlSelf->__PVT__b2c_data 
                                                   >> 0x1bU))
                                                  ? 0xfffffU
                                                  : 
                                                 (0xfffffU 
                                                  & (((IData)(1U) 
                                                      << 
                                                      (vlSelf->__PVT__b2c_data 
                                                       >> 0x1bU)) 
                                                     >> 1U)))
                                              : 0U)));
    vlSelf->__PVT__hqa_io_enq_valid = (0xffU & ((IData)(vlSelf->__PVT__b2c_send) 
                                                & ((IData)(1U) 
                                                   << (IData)(vlSelf->__PVT___GEN_7))));
    vlSelf->__PVT__hqb_io_enq_valid = (0x7fU & ((IData)(vlSelf->__PVT__b2c_send) 
                                                & (((IData)(1U) 
                                                    << (IData)(vlSelf->__PVT___GEN_7)) 
                                                   >> 1U)));
    vlSelf->__PVT__hqc_io_enq_valid = (0x3fU & ((IData)(vlSelf->__PVT__b2c_send) 
                                                & (((IData)(1U) 
                                                    << (IData)(vlSelf->__PVT___GEN_7)) 
                                                   >> 2U)));
    vlSelf->__PVT__hqd_io_enq_valid = (0x1fU & ((IData)(vlSelf->__PVT__b2c_send) 
                                                & (((IData)(1U) 
                                                    << (IData)(vlSelf->__PVT___GEN_7)) 
                                                   >> 3U)));
    vlSelf->__PVT__hqe_io_enq_valid = (0xfU & ((IData)(vlSelf->__PVT__b2c_send) 
                                               & (((IData)(1U) 
                                                   << (IData)(vlSelf->__PVT___GEN_7)) 
                                                  >> 4U)));
    vlSelf->__PVT__hqa__DOT__fq__DOT___do_enq_T = (
                                                   (~ (IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__full)) 
                                                   & (IData)(vlSelf->__PVT__hqa_io_enq_valid));
    vlSelf->__PVT__hqa__DOT__fq_io_deq_valid = ((IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__empty)
                                                 ? (IData)(vlSelf->__PVT__hqa_io_enq_valid)
                                                 : (IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__ram_out_valid));
    vlSelf->__PVT__hqb__DOT__fq__DOT___do_enq_T = (
                                                   (~ (IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__full)) 
                                                   & (IData)(vlSelf->__PVT__hqb_io_enq_valid));
    vlSelf->__PVT__hqb__DOT__fq_io_deq_valid = ((IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__empty)
                                                 ? (IData)(vlSelf->__PVT__hqb_io_enq_valid)
                                                 : (IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__ram_out_valid));
    vlSelf->__PVT__hqc__DOT__fq__DOT___do_enq_T = (
                                                   (~ (IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__full)) 
                                                   & (IData)(vlSelf->__PVT__hqc_io_enq_valid));
    vlSelf->__PVT__hqc__DOT__fq_io_deq_valid = ((IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__empty)
                                                 ? (IData)(vlSelf->__PVT__hqc_io_enq_valid)
                                                 : (IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__ram_out_valid));
    vlSelf->__PVT__hqd__DOT__fq__DOT___do_enq_T = (
                                                   (~ (IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__full)) 
                                                   & (IData)(vlSelf->__PVT__hqd_io_enq_valid));
    vlSelf->__PVT__hqd__DOT__fq_io_deq_valid = ((IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__empty)
                                                 ? (IData)(vlSelf->__PVT__hqd_io_enq_valid)
                                                 : (IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__ram_out_valid));
    vlSelf->__PVT__hqe__DOT__fq__DOT___do_enq_T = (
                                                   (~ (IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__full)) 
                                                   & (IData)(vlSelf->__PVT__hqe_io_enq_valid));
    vlSelf->__PVT__hqe__DOT__fq_io_deq_valid = ((IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__empty)
                                                 ? (IData)(vlSelf->__PVT__hqe_io_enq_valid)
                                                 : (IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__ram_out_valid));
}

void VysyxSoCFull_RX___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__13(VysyxSoCFull_RX* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_RX___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__13\n"); );
    // Body
    vlSelf->__PVT__hqa__DOT__io_deq_q__DOT__do_deq 
        = ((IData)(vlSelf->__PVT__io_a_source->__PVT__io_enq_ready) 
           & (IData)(vlSelf->__PVT__hqa__DOT__io_deq_q__DOT__maybe_full));
    vlSelf->__PVT___rxInc_a_T = ((IData)(vlSelf->__PVT__io_a_source->__PVT__io_enq_ready) 
                                 & (IData)(vlSelf->__PVT__hqa__DOT__io_deq_q__DOT__maybe_full));
    vlSelf->__PVT__hqa__DOT__io_deq_q_io_enq_ready 
        = (1U & ((IData)(vlSelf->__PVT__io_a_source->__PVT__io_enq_ready) 
                 | (~ (IData)(vlSelf->__PVT__hqa__DOT__io_deq_q__DOT__maybe_full))));
    vlSelf->__PVT__hqb__DOT__io_deq_q__DOT__do_deq 
        = ((IData)(vlSelf->__PVT__io_bsource->__PVT__io_enq_ready) 
           & (IData)(vlSelf->__PVT__hqb__DOT__io_deq_q__DOT__maybe_full));
    vlSelf->__PVT___rxInc_bT = ((IData)(vlSelf->__PVT__io_bsource->__PVT__io_enq_ready) 
                                & (IData)(vlSelf->__PVT__hqb__DOT__io_deq_q__DOT__maybe_full));
    vlSelf->__PVT__hqb__DOT__io_deq_q_io_enq_ready 
        = (1U & ((IData)(vlSelf->__PVT__io_bsource->__PVT__io_enq_ready) 
                 | (~ (IData)(vlSelf->__PVT__hqb__DOT__io_deq_q__DOT__maybe_full))));
    vlSelf->__PVT__hqc__DOT__io_deq_q__DOT__do_deq 
        = ((IData)(vlSelf->__PVT__io_c_source->__PVT__io_enq_ready) 
           & (IData)(vlSelf->__PVT__hqc__DOT__io_deq_q__DOT__maybe_full));
    vlSelf->__PVT___rxInc_c_T = ((IData)(vlSelf->__PVT__io_c_source->__PVT__io_enq_ready) 
                                 & (IData)(vlSelf->__PVT__hqc__DOT__io_deq_q__DOT__maybe_full));
    vlSelf->__PVT__hqc__DOT__io_deq_q_io_enq_ready 
        = (1U & ((IData)(vlSelf->__PVT__io_c_source->__PVT__io_enq_ready) 
                 | (~ (IData)(vlSelf->__PVT__hqc__DOT__io_deq_q__DOT__maybe_full))));
    vlSelf->__PVT__hqd__DOT__io_deq_q__DOT__do_deq 
        = ((IData)(vlSelf->__PVT__io_d_source->__PVT__io_enq_ready) 
           & (IData)(vlSelf->__PVT__hqd__DOT__io_deq_q__DOT__maybe_full));
    vlSelf->__PVT___rxInc_d_T = ((IData)(vlSelf->__PVT__io_d_source->__PVT__io_enq_ready) 
                                 & (IData)(vlSelf->__PVT__hqd__DOT__io_deq_q__DOT__maybe_full));
    vlSelf->__PVT__hqd__DOT__io_deq_q_io_enq_ready 
        = (1U & ((IData)(vlSelf->__PVT__io_d_source->__PVT__io_enq_ready) 
                 | (~ (IData)(vlSelf->__PVT__hqd__DOT__io_deq_q__DOT__maybe_full))));
    vlSelf->__PVT__hqe__DOT__io_deq_q__DOT__do_deq 
        = ((IData)(vlSelf->__PVT__io_e_source->__PVT__io_enq_ready) 
           & (IData)(vlSelf->__PVT__hqe__DOT__io_deq_q__DOT__maybe_full));
    vlSelf->__PVT___rxInc_e_T = ((IData)(vlSelf->__PVT__io_e_source->__PVT__io_enq_ready) 
                                 & (IData)(vlSelf->__PVT__hqe__DOT__io_deq_q__DOT__maybe_full));
    vlSelf->__PVT__hqe__DOT__io_deq_q_io_enq_ready 
        = (1U & ((IData)(vlSelf->__PVT__io_e_source->__PVT__io_enq_ready) 
                 | (~ (IData)(vlSelf->__PVT__hqe__DOT__io_deq_q__DOT__maybe_full))));
    vlSelf->__PVT__rx_z = (0x1fffffU & (vlSelf->__PVT__rx_a 
                                        + (IData)(vlSelf->__PVT___rxInc_a_T)));
    vlSelf->__PVT__hqa__DOT__fq__DOT__do_flow = ((IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__empty) 
                                                 & (IData)(vlSelf->__PVT__hqa__DOT__io_deq_q_io_enq_ready));
    vlSelf->__PVT__hqa__DOT__io_deq_q__DOT__do_enq 
        = ((IData)(vlSelf->__PVT__hqa__DOT__io_deq_q_io_enq_ready) 
           & (IData)(vlSelf->__PVT__hqa__DOT__fq_io_deq_valid));
    vlSelf->__PVT__hqa__DOT__fq__DOT__ram_R0_en = ((IData)(vlSelf->__PVT__hqa__DOT__io_deq_q_io_enq_ready) 
                                                   & ((IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__atLeastTwo) 
                                                      | ((~ (IData)(vlSelf->__PVT__hqa__DOT__fq_io_deq_valid)) 
                                                         & (~ (IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__empty)))));
    vlSelf->__PVT__rx_z_1 = (0x1fffffU & (vlSelf->__PVT__rx_b 
                                          + (IData)(vlSelf->__PVT___rxInc_bT)));
    vlSelf->__PVT__hqb__DOT__fq__DOT__do_flow = ((IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__empty) 
                                                 & (IData)(vlSelf->__PVT__hqb__DOT__io_deq_q_io_enq_ready));
    vlSelf->__PVT__hqb__DOT__io_deq_q__DOT__do_enq 
        = ((IData)(vlSelf->__PVT__hqb__DOT__io_deq_q_io_enq_ready) 
           & (IData)(vlSelf->__PVT__hqb__DOT__fq_io_deq_valid));
    vlSelf->__PVT__hqb__DOT__fq__DOT__ram_R0_en = ((IData)(vlSelf->__PVT__hqb__DOT__io_deq_q_io_enq_ready) 
                                                   & ((IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__atLeastTwo) 
                                                      | ((~ (IData)(vlSelf->__PVT__hqb__DOT__fq_io_deq_valid)) 
                                                         & (~ (IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__empty)))));
    vlSelf->__PVT__rx_z_2 = (0x1fffffU & (vlSelf->__PVT__rx_c 
                                          + (IData)(vlSelf->__PVT___rxInc_c_T)));
    vlSelf->__PVT__hqc__DOT__fq__DOT__do_flow = ((IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__empty) 
                                                 & (IData)(vlSelf->__PVT__hqc__DOT__io_deq_q_io_enq_ready));
    vlSelf->__PVT__hqc__DOT__io_deq_q__DOT__do_enq 
        = ((IData)(vlSelf->__PVT__hqc__DOT__io_deq_q_io_enq_ready) 
           & (IData)(vlSelf->__PVT__hqc__DOT__fq_io_deq_valid));
    vlSelf->__PVT__hqc__DOT__fq__DOT__ram_R0_en = ((IData)(vlSelf->__PVT__hqc__DOT__io_deq_q_io_enq_ready) 
                                                   & ((IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__atLeastTwo) 
                                                      | ((~ (IData)(vlSelf->__PVT__hqc__DOT__fq_io_deq_valid)) 
                                                         & (~ (IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__empty)))));
    vlSelf->__PVT__rx_z_3 = (0x1fffffU & (vlSelf->__PVT__rx_d 
                                          + (IData)(vlSelf->__PVT___rxInc_d_T)));
    vlSelf->__PVT__hqd__DOT__fq__DOT__do_flow = ((IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__empty) 
                                                 & (IData)(vlSelf->__PVT__hqd__DOT__io_deq_q_io_enq_ready));
    vlSelf->__PVT__hqd__DOT__io_deq_q__DOT__do_enq 
        = ((IData)(vlSelf->__PVT__hqd__DOT__io_deq_q_io_enq_ready) 
           & (IData)(vlSelf->__PVT__hqd__DOT__fq_io_deq_valid));
    vlSelf->__PVT__hqd__DOT__fq__DOT__ram_R0_en = ((IData)(vlSelf->__PVT__hqd__DOT__io_deq_q_io_enq_ready) 
                                                   & ((IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__atLeastTwo) 
                                                      | ((~ (IData)(vlSelf->__PVT__hqd__DOT__fq_io_deq_valid)) 
                                                         & (~ (IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__empty)))));
    vlSelf->__PVT__rx_z_4 = (0x1fffffU & (vlSelf->__PVT__rx_e 
                                          + (IData)(vlSelf->__PVT___rxInc_e_T)));
    vlSelf->__PVT__hqe__DOT__fq__DOT__do_flow = ((IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__empty) 
                                                 & (IData)(vlSelf->__PVT__hqe__DOT__io_deq_q_io_enq_ready));
    vlSelf->__PVT__hqe__DOT__io_deq_q__DOT__do_enq 
        = ((IData)(vlSelf->__PVT__hqe__DOT__io_deq_q_io_enq_ready) 
           & (IData)(vlSelf->__PVT__hqe__DOT__fq_io_deq_valid));
    vlSelf->__PVT__hqe__DOT__fq__DOT__ram_R0_en = ((IData)(vlSelf->__PVT__hqe__DOT__io_deq_q_io_enq_ready) 
                                                   & ((IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__atLeastTwo) 
                                                      | ((~ (IData)(vlSelf->__PVT__hqe__DOT__fq_io_deq_valid)) 
                                                         & (~ (IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__empty)))));
    vlSelf->__PVT__hqa__DOT__fq__DOT__do_enq = ((IData)(vlSelf->__PVT__hqa__DOT__fq__DOT___do_enq_T) 
                                                & (~ (IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__do_flow)));
    vlSelf->__PVT__hqa__DOT__fq__DOT__do_deq = (((IData)(vlSelf->__PVT__hqa__DOT__io_deq_q_io_enq_ready) 
                                                 & (IData)(vlSelf->__PVT__hqa__DOT__fq_io_deq_valid)) 
                                                & (~ (IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__do_flow)));
    vlSelf->__PVT__hqb__DOT__fq__DOT__do_enq = ((IData)(vlSelf->__PVT__hqb__DOT__fq__DOT___do_enq_T) 
                                                & (~ (IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__do_flow)));
    vlSelf->__PVT__hqb__DOT__fq__DOT__do_deq = (((IData)(vlSelf->__PVT__hqb__DOT__io_deq_q_io_enq_ready) 
                                                 & (IData)(vlSelf->__PVT__hqb__DOT__fq_io_deq_valid)) 
                                                & (~ (IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__do_flow)));
    vlSelf->__PVT__hqc__DOT__fq__DOT__do_enq = ((IData)(vlSelf->__PVT__hqc__DOT__fq__DOT___do_enq_T) 
                                                & (~ (IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__do_flow)));
    vlSelf->__PVT__hqc__DOT__fq__DOT__do_deq = (((IData)(vlSelf->__PVT__hqc__DOT__io_deq_q_io_enq_ready) 
                                                 & (IData)(vlSelf->__PVT__hqc__DOT__fq_io_deq_valid)) 
                                                & (~ (IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__do_flow)));
    vlSelf->__PVT__hqd__DOT__fq__DOT__do_enq = ((IData)(vlSelf->__PVT__hqd__DOT__fq__DOT___do_enq_T) 
                                                & (~ (IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__do_flow)));
    vlSelf->__PVT__hqd__DOT__fq__DOT__do_deq = (((IData)(vlSelf->__PVT__hqd__DOT__io_deq_q_io_enq_ready) 
                                                 & (IData)(vlSelf->__PVT__hqd__DOT__fq_io_deq_valid)) 
                                                & (~ (IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__do_flow)));
    vlSelf->__PVT__hqe__DOT__fq__DOT__do_enq = ((IData)(vlSelf->__PVT__hqe__DOT__fq__DOT___do_enq_T) 
                                                & (~ (IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__do_flow)));
    vlSelf->__PVT__hqe__DOT__fq__DOT__do_deq = (((IData)(vlSelf->__PVT__hqe__DOT__io_deq_q_io_enq_ready) 
                                                 & (IData)(vlSelf->__PVT__hqe__DOT__fq_io_deq_valid)) 
                                                & (~ (IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__do_flow)));
}

void VysyxSoCFull_RX___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__12(VysyxSoCFull_RX* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_RX___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__12\n"); );
    // Body
    vlSelf->__PVT__hqa__DOT__fq__DOT___enq_ptr_wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__enq_ptr)));
    vlSelf->__PVT__hqb__DOT__fq__DOT___enq_ptr_wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__enq_ptr)));
    vlSelf->__PVT__hqc__DOT__fq__DOT___enq_ptr_wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__enq_ptr)));
    vlSelf->__PVT__hqd__DOT__fq__DOT___enq_ptr_wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__enq_ptr)));
    vlSelf->__PVT__hqe__DOT__fq__DOT___enq_ptr_wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__enq_ptr)));
    vlSelf->__PVT__first = (0U == (IData)(vlSelf->__PVT__first_count));
    vlSelf->__PVT___first_count_T_1 = (0x1fU & ((IData)(vlSelf->__PVT__first_count) 
                                                - (IData)(1U)));
    vlSelf->__PVT__hqa__DOT__fq__DOT___wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__deq_ptr)));
    vlSelf->__PVT__hqb__DOT__fq__DOT___wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__deq_ptr)));
    vlSelf->__PVT__hqc__DOT__fq__DOT___wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__deq_ptr)));
    vlSelf->__PVT__hqd__DOT__fq__DOT___wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__deq_ptr)));
    vlSelf->__PVT__hqe__DOT__fq__DOT___wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__deq_ptr)));
    vlSelf->__PVT__hqa__DOT__fq__DOT__ptr_match = ((IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__enq_ptr) 
                                                   == (IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__deq_ptr));
    vlSelf->__PVT__hqb__DOT__fq__DOT__ptr_match = ((IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__enq_ptr) 
                                                   == (IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__deq_ptr));
    vlSelf->__PVT__hqc__DOT__fq__DOT__ptr_match = ((IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__enq_ptr) 
                                                   == (IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__deq_ptr));
    vlSelf->__PVT__hqd__DOT__fq__DOT__ptr_match = ((IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__enq_ptr) 
                                                   == (IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__deq_ptr));
    vlSelf->__PVT__hqe__DOT__fq__DOT__ptr_match = ((IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__enq_ptr) 
                                                   == (IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__deq_ptr));
    vlSelf->__PVT__first_beats_beats = ((0x1eU & (((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->__PVT__b2c_data 
                                                       >> 9U))) 
                                                  >> 2U)) 
                                        | (2U >= (0xfU 
                                                  & (vlSelf->__PVT__b2c_data 
                                                     >> 9U))));
    vlSelf->__PVT__formatValid = ((IData)(vlSelf->__PVT__b2c_send) 
                                  & (0U == (IData)(vlSelf->__PVT__first_count)));
    vlSelf->__PVT__io_txc_source_io_enq_ready = ((IData)(vlSelf->__PVT__io_txc_source__DOT__ready_reg) 
                                                 & (IData)(vlSelf->__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__io_rxc_source_io_enq_ready = ((IData)(vlSelf->__PVT__io_rxc_source__DOT__ready_reg) 
                                                 & (IData)(vlSelf->__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__io_txc_source__DOT__source_valid_0_reset 
        = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) 
           | (IData)(vlSymsp->TOP.reset));
    vlSelf->__PVT__hqa__DOT__fq__DOT__full = ((IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__ptr_match) 
                                              & (IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__maybe_full));
    vlSelf->__PVT__hqa__DOT__fq__DOT__empty = ((IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__ptr_match) 
                                               & (~ (IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__maybe_full)));
    vlSelf->__PVT__hqb__DOT__fq__DOT__full = ((IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__ptr_match) 
                                              & (IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__maybe_full));
    vlSelf->__PVT__hqb__DOT__fq__DOT__empty = ((IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__ptr_match) 
                                               & (~ (IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__maybe_full)));
    vlSelf->__PVT__hqc__DOT__fq__DOT__full = ((IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__ptr_match) 
                                              & (IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__maybe_full));
    vlSelf->__PVT__hqc__DOT__fq__DOT__empty = ((IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__ptr_match) 
                                               & (~ (IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__maybe_full)));
    vlSelf->__PVT__hqd__DOT__fq__DOT__full = ((IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__ptr_match) 
                                              & (IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__maybe_full));
    vlSelf->__PVT__hqd__DOT__fq__DOT__empty = ((IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__ptr_match) 
                                               & (~ (IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__maybe_full)));
    vlSelf->__PVT__hqe__DOT__fq__DOT__full = ((IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__ptr_match) 
                                              & (IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__maybe_full));
    vlSelf->__PVT__hqe__DOT__fq__DOT__empty = ((IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__ptr_match) 
                                               & (~ (IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__maybe_full)));
    vlSelf->__PVT___first_beats_c_T_1 = ((8U & vlSelf->__PVT__b2c_data)
                                          ? (IData)(vlSelf->__PVT__first_beats_beats)
                                          : 0U);
    vlSelf->__PVT___GEN_7 = (7U & ((IData)(vlSelf->__PVT__formatValid)
                                    ? vlSelf->__PVT__b2c_data
                                    : (IData)(vlSelf->__PVT__format_r)));
    vlSelf->__PVT__hqa__DOT__fq__DOT__atLeastTwo = 
        ((IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__full) 
         | (2U <= (0x1fU & ((IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__enq_ptr) 
                            - (IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__deq_ptr)))));
    vlSelf->__PVT__hqb__DOT__fq__DOT__atLeastTwo = 
        ((IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__full) 
         | (2U <= (0x1fU & ((IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__enq_ptr) 
                            - (IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__deq_ptr)))));
    vlSelf->__PVT__hqc__DOT__fq__DOT__atLeastTwo = 
        ((IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__full) 
         | (2U <= (0x1fU & ((IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__enq_ptr) 
                            - (IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__deq_ptr)))));
    vlSelf->__PVT__hqd__DOT__fq__DOT__atLeastTwo = 
        ((IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__full) 
         | (2U <= (0x1fU & ((IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__enq_ptr) 
                            - (IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__deq_ptr)))));
    vlSelf->__PVT__hqe__DOT__fq__DOT__atLeastTwo = 
        ((IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__full) 
         | (2U <= (0x1fU & ((IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__enq_ptr) 
                            - (IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__deq_ptr)))));
    vlSelf->__PVT__tx_z = (0x1fffffU & (vlSelf->__PVT__tx_a 
                                        + ((7U & ((IData)(vlSelf->__PVT__b2c_send) 
                                                  & (((IData)(1U) 
                                                      << (IData)(vlSelf->__PVT___GEN_7)) 
                                                     >> 5U)))
                                            ? ((0x14U 
                                                < (0x1fU 
                                                   & (vlSelf->__PVT__b2c_data 
                                                      >> 7U)))
                                                ? 0xfffffU
                                                : (0xfffffU 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & (vlSelf->__PVT__b2c_data 
                                                           >> 7U))) 
                                                      >> 1U)))
                                            : 0U)));
    vlSelf->__PVT__tx_z_1 = (0x1fffffU & (vlSelf->__PVT__tx_b 
                                          + ((7U & 
                                              ((IData)(vlSelf->__PVT__b2c_send) 
                                               & (((IData)(1U) 
                                                   << (IData)(vlSelf->__PVT___GEN_7)) 
                                                  >> 5U)))
                                              ? ((0x14U 
                                                  < 
                                                  (0x1fU 
                                                   & (vlSelf->__PVT__b2c_data 
                                                      >> 0xcU)))
                                                  ? 0xfffffU
                                                  : 
                                                 (0xfffffU 
                                                  & (((IData)(1U) 
                                                      << 
                                                      (0x1fU 
                                                       & (vlSelf->__PVT__b2c_data 
                                                          >> 0xcU))) 
                                                     >> 1U)))
                                              : 0U)));
    vlSelf->__PVT__tx_z_2 = (0x1fffffU & (vlSelf->__PVT__tx_c 
                                          + ((7U & 
                                              ((IData)(vlSelf->__PVT__b2c_send) 
                                               & (((IData)(1U) 
                                                   << (IData)(vlSelf->__PVT___GEN_7)) 
                                                  >> 5U)))
                                              ? ((0x14U 
                                                  < 
                                                  (0x1fU 
                                                   & (vlSelf->__PVT__b2c_data 
                                                      >> 0x11U)))
                                                  ? 0xfffffU
                                                  : 
                                                 (0xfffffU 
                                                  & (((IData)(1U) 
                                                      << 
                                                      (0x1fU 
                                                       & (vlSelf->__PVT__b2c_data 
                                                          >> 0x11U))) 
                                                     >> 1U)))
                                              : 0U)));
    vlSelf->__PVT__tx_z_3 = (0x1fffffU & (vlSelf->__PVT__tx_d 
                                          + ((7U & 
                                              ((IData)(vlSelf->__PVT__b2c_send) 
                                               & (((IData)(1U) 
                                                   << (IData)(vlSelf->__PVT___GEN_7)) 
                                                  >> 5U)))
                                              ? ((0x14U 
                                                  < 
                                                  (0x1fU 
                                                   & (vlSelf->__PVT__b2c_data 
                                                      >> 0x16U)))
                                                  ? 0xfffffU
                                                  : 
                                                 (0xfffffU 
                                                  & (((IData)(1U) 
                                                      << 
                                                      (0x1fU 
                                                       & (vlSelf->__PVT__b2c_data 
                                                          >> 0x16U))) 
                                                     >> 1U)))
                                              : 0U)));
    vlSelf->__PVT__tx_z_4 = (0x1fffffU & (vlSelf->__PVT__tx_e 
                                          + ((7U & 
                                              ((IData)(vlSelf->__PVT__b2c_send) 
                                               & (((IData)(1U) 
                                                   << (IData)(vlSelf->__PVT___GEN_7)) 
                                                  >> 5U)))
                                              ? ((0x14U 
                                                  < 
                                                  (vlSelf->__PVT__b2c_data 
                                                   >> 0x1bU))
                                                  ? 0xfffffU
                                                  : 
                                                 (0xfffffU 
                                                  & (((IData)(1U) 
                                                      << 
                                                      (vlSelf->__PVT__b2c_data 
                                                       >> 0x1bU)) 
                                                     >> 1U)))
                                              : 0U)));
    vlSelf->__PVT__hqa_io_enq_valid = (0xffU & ((IData)(vlSelf->__PVT__b2c_send) 
                                                & ((IData)(1U) 
                                                   << (IData)(vlSelf->__PVT___GEN_7))));
    vlSelf->__PVT__hqb_io_enq_valid = (0x7fU & ((IData)(vlSelf->__PVT__b2c_send) 
                                                & (((IData)(1U) 
                                                    << (IData)(vlSelf->__PVT___GEN_7)) 
                                                   >> 1U)));
    vlSelf->__PVT__hqc_io_enq_valid = (0x3fU & ((IData)(vlSelf->__PVT__b2c_send) 
                                                & (((IData)(1U) 
                                                    << (IData)(vlSelf->__PVT___GEN_7)) 
                                                   >> 2U)));
    vlSelf->__PVT__hqd_io_enq_valid = (0x1fU & ((IData)(vlSelf->__PVT__b2c_send) 
                                                & (((IData)(1U) 
                                                    << (IData)(vlSelf->__PVT___GEN_7)) 
                                                   >> 3U)));
    vlSelf->__PVT__hqe_io_enq_valid = (0xfU & ((IData)(vlSelf->__PVT__b2c_send) 
                                               & (((IData)(1U) 
                                                   << (IData)(vlSelf->__PVT___GEN_7)) 
                                                  >> 4U)));
    vlSelf->__PVT__hqa__DOT__fq__DOT___do_enq_T = (
                                                   (~ (IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__full)) 
                                                   & (IData)(vlSelf->__PVT__hqa_io_enq_valid));
    vlSelf->__PVT__hqa__DOT__fq_io_deq_valid = ((IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__empty)
                                                 ? (IData)(vlSelf->__PVT__hqa_io_enq_valid)
                                                 : (IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__ram_out_valid));
    vlSelf->__PVT__hqb__DOT__fq__DOT___do_enq_T = (
                                                   (~ (IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__full)) 
                                                   & (IData)(vlSelf->__PVT__hqb_io_enq_valid));
    vlSelf->__PVT__hqb__DOT__fq_io_deq_valid = ((IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__empty)
                                                 ? (IData)(vlSelf->__PVT__hqb_io_enq_valid)
                                                 : (IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__ram_out_valid));
    vlSelf->__PVT__hqc__DOT__fq__DOT___do_enq_T = (
                                                   (~ (IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__full)) 
                                                   & (IData)(vlSelf->__PVT__hqc_io_enq_valid));
    vlSelf->__PVT__hqc__DOT__fq_io_deq_valid = ((IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__empty)
                                                 ? (IData)(vlSelf->__PVT__hqc_io_enq_valid)
                                                 : (IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__ram_out_valid));
    vlSelf->__PVT__hqd__DOT__fq__DOT___do_enq_T = (
                                                   (~ (IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__full)) 
                                                   & (IData)(vlSelf->__PVT__hqd_io_enq_valid));
    vlSelf->__PVT__hqd__DOT__fq_io_deq_valid = ((IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__empty)
                                                 ? (IData)(vlSelf->__PVT__hqd_io_enq_valid)
                                                 : (IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__ram_out_valid));
    vlSelf->__PVT__hqe__DOT__fq__DOT___do_enq_T = (
                                                   (~ (IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__full)) 
                                                   & (IData)(vlSelf->__PVT__hqe_io_enq_valid));
    vlSelf->__PVT__hqe__DOT__fq_io_deq_valid = ((IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__empty)
                                                 ? (IData)(vlSelf->__PVT__hqe_io_enq_valid)
                                                 : (IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__ram_out_valid));
}

void VysyxSoCFull_RX___ctor_var_reset(VysyxSoCFull_RX* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_RX___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_b2c_send = VL_RAND_RESET_I(1);
    vlSelf->io_b2c_data = VL_RAND_RESET_I(32);
    vlSelf->io_a_mem_0 = VL_RAND_RESET_I(32);
    vlSelf->io_a_mem_1 = VL_RAND_RESET_I(32);
    vlSelf->io_a_mem_2 = VL_RAND_RESET_I(32);
    vlSelf->io_a_mem_3 = VL_RAND_RESET_I(32);
    vlSelf->io_a_mem_4 = VL_RAND_RESET_I(32);
    vlSelf->io_a_mem_5 = VL_RAND_RESET_I(32);
    vlSelf->io_a_mem_6 = VL_RAND_RESET_I(32);
    vlSelf->io_a_mem_7 = VL_RAND_RESET_I(32);
    vlSelf->io_a_ridx = VL_RAND_RESET_I(4);
    vlSelf->io_a_widx = VL_RAND_RESET_I(4);
    vlSelf->io_a_safe_ridx_valid = VL_RAND_RESET_I(1);
    vlSelf->io_a_safe_widx_valid = VL_RAND_RESET_I(1);
    vlSelf->io_a_safe_source_reset_n = VL_RAND_RESET_I(1);
    vlSelf->io_a_safe_sink_reset_n = VL_RAND_RESET_I(1);
    vlSelf->io_bmem_0 = VL_RAND_RESET_I(32);
    vlSelf->io_bmem_1 = VL_RAND_RESET_I(32);
    vlSelf->io_bmem_2 = VL_RAND_RESET_I(32);
    vlSelf->io_bmem_3 = VL_RAND_RESET_I(32);
    vlSelf->io_bmem_4 = VL_RAND_RESET_I(32);
    vlSelf->io_bmem_5 = VL_RAND_RESET_I(32);
    vlSelf->io_bmem_6 = VL_RAND_RESET_I(32);
    vlSelf->io_bmem_7 = VL_RAND_RESET_I(32);
    vlSelf->io_bridx = VL_RAND_RESET_I(4);
    vlSelf->io_bwidx = VL_RAND_RESET_I(4);
    vlSelf->io_bsafe_ridx_valid = VL_RAND_RESET_I(1);
    vlSelf->io_bsafe_widx_valid = VL_RAND_RESET_I(1);
    vlSelf->io_bsafe_source_reset_n = VL_RAND_RESET_I(1);
    vlSelf->io_bsafe_sink_reset_n = VL_RAND_RESET_I(1);
    vlSelf->io_c_mem_0 = VL_RAND_RESET_I(32);
    vlSelf->io_c_mem_1 = VL_RAND_RESET_I(32);
    vlSelf->io_c_mem_2 = VL_RAND_RESET_I(32);
    vlSelf->io_c_mem_3 = VL_RAND_RESET_I(32);
    vlSelf->io_c_mem_4 = VL_RAND_RESET_I(32);
    vlSelf->io_c_mem_5 = VL_RAND_RESET_I(32);
    vlSelf->io_c_mem_6 = VL_RAND_RESET_I(32);
    vlSelf->io_c_mem_7 = VL_RAND_RESET_I(32);
    vlSelf->io_c_ridx = VL_RAND_RESET_I(4);
    vlSelf->io_c_widx = VL_RAND_RESET_I(4);
    vlSelf->io_c_safe_ridx_valid = VL_RAND_RESET_I(1);
    vlSelf->io_c_safe_widx_valid = VL_RAND_RESET_I(1);
    vlSelf->io_c_safe_source_reset_n = VL_RAND_RESET_I(1);
    vlSelf->io_c_safe_sink_reset_n = VL_RAND_RESET_I(1);
    vlSelf->io_d_mem_0 = VL_RAND_RESET_I(32);
    vlSelf->io_d_mem_1 = VL_RAND_RESET_I(32);
    vlSelf->io_d_mem_2 = VL_RAND_RESET_I(32);
    vlSelf->io_d_mem_3 = VL_RAND_RESET_I(32);
    vlSelf->io_d_mem_4 = VL_RAND_RESET_I(32);
    vlSelf->io_d_mem_5 = VL_RAND_RESET_I(32);
    vlSelf->io_d_mem_6 = VL_RAND_RESET_I(32);
    vlSelf->io_d_mem_7 = VL_RAND_RESET_I(32);
    vlSelf->io_d_ridx = VL_RAND_RESET_I(4);
    vlSelf->io_d_widx = VL_RAND_RESET_I(4);
    vlSelf->io_d_safe_ridx_valid = VL_RAND_RESET_I(1);
    vlSelf->io_d_safe_widx_valid = VL_RAND_RESET_I(1);
    vlSelf->io_d_safe_source_reset_n = VL_RAND_RESET_I(1);
    vlSelf->io_d_safe_sink_reset_n = VL_RAND_RESET_I(1);
    vlSelf->io_e_mem_0 = VL_RAND_RESET_I(32);
    vlSelf->io_e_mem_1 = VL_RAND_RESET_I(32);
    vlSelf->io_e_mem_2 = VL_RAND_RESET_I(32);
    vlSelf->io_e_mem_3 = VL_RAND_RESET_I(32);
    vlSelf->io_e_mem_4 = VL_RAND_RESET_I(32);
    vlSelf->io_e_mem_5 = VL_RAND_RESET_I(32);
    vlSelf->io_e_mem_6 = VL_RAND_RESET_I(32);
    vlSelf->io_e_mem_7 = VL_RAND_RESET_I(32);
    vlSelf->io_e_ridx = VL_RAND_RESET_I(4);
    vlSelf->io_e_widx = VL_RAND_RESET_I(4);
    vlSelf->io_e_safe_ridx_valid = VL_RAND_RESET_I(1);
    vlSelf->io_e_safe_widx_valid = VL_RAND_RESET_I(1);
    vlSelf->io_e_safe_source_reset_n = VL_RAND_RESET_I(1);
    vlSelf->io_e_safe_sink_reset_n = VL_RAND_RESET_I(1);
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
    vlSelf->__PVT__hqa_io_enq_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqb_io_enq_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqc_io_enq_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqd_io_enq_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqe_io_enq_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_txc_source_io_enq_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_rxc_source_io_enq_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__b2c_data_REG = VL_RAND_RESET_I(32);
    vlSelf->__PVT__b2c_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__b2c_send_REG = VL_RAND_RESET_I(1);
    vlSelf->__PVT__b2c_send = VL_RAND_RESET_I(1);
    vlSelf->__PVT__first_count = VL_RAND_RESET_I(5);
    vlSelf->__PVT__first_beats_beats = VL_RAND_RESET_I(5);
    vlSelf->__PVT___first_beats_c_T_1 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__first = VL_RAND_RESET_I(1);
    vlSelf->__PVT___first_count_T_1 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__formatValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__format_r = VL_RAND_RESET_I(3);
    vlSelf->__PVT___GEN_7 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__tx_a = VL_RAND_RESET_I(20);
    vlSelf->__PVT__tx_b = VL_RAND_RESET_I(20);
    vlSelf->__PVT__tx_c = VL_RAND_RESET_I(20);
    vlSelf->__PVT__tx_d = VL_RAND_RESET_I(20);
    vlSelf->__PVT__tx_e = VL_RAND_RESET_I(20);
    vlSelf->__PVT__rx_a = VL_RAND_RESET_I(20);
    vlSelf->__PVT__rx_b = VL_RAND_RESET_I(20);
    vlSelf->__PVT__rx_c = VL_RAND_RESET_I(20);
    vlSelf->__PVT__rx_d = VL_RAND_RESET_I(20);
    vlSelf->__PVT__rx_e = VL_RAND_RESET_I(20);
    vlSelf->__PVT___rxInc_a_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT___rxInc_bT = VL_RAND_RESET_I(1);
    vlSelf->__PVT___rxInc_c_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT___rxInc_d_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT___rxInc_e_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tx_z = VL_RAND_RESET_I(21);
    vlSelf->__PVT__tx_z_1 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__tx_z_2 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__tx_z_3 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__tx_z_4 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__rx_z = VL_RAND_RESET_I(21);
    vlSelf->__PVT__rx_z_1 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__rx_z_2 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__rx_z_3 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__rx_z_4 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__hqa__DOT__fq_io_deq_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqa__DOT__io_deq_q_io_enq_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqa__DOT__fq__DOT__ram_R0_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqa__DOT__fq__DOT___do_enq_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqa__DOT__fq__DOT__enq_ptr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__hqa__DOT__fq__DOT__deq_ptr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__hqa__DOT__fq__DOT__ptr_match = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqa__DOT__fq__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqa__DOT__fq__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqa__DOT__fq__DOT__do_flow = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqa__DOT__fq__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqa__DOT__fq__DOT__do_deq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqa__DOT__fq__DOT___enq_ptr_wrap_value_T_1 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__hqa__DOT__fq__DOT___wrap_value_T_1 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__hqa__DOT__fq__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqa__DOT__fq__DOT__atLeastTwo = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqa__DOT__fq__DOT__ram_out_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_ren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_addr = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__PVT__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__hqa__DOT__io_deq_q__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__hqa__DOT__io_deq_q__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqa__DOT__io_deq_q__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqa__DOT__io_deq_q__DOT__do_deq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqb__DOT__fq_io_deq_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqb__DOT__io_deq_q_io_enq_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqb__DOT__fq__DOT__ram_R0_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqb__DOT__fq__DOT___do_enq_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqb__DOT__fq__DOT__enq_ptr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__hqb__DOT__fq__DOT__deq_ptr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__hqb__DOT__fq__DOT__ptr_match = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqb__DOT__fq__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqb__DOT__fq__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqb__DOT__fq__DOT__do_flow = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqb__DOT__fq__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqb__DOT__fq__DOT__do_deq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqb__DOT__fq__DOT___enq_ptr_wrap_value_T_1 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__hqb__DOT__fq__DOT___wrap_value_T_1 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__hqb__DOT__fq__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqb__DOT__fq__DOT__atLeastTwo = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqb__DOT__fq__DOT__ram_out_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_ren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_addr = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__PVT__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__hqb__DOT__io_deq_q__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__hqb__DOT__io_deq_q__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqb__DOT__io_deq_q__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqb__DOT__io_deq_q__DOT__do_deq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqc__DOT__fq_io_deq_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqc__DOT__io_deq_q_io_enq_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqc__DOT__fq__DOT__ram_R0_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqc__DOT__fq__DOT___do_enq_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqc__DOT__fq__DOT__enq_ptr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__hqc__DOT__fq__DOT__deq_ptr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__hqc__DOT__fq__DOT__ptr_match = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqc__DOT__fq__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqc__DOT__fq__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqc__DOT__fq__DOT__do_flow = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqc__DOT__fq__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqc__DOT__fq__DOT__do_deq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqc__DOT__fq__DOT___enq_ptr_wrap_value_T_1 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__hqc__DOT__fq__DOT___wrap_value_T_1 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__hqc__DOT__fq__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqc__DOT__fq__DOT__atLeastTwo = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqc__DOT__fq__DOT__ram_out_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_ren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_addr = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__PVT__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__hqc__DOT__io_deq_q__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__hqc__DOT__io_deq_q__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqc__DOT__io_deq_q__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqc__DOT__io_deq_q__DOT__do_deq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqd__DOT__fq_io_deq_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqd__DOT__io_deq_q_io_enq_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqd__DOT__fq__DOT__ram_R0_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqd__DOT__fq__DOT___do_enq_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqd__DOT__fq__DOT__enq_ptr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__hqd__DOT__fq__DOT__deq_ptr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__hqd__DOT__fq__DOT__ptr_match = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqd__DOT__fq__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqd__DOT__fq__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqd__DOT__fq__DOT__do_flow = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqd__DOT__fq__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqd__DOT__fq__DOT__do_deq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqd__DOT__fq__DOT___enq_ptr_wrap_value_T_1 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__hqd__DOT__fq__DOT___wrap_value_T_1 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__hqd__DOT__fq__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqd__DOT__fq__DOT__atLeastTwo = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqd__DOT__fq__DOT__ram_out_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_ren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_addr = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__PVT__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__hqd__DOT__io_deq_q__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__hqd__DOT__io_deq_q__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqd__DOT__io_deq_q__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqd__DOT__io_deq_q__DOT__do_deq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqe__DOT__fq_io_deq_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqe__DOT__io_deq_q_io_enq_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqe__DOT__fq__DOT__ram_R0_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqe__DOT__fq__DOT___do_enq_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqe__DOT__fq__DOT__enq_ptr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__hqe__DOT__fq__DOT__deq_ptr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__hqe__DOT__fq__DOT__ptr_match = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqe__DOT__fq__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqe__DOT__fq__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqe__DOT__fq__DOT__do_flow = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqe__DOT__fq__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqe__DOT__fq__DOT__do_deq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqe__DOT__fq__DOT___enq_ptr_wrap_value_T_1 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__hqe__DOT__fq__DOT___wrap_value_T_1 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__hqe__DOT__fq__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqe__DOT__fq__DOT__atLeastTwo = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqe__DOT__fq__DOT__ram_out_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_ren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_addr = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__PVT__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__hqe__DOT__io_deq_q__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__hqe__DOT__io_deq_q__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqe__DOT__io_deq_q__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hqe__DOT__io_deq_q__DOT__do_deq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_txc_source__DOT__source_valid_0_reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_txc_source__DOT__mem_0_a = VL_RAND_RESET_I(20);
    vlSelf->__PVT__io_txc_source__DOT__mem_0_b = VL_RAND_RESET_I(20);
    vlSelf->__PVT__io_txc_source__DOT__mem_0_c = VL_RAND_RESET_I(20);
    vlSelf->__PVT__io_txc_source__DOT__mem_0_d = VL_RAND_RESET_I(20);
    vlSelf->__PVT__io_txc_source__DOT__mem_0_e = VL_RAND_RESET_I(20);
    vlSelf->__PVT__io_txc_source__DOT__widx_widx_bin = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_txc_source__DOT__ready_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_txc_source__DOT__widx_gray = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_rxc_source__DOT__mem_0_a = VL_RAND_RESET_I(20);
    vlSelf->__PVT__io_rxc_source__DOT__mem_0_b = VL_RAND_RESET_I(20);
    vlSelf->__PVT__io_rxc_source__DOT__mem_0_c = VL_RAND_RESET_I(20);
    vlSelf->__PVT__io_rxc_source__DOT__mem_0_d = VL_RAND_RESET_I(20);
    vlSelf->__PVT__io_rxc_source__DOT__mem_0_e = VL_RAND_RESET_I(20);
    vlSelf->__PVT__io_rxc_source__DOT__widx_widx_bin = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_rxc_source__DOT__ready_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_rxc_source__DOT__widx_gray = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__hqa__DOT__io_deq_q__DOT__ram__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__hqa__DOT__io_deq_q__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvval__hqb__DOT__io_deq_q__DOT__ram__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__hqb__DOT__io_deq_q__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvval__hqc__DOT__io_deq_q__DOT__ram__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__hqc__DOT__io_deq_q__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvval__hqd__DOT__io_deq_q__DOT__ram__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__hqd__DOT__io_deq_q__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvval__hqe__DOT__io_deq_q__DOT__ram__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__hqe__DOT__io_deq_q__DOT__ram__v0 = 0;
}
