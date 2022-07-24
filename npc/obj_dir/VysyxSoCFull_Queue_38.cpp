// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull_Queue_38.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__2(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__2\n"); );
    // Variables
    CData/*2:0*/ __Vdlyvdim0__ram_echo_tl_state_source__v0;
    CData/*6:0*/ __Vdlyvval__ram_echo_tl_state_source__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_tl_state_source__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_echo_tl_state_size__v0;
    CData/*3:0*/ __Vdlyvval__ram_echo_tl_state_size__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_tl_state_size__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_last__v0;
    CData/*0:0*/ __Vdlyvval__ram_last__v0;
    CData/*0:0*/ __Vdlyvset__ram_last__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_resp__v0;
    CData/*1:0*/ __Vdlyvval__ram_resp__v0;
    CData/*0:0*/ __Vdlyvset__ram_resp__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_id__v0;
    CData/*3:0*/ __Vdlyvval__ram_id__v0;
    CData/*0:0*/ __Vdlyvset__ram_id__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_data__v0;
    CData/*0:0*/ __Vdlyvset__ram_data__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_echo_extra_id__v0;
    CData/*0:0*/ __Vdlyvval__ram_echo_extra_id__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_extra_id__v0;
    QData/*63:0*/ __Vdlyvval__ram_data__v0;
    // Body
    __Vdlyvset__ram_echo_extra_id__v0 = 0U;
    __Vdlyvset__ram_data__v0 = 0U;
    __Vdlyvset__ram_resp__v0 = 0U;
    __Vdlyvset__ram_echo_tl_state_size__v0 = 0U;
    __Vdlyvset__ram_id__v0 = 0U;
    __Vdlyvset__ram_last__v0 = 0U;
    __Vdlyvset__ram_echo_tl_state_source__v0 = 0U;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__maybe_full = 0U;
    } else if (((IData)(vlSelf->__PVT__do_enq) != (IData)(vlSelf->__PVT__do_deq))) {
        vlSelf->__PVT__maybe_full = vlSelf->__PVT__do_enq;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0_io_enq_valid))) {
        __Vdlyvval__ram_echo_extra_id__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_extra_id;
        __Vdlyvset__ram_echo_extra_id__v0 = 1U;
        __Vdlyvdim0__ram_echo_extra_id__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0_io_enq_valid))) {
        __Vdlyvval__ram_data__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_data_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_data__v0 = 1U;
        __Vdlyvdim0__ram_data__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0_io_enq_valid))) {
        __Vdlyvval__ram_resp__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_resp_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_resp__v0 = 1U;
        __Vdlyvdim0__ram_resp__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0_io_enq_valid))) {
        __Vdlyvval__ram_echo_tl_state_size__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_size;
        __Vdlyvset__ram_echo_tl_state_size__v0 = 1U;
        __Vdlyvdim0__ram_echo_tl_state_size__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0_io_enq_valid))) {
        __Vdlyvval__ram_id__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_id__v0 = 1U;
        __Vdlyvdim0__ram_id__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0_io_enq_valid))) {
        __Vdlyvval__ram_last__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_last__v0 = 1U;
        __Vdlyvdim0__ram_last__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__deq_ptr_value = 0U;
    } else if (vlSelf->__PVT__do_deq) {
        vlSelf->__PVT__deq_ptr_value = vlSelf->__PVT___value_T_3;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0_io_enq_valid))) {
        __Vdlyvval__ram_echo_tl_state_source__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_source;
        __Vdlyvset__ram_echo_tl_state_source__v0 = 1U;
        __Vdlyvdim0__ram_echo_tl_state_source__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (__Vdlyvset__ram_echo_extra_id__v0) {
        vlSelf->__PVT__ram_echo_extra_id[__Vdlyvdim0__ram_echo_extra_id__v0] 
            = __Vdlyvval__ram_echo_extra_id__v0;
    }
    if (__Vdlyvset__ram_data__v0) {
        vlSelf->__PVT__ram_data[__Vdlyvdim0__ram_data__v0] 
            = __Vdlyvval__ram_data__v0;
    }
    if (__Vdlyvset__ram_resp__v0) {
        vlSelf->__PVT__ram_resp[__Vdlyvdim0__ram_resp__v0] 
            = __Vdlyvval__ram_resp__v0;
    }
    if (__Vdlyvset__ram_echo_tl_state_size__v0) {
        vlSelf->__PVT__ram_echo_tl_state_size[__Vdlyvdim0__ram_echo_tl_state_size__v0] 
            = __Vdlyvval__ram_echo_tl_state_size__v0;
    }
    if (__Vdlyvset__ram_id__v0) {
        vlSelf->__PVT__ram_id[__Vdlyvdim0__ram_id__v0] 
            = __Vdlyvval__ram_id__v0;
    }
    if (__Vdlyvset__ram_last__v0) {
        vlSelf->__PVT__ram_last[__Vdlyvdim0__ram_last__v0] 
            = __Vdlyvval__ram_last__v0;
    }
    if (__Vdlyvset__ram_echo_tl_state_source__v0) {
        vlSelf->__PVT__ram_echo_tl_state_source[__Vdlyvdim0__ram_echo_tl_state_source__v0] 
            = __Vdlyvval__ram_echo_tl_state_source__v0;
    }
    vlSelf->__PVT___value_T_3 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__deq_ptr_value)));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__enq_ptr_value = 0U;
    } else if (vlSelf->__PVT__do_enq) {
        vlSelf->__PVT__enq_ptr_value = vlSelf->__PVT___value_T_1;
    }
    vlSelf->__PVT___value_T_1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__enq_ptr_value)));
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__enq_ptr_value) 
                                == (IData)(vlSelf->__PVT__deq_ptr_value));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__17(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__17\n"); );
    // Body
    vlSelf->__PVT__do_enq = ((~ (IData)(vlSelf->__PVT__full)) 
                             & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0_io_enq_valid));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__33(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__33\n"); );
    // Body
    vlSelf->__PVT__do_deq = (0xffffU & ((((IData)(1U) 
                                          << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                         & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                        & (~ ((IData)(vlSelf->__PVT__ptr_match) 
                                              & (~ (IData)(vlSelf->__PVT__maybe_full))))));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__3(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__3\n"); );
    // Variables
    CData/*2:0*/ __Vdlyvdim0__ram_echo_tl_state_source__v0;
    CData/*6:0*/ __Vdlyvval__ram_echo_tl_state_source__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_tl_state_source__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_echo_tl_state_size__v0;
    CData/*3:0*/ __Vdlyvval__ram_echo_tl_state_size__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_tl_state_size__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_last__v0;
    CData/*0:0*/ __Vdlyvval__ram_last__v0;
    CData/*0:0*/ __Vdlyvset__ram_last__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_resp__v0;
    CData/*1:0*/ __Vdlyvval__ram_resp__v0;
    CData/*0:0*/ __Vdlyvset__ram_resp__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_id__v0;
    CData/*3:0*/ __Vdlyvval__ram_id__v0;
    CData/*0:0*/ __Vdlyvset__ram_id__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_data__v0;
    CData/*0:0*/ __Vdlyvset__ram_data__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_echo_extra_id__v0;
    CData/*0:0*/ __Vdlyvval__ram_echo_extra_id__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_extra_id__v0;
    QData/*63:0*/ __Vdlyvval__ram_data__v0;
    // Body
    __Vdlyvset__ram_echo_extra_id__v0 = 0U;
    __Vdlyvset__ram_data__v0 = 0U;
    __Vdlyvset__ram_resp__v0 = 0U;
    __Vdlyvset__ram_echo_tl_state_size__v0 = 0U;
    __Vdlyvset__ram_id__v0 = 0U;
    __Vdlyvset__ram_last__v0 = 0U;
    __Vdlyvset__ram_echo_tl_state_source__v0 = 0U;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__maybe_full = 0U;
    } else if (((IData)(vlSelf->__PVT__do_enq) != (IData)(vlSelf->__PVT__do_deq))) {
        vlSelf->__PVT__maybe_full = vlSelf->__PVT__do_enq;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1_io_enq_valid))) {
        __Vdlyvval__ram_echo_extra_id__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_extra_id;
        __Vdlyvset__ram_echo_extra_id__v0 = 1U;
        __Vdlyvdim0__ram_echo_extra_id__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1_io_enq_valid))) {
        __Vdlyvval__ram_data__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_data_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_data__v0 = 1U;
        __Vdlyvdim0__ram_data__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1_io_enq_valid))) {
        __Vdlyvval__ram_resp__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_resp_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_resp__v0 = 1U;
        __Vdlyvdim0__ram_resp__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1_io_enq_valid))) {
        __Vdlyvval__ram_echo_tl_state_size__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_size;
        __Vdlyvset__ram_echo_tl_state_size__v0 = 1U;
        __Vdlyvdim0__ram_echo_tl_state_size__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1_io_enq_valid))) {
        __Vdlyvval__ram_id__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_id__v0 = 1U;
        __Vdlyvdim0__ram_id__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1_io_enq_valid))) {
        __Vdlyvval__ram_last__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_last__v0 = 1U;
        __Vdlyvdim0__ram_last__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__deq_ptr_value = 0U;
    } else if (vlSelf->__PVT__do_deq) {
        vlSelf->__PVT__deq_ptr_value = vlSelf->__PVT___value_T_3;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1_io_enq_valid))) {
        __Vdlyvval__ram_echo_tl_state_source__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_source;
        __Vdlyvset__ram_echo_tl_state_source__v0 = 1U;
        __Vdlyvdim0__ram_echo_tl_state_source__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (__Vdlyvset__ram_echo_extra_id__v0) {
        vlSelf->__PVT__ram_echo_extra_id[__Vdlyvdim0__ram_echo_extra_id__v0] 
            = __Vdlyvval__ram_echo_extra_id__v0;
    }
    if (__Vdlyvset__ram_data__v0) {
        vlSelf->__PVT__ram_data[__Vdlyvdim0__ram_data__v0] 
            = __Vdlyvval__ram_data__v0;
    }
    if (__Vdlyvset__ram_resp__v0) {
        vlSelf->__PVT__ram_resp[__Vdlyvdim0__ram_resp__v0] 
            = __Vdlyvval__ram_resp__v0;
    }
    if (__Vdlyvset__ram_echo_tl_state_size__v0) {
        vlSelf->__PVT__ram_echo_tl_state_size[__Vdlyvdim0__ram_echo_tl_state_size__v0] 
            = __Vdlyvval__ram_echo_tl_state_size__v0;
    }
    if (__Vdlyvset__ram_id__v0) {
        vlSelf->__PVT__ram_id[__Vdlyvdim0__ram_id__v0] 
            = __Vdlyvval__ram_id__v0;
    }
    if (__Vdlyvset__ram_last__v0) {
        vlSelf->__PVT__ram_last[__Vdlyvdim0__ram_last__v0] 
            = __Vdlyvval__ram_last__v0;
    }
    if (__Vdlyvset__ram_echo_tl_state_source__v0) {
        vlSelf->__PVT__ram_echo_tl_state_source[__Vdlyvdim0__ram_echo_tl_state_source__v0] 
            = __Vdlyvval__ram_echo_tl_state_source__v0;
    }
    vlSelf->__PVT___value_T_3 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__deq_ptr_value)));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__enq_ptr_value = 0U;
    } else if (vlSelf->__PVT__do_enq) {
        vlSelf->__PVT__enq_ptr_value = vlSelf->__PVT___value_T_1;
    }
    vlSelf->__PVT___value_T_1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__enq_ptr_value)));
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__enq_ptr_value) 
                                == (IData)(vlSelf->__PVT__deq_ptr_value));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__18(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__18\n"); );
    // Body
    vlSelf->__PVT__do_enq = ((~ (IData)(vlSelf->__PVT__full)) 
                             & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1_io_enq_valid));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__34(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__34\n"); );
    // Body
    vlSelf->__PVT__do_deq = (0x7fffU & (((((IData)(1U) 
                                           << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                          >> 1U) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                        & (~ ((IData)(vlSelf->__PVT__ptr_match) 
                                              & (~ (IData)(vlSelf->__PVT__maybe_full))))));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__4(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__4\n"); );
    // Variables
    CData/*2:0*/ __Vdlyvdim0__ram_echo_tl_state_source__v0;
    CData/*6:0*/ __Vdlyvval__ram_echo_tl_state_source__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_tl_state_source__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_echo_tl_state_size__v0;
    CData/*3:0*/ __Vdlyvval__ram_echo_tl_state_size__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_tl_state_size__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_last__v0;
    CData/*0:0*/ __Vdlyvval__ram_last__v0;
    CData/*0:0*/ __Vdlyvset__ram_last__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_resp__v0;
    CData/*1:0*/ __Vdlyvval__ram_resp__v0;
    CData/*0:0*/ __Vdlyvset__ram_resp__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_id__v0;
    CData/*3:0*/ __Vdlyvval__ram_id__v0;
    CData/*0:0*/ __Vdlyvset__ram_id__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_data__v0;
    CData/*0:0*/ __Vdlyvset__ram_data__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_echo_extra_id__v0;
    CData/*0:0*/ __Vdlyvval__ram_echo_extra_id__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_extra_id__v0;
    QData/*63:0*/ __Vdlyvval__ram_data__v0;
    // Body
    __Vdlyvset__ram_echo_extra_id__v0 = 0U;
    __Vdlyvset__ram_data__v0 = 0U;
    __Vdlyvset__ram_resp__v0 = 0U;
    __Vdlyvset__ram_echo_tl_state_size__v0 = 0U;
    __Vdlyvset__ram_id__v0 = 0U;
    __Vdlyvset__ram_last__v0 = 0U;
    __Vdlyvset__ram_echo_tl_state_source__v0 = 0U;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__maybe_full = 0U;
    } else if (((IData)(vlSelf->__PVT__do_enq) != (IData)(vlSelf->__PVT__do_deq))) {
        vlSelf->__PVT__maybe_full = vlSelf->__PVT__do_enq;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2_io_enq_valid))) {
        __Vdlyvval__ram_echo_extra_id__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_extra_id;
        __Vdlyvset__ram_echo_extra_id__v0 = 1U;
        __Vdlyvdim0__ram_echo_extra_id__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2_io_enq_valid))) {
        __Vdlyvval__ram_data__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_data_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_data__v0 = 1U;
        __Vdlyvdim0__ram_data__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2_io_enq_valid))) {
        __Vdlyvval__ram_resp__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_resp_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_resp__v0 = 1U;
        __Vdlyvdim0__ram_resp__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2_io_enq_valid))) {
        __Vdlyvval__ram_echo_tl_state_size__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_size;
        __Vdlyvset__ram_echo_tl_state_size__v0 = 1U;
        __Vdlyvdim0__ram_echo_tl_state_size__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2_io_enq_valid))) {
        __Vdlyvval__ram_id__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_id__v0 = 1U;
        __Vdlyvdim0__ram_id__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2_io_enq_valid))) {
        __Vdlyvval__ram_last__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_last__v0 = 1U;
        __Vdlyvdim0__ram_last__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__deq_ptr_value = 0U;
    } else if (vlSelf->__PVT__do_deq) {
        vlSelf->__PVT__deq_ptr_value = vlSelf->__PVT___value_T_3;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2_io_enq_valid))) {
        __Vdlyvval__ram_echo_tl_state_source__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_source;
        __Vdlyvset__ram_echo_tl_state_source__v0 = 1U;
        __Vdlyvdim0__ram_echo_tl_state_source__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (__Vdlyvset__ram_echo_extra_id__v0) {
        vlSelf->__PVT__ram_echo_extra_id[__Vdlyvdim0__ram_echo_extra_id__v0] 
            = __Vdlyvval__ram_echo_extra_id__v0;
    }
    if (__Vdlyvset__ram_data__v0) {
        vlSelf->__PVT__ram_data[__Vdlyvdim0__ram_data__v0] 
            = __Vdlyvval__ram_data__v0;
    }
    if (__Vdlyvset__ram_resp__v0) {
        vlSelf->__PVT__ram_resp[__Vdlyvdim0__ram_resp__v0] 
            = __Vdlyvval__ram_resp__v0;
    }
    if (__Vdlyvset__ram_echo_tl_state_size__v0) {
        vlSelf->__PVT__ram_echo_tl_state_size[__Vdlyvdim0__ram_echo_tl_state_size__v0] 
            = __Vdlyvval__ram_echo_tl_state_size__v0;
    }
    if (__Vdlyvset__ram_id__v0) {
        vlSelf->__PVT__ram_id[__Vdlyvdim0__ram_id__v0] 
            = __Vdlyvval__ram_id__v0;
    }
    if (__Vdlyvset__ram_last__v0) {
        vlSelf->__PVT__ram_last[__Vdlyvdim0__ram_last__v0] 
            = __Vdlyvval__ram_last__v0;
    }
    if (__Vdlyvset__ram_echo_tl_state_source__v0) {
        vlSelf->__PVT__ram_echo_tl_state_source[__Vdlyvdim0__ram_echo_tl_state_source__v0] 
            = __Vdlyvval__ram_echo_tl_state_source__v0;
    }
    vlSelf->__PVT___value_T_3 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__deq_ptr_value)));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__enq_ptr_value = 0U;
    } else if (vlSelf->__PVT__do_enq) {
        vlSelf->__PVT__enq_ptr_value = vlSelf->__PVT___value_T_1;
    }
    vlSelf->__PVT___value_T_1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__enq_ptr_value)));
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__enq_ptr_value) 
                                == (IData)(vlSelf->__PVT__deq_ptr_value));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__19(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__19\n"); );
    // Body
    vlSelf->__PVT__do_enq = ((~ (IData)(vlSelf->__PVT__full)) 
                             & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2_io_enq_valid));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__35(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__35\n"); );
    // Body
    vlSelf->__PVT__do_deq = (0x3fffU & (((((IData)(1U) 
                                           << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                          >> 2U) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                        & (~ ((IData)(vlSelf->__PVT__ptr_match) 
                                              & (~ (IData)(vlSelf->__PVT__maybe_full))))));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__5(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__5\n"); );
    // Variables
    CData/*2:0*/ __Vdlyvdim0__ram_echo_tl_state_source__v0;
    CData/*6:0*/ __Vdlyvval__ram_echo_tl_state_source__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_tl_state_source__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_echo_tl_state_size__v0;
    CData/*3:0*/ __Vdlyvval__ram_echo_tl_state_size__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_tl_state_size__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_last__v0;
    CData/*0:0*/ __Vdlyvval__ram_last__v0;
    CData/*0:0*/ __Vdlyvset__ram_last__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_resp__v0;
    CData/*1:0*/ __Vdlyvval__ram_resp__v0;
    CData/*0:0*/ __Vdlyvset__ram_resp__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_id__v0;
    CData/*3:0*/ __Vdlyvval__ram_id__v0;
    CData/*0:0*/ __Vdlyvset__ram_id__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_data__v0;
    CData/*0:0*/ __Vdlyvset__ram_data__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_echo_extra_id__v0;
    CData/*0:0*/ __Vdlyvval__ram_echo_extra_id__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_extra_id__v0;
    QData/*63:0*/ __Vdlyvval__ram_data__v0;
    // Body
    __Vdlyvset__ram_echo_extra_id__v0 = 0U;
    __Vdlyvset__ram_data__v0 = 0U;
    __Vdlyvset__ram_resp__v0 = 0U;
    __Vdlyvset__ram_echo_tl_state_size__v0 = 0U;
    __Vdlyvset__ram_id__v0 = 0U;
    __Vdlyvset__ram_last__v0 = 0U;
    __Vdlyvset__ram_echo_tl_state_source__v0 = 0U;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__maybe_full = 0U;
    } else if (((IData)(vlSelf->__PVT__do_enq) != (IData)(vlSelf->__PVT__do_deq))) {
        vlSelf->__PVT__maybe_full = vlSelf->__PVT__do_enq;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3_io_enq_valid))) {
        __Vdlyvval__ram_echo_extra_id__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_extra_id;
        __Vdlyvset__ram_echo_extra_id__v0 = 1U;
        __Vdlyvdim0__ram_echo_extra_id__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3_io_enq_valid))) {
        __Vdlyvval__ram_data__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_data_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_data__v0 = 1U;
        __Vdlyvdim0__ram_data__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3_io_enq_valid))) {
        __Vdlyvval__ram_resp__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_resp_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_resp__v0 = 1U;
        __Vdlyvdim0__ram_resp__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3_io_enq_valid))) {
        __Vdlyvval__ram_echo_tl_state_size__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_size;
        __Vdlyvset__ram_echo_tl_state_size__v0 = 1U;
        __Vdlyvdim0__ram_echo_tl_state_size__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3_io_enq_valid))) {
        __Vdlyvval__ram_id__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_id__v0 = 1U;
        __Vdlyvdim0__ram_id__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3_io_enq_valid))) {
        __Vdlyvval__ram_last__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_last__v0 = 1U;
        __Vdlyvdim0__ram_last__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__deq_ptr_value = 0U;
    } else if (vlSelf->__PVT__do_deq) {
        vlSelf->__PVT__deq_ptr_value = vlSelf->__PVT___value_T_3;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3_io_enq_valid))) {
        __Vdlyvval__ram_echo_tl_state_source__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_source;
        __Vdlyvset__ram_echo_tl_state_source__v0 = 1U;
        __Vdlyvdim0__ram_echo_tl_state_source__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (__Vdlyvset__ram_echo_extra_id__v0) {
        vlSelf->__PVT__ram_echo_extra_id[__Vdlyvdim0__ram_echo_extra_id__v0] 
            = __Vdlyvval__ram_echo_extra_id__v0;
    }
    if (__Vdlyvset__ram_data__v0) {
        vlSelf->__PVT__ram_data[__Vdlyvdim0__ram_data__v0] 
            = __Vdlyvval__ram_data__v0;
    }
    if (__Vdlyvset__ram_resp__v0) {
        vlSelf->__PVT__ram_resp[__Vdlyvdim0__ram_resp__v0] 
            = __Vdlyvval__ram_resp__v0;
    }
    if (__Vdlyvset__ram_echo_tl_state_size__v0) {
        vlSelf->__PVT__ram_echo_tl_state_size[__Vdlyvdim0__ram_echo_tl_state_size__v0] 
            = __Vdlyvval__ram_echo_tl_state_size__v0;
    }
    if (__Vdlyvset__ram_id__v0) {
        vlSelf->__PVT__ram_id[__Vdlyvdim0__ram_id__v0] 
            = __Vdlyvval__ram_id__v0;
    }
    if (__Vdlyvset__ram_last__v0) {
        vlSelf->__PVT__ram_last[__Vdlyvdim0__ram_last__v0] 
            = __Vdlyvval__ram_last__v0;
    }
    if (__Vdlyvset__ram_echo_tl_state_source__v0) {
        vlSelf->__PVT__ram_echo_tl_state_source[__Vdlyvdim0__ram_echo_tl_state_source__v0] 
            = __Vdlyvval__ram_echo_tl_state_source__v0;
    }
    vlSelf->__PVT___value_T_3 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__deq_ptr_value)));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__enq_ptr_value = 0U;
    } else if (vlSelf->__PVT__do_enq) {
        vlSelf->__PVT__enq_ptr_value = vlSelf->__PVT___value_T_1;
    }
    vlSelf->__PVT___value_T_1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__enq_ptr_value)));
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__enq_ptr_value) 
                                == (IData)(vlSelf->__PVT__deq_ptr_value));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__20(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__20\n"); );
    // Body
    vlSelf->__PVT__do_enq = ((~ (IData)(vlSelf->__PVT__full)) 
                             & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3_io_enq_valid));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__36(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__36\n"); );
    // Body
    vlSelf->__PVT__do_deq = (0x1fffU & (((((IData)(1U) 
                                           << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                          >> 3U) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                        & (~ ((IData)(vlSelf->__PVT__ptr_match) 
                                              & (~ (IData)(vlSelf->__PVT__maybe_full))))));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__6(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__6\n"); );
    // Variables
    CData/*2:0*/ __Vdlyvdim0__ram_echo_tl_state_source__v0;
    CData/*6:0*/ __Vdlyvval__ram_echo_tl_state_source__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_tl_state_source__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_echo_tl_state_size__v0;
    CData/*3:0*/ __Vdlyvval__ram_echo_tl_state_size__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_tl_state_size__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_last__v0;
    CData/*0:0*/ __Vdlyvval__ram_last__v0;
    CData/*0:0*/ __Vdlyvset__ram_last__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_resp__v0;
    CData/*1:0*/ __Vdlyvval__ram_resp__v0;
    CData/*0:0*/ __Vdlyvset__ram_resp__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_id__v0;
    CData/*3:0*/ __Vdlyvval__ram_id__v0;
    CData/*0:0*/ __Vdlyvset__ram_id__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_data__v0;
    CData/*0:0*/ __Vdlyvset__ram_data__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_echo_extra_id__v0;
    CData/*0:0*/ __Vdlyvval__ram_echo_extra_id__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_extra_id__v0;
    QData/*63:0*/ __Vdlyvval__ram_data__v0;
    // Body
    __Vdlyvset__ram_echo_extra_id__v0 = 0U;
    __Vdlyvset__ram_data__v0 = 0U;
    __Vdlyvset__ram_resp__v0 = 0U;
    __Vdlyvset__ram_echo_tl_state_size__v0 = 0U;
    __Vdlyvset__ram_id__v0 = 0U;
    __Vdlyvset__ram_last__v0 = 0U;
    __Vdlyvset__ram_echo_tl_state_source__v0 = 0U;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__maybe_full = 0U;
    } else if (((IData)(vlSelf->__PVT__do_enq) != (IData)(vlSelf->__PVT__do_deq))) {
        vlSelf->__PVT__maybe_full = vlSelf->__PVT__do_enq;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4_io_enq_valid))) {
        __Vdlyvval__ram_echo_extra_id__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_extra_id;
        __Vdlyvset__ram_echo_extra_id__v0 = 1U;
        __Vdlyvdim0__ram_echo_extra_id__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4_io_enq_valid))) {
        __Vdlyvval__ram_data__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_data_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_data__v0 = 1U;
        __Vdlyvdim0__ram_data__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4_io_enq_valid))) {
        __Vdlyvval__ram_resp__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_resp_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_resp__v0 = 1U;
        __Vdlyvdim0__ram_resp__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4_io_enq_valid))) {
        __Vdlyvval__ram_echo_tl_state_size__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_size;
        __Vdlyvset__ram_echo_tl_state_size__v0 = 1U;
        __Vdlyvdim0__ram_echo_tl_state_size__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4_io_enq_valid))) {
        __Vdlyvval__ram_id__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_id__v0 = 1U;
        __Vdlyvdim0__ram_id__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4_io_enq_valid))) {
        __Vdlyvval__ram_last__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_last__v0 = 1U;
        __Vdlyvdim0__ram_last__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__deq_ptr_value = 0U;
    } else if (vlSelf->__PVT__do_deq) {
        vlSelf->__PVT__deq_ptr_value = vlSelf->__PVT___value_T_3;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4_io_enq_valid))) {
        __Vdlyvval__ram_echo_tl_state_source__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_source;
        __Vdlyvset__ram_echo_tl_state_source__v0 = 1U;
        __Vdlyvdim0__ram_echo_tl_state_source__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (__Vdlyvset__ram_echo_extra_id__v0) {
        vlSelf->__PVT__ram_echo_extra_id[__Vdlyvdim0__ram_echo_extra_id__v0] 
            = __Vdlyvval__ram_echo_extra_id__v0;
    }
    if (__Vdlyvset__ram_data__v0) {
        vlSelf->__PVT__ram_data[__Vdlyvdim0__ram_data__v0] 
            = __Vdlyvval__ram_data__v0;
    }
    if (__Vdlyvset__ram_resp__v0) {
        vlSelf->__PVT__ram_resp[__Vdlyvdim0__ram_resp__v0] 
            = __Vdlyvval__ram_resp__v0;
    }
    if (__Vdlyvset__ram_echo_tl_state_size__v0) {
        vlSelf->__PVT__ram_echo_tl_state_size[__Vdlyvdim0__ram_echo_tl_state_size__v0] 
            = __Vdlyvval__ram_echo_tl_state_size__v0;
    }
    if (__Vdlyvset__ram_id__v0) {
        vlSelf->__PVT__ram_id[__Vdlyvdim0__ram_id__v0] 
            = __Vdlyvval__ram_id__v0;
    }
    if (__Vdlyvset__ram_last__v0) {
        vlSelf->__PVT__ram_last[__Vdlyvdim0__ram_last__v0] 
            = __Vdlyvval__ram_last__v0;
    }
    if (__Vdlyvset__ram_echo_tl_state_source__v0) {
        vlSelf->__PVT__ram_echo_tl_state_source[__Vdlyvdim0__ram_echo_tl_state_source__v0] 
            = __Vdlyvval__ram_echo_tl_state_source__v0;
    }
    vlSelf->__PVT___value_T_3 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__deq_ptr_value)));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__enq_ptr_value = 0U;
    } else if (vlSelf->__PVT__do_enq) {
        vlSelf->__PVT__enq_ptr_value = vlSelf->__PVT___value_T_1;
    }
    vlSelf->__PVT___value_T_1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__enq_ptr_value)));
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__enq_ptr_value) 
                                == (IData)(vlSelf->__PVT__deq_ptr_value));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__21(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__21\n"); );
    // Body
    vlSelf->__PVT__do_enq = ((~ (IData)(vlSelf->__PVT__full)) 
                             & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4_io_enq_valid));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__37(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__37\n"); );
    // Body
    vlSelf->__PVT__do_deq = (0xfffU & (((((IData)(1U) 
                                          << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                         >> 4U) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                       & (~ ((IData)(vlSelf->__PVT__ptr_match) 
                                             & (~ (IData)(vlSelf->__PVT__maybe_full))))));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__7(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__7\n"); );
    // Variables
    CData/*2:0*/ __Vdlyvdim0__ram_echo_tl_state_source__v0;
    CData/*6:0*/ __Vdlyvval__ram_echo_tl_state_source__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_tl_state_source__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_echo_tl_state_size__v0;
    CData/*3:0*/ __Vdlyvval__ram_echo_tl_state_size__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_tl_state_size__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_last__v0;
    CData/*0:0*/ __Vdlyvval__ram_last__v0;
    CData/*0:0*/ __Vdlyvset__ram_last__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_resp__v0;
    CData/*1:0*/ __Vdlyvval__ram_resp__v0;
    CData/*0:0*/ __Vdlyvset__ram_resp__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_id__v0;
    CData/*3:0*/ __Vdlyvval__ram_id__v0;
    CData/*0:0*/ __Vdlyvset__ram_id__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_data__v0;
    CData/*0:0*/ __Vdlyvset__ram_data__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_echo_extra_id__v0;
    CData/*0:0*/ __Vdlyvval__ram_echo_extra_id__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_extra_id__v0;
    QData/*63:0*/ __Vdlyvval__ram_data__v0;
    // Body
    __Vdlyvset__ram_echo_extra_id__v0 = 0U;
    __Vdlyvset__ram_data__v0 = 0U;
    __Vdlyvset__ram_resp__v0 = 0U;
    __Vdlyvset__ram_echo_tl_state_size__v0 = 0U;
    __Vdlyvset__ram_id__v0 = 0U;
    __Vdlyvset__ram_last__v0 = 0U;
    __Vdlyvset__ram_echo_tl_state_source__v0 = 0U;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__maybe_full = 0U;
    } else if (((IData)(vlSelf->__PVT__do_enq) != (IData)(vlSelf->__PVT__do_deq))) {
        vlSelf->__PVT__maybe_full = vlSelf->__PVT__do_enq;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5_io_enq_valid))) {
        __Vdlyvval__ram_echo_extra_id__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_extra_id;
        __Vdlyvset__ram_echo_extra_id__v0 = 1U;
        __Vdlyvdim0__ram_echo_extra_id__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5_io_enq_valid))) {
        __Vdlyvval__ram_data__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_data_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_data__v0 = 1U;
        __Vdlyvdim0__ram_data__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5_io_enq_valid))) {
        __Vdlyvval__ram_resp__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_resp_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_resp__v0 = 1U;
        __Vdlyvdim0__ram_resp__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5_io_enq_valid))) {
        __Vdlyvval__ram_echo_tl_state_size__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_size;
        __Vdlyvset__ram_echo_tl_state_size__v0 = 1U;
        __Vdlyvdim0__ram_echo_tl_state_size__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5_io_enq_valid))) {
        __Vdlyvval__ram_id__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_id__v0 = 1U;
        __Vdlyvdim0__ram_id__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5_io_enq_valid))) {
        __Vdlyvval__ram_last__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_last__v0 = 1U;
        __Vdlyvdim0__ram_last__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__deq_ptr_value = 0U;
    } else if (vlSelf->__PVT__do_deq) {
        vlSelf->__PVT__deq_ptr_value = vlSelf->__PVT___value_T_3;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5_io_enq_valid))) {
        __Vdlyvval__ram_echo_tl_state_source__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_source;
        __Vdlyvset__ram_echo_tl_state_source__v0 = 1U;
        __Vdlyvdim0__ram_echo_tl_state_source__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (__Vdlyvset__ram_echo_extra_id__v0) {
        vlSelf->__PVT__ram_echo_extra_id[__Vdlyvdim0__ram_echo_extra_id__v0] 
            = __Vdlyvval__ram_echo_extra_id__v0;
    }
    if (__Vdlyvset__ram_data__v0) {
        vlSelf->__PVT__ram_data[__Vdlyvdim0__ram_data__v0] 
            = __Vdlyvval__ram_data__v0;
    }
    if (__Vdlyvset__ram_resp__v0) {
        vlSelf->__PVT__ram_resp[__Vdlyvdim0__ram_resp__v0] 
            = __Vdlyvval__ram_resp__v0;
    }
    if (__Vdlyvset__ram_echo_tl_state_size__v0) {
        vlSelf->__PVT__ram_echo_tl_state_size[__Vdlyvdim0__ram_echo_tl_state_size__v0] 
            = __Vdlyvval__ram_echo_tl_state_size__v0;
    }
    if (__Vdlyvset__ram_id__v0) {
        vlSelf->__PVT__ram_id[__Vdlyvdim0__ram_id__v0] 
            = __Vdlyvval__ram_id__v0;
    }
    if (__Vdlyvset__ram_last__v0) {
        vlSelf->__PVT__ram_last[__Vdlyvdim0__ram_last__v0] 
            = __Vdlyvval__ram_last__v0;
    }
    if (__Vdlyvset__ram_echo_tl_state_source__v0) {
        vlSelf->__PVT__ram_echo_tl_state_source[__Vdlyvdim0__ram_echo_tl_state_source__v0] 
            = __Vdlyvval__ram_echo_tl_state_source__v0;
    }
    vlSelf->__PVT___value_T_3 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__deq_ptr_value)));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__enq_ptr_value = 0U;
    } else if (vlSelf->__PVT__do_enq) {
        vlSelf->__PVT__enq_ptr_value = vlSelf->__PVT___value_T_1;
    }
    vlSelf->__PVT___value_T_1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__enq_ptr_value)));
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__enq_ptr_value) 
                                == (IData)(vlSelf->__PVT__deq_ptr_value));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__22(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__22\n"); );
    // Body
    vlSelf->__PVT__do_enq = ((~ (IData)(vlSelf->__PVT__full)) 
                             & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5_io_enq_valid));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__38(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__38\n"); );
    // Body
    vlSelf->__PVT__do_deq = (0x7ffU & (((((IData)(1U) 
                                          << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                         >> 5U) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                       & (~ ((IData)(vlSelf->__PVT__ptr_match) 
                                             & (~ (IData)(vlSelf->__PVT__maybe_full))))));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__8(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__8\n"); );
    // Variables
    CData/*2:0*/ __Vdlyvdim0__ram_echo_tl_state_source__v0;
    CData/*6:0*/ __Vdlyvval__ram_echo_tl_state_source__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_tl_state_source__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_echo_tl_state_size__v0;
    CData/*3:0*/ __Vdlyvval__ram_echo_tl_state_size__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_tl_state_size__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_last__v0;
    CData/*0:0*/ __Vdlyvval__ram_last__v0;
    CData/*0:0*/ __Vdlyvset__ram_last__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_resp__v0;
    CData/*1:0*/ __Vdlyvval__ram_resp__v0;
    CData/*0:0*/ __Vdlyvset__ram_resp__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_id__v0;
    CData/*3:0*/ __Vdlyvval__ram_id__v0;
    CData/*0:0*/ __Vdlyvset__ram_id__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_data__v0;
    CData/*0:0*/ __Vdlyvset__ram_data__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_echo_extra_id__v0;
    CData/*0:0*/ __Vdlyvval__ram_echo_extra_id__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_extra_id__v0;
    QData/*63:0*/ __Vdlyvval__ram_data__v0;
    // Body
    __Vdlyvset__ram_echo_extra_id__v0 = 0U;
    __Vdlyvset__ram_data__v0 = 0U;
    __Vdlyvset__ram_resp__v0 = 0U;
    __Vdlyvset__ram_echo_tl_state_size__v0 = 0U;
    __Vdlyvset__ram_id__v0 = 0U;
    __Vdlyvset__ram_last__v0 = 0U;
    __Vdlyvset__ram_echo_tl_state_source__v0 = 0U;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__maybe_full = 0U;
    } else if (((IData)(vlSelf->__PVT__do_enq) != (IData)(vlSelf->__PVT__do_deq))) {
        vlSelf->__PVT__maybe_full = vlSelf->__PVT__do_enq;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6_io_enq_valid))) {
        __Vdlyvval__ram_echo_extra_id__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_extra_id;
        __Vdlyvset__ram_echo_extra_id__v0 = 1U;
        __Vdlyvdim0__ram_echo_extra_id__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6_io_enq_valid))) {
        __Vdlyvval__ram_data__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_data_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_data__v0 = 1U;
        __Vdlyvdim0__ram_data__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6_io_enq_valid))) {
        __Vdlyvval__ram_resp__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_resp_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_resp__v0 = 1U;
        __Vdlyvdim0__ram_resp__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6_io_enq_valid))) {
        __Vdlyvval__ram_echo_tl_state_size__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_size;
        __Vdlyvset__ram_echo_tl_state_size__v0 = 1U;
        __Vdlyvdim0__ram_echo_tl_state_size__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6_io_enq_valid))) {
        __Vdlyvval__ram_id__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_id__v0 = 1U;
        __Vdlyvdim0__ram_id__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6_io_enq_valid))) {
        __Vdlyvval__ram_last__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_last__v0 = 1U;
        __Vdlyvdim0__ram_last__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__deq_ptr_value = 0U;
    } else if (vlSelf->__PVT__do_deq) {
        vlSelf->__PVT__deq_ptr_value = vlSelf->__PVT___value_T_3;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6_io_enq_valid))) {
        __Vdlyvval__ram_echo_tl_state_source__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_source;
        __Vdlyvset__ram_echo_tl_state_source__v0 = 1U;
        __Vdlyvdim0__ram_echo_tl_state_source__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (__Vdlyvset__ram_echo_extra_id__v0) {
        vlSelf->__PVT__ram_echo_extra_id[__Vdlyvdim0__ram_echo_extra_id__v0] 
            = __Vdlyvval__ram_echo_extra_id__v0;
    }
    if (__Vdlyvset__ram_data__v0) {
        vlSelf->__PVT__ram_data[__Vdlyvdim0__ram_data__v0] 
            = __Vdlyvval__ram_data__v0;
    }
    if (__Vdlyvset__ram_resp__v0) {
        vlSelf->__PVT__ram_resp[__Vdlyvdim0__ram_resp__v0] 
            = __Vdlyvval__ram_resp__v0;
    }
    if (__Vdlyvset__ram_echo_tl_state_size__v0) {
        vlSelf->__PVT__ram_echo_tl_state_size[__Vdlyvdim0__ram_echo_tl_state_size__v0] 
            = __Vdlyvval__ram_echo_tl_state_size__v0;
    }
    if (__Vdlyvset__ram_id__v0) {
        vlSelf->__PVT__ram_id[__Vdlyvdim0__ram_id__v0] 
            = __Vdlyvval__ram_id__v0;
    }
    if (__Vdlyvset__ram_last__v0) {
        vlSelf->__PVT__ram_last[__Vdlyvdim0__ram_last__v0] 
            = __Vdlyvval__ram_last__v0;
    }
    if (__Vdlyvset__ram_echo_tl_state_source__v0) {
        vlSelf->__PVT__ram_echo_tl_state_source[__Vdlyvdim0__ram_echo_tl_state_source__v0] 
            = __Vdlyvval__ram_echo_tl_state_source__v0;
    }
    vlSelf->__PVT___value_T_3 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__deq_ptr_value)));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__enq_ptr_value = 0U;
    } else if (vlSelf->__PVT__do_enq) {
        vlSelf->__PVT__enq_ptr_value = vlSelf->__PVT___value_T_1;
    }
    vlSelf->__PVT___value_T_1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__enq_ptr_value)));
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__enq_ptr_value) 
                                == (IData)(vlSelf->__PVT__deq_ptr_value));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__23(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__23\n"); );
    // Body
    vlSelf->__PVT__do_enq = ((~ (IData)(vlSelf->__PVT__full)) 
                             & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6_io_enq_valid));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__39(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__39\n"); );
    // Body
    vlSelf->__PVT__do_deq = (0x3ffU & (((((IData)(1U) 
                                          << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                         >> 6U) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                       & (~ ((IData)(vlSelf->__PVT__ptr_match) 
                                             & (~ (IData)(vlSelf->__PVT__maybe_full))))));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__9(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__9\n"); );
    // Variables
    CData/*2:0*/ __Vdlyvdim0__ram_echo_tl_state_source__v0;
    CData/*6:0*/ __Vdlyvval__ram_echo_tl_state_source__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_tl_state_source__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_echo_tl_state_size__v0;
    CData/*3:0*/ __Vdlyvval__ram_echo_tl_state_size__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_tl_state_size__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_last__v0;
    CData/*0:0*/ __Vdlyvval__ram_last__v0;
    CData/*0:0*/ __Vdlyvset__ram_last__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_resp__v0;
    CData/*1:0*/ __Vdlyvval__ram_resp__v0;
    CData/*0:0*/ __Vdlyvset__ram_resp__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_id__v0;
    CData/*3:0*/ __Vdlyvval__ram_id__v0;
    CData/*0:0*/ __Vdlyvset__ram_id__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_data__v0;
    CData/*0:0*/ __Vdlyvset__ram_data__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_echo_extra_id__v0;
    CData/*0:0*/ __Vdlyvval__ram_echo_extra_id__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_extra_id__v0;
    QData/*63:0*/ __Vdlyvval__ram_data__v0;
    // Body
    __Vdlyvset__ram_echo_extra_id__v0 = 0U;
    __Vdlyvset__ram_data__v0 = 0U;
    __Vdlyvset__ram_resp__v0 = 0U;
    __Vdlyvset__ram_echo_tl_state_size__v0 = 0U;
    __Vdlyvset__ram_id__v0 = 0U;
    __Vdlyvset__ram_last__v0 = 0U;
    __Vdlyvset__ram_echo_tl_state_source__v0 = 0U;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__maybe_full = 0U;
    } else if (((IData)(vlSelf->__PVT__do_enq) != (IData)(vlSelf->__PVT__do_deq))) {
        vlSelf->__PVT__maybe_full = vlSelf->__PVT__do_enq;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7_io_enq_valid))) {
        __Vdlyvval__ram_echo_extra_id__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_extra_id;
        __Vdlyvset__ram_echo_extra_id__v0 = 1U;
        __Vdlyvdim0__ram_echo_extra_id__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7_io_enq_valid))) {
        __Vdlyvval__ram_data__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_data_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_data__v0 = 1U;
        __Vdlyvdim0__ram_data__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7_io_enq_valid))) {
        __Vdlyvval__ram_resp__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_resp_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_resp__v0 = 1U;
        __Vdlyvdim0__ram_resp__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7_io_enq_valid))) {
        __Vdlyvval__ram_echo_tl_state_size__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_size;
        __Vdlyvset__ram_echo_tl_state_size__v0 = 1U;
        __Vdlyvdim0__ram_echo_tl_state_size__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7_io_enq_valid))) {
        __Vdlyvval__ram_id__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_id__v0 = 1U;
        __Vdlyvdim0__ram_id__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7_io_enq_valid))) {
        __Vdlyvval__ram_last__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_last__v0 = 1U;
        __Vdlyvdim0__ram_last__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__deq_ptr_value = 0U;
    } else if (vlSelf->__PVT__do_deq) {
        vlSelf->__PVT__deq_ptr_value = vlSelf->__PVT___value_T_3;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7_io_enq_valid))) {
        __Vdlyvval__ram_echo_tl_state_source__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_source;
        __Vdlyvset__ram_echo_tl_state_source__v0 = 1U;
        __Vdlyvdim0__ram_echo_tl_state_source__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (__Vdlyvset__ram_echo_extra_id__v0) {
        vlSelf->__PVT__ram_echo_extra_id[__Vdlyvdim0__ram_echo_extra_id__v0] 
            = __Vdlyvval__ram_echo_extra_id__v0;
    }
    if (__Vdlyvset__ram_data__v0) {
        vlSelf->__PVT__ram_data[__Vdlyvdim0__ram_data__v0] 
            = __Vdlyvval__ram_data__v0;
    }
    if (__Vdlyvset__ram_resp__v0) {
        vlSelf->__PVT__ram_resp[__Vdlyvdim0__ram_resp__v0] 
            = __Vdlyvval__ram_resp__v0;
    }
    if (__Vdlyvset__ram_echo_tl_state_size__v0) {
        vlSelf->__PVT__ram_echo_tl_state_size[__Vdlyvdim0__ram_echo_tl_state_size__v0] 
            = __Vdlyvval__ram_echo_tl_state_size__v0;
    }
    if (__Vdlyvset__ram_id__v0) {
        vlSelf->__PVT__ram_id[__Vdlyvdim0__ram_id__v0] 
            = __Vdlyvval__ram_id__v0;
    }
    if (__Vdlyvset__ram_last__v0) {
        vlSelf->__PVT__ram_last[__Vdlyvdim0__ram_last__v0] 
            = __Vdlyvval__ram_last__v0;
    }
    if (__Vdlyvset__ram_echo_tl_state_source__v0) {
        vlSelf->__PVT__ram_echo_tl_state_source[__Vdlyvdim0__ram_echo_tl_state_source__v0] 
            = __Vdlyvval__ram_echo_tl_state_source__v0;
    }
    vlSelf->__PVT___value_T_3 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__deq_ptr_value)));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__enq_ptr_value = 0U;
    } else if (vlSelf->__PVT__do_enq) {
        vlSelf->__PVT__enq_ptr_value = vlSelf->__PVT___value_T_1;
    }
    vlSelf->__PVT___value_T_1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__enq_ptr_value)));
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__enq_ptr_value) 
                                == (IData)(vlSelf->__PVT__deq_ptr_value));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__24(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__24\n"); );
    // Body
    vlSelf->__PVT__do_enq = ((~ (IData)(vlSelf->__PVT__full)) 
                             & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7_io_enq_valid));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__40(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__40\n"); );
    // Body
    vlSelf->__PVT__do_deq = (0x1ffU & (((((IData)(1U) 
                                          << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                         >> 7U) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                       & (~ ((IData)(vlSelf->__PVT__ptr_match) 
                                             & (~ (IData)(vlSelf->__PVT__maybe_full))))));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__10(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__10\n"); );
    // Variables
    CData/*2:0*/ __Vdlyvdim0__ram_echo_tl_state_source__v0;
    CData/*6:0*/ __Vdlyvval__ram_echo_tl_state_source__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_tl_state_source__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_echo_tl_state_size__v0;
    CData/*3:0*/ __Vdlyvval__ram_echo_tl_state_size__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_tl_state_size__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_last__v0;
    CData/*0:0*/ __Vdlyvval__ram_last__v0;
    CData/*0:0*/ __Vdlyvset__ram_last__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_resp__v0;
    CData/*1:0*/ __Vdlyvval__ram_resp__v0;
    CData/*0:0*/ __Vdlyvset__ram_resp__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_id__v0;
    CData/*3:0*/ __Vdlyvval__ram_id__v0;
    CData/*0:0*/ __Vdlyvset__ram_id__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_data__v0;
    CData/*0:0*/ __Vdlyvset__ram_data__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_echo_extra_id__v0;
    CData/*0:0*/ __Vdlyvval__ram_echo_extra_id__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_extra_id__v0;
    QData/*63:0*/ __Vdlyvval__ram_data__v0;
    // Body
    __Vdlyvset__ram_echo_extra_id__v0 = 0U;
    __Vdlyvset__ram_data__v0 = 0U;
    __Vdlyvset__ram_resp__v0 = 0U;
    __Vdlyvset__ram_echo_tl_state_size__v0 = 0U;
    __Vdlyvset__ram_id__v0 = 0U;
    __Vdlyvset__ram_last__v0 = 0U;
    __Vdlyvset__ram_echo_tl_state_source__v0 = 0U;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__maybe_full = 0U;
    } else if (((IData)(vlSelf->__PVT__do_enq) != (IData)(vlSelf->__PVT__do_deq))) {
        vlSelf->__PVT__maybe_full = vlSelf->__PVT__do_enq;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8_io_enq_valid))) {
        __Vdlyvval__ram_echo_extra_id__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_extra_id;
        __Vdlyvset__ram_echo_extra_id__v0 = 1U;
        __Vdlyvdim0__ram_echo_extra_id__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8_io_enq_valid))) {
        __Vdlyvval__ram_data__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_data_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_data__v0 = 1U;
        __Vdlyvdim0__ram_data__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8_io_enq_valid))) {
        __Vdlyvval__ram_resp__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_resp_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_resp__v0 = 1U;
        __Vdlyvdim0__ram_resp__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8_io_enq_valid))) {
        __Vdlyvval__ram_echo_tl_state_size__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_size;
        __Vdlyvset__ram_echo_tl_state_size__v0 = 1U;
        __Vdlyvdim0__ram_echo_tl_state_size__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8_io_enq_valid))) {
        __Vdlyvval__ram_id__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_id__v0 = 1U;
        __Vdlyvdim0__ram_id__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8_io_enq_valid))) {
        __Vdlyvval__ram_last__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_last__v0 = 1U;
        __Vdlyvdim0__ram_last__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__deq_ptr_value = 0U;
    } else if (vlSelf->__PVT__do_deq) {
        vlSelf->__PVT__deq_ptr_value = vlSelf->__PVT___value_T_3;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8_io_enq_valid))) {
        __Vdlyvval__ram_echo_tl_state_source__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_source;
        __Vdlyvset__ram_echo_tl_state_source__v0 = 1U;
        __Vdlyvdim0__ram_echo_tl_state_source__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (__Vdlyvset__ram_echo_extra_id__v0) {
        vlSelf->__PVT__ram_echo_extra_id[__Vdlyvdim0__ram_echo_extra_id__v0] 
            = __Vdlyvval__ram_echo_extra_id__v0;
    }
    if (__Vdlyvset__ram_data__v0) {
        vlSelf->__PVT__ram_data[__Vdlyvdim0__ram_data__v0] 
            = __Vdlyvval__ram_data__v0;
    }
    if (__Vdlyvset__ram_resp__v0) {
        vlSelf->__PVT__ram_resp[__Vdlyvdim0__ram_resp__v0] 
            = __Vdlyvval__ram_resp__v0;
    }
    if (__Vdlyvset__ram_echo_tl_state_size__v0) {
        vlSelf->__PVT__ram_echo_tl_state_size[__Vdlyvdim0__ram_echo_tl_state_size__v0] 
            = __Vdlyvval__ram_echo_tl_state_size__v0;
    }
    if (__Vdlyvset__ram_id__v0) {
        vlSelf->__PVT__ram_id[__Vdlyvdim0__ram_id__v0] 
            = __Vdlyvval__ram_id__v0;
    }
    if (__Vdlyvset__ram_last__v0) {
        vlSelf->__PVT__ram_last[__Vdlyvdim0__ram_last__v0] 
            = __Vdlyvval__ram_last__v0;
    }
    if (__Vdlyvset__ram_echo_tl_state_source__v0) {
        vlSelf->__PVT__ram_echo_tl_state_source[__Vdlyvdim0__ram_echo_tl_state_source__v0] 
            = __Vdlyvval__ram_echo_tl_state_source__v0;
    }
    vlSelf->__PVT___value_T_3 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__deq_ptr_value)));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__enq_ptr_value = 0U;
    } else if (vlSelf->__PVT__do_enq) {
        vlSelf->__PVT__enq_ptr_value = vlSelf->__PVT___value_T_1;
    }
    vlSelf->__PVT___value_T_1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__enq_ptr_value)));
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__enq_ptr_value) 
                                == (IData)(vlSelf->__PVT__deq_ptr_value));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__25(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__25\n"); );
    // Body
    vlSelf->__PVT__do_enq = ((~ (IData)(vlSelf->__PVT__full)) 
                             & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8_io_enq_valid));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__41(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__41\n"); );
    // Body
    vlSelf->__PVT__do_deq = (0xffU & (((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                        >> 8U) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                      & (~ ((IData)(vlSelf->__PVT__ptr_match) 
                                            & (~ (IData)(vlSelf->__PVT__maybe_full))))));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__11(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__11\n"); );
    // Variables
    CData/*2:0*/ __Vdlyvdim0__ram_echo_tl_state_source__v0;
    CData/*6:0*/ __Vdlyvval__ram_echo_tl_state_source__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_tl_state_source__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_echo_tl_state_size__v0;
    CData/*3:0*/ __Vdlyvval__ram_echo_tl_state_size__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_tl_state_size__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_last__v0;
    CData/*0:0*/ __Vdlyvval__ram_last__v0;
    CData/*0:0*/ __Vdlyvset__ram_last__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_resp__v0;
    CData/*1:0*/ __Vdlyvval__ram_resp__v0;
    CData/*0:0*/ __Vdlyvset__ram_resp__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_id__v0;
    CData/*3:0*/ __Vdlyvval__ram_id__v0;
    CData/*0:0*/ __Vdlyvset__ram_id__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_data__v0;
    CData/*0:0*/ __Vdlyvset__ram_data__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_echo_extra_id__v0;
    CData/*0:0*/ __Vdlyvval__ram_echo_extra_id__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_extra_id__v0;
    QData/*63:0*/ __Vdlyvval__ram_data__v0;
    // Body
    __Vdlyvset__ram_echo_extra_id__v0 = 0U;
    __Vdlyvset__ram_data__v0 = 0U;
    __Vdlyvset__ram_resp__v0 = 0U;
    __Vdlyvset__ram_echo_tl_state_size__v0 = 0U;
    __Vdlyvset__ram_id__v0 = 0U;
    __Vdlyvset__ram_last__v0 = 0U;
    __Vdlyvset__ram_echo_tl_state_source__v0 = 0U;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__maybe_full = 0U;
    } else if (((IData)(vlSelf->__PVT__do_enq) != (IData)(vlSelf->__PVT__do_deq))) {
        vlSelf->__PVT__maybe_full = vlSelf->__PVT__do_enq;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9_io_enq_valid))) {
        __Vdlyvval__ram_echo_extra_id__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_extra_id;
        __Vdlyvset__ram_echo_extra_id__v0 = 1U;
        __Vdlyvdim0__ram_echo_extra_id__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9_io_enq_valid))) {
        __Vdlyvval__ram_data__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_data_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_data__v0 = 1U;
        __Vdlyvdim0__ram_data__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9_io_enq_valid))) {
        __Vdlyvval__ram_resp__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_resp_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_resp__v0 = 1U;
        __Vdlyvdim0__ram_resp__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9_io_enq_valid))) {
        __Vdlyvval__ram_echo_tl_state_size__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_size;
        __Vdlyvset__ram_echo_tl_state_size__v0 = 1U;
        __Vdlyvdim0__ram_echo_tl_state_size__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9_io_enq_valid))) {
        __Vdlyvval__ram_id__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_id__v0 = 1U;
        __Vdlyvdim0__ram_id__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9_io_enq_valid))) {
        __Vdlyvval__ram_last__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_last__v0 = 1U;
        __Vdlyvdim0__ram_last__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__deq_ptr_value = 0U;
    } else if (vlSelf->__PVT__do_deq) {
        vlSelf->__PVT__deq_ptr_value = vlSelf->__PVT___value_T_3;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9_io_enq_valid))) {
        __Vdlyvval__ram_echo_tl_state_source__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_source;
        __Vdlyvset__ram_echo_tl_state_source__v0 = 1U;
        __Vdlyvdim0__ram_echo_tl_state_source__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (__Vdlyvset__ram_echo_extra_id__v0) {
        vlSelf->__PVT__ram_echo_extra_id[__Vdlyvdim0__ram_echo_extra_id__v0] 
            = __Vdlyvval__ram_echo_extra_id__v0;
    }
    if (__Vdlyvset__ram_data__v0) {
        vlSelf->__PVT__ram_data[__Vdlyvdim0__ram_data__v0] 
            = __Vdlyvval__ram_data__v0;
    }
    if (__Vdlyvset__ram_resp__v0) {
        vlSelf->__PVT__ram_resp[__Vdlyvdim0__ram_resp__v0] 
            = __Vdlyvval__ram_resp__v0;
    }
    if (__Vdlyvset__ram_echo_tl_state_size__v0) {
        vlSelf->__PVT__ram_echo_tl_state_size[__Vdlyvdim0__ram_echo_tl_state_size__v0] 
            = __Vdlyvval__ram_echo_tl_state_size__v0;
    }
    if (__Vdlyvset__ram_id__v0) {
        vlSelf->__PVT__ram_id[__Vdlyvdim0__ram_id__v0] 
            = __Vdlyvval__ram_id__v0;
    }
    if (__Vdlyvset__ram_last__v0) {
        vlSelf->__PVT__ram_last[__Vdlyvdim0__ram_last__v0] 
            = __Vdlyvval__ram_last__v0;
    }
    if (__Vdlyvset__ram_echo_tl_state_source__v0) {
        vlSelf->__PVT__ram_echo_tl_state_source[__Vdlyvdim0__ram_echo_tl_state_source__v0] 
            = __Vdlyvval__ram_echo_tl_state_source__v0;
    }
    vlSelf->__PVT___value_T_3 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__deq_ptr_value)));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__enq_ptr_value = 0U;
    } else if (vlSelf->__PVT__do_enq) {
        vlSelf->__PVT__enq_ptr_value = vlSelf->__PVT___value_T_1;
    }
    vlSelf->__PVT___value_T_1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__enq_ptr_value)));
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__enq_ptr_value) 
                                == (IData)(vlSelf->__PVT__deq_ptr_value));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__26(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__26\n"); );
    // Body
    vlSelf->__PVT__do_enq = ((~ (IData)(vlSelf->__PVT__full)) 
                             & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9_io_enq_valid));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__42(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__42\n"); );
    // Body
    vlSelf->__PVT__do_deq = (0x7fU & (((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                        >> 9U) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                      & (~ ((IData)(vlSelf->__PVT__ptr_match) 
                                            & (~ (IData)(vlSelf->__PVT__maybe_full))))));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__12(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__12\n"); );
    // Variables
    CData/*2:0*/ __Vdlyvdim0__ram_echo_tl_state_source__v0;
    CData/*6:0*/ __Vdlyvval__ram_echo_tl_state_source__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_tl_state_source__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_echo_tl_state_size__v0;
    CData/*3:0*/ __Vdlyvval__ram_echo_tl_state_size__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_tl_state_size__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_last__v0;
    CData/*0:0*/ __Vdlyvval__ram_last__v0;
    CData/*0:0*/ __Vdlyvset__ram_last__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_resp__v0;
    CData/*1:0*/ __Vdlyvval__ram_resp__v0;
    CData/*0:0*/ __Vdlyvset__ram_resp__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_id__v0;
    CData/*3:0*/ __Vdlyvval__ram_id__v0;
    CData/*0:0*/ __Vdlyvset__ram_id__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_data__v0;
    CData/*0:0*/ __Vdlyvset__ram_data__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_echo_extra_id__v0;
    CData/*0:0*/ __Vdlyvval__ram_echo_extra_id__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_extra_id__v0;
    QData/*63:0*/ __Vdlyvval__ram_data__v0;
    // Body
    __Vdlyvset__ram_echo_extra_id__v0 = 0U;
    __Vdlyvset__ram_data__v0 = 0U;
    __Vdlyvset__ram_resp__v0 = 0U;
    __Vdlyvset__ram_echo_tl_state_size__v0 = 0U;
    __Vdlyvset__ram_id__v0 = 0U;
    __Vdlyvset__ram_last__v0 = 0U;
    __Vdlyvset__ram_echo_tl_state_source__v0 = 0U;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__maybe_full = 0U;
    } else if (((IData)(vlSelf->__PVT__do_enq) != (IData)(vlSelf->__PVT__do_deq))) {
        vlSelf->__PVT__maybe_full = vlSelf->__PVT__do_enq;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10_io_enq_valid))) {
        __Vdlyvval__ram_echo_extra_id__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_extra_id;
        __Vdlyvset__ram_echo_extra_id__v0 = 1U;
        __Vdlyvdim0__ram_echo_extra_id__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10_io_enq_valid))) {
        __Vdlyvval__ram_data__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_data_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_data__v0 = 1U;
        __Vdlyvdim0__ram_data__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10_io_enq_valid))) {
        __Vdlyvval__ram_resp__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_resp_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_resp__v0 = 1U;
        __Vdlyvdim0__ram_resp__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10_io_enq_valid))) {
        __Vdlyvval__ram_echo_tl_state_size__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_size;
        __Vdlyvset__ram_echo_tl_state_size__v0 = 1U;
        __Vdlyvdim0__ram_echo_tl_state_size__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10_io_enq_valid))) {
        __Vdlyvval__ram_id__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_id__v0 = 1U;
        __Vdlyvdim0__ram_id__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10_io_enq_valid))) {
        __Vdlyvval__ram_last__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_last__v0 = 1U;
        __Vdlyvdim0__ram_last__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__deq_ptr_value = 0U;
    } else if (vlSelf->__PVT__do_deq) {
        vlSelf->__PVT__deq_ptr_value = vlSelf->__PVT___value_T_3;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10_io_enq_valid))) {
        __Vdlyvval__ram_echo_tl_state_source__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_source;
        __Vdlyvset__ram_echo_tl_state_source__v0 = 1U;
        __Vdlyvdim0__ram_echo_tl_state_source__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (__Vdlyvset__ram_echo_extra_id__v0) {
        vlSelf->__PVT__ram_echo_extra_id[__Vdlyvdim0__ram_echo_extra_id__v0] 
            = __Vdlyvval__ram_echo_extra_id__v0;
    }
    if (__Vdlyvset__ram_data__v0) {
        vlSelf->__PVT__ram_data[__Vdlyvdim0__ram_data__v0] 
            = __Vdlyvval__ram_data__v0;
    }
    if (__Vdlyvset__ram_resp__v0) {
        vlSelf->__PVT__ram_resp[__Vdlyvdim0__ram_resp__v0] 
            = __Vdlyvval__ram_resp__v0;
    }
    if (__Vdlyvset__ram_echo_tl_state_size__v0) {
        vlSelf->__PVT__ram_echo_tl_state_size[__Vdlyvdim0__ram_echo_tl_state_size__v0] 
            = __Vdlyvval__ram_echo_tl_state_size__v0;
    }
    if (__Vdlyvset__ram_id__v0) {
        vlSelf->__PVT__ram_id[__Vdlyvdim0__ram_id__v0] 
            = __Vdlyvval__ram_id__v0;
    }
    if (__Vdlyvset__ram_last__v0) {
        vlSelf->__PVT__ram_last[__Vdlyvdim0__ram_last__v0] 
            = __Vdlyvval__ram_last__v0;
    }
    if (__Vdlyvset__ram_echo_tl_state_source__v0) {
        vlSelf->__PVT__ram_echo_tl_state_source[__Vdlyvdim0__ram_echo_tl_state_source__v0] 
            = __Vdlyvval__ram_echo_tl_state_source__v0;
    }
    vlSelf->__PVT___value_T_3 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__deq_ptr_value)));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__enq_ptr_value = 0U;
    } else if (vlSelf->__PVT__do_enq) {
        vlSelf->__PVT__enq_ptr_value = vlSelf->__PVT___value_T_1;
    }
    vlSelf->__PVT___value_T_1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__enq_ptr_value)));
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__enq_ptr_value) 
                                == (IData)(vlSelf->__PVT__deq_ptr_value));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__27(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__27\n"); );
    // Body
    vlSelf->__PVT__do_enq = ((~ (IData)(vlSelf->__PVT__full)) 
                             & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10_io_enq_valid));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__43(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__43\n"); );
    // Body
    vlSelf->__PVT__do_deq = (0x3fU & (((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                        >> 0xaU) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                      & (~ ((IData)(vlSelf->__PVT__ptr_match) 
                                            & (~ (IData)(vlSelf->__PVT__maybe_full))))));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__13(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__13\n"); );
    // Variables
    CData/*2:0*/ __Vdlyvdim0__ram_echo_tl_state_source__v0;
    CData/*6:0*/ __Vdlyvval__ram_echo_tl_state_source__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_tl_state_source__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_echo_tl_state_size__v0;
    CData/*3:0*/ __Vdlyvval__ram_echo_tl_state_size__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_tl_state_size__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_last__v0;
    CData/*0:0*/ __Vdlyvval__ram_last__v0;
    CData/*0:0*/ __Vdlyvset__ram_last__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_resp__v0;
    CData/*1:0*/ __Vdlyvval__ram_resp__v0;
    CData/*0:0*/ __Vdlyvset__ram_resp__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_id__v0;
    CData/*3:0*/ __Vdlyvval__ram_id__v0;
    CData/*0:0*/ __Vdlyvset__ram_id__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_data__v0;
    CData/*0:0*/ __Vdlyvset__ram_data__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_echo_extra_id__v0;
    CData/*0:0*/ __Vdlyvval__ram_echo_extra_id__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_extra_id__v0;
    QData/*63:0*/ __Vdlyvval__ram_data__v0;
    // Body
    __Vdlyvset__ram_echo_extra_id__v0 = 0U;
    __Vdlyvset__ram_data__v0 = 0U;
    __Vdlyvset__ram_resp__v0 = 0U;
    __Vdlyvset__ram_echo_tl_state_size__v0 = 0U;
    __Vdlyvset__ram_id__v0 = 0U;
    __Vdlyvset__ram_last__v0 = 0U;
    __Vdlyvset__ram_echo_tl_state_source__v0 = 0U;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__maybe_full = 0U;
    } else if (((IData)(vlSelf->__PVT__do_enq) != (IData)(vlSelf->__PVT__do_deq))) {
        vlSelf->__PVT__maybe_full = vlSelf->__PVT__do_enq;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11_io_enq_valid))) {
        __Vdlyvval__ram_echo_extra_id__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_extra_id;
        __Vdlyvset__ram_echo_extra_id__v0 = 1U;
        __Vdlyvdim0__ram_echo_extra_id__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11_io_enq_valid))) {
        __Vdlyvval__ram_data__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_data_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_data__v0 = 1U;
        __Vdlyvdim0__ram_data__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11_io_enq_valid))) {
        __Vdlyvval__ram_resp__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_resp_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_resp__v0 = 1U;
        __Vdlyvdim0__ram_resp__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11_io_enq_valid))) {
        __Vdlyvval__ram_echo_tl_state_size__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_size;
        __Vdlyvset__ram_echo_tl_state_size__v0 = 1U;
        __Vdlyvdim0__ram_echo_tl_state_size__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11_io_enq_valid))) {
        __Vdlyvval__ram_id__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_id__v0 = 1U;
        __Vdlyvdim0__ram_id__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11_io_enq_valid))) {
        __Vdlyvval__ram_last__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_last__v0 = 1U;
        __Vdlyvdim0__ram_last__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__deq_ptr_value = 0U;
    } else if (vlSelf->__PVT__do_deq) {
        vlSelf->__PVT__deq_ptr_value = vlSelf->__PVT___value_T_3;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11_io_enq_valid))) {
        __Vdlyvval__ram_echo_tl_state_source__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_source;
        __Vdlyvset__ram_echo_tl_state_source__v0 = 1U;
        __Vdlyvdim0__ram_echo_tl_state_source__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (__Vdlyvset__ram_echo_extra_id__v0) {
        vlSelf->__PVT__ram_echo_extra_id[__Vdlyvdim0__ram_echo_extra_id__v0] 
            = __Vdlyvval__ram_echo_extra_id__v0;
    }
    if (__Vdlyvset__ram_data__v0) {
        vlSelf->__PVT__ram_data[__Vdlyvdim0__ram_data__v0] 
            = __Vdlyvval__ram_data__v0;
    }
    if (__Vdlyvset__ram_resp__v0) {
        vlSelf->__PVT__ram_resp[__Vdlyvdim0__ram_resp__v0] 
            = __Vdlyvval__ram_resp__v0;
    }
    if (__Vdlyvset__ram_echo_tl_state_size__v0) {
        vlSelf->__PVT__ram_echo_tl_state_size[__Vdlyvdim0__ram_echo_tl_state_size__v0] 
            = __Vdlyvval__ram_echo_tl_state_size__v0;
    }
    if (__Vdlyvset__ram_id__v0) {
        vlSelf->__PVT__ram_id[__Vdlyvdim0__ram_id__v0] 
            = __Vdlyvval__ram_id__v0;
    }
    if (__Vdlyvset__ram_last__v0) {
        vlSelf->__PVT__ram_last[__Vdlyvdim0__ram_last__v0] 
            = __Vdlyvval__ram_last__v0;
    }
    if (__Vdlyvset__ram_echo_tl_state_source__v0) {
        vlSelf->__PVT__ram_echo_tl_state_source[__Vdlyvdim0__ram_echo_tl_state_source__v0] 
            = __Vdlyvval__ram_echo_tl_state_source__v0;
    }
    vlSelf->__PVT___value_T_3 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__deq_ptr_value)));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__enq_ptr_value = 0U;
    } else if (vlSelf->__PVT__do_enq) {
        vlSelf->__PVT__enq_ptr_value = vlSelf->__PVT___value_T_1;
    }
    vlSelf->__PVT___value_T_1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__enq_ptr_value)));
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__enq_ptr_value) 
                                == (IData)(vlSelf->__PVT__deq_ptr_value));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__28(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__28\n"); );
    // Body
    vlSelf->__PVT__do_enq = ((~ (IData)(vlSelf->__PVT__full)) 
                             & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11_io_enq_valid));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__44(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__44\n"); );
    // Body
    vlSelf->__PVT__do_deq = (0x1fU & (((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                        >> 0xbU) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                      & (~ ((IData)(vlSelf->__PVT__ptr_match) 
                                            & (~ (IData)(vlSelf->__PVT__maybe_full))))));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__14(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__14\n"); );
    // Variables
    CData/*2:0*/ __Vdlyvdim0__ram_echo_tl_state_source__v0;
    CData/*6:0*/ __Vdlyvval__ram_echo_tl_state_source__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_tl_state_source__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_echo_tl_state_size__v0;
    CData/*3:0*/ __Vdlyvval__ram_echo_tl_state_size__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_tl_state_size__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_last__v0;
    CData/*0:0*/ __Vdlyvval__ram_last__v0;
    CData/*0:0*/ __Vdlyvset__ram_last__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_resp__v0;
    CData/*1:0*/ __Vdlyvval__ram_resp__v0;
    CData/*0:0*/ __Vdlyvset__ram_resp__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_id__v0;
    CData/*3:0*/ __Vdlyvval__ram_id__v0;
    CData/*0:0*/ __Vdlyvset__ram_id__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_data__v0;
    CData/*0:0*/ __Vdlyvset__ram_data__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_echo_extra_id__v0;
    CData/*0:0*/ __Vdlyvval__ram_echo_extra_id__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_extra_id__v0;
    QData/*63:0*/ __Vdlyvval__ram_data__v0;
    // Body
    __Vdlyvset__ram_echo_extra_id__v0 = 0U;
    __Vdlyvset__ram_data__v0 = 0U;
    __Vdlyvset__ram_resp__v0 = 0U;
    __Vdlyvset__ram_echo_tl_state_size__v0 = 0U;
    __Vdlyvset__ram_id__v0 = 0U;
    __Vdlyvset__ram_last__v0 = 0U;
    __Vdlyvset__ram_echo_tl_state_source__v0 = 0U;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__maybe_full = 0U;
    } else if (((IData)(vlSelf->__PVT__do_enq) != (IData)(vlSelf->__PVT__do_deq))) {
        vlSelf->__PVT__maybe_full = vlSelf->__PVT__do_enq;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12_io_enq_valid))) {
        __Vdlyvval__ram_echo_extra_id__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_extra_id;
        __Vdlyvset__ram_echo_extra_id__v0 = 1U;
        __Vdlyvdim0__ram_echo_extra_id__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12_io_enq_valid))) {
        __Vdlyvval__ram_data__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_data_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_data__v0 = 1U;
        __Vdlyvdim0__ram_data__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12_io_enq_valid))) {
        __Vdlyvval__ram_resp__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_resp_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_resp__v0 = 1U;
        __Vdlyvdim0__ram_resp__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12_io_enq_valid))) {
        __Vdlyvval__ram_echo_tl_state_size__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_size;
        __Vdlyvset__ram_echo_tl_state_size__v0 = 1U;
        __Vdlyvdim0__ram_echo_tl_state_size__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12_io_enq_valid))) {
        __Vdlyvval__ram_id__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_id__v0 = 1U;
        __Vdlyvdim0__ram_id__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12_io_enq_valid))) {
        __Vdlyvval__ram_last__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_last__v0 = 1U;
        __Vdlyvdim0__ram_last__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__deq_ptr_value = 0U;
    } else if (vlSelf->__PVT__do_deq) {
        vlSelf->__PVT__deq_ptr_value = vlSelf->__PVT___value_T_3;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12_io_enq_valid))) {
        __Vdlyvval__ram_echo_tl_state_source__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_source;
        __Vdlyvset__ram_echo_tl_state_source__v0 = 1U;
        __Vdlyvdim0__ram_echo_tl_state_source__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (__Vdlyvset__ram_echo_extra_id__v0) {
        vlSelf->__PVT__ram_echo_extra_id[__Vdlyvdim0__ram_echo_extra_id__v0] 
            = __Vdlyvval__ram_echo_extra_id__v0;
    }
    if (__Vdlyvset__ram_data__v0) {
        vlSelf->__PVT__ram_data[__Vdlyvdim0__ram_data__v0] 
            = __Vdlyvval__ram_data__v0;
    }
    if (__Vdlyvset__ram_resp__v0) {
        vlSelf->__PVT__ram_resp[__Vdlyvdim0__ram_resp__v0] 
            = __Vdlyvval__ram_resp__v0;
    }
    if (__Vdlyvset__ram_echo_tl_state_size__v0) {
        vlSelf->__PVT__ram_echo_tl_state_size[__Vdlyvdim0__ram_echo_tl_state_size__v0] 
            = __Vdlyvval__ram_echo_tl_state_size__v0;
    }
    if (__Vdlyvset__ram_id__v0) {
        vlSelf->__PVT__ram_id[__Vdlyvdim0__ram_id__v0] 
            = __Vdlyvval__ram_id__v0;
    }
    if (__Vdlyvset__ram_last__v0) {
        vlSelf->__PVT__ram_last[__Vdlyvdim0__ram_last__v0] 
            = __Vdlyvval__ram_last__v0;
    }
    if (__Vdlyvset__ram_echo_tl_state_source__v0) {
        vlSelf->__PVT__ram_echo_tl_state_source[__Vdlyvdim0__ram_echo_tl_state_source__v0] 
            = __Vdlyvval__ram_echo_tl_state_source__v0;
    }
    vlSelf->__PVT___value_T_3 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__deq_ptr_value)));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__enq_ptr_value = 0U;
    } else if (vlSelf->__PVT__do_enq) {
        vlSelf->__PVT__enq_ptr_value = vlSelf->__PVT___value_T_1;
    }
    vlSelf->__PVT___value_T_1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__enq_ptr_value)));
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__enq_ptr_value) 
                                == (IData)(vlSelf->__PVT__deq_ptr_value));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__29(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__29\n"); );
    // Body
    vlSelf->__PVT__do_enq = ((~ (IData)(vlSelf->__PVT__full)) 
                             & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12_io_enq_valid));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__45(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__45\n"); );
    // Body
    vlSelf->__PVT__do_deq = (0xfU & (((((IData)(1U) 
                                        << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                       >> 0xcU) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                     & (~ ((IData)(vlSelf->__PVT__ptr_match) 
                                           & (~ (IData)(vlSelf->__PVT__maybe_full))))));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__15(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__15\n"); );
    // Variables
    CData/*2:0*/ __Vdlyvdim0__ram_echo_tl_state_source__v0;
    CData/*6:0*/ __Vdlyvval__ram_echo_tl_state_source__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_tl_state_source__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_echo_tl_state_size__v0;
    CData/*3:0*/ __Vdlyvval__ram_echo_tl_state_size__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_tl_state_size__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_last__v0;
    CData/*0:0*/ __Vdlyvval__ram_last__v0;
    CData/*0:0*/ __Vdlyvset__ram_last__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_resp__v0;
    CData/*1:0*/ __Vdlyvval__ram_resp__v0;
    CData/*0:0*/ __Vdlyvset__ram_resp__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_id__v0;
    CData/*3:0*/ __Vdlyvval__ram_id__v0;
    CData/*0:0*/ __Vdlyvset__ram_id__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_data__v0;
    CData/*0:0*/ __Vdlyvset__ram_data__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_echo_extra_id__v0;
    CData/*0:0*/ __Vdlyvval__ram_echo_extra_id__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_extra_id__v0;
    QData/*63:0*/ __Vdlyvval__ram_data__v0;
    // Body
    __Vdlyvset__ram_echo_extra_id__v0 = 0U;
    __Vdlyvset__ram_data__v0 = 0U;
    __Vdlyvset__ram_resp__v0 = 0U;
    __Vdlyvset__ram_echo_tl_state_size__v0 = 0U;
    __Vdlyvset__ram_id__v0 = 0U;
    __Vdlyvset__ram_last__v0 = 0U;
    __Vdlyvset__ram_echo_tl_state_source__v0 = 0U;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__maybe_full = 0U;
    } else if (((IData)(vlSelf->__PVT__do_enq) != (IData)(vlSelf->__PVT__do_deq))) {
        vlSelf->__PVT__maybe_full = vlSelf->__PVT__do_enq;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13_io_enq_valid))) {
        __Vdlyvval__ram_echo_extra_id__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_extra_id;
        __Vdlyvset__ram_echo_extra_id__v0 = 1U;
        __Vdlyvdim0__ram_echo_extra_id__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13_io_enq_valid))) {
        __Vdlyvval__ram_data__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_data_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_data__v0 = 1U;
        __Vdlyvdim0__ram_data__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13_io_enq_valid))) {
        __Vdlyvval__ram_resp__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_resp_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_resp__v0 = 1U;
        __Vdlyvdim0__ram_resp__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13_io_enq_valid))) {
        __Vdlyvval__ram_echo_tl_state_size__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_size;
        __Vdlyvset__ram_echo_tl_state_size__v0 = 1U;
        __Vdlyvdim0__ram_echo_tl_state_size__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13_io_enq_valid))) {
        __Vdlyvval__ram_id__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_id__v0 = 1U;
        __Vdlyvdim0__ram_id__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13_io_enq_valid))) {
        __Vdlyvval__ram_last__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_last__v0 = 1U;
        __Vdlyvdim0__ram_last__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__deq_ptr_value = 0U;
    } else if (vlSelf->__PVT__do_deq) {
        vlSelf->__PVT__deq_ptr_value = vlSelf->__PVT___value_T_3;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13_io_enq_valid))) {
        __Vdlyvval__ram_echo_tl_state_source__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_source;
        __Vdlyvset__ram_echo_tl_state_source__v0 = 1U;
        __Vdlyvdim0__ram_echo_tl_state_source__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (__Vdlyvset__ram_echo_extra_id__v0) {
        vlSelf->__PVT__ram_echo_extra_id[__Vdlyvdim0__ram_echo_extra_id__v0] 
            = __Vdlyvval__ram_echo_extra_id__v0;
    }
    if (__Vdlyvset__ram_data__v0) {
        vlSelf->__PVT__ram_data[__Vdlyvdim0__ram_data__v0] 
            = __Vdlyvval__ram_data__v0;
    }
    if (__Vdlyvset__ram_resp__v0) {
        vlSelf->__PVT__ram_resp[__Vdlyvdim0__ram_resp__v0] 
            = __Vdlyvval__ram_resp__v0;
    }
    if (__Vdlyvset__ram_echo_tl_state_size__v0) {
        vlSelf->__PVT__ram_echo_tl_state_size[__Vdlyvdim0__ram_echo_tl_state_size__v0] 
            = __Vdlyvval__ram_echo_tl_state_size__v0;
    }
    if (__Vdlyvset__ram_id__v0) {
        vlSelf->__PVT__ram_id[__Vdlyvdim0__ram_id__v0] 
            = __Vdlyvval__ram_id__v0;
    }
    if (__Vdlyvset__ram_last__v0) {
        vlSelf->__PVT__ram_last[__Vdlyvdim0__ram_last__v0] 
            = __Vdlyvval__ram_last__v0;
    }
    if (__Vdlyvset__ram_echo_tl_state_source__v0) {
        vlSelf->__PVT__ram_echo_tl_state_source[__Vdlyvdim0__ram_echo_tl_state_source__v0] 
            = __Vdlyvval__ram_echo_tl_state_source__v0;
    }
    vlSelf->__PVT___value_T_3 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__deq_ptr_value)));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__enq_ptr_value = 0U;
    } else if (vlSelf->__PVT__do_enq) {
        vlSelf->__PVT__enq_ptr_value = vlSelf->__PVT___value_T_1;
    }
    vlSelf->__PVT___value_T_1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__enq_ptr_value)));
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__enq_ptr_value) 
                                == (IData)(vlSelf->__PVT__deq_ptr_value));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__30(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__30\n"); );
    // Body
    vlSelf->__PVT__do_enq = ((~ (IData)(vlSelf->__PVT__full)) 
                             & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13_io_enq_valid));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__46(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__46\n"); );
    // Body
    vlSelf->__PVT__do_deq = (7U & (((((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                     >> 0xdU) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                   & (~ ((IData)(vlSelf->__PVT__ptr_match) 
                                         & (~ (IData)(vlSelf->__PVT__maybe_full))))));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__16(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__16\n"); );
    // Variables
    CData/*2:0*/ __Vdlyvdim0__ram_echo_tl_state_source__v0;
    CData/*6:0*/ __Vdlyvval__ram_echo_tl_state_source__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_tl_state_source__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_echo_tl_state_size__v0;
    CData/*3:0*/ __Vdlyvval__ram_echo_tl_state_size__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_tl_state_size__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_last__v0;
    CData/*0:0*/ __Vdlyvval__ram_last__v0;
    CData/*0:0*/ __Vdlyvset__ram_last__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_resp__v0;
    CData/*1:0*/ __Vdlyvval__ram_resp__v0;
    CData/*0:0*/ __Vdlyvset__ram_resp__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_id__v0;
    CData/*3:0*/ __Vdlyvval__ram_id__v0;
    CData/*0:0*/ __Vdlyvset__ram_id__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_data__v0;
    CData/*0:0*/ __Vdlyvset__ram_data__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_echo_extra_id__v0;
    CData/*0:0*/ __Vdlyvval__ram_echo_extra_id__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_extra_id__v0;
    QData/*63:0*/ __Vdlyvval__ram_data__v0;
    // Body
    __Vdlyvset__ram_echo_extra_id__v0 = 0U;
    __Vdlyvset__ram_data__v0 = 0U;
    __Vdlyvset__ram_resp__v0 = 0U;
    __Vdlyvset__ram_echo_tl_state_size__v0 = 0U;
    __Vdlyvset__ram_id__v0 = 0U;
    __Vdlyvset__ram_last__v0 = 0U;
    __Vdlyvset__ram_echo_tl_state_source__v0 = 0U;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__maybe_full = 0U;
    } else if (((IData)(vlSelf->__PVT__do_enq) != (IData)(vlSelf->__PVT__do_deq))) {
        vlSelf->__PVT__maybe_full = vlSelf->__PVT__do_enq;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14_io_enq_valid))) {
        __Vdlyvval__ram_echo_extra_id__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_extra_id;
        __Vdlyvset__ram_echo_extra_id__v0 = 1U;
        __Vdlyvdim0__ram_echo_extra_id__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14_io_enq_valid))) {
        __Vdlyvval__ram_data__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_data_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_data__v0 = 1U;
        __Vdlyvdim0__ram_data__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14_io_enq_valid))) {
        __Vdlyvval__ram_resp__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_resp_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_resp__v0 = 1U;
        __Vdlyvdim0__ram_resp__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14_io_enq_valid))) {
        __Vdlyvval__ram_echo_tl_state_size__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_size;
        __Vdlyvset__ram_echo_tl_state_size__v0 = 1U;
        __Vdlyvdim0__ram_echo_tl_state_size__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14_io_enq_valid))) {
        __Vdlyvval__ram_id__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_id__v0 = 1U;
        __Vdlyvdim0__ram_id__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14_io_enq_valid))) {
        __Vdlyvval__ram_last__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_last__v0 = 1U;
        __Vdlyvdim0__ram_last__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__deq_ptr_value = 0U;
    } else if (vlSelf->__PVT__do_deq) {
        vlSelf->__PVT__deq_ptr_value = vlSelf->__PVT___value_T_3;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14_io_enq_valid))) {
        __Vdlyvval__ram_echo_tl_state_source__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_source;
        __Vdlyvset__ram_echo_tl_state_source__v0 = 1U;
        __Vdlyvdim0__ram_echo_tl_state_source__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (__Vdlyvset__ram_echo_extra_id__v0) {
        vlSelf->__PVT__ram_echo_extra_id[__Vdlyvdim0__ram_echo_extra_id__v0] 
            = __Vdlyvval__ram_echo_extra_id__v0;
    }
    if (__Vdlyvset__ram_data__v0) {
        vlSelf->__PVT__ram_data[__Vdlyvdim0__ram_data__v0] 
            = __Vdlyvval__ram_data__v0;
    }
    if (__Vdlyvset__ram_resp__v0) {
        vlSelf->__PVT__ram_resp[__Vdlyvdim0__ram_resp__v0] 
            = __Vdlyvval__ram_resp__v0;
    }
    if (__Vdlyvset__ram_echo_tl_state_size__v0) {
        vlSelf->__PVT__ram_echo_tl_state_size[__Vdlyvdim0__ram_echo_tl_state_size__v0] 
            = __Vdlyvval__ram_echo_tl_state_size__v0;
    }
    if (__Vdlyvset__ram_id__v0) {
        vlSelf->__PVT__ram_id[__Vdlyvdim0__ram_id__v0] 
            = __Vdlyvval__ram_id__v0;
    }
    if (__Vdlyvset__ram_last__v0) {
        vlSelf->__PVT__ram_last[__Vdlyvdim0__ram_last__v0] 
            = __Vdlyvval__ram_last__v0;
    }
    if (__Vdlyvset__ram_echo_tl_state_source__v0) {
        vlSelf->__PVT__ram_echo_tl_state_source[__Vdlyvdim0__ram_echo_tl_state_source__v0] 
            = __Vdlyvval__ram_echo_tl_state_source__v0;
    }
    vlSelf->__PVT___value_T_3 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__deq_ptr_value)));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__enq_ptr_value = 0U;
    } else if (vlSelf->__PVT__do_enq) {
        vlSelf->__PVT__enq_ptr_value = vlSelf->__PVT___value_T_1;
    }
    vlSelf->__PVT___value_T_1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__enq_ptr_value)));
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__enq_ptr_value) 
                                == (IData)(vlSelf->__PVT__deq_ptr_value));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__31(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__31\n"); );
    // Body
    vlSelf->__PVT__do_enq = ((~ (IData)(vlSelf->__PVT__full)) 
                             & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14_io_enq_valid));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__47(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__47\n"); );
    // Body
    vlSelf->__PVT__do_deq = (3U & (((((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                     >> 0xeU) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                   & (~ ((IData)(vlSelf->__PVT__ptr_match) 
                                         & (~ (IData)(vlSelf->__PVT__maybe_full))))));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__1(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__1\n"); );
    // Variables
    CData/*2:0*/ __Vdlyvdim0__ram_echo_tl_state_source__v0;
    CData/*6:0*/ __Vdlyvval__ram_echo_tl_state_source__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_tl_state_source__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_echo_tl_state_size__v0;
    CData/*3:0*/ __Vdlyvval__ram_echo_tl_state_size__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_tl_state_size__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_last__v0;
    CData/*0:0*/ __Vdlyvval__ram_last__v0;
    CData/*0:0*/ __Vdlyvset__ram_last__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_resp__v0;
    CData/*1:0*/ __Vdlyvval__ram_resp__v0;
    CData/*0:0*/ __Vdlyvset__ram_resp__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_id__v0;
    CData/*3:0*/ __Vdlyvval__ram_id__v0;
    CData/*0:0*/ __Vdlyvset__ram_id__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_data__v0;
    CData/*0:0*/ __Vdlyvset__ram_data__v0;
    CData/*2:0*/ __Vdlyvdim0__ram_echo_extra_id__v0;
    CData/*0:0*/ __Vdlyvval__ram_echo_extra_id__v0;
    CData/*0:0*/ __Vdlyvset__ram_echo_extra_id__v0;
    QData/*63:0*/ __Vdlyvval__ram_data__v0;
    // Body
    __Vdlyvset__ram_echo_extra_id__v0 = 0U;
    __Vdlyvset__ram_data__v0 = 0U;
    __Vdlyvset__ram_resp__v0 = 0U;
    __Vdlyvset__ram_echo_tl_state_size__v0 = 0U;
    __Vdlyvset__ram_id__v0 = 0U;
    __Vdlyvset__ram_last__v0 = 0U;
    __Vdlyvset__ram_echo_tl_state_source__v0 = 0U;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__maybe_full = 0U;
    } else if (((IData)(vlSelf->__PVT__do_enq) != (IData)(vlSelf->__PVT__do_deq))) {
        vlSelf->__PVT__maybe_full = vlSelf->__PVT__do_enq;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15_io_enq_valid))) {
        __Vdlyvval__ram_echo_extra_id__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_extra_id;
        __Vdlyvset__ram_echo_extra_id__v0 = 1U;
        __Vdlyvdim0__ram_echo_extra_id__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15_io_enq_valid))) {
        __Vdlyvval__ram_data__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_data_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_data__v0 = 1U;
        __Vdlyvdim0__ram_data__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15_io_enq_valid))) {
        __Vdlyvval__ram_resp__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_resp_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_resp__v0 = 1U;
        __Vdlyvdim0__ram_resp__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15_io_enq_valid))) {
        __Vdlyvval__ram_echo_tl_state_size__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_size;
        __Vdlyvset__ram_echo_tl_state_size__v0 = 1U;
        __Vdlyvdim0__ram_echo_tl_state_size__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15_io_enq_valid))) {
        __Vdlyvval__ram_id__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_id__v0 = 1U;
        __Vdlyvdim0__ram_id__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15_io_enq_valid))) {
        __Vdlyvval__ram_last__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data;
        __Vdlyvset__ram_last__v0 = 1U;
        __Vdlyvdim0__ram_last__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__deq_ptr_value = 0U;
    } else if (vlSelf->__PVT__do_deq) {
        vlSelf->__PVT__deq_ptr_value = vlSelf->__PVT___value_T_3;
    }
    if (((~ (IData)(vlSelf->__PVT__full)) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15_io_enq_valid))) {
        __Vdlyvval__ram_echo_tl_state_source__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_source;
        __Vdlyvset__ram_echo_tl_state_source__v0 = 1U;
        __Vdlyvdim0__ram_echo_tl_state_source__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (__Vdlyvset__ram_echo_extra_id__v0) {
        vlSelf->__PVT__ram_echo_extra_id[__Vdlyvdim0__ram_echo_extra_id__v0] 
            = __Vdlyvval__ram_echo_extra_id__v0;
    }
    if (__Vdlyvset__ram_data__v0) {
        vlSelf->__PVT__ram_data[__Vdlyvdim0__ram_data__v0] 
            = __Vdlyvval__ram_data__v0;
    }
    if (__Vdlyvset__ram_resp__v0) {
        vlSelf->__PVT__ram_resp[__Vdlyvdim0__ram_resp__v0] 
            = __Vdlyvval__ram_resp__v0;
    }
    if (__Vdlyvset__ram_echo_tl_state_size__v0) {
        vlSelf->__PVT__ram_echo_tl_state_size[__Vdlyvdim0__ram_echo_tl_state_size__v0] 
            = __Vdlyvval__ram_echo_tl_state_size__v0;
    }
    if (__Vdlyvset__ram_id__v0) {
        vlSelf->__PVT__ram_id[__Vdlyvdim0__ram_id__v0] 
            = __Vdlyvval__ram_id__v0;
    }
    if (__Vdlyvset__ram_last__v0) {
        vlSelf->__PVT__ram_last[__Vdlyvdim0__ram_last__v0] 
            = __Vdlyvval__ram_last__v0;
    }
    if (__Vdlyvset__ram_echo_tl_state_source__v0) {
        vlSelf->__PVT__ram_echo_tl_state_source[__Vdlyvdim0__ram_echo_tl_state_source__v0] 
            = __Vdlyvval__ram_echo_tl_state_source__v0;
    }
    vlSelf->__PVT___value_T_3 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__deq_ptr_value)));
    vlSelf->__PVT__ram_last_io_deq_bits_MPORT_data 
        = vlSelf->__PVT__ram_last[vlSelf->__PVT__deq_ptr_value];
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__enq_ptr_value = 0U;
    } else if (vlSelf->__PVT__do_enq) {
        vlSelf->__PVT__enq_ptr_value = vlSelf->__PVT___value_T_1;
    }
    vlSelf->__PVT___value_T_1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__enq_ptr_value)));
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__enq_ptr_value) 
                                == (IData)(vlSelf->__PVT__deq_ptr_value));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__32(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__32\n"); );
    // Body
    vlSelf->__PVT__do_enq = ((~ (IData)(vlSelf->__PVT__full)) 
                             & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15_io_enq_valid));
}

VL_INLINE_OPT void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__48(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__48\n"); );
    // Body
    vlSelf->__PVT__do_deq = (1U & (((((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                     >> 0xfU) & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                   & (~ ((IData)(vlSelf->__PVT__ptr_match) 
                                         & (~ (IData)(vlSelf->__PVT__maybe_full))))));
}
