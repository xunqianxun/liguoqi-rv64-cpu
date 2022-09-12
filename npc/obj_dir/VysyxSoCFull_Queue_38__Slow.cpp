// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull_Queue_38.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

//==========


void VysyxSoCFull_Queue_38___ctor_var_reset(VysyxSoCFull_Queue_38* vlSelf);

VysyxSoCFull_Queue_38::VysyxSoCFull_Queue_38(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VysyxSoCFull_Queue_38___ctor_var_reset(this);
}

void VysyxSoCFull_Queue_38::__Vconfigure(VysyxSoCFull__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VysyxSoCFull_Queue_38::~VysyxSoCFull_Queue_38() {
}

void VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__49(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__49\n"); );
    // Body
    vlSelf->__PVT___value_T_3 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__deq_ptr_value)));
    vlSelf->__PVT___value_T_1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__enq_ptr_value)));
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__enq_ptr_value) 
                                == (IData)(vlSelf->__PVT__deq_ptr_value));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
    vlSelf->__PVT__do_enq = ((~ (IData)(vlSelf->__PVT__full)) 
                             & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0_io_enq_valid));
}

void VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__50(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__50\n"); );
    // Body
    vlSelf->__PVT___value_T_3 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__deq_ptr_value)));
    vlSelf->__PVT___value_T_1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__enq_ptr_value)));
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__enq_ptr_value) 
                                == (IData)(vlSelf->__PVT__deq_ptr_value));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
    vlSelf->__PVT__do_enq = ((~ (IData)(vlSelf->__PVT__full)) 
                             & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1_io_enq_valid));
}

void VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__51(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__51\n"); );
    // Body
    vlSelf->__PVT___value_T_3 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__deq_ptr_value)));
    vlSelf->__PVT___value_T_1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__enq_ptr_value)));
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__enq_ptr_value) 
                                == (IData)(vlSelf->__PVT__deq_ptr_value));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
    vlSelf->__PVT__do_enq = ((~ (IData)(vlSelf->__PVT__full)) 
                             & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2_io_enq_valid));
}

void VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__52(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__52\n"); );
    // Body
    vlSelf->__PVT___value_T_3 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__deq_ptr_value)));
    vlSelf->__PVT___value_T_1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__enq_ptr_value)));
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__enq_ptr_value) 
                                == (IData)(vlSelf->__PVT__deq_ptr_value));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
    vlSelf->__PVT__do_enq = ((~ (IData)(vlSelf->__PVT__full)) 
                             & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3_io_enq_valid));
}

void VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__53(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__53\n"); );
    // Body
    vlSelf->__PVT___value_T_3 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__deq_ptr_value)));
    vlSelf->__PVT___value_T_1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__enq_ptr_value)));
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__enq_ptr_value) 
                                == (IData)(vlSelf->__PVT__deq_ptr_value));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
    vlSelf->__PVT__do_enq = ((~ (IData)(vlSelf->__PVT__full)) 
                             & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4_io_enq_valid));
}

void VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__54(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__54\n"); );
    // Body
    vlSelf->__PVT___value_T_3 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__deq_ptr_value)));
    vlSelf->__PVT___value_T_1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__enq_ptr_value)));
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__enq_ptr_value) 
                                == (IData)(vlSelf->__PVT__deq_ptr_value));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
    vlSelf->__PVT__do_enq = ((~ (IData)(vlSelf->__PVT__full)) 
                             & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5_io_enq_valid));
}

void VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__55(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__55\n"); );
    // Body
    vlSelf->__PVT___value_T_3 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__deq_ptr_value)));
    vlSelf->__PVT___value_T_1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__enq_ptr_value)));
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__enq_ptr_value) 
                                == (IData)(vlSelf->__PVT__deq_ptr_value));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
    vlSelf->__PVT__do_enq = ((~ (IData)(vlSelf->__PVT__full)) 
                             & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6_io_enq_valid));
}

void VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__56(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__56\n"); );
    // Body
    vlSelf->__PVT___value_T_3 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__deq_ptr_value)));
    vlSelf->__PVT___value_T_1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__enq_ptr_value)));
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__enq_ptr_value) 
                                == (IData)(vlSelf->__PVT__deq_ptr_value));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
    vlSelf->__PVT__do_enq = ((~ (IData)(vlSelf->__PVT__full)) 
                             & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7_io_enq_valid));
}

void VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__57(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__57\n"); );
    // Body
    vlSelf->__PVT___value_T_3 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__deq_ptr_value)));
    vlSelf->__PVT___value_T_1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__enq_ptr_value)));
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__enq_ptr_value) 
                                == (IData)(vlSelf->__PVT__deq_ptr_value));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
    vlSelf->__PVT__do_enq = ((~ (IData)(vlSelf->__PVT__full)) 
                             & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8_io_enq_valid));
}

void VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__58(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__58\n"); );
    // Body
    vlSelf->__PVT___value_T_3 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__deq_ptr_value)));
    vlSelf->__PVT___value_T_1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__enq_ptr_value)));
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__enq_ptr_value) 
                                == (IData)(vlSelf->__PVT__deq_ptr_value));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
    vlSelf->__PVT__do_enq = ((~ (IData)(vlSelf->__PVT__full)) 
                             & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9_io_enq_valid));
}

void VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__59(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__59\n"); );
    // Body
    vlSelf->__PVT___value_T_3 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__deq_ptr_value)));
    vlSelf->__PVT___value_T_1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__enq_ptr_value)));
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__enq_ptr_value) 
                                == (IData)(vlSelf->__PVT__deq_ptr_value));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
    vlSelf->__PVT__do_enq = ((~ (IData)(vlSelf->__PVT__full)) 
                             & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10_io_enq_valid));
}

void VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__60(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__60\n"); );
    // Body
    vlSelf->__PVT___value_T_3 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__deq_ptr_value)));
    vlSelf->__PVT___value_T_1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__enq_ptr_value)));
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__enq_ptr_value) 
                                == (IData)(vlSelf->__PVT__deq_ptr_value));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
    vlSelf->__PVT__do_enq = ((~ (IData)(vlSelf->__PVT__full)) 
                             & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11_io_enq_valid));
}

void VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__61(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__61\n"); );
    // Body
    vlSelf->__PVT___value_T_3 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__deq_ptr_value)));
    vlSelf->__PVT___value_T_1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__enq_ptr_value)));
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__enq_ptr_value) 
                                == (IData)(vlSelf->__PVT__deq_ptr_value));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
    vlSelf->__PVT__do_enq = ((~ (IData)(vlSelf->__PVT__full)) 
                             & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12_io_enq_valid));
}

void VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__62(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__62\n"); );
    // Body
    vlSelf->__PVT___value_T_3 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__deq_ptr_value)));
    vlSelf->__PVT___value_T_1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__enq_ptr_value)));
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__enq_ptr_value) 
                                == (IData)(vlSelf->__PVT__deq_ptr_value));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
    vlSelf->__PVT__do_enq = ((~ (IData)(vlSelf->__PVT__full)) 
                             & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13_io_enq_valid));
}

void VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__63(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__63\n"); );
    // Body
    vlSelf->__PVT___value_T_3 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__deq_ptr_value)));
    vlSelf->__PVT___value_T_1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__enq_ptr_value)));
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__enq_ptr_value) 
                                == (IData)(vlSelf->__PVT__deq_ptr_value));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
    vlSelf->__PVT__do_enq = ((~ (IData)(vlSelf->__PVT__full)) 
                             & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14_io_enq_valid));
}

void VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__64(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__64\n"); );
    // Body
    vlSelf->__PVT___value_T_3 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__deq_ptr_value)));
    vlSelf->__PVT__ram_last_io_deq_bits_MPORT_data 
        = vlSelf->__PVT__ram_last[vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT___value_T_1 = (7U & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__enq_ptr_value)));
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__enq_ptr_value) 
                                == (IData)(vlSelf->__PVT__deq_ptr_value));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
    vlSelf->__PVT__do_enq = ((~ (IData)(vlSelf->__PVT__full)) 
                             & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15_io_enq_valid));
}

void VysyxSoCFull_Queue_38___ctor_var_reset(VysyxSoCFull_Queue_38* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_Queue_38___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_enq_ready = VL_RAND_RESET_I(1);
    vlSelf->io_enq_valid = VL_RAND_RESET_I(1);
    vlSelf->io_enq_bits_id = VL_RAND_RESET_I(4);
    vlSelf->io_enq_bits_data = VL_RAND_RESET_Q(64);
    vlSelf->io_enq_bits_resp = VL_RAND_RESET_I(2);
    vlSelf->io_enq_bits_echo_tl_state_size = VL_RAND_RESET_I(4);
    vlSelf->io_enq_bits_echo_tl_state_source = VL_RAND_RESET_I(7);
    vlSelf->io_enq_bits_echo_extra_id = VL_RAND_RESET_I(1);
    vlSelf->io_enq_bits_last = VL_RAND_RESET_I(1);
    vlSelf->io_deq_ready = VL_RAND_RESET_I(1);
    vlSelf->io_deq_valid = VL_RAND_RESET_I(1);
    vlSelf->io_deq_bits_id = VL_RAND_RESET_I(4);
    vlSelf->io_deq_bits_data = VL_RAND_RESET_Q(64);
    vlSelf->io_deq_bits_resp = VL_RAND_RESET_I(2);
    vlSelf->io_deq_bits_echo_tl_state_size = VL_RAND_RESET_I(4);
    vlSelf->io_deq_bits_echo_tl_state_source = VL_RAND_RESET_I(7);
    vlSelf->io_deq_bits_echo_extra_id = VL_RAND_RESET_I(1);
    vlSelf->io_deq_bits_last = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__PVT__ram_id[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__PVT__ram_data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__PVT__ram_resp[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__PVT__ram_echo_tl_state_size[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__PVT__ram_echo_tl_state_source[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__PVT__ram_echo_extra_id[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__PVT__ram_last[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__ram_last_io_deq_bits_MPORT_data = VL_RAND_RESET_I(1);
    vlSelf->__PVT__enq_ptr_value = VL_RAND_RESET_I(3);
    vlSelf->__PVT__deq_ptr_value = VL_RAND_RESET_I(3);
    vlSelf->__PVT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ptr_match = VL_RAND_RESET_I(1);
    vlSelf->__PVT__full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__do_deq = VL_RAND_RESET_I(1);
    vlSelf->__PVT___value_T_1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT___value_T_3 = VL_RAND_RESET_I(3);
}
