// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull_RX.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__5(VysyxSoCFull_RX* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__5\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    CData/*4:0*/ __Vdlyvdim0__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    CData/*4:0*/ __Vdlyvdim0__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    CData/*4:0*/ __Vdlyvdim0__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    CData/*4:0*/ __Vdlyvdim0__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    IData/*31:0*/ __Vdlyvval__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    IData/*31:0*/ __Vdlyvval__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    IData/*31:0*/ __Vdlyvval__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    IData/*31:0*/ __Vdlyvval__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    IData/*31:0*/ __Vdlyvval__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    // Body
    __Vdlyvset__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 = 0U;
    __Vdlyvset__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 = 0U;
    __Vdlyvset__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 = 0U;
    __Vdlyvset__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 = 0U;
    __Vdlyvset__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__hqa__DOT__io_deq_q__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__hqb__DOT__io_deq_q__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__hqc__DOT__io_deq_q__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__hqd__DOT__io_deq_q__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__hqe__DOT__io_deq_q__DOT__ram__v0 = 0U;
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__hqa_io_enq_valid)) 
                               | (~ (IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__full))) 
                              | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at RX.scala:56 assert (!hq.io.enq.valid || hq.io.enq.ready) // overrun impossible\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__hqa_io_enq_valid)) 
                               | (~ (IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__full))) 
                              | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:29065: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.rx\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 29065, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__hqb_io_enq_valid)) 
                               | (~ (IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__full))) 
                              | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at RX.scala:56 assert (!hq.io.enq.valid || hq.io.enq.ready) // overrun impossible\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__hqb_io_enq_valid)) 
                               | (~ (IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__full))) 
                              | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:29089: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.rx\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 29089, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__hqc_io_enq_valid)) 
                               | (~ (IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__full))) 
                              | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at RX.scala:56 assert (!hq.io.enq.valid || hq.io.enq.ready) // overrun impossible\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__hqc_io_enq_valid)) 
                               | (~ (IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__full))) 
                              | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:29113: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.rx\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 29113, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__hqd_io_enq_valid)) 
                               | (~ (IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__full))) 
                              | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at RX.scala:56 assert (!hq.io.enq.valid || hq.io.enq.ready) // overrun impossible\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__hqd_io_enq_valid)) 
                               | (~ (IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__full))) 
                              | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:29137: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.rx\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 29137, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__hqe_io_enq_valid)) 
                               | (~ (IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__full))) 
                              | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at RX.scala:56 assert (!hq.io.enq.valid || hq.io.enq.ready) // overrun impossible\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__hqe_io_enq_valid)) 
                               | (~ (IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__full))) 
                              | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:29161: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.rx\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 29161, "");
    }
    vlSelf->__PVT__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_ren 
        = vlSelf->__PVT__hqa__DOT__fq__DOT__ram_R0_en;
    vlSelf->__PVT__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_ren 
        = vlSelf->__PVT__hqb__DOT__fq__DOT__ram_R0_en;
    vlSelf->__PVT__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_ren 
        = vlSelf->__PVT__hqc__DOT__fq__DOT__ram_R0_en;
    vlSelf->__PVT__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_ren 
        = vlSelf->__PVT__hqd__DOT__fq__DOT__ram_R0_en;
    vlSelf->__PVT__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_ren 
        = vlSelf->__PVT__hqe__DOT__fq__DOT__ram_R0_en;
    vlSelf->__PVT__hqa__DOT__fq__DOT__ram_out_valid 
        = ((IData)(vlSelf->__PVT__hqa__DOT__io_deq_q_io_enq_ready) 
           & ((IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__atLeastTwo) 
              | ((~ (IData)(vlSelf->__PVT__hqa__DOT__fq_io_deq_valid)) 
                 & (~ (IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__empty)))));
    vlSelf->__PVT__hqb__DOT__fq__DOT__ram_out_valid 
        = ((IData)(vlSelf->__PVT__hqb__DOT__io_deq_q_io_enq_ready) 
           & ((IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__atLeastTwo) 
              | ((~ (IData)(vlSelf->__PVT__hqb__DOT__fq_io_deq_valid)) 
                 & (~ (IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__empty)))));
    vlSelf->__PVT__hqc__DOT__fq__DOT__ram_out_valid 
        = ((IData)(vlSelf->__PVT__hqc__DOT__io_deq_q_io_enq_ready) 
           & ((IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__atLeastTwo) 
              | ((~ (IData)(vlSelf->__PVT__hqc__DOT__fq_io_deq_valid)) 
                 & (~ (IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__empty)))));
    vlSelf->__PVT__hqd__DOT__fq__DOT__ram_out_valid 
        = ((IData)(vlSelf->__PVT__hqd__DOT__io_deq_q_io_enq_ready) 
           & ((IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__atLeastTwo) 
              | ((~ (IData)(vlSelf->__PVT__hqd__DOT__fq_io_deq_valid)) 
                 & (~ (IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__empty)))));
    vlSelf->__PVT__hqe__DOT__fq__DOT__ram_out_valid 
        = ((IData)(vlSelf->__PVT__hqe__DOT__io_deq_q_io_enq_ready) 
           & ((IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__atLeastTwo) 
              | ((~ (IData)(vlSelf->__PVT__hqe__DOT__fq_io_deq_valid)) 
                 & (~ (IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__empty)))));
    if (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqa__DOT__io_deq_q__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->__PVT__hqa__DOT__io_deq_q__DOT__do_enq) 
                != (IData)(vlSelf->__PVT__hqa__DOT__io_deq_q__DOT__do_deq))) {
        vlSelf->__PVT__hqa__DOT__io_deq_q__DOT__maybe_full 
            = vlSelf->__PVT__hqa__DOT__io_deq_q__DOT__do_enq;
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqb__DOT__io_deq_q__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->__PVT__hqb__DOT__io_deq_q__DOT__do_enq) 
                != (IData)(vlSelf->__PVT__hqb__DOT__io_deq_q__DOT__do_deq))) {
        vlSelf->__PVT__hqb__DOT__io_deq_q__DOT__maybe_full 
            = vlSelf->__PVT__hqb__DOT__io_deq_q__DOT__do_enq;
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqc__DOT__io_deq_q__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->__PVT__hqc__DOT__io_deq_q__DOT__do_enq) 
                != (IData)(vlSelf->__PVT__hqc__DOT__io_deq_q__DOT__do_deq))) {
        vlSelf->__PVT__hqc__DOT__io_deq_q__DOT__maybe_full 
            = vlSelf->__PVT__hqc__DOT__io_deq_q__DOT__do_enq;
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqd__DOT__io_deq_q__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->__PVT__hqd__DOT__io_deq_q__DOT__do_enq) 
                != (IData)(vlSelf->__PVT__hqd__DOT__io_deq_q__DOT__do_deq))) {
        vlSelf->__PVT__hqd__DOT__io_deq_q__DOT__maybe_full 
            = vlSelf->__PVT__hqd__DOT__io_deq_q__DOT__do_enq;
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqe__DOT__io_deq_q__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->__PVT__hqe__DOT__io_deq_q__DOT__do_enq) 
                != (IData)(vlSelf->__PVT__hqe__DOT__io_deq_q__DOT__do_deq))) {
        vlSelf->__PVT__hqe__DOT__io_deq_q__DOT__maybe_full 
            = vlSelf->__PVT__hqe__DOT__io_deq_q__DOT__do_enq;
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqa__DOT__fq__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__do_enq) 
                != (IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__do_deq))) {
        vlSelf->__PVT__hqa__DOT__fq__DOT__maybe_full 
            = vlSelf->__PVT__hqa__DOT__fq__DOT__do_enq;
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqb__DOT__fq__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__do_enq) 
                != (IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__do_deq))) {
        vlSelf->__PVT__hqb__DOT__fq__DOT__maybe_full 
            = vlSelf->__PVT__hqb__DOT__fq__DOT__do_enq;
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqc__DOT__fq__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__do_enq) 
                != (IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__do_deq))) {
        vlSelf->__PVT__hqc__DOT__fq__DOT__maybe_full 
            = vlSelf->__PVT__hqc__DOT__fq__DOT__do_enq;
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqd__DOT__fq__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__do_enq) 
                != (IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__do_deq))) {
        vlSelf->__PVT__hqd__DOT__fq__DOT__maybe_full 
            = vlSelf->__PVT__hqd__DOT__fq__DOT__do_enq;
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqe__DOT__fq__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__do_enq) 
                != (IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__do_deq))) {
        vlSelf->__PVT__hqe__DOT__fq__DOT__maybe_full 
            = vlSelf->__PVT__hqe__DOT__fq__DOT__do_enq;
    }
    if (((IData)(vlSelf->__PVT__hqa__DOT__fq__DOT___do_enq_T) 
         & (~ (IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__do_flow)))) {
        __Vdlyvval__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 
            = vlSelf->__PVT__b2c_data;
        __Vdlyvset__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 = 1U;
        __Vdlyvdim0__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 
            = vlSelf->__PVT__hqa__DOT__fq__DOT__enq_ptr;
    }
    if (((IData)(vlSelf->__PVT__hqb__DOT__fq__DOT___do_enq_T) 
         & (~ (IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__do_flow)))) {
        __Vdlyvval__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 
            = vlSelf->__PVT__b2c_data;
        __Vdlyvset__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 = 1U;
        __Vdlyvdim0__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 
            = vlSelf->__PVT__hqb__DOT__fq__DOT__enq_ptr;
    }
    if (((IData)(vlSelf->__PVT__hqc__DOT__fq__DOT___do_enq_T) 
         & (~ (IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__do_flow)))) {
        __Vdlyvval__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 
            = vlSelf->__PVT__b2c_data;
        __Vdlyvset__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 = 1U;
        __Vdlyvdim0__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 
            = vlSelf->__PVT__hqc__DOT__fq__DOT__enq_ptr;
    }
    if (((IData)(vlSelf->__PVT__hqd__DOT__fq__DOT___do_enq_T) 
         & (~ (IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__do_flow)))) {
        __Vdlyvval__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 
            = vlSelf->__PVT__b2c_data;
        __Vdlyvset__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 = 1U;
        __Vdlyvdim0__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 
            = vlSelf->__PVT__hqd__DOT__fq__DOT__enq_ptr;
    }
    if (((IData)(vlSelf->__PVT__hqe__DOT__fq__DOT___do_enq_T) 
         & (~ (IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__do_flow)))) {
        __Vdlyvval__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 
            = vlSelf->__PVT__b2c_data;
        __Vdlyvset__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 = 1U;
        __Vdlyvdim0__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 
            = vlSelf->__PVT__hqe__DOT__fq__DOT__enq_ptr;
    }
    if (((IData)(vlSelf->__PVT__hqa__DOT__io_deq_q_io_enq_ready) 
         & (IData)(vlSelf->__PVT__hqa__DOT__fq_io_deq_valid))) {
        vlSelf->__Vdlyvval__hqa__DOT__io_deq_q__DOT__ram__v0 
            = ((IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__empty)
                ? vlSelf->__PVT__b2c_data : vlSelf->__PVT__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram
               [vlSelf->__PVT__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_addr]);
        vlSelf->__Vdlyvset__hqa__DOT__io_deq_q__DOT__ram__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__hqb__DOT__io_deq_q_io_enq_ready) 
         & (IData)(vlSelf->__PVT__hqb__DOT__fq_io_deq_valid))) {
        vlSelf->__Vdlyvval__hqb__DOT__io_deq_q__DOT__ram__v0 
            = ((IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__empty)
                ? vlSelf->__PVT__b2c_data : vlSelf->__PVT__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram
               [vlSelf->__PVT__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_addr]);
        vlSelf->__Vdlyvset__hqb__DOT__io_deq_q__DOT__ram__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__hqc__DOT__io_deq_q_io_enq_ready) 
         & (IData)(vlSelf->__PVT__hqc__DOT__fq_io_deq_valid))) {
        vlSelf->__Vdlyvval__hqc__DOT__io_deq_q__DOT__ram__v0 
            = ((IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__empty)
                ? vlSelf->__PVT__b2c_data : vlSelf->__PVT__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram
               [vlSelf->__PVT__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_addr]);
        vlSelf->__Vdlyvset__hqc__DOT__io_deq_q__DOT__ram__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__hqd__DOT__io_deq_q_io_enq_ready) 
         & (IData)(vlSelf->__PVT__hqd__DOT__fq_io_deq_valid))) {
        vlSelf->__Vdlyvval__hqd__DOT__io_deq_q__DOT__ram__v0 
            = ((IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__empty)
                ? vlSelf->__PVT__b2c_data : vlSelf->__PVT__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram
               [vlSelf->__PVT__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_addr]);
        vlSelf->__Vdlyvset__hqd__DOT__io_deq_q__DOT__ram__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__hqe__DOT__io_deq_q_io_enq_ready) 
         & (IData)(vlSelf->__PVT__hqe__DOT__fq_io_deq_valid))) {
        vlSelf->__Vdlyvval__hqe__DOT__io_deq_q__DOT__ram__v0 
            = ((IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__empty)
                ? vlSelf->__PVT__b2c_data : vlSelf->__PVT__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram
               [vlSelf->__PVT__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_addr]);
        vlSelf->__Vdlyvset__hqe__DOT__io_deq_q__DOT__ram__v0 = 1U;
    }
    if (vlSelf->__PVT__formatValid) {
        vlSelf->__PVT__format_r = (7U & vlSelf->__PVT__b2c_data);
    }
    if (__Vdlyvset__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0) {
        vlSelf->__PVT__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram[__Vdlyvdim0__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0] 
            = __Vdlyvval__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    }
    if (__Vdlyvset__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0) {
        vlSelf->__PVT__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram[__Vdlyvdim0__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0] 
            = __Vdlyvval__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    }
    if (__Vdlyvset__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0) {
        vlSelf->__PVT__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram[__Vdlyvdim0__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0] 
            = __Vdlyvval__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    }
    if (__Vdlyvset__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0) {
        vlSelf->__PVT__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram[__Vdlyvdim0__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0] 
            = __Vdlyvval__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    }
    if (__Vdlyvset__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0) {
        vlSelf->__PVT__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram[__Vdlyvdim0__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0] 
            = __Vdlyvval__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqa__DOT__fq__DOT__enq_ptr = 0U;
    } else if (vlSelf->__PVT__hqa__DOT__fq__DOT__do_enq) {
        vlSelf->__PVT__hqa__DOT__fq__DOT__enq_ptr = vlSelf->__PVT__hqa__DOT__fq__DOT___enq_ptr_wrap_value_T_1;
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqb__DOT__fq__DOT__enq_ptr = 0U;
    } else if (vlSelf->__PVT__hqb__DOT__fq__DOT__do_enq) {
        vlSelf->__PVT__hqb__DOT__fq__DOT__enq_ptr = vlSelf->__PVT__hqb__DOT__fq__DOT___enq_ptr_wrap_value_T_1;
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqc__DOT__fq__DOT__enq_ptr = 0U;
    } else if (vlSelf->__PVT__hqc__DOT__fq__DOT__do_enq) {
        vlSelf->__PVT__hqc__DOT__fq__DOT__enq_ptr = vlSelf->__PVT__hqc__DOT__fq__DOT___enq_ptr_wrap_value_T_1;
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqd__DOT__fq__DOT__enq_ptr = 0U;
    } else if (vlSelf->__PVT__hqd__DOT__fq__DOT__do_enq) {
        vlSelf->__PVT__hqd__DOT__fq__DOT__enq_ptr = vlSelf->__PVT__hqd__DOT__fq__DOT___enq_ptr_wrap_value_T_1;
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqe__DOT__fq__DOT__enq_ptr = 0U;
    } else if (vlSelf->__PVT__hqe__DOT__fq__DOT__do_enq) {
        vlSelf->__PVT__hqe__DOT__fq__DOT__enq_ptr = vlSelf->__PVT__hqe__DOT__fq__DOT___enq_ptr_wrap_value_T_1;
    }
    if (vlSelf->__PVT__hqa__DOT__fq__DOT__ram_R0_en) {
        vlSelf->__PVT__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_addr 
            = (0x1fU & ((IData)(vlSelf->__PVT__hqa__DOT__fq_io_deq_valid)
                         ? (((IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__do_deq) 
                             & (0x1fU == (IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__deq_ptr)))
                             ? 0U : ((IData)(1U) + (IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__deq_ptr)))
                         : (IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__deq_ptr)));
    }
    if (vlSelf->__PVT__hqb__DOT__fq__DOT__ram_R0_en) {
        vlSelf->__PVT__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_addr 
            = (0x1fU & ((IData)(vlSelf->__PVT__hqb__DOT__fq_io_deq_valid)
                         ? (((IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__do_deq) 
                             & (0x1fU == (IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__deq_ptr)))
                             ? 0U : ((IData)(1U) + (IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__deq_ptr)))
                         : (IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__deq_ptr)));
    }
    if (vlSelf->__PVT__hqc__DOT__fq__DOT__ram_R0_en) {
        vlSelf->__PVT__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_addr 
            = (0x1fU & ((IData)(vlSelf->__PVT__hqc__DOT__fq_io_deq_valid)
                         ? (((IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__do_deq) 
                             & (0x1fU == (IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__deq_ptr)))
                             ? 0U : ((IData)(1U) + (IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__deq_ptr)))
                         : (IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__deq_ptr)));
    }
    if (vlSelf->__PVT__hqd__DOT__fq__DOT__ram_R0_en) {
        vlSelf->__PVT__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_addr 
            = (0x1fU & ((IData)(vlSelf->__PVT__hqd__DOT__fq_io_deq_valid)
                         ? (((IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__do_deq) 
                             & (0x1fU == (IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__deq_ptr)))
                             ? 0U : ((IData)(1U) + (IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__deq_ptr)))
                         : (IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__deq_ptr)));
    }
    if (vlSelf->__PVT__hqe__DOT__fq__DOT__ram_R0_en) {
        vlSelf->__PVT__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_addr 
            = (0x1fU & ((IData)(vlSelf->__PVT__hqe__DOT__fq_io_deq_valid)
                         ? (((IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__do_deq) 
                             & (0x1fU == (IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__deq_ptr)))
                             ? 0U : ((IData)(1U) + (IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__deq_ptr)))
                         : (IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__deq_ptr)));
    }
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
    if (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqa__DOT__fq__DOT__deq_ptr = 0U;
    } else if (vlSelf->__PVT__hqa__DOT__fq__DOT__do_deq) {
        vlSelf->__PVT__hqa__DOT__fq__DOT__deq_ptr = vlSelf->__PVT__hqa__DOT__fq__DOT___wrap_value_T_1;
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqb__DOT__fq__DOT__deq_ptr = 0U;
    } else if (vlSelf->__PVT__hqb__DOT__fq__DOT__do_deq) {
        vlSelf->__PVT__hqb__DOT__fq__DOT__deq_ptr = vlSelf->__PVT__hqb__DOT__fq__DOT___wrap_value_T_1;
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqc__DOT__fq__DOT__deq_ptr = 0U;
    } else if (vlSelf->__PVT__hqc__DOT__fq__DOT__do_deq) {
        vlSelf->__PVT__hqc__DOT__fq__DOT__deq_ptr = vlSelf->__PVT__hqc__DOT__fq__DOT___wrap_value_T_1;
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqd__DOT__fq__DOT__deq_ptr = 0U;
    } else if (vlSelf->__PVT__hqd__DOT__fq__DOT__do_deq) {
        vlSelf->__PVT__hqd__DOT__fq__DOT__deq_ptr = vlSelf->__PVT__hqd__DOT__fq__DOT___wrap_value_T_1;
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqe__DOT__fq__DOT__deq_ptr = 0U;
    } else if (vlSelf->__PVT__hqe__DOT__fq__DOT__do_deq) {
        vlSelf->__PVT__hqe__DOT__fq__DOT__deq_ptr = vlSelf->__PVT__hqe__DOT__fq__DOT___wrap_value_T_1;
    }
    vlSelf->__PVT__hqa__DOT__fq__DOT___wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__deq_ptr)));
    vlSelf->__PVT__hqa__DOT__fq__DOT__ptr_match = ((IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__enq_ptr) 
                                                   == (IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__deq_ptr));
    vlSelf->__PVT__hqb__DOT__fq__DOT___wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__deq_ptr)));
    vlSelf->__PVT__hqb__DOT__fq__DOT__ptr_match = ((IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__enq_ptr) 
                                                   == (IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__deq_ptr));
    vlSelf->__PVT__hqc__DOT__fq__DOT___wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__deq_ptr)));
    vlSelf->__PVT__hqc__DOT__fq__DOT__ptr_match = ((IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__enq_ptr) 
                                                   == (IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__deq_ptr));
    vlSelf->__PVT__hqd__DOT__fq__DOT___wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__deq_ptr)));
    vlSelf->__PVT__hqd__DOT__fq__DOT__ptr_match = ((IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__enq_ptr) 
                                                   == (IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__deq_ptr));
    vlSelf->__PVT__hqe__DOT__fq__DOT___wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__deq_ptr)));
    vlSelf->__PVT__hqe__DOT__fq__DOT__ptr_match = ((IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__enq_ptr) 
                                                   == (IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__deq_ptr));
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
}

