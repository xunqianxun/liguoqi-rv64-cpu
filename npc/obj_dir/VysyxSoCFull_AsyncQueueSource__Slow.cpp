// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull_AsyncQueueSource.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

//==========


void VysyxSoCFull_AsyncQueueSource___ctor_var_reset(VysyxSoCFull_AsyncQueueSource* vlSelf);

VysyxSoCFull_AsyncQueueSource::VysyxSoCFull_AsyncQueueSource(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VysyxSoCFull_AsyncQueueSource___ctor_var_reset(this);
}

void VysyxSoCFull_AsyncQueueSource::__Vconfigure(VysyxSoCFull__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VysyxSoCFull_AsyncQueueSource::~VysyxSoCFull_AsyncQueueSource() {
}

void VysyxSoCFull_AsyncQueueSource___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__1(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__1\n"); );
    // Body
    vlSelf->__PVT__io_enq_ready = ((IData)(vlSelf->__PVT__ready_reg) 
                                   & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__index = (7U & ((IData)(vlSelf->__PVT__widx_gray) 
                                  ^ (4U & ((IData)(vlSelf->__PVT__widx_gray) 
                                           >> 1U))));
    vlSelf->__PVT__source_valid_0_reset = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) 
                                           | (IData)(vlSymsp->TOP.reset));
    vlSelf->__PVT___widx_T_1 = ((IData)(vlSelf->__PVT__io_enq_ready) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__maybe_full));
    vlSelf->__PVT___widx_incremented_T_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__widx_widx_bin) 
                                             + (IData)(vlSelf->__PVT___widx_T_1)));
    vlSelf->__PVT__widx_incremented = ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                        ? (IData)(vlSelf->__PVT___widx_incremented_T_1)
                                        : 0U);
}

void VysyxSoCFull_AsyncQueueSource___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource__2(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource__2\n"); );
    // Body
    vlSelf->__PVT__io_enq_ready = ((IData)(vlSelf->__PVT__ready_reg) 
                                   & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__index = (7U & ((IData)(vlSelf->__PVT__widx_gray) 
                                  ^ (4U & ((IData)(vlSelf->__PVT__widx_gray) 
                                           >> 1U))));
    vlSelf->__PVT__source_valid_0_reset = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) 
                                           | (IData)(vlSymsp->TOP.reset));
    vlSelf->__PVT___widx_T_1 = ((IData)(vlSelf->__PVT__io_enq_ready) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__maybe_full));
    vlSelf->__PVT___widx_incremented_T_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__widx_widx_bin) 
                                             + (IData)(vlSelf->__PVT___widx_T_1)));
    vlSelf->__PVT__widx_incremented = ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                        ? (IData)(vlSelf->__PVT___widx_incremented_T_1)
                                        : 0U);
}

void VysyxSoCFull_AsyncQueueSource___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source__3(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source__3\n"); );
    // Body
    vlSelf->__PVT__io_enq_ready = ((IData)(vlSelf->__PVT__ready_reg) 
                                   & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__index = (7U & ((IData)(vlSelf->__PVT__widx_gray) 
                                  ^ (4U & ((IData)(vlSelf->__PVT__widx_gray) 
                                           >> 1U))));
    vlSelf->__PVT__source_valid_0_reset = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) 
                                           | (IData)(vlSymsp->TOP.reset));
    vlSelf->__PVT___widx_T_1 = ((IData)(vlSelf->__PVT__io_enq_ready) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__maybe_full));
    vlSelf->__PVT___widx_incremented_T_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__widx_widx_bin) 
                                             + (IData)(vlSelf->__PVT___widx_T_1)));
    vlSelf->__PVT__widx_incremented = ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                        ? (IData)(vlSelf->__PVT___widx_incremented_T_1)
                                        : 0U);
}

