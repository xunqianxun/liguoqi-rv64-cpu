// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull_AsyncQueueSource.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__19(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__19\n"); );
    // Body
    if (vlSelf->__PVT___widx_T_1) {
        if ((7U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_7 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((6U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_6 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((5U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_5 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((4U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_4 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((3U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_3 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((2U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_2 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((1U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_1 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((0U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_0 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__31(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__31\n"); );
    // Body
    if (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__widx_gray = 0U;
        vlSelf->__PVT__widx_widx_bin = 0U;
    } else {
        vlSelf->__PVT__widx_gray = ((IData)(vlSelf->__PVT__widx_incremented) 
                                    ^ (7U & ((IData)(vlSelf->__PVT__widx_incremented) 
                                             >> 1U)));
        vlSelf->__PVT__widx_widx_bin = ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                         ? (IData)(vlSelf->__PVT___widx_incremented_T_1)
                                         : 0U);
    }
    vlSelf->__PVT__ready_reg = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                                & ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                   & (((IData)(vlSelf->__PVT__widx_incremented) 
                                       ^ (7U & ((IData)(vlSelf->__PVT__widx_incremented) 
                                                >> 1U))) 
                                      != (0xcU ^ ((
                                                   ((IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                    << 3U) 
                                                   | ((IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))))));
    vlSelf->__PVT__index = (7U & ((IData)(vlSelf->__PVT__widx_gray) 
                                  ^ (4U & ((IData)(vlSelf->__PVT__widx_gray) 
                                           >> 1U))));
    vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__io_enq_ready = ((IData)(vlSelf->__PVT__ready_reg) 
                                   & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT___widx_T_1 = ((IData)(vlSelf->__PVT__io_enq_ready) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__maybe_full));
    vlSelf->__PVT___widx_incremented_T_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__widx_widx_bin) 
                                             + (IData)(vlSelf->__PVT___widx_T_1)));
    vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                    >> 3U)));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                    >> 2U)));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                    >> 1U)));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray)));
    vlSelf->__PVT__widx_incremented = ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                        ? (IData)(vlSelf->__PVT___widx_incremented_T_1)
                                        : 0U);
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__51(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__51\n"); );
    // Body
    vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->__PVT__source_valid_0_reset)));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__61(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__61\n"); );
    // Body
    vlSelf->__PVT__source_valid_0_reset = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) 
                                           | (IData)(vlSymsp->TOP.reset));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource__13(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource__13\n"); );
    // Body
    if (vlSelf->__PVT___widx_T_1) {
        if ((7U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_7 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((6U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_6 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((5U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_5 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((4U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_4 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((3U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_3 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((2U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_2 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((1U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_1 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((0U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_0 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource__32(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource__32\n"); );
    // Body
    if (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__widx_gray = 0U;
        vlSelf->__PVT__widx_widx_bin = 0U;
    } else {
        vlSelf->__PVT__widx_gray = ((IData)(vlSelf->__PVT__widx_incremented) 
                                    ^ (7U & ((IData)(vlSelf->__PVT__widx_incremented) 
                                             >> 1U)));
        vlSelf->__PVT__widx_widx_bin = ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                         ? (IData)(vlSelf->__PVT___widx_incremented_T_1)
                                         : 0U);
    }
    vlSelf->__PVT__ready_reg = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                                & ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                   & (((IData)(vlSelf->__PVT__widx_incremented) 
                                       ^ (7U & ((IData)(vlSelf->__PVT__widx_incremented) 
                                                >> 1U))) 
                                      != (0xcU ^ ((
                                                   ((IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                    << 3U) 
                                                   | ((IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))))));
    vlSelf->__PVT__index = (7U & ((IData)(vlSelf->__PVT__widx_gray) 
                                  ^ (4U & ((IData)(vlSelf->__PVT__widx_gray) 
                                           >> 1U))));
    vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__io_enq_ready = ((IData)(vlSelf->__PVT__ready_reg) 
                                   & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT___widx_T_1 = ((IData)(vlSelf->__PVT__io_enq_ready) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__maybe_full));
    vlSelf->__PVT___widx_incremented_T_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__widx_widx_bin) 
                                             + (IData)(vlSelf->__PVT___widx_T_1)));
    vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                    >> 3U)));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                    >> 2U)));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                    >> 1U)));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray)));
    vlSelf->__PVT__widx_incremented = ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                        ? (IData)(vlSelf->__PVT___widx_incremented_T_1)
                                        : 0U);
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource__52(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource__52\n"); );
    // Body
    vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->__PVT__source_valid_0_reset)));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source__15(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source__15\n"); );
    // Body
    if (vlSelf->__PVT___widx_T_1) {
        if ((7U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_7 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((6U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_6 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((5U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_5 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((4U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_4 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((3U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_3 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((2U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_2 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((1U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_1 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((0U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_0 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source__33(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source__33\n"); );
    // Body
    if (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__widx_gray = 0U;
        vlSelf->__PVT__widx_widx_bin = 0U;
    } else {
        vlSelf->__PVT__widx_gray = ((IData)(vlSelf->__PVT__widx_incremented) 
                                    ^ (7U & ((IData)(vlSelf->__PVT__widx_incremented) 
                                             >> 1U)));
        vlSelf->__PVT__widx_widx_bin = ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                         ? (IData)(vlSelf->__PVT___widx_incremented_T_1)
                                         : 0U);
    }
    vlSelf->__PVT__ready_reg = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                                & ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                   & (((IData)(vlSelf->__PVT__widx_incremented) 
                                       ^ (7U & ((IData)(vlSelf->__PVT__widx_incremented) 
                                                >> 1U))) 
                                      != (0xcU ^ ((
                                                   ((IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                    << 3U) 
                                                   | ((IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))))));
    vlSelf->__PVT__index = (7U & ((IData)(vlSelf->__PVT__widx_gray) 
                                  ^ (4U & ((IData)(vlSelf->__PVT__widx_gray) 
                                           >> 1U))));
    vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__io_enq_ready = ((IData)(vlSelf->__PVT__ready_reg) 
                                   & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT___widx_T_1 = ((IData)(vlSelf->__PVT__io_enq_ready) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__maybe_full));
    vlSelf->__PVT___widx_incremented_T_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__widx_widx_bin) 
                                             + (IData)(vlSelf->__PVT___widx_T_1)));
    vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                    >> 3U)));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                    >> 2U)));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                    >> 1U)));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray)));
    vlSelf->__PVT__widx_incremented = ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                        ? (IData)(vlSelf->__PVT___widx_incremented_T_1)
                                        : 0U);
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source__53(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source__53\n"); );
    // Body
    vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->__PVT__source_valid_0_reset)));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source__18(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source__18\n"); );
    // Body
    if (vlSelf->__PVT___widx_T_1) {
        if ((7U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_7 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((6U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_6 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((5U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_5 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((4U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_4 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((3U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_3 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((2U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_2 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((1U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_1 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((0U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_0 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source__34(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source__34\n"); );
    // Body
    if (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__widx_gray = 0U;
        vlSelf->__PVT__widx_widx_bin = 0U;
    } else {
        vlSelf->__PVT__widx_gray = ((IData)(vlSelf->__PVT__widx_incremented) 
                                    ^ (7U & ((IData)(vlSelf->__PVT__widx_incremented) 
                                             >> 1U)));
        vlSelf->__PVT__widx_widx_bin = ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                         ? (IData)(vlSelf->__PVT___widx_incremented_T_1)
                                         : 0U);
    }
    vlSelf->__PVT__ready_reg = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                                & ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                   & (((IData)(vlSelf->__PVT__widx_incremented) 
                                       ^ (7U & ((IData)(vlSelf->__PVT__widx_incremented) 
                                                >> 1U))) 
                                      != (0xcU ^ ((
                                                   ((IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                    << 3U) 
                                                   | ((IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))))));
    vlSelf->__PVT__index = (7U & ((IData)(vlSelf->__PVT__widx_gray) 
                                  ^ (4U & ((IData)(vlSelf->__PVT__widx_gray) 
                                           >> 1U))));
    vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__io_enq_ready = ((IData)(vlSelf->__PVT__ready_reg) 
                                   & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT___widx_T_1 = ((IData)(vlSelf->__PVT__io_enq_ready) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__maybe_full));
    vlSelf->__PVT___widx_incremented_T_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__widx_widx_bin) 
                                             + (IData)(vlSelf->__PVT___widx_T_1)));
    vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                    >> 3U)));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                    >> 2U)));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                    >> 1U)));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray)));
    vlSelf->__PVT__widx_incremented = ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                        ? (IData)(vlSelf->__PVT___widx_incremented_T_1)
                                        : 0U);
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source__54(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source__54\n"); );
    // Body
    vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->__PVT__source_valid_0_reset)));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source__11(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source__11\n"); );
    // Body
    if (vlSelf->__PVT___widx_T_1) {
        if ((7U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_7 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((6U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_6 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((5U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_5 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((4U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_4 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((3U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_3 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((2U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_2 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((1U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_1 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((0U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_0 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source__35(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source__35\n"); );
    // Body
    if (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__widx_gray = 0U;
        vlSelf->__PVT__widx_widx_bin = 0U;
    } else {
        vlSelf->__PVT__widx_gray = ((IData)(vlSelf->__PVT__widx_incremented) 
                                    ^ (7U & ((IData)(vlSelf->__PVT__widx_incremented) 
                                             >> 1U)));
        vlSelf->__PVT__widx_widx_bin = ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                         ? (IData)(vlSelf->__PVT___widx_incremented_T_1)
                                         : 0U);
    }
    vlSelf->__PVT__ready_reg = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                                & ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                   & (((IData)(vlSelf->__PVT__widx_incremented) 
                                       ^ (7U & ((IData)(vlSelf->__PVT__widx_incremented) 
                                                >> 1U))) 
                                      != (0xcU ^ ((
                                                   ((IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                    << 3U) 
                                                   | ((IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))))));
    vlSelf->__PVT__index = (7U & ((IData)(vlSelf->__PVT__widx_gray) 
                                  ^ (4U & ((IData)(vlSelf->__PVT__widx_gray) 
                                           >> 1U))));
    vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__io_enq_ready = ((IData)(vlSelf->__PVT__ready_reg) 
                                   & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT___widx_T_1 = ((IData)(vlSelf->__PVT__io_enq_ready) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__maybe_full));
    vlSelf->__PVT___widx_incremented_T_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__widx_widx_bin) 
                                             + (IData)(vlSelf->__PVT___widx_T_1)));
    vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                    >> 3U)));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                    >> 2U)));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                    >> 1U)));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray)));
    vlSelf->__PVT__widx_incremented = ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                        ? (IData)(vlSelf->__PVT___widx_incremented_T_1)
                                        : 0U);
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source__55(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source__55\n"); );
    // Body
    vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->__PVT__source_valid_0_reset)));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__20(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__20\n"); );
    // Body
    if (vlSelf->__PVT___widx_T_1) {
        if ((7U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_7 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((6U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_6 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((5U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_5 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((4U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_4 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((3U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_3 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((2U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_2 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((1U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_1 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((0U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_0 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__36(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__36\n"); );
    // Body
    if (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__widx_gray = 0U;
        vlSelf->__PVT__widx_widx_bin = 0U;
    } else {
        vlSelf->__PVT__widx_gray = ((IData)(vlSelf->__PVT__widx_incremented) 
                                    ^ (7U & ((IData)(vlSelf->__PVT__widx_incremented) 
                                             >> 1U)));
        vlSelf->__PVT__widx_widx_bin = ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                         ? (IData)(vlSelf->__PVT___widx_incremented_T_1)
                                         : 0U);
    }
    vlSelf->__PVT__ready_reg = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                                & ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                   & (((IData)(vlSelf->__PVT__widx_incremented) 
                                       ^ (7U & ((IData)(vlSelf->__PVT__widx_incremented) 
                                                >> 1U))) 
                                      != (0xcU ^ ((
                                                   ((IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                    << 3U) 
                                                   | ((IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))))));
    vlSelf->__PVT__index = (7U & ((IData)(vlSelf->__PVT__widx_gray) 
                                  ^ (4U & ((IData)(vlSelf->__PVT__widx_gray) 
                                           >> 1U))));
    vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__io_enq_ready = ((IData)(vlSelf->__PVT__ready_reg) 
                                   & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT___widx_T_1 = ((IData)(vlSelf->__PVT__io_enq_ready) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__maybe_full));
    vlSelf->__PVT___widx_incremented_T_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__widx_widx_bin) 
                                             + (IData)(vlSelf->__PVT___widx_T_1)));
    vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                    >> 3U)));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                    >> 2U)));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                    >> 1U)));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray)));
    vlSelf->__PVT__widx_incremented = ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                        ? (IData)(vlSelf->__PVT___widx_incremented_T_1)
                                        : 0U);
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__56(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__56\n"); );
    // Body
    vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->__PVT__source_valid_0_reset)));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource___combo__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__66(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___combo__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__66\n"); );
    // Body
    vlSelf->__PVT__source_valid_0_reset = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) 
                                           | (IData)(vlSymsp->TOP.reset));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource__14(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource__14\n"); );
    // Body
    if (vlSelf->__PVT___widx_T_1) {
        if ((7U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_7 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((6U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_6 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((5U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_5 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((4U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_4 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((3U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_3 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((2U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_2 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((1U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_1 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((0U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_0 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource__37(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource__37\n"); );
    // Body
    if (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__widx_gray = 0U;
        vlSelf->__PVT__widx_widx_bin = 0U;
    } else {
        vlSelf->__PVT__widx_gray = ((IData)(vlSelf->__PVT__widx_incremented) 
                                    ^ (7U & ((IData)(vlSelf->__PVT__widx_incremented) 
                                             >> 1U)));
        vlSelf->__PVT__widx_widx_bin = ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                         ? (IData)(vlSelf->__PVT___widx_incremented_T_1)
                                         : 0U);
    }
    vlSelf->__PVT__ready_reg = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                                & ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                   & (((IData)(vlSelf->__PVT__widx_incremented) 
                                       ^ (7U & ((IData)(vlSelf->__PVT__widx_incremented) 
                                                >> 1U))) 
                                      != (0xcU ^ ((
                                                   ((IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                    << 3U) 
                                                   | ((IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))))));
    vlSelf->__PVT__index = (7U & ((IData)(vlSelf->__PVT__widx_gray) 
                                  ^ (4U & ((IData)(vlSelf->__PVT__widx_gray) 
                                           >> 1U))));
    vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__io_enq_ready = ((IData)(vlSelf->__PVT__ready_reg) 
                                   & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT___widx_T_1 = ((IData)(vlSelf->__PVT__io_enq_ready) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__maybe_full));
    vlSelf->__PVT___widx_incremented_T_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__widx_widx_bin) 
                                             + (IData)(vlSelf->__PVT___widx_T_1)));
    vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                    >> 3U)));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                    >> 2U)));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                    >> 1U)));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray)));
    vlSelf->__PVT__widx_incremented = ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                        ? (IData)(vlSelf->__PVT___widx_incremented_T_1)
                                        : 0U);
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource__57(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource__57\n"); );
    // Body
    vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->__PVT__source_valid_0_reset)));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source__16(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source__16\n"); );
    // Body
    if (vlSelf->__PVT___widx_T_1) {
        if ((7U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_7 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((6U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_6 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((5U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_5 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((4U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_4 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((3U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_3 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((2U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_2 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((1U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_1 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((0U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_0 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source__38(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source__38\n"); );
    // Body
    if (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__widx_gray = 0U;
        vlSelf->__PVT__widx_widx_bin = 0U;
    } else {
        vlSelf->__PVT__widx_gray = ((IData)(vlSelf->__PVT__widx_incremented) 
                                    ^ (7U & ((IData)(vlSelf->__PVT__widx_incremented) 
                                             >> 1U)));
        vlSelf->__PVT__widx_widx_bin = ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                         ? (IData)(vlSelf->__PVT___widx_incremented_T_1)
                                         : 0U);
    }
    vlSelf->__PVT__ready_reg = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                                & ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                   & (((IData)(vlSelf->__PVT__widx_incremented) 
                                       ^ (7U & ((IData)(vlSelf->__PVT__widx_incremented) 
                                                >> 1U))) 
                                      != (0xcU ^ ((
                                                   ((IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                    << 3U) 
                                                   | ((IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))))));
    vlSelf->__PVT__index = (7U & ((IData)(vlSelf->__PVT__widx_gray) 
                                  ^ (4U & ((IData)(vlSelf->__PVT__widx_gray) 
                                           >> 1U))));
    vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__io_enq_ready = ((IData)(vlSelf->__PVT__ready_reg) 
                                   & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT___widx_T_1 = ((IData)(vlSelf->__PVT__io_enq_ready) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__maybe_full));
    vlSelf->__PVT___widx_incremented_T_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__widx_widx_bin) 
                                             + (IData)(vlSelf->__PVT___widx_T_1)));
    vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                    >> 3U)));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                    >> 2U)));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                    >> 1U)));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray)));
    vlSelf->__PVT__widx_incremented = ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                        ? (IData)(vlSelf->__PVT___widx_incremented_T_1)
                                        : 0U);
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source__58(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source__58\n"); );
    // Body
    vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->__PVT__source_valid_0_reset)));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source__17(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source__17\n"); );
    // Body
    if (vlSelf->__PVT___widx_T_1) {
        if ((7U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_7 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((6U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_6 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((5U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_5 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((4U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_4 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((3U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_3 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((2U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_2 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((1U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_1 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((0U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_0 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source__39(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source__39\n"); );
    // Body
    if (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__widx_gray = 0U;
        vlSelf->__PVT__widx_widx_bin = 0U;
    } else {
        vlSelf->__PVT__widx_gray = ((IData)(vlSelf->__PVT__widx_incremented) 
                                    ^ (7U & ((IData)(vlSelf->__PVT__widx_incremented) 
                                             >> 1U)));
        vlSelf->__PVT__widx_widx_bin = ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                         ? (IData)(vlSelf->__PVT___widx_incremented_T_1)
                                         : 0U);
    }
    vlSelf->__PVT__ready_reg = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                                & ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                   & (((IData)(vlSelf->__PVT__widx_incremented) 
                                       ^ (7U & ((IData)(vlSelf->__PVT__widx_incremented) 
                                                >> 1U))) 
                                      != (0xcU ^ ((
                                                   ((IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                    << 3U) 
                                                   | ((IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))))));
    vlSelf->__PVT__index = (7U & ((IData)(vlSelf->__PVT__widx_gray) 
                                  ^ (4U & ((IData)(vlSelf->__PVT__widx_gray) 
                                           >> 1U))));
    vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__io_enq_ready = ((IData)(vlSelf->__PVT__ready_reg) 
                                   & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT___widx_T_1 = ((IData)(vlSelf->__PVT__io_enq_ready) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__maybe_full));
    vlSelf->__PVT___widx_incremented_T_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__widx_widx_bin) 
                                             + (IData)(vlSelf->__PVT___widx_T_1)));
    vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                    >> 3U)));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                    >> 2U)));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                    >> 1U)));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray)));
    vlSelf->__PVT__widx_incremented = ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                        ? (IData)(vlSelf->__PVT___widx_incremented_T_1)
                                        : 0U);
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source__59(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source__59\n"); );
    // Body
    vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->__PVT__source_valid_0_reset)));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source__12(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source__12\n"); );
    // Body
    if (vlSelf->__PVT___widx_T_1) {
        if ((7U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_7 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((6U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_6 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((5U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_5 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((4U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_4 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((3U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_3 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((2U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_2 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((1U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_1 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlSelf->__PVT___widx_T_1) {
        if ((0U == (IData)(vlSelf->__PVT__index))) {
            vlSelf->__PVT__mem_0 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source__40(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source__40\n"); );
    // Body
    if (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__widx_gray = 0U;
        vlSelf->__PVT__widx_widx_bin = 0U;
    } else {
        vlSelf->__PVT__widx_gray = ((IData)(vlSelf->__PVT__widx_incremented) 
                                    ^ (7U & ((IData)(vlSelf->__PVT__widx_incremented) 
                                             >> 1U)));
        vlSelf->__PVT__widx_widx_bin = ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                         ? (IData)(vlSelf->__PVT___widx_incremented_T_1)
                                         : 0U);
    }
    vlSelf->__PVT__ready_reg = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                                & ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                   & (((IData)(vlSelf->__PVT__widx_incremented) 
                                       ^ (7U & ((IData)(vlSelf->__PVT__widx_incremented) 
                                                >> 1U))) 
                                      != (0xcU ^ ((
                                                   ((IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                    << 3U) 
                                                   | ((IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))))));
    vlSelf->__PVT__index = (7U & ((IData)(vlSelf->__PVT__widx_gray) 
                                  ^ (4U & ((IData)(vlSelf->__PVT__widx_gray) 
                                           >> 1U))));
    vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__io_enq_ready = ((IData)(vlSelf->__PVT__ready_reg) 
                                   & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT___widx_T_1 = ((IData)(vlSelf->__PVT__io_enq_ready) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__maybe_full));
    vlSelf->__PVT___widx_incremented_T_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__widx_widx_bin) 
                                             + (IData)(vlSelf->__PVT___widx_T_1)));
    vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                    >> 3U)));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                    >> 2U)));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                    >> 1U)));
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray)));
    vlSelf->__PVT__widx_incremented = ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                        ? (IData)(vlSelf->__PVT___widx_incremented_T_1)
                                        : 0U);
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source__60(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source__60\n"); );
    // Body
    vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->__PVT__source_valid_0_reset)));
}