VL_INLINE_OPT void VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__7(VysyxSoCFull_RX* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__7\n"); );
    // Body
    if (vlSelf->__PVT__io_rxc_source_io_enq_ready) {
        vlSelf->__PVT__io_rxc_source__DOT__mem_0_a 
            = vlSelf->__PVT__rx_a;
    }
    if (vlSelf->__PVT__io_rxc_source_io_enq_ready) {
        vlSelf->__PVT__io_rxc_source__DOT__mem_0_b 
            = vlSelf->__PVT__rx_b;
    }
    if (vlSelf->__PVT__io_rxc_source_io_enq_ready) {
        vlSelf->__PVT__io_rxc_source__DOT__mem_0_c 
            = vlSelf->__PVT__rx_c;
    }
    if (vlSelf->__PVT__io_rxc_source_io_enq_ready) {
        vlSelf->__PVT__io_rxc_source__DOT__mem_0_d 
            = vlSelf->__PVT__rx_d;
    }
    if (vlSelf->__PVT__io_rxc_source_io_enq_ready) {
        vlSelf->__PVT__io_rxc_source__DOT__mem_0_e 
            = vlSelf->__PVT__rx_e;
    }
    if (vlSelf->__PVT__io_txc_source_io_enq_ready) {
        vlSelf->__PVT__io_txc_source__DOT__mem_0_a 
            = vlSelf->__PVT__tx_a;
    }
    if (vlSelf->__PVT__io_txc_source_io_enq_ready) {
        vlSelf->__PVT__io_txc_source__DOT__mem_0_b 
            = vlSelf->__PVT__tx_b;
    }
    if (vlSelf->__PVT__io_txc_source_io_enq_ready) {
        vlSelf->__PVT__io_txc_source__DOT__mem_0_c 
            = vlSelf->__PVT__tx_c;
    }
    if (vlSelf->__PVT__io_txc_source_io_enq_ready) {
        vlSelf->__PVT__io_txc_source__DOT__mem_0_d 
            = vlSelf->__PVT__tx_d;
    }
    if (vlSelf->__PVT__io_txc_source_io_enq_ready) {
        vlSelf->__PVT__io_txc_source__DOT__mem_0_e 
            = vlSelf->__PVT__tx_e;
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__rx_a = 0x20U;
        vlSelf->__PVT__rx_b = 0x20U;
        vlSelf->__PVT__rx_c = 0x20U;
        vlSelf->__PVT__rx_d = 0x20U;
        vlSelf->__PVT__rx_e = 0x20U;
    } else {
        vlSelf->__PVT__rx_a = (0xfffffU & ((IData)(vlSelf->__PVT__io_rxc_source_io_enq_ready)
                                            ? (IData)(vlSelf->__PVT___rxInc_a_T)
                                            : ((0x100000U 
                                                & vlSelf->__PVT__rx_z)
                                                ? 0xfffffU
                                                : vlSelf->__PVT__rx_z)));
        vlSelf->__PVT__rx_b = (0xfffffU & ((IData)(vlSelf->__PVT__io_rxc_source_io_enq_ready)
                                            ? (IData)(vlSelf->__PVT___rxInc_bT)
                                            : ((0x100000U 
                                                & vlSelf->__PVT__rx_z_1)
                                                ? 0xfffffU
                                                : vlSelf->__PVT__rx_z_1)));
        vlSelf->__PVT__rx_c = (0xfffffU & ((IData)(vlSelf->__PVT__io_rxc_source_io_enq_ready)
                                            ? (IData)(vlSelf->__PVT___rxInc_c_T)
                                            : ((0x100000U 
                                                & vlSelf->__PVT__rx_z_2)
                                                ? 0xfffffU
                                                : vlSelf->__PVT__rx_z_2)));
        vlSelf->__PVT__rx_d = (0xfffffU & ((IData)(vlSelf->__PVT__io_rxc_source_io_enq_ready)
                                            ? (IData)(vlSelf->__PVT___rxInc_d_T)
                                            : ((0x100000U 
                                                & vlSelf->__PVT__rx_z_3)
                                                ? 0xfffffU
                                                : vlSelf->__PVT__rx_z_3)));
        vlSelf->__PVT__rx_e = (0xfffffU & ((IData)(vlSelf->__PVT__io_rxc_source_io_enq_ready)
                                            ? (IData)(vlSelf->__PVT___rxInc_e_T)
                                            : ((0x100000U 
                                                & vlSelf->__PVT__rx_z_4)
                                                ? 0xfffffU
                                                : vlSelf->__PVT__rx_z_4)));
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__first_count = 0U;
    } else if (vlSelf->__PVT__b2c_send) {
        vlSelf->__PVT__first_count = (0x1fU & ((IData)(vlSelf->__PVT__first)
                                                ? (
                                                   (5U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->__PVT__b2c_data))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & vlSelf->__PVT__b2c_data))
                                                     ? 0U
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (7U 
                                                       & vlSelf->__PVT__b2c_data))
                                                      ? 
                                                     ((IData)(vlSelf->__PVT___first_beats_c_T_1) 
                                                      + 
                                                      ((4U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->__PVT__b2c_data 
                                                            >> 3U))) 
                                                       | (5U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->__PVT__b2c_data 
                                                              >> 3U)))))
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & vlSelf->__PVT__b2c_data))
                                                       ? 
                                                      ((IData)(2U) 
                                                       + (IData)(vlSelf->__PVT___first_beats_c_T_1))
                                                       : 
                                                      ((IData)(2U) 
                                                       + 
                                                       (((0x20U 
                                                          & vlSelf->__PVT__b2c_data)
                                                          ? 0U
                                                          : (IData)(vlSelf->__PVT__first_beats_beats)) 
                                                        + 
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->__PVT__b2c_data 
                                                              >> 3U)))
                                                          ? 
                                                         ((2U 
                                                           & (((IData)(1U) 
                                                               << 
                                                               (7U 
                                                                & (vlSelf->__PVT__b2c_data 
                                                                   >> 9U))) 
                                                              >> 5U)) 
                                                          | (5U 
                                                             >= 
                                                             (0xfU 
                                                              & (vlSelf->__PVT__b2c_data 
                                                                 >> 9U))))
                                                          : 0U)))))))
                                                : (IData)(vlSelf->__PVT___first_count_T_1)));
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__tx_a = 0U;
        vlSelf->__PVT__tx_b = 0U;
        vlSelf->__PVT__tx_c = 0U;
        vlSelf->__PVT__tx_d = 0U;
        vlSelf->__PVT__tx_e = 0U;
    } else {
        vlSelf->__PVT__tx_a = (0xfffffU & ((IData)(vlSelf->__PVT__io_txc_source_io_enq_ready)
                                            ? ((7U 
                                                & ((IData)(vlSelf->__PVT__b2c_send) 
                                                   & (((IData)(1U) 
                                                       << (IData)(vlSelf->__PVT___GEN_7)) 
                                                      >> 5U)))
                                                ? (
                                                   (0x14U 
                                                    < 
                                                    (0x1fU 
                                                     & (vlSelf->__PVT__b2c_data 
                                                        >> 7U)))
                                                    ? 0xfffffU
                                                    : 
                                                   (((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (vlSelf->__PVT__b2c_data 
                                                         >> 7U))) 
                                                    >> 1U))
                                                : 0U)
                                            : ((0x100000U 
                                                & vlSelf->__PVT__tx_z)
                                                ? 0xfffffU
                                                : vlSelf->__PVT__tx_z)));
        vlSelf->__PVT__tx_b = (0xfffffU & ((IData)(vlSelf->__PVT__io_txc_source_io_enq_ready)
                                            ? ((7U 
                                                & ((IData)(vlSelf->__PVT__b2c_send) 
                                                   & (((IData)(1U) 
                                                       << (IData)(vlSelf->__PVT___GEN_7)) 
                                                      >> 5U)))
                                                ? (
                                                   (0x14U 
                                                    < 
                                                    (0x1fU 
                                                     & (vlSelf->__PVT__b2c_data 
                                                        >> 0xcU)))
                                                    ? 0xfffffU
                                                    : 
                                                   (((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (vlSelf->__PVT__b2c_data 
                                                         >> 0xcU))) 
                                                    >> 1U))
                                                : 0U)
                                            : ((0x100000U 
                                                & vlSelf->__PVT__tx_z_1)
                                                ? 0xfffffU
                                                : vlSelf->__PVT__tx_z_1)));
        vlSelf->__PVT__tx_c = (0xfffffU & ((IData)(vlSelf->__PVT__io_txc_source_io_enq_ready)
                                            ? ((7U 
                                                & ((IData)(vlSelf->__PVT__b2c_send) 
                                                   & (((IData)(1U) 
                                                       << (IData)(vlSelf->__PVT___GEN_7)) 
                                                      >> 5U)))
                                                ? (
                                                   (0x14U 
                                                    < 
                                                    (0x1fU 
                                                     & (vlSelf->__PVT__b2c_data 
                                                        >> 0x11U)))
                                                    ? 0xfffffU
                                                    : 
                                                   (((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (vlSelf->__PVT__b2c_data 
                                                         >> 0x11U))) 
                                                    >> 1U))
                                                : 0U)
                                            : ((0x100000U 
                                                & vlSelf->__PVT__tx_z_2)
                                                ? 0xfffffU
                                                : vlSelf->__PVT__tx_z_2)));
        vlSelf->__PVT__tx_d = (0xfffffU & ((IData)(vlSelf->__PVT__io_txc_source_io_enq_ready)
                                            ? ((7U 
                                                & ((IData)(vlSelf->__PVT__b2c_send) 
                                                   & (((IData)(1U) 
                                                       << (IData)(vlSelf->__PVT___GEN_7)) 
                                                      >> 5U)))
                                                ? (
                                                   (0x14U 
                                                    < 
                                                    (0x1fU 
                                                     & (vlSelf->__PVT__b2c_data 
                                                        >> 0x16U)))
                                                    ? 0xfffffU
                                                    : 
                                                   (((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (vlSelf->__PVT__b2c_data 
                                                         >> 0x16U))) 
                                                    >> 1U))
                                                : 0U)
                                            : ((0x100000U 
                                                & vlSelf->__PVT__tx_z_3)
                                                ? 0xfffffU
                                                : vlSelf->__PVT__tx_z_3)));
        vlSelf->__PVT__tx_e = (0xfffffU & ((IData)(vlSelf->__PVT__io_txc_source_io_enq_ready)
                                            ? ((7U 
                                                & ((IData)(vlSelf->__PVT__b2c_send) 
                                                   & (((IData)(1U) 
                                                       << (IData)(vlSelf->__PVT___GEN_7)) 
                                                      >> 5U)))
                                                ? (
                                                   (0x14U 
                                                    < 
                                                    (vlSelf->__PVT__b2c_data 
                                                     >> 0x1bU))
                                                    ? 0xfffffU
                                                    : 
                                                   (((IData)(1U) 
                                                     << 
                                                     (vlSelf->__PVT__b2c_data 
                                                      >> 0x1bU)) 
                                                    >> 1U))
                                                : 0U)
                                            : ((0x100000U 
                                                & vlSelf->__PVT__tx_z_4)
                                                ? 0xfffffU
                                                : vlSelf->__PVT__tx_z_4)));
    }
    vlSelf->__PVT__first = (0U == (IData)(vlSelf->__PVT__first_count));
    vlSelf->__PVT___first_count_T_1 = (0x1fU & ((IData)(vlSelf->__PVT__first_count) 
                                                - (IData)(1U)));
    vlSelf->__PVT__b2c_send = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                               & (IData)(vlSelf->__PVT__b2c_send_REG));
    vlSelf->__PVT__b2c_data = vlSelf->__PVT__b2c_data_REG;
    vlSelf->__PVT__formatValid = ((IData)(vlSelf->__PVT__b2c_send) 
                                  & (0U == (IData)(vlSelf->__PVT__first_count)));
    vlSelf->__PVT__b2c_send_REG = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__io_c2b_send_REG_1;
    vlSelf->__PVT__first_beats_beats = ((0x1eU & (((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->__PVT__b2c_data 
                                                       >> 9U))) 
                                                  >> 2U)) 
                                        | (2U >= (0xfU 
                                                  & (vlSelf->__PVT__b2c_data 
                                                     >> 9U))));
    vlSelf->__PVT__b2c_data_REG = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__io_c2b_data_REG_2;
    vlSelf->__PVT___GEN_7 = (7U & ((IData)(vlSelf->__PVT__formatValid)
                                    ? vlSelf->__PVT__b2c_data
                                    : (IData)(vlSelf->__PVT__format_r)));
    vlSelf->__PVT___first_beats_c_T_1 = ((8U & vlSelf->__PVT__b2c_data)
                                          ? (IData)(vlSelf->__PVT__first_beats_beats)
                                          : 0U);
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