void VysyxSoCFull_AsyncQueueSource___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source__4(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source__4\n"); );
    // Body
    vlSelf->__PVT__io_enq_ready = ((IData)(vlSelf->__PVT__ready_reg) 
                                   & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__index = (7U & ((IData)(vlSelf->__PVT__widx_gray) 
                                  ^ (4U & ((IData)(vlSelf->__PVT__widx_gray) 
                                           >> 1U))));
    vlSelf->__PVT__source_valid_0_reset = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) 
                                           | (IData)(vlSymsp->TOP.reset));
    vlSelf->__PVT___widx_T_1 = ((IData)(vlSelf->__PVT__io_enq_ready) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__maybe_full));
    vlSelf->__PVT___widx_incremented_T_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__widx_widx_bin) 
                                             + (IData)(vlSelf->__PVT___widx_T_1)));
    vlSelf->__PVT__widx_incremented = ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                        ? (IData)(vlSelf->__PVT___widx_incremented_T_1)
                                        : 0U);
}

void VysyxSoCFull_AsyncQueueSource___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source__5(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source__5\n"); );
    // Body
    vlSelf->__PVT__io_enq_ready = ((IData)(vlSelf->__PVT__ready_reg) 
                                   & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__index = (7U & ((IData)(vlSelf->__PVT__widx_gray) 
                                  ^ (4U & ((IData)(vlSelf->__PVT__widx_gray) 
                                           >> 1U))));
    vlSelf->__PVT__source_valid_0_reset = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) 
                                           | (IData)(vlSymsp->TOP.reset));
    vlSelf->__PVT___widx_T_1 = ((IData)(vlSelf->__PVT__io_enq_ready) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__maybe_full));
    vlSelf->__PVT___widx_incremented_T_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__widx_widx_bin) 
                                             + (IData)(vlSelf->__PVT___widx_T_1)));
    vlSelf->__PVT__widx_incremented = ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                        ? (IData)(vlSelf->__PVT___widx_incremented_T_1)
                                        : 0U);
}

void VysyxSoCFull_AsyncQueueSource___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__6(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__6\n"); );
    // Body
    vlSelf->__PVT__io_enq_ready = ((IData)(vlSelf->__PVT__ready_reg) 
                                   & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__index = (7U & ((IData)(vlSelf->__PVT__widx_gray) 
                                  ^ (4U & ((IData)(vlSelf->__PVT__widx_gray) 
                                           >> 1U))));
    vlSelf->__PVT__source_valid_0_reset = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) 
                                           | (IData)(vlSymsp->TOP.reset));
    vlSelf->__PVT___widx_T_1 = ((IData)(vlSelf->__PVT__io_enq_ready) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__maybe_full));
    vlSelf->__PVT___widx_incremented_T_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__widx_widx_bin) 
                                             + (IData)(vlSelf->__PVT___widx_T_1)));
    vlSelf->__PVT__widx_incremented = ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                        ? (IData)(vlSelf->__PVT___widx_incremented_T_1)
                                        : 0U);
}

void VysyxSoCFull_AsyncQueueSource___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource__7(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource__7\n"); );
    // Body
    vlSelf->__PVT__io_enq_ready = ((IData)(vlSelf->__PVT__ready_reg) 
                                   & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__index = (7U & ((IData)(vlSelf->__PVT__widx_gray) 
                                  ^ (4U & ((IData)(vlSelf->__PVT__widx_gray) 
                                           >> 1U))));
    vlSelf->__PVT__source_valid_0_reset = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) 
                                           | (IData)(vlSymsp->TOP.reset));
    vlSelf->__PVT___widx_T_1 = ((IData)(vlSelf->__PVT__io_enq_ready) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__maybe_full));
    vlSelf->__PVT___widx_incremented_T_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__widx_widx_bin) 
                                             + (IData)(vlSelf->__PVT___widx_T_1)));
    vlSelf->__PVT__widx_incremented = ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                        ? (IData)(vlSelf->__PVT___widx_incremented_T_1)
                                        : 0U);
}

