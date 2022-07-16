// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull_AsyncQueueSink.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

//==========


void VysyxSoCFull_AsyncQueueSink___ctor_var_reset(VysyxSoCFull_AsyncQueueSink* vlSelf);

VysyxSoCFull_AsyncQueueSink::VysyxSoCFull_AsyncQueueSink(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VysyxSoCFull_AsyncQueueSink___ctor_var_reset(this);
}

void VysyxSoCFull_AsyncQueueSink::__Vconfigure(VysyxSoCFull__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VysyxSoCFull_AsyncQueueSink::~VysyxSoCFull_AsyncQueueSink() {
}

void VysyxSoCFull_AsyncQueueSink___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__1(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__1\n"); );
    // Body
    vlSelf->__PVT__widx_widx_gray_io_q = ((((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                            << 3U) 
                                           | ((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                              << 2U)) 
                                          | (((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlSelf->io_deq_valid = ((IData)(vlSelf->__PVT__valid_reg) 
                            & (IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__sink_valid_0_reset = ((IData)(vlSymsp->TOP.reset) 
                                         | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_));
}

void VysyxSoCFull_AsyncQueueSink___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__11(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__11\n"); );
    // Body
    vlSelf->__PVT___ridx_incremented_T_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__ridx_ridx_bin) 
                                             + ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_ready) 
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

void VysyxSoCFull_AsyncQueueSink___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__2(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__2\n"); );
    // Body
    vlSelf->__PVT__widx_widx_gray_io_q = ((((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                            << 3U) 
                                           | ((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                              << 2U)) 
                                          | (((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlSelf->io_deq_valid = ((IData)(vlSelf->__PVT__valid_reg) 
                            & (IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__sink_valid_0_reset = ((IData)(vlSymsp->TOP.reset) 
                                         | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_));
    vlSelf->__PVT___ridx_incremented_T_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__ridx_ridx_bin) 
                                             + ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_ready) 
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

void VysyxSoCFull_AsyncQueueSink___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__3(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__3\n"); );
    // Body
    vlSelf->__PVT__widx_widx_gray_io_q = ((((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                            << 3U) 
                                           | ((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                              << 2U)) 
                                          | (((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlSelf->io_deq_valid = ((IData)(vlSelf->__PVT__valid_reg) 
                            & (IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__sink_valid_0_reset = ((IData)(vlSymsp->TOP.reset) 
                                         | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_));
    vlSelf->__PVT___ridx_incremented_T_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__ridx_ridx_bin) 
                                             + ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_ready) 
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

void VysyxSoCFull_AsyncQueueSink___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__5(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__5\n"); );
    // Body
    vlSelf->__PVT__widx_widx_gray_io_q = ((((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                            << 3U) 
                                           | ((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                              << 2U)) 
                                          | (((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlSelf->io_deq_valid = ((IData)(vlSelf->__PVT__valid_reg) 
                            & (IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__sink_valid_0_reset = ((IData)(vlSymsp->TOP.reset) 
                                         | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_));
    vlSelf->__PVT___ridx_incremented_T_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__ridx_ridx_bin) 
                                             + (((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                                                 & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c))) 
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

void VysyxSoCFull_AsyncQueueSink___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__6(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__6\n"); );
    // Body
    vlSelf->__PVT__widx_widx_gray_io_q = ((((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                            << 3U) 
                                           | ((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                              << 2U)) 
                                          | (((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlSelf->io_deq_valid = ((IData)(vlSelf->__PVT__valid_reg) 
                            & (IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__sink_valid_0_reset = ((IData)(vlSymsp->TOP.reset) 
                                         | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_));
}

void VysyxSoCFull_AsyncQueueSink___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__7(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__7\n"); );
    // Body
    vlSelf->__PVT__widx_widx_gray_io_q = ((((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                            << 3U) 
                                           | ((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                              << 2U)) 
                                          | (((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlSelf->io_deq_valid = ((IData)(vlSelf->__PVT__valid_reg) 
                            & (IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__sink_valid_0_reset = ((IData)(vlSymsp->TOP.reset) 
                                         | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_));
    vlSelf->__PVT___ridx_incremented_T_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__ridx_ridx_bin) 
                                             + ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_ready) 
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

void VysyxSoCFull_AsyncQueueSink___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__8(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__8\n"); );
    // Body
    vlSelf->__PVT__widx_widx_gray_io_q = ((((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                            << 3U) 
                                           | ((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                              << 2U)) 
                                          | (((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlSelf->io_deq_valid = ((IData)(vlSelf->__PVT__valid_reg) 
                            & (IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__sink_valid_0_reset = ((IData)(vlSymsp->TOP.reset) 
                                         | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_));
    vlSelf->__PVT___ridx_incremented_T_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__ridx_ridx_bin) 
                                             + ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_ready) 
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

void VysyxSoCFull_AsyncQueueSink___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__10(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__10\n"); );
    // Body
    vlSelf->__PVT__widx_widx_gray_io_q = ((((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                            << 3U) 
                                           | ((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                                              << 2U)) 
                                          | (((IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlSelf->io_deq_valid = ((IData)(vlSelf->__PVT__valid_reg) 
                            & (IData)(vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__sink_valid_0_reset = ((IData)(vlSymsp->TOP.reset) 
                                         | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_));
    vlSelf->__PVT___ridx_incremented_T_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__ridx_ridx_bin) 
                                             + (((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                                                 & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass_c))) 
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

void VysyxSoCFull_AsyncQueueSink___ctor_var_reset(VysyxSoCFull_AsyncQueueSink* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_AsyncQueueSink___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_deq_ready = VL_RAND_RESET_I(1);
    vlSelf->io_deq_valid = VL_RAND_RESET_I(1);
    vlSelf->io_deq_bits = VL_RAND_RESET_I(32);
    vlSelf->io_async_mem_0 = VL_RAND_RESET_I(32);
    vlSelf->io_async_mem_1 = VL_RAND_RESET_I(32);
    vlSelf->io_async_mem_2 = VL_RAND_RESET_I(32);
    vlSelf->io_async_mem_3 = VL_RAND_RESET_I(32);
    vlSelf->io_async_mem_4 = VL_RAND_RESET_I(32);
    vlSelf->io_async_mem_5 = VL_RAND_RESET_I(32);
    vlSelf->io_async_mem_6 = VL_RAND_RESET_I(32);
    vlSelf->io_async_mem_7 = VL_RAND_RESET_I(32);
    vlSelf->io_async_ridx = VL_RAND_RESET_I(4);
    vlSelf->io_async_widx = VL_RAND_RESET_I(4);
    vlSelf->io_async_safe_ridx_valid = VL_RAND_RESET_I(1);
    vlSelf->io_async_safe_widx_valid = VL_RAND_RESET_I(1);
    vlSelf->io_async_safe_source_reset_n = VL_RAND_RESET_I(1);
    vlSelf->io_async_safe_sink_reset_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__widx_widx_gray_io_q = VL_RAND_RESET_I(4);
    vlSelf->__PVT__sink_valid_0_reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ridx_ridx_bin = VL_RAND_RESET_I(4);
    vlSelf->__PVT___ridx_incremented_T_1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__ridx_incremented = VL_RAND_RESET_I(4);
    vlSelf->__PVT__ridx = VL_RAND_RESET_I(4);
    vlSelf->__PVT__index = VL_RAND_RESET_I(3);
    vlSelf->__PVT__valid_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ridx_gray = VL_RAND_RESET_I(4);
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_RAND_RESET_I(1);
}