VL_INLINE_OPT void VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__9(VysyxSoCFull_RX* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__9\n"); );
    // Body
    if (vlSelf->__Vdlyvset__hqe__DOT__io_deq_q__DOT__ram__v0) {
        vlSelf->__PVT__hqe__DOT__io_deq_q__DOT__ram[0U] 
            = vlSelf->__Vdlyvval__hqe__DOT__io_deq_q__DOT__ram__v0;
    }
    if (vlSelf->__Vdlyvset__hqb__DOT__io_deq_q__DOT__ram__v0) {
        vlSelf->__PVT__hqb__DOT__io_deq_q__DOT__ram[0U] 
            = vlSelf->__Vdlyvval__hqb__DOT__io_deq_q__DOT__ram__v0;
    }
    if (vlSelf->__Vdlyvset__hqc__DOT__io_deq_q__DOT__ram__v0) {
        vlSelf->__PVT__hqc__DOT__io_deq_q__DOT__ram[0U] 
            = vlSelf->__Vdlyvval__hqc__DOT__io_deq_q__DOT__ram__v0;
    }
    if (vlSelf->__Vdlyvset__hqd__DOT__io_deq_q__DOT__ram__v0) {
        vlSelf->__PVT__hqd__DOT__io_deq_q__DOT__ram[0U] 
            = vlSelf->__Vdlyvval__hqd__DOT__io_deq_q__DOT__ram__v0;
    }
    if (vlSelf->__Vdlyvset__hqa__DOT__io_deq_q__DOT__ram__v0) {
        vlSelf->__PVT__hqa__DOT__io_deq_q__DOT__ram[0U] 
            = vlSelf->__Vdlyvval__hqa__DOT__io_deq_q__DOT__ram__v0;
    }
}