void VysyxSoCFull_AsyncQueueSource___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source__8(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source__8\n"); );
    // Body
    vlSelf->__PVT__io_enq_ready = ((IData)(vlSelf->__PVT__ready_reg) 
                                   & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__index = (7U & ((IData)(vlSelf->__PVT__widx_gray) 
                                  ^ (4U & ((IData)(vlSelf->__PVT__widx_gray) 
                                           >> 1U))));
    vlSelf->__PVT__source_valid_0_reset = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) 
                                           | (IData)(vlSymsp->TOP.reset));
    vlSelf->__PVT___widx_T_1 = ((IData)(vlSelf->__PVT__io_enq_ready) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__maybe_full));
    vlSelf->__PVT___widx_incremented_T_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__widx_widx_bin) 
                                             + (IData)(vlSelf->__PVT___widx_T_1)));
    vlSelf->__PVT__widx_incremented = ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                        ? (IData)(vlSelf->__PVT___widx_incremented_T_1)
                                        : 0U);
}

void VysyxSoCFull_AsyncQueueSource___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source__9(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source__9\n"); );
    // Body
    vlSelf->__PVT__io_enq_ready = ((IData)(vlSelf->__PVT__ready_reg) 
                                   & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__index = (7U & ((IData)(vlSelf->__PVT__widx_gray) 
                                  ^ (4U & ((IData)(vlSelf->__PVT__widx_gray) 
                                           >> 1U))));
    vlSelf->__PVT__source_valid_0_reset = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) 
                                           | (IData)(vlSymsp->TOP.reset));
    vlSelf->__PVT___widx_T_1 = ((IData)(vlSelf->__PVT__io_enq_ready) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__maybe_full));
    vlSelf->__PVT___widx_incremented_T_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__widx_widx_bin) 
                                             + (IData)(vlSelf->__PVT___widx_T_1)));
    vlSelf->__PVT__widx_incremented = ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                        ? (IData)(vlSelf->__PVT___widx_incremented_T_1)
                                        : 0U);
}

void VysyxSoCFull_AsyncQueueSource___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source__10(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source__10\n"); );
    // Body
    vlSelf->__PVT__io_enq_ready = ((IData)(vlSelf->__PVT__ready_reg) 
                                   & (IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__index = (7U & ((IData)(vlSelf->__PVT__widx_gray) 
                                  ^ (4U & ((IData)(vlSelf->__PVT__widx_gray) 
                                           >> 1U))));
    vlSelf->__PVT__source_valid_0_reset = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) 
                                           | (IData)(vlSymsp->TOP.reset));
    vlSelf->__PVT___widx_T_1 = ((IData)(vlSelf->__PVT__io_enq_ready) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__maybe_full));
    vlSelf->__PVT___widx_incremented_T_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__widx_widx_bin) 
                                             + (IData)(vlSelf->__PVT___widx_T_1)));
    vlSelf->__PVT__widx_incremented = ((IData)(vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                        ? (IData)(vlSelf->__PVT___widx_incremented_T_1)
                                        : 0U);
}

void VysyxSoCFull_AsyncQueueSource___ctor_var_reset(VysyxSoCFull_AsyncQueueSource* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_AsyncQueueSource___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_enq_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_enq_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_enq_bits = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_async_mem_0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_async_mem_1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_async_mem_2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_async_mem_3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_async_mem_4 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_async_mem_5 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_async_mem_6 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_async_mem_7 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_async_ridx = VL_RAND_RESET_I(4);
    vlSelf->__PVT__io_async_widx = VL_RAND_RESET_I(4);
    vlSelf->__PVT__io_async_safe_ridx_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_async_safe_widx_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_async_safe_source_reset_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_async_safe_sink_reset_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__source_valid_0_reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_4 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_5 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_6 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_7 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___widx_T_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__widx_widx_bin = VL_RAND_RESET_I(4);
    vlSelf->__PVT___widx_incremented_T_1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__widx_incremented = VL_RAND_RESET_I(4);
    vlSelf->__PVT__index = VL_RAND_RESET_I(3);
    vlSelf->__PVT__ready_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__widx_gray = VL_RAND_RESET_I(4);
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = VL_RAND_RESET_I(1);
}
