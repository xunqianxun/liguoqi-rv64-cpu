// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull_AsyncQueueSink.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__9(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__9\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
         & ((IData)(vlSelf->__PVT__ridx) != (IData)(vlSelf->__PVT__widx_widx_gray_io_q)))) {
        vlSelf->__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = ((7U == (IData)(vlSelf->__PVT__index))
                ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_7
                : ((6U == (IData)(vlSelf->__PVT__index))
                    ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_6
                    : ((5U == (IData)(vlSelf->__PVT__index))
                        ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_5
                        : ((4U == (IData)(vlSelf->__PVT__index))
                            ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_4
                            : ((3U == (IData)(vlSelf->__PVT__index))
                                ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_3
                                : ((2U == (IData)(vlSelf->__PVT__index))
                                    ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_2
                                    : ((1U == (IData)(vlSelf->__PVT__index))
                                        ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_1
                                        : vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_0)))))));
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__21(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__21\n"); );
    // Body
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_bin = ((IData)(vlSymsp->TOP.reset)
                                     ? 0U : ((IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                              ? (IData)(vlSelf->__PVT___ridx_incremented_T_1)
                                              : 0U));
    vlSelf->__PVT__valid_reg = ((~ (IData)(vlSymsp->TOP.reset)) 
                                & ((IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                   & ((IData)(vlSelf->__PVT__ridx) 
                                      != (IData)(vlSelf->__PVT__widx_widx_gray_io_q))));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->__PVT__widx_widx_gray_io_q = ((((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                            << 3U) 
                                           | ((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                              << 2U)) 
                                          | (((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                  >> 1U)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                  >> 2U)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                  >> 3U)));
    vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->io_deq_valid = ((IData)(vlSelf->__PVT__valid_reg) 
                            & (IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__45(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__45\n"); );
    // Body
    vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__sink_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__sink_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->__PVT__sink_valid_0_reset)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___multiclk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__55(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___multiclk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__55\n"); );
    // Body
    vlSelf->__PVT___ridx_incremented_T_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__ridx_ridx_bin) 
                                             + ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_ready) 
                                                & (IData)(vlSelf->io_deq_valid))));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__56(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__56\n"); );
    // Body
    vlSelf->__PVT__ridx_gray = ((IData)(vlSymsp->TOP.reset)
                                 ? 0U : ((IData)(vlSelf->__PVT__ridx_incremented) 
                                         ^ (7U & ((IData)(vlSelf->__PVT__ridx_incremented) 
                                                  >> 1U))));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__69(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__69\n"); );
    // Body
    vlSelf->__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__sink_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__sink_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->__PVT__sink_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__sink_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__sink_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->__PVT__sink_valid_0_reset)));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___multiclk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__70(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___multiclk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__70\n"); );
    // Body
    vlSelf->__PVT__ridx_incremented = ((IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                        ? (IData)(vlSelf->__PVT___ridx_incremented_T_1)
                                        : 0U);
    vlSelf->__PVT__ridx = ((IData)(vlSelf->__PVT__ridx_incremented) 
                           ^ (7U & ((IData)(vlSelf->__PVT__ridx_incremented) 
                                    >> 1U)));
    vlSelf->__PVT__index = (7U & ((IData)(vlSelf->__PVT__ridx) 
                                  ^ (4U & ((IData)(vlSelf->__PVT__ridx) 
                                           >> 1U))));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__80(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__80\n"); );
    // Body
    vlSelf->__PVT__sink_valid_0_reset = ((IData)(vlSymsp->TOP.reset) 
                                         | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__3(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__3\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
         & ((IData)(vlSelf->__PVT__ridx) != (IData)(vlSelf->__PVT__widx_widx_gray_io_q)))) {
        vlSelf->__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = ((7U == (IData)(vlSelf->__PVT__index))
                ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_7
                : ((6U == (IData)(vlSelf->__PVT__index))
                    ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_6
                    : ((5U == (IData)(vlSelf->__PVT__index))
                        ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_5
                        : ((4U == (IData)(vlSelf->__PVT__index))
                            ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_4
                            : ((3U == (IData)(vlSelf->__PVT__index))
                                ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_3
                                : ((2U == (IData)(vlSelf->__PVT__index))
                                    ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_2
                                    : ((1U == (IData)(vlSelf->__PVT__index))
                                        ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_1
                                        : vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_0)))))));
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__22(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__22\n"); );
    // Body
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_bin = ((IData)(vlSymsp->TOP.reset)
                                     ? 0U : ((IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                              ? (IData)(vlSelf->__PVT___ridx_incremented_T_1)
                                              : 0U));
    vlSelf->__PVT__valid_reg = ((~ (IData)(vlSymsp->TOP.reset)) 
                                & ((IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                   & ((IData)(vlSelf->__PVT__ridx) 
                                      != (IData)(vlSelf->__PVT__widx_widx_gray_io_q))));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->__PVT__widx_widx_gray_io_q = ((((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                            << 3U) 
                                           | ((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                              << 2U)) 
                                          | (((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                  >> 1U)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                  >> 2U)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                  >> 3U)));
    vlSelf->io_deq_valid = ((IData)(vlSelf->__PVT__valid_reg) 
                            & (IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT___ridx_incremented_T_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__ridx_ridx_bin) 
                                             + ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_ready) 
                                                & (IData)(vlSelf->io_deq_valid))));
    vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__46(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__46\n"); );
    // Body
    vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__sink_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__sink_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->__PVT__sink_valid_0_reset)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__57(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__57\n"); );
    // Body
    vlSelf->__PVT__ridx_gray = ((IData)(vlSymsp->TOP.reset)
                                 ? 0U : ((IData)(vlSelf->__PVT__ridx_incremented) 
                                         ^ (7U & ((IData)(vlSelf->__PVT__ridx_incremented) 
                                                  >> 1U))));
    vlSelf->__PVT__ridx_incremented = ((IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                        ? (IData)(vlSelf->__PVT___ridx_incremented_T_1)
                                        : 0U);
    vlSelf->__PVT__ridx = ((IData)(vlSelf->__PVT__ridx_incremented) 
                           ^ (7U & ((IData)(vlSelf->__PVT__ridx_incremented) 
                                    >> 1U)));
    vlSelf->__PVT__index = (7U & ((IData)(vlSelf->__PVT__ridx) 
                                  ^ (4U & ((IData)(vlSelf->__PVT__ridx) 
                                           >> 1U))));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__5(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__5\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
         & ((IData)(vlSelf->__PVT__ridx) != (IData)(vlSelf->__PVT__widx_widx_gray_io_q)))) {
        vlSelf->__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = ((7U == (IData)(vlSelf->__PVT__index))
                ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_7
                : ((6U == (IData)(vlSelf->__PVT__index))
                    ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_6
                    : ((5U == (IData)(vlSelf->__PVT__index))
                        ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_5
                        : ((4U == (IData)(vlSelf->__PVT__index))
                            ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_4
                            : ((3U == (IData)(vlSelf->__PVT__index))
                                ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_3
                                : ((2U == (IData)(vlSelf->__PVT__index))
                                    ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_2
                                    : ((1U == (IData)(vlSelf->__PVT__index))
                                        ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_1
                                        : vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_0)))))));
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__23(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__23\n"); );
    // Body
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_bin = ((IData)(vlSymsp->TOP.reset)
                                     ? 0U : ((IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                              ? (IData)(vlSelf->__PVT___ridx_incremented_T_1)
                                              : 0U));
    vlSelf->__PVT__valid_reg = ((~ (IData)(vlSymsp->TOP.reset)) 
                                & ((IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                   & ((IData)(vlSelf->__PVT__ridx) 
                                      != (IData)(vlSelf->__PVT__widx_widx_gray_io_q))));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->__PVT__widx_widx_gray_io_q = ((((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                            << 3U) 
                                           | ((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                              << 2U)) 
                                          | (((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                  >> 1U)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                  >> 2U)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                  >> 3U)));
    vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->io_deq_valid = ((IData)(vlSelf->__PVT__valid_reg) 
                            & (IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT___ridx_incremented_T_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__ridx_ridx_bin) 
                                             + ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_ready) 
                                                & (IData)(vlSelf->io_deq_valid))));
    vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__47(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__47\n"); );
    // Body
    vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__sink_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__sink_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->__PVT__sink_valid_0_reset)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__8(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__8\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
         & ((IData)(vlSelf->__PVT__ridx) != (IData)(vlSelf->__PVT__widx_widx_gray_io_q)))) {
        vlSelf->__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = ((7U == (IData)(vlSelf->__PVT__index))
                ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_7
                : ((6U == (IData)(vlSelf->__PVT__index))
                    ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_6
                    : ((5U == (IData)(vlSelf->__PVT__index))
                        ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_5
                        : ((4U == (IData)(vlSelf->__PVT__index))
                            ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_4
                            : ((3U == (IData)(vlSelf->__PVT__index))
                                ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_3
                                : ((2U == (IData)(vlSelf->__PVT__index))
                                    ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_2
                                    : ((1U == (IData)(vlSelf->__PVT__index))
                                        ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_1
                                        : vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_0)))))));
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__24(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__24\n"); );
    // Body
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_bin = ((IData)(vlSymsp->TOP.reset)
                                     ? 0U : ((IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                              ? (IData)(vlSelf->__PVT___ridx_incremented_T_1)
                                              : 0U));
    vlSelf->__PVT__valid_reg = ((~ (IData)(vlSymsp->TOP.reset)) 
                                & ((IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                   & ((IData)(vlSelf->__PVT__ridx) 
                                      != (IData)(vlSelf->__PVT__widx_widx_gray_io_q))));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->__PVT__widx_widx_gray_io_q = ((((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                            << 3U) 
                                           | ((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                              << 2U)) 
                                          | (((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                  >> 1U)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                  >> 2U)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                  >> 3U)));
    vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->io_deq_valid = ((IData)(vlSelf->__PVT__valid_reg) 
                            & (IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__44(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__44\n"); );
    // Body
    vlSelf->__PVT___ridx_incremented_T_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__ridx_ridx_bin) 
                                             + ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_ready) 
                                                & (IData)(vlSelf->io_deq_valid))));
    vlSelf->__PVT__ridx_incremented = ((IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                        ? (IData)(vlSelf->__PVT___ridx_incremented_T_1)
                                        : 0U);
    vlSelf->__PVT__ridx = ((IData)(vlSelf->__PVT__ridx_incremented) 
                           ^ (7U & ((IData)(vlSelf->__PVT__ridx_incremented) 
                                    >> 1U)));
    vlSelf->__PVT__index = (7U & ((IData)(vlSelf->__PVT__ridx) 
                                  ^ (4U & ((IData)(vlSelf->__PVT__ridx) 
                                           >> 1U))));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__48(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__48\n"); );
    // Body
    vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__sink_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__sink_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->__PVT__sink_valid_0_reset)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__1(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
         & ((IData)(vlSelf->__PVT__ridx) != (IData)(vlSelf->__PVT__widx_widx_gray_io_q)))) {
        vlSelf->__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = ((7U == (IData)(vlSelf->__PVT__index))
                ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_7
                : ((6U == (IData)(vlSelf->__PVT__index))
                    ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_6
                    : ((5U == (IData)(vlSelf->__PVT__index))
                        ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_5
                        : ((4U == (IData)(vlSelf->__PVT__index))
                            ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_4
                            : ((3U == (IData)(vlSelf->__PVT__index))
                                ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_3
                                : ((2U == (IData)(vlSelf->__PVT__index))
                                    ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_2
                                    : ((1U == (IData)(vlSelf->__PVT__index))
                                        ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_1
                                        : vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_0)))))));
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__25(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__25\n"); );
    // Body
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_bin = ((IData)(vlSymsp->TOP.reset)
                                     ? 0U : ((IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                              ? (IData)(vlSelf->__PVT___ridx_incremented_T_1)
                                              : 0U));
    vlSelf->__PVT__valid_reg = ((~ (IData)(vlSymsp->TOP.reset)) 
                                & ((IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                   & ((IData)(vlSelf->__PVT__ridx) 
                                      != (IData)(vlSelf->__PVT__widx_widx_gray_io_q))));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->__PVT__widx_widx_gray_io_q = ((((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                            << 3U) 
                                           | ((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                              << 2U)) 
                                          | (((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                  >> 1U)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                  >> 2U)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                  >> 3U)));
    vlSelf->io_deq_valid = ((IData)(vlSelf->__PVT__valid_reg) 
                            & (IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT___ridx_incremented_T_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__ridx_ridx_bin) 
                                             + (((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                                                 & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c))) 
                                                & (IData)(vlSelf->io_deq_valid))));
    vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__49(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__49\n"); );
    // Body
    vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__sink_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__sink_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->__PVT__sink_valid_0_reset)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__10(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__10\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
         & ((IData)(vlSelf->__PVT__ridx) != (IData)(vlSelf->__PVT__widx_widx_gray_io_q)))) {
        vlSelf->__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = ((7U == (IData)(vlSelf->__PVT__index))
                ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_7
                : ((6U == (IData)(vlSelf->__PVT__index))
                    ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_6
                    : ((5U == (IData)(vlSelf->__PVT__index))
                        ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_5
                        : ((4U == (IData)(vlSelf->__PVT__index))
                            ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_4
                            : ((3U == (IData)(vlSelf->__PVT__index))
                                ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_3
                                : ((2U == (IData)(vlSelf->__PVT__index))
                                    ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_2
                                    : ((1U == (IData)(vlSelf->__PVT__index))
                                        ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_1
                                        : vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_0)))))));
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__26(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__26\n"); );
    // Body
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_bin = ((IData)(vlSymsp->TOP.reset)
                                     ? 0U : ((IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                              ? (IData)(vlSelf->__PVT___ridx_incremented_T_1)
                                              : 0U));
    vlSelf->__PVT__valid_reg = ((~ (IData)(vlSymsp->TOP.reset)) 
                                & ((IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                   & ((IData)(vlSelf->__PVT__ridx) 
                                      != (IData)(vlSelf->__PVT__widx_widx_gray_io_q))));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->__PVT__widx_widx_gray_io_q = ((((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                            << 3U) 
                                           | ((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                              << 2U)) 
                                          | (((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                  >> 1U)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                  >> 2U)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                  >> 3U)));
    vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->io_deq_valid = ((IData)(vlSelf->__PVT__valid_reg) 
                            & (IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__42(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__42\n"); );
    // Body
    vlSelf->__PVT___ridx_incremented_T_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__ridx_ridx_bin) 
                                             + ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_ready) 
                                                & (IData)(vlSelf->io_deq_valid))));
    vlSelf->__PVT__ridx_incremented = ((IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                        ? (IData)(vlSelf->__PVT___ridx_incremented_T_1)
                                        : 0U);
    vlSelf->__PVT__ridx = ((IData)(vlSelf->__PVT__ridx_incremented) 
                           ^ (7U & ((IData)(vlSelf->__PVT__ridx_incremented) 
                                    >> 1U)));
    vlSelf->__PVT__index = (7U & ((IData)(vlSelf->__PVT__ridx) 
                                  ^ (4U & ((IData)(vlSelf->__PVT__ridx) 
                                           >> 1U))));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__50(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__50\n"); );
    // Body
    vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__sink_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__sink_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->__PVT__sink_valid_0_reset)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___combo__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__85(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___combo__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__85\n"); );
    // Body
    vlSelf->__PVT__sink_valid_0_reset = ((IData)(vlSymsp->TOP.reset) 
                                         | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__4(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__4\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
         & ((IData)(vlSelf->__PVT__ridx) != (IData)(vlSelf->__PVT__widx_widx_gray_io_q)))) {
        vlSelf->__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = ((7U == (IData)(vlSelf->__PVT__index))
                ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_7
                : ((6U == (IData)(vlSelf->__PVT__index))
                    ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_6
                    : ((5U == (IData)(vlSelf->__PVT__index))
                        ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_5
                        : ((4U == (IData)(vlSelf->__PVT__index))
                            ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_4
                            : ((3U == (IData)(vlSelf->__PVT__index))
                                ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_3
                                : ((2U == (IData)(vlSelf->__PVT__index))
                                    ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_2
                                    : ((1U == (IData)(vlSelf->__PVT__index))
                                        ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_1
                                        : vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__mem_0)))))));
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__27(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__27\n"); );
    // Body
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_bin = ((IData)(vlSymsp->TOP.reset)
                                     ? 0U : ((IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                              ? (IData)(vlSelf->__PVT___ridx_incremented_T_1)
                                              : 0U));
    vlSelf->__PVT__valid_reg = ((~ (IData)(vlSymsp->TOP.reset)) 
                                & ((IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                   & ((IData)(vlSelf->__PVT__ridx) 
                                      != (IData)(vlSelf->__PVT__widx_widx_gray_io_q))));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->__PVT__widx_widx_gray_io_q = ((((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                            << 3U) 
                                           | ((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                              << 2U)) 
                                          | (((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                  >> 1U)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                  >> 2U)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                  >> 3U)));
    vlSelf->io_deq_valid = ((IData)(vlSelf->__PVT__valid_reg) 
                            & (IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT___ridx_incremented_T_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__ridx_ridx_bin) 
                                             + ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_ready) 
                                                & (IData)(vlSelf->io_deq_valid))));
    vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__51(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__51\n"); );
    // Body
    vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__sink_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__sink_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->__PVT__sink_valid_0_reset)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__6(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__6\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
         & ((IData)(vlSelf->__PVT__ridx) != (IData)(vlSelf->__PVT__widx_widx_gray_io_q)))) {
        vlSelf->__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = ((7U == (IData)(vlSelf->__PVT__index))
                ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_7
                : ((6U == (IData)(vlSelf->__PVT__index))
                    ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_6
                    : ((5U == (IData)(vlSelf->__PVT__index))
                        ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_5
                        : ((4U == (IData)(vlSelf->__PVT__index))
                            ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_4
                            : ((3U == (IData)(vlSelf->__PVT__index))
                                ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_3
                                : ((2U == (IData)(vlSelf->__PVT__index))
                                    ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_2
                                    : ((1U == (IData)(vlSelf->__PVT__index))
                                        ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_1
                                        : vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__mem_0)))))));
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__28(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__28\n"); );
    // Body
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_bin = ((IData)(vlSymsp->TOP.reset)
                                     ? 0U : ((IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                              ? (IData)(vlSelf->__PVT___ridx_incremented_T_1)
                                              : 0U));
    vlSelf->__PVT__valid_reg = ((~ (IData)(vlSymsp->TOP.reset)) 
                                & ((IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                   & ((IData)(vlSelf->__PVT__ridx) 
                                      != (IData)(vlSelf->__PVT__widx_widx_gray_io_q))));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->__PVT__widx_widx_gray_io_q = ((((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                            << 3U) 
                                           | ((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                              << 2U)) 
                                          | (((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                  >> 1U)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                  >> 2U)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                  >> 3U)));
    vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->io_deq_valid = ((IData)(vlSelf->__PVT__valid_reg) 
                            & (IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT___ridx_incremented_T_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__ridx_ridx_bin) 
                                             + ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_ready) 
                                                & (IData)(vlSelf->io_deq_valid))));
    vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__52(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__52\n"); );
    // Body
    vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__sink_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__sink_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->__PVT__sink_valid_0_reset)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__7(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__7\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
         & ((IData)(vlSelf->__PVT__ridx) != (IData)(vlSelf->__PVT__widx_widx_gray_io_q)))) {
        vlSelf->__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = ((7U == (IData)(vlSelf->__PVT__index))
                ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_7
                : ((6U == (IData)(vlSelf->__PVT__index))
                    ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_6
                    : ((5U == (IData)(vlSelf->__PVT__index))
                        ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_5
                        : ((4U == (IData)(vlSelf->__PVT__index))
                            ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_4
                            : ((3U == (IData)(vlSelf->__PVT__index))
                                ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_3
                                : ((2U == (IData)(vlSelf->__PVT__index))
                                    ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_2
                                    : ((1U == (IData)(vlSelf->__PVT__index))
                                        ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_1
                                        : vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_0)))))));
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__29(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__29\n"); );
    // Body
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_bin = ((IData)(vlSymsp->TOP.reset)
                                     ? 0U : ((IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                              ? (IData)(vlSelf->__PVT___ridx_incremented_T_1)
                                              : 0U));
    vlSelf->__PVT__valid_reg = ((~ (IData)(vlSymsp->TOP.reset)) 
                                & ((IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                   & ((IData)(vlSelf->__PVT__ridx) 
                                      != (IData)(vlSelf->__PVT__widx_widx_gray_io_q))));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->__PVT__widx_widx_gray_io_q = ((((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                            << 3U) 
                                           | ((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                              << 2U)) 
                                          | (((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                  >> 1U)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                  >> 2U)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                  >> 3U)));
    vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->io_deq_valid = ((IData)(vlSelf->__PVT__valid_reg) 
                            & (IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__43(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__43\n"); );
    // Body
    vlSelf->__PVT___ridx_incremented_T_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__ridx_ridx_bin) 
                                             + ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_ready) 
                                                & (IData)(vlSelf->io_deq_valid))));
    vlSelf->__PVT__ridx_incremented = ((IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                        ? (IData)(vlSelf->__PVT___ridx_incremented_T_1)
                                        : 0U);
    vlSelf->__PVT__ridx = ((IData)(vlSelf->__PVT__ridx_incremented) 
                           ^ (7U & ((IData)(vlSelf->__PVT__ridx_incremented) 
                                    >> 1U)));
    vlSelf->__PVT__index = (7U & ((IData)(vlSelf->__PVT__ridx) 
                                  ^ (4U & ((IData)(vlSelf->__PVT__ridx) 
                                           >> 1U))));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__53(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__53\n"); );
    // Body
    vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__sink_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__sink_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->__PVT__sink_valid_0_reset)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__2(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
         & ((IData)(vlSelf->__PVT__ridx) != (IData)(vlSelf->__PVT__widx_widx_gray_io_q)))) {
        vlSelf->__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = ((7U == (IData)(vlSelf->__PVT__index))
                ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_7
                : ((6U == (IData)(vlSelf->__PVT__index))
                    ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_6
                    : ((5U == (IData)(vlSelf->__PVT__index))
                        ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_5
                        : ((4U == (IData)(vlSelf->__PVT__index))
                            ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_4
                            : ((3U == (IData)(vlSelf->__PVT__index))
                                ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_3
                                : ((2U == (IData)(vlSelf->__PVT__index))
                                    ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_2
                                    : ((1U == (IData)(vlSelf->__PVT__index))
                                        ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_1
                                        : vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__mem_0)))))));
    }
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__30(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__30\n"); );
    // Body
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->__PVT__ridx_ridx_bin = ((IData)(vlSymsp->TOP.reset)
                                     ? 0U : ((IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                              ? (IData)(vlSelf->__PVT___ridx_incremented_T_1)
                                              : 0U));
    vlSelf->__PVT__valid_reg = ((~ (IData)(vlSymsp->TOP.reset)) 
                                & ((IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                   & ((IData)(vlSelf->__PVT__ridx) 
                                      != (IData)(vlSelf->__PVT__widx_widx_gray_io_q))));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->__PVT__widx_widx_gray_io_q = ((((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                            << 3U) 
                                           | ((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                              << 2U)) 
                                          | (((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                  >> 1U)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                  >> 2U)));
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                  >> 3U)));
    vlSelf->io_deq_valid = ((IData)(vlSelf->__PVT__valid_reg) 
                            & (IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT___ridx_incremented_T_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__ridx_ridx_bin) 
                                             + (((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                                                 & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass_c))) 
                                                & (IData)(vlSelf->io_deq_valid))));
    vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__54(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__54\n"); );
    // Body
    vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__sink_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__sink_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->__PVT__sink_valid_0_reset)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}