VL_INLINE_OPT void VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__13(VysyxSoCFull_RX* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__13\n"); );
    // Variables
    CData/*0:0*/ __Vdly__io_txc_source__DOT__widx_widx_bin;
    CData/*0:0*/ __Vdly__io_rxc_source__DOT__widx_widx_bin;
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
    __Vdly__io_txc_source__DOT__widx_widx_bin = vlSelf->__PVT__io_txc_source__DOT__widx_widx_bin;
    __Vdly__io_rxc_source__DOT__widx_widx_bin = vlSelf->__PVT__io_rxc_source__DOT__widx_widx_bin;
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
    __Vdly__io_txc_source__DOT__widx_widx_bin = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                                                 & ((IData)(vlSelf->__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                                    & ((IData)(vlSelf->__PVT__io_txc_source__DOT__widx_widx_bin) 
                                                       + (IData)(vlSelf->__PVT__io_txc_source_io_enq_ready))));
    vlSelf->__PVT__io_txc_source__DOT__widx_gray = 
        ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
         & ((IData)(vlSelf->__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
            & ((IData)(vlSelf->__PVT__io_txc_source__DOT__widx_widx_bin) 
               + (IData)(vlSelf->__PVT__io_txc_source_io_enq_ready))));
    __Vdly__io_rxc_source__DOT__widx_widx_bin = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                                                 & ((IData)(vlSelf->__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                                    & ((IData)(vlSelf->__PVT__io_rxc_source__DOT__widx_widx_bin) 
                                                       + (IData)(vlSelf->__PVT__io_rxc_source_io_enq_ready))));
    vlSelf->__PVT__io_rxc_source__DOT__widx_gray = 
        ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
         & ((IData)(vlSelf->__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
            & ((IData)(vlSelf->__PVT__io_rxc_source__DOT__widx_widx_bin) 
               + (IData)(vlSelf->__PVT__io_rxc_source_io_enq_ready))));
    vlSelf->__PVT__io_rxc_source__DOT__ready_reg = 
        ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
         & ((IData)(vlSelf->__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
            & (((IData)(vlSelf->__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                & ((IData)(vlSelf->__PVT__io_rxc_source__DOT__widx_widx_bin) 
                   + (IData)(vlSelf->__PVT__io_rxc_source_io_enq_ready))) 
               != (1U & (~ (IData)(vlSelf->__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))));
    vlSelf->__PVT__io_txc_source__DOT__ready_reg = 
        ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
         & ((IData)(vlSelf->__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
            & (((IData)(vlSelf->__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                & ((IData)(vlSelf->__PVT__io_txc_source__DOT__widx_widx_bin) 
                   + (IData)(vlSelf->__PVT__io_txc_source_io_enq_ready))) 
               != (1U & (~ (IData)(vlSelf->__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))));
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
    vlSelf->__PVT__io_rxc_source__DOT__widx_widx_bin 
        = __Vdly__io_rxc_source__DOT__widx_widx_bin;
    vlSelf->__PVT__io_txc_source__DOT__widx_widx_bin 
        = __Vdly__io_txc_source__DOT__widx_widx_bin;
    vlSelf->__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__io_rxc_source_io_enq_ready = ((IData)(vlSelf->__PVT__io_rxc_source__DOT__ready_reg) 
                                                 & (IData)(vlSelf->__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__io_txc_source_io_enq_ready = ((IData)(vlSelf->__PVT__io_txc_source__DOT__ready_reg) 
                                                 & (IData)(vlSelf->__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__ridx_gray));
    vlSelf->__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__ridx_gray));
    vlSelf->__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__15(VysyxSoCFull_RX* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__15\n"); );
    // Body
    vlSelf->__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__io_txc_source__DOT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__io_txc_source__DOT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__io_txc_source__DOT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__io_txc_source__DOT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->__PVT__io_txc_source__DOT__source_valid_0_reset)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->__PVT__io_txc_source__DOT__source_valid_0_reset)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__17(VysyxSoCFull_RX* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__17\n"); );
    // Body
    vlSelf->__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__io_txc_source__DOT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__io_txc_source__DOT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__io_txc_source__DOT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__io_txc_source__DOT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->__PVT__io_txc_source__DOT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->__PVT__io_txc_source__DOT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__io_txc_source__DOT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__io_txc_source__DOT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__io_txc_source__DOT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__io_txc_source__DOT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->__PVT__io_txc_source__DOT__source_valid_0_reset)));
    vlSelf->__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->__PVT__io_txc_source__DOT__source_valid_0_reset)));
}

VL_INLINE_OPT void VysyxSoCFull_RX___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__19(VysyxSoCFull_RX* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_RX___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__19\n"); );
    // Body
    vlSelf->__PVT__io_txc_source__DOT__source_valid_0_reset 
        = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) 
           | (IData)(vlSymsp->TOP.reset));
}

VL_INLINE_OPT void VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__6(VysyxSoCFull_RX* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__6\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    CData/*4:0*/ __Vdlyvdim0__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    CData/*4:0*/ __Vdlyvdim0__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    CData/*4:0*/ __Vdlyvdim0__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    CData/*4:0*/ __Vdlyvdim0__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    IData/*31:0*/ __Vdlyvval__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    IData/*31:0*/ __Vdlyvval__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    IData/*31:0*/ __Vdlyvval__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    IData/*31:0*/ __Vdlyvval__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    IData/*31:0*/ __Vdlyvval__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    // Body
    __Vdlyvset__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 = 0U;
    __Vdlyvset__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 = 0U;
    __Vdlyvset__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 = 0U;
    __Vdlyvset__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 = 0U;
    __Vdlyvset__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__hqa__DOT__io_deq_q__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__hqb__DOT__io_deq_q__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__hqc__DOT__io_deq_q__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__hqd__DOT__io_deq_q__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__hqe__DOT__io_deq_q__DOT__ram__v0 = 0U;
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__hqa_io_enq_valid)) 
                               | (~ (IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__full))) 
                              | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at RX.scala:56 assert (!hq.io.enq.valid || hq.io.enq.ready) // overrun impossible\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__hqa_io_enq_valid)) 
                               | (~ (IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__full))) 
                              | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:29065: Assertion failed in %NysyxSoCFull.fpga.chiplink.rx\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 29065, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__hqb_io_enq_valid)) 
                               | (~ (IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__full))) 
                              | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at RX.scala:56 assert (!hq.io.enq.valid || hq.io.enq.ready) // overrun impossible\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__hqb_io_enq_valid)) 
                               | (~ (IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__full))) 
                              | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:29089: Assertion failed in %NysyxSoCFull.fpga.chiplink.rx\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 29089, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__hqc_io_enq_valid)) 
                               | (~ (IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__full))) 
                              | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at RX.scala:56 assert (!hq.io.enq.valid || hq.io.enq.ready) // overrun impossible\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__hqc_io_enq_valid)) 
                               | (~ (IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__full))) 
                              | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:29113: Assertion failed in %NysyxSoCFull.fpga.chiplink.rx\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 29113, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__hqd_io_enq_valid)) 
                               | (~ (IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__full))) 
                              | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at RX.scala:56 assert (!hq.io.enq.valid || hq.io.enq.ready) // overrun impossible\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__hqd_io_enq_valid)) 
                               | (~ (IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__full))) 
                              | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:29137: Assertion failed in %NysyxSoCFull.fpga.chiplink.rx\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 29137, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__hqe_io_enq_valid)) 
                               | (~ (IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__full))) 
                              | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at RX.scala:56 assert (!hq.io.enq.valid || hq.io.enq.ready) // overrun impossible\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__hqe_io_enq_valid)) 
                               | (~ (IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__full))) 
                              | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:29161: Assertion failed in %NysyxSoCFull.fpga.chiplink.rx\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 29161, "");
    }
    vlSelf->__PVT__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_ren 
        = vlSelf->__PVT__hqa__DOT__fq__DOT__ram_R0_en;
    vlSelf->__PVT__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_ren 
        = vlSelf->__PVT__hqb__DOT__fq__DOT__ram_R0_en;
    vlSelf->__PVT__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_ren 
        = vlSelf->__PVT__hqc__DOT__fq__DOT__ram_R0_en;
    vlSelf->__PVT__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_ren 
        = vlSelf->__PVT__hqd__DOT__fq__DOT__ram_R0_en;
    vlSelf->__PVT__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_ren 
        = vlSelf->__PVT__hqe__DOT__fq__DOT__ram_R0_en;
    vlSelf->__PVT__hqa__DOT__fq__DOT__ram_out_valid 
        = ((IData)(vlSelf->__PVT__hqa__DOT__io_deq_q_io_enq_ready) 
           & ((IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__atLeastTwo) 
              | ((~ (IData)(vlSelf->__PVT__hqa__DOT__fq_io_deq_valid)) 
                 & (~ (IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__empty)))));
    vlSelf->__PVT__hqb__DOT__fq__DOT__ram_out_valid 
        = ((IData)(vlSelf->__PVT__hqb__DOT__io_deq_q_io_enq_ready) 
           & ((IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__atLeastTwo) 
              | ((~ (IData)(vlSelf->__PVT__hqb__DOT__fq_io_deq_valid)) 
                 & (~ (IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__empty)))));
    vlSelf->__PVT__hqc__DOT__fq__DOT__ram_out_valid 
        = ((IData)(vlSelf->__PVT__hqc__DOT__io_deq_q_io_enq_ready) 
           & ((IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__atLeastTwo) 
              | ((~ (IData)(vlSelf->__PVT__hqc__DOT__fq_io_deq_valid)) 
                 & (~ (IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__empty)))));
    vlSelf->__PVT__hqd__DOT__fq__DOT__ram_out_valid 
        = ((IData)(vlSelf->__PVT__hqd__DOT__io_deq_q_io_enq_ready) 
           & ((IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__atLeastTwo) 
              | ((~ (IData)(vlSelf->__PVT__hqd__DOT__fq_io_deq_valid)) 
                 & (~ (IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__empty)))));
    vlSelf->__PVT__hqe__DOT__fq__DOT__ram_out_valid 
        = ((IData)(vlSelf->__PVT__hqe__DOT__io_deq_q_io_enq_ready) 
           & ((IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__atLeastTwo) 
              | ((~ (IData)(vlSelf->__PVT__hqe__DOT__fq_io_deq_valid)) 
                 & (~ (IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__empty)))));
    if (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqa__DOT__io_deq_q__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->__PVT__hqa__DOT__io_deq_q__DOT__do_enq) 
                != (IData)(vlSelf->__PVT__hqa__DOT__io_deq_q__DOT__do_deq))) {
        vlSelf->__PVT__hqa__DOT__io_deq_q__DOT__maybe_full 
            = vlSelf->__PVT__hqa__DOT__io_deq_q__DOT__do_enq;
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqb__DOT__io_deq_q__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->__PVT__hqb__DOT__io_deq_q__DOT__do_enq) 
                != (IData)(vlSelf->__PVT__hqb__DOT__io_deq_q__DOT__do_deq))) {
        vlSelf->__PVT__hqb__DOT__io_deq_q__DOT__maybe_full 
            = vlSelf->__PVT__hqb__DOT__io_deq_q__DOT__do_enq;
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqc__DOT__io_deq_q__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->__PVT__hqc__DOT__io_deq_q__DOT__do_enq) 
                != (IData)(vlSelf->__PVT__hqc__DOT__io_deq_q__DOT__do_deq))) {
        vlSelf->__PVT__hqc__DOT__io_deq_q__DOT__maybe_full 
            = vlSelf->__PVT__hqc__DOT__io_deq_q__DOT__do_enq;
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqd__DOT__io_deq_q__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->__PVT__hqd__DOT__io_deq_q__DOT__do_enq) 
                != (IData)(vlSelf->__PVT__hqd__DOT__io_deq_q__DOT__do_deq))) {
        vlSelf->__PVT__hqd__DOT__io_deq_q__DOT__maybe_full 
            = vlSelf->__PVT__hqd__DOT__io_deq_q__DOT__do_enq;
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqe__DOT__io_deq_q__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->__PVT__hqe__DOT__io_deq_q__DOT__do_enq) 
                != (IData)(vlSelf->__PVT__hqe__DOT__io_deq_q__DOT__do_deq))) {
        vlSelf->__PVT__hqe__DOT__io_deq_q__DOT__maybe_full 
            = vlSelf->__PVT__hqe__DOT__io_deq_q__DOT__do_enq;
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqa__DOT__fq__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__do_enq) 
                != (IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__do_deq))) {
        vlSelf->__PVT__hqa__DOT__fq__DOT__maybe_full 
            = vlSelf->__PVT__hqa__DOT__fq__DOT__do_enq;
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqb__DOT__fq__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__do_enq) 
                != (IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__do_deq))) {
        vlSelf->__PVT__hqb__DOT__fq__DOT__maybe_full 
            = vlSelf->__PVT__hqb__DOT__fq__DOT__do_enq;
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqc__DOT__fq__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__do_enq) 
                != (IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__do_deq))) {
        vlSelf->__PVT__hqc__DOT__fq__DOT__maybe_full 
            = vlSelf->__PVT__hqc__DOT__fq__DOT__do_enq;
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqd__DOT__fq__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__do_enq) 
                != (IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__do_deq))) {
        vlSelf->__PVT__hqd__DOT__fq__DOT__maybe_full 
            = vlSelf->__PVT__hqd__DOT__fq__DOT__do_enq;
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqe__DOT__fq__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__do_enq) 
                != (IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__do_deq))) {
        vlSelf->__PVT__hqe__DOT__fq__DOT__maybe_full 
            = vlSelf->__PVT__hqe__DOT__fq__DOT__do_enq;
    }
    if (((IData)(vlSelf->__PVT__hqa__DOT__fq__DOT___do_enq_T) 
         & (~ (IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__do_flow)))) {
        __Vdlyvval__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 
            = vlSelf->__PVT__b2c_data;
        __Vdlyvset__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 = 1U;
        __Vdlyvdim0__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 
            = vlSelf->__PVT__hqa__DOT__fq__DOT__enq_ptr;
    }
    if (((IData)(vlSelf->__PVT__hqb__DOT__fq__DOT___do_enq_T) 
         & (~ (IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__do_flow)))) {
        __Vdlyvval__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 
            = vlSelf->__PVT__b2c_data;
        __Vdlyvset__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 = 1U;
        __Vdlyvdim0__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 
            = vlSelf->__PVT__hqb__DOT__fq__DOT__enq_ptr;
    }
    if (((IData)(vlSelf->__PVT__hqc__DOT__fq__DOT___do_enq_T) 
         & (~ (IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__do_flow)))) {
        __Vdlyvval__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 
            = vlSelf->__PVT__b2c_data;
        __Vdlyvset__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 = 1U;
        __Vdlyvdim0__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 
            = vlSelf->__PVT__hqc__DOT__fq__DOT__enq_ptr;
    }
    if (((IData)(vlSelf->__PVT__hqd__DOT__fq__DOT___do_enq_T) 
         & (~ (IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__do_flow)))) {
        __Vdlyvval__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 
            = vlSelf->__PVT__b2c_data;
        __Vdlyvset__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 = 1U;
        __Vdlyvdim0__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 
            = vlSelf->__PVT__hqd__DOT__fq__DOT__enq_ptr;
    }
    if (((IData)(vlSelf->__PVT__hqe__DOT__fq__DOT___do_enq_T) 
         & (~ (IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__do_flow)))) {
        __Vdlyvval__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 
            = vlSelf->__PVT__b2c_data;
        __Vdlyvset__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 = 1U;
        __Vdlyvdim0__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 
            = vlSelf->__PVT__hqe__DOT__fq__DOT__enq_ptr;
    }
    if (((IData)(vlSelf->__PVT__hqa__DOT__io_deq_q_io_enq_ready) 
         & (IData)(vlSelf->__PVT__hqa__DOT__fq_io_deq_valid))) {
        vlSelf->__Vdlyvval__hqa__DOT__io_deq_q__DOT__ram__v0 
            = ((IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__empty)
                ? vlSelf->__PVT__b2c_data : vlSelf->__PVT__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram
               [vlSelf->__PVT__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_addr]);
        vlSelf->__Vdlyvset__hqa__DOT__io_deq_q__DOT__ram__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__hqb__DOT__io_deq_q_io_enq_ready) 
         & (IData)(vlSelf->__PVT__hqb__DOT__fq_io_deq_valid))) {
        vlSelf->__Vdlyvval__hqb__DOT__io_deq_q__DOT__ram__v0 
            = ((IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__empty)
                ? vlSelf->__PVT__b2c_data : vlSelf->__PVT__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram
               [vlSelf->__PVT__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_addr]);
        vlSelf->__Vdlyvset__hqb__DOT__io_deq_q__DOT__ram__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__hqc__DOT__io_deq_q_io_enq_ready) 
         & (IData)(vlSelf->__PVT__hqc__DOT__fq_io_deq_valid))) {
        vlSelf->__Vdlyvval__hqc__DOT__io_deq_q__DOT__ram__v0 
            = ((IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__empty)
                ? vlSelf->__PVT__b2c_data : vlSelf->__PVT__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram
               [vlSelf->__PVT__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_addr]);
        vlSelf->__Vdlyvset__hqc__DOT__io_deq_q__DOT__ram__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__hqd__DOT__io_deq_q_io_enq_ready) 
         & (IData)(vlSelf->__PVT__hqd__DOT__fq_io_deq_valid))) {
        vlSelf->__Vdlyvval__hqd__DOT__io_deq_q__DOT__ram__v0 
            = ((IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__empty)
                ? vlSelf->__PVT__b2c_data : vlSelf->__PVT__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram
               [vlSelf->__PVT__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_addr]);
        vlSelf->__Vdlyvset__hqd__DOT__io_deq_q__DOT__ram__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__hqe__DOT__io_deq_q_io_enq_ready) 
         & (IData)(vlSelf->__PVT__hqe__DOT__fq_io_deq_valid))) {
        vlSelf->__Vdlyvval__hqe__DOT__io_deq_q__DOT__ram__v0 
            = ((IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__empty)
                ? vlSelf->__PVT__b2c_data : vlSelf->__PVT__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram
               [vlSelf->__PVT__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_addr]);
        vlSelf->__Vdlyvset__hqe__DOT__io_deq_q__DOT__ram__v0 = 1U;
    }
    if (vlSelf->__PVT__formatValid) {
        vlSelf->__PVT__format_r = (7U & vlSelf->__PVT__b2c_data);
    }
    if (__Vdlyvset__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0) {
        vlSelf->__PVT__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram[__Vdlyvdim0__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0] 
            = __Vdlyvval__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    }
    if (__Vdlyvset__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0) {
        vlSelf->__PVT__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram[__Vdlyvdim0__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0] 
            = __Vdlyvval__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    }
    if (__Vdlyvset__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0) {
        vlSelf->__PVT__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram[__Vdlyvdim0__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0] 
            = __Vdlyvval__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    }
    if (__Vdlyvset__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0) {
        vlSelf->__PVT__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram[__Vdlyvdim0__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0] 
            = __Vdlyvval__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    }
    if (__Vdlyvset__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0) {
        vlSelf->__PVT__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram[__Vdlyvdim0__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0] 
            = __Vdlyvval__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0;
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqa__DOT__fq__DOT__enq_ptr = 0U;
    } else if (vlSelf->__PVT__hqa__DOT__fq__DOT__do_enq) {
        vlSelf->__PVT__hqa__DOT__fq__DOT__enq_ptr = vlSelf->__PVT__hqa__DOT__fq__DOT___enq_ptr_wrap_value_T_1;
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqb__DOT__fq__DOT__enq_ptr = 0U;
    } else if (vlSelf->__PVT__hqb__DOT__fq__DOT__do_enq) {
        vlSelf->__PVT__hqb__DOT__fq__DOT__enq_ptr = vlSelf->__PVT__hqb__DOT__fq__DOT___enq_ptr_wrap_value_T_1;
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqc__DOT__fq__DOT__enq_ptr = 0U;
    } else if (vlSelf->__PVT__hqc__DOT__fq__DOT__do_enq) {
        vlSelf->__PVT__hqc__DOT__fq__DOT__enq_ptr = vlSelf->__PVT__hqc__DOT__fq__DOT___enq_ptr_wrap_value_T_1;
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqd__DOT__fq__DOT__enq_ptr = 0U;
    } else if (vlSelf->__PVT__hqd__DOT__fq__DOT__do_enq) {
        vlSelf->__PVT__hqd__DOT__fq__DOT__enq_ptr = vlSelf->__PVT__hqd__DOT__fq__DOT___enq_ptr_wrap_value_T_1;
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqe__DOT__fq__DOT__enq_ptr = 0U;
    } else if (vlSelf->__PVT__hqe__DOT__fq__DOT__do_enq) {
        vlSelf->__PVT__hqe__DOT__fq__DOT__enq_ptr = vlSelf->__PVT__hqe__DOT__fq__DOT___enq_ptr_wrap_value_T_1;
    }
    if (vlSelf->__PVT__hqa__DOT__fq__DOT__ram_R0_en) {
        vlSelf->__PVT__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_addr 
            = (0x1fU & ((IData)(vlSelf->__PVT__hqa__DOT__fq_io_deq_valid)
                         ? (((IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__do_deq) 
                             & (0x1fU == (IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__deq_ptr)))
                             ? 0U : ((IData)(1U) + (IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__deq_ptr)))
                         : (IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__deq_ptr)));
    }
    if (vlSelf->__PVT__hqb__DOT__fq__DOT__ram_R0_en) {
        vlSelf->__PVT__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_addr 
            = (0x1fU & ((IData)(vlSelf->__PVT__hqb__DOT__fq_io_deq_valid)
                         ? (((IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__do_deq) 
                             & (0x1fU == (IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__deq_ptr)))
                             ? 0U : ((IData)(1U) + (IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__deq_ptr)))
                         : (IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__deq_ptr)));
    }
    if (vlSelf->__PVT__hqc__DOT__fq__DOT__ram_R0_en) {
        vlSelf->__PVT__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_addr 
            = (0x1fU & ((IData)(vlSelf->__PVT__hqc__DOT__fq_io_deq_valid)
                         ? (((IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__do_deq) 
                             & (0x1fU == (IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__deq_ptr)))
                             ? 0U : ((IData)(1U) + (IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__deq_ptr)))
                         : (IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__deq_ptr)));
    }
    if (vlSelf->__PVT__hqd__DOT__fq__DOT__ram_R0_en) {
        vlSelf->__PVT__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_addr 
            = (0x1fU & ((IData)(vlSelf->__PVT__hqd__DOT__fq_io_deq_valid)
                         ? (((IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__do_deq) 
                             & (0x1fU == (IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__deq_ptr)))
                             ? 0U : ((IData)(1U) + (IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__deq_ptr)))
                         : (IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__deq_ptr)));
    }
    if (vlSelf->__PVT__hqe__DOT__fq__DOT__ram_R0_en) {
        vlSelf->__PVT__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_addr 
            = (0x1fU & ((IData)(vlSelf->__PVT__hqe__DOT__fq_io_deq_valid)
                         ? (((IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__do_deq) 
                             & (0x1fU == (IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__deq_ptr)))
                             ? 0U : ((IData)(1U) + (IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__deq_ptr)))
                         : (IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__deq_ptr)));
    }
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
    if (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqa__DOT__fq__DOT__deq_ptr = 0U;
    } else if (vlSelf->__PVT__hqa__DOT__fq__DOT__do_deq) {
        vlSelf->__PVT__hqa__DOT__fq__DOT__deq_ptr = vlSelf->__PVT__hqa__DOT__fq__DOT___wrap_value_T_1;
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqb__DOT__fq__DOT__deq_ptr = 0U;
    } else if (vlSelf->__PVT__hqb__DOT__fq__DOT__do_deq) {
        vlSelf->__PVT__hqb__DOT__fq__DOT__deq_ptr = vlSelf->__PVT__hqb__DOT__fq__DOT___wrap_value_T_1;
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqc__DOT__fq__DOT__deq_ptr = 0U;
    } else if (vlSelf->__PVT__hqc__DOT__fq__DOT__do_deq) {
        vlSelf->__PVT__hqc__DOT__fq__DOT__deq_ptr = vlSelf->__PVT__hqc__DOT__fq__DOT___wrap_value_T_1;
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqd__DOT__fq__DOT__deq_ptr = 0U;
    } else if (vlSelf->__PVT__hqd__DOT__fq__DOT__do_deq) {
        vlSelf->__PVT__hqd__DOT__fq__DOT__deq_ptr = vlSelf->__PVT__hqd__DOT__fq__DOT___wrap_value_T_1;
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__hqe__DOT__fq__DOT__deq_ptr = 0U;
    } else if (vlSelf->__PVT__hqe__DOT__fq__DOT__do_deq) {
        vlSelf->__PVT__hqe__DOT__fq__DOT__deq_ptr = vlSelf->__PVT__hqe__DOT__fq__DOT___wrap_value_T_1;
    }
    vlSelf->__PVT__hqa__DOT__fq__DOT___wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__deq_ptr)));
    vlSelf->__PVT__hqa__DOT__fq__DOT__ptr_match = ((IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__enq_ptr) 
                                                   == (IData)(vlSelf->__PVT__hqa__DOT__fq__DOT__deq_ptr));
    vlSelf->__PVT__hqb__DOT__fq__DOT___wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__deq_ptr)));
    vlSelf->__PVT__hqb__DOT__fq__DOT__ptr_match = ((IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__enq_ptr) 
                                                   == (IData)(vlSelf->__PVT__hqb__DOT__fq__DOT__deq_ptr));
    vlSelf->__PVT__hqc__DOT__fq__DOT___wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__deq_ptr)));
    vlSelf->__PVT__hqc__DOT__fq__DOT__ptr_match = ((IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__enq_ptr) 
                                                   == (IData)(vlSelf->__PVT__hqc__DOT__fq__DOT__deq_ptr));
    vlSelf->__PVT__hqd__DOT__fq__DOT___wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__deq_ptr)));
    vlSelf->__PVT__hqd__DOT__fq__DOT__ptr_match = ((IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__enq_ptr) 
                                                   == (IData)(vlSelf->__PVT__hqd__DOT__fq__DOT__deq_ptr));
    vlSelf->__PVT__hqe__DOT__fq__DOT___wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__deq_ptr)));
    vlSelf->__PVT__hqe__DOT__fq__DOT__ptr_match = ((IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__enq_ptr) 
                                                   == (IData)(vlSelf->__PVT__hqe__DOT__fq__DOT__deq_ptr));
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
}

VL_INLINE_OPT void VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__8(VysyxSoCFull_RX* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__8\n"); );
    // Body
    if (vlSelf->__PVT__io_rxc_source_io_enq_ready) {
        vlSelf->__PVT__io_rxc_source__DOT__mem_0_a 
            = vlSelf->__PVT__rx_a;
    }
    if (vlSelf->__PVT__io_rxc_source_io_enq_ready) {
        vlSelf->__PVT__io_rxc_source__DOT__mem_0_b 
            = vlSelf->__PVT__rx_b;
    }
    if (vlSelf->__PVT__io_rxc_source_io_enq_ready) {
        vlSelf->__PVT__io_rxc_source__DOT__mem_0_c 
            = vlSelf->__PVT__rx_c;
    }
    if (vlSelf->__PVT__io_rxc_source_io_enq_ready) {
        vlSelf->__PVT__io_rxc_source__DOT__mem_0_d 
            = vlSelf->__PVT__rx_d;
    }
    if (vlSelf->__PVT__io_rxc_source_io_enq_ready) {
        vlSelf->__PVT__io_rxc_source__DOT__mem_0_e 
            = vlSelf->__PVT__rx_e;
    }
    if (vlSelf->__PVT__io_txc_source_io_enq_ready) {
        vlSelf->__PVT__io_txc_source__DOT__mem_0_a 
            = vlSelf->__PVT__tx_a;
    }
    if (vlSelf->__PVT__io_txc_source_io_enq_ready) {
        vlSelf->__PVT__io_txc_source__DOT__mem_0_b 
            = vlSelf->__PVT__tx_b;
    }
    if (vlSelf->__PVT__io_txc_source_io_enq_ready) {
        vlSelf->__PVT__io_txc_source__DOT__mem_0_c 
            = vlSelf->__PVT__tx_c;
    }
    if (vlSelf->__PVT__io_txc_source_io_enq_ready) {
        vlSelf->__PVT__io_txc_source__DOT__mem_0_d 
            = vlSelf->__PVT__tx_d;
    }
    if (vlSelf->__PVT__io_txc_source_io_enq_ready) {
        vlSelf->__PVT__io_txc_source__DOT__mem_0_e 
            = vlSelf->__PVT__tx_e;
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__rx_a = 0x20U;
        vlSelf->__PVT__rx_b = 0x20U;
        vlSelf->__PVT__rx_c = 0x20U;
        vlSelf->__PVT__rx_d = 0x20U;
        vlSelf->__PVT__rx_e = 0x20U;
    } else {
        vlSelf->__PVT__rx_a = (0xfffffU & ((IData)(vlSelf->__PVT__io_rxc_source_io_enq_ready)
                                            ? (IData)(vlSelf->__PVT___rxInc_a_T)
                                            : ((0x100000U 
                                                & vlSelf->__PVT__rx_z)
                                                ? 0xfffffU
                                                : vlSelf->__PVT__rx_z)));
        vlSelf->__PVT__rx_b = (0xfffffU & ((IData)(vlSelf->__PVT__io_rxc_source_io_enq_ready)
                                            ? (IData)(vlSelf->__PVT___rxInc_bT)
                                            : ((0x100000U 
                                                & vlSelf->__PVT__rx_z_1)
                                                ? 0xfffffU
                                                : vlSelf->__PVT__rx_z_1)));
        vlSelf->__PVT__rx_c = (0xfffffU & ((IData)(vlSelf->__PVT__io_rxc_source_io_enq_ready)
                                            ? (IData)(vlSelf->__PVT___rxInc_c_T)
                                            : ((0x100000U 
                                                & vlSelf->__PVT__rx_z_2)
                                                ? 0xfffffU
                                                : vlSelf->__PVT__rx_z_2)));
        vlSelf->__PVT__rx_d = (0xfffffU & ((IData)(vlSelf->__PVT__io_rxc_source_io_enq_ready)
                                            ? (IData)(vlSelf->__PVT___rxInc_d_T)
                                            : ((0x100000U 
                                                & vlSelf->__PVT__rx_z_3)
                                                ? 0xfffffU
                                                : vlSelf->__PVT__rx_z_3)));
        vlSelf->__PVT__rx_e = (0xfffffU & ((IData)(vlSelf->__PVT__io_rxc_source_io_enq_ready)
                                            ? (IData)(vlSelf->__PVT___rxInc_e_T)
                                            : ((0x100000U 
                                                & vlSelf->__PVT__rx_z_4)
                                                ? 0xfffffU
                                                : vlSelf->__PVT__rx_z_4)));
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__first_count = 0U;
    } else if (vlSelf->__PVT__b2c_send) {
        vlSelf->__PVT__first_count = (0x1fU & ((IData)(vlSelf->__PVT__first)
                                                ? (
                                                   (5U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->__PVT__b2c_data))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & vlSelf->__PVT__b2c_data))
                                                     ? 0U
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (7U 
                                                       & vlSelf->__PVT__b2c_data))
                                                      ? 
                                                     ((IData)(vlSelf->__PVT___first_beats_c_T_1) 
                                                      + 
                                                      ((4U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->__PVT__b2c_data 
                                                            >> 3U))) 
                                                       | (5U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->__PVT__b2c_data 
                                                              >> 3U)))))
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & vlSelf->__PVT__b2c_data))
                                                       ? 
                                                      ((IData)(2U) 
                                                       + (IData)(vlSelf->__PVT___first_beats_c_T_1))
                                                       : 
                                                      ((IData)(2U) 
                                                       + 
                                                       (((0x20U 
                                                          & vlSelf->__PVT__b2c_data)
                                                          ? 0U
                                                          : (IData)(vlSelf->__PVT__first_beats_beats)) 
                                                        + 
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->__PVT__b2c_data 
                                                              >> 3U)))
                                                          ? 
                                                         ((2U 
                                                           & (((IData)(1U) 
                                                               << 
                                                               (7U 
                                                                & (vlSelf->__PVT__b2c_data 
                                                                   >> 9U))) 
                                                              >> 5U)) 
                                                          | (5U 
                                                             >= 
                                                             (0xfU 
                                                              & (vlSelf->__PVT__b2c_data 
                                                                 >> 9U))))
                                                          : 0U)))))))
                                                : (IData)(vlSelf->__PVT___first_count_T_1)));
    }
    if (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->__PVT__tx_a = 0U;
        vlSelf->__PVT__tx_b = 0U;
        vlSelf->__PVT__tx_c = 0U;
        vlSelf->__PVT__tx_d = 0U;
        vlSelf->__PVT__tx_e = 0U;
    } else {
        vlSelf->__PVT__tx_a = (0xfffffU & ((IData)(vlSelf->__PVT__io_txc_source_io_enq_ready)
                                            ? ((7U 
                                                & ((IData)(vlSelf->__PVT__b2c_send) 
                                                   & (((IData)(1U) 
                                                       << (IData)(vlSelf->__PVT___GEN_7)) 
                                                      >> 5U)))
                                                ? (
                                                   (0x14U 
                                                    < 
                                                    (0x1fU 
                                                     & (vlSelf->__PVT__b2c_data 
                                                        >> 7U)))
                                                    ? 0xfffffU
                                                    : 
                                                   (((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (vlSelf->__PVT__b2c_data 
                                                         >> 7U))) 
                                                    >> 1U))
                                                : 0U)
                                            : ((0x100000U 
                                                & vlSelf->__PVT__tx_z)
                                                ? 0xfffffU
                                                : vlSelf->__PVT__tx_z)));
        vlSelf->__PVT__tx_b = (0xfffffU & ((IData)(vlSelf->__PVT__io_txc_source_io_enq_ready)
                                            ? ((7U 
                                                & ((IData)(vlSelf->__PVT__b2c_send) 
                                                   & (((IData)(1U) 
                                                       << (IData)(vlSelf->__PVT___GEN_7)) 
                                                      >> 5U)))
                                                ? (
                                                   (0x14U 
                                                    < 
                                                    (0x1fU 
                                                     & (vlSelf->__PVT__b2c_data 
                                                        >> 0xcU)))
                                                    ? 0xfffffU
                                                    : 
                                                   (((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (vlSelf->__PVT__b2c_data 
                                                         >> 0xcU))) 
                                                    >> 1U))
                                                : 0U)
                                            : ((0x100000U 
                                                & vlSelf->__PVT__tx_z_1)
                                                ? 0xfffffU
                                                : vlSelf->__PVT__tx_z_1)));
        vlSelf->__PVT__tx_c = (0xfffffU & ((IData)(vlSelf->__PVT__io_txc_source_io_enq_ready)
                                            ? ((7U 
                                                & ((IData)(vlSelf->__PVT__b2c_send) 
                                                   & (((IData)(1U) 
                                                       << (IData)(vlSelf->__PVT___GEN_7)) 
                                                      >> 5U)))
                                                ? (
                                                   (0x14U 
                                                    < 
                                                    (0x1fU 
                                                     & (vlSelf->__PVT__b2c_data 
                                                        >> 0x11U)))
                                                    ? 0xfffffU
                                                    : 
                                                   (((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (vlSelf->__PVT__b2c_data 
                                                         >> 0x11U))) 
                                                    >> 1U))
                                                : 0U)
                                            : ((0x100000U 
                                                & vlSelf->__PVT__tx_z_2)
                                                ? 0xfffffU
                                                : vlSelf->__PVT__tx_z_2)));
        vlSelf->__PVT__tx_d = (0xfffffU & ((IData)(vlSelf->__PVT__io_txc_source_io_enq_ready)
                                            ? ((7U 
                                                & ((IData)(vlSelf->__PVT__b2c_send) 
                                                   & (((IData)(1U) 
                                                       << (IData)(vlSelf->__PVT___GEN_7)) 
                                                      >> 5U)))
                                                ? (
                                                   (0x14U 
                                                    < 
                                                    (0x1fU 
                                                     & (vlSelf->__PVT__b2c_data 
                                                        >> 0x16U)))
                                                    ? 0xfffffU
                                                    : 
                                                   (((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (vlSelf->__PVT__b2c_data 
                                                         >> 0x16U))) 
                                                    >> 1U))
                                                : 0U)
                                            : ((0x100000U 
                                                & vlSelf->__PVT__tx_z_3)
                                                ? 0xfffffU
                                                : vlSelf->__PVT__tx_z_3)));
        vlSelf->__PVT__tx_e = (0xfffffU & ((IData)(vlSelf->__PVT__io_txc_source_io_enq_ready)
                                            ? ((7U 
                                                & ((IData)(vlSelf->__PVT__b2c_send) 
                                                   & (((IData)(1U) 
                                                       << (IData)(vlSelf->__PVT___GEN_7)) 
                                                      >> 5U)))
                                                ? (
                                                   (0x14U 
                                                    < 
                                                    (vlSelf->__PVT__b2c_data 
                                                     >> 0x1bU))
                                                    ? 0xfffffU
                                                    : 
                                                   (((IData)(1U) 
                                                     << 
                                                     (vlSelf->__PVT__b2c_data 
                                                      >> 0x1bU)) 
                                                    >> 1U))
                                                : 0U)
                                            : ((0x100000U 
                                                & vlSelf->__PVT__tx_z_4)
                                                ? 0xfffffU
                                                : vlSelf->__PVT__tx_z_4)));
    }
    vlSelf->__PVT__first = (0U == (IData)(vlSelf->__PVT__first_count));
    vlSelf->__PVT___first_count_T_1 = (0x1fU & ((IData)(vlSelf->__PVT__first_count) 
                                                - (IData)(1U)));
    vlSelf->__PVT__b2c_send = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                               & (IData)(vlSelf->__PVT__b2c_send_REG));
    vlSelf->__PVT__b2c_data = vlSelf->__PVT__b2c_data_REG;
    vlSelf->__PVT__formatValid = ((IData)(vlSelf->__PVT__b2c_send) 
                                  & (0U == (IData)(vlSelf->__PVT__first_count)));
    vlSelf->__PVT__b2c_send_REG = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__io_c2b_send_REG_1;
    vlSelf->__PVT__first_beats_beats = ((0x1eU & (((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->__PVT__b2c_data 
                                                       >> 9U))) 
                                                  >> 2U)) 
                                        | (2U >= (0xfU 
                                                  & (vlSelf->__PVT__b2c_data 
                                                     >> 9U))));
    vlSelf->__PVT__b2c_data_REG = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__io_c2b_data_REG_2;
    vlSelf->__PVT___GEN_7 = (7U & ((IData)(vlSelf->__PVT__formatValid)
                                    ? vlSelf->__PVT__b2c_data
                                    : (IData)(vlSelf->__PVT__format_r)));
    vlSelf->__PVT___first_beats_c_T_1 = ((8U & vlSelf->__PVT__b2c_data)
                                          ? (IData)(vlSelf->__PVT__first_beats_beats)
                                          : 0U);
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

VL_INLINE_OPT void VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__14(VysyxSoCFull_RX* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__14\n"); );
    // Variables
    CData/*0:0*/ __Vdly__io_txc_source__DOT__widx_widx_bin;
    CData/*0:0*/ __Vdly__io_rxc_source__DOT__widx_widx_bin;
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
    __Vdly__io_txc_source__DOT__widx_widx_bin = vlSelf->__PVT__io_txc_source__DOT__widx_widx_bin;
    __Vdly__io_rxc_source__DOT__widx_widx_bin = vlSelf->__PVT__io_rxc_source__DOT__widx_widx_bin;
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
    __Vdly__io_txc_source__DOT__widx_widx_bin = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                                                 & ((IData)(vlSelf->__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                                    & ((IData)(vlSelf->__PVT__io_txc_source__DOT__widx_widx_bin) 
                                                       + (IData)(vlSelf->__PVT__io_txc_source_io_enq_ready))));
    vlSelf->__PVT__io_txc_source__DOT__widx_gray = 
        ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
         & ((IData)(vlSelf->__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
            & ((IData)(vlSelf->__PVT__io_txc_source__DOT__widx_widx_bin) 
               + (IData)(vlSelf->__PVT__io_txc_source_io_enq_ready))));
    __Vdly__io_rxc_source__DOT__widx_widx_bin = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                                                 & ((IData)(vlSelf->__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                                    & ((IData)(vlSelf->__PVT__io_rxc_source__DOT__widx_widx_bin) 
                                                       + (IData)(vlSelf->__PVT__io_rxc_source_io_enq_ready))));
    vlSelf->__PVT__io_rxc_source__DOT__widx_gray = 
        ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
         & ((IData)(vlSelf->__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
            & ((IData)(vlSelf->__PVT__io_rxc_source__DOT__widx_widx_bin) 
               + (IData)(vlSelf->__PVT__io_rxc_source_io_enq_ready))));
    vlSelf->__PVT__io_rxc_source__DOT__ready_reg = 
        ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
         & ((IData)(vlSelf->__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
            & (((IData)(vlSelf->__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                & ((IData)(vlSelf->__PVT__io_rxc_source__DOT__widx_widx_bin) 
                   + (IData)(vlSelf->__PVT__io_rxc_source_io_enq_ready))) 
               != (1U & (~ (IData)(vlSelf->__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))));
    vlSelf->__PVT__io_txc_source__DOT__ready_reg = 
        ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
         & ((IData)(vlSelf->__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
            & (((IData)(vlSelf->__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                & ((IData)(vlSelf->__PVT__io_txc_source__DOT__widx_widx_bin) 
                   + (IData)(vlSelf->__PVT__io_txc_source_io_enq_ready))) 
               != (1U & (~ (IData)(vlSelf->__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))));
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
    vlSelf->__PVT__io_rxc_source__DOT__widx_widx_bin 
        = __Vdly__io_rxc_source__DOT__widx_widx_bin;
    vlSelf->__PVT__io_txc_source__DOT__widx_widx_bin 
        = __Vdly__io_txc_source__DOT__widx_widx_bin;
    vlSelf->__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__io_rxc_source_io_enq_ready = ((IData)(vlSelf->__PVT__io_rxc_source__DOT__ready_reg) 
                                                 & (IData)(vlSelf->__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__io_txc_source_io_enq_ready = ((IData)(vlSelf->__PVT__io_txc_source__DOT__ready_reg) 
                                                 & (IData)(vlSelf->__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__ridx_gray));
    vlSelf->__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__ridx_gray));
    vlSelf->__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__16(VysyxSoCFull_RX* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__16\n"); );
    // Body
    vlSelf->__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__io_txc_source__DOT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->__PVT__io_txc_source__DOT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__io_txc_source__DOT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->__PVT__io_txc_source__DOT__source_valid_0_reset)) 
           & (IData)(vlSelf->__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->__PVT__io_txc_source__DOT__source_valid_0_reset)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->__PVT__io_txc_source__DOT__source_valid_0_reset)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull_RX___combo__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__20(VysyxSoCFull_RX* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_RX___combo__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__20\n"); );
    // Body
    vlSelf->__PVT__io_txc_source__DOT__source_valid_0_reset 
        = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) 
           | (IData)(vlSymsp->TOP.reset));
}
