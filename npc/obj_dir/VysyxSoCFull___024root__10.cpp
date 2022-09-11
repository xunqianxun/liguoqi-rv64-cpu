// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull___024root.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

extern const VlWide<16>/*511:0*/ VysyxSoCFull__ConstPool__CONST_93e1b771_0;
extern const VlWide<32>/*1023:0*/ VysyxSoCFull__ConstPool__CONST_d6b7ba52_0;
extern const VlWide<8>/*255:0*/ VysyxSoCFull__ConstPool__CONST_9e67c271_0;

VL_INLINE_OPT void VysyxSoCFull___024root___sequent__TOP__22(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___sequent__TOP__22\n"); );
    // Variables
    IData/*31:0*/ __Vilp;
    // Body
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__ram_extra_id__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__ram_extra_id[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__ram_extra_id__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__ram_extra_id__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__ram_extra_id__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__ram_extra_id[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__ram_extra_id__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__ram_extra_id__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ram_strb__v0) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ram_strb[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ram_strb__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ram_strb__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ram_data__v0) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ram_data[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ram_data__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ram_data__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v0) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v0] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v0))) 
                & vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram
                [vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v0]) 
               | ((QData)((IData)(vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v0)) 
                  << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v0)));
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v1) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v1] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v1))) 
                & vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram
                [vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v1]) 
               | ((QData)((IData)(vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v1)) 
                  << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v1)));
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v2) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v2] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v2))) 
                & vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram
                [vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v2]) 
               | ((QData)((IData)(vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v2)) 
                  << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v2)));
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v3) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v3] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v3))) 
                & vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram
                [vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v3]) 
               | ((QData)((IData)(vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v3)) 
                  << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v3)));
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v4) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v4] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v4))) 
                & vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram
                [vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v4]) 
               | ((QData)((IData)(vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v4)) 
                  << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v4)));
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v5) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v5] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v5))) 
                & vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram
                [vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v5]) 
               | ((QData)((IData)(vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v5)) 
                  << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v5)));
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v6) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v6] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v6))) 
                & vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram
                [vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v6]) 
               | ((QData)((IData)(vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v6)) 
                  << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v6)));
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v7) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v7] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v7))) 
                & vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram
                [vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v7]) 
               | ((QData)((IData)(vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v7)) 
                  << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v7)));
    }
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__value_1 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__value_1;
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__ram_id__v0) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__ram_id[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__ram_id__v0;
    }
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__value 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__value;
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__ram_id__v0) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__ram_id[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__ram_id__v0;
    }
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__value 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__value;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__count_1 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__count_1;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__count_1 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__count_1;
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_29__DOT__ram_tl_state_size__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_29__DOT__ram_tl_state_size[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_29__DOT__ram_tl_state_size__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_30__DOT__ram_tl_state_size__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_30__DOT__ram_tl_state_size[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_30__DOT__ram_tl_state_size__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_31__DOT__ram_tl_state_size__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_31__DOT__ram_tl_state_size[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_31__DOT__ram_tl_state_size__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_23__DOT__ram_tl_state_size__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_23__DOT__ram_tl_state_size[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_23__DOT__ram_tl_state_size__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_24__DOT__ram_tl_state_size__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_24__DOT__ram_tl_state_size[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_24__DOT__ram_tl_state_size__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_25__DOT__ram_tl_state_size__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_25__DOT__ram_tl_state_size[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_25__DOT__ram_tl_state_size__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_26__DOT__ram_tl_state_size__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_26__DOT__ram_tl_state_size[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_26__DOT__ram_tl_state_size__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_27__DOT__ram_tl_state_size__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_27__DOT__ram_tl_state_size[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_27__DOT__ram_tl_state_size__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_28__DOT__ram_tl_state_size__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_28__DOT__ram_tl_state_size[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_28__DOT__ram_tl_state_size__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_sink__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_sink[0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_size__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_size[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_size__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_size__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__ram_tl_state_size__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__ram_tl_state_size[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__ram_tl_state_size__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__ram_tl_state_size__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__ram_tl_state_size__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__ram_tl_state_size[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__ram_tl_state_size__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__ram_tl_state_size__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__ram_tl_state_size__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__ram_tl_state_size[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__ram_tl_state_size__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__ram_tl_state_size__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__ram_tl_state_size__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__ram_tl_state_size[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__ram_tl_state_size__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__ram_tl_state_size__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__ram_tl_state_size__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__ram_tl_state_size[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__ram_tl_state_size__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__ram_tl_state_size__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__ram_tl_state_size__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__ram_tl_state_size[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__ram_tl_state_size__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__ram_tl_state_size__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_denied__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_denied[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_denied__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_param__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_param[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_param__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_data__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_data[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_data__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_size__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_size[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_size__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_source__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_source[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_source__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_opcode__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_opcode[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_opcode__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_param__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_param[0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_mask__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_mask[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_mask__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_data__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_data[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_data__v0;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__inflight_sizes = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__inflight_sizes_1 = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__inflight_sizes 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___inflight_sizes_T_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__inflight_sizes_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___inflight_sizes_T_5;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_2 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_2)
                        ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter1_2)));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_1 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_1)
                        ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__param_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__denied 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_denied;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__size_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__opcode_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__source_1 
            = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source));
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_param__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_param[0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_mask__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_mask[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_mask__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_data__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_data[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_data__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT__ram_resp__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT__ram_resp[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT__ram_resp__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT__ram_id__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT__ram_id[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT__ram_id__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_resp__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_resp[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_resp__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_data__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_data[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_data__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_last__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_last[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_last__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__ram_echo_tl_state_size__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__ram_echo_tl_state_size[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__ram_echo_tl_state_size__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_last__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_last[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_last__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_data__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_data[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_data__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ram_data__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ram_data[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ram_data__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ram_data__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_strb__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_strb[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_strb__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ram_strb__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ram_strb[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ram_strb__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ram_strb__v0;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__value 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__value;
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__ram_id__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__ram_id[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__ram_id__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__ram_last__v0) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__ram_last[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__ram_last__v0;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1;
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_id__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_id[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_id__v0;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__inflight_sizes = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__inflight_sizes_1 = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__inflight_sizes 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___inflight_sizes_T_2;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__inflight_sizes_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___inflight_sizes_T_5;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_2 
            = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_2)
                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))
                             ? (~ (0x1fffffU & (((IData)(0xffU) 
                                                 << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                                                >> 2U)))
                             : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter1_2)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__param_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__denied 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_denied;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__size_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__opcode_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__source_1 
            = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source));
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__ram_resp__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__ram_resp[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__ram_resp__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_sink__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_sink[0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_denied__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_denied[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_denied__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_param__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_param[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_param__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_data__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_data[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_data__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_size__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_size[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_size__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_source__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_source[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_source__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_opcode__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_opcode[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_opcode__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__ram_id__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__ram_id[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__ram_id__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__deq__DOT__ram_last__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__deq__DOT__ram_last[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__deq__DOT__ram_last__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_29__DOT__ram_tl_state_source__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_29__DOT__ram_tl_state_source[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_29__DOT__ram_tl_state_source__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_30__DOT__ram_tl_state_source__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_30__DOT__ram_tl_state_source[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_30__DOT__ram_tl_state_source__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_31__DOT__ram_tl_state_source__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_31__DOT__ram_tl_state_source[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_31__DOT__ram_tl_state_source__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_23__DOT__ram_tl_state_source__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_23__DOT__ram_tl_state_source[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_23__DOT__ram_tl_state_source__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_24__DOT__ram_tl_state_source__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_24__DOT__ram_tl_state_source[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_24__DOT__ram_tl_state_source__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_25__DOT__ram_tl_state_source__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_25__DOT__ram_tl_state_source[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_25__DOT__ram_tl_state_source__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_26__DOT__ram_tl_state_source__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_26__DOT__ram_tl_state_source[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_26__DOT__ram_tl_state_source__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_27__DOT__ram_tl_state_source__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_27__DOT__ram_tl_state_source[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_27__DOT__ram_tl_state_source__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_28__DOT__ram_tl_state_source__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_28__DOT__ram_tl_state_source[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_28__DOT__ram_tl_state_source__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_source__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_source[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_source__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_source__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__ram_tl_state_source__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__ram_tl_state_source[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__ram_tl_state_source__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__ram_tl_state_source__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__ram_tl_state_source__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__ram_tl_state_source[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__ram_tl_state_source__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__ram_tl_state_source__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__ram_tl_state_source__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__ram_tl_state_source[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__ram_tl_state_source__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__ram_tl_state_source__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__ram_tl_state_source__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__ram_tl_state_source[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__ram_tl_state_source__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__ram_tl_state_source__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__ram_tl_state_source__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__ram_tl_state_source[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__ram_tl_state_source__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__ram_tl_state_source__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__ram_tl_state_source__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__ram_tl_state_source[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__ram_tl_state_source__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__ram_tl_state_source__v0;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__count 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__count;
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__ram_wen__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__ram_wen[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__ram_wen__v0;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__maybe_full 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__do_enq;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__maybe_full 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__do_enq;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__maybe_full 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__do_enq;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__maybe_full 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__do_enq;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__maybe_full 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__do_enq;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__maybe_full 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__do_enq;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__maybe_full 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__do_enq;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__maybe_full 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__do_enq;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__maybe_full 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__do_enq;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__maybe_full 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__do_enq;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__maybe_full 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__do_enq;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__maybe_full 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__do_enq;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__maybe_full 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__do_enq;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__maybe_full 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__do_enq;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[1U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[2U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[3U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[4U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[5U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[6U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[7U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[8U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[9U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xfU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_1[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_1[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_1[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_1[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[4U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[5U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[6U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[7U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[8U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[9U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xfU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__watchdog_1 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__watchdog = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[1U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[2U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[3U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[4U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[5U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[6U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[7U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[7U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[8U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[8U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[9U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[9U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xaU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xaU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xbU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xbU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xcU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xcU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xdU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xdU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xeU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xeU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xfU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xfU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight[0U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_T_2[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight[1U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_T_2[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight[2U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_T_2[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight[3U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_T_2[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_1[0U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_T_5[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_1[1U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_T_5[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_1[2U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_T_5[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_1[3U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_T_5[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[4U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[5U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[6U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[7U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[7U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[8U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[8U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[9U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[9U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xaU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xbU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xcU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xdU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xeU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xfU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__watchdog_1 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T))
                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___watchdog_T_3);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T))
                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___watchdog_T_1);
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_3 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_3 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_3)
                      ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter1_3)));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_2 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_2)
                      ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter1_2)));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_1 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_1)
                      ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__param_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__denied 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_denied;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__size_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__opcode_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter_1 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_1)
                      ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__address_2 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__param_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_3 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
               << 1U);
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__size_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__opcode_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_1)
                      ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))
                          ? 0U : (~ (0x3ffU & (((IData)(0x3fU) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)) 
                                               >> 3U))))
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__param 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__size 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__address 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__opcode 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[1U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[2U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[3U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[4U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[5U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[6U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[7U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[8U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[9U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xfU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_1[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_1[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_1[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_1[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[4U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[5U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[6U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[7U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[8U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[9U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xfU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__watchdog_1 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__watchdog = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[1U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[2U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[3U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[4U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[5U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[6U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[7U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[7U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[8U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[8U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[9U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[9U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xaU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[0xaU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xbU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[0xbU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xcU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[0xcU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xdU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[0xdU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xeU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[0xeU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xfU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[0xfU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight[0U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_T_2[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight[1U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_T_2[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight[2U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_T_2[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight[3U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_T_2[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_1[0U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_T_5[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_1[1U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_T_5[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_1[2U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_T_5[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_1[3U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_T_5[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[4U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[5U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[6U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[7U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[7U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[8U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[8U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[9U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[9U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0xaU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0xbU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0xcU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0xdU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0xeU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0xfU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__watchdog_1 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T))
                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___watchdog_T_3);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T))
                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___watchdog_T_1);
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___c_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_1)
                      ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__address_2 
            = (0x1fffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address);
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__param_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__source_3 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
               << 1U);
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__size_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__opcode_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__corrupt_reg = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT___T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__corrupt_reg 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__last)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__corrupt_out));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_3 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_3 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_3)
                      ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter1_3)));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_2)
                      ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter1_2)));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_1)
                      ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__param_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__denied 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_denied;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__source_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__size_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__opcode_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_1)
                      ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))
                          ? 0U : (~ (0x3ffU & (((IData)(0x3fU) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)) 
                                               >> 3U))))
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__param 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__size 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__address 
            = (0x1fffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address);
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__source 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__opcode 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_count_1 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_count_1;
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_param__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_param[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_param__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_source__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_source[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_source__v0;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_count 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_count;
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_source__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_source[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_source__v0;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[1U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[2U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[3U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[4U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[4U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[5U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[5U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[6U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[6U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[7U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[7U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[8U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[8U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[9U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[9U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xaU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xbU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xcU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xdU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xeU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xfU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x10U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x10U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x11U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x11U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x12U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x12U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x13U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x13U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x14U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x14U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x15U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x15U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x16U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x16U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x17U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x17U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x18U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x18U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x19U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x19U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x1aU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1aU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x1bU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1bU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x1cU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1cU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x1dU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1dU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x1eU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1eU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x1fU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1fU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_1[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_1[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_1[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_1[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[4U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[4U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[5U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[5U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[6U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[6U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[7U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[7U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[8U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[8U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[9U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[9U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xaU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xbU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xcU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xdU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xeU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xfU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x10U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x10U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x11U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x11U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x12U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x12U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x13U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x13U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x14U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x14U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x15U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x15U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x16U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x16U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x17U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x17U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x18U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x18U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x19U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x19U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x1aU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1aU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x1bU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1bU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x1cU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1cU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x1dU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1dU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x1eU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1eU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x1fU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1fU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__watchdog_1 = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__watchdog = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight[0U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_T_2[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight[1U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_T_2[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight[2U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_T_2[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight[3U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_T_2[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[1U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[2U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[3U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[4U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[4U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[5U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[5U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[6U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[6U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[7U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[7U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[8U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[8U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[9U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[9U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xaU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xaU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xbU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xbU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xcU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xcU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xdU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xdU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xeU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xeU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xfU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xfU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x10U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x10U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x11U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x11U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x12U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x12U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x13U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x13U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x14U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x14U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x15U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x15U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x16U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x16U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x17U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x17U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x18U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x18U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x19U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x19U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x1aU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x1aU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x1bU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x1bU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x1cU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x1cU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x1dU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x1dU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x1eU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x1eU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x1fU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x1fU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_1[0U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_T_5[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_1[1U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_T_5[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_1[2U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_T_5[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_1[3U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_T_5[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[4U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[4U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[5U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[5U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[6U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[6U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[7U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[7U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[8U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[8U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[9U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[9U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xaU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xbU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xcU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xdU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xeU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xfU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x10U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x10U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x11U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x11U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x12U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x12U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x13U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x13U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x14U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x14U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x15U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x15U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x16U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x16U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x17U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x17U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x18U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x18U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x19U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x19U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x1aU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x1aU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x1bU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x1bU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x1cU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x1cU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x1dU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x1dU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x1eU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x1eU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x1fU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x1fU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__watchdog_1 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T))
                ? 0U : vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___watchdog_T_3);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T))
                ? 0U : vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___watchdog_T_1);
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_3 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_3 
            = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_3)
                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))
                             ? (~ (0xfffffU & (((IData)(0xffU) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                                               >> 3U)))
                             : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter1_3)));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2 
            = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_2)
                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))
                             ? (~ (0xfffffU & (((IData)(0xffU) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                                               >> 3U)))
                             : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter1_2)));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1 
            = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_1)
                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))
                             ? (~ (0xfffffU & (((IData)(0xffU) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                                               >> 3U)))
                             : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__param_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__size_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__denied 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_denied;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__source_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__opcode_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1 
            = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_1)
                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))
                             ? (~ (0xfffffU & (((IData)(0xffU) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                                               >> 3U)))
                             : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__address_2 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__param_3 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__source_3 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
               << 1U);
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__size_3 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__opcode_3 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1 
            = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_1)
                         ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                             ? 0U : (~ (0xfffffU & 
                                        (((IData)(0xffU) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                                         >> 3U)))) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__param 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__address 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_1 = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_2 = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_3 = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_4 = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_5 = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_6 = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_7 = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_8 = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_9 = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_10 = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_11 = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_12 = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_13 = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_14 = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_15 = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_1;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_2 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_2;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_3 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_3;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_4 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_4;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_5 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_5;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_6 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_6;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_7 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_7;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_8 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_8;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_9 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_9;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_10 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_10;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_11 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_11;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_12 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_12;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_13 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_13;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_14 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_14;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_15 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_15;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id 
        = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___GEN_1));
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp__v0) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id__v0) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_opcode__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_opcode[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_opcode__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_size__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_size[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_size__v0;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_7 = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_6 = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_4 = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_5 = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_3 = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_7 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_28;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_6 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_24;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_4 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_16;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_5 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_20;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_3 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_12;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_8 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_30) 
                                               - ((
                                                   (((IData)(1U) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                                    >> 7U) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_9 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_34) 
                                               - ((
                                                   (((IData)(1U) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                                    >> 8U) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_10 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_38) 
                                               - ((
                                                   (((IData)(1U) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                                    >> 9U) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_11 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_42) 
                                               - ((
                                                   (((IData)(1U) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                                    >> 0xaU) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_12 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_46) 
                                               - ((
                                                   (((IData)(1U) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                                    >> 0xbU) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_13 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_50) 
                                               - ((
                                                   (((IData)(1U) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                                    >> 0xcU) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_14 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_54) 
                                               - ((
                                                   (((IData)(1U) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                                    >> 0xdU) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_15 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_58) 
                                               - ((
                                                   (((IData)(1U) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                                    >> 0xeU) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_16 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_62) 
                                               - ((
                                                   (((IData)(1U) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                                    >> 0xfU) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_17 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_66) 
                                               - ((
                                                   (((IData)(1U) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                                    >> 0x10U) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_18 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_70) 
                                               - ((
                                                   (((IData)(1U) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                                    >> 0x11U) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_19 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_74) 
                                               - ((
                                                   (((IData)(1U) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                                    >> 0x12U) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_20 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_78) 
                                               - ((
                                                   (((IData)(1U) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                                    >> 0x13U) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_21 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_82) 
                                               - ((
                                                   (((IData)(1U) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                                    >> 0x14U) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_22 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_86) 
                                               - ((
                                                   (((IData)(1U) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                                    >> 0x15U) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_23 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_90) 
                                               - ((
                                                   (((IData)(1U) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                                    >> 0x16U) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1)))));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_2 = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_1 = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_2 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_8;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_4;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value_1 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value_1;
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_opcode__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_opcode[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_opcode__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_size__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_size[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_size__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_opcode__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_opcode[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_opcode__v0;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__count 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__count;
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last__v0) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last__v0] = 1U;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_echo_real_last__v0) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_echo_real_last[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_echo_real_last__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_echo_real_last__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_data__v0) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_data[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_data__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_data__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_resp__v0) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_resp[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_resp__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_resp__v0;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__locked 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__locked;
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id__v0) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id__v0;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT___T) 
         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_last)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_corrupt 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_corrupt;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[0U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[1U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[2U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[3U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[4U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[5U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[6U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[7U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[8U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[9U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xfU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_1[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_1[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_1[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_1[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[4U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[5U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[6U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[7U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[8U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[9U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xfU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__watchdog_1 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__watchdog = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[0U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[1U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[2U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[3U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[4U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[5U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[6U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[7U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[7U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[8U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[8U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[9U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[9U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[0xaU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[0xaU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[0xbU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[0xbU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[0xcU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[0xcU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[0xdU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[0xdU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[0xeU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[0xeU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[0xfU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[0xfU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight[0U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_T_2[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight[1U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_T_2[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight[2U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_T_2[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight[3U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_T_2[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_1[0U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_T_5[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_1[1U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_T_5[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_1[2U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_T_5[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_1[3U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_T_5[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[4U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[5U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[6U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[7U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[7U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[8U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[8U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[9U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[9U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0xaU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0xbU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0xcU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0xdU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0xeU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0xfU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__watchdog_1 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___c_first_T) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T))
                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___watchdog_T_3);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T))
                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___watchdog_T_1);
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___c_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_1)
                        ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter1_1)));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_1)
                        ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))
                            ? 0U : (~ (0x7ffU & (((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                                                 >> 2U))))
                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__param_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_param;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_3 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_3 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_3)
                        ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter1_3)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__source_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__opcode 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_2)
                        ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter1_2)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__source 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__size_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__address 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_1)
                        ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__size 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__opcode_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__param_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__denied 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_denied;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__size_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__source_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__opcode_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__address_2 
            = (0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address)
                           : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__param 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_param)
                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__idle 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___GEN_13));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__counter = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__counter 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_first)
                        ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_size
                                             [0U]) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__counter1)));
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_echo_real_last__v0) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_echo_real_last[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_echo_real_last__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_echo_real_last__v0;
    }
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value;
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_1[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_1[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_1[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_1[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[4U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[4U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[5U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[5U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[6U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[6U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[7U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[7U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[8U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[8U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[9U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[9U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xaU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xbU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xcU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xdU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xeU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xfU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x10U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x10U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x11U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x11U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x12U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x12U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x13U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x13U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x14U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x14U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x15U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x15U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x16U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x16U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x17U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x17U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x18U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x18U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x19U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x19U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x1aU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1aU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x1bU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1bU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x1cU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1cU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x1dU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1dU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x1eU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1eU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x1fU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1fU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[1U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[2U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[3U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[4U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[4U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[5U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[5U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[6U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[6U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[7U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[7U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[8U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[8U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[9U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[9U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xaU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xbU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xcU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xdU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xeU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xfU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x10U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x10U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x11U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x11U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x12U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x12U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x13U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x13U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x14U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x14U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x15U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x15U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x16U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x16U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x17U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x17U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x18U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x18U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x19U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x19U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x1aU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1aU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x1bU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1bU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x1cU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1cU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x1dU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1dU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x1eU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1eU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x1fU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1fU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__watchdog_1 = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__watchdog = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_1[0U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_T_5[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_1[1U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_T_5[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_1[2U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_T_5[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_1[3U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_T_5[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[4U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[4U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[5U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[5U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[6U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[6U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[7U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[7U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[8U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[8U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[9U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[9U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0xaU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0xbU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0xcU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0xdU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0xeU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0xfU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x10U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0x10U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x11U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0x11U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x12U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0x12U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x13U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0x13U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x14U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0x14U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x15U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0x15U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x16U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0x16U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x17U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0x17U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x18U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0x18U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x19U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0x19U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x1aU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0x1aU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x1bU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0x1bU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x1cU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0x1cU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x1dU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0x1dU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x1eU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0x1eU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x1fU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0x1fU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight[0U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_T_2[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight[1U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_T_2[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight[2U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_T_2[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight[3U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_T_2[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[1U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[2U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[3U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[4U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[4U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[5U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[5U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[6U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[6U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[7U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[7U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[8U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[8U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[9U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[9U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0xaU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0xaU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0xbU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0xbU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0xcU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0xcU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0xdU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0xdU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0xeU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0xeU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0xfU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0xfU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x10U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0x10U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x11U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0x11U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x12U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0x12U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x13U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0x13U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x14U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0x14U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x15U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0x15U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x16U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0x16U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x17U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0x17U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x18U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0x18U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x19U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0x19U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x1aU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0x1aU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x1bU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0x1bU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x1cU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0x1cU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x1dU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0x1dU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x1eU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0x1eU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x1fU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0x1fU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__watchdog_1 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T)
                ? 0U : vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___watchdog_T_3);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T))
                ? 0U : vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___watchdog_T_1);
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1 
            = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_1)
                         ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                             ? 0U : (~ (0xfffffU & 
                                        (((IData)(0xffU) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                                         >> 3U)))) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__param 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__address 
            = (0x7fffffffU & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address);
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_2 
            = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_2)
                         ? (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                              ? 1U : 0U) ? (~ (0xfffffU 
                                               & (((IData)(0xffU) 
                                                   << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_size)) 
                                                  >> 3U)))
                             : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter1_2)));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1 
            = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_1)
                         ? (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                              ? 1U : 0U) ? (~ (0xfffffU 
                                               & (((IData)(0xffU) 
                                                   << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_size)) 
                                                  >> 3U)))
                             : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__denied 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_denied;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__size_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__source_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__opcode_1 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                ? 1U : 0U);
    }
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value_1 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value_1;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1;
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_size__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_size[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_size__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_opcode__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_opcode[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_opcode__v0;
    }
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__w_counter 
        = ((IData)(vlSelf->reset) ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___wcounter_T_2));
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_source__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_source[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_source__v0;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[1U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[2U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[3U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[4U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[5U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[6U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[7U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[8U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[9U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xfU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_1[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_1[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_1[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_1[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[4U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[5U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[6U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[7U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[8U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[9U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xfU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__watchdog_1 = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__watchdog = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[1U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[2U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[3U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[4U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[4U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[5U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[5U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[6U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[6U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[7U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[7U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[8U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[8U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[9U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[9U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xaU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[0xaU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xbU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[0xbU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xcU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[0xcU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xdU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[0xdU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xeU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[0xeU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xfU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[0xfU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight[0U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_T_2[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight[1U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_T_2[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight[2U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_T_2[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight[3U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_T_2[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_1[0U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_T_5[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_1[1U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_T_5[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_1[2U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_T_5[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_1[3U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_T_5[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[4U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[4U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[5U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[5U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[6U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[6U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[7U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[7U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[8U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[8U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[9U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[9U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0xaU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0xbU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0xcU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0xdU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0xeU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0xfU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__watchdog_1 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___d_first_T))
                ? 0U : vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___watchdog_T_3);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___d_first_T))
                ? 0U : vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___watchdog_T_1);
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___c_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_1)
                      ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))) 
                                          >> 3U))) : 0U)
                      : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__address_2 
            = (0x1fffU & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address);
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__param_3 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__source_3 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
               << 1U);
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__size_3 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__opcode_3 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_1)
                      ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                          ? 0U : (~ (0x3ffU & (((IData)(0x3fU) 
                                                << 
                                                (7U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                                               >> 3U))))
                      : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__param 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__size 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__address 
            = (0x1fffU & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address);
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__corrupt_reg = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT___T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__corrupt_reg 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__last)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__corrupt_out));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_3 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_3 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_3)
                      ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err_auto_in_d_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err_auto_in_d_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter1_3)));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_2)
                      ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err_auto_in_d_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err_auto_in_d_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter1_2)));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_1)
                      ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err_auto_in_d_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err_auto_in_d_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__param_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err_auto_in_d_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__denied 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err_auto_in_d_bits_denied;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__source_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err_auto_in_d_bits_source;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__size_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err_auto_in_d_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__opcode_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err_auto_in_d_bits_opcode;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_address__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_address[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_address__v0;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__count 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__count;
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_source__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_source[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_source__v0;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__count 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__count;
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[1U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[2U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[3U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[4U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[5U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[6U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[7U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[8U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[9U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xfU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_1[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_1[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_1[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_1[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[4U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[5U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[6U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[7U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[8U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[9U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xfU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__watchdog_1 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__watchdog = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[1U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[2U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[3U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[4U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[5U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[6U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[7U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[7U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[8U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[8U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[9U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[9U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xaU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xaU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xbU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xbU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xcU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xcU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xdU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xdU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xeU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xeU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xfU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xfU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight[0U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_T_2[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight[1U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_T_2[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight[2U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_T_2[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight[3U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_T_2[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_1[0U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_T_5[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_1[1U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_T_5[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_1[2U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_T_5[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_1[3U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_T_5[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[4U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[5U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[6U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[7U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[7U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[8U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[8U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[9U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[9U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xaU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xbU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xcU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xdU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xeU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xfU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__watchdog_1 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T))
                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___watchdog_T_3);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T))
                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___watchdog_T_1);
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_3 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_3 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_3)
                      ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter1_3)));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_2)
                      ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter1_2)));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_1 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_1)
                      ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__denied 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_denied;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__opcode_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__param_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__size_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___c_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_1)
                      ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__address_2 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__param_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__source_3 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
               << 1U);
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__size_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__opcode_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__source_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_first_counter)))) {
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_cam_sel_match_0) 
             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_opcode)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_corrupt 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_corrupt;
        }
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_1)
                      ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))
                          ? 0U : (~ (0x3ffU & (((IData)(0x3fU) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                                               >> 3U))))
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__param 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__size 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__source 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__opcode 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__address 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_address;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[1U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[2U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[3U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[4U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[5U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[6U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[7U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[8U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[9U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xfU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[4U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[5U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[6U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[7U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[8U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[9U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xfU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__watchdog_1 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__watchdog = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[1U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[2U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[3U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[4U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[5U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[6U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[7U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[7U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[8U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[8U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[9U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[9U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xaU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0xaU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xbU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0xbU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xcU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0xcU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xdU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0xdU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xeU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0xeU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xfU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0xfU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight[0U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_T_2[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight[1U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_T_2[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight[2U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_T_2[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight[3U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_T_2[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1[0U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_T_5[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1[1U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_T_5[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1[2U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_T_5[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1[3U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_T_5[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[4U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[5U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[6U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[7U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[7U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[8U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[8U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[9U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[9U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0xaU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0xbU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0xcU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0xdU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0xeU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0xfU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__watchdog_1 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T))
                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___watchdog_T_3);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T))
                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___watchdog_T_1);
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_3 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_3 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_3)
                      ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter1_3)));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_2)
                      ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter1_2)));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_1)
                      ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__denied 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_denied;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__param_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__size_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___c_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_1)
                      ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__address_2 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__param_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_3 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
               << 1U);
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__opcode_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__size_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__opcode_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_1)
                      ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))
                          ? 0U : (~ (0x3ffU & (((IData)(0x3fU) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                                               >> 3U))))
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__param 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__size 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__opcode 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__address 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_address;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_address__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_address[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_address__v0;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_count 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_count;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeat_count_1 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeat_count_1;
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_param__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_param[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_param__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_source__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_source[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_source__v0;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[1U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[2U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[3U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[4U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[4U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[5U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[5U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[6U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[6U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[7U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[7U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[8U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[8U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[9U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[9U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xaU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xbU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xcU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xdU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xeU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xfU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x10U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x10U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x11U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x11U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x12U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x12U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x13U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x13U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x14U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x14U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x15U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x15U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x16U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x16U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x17U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x17U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x18U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x18U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x19U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x19U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x1aU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1aU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x1bU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1bU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x1cU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1cU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x1dU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1dU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x1eU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1eU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x1fU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1fU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_1[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_1[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_1[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_1[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[4U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[4U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[5U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[5U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[6U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[6U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[7U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[7U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[8U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[8U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[9U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[9U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xaU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xbU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xcU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xdU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xeU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xfU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x10U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x10U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x11U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x11U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x12U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x12U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x13U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x13U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x14U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x14U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x15U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x15U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x16U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x16U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x17U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x17U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x18U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x18U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x19U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x19U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x1aU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1aU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x1bU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1bU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x1cU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1cU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x1dU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1dU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x1eU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1eU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x1fU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1fU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__watchdog_1 = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__watchdog = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight[0U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_T_2[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight[1U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_T_2[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight[2U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_T_2[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight[3U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_T_2[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[1U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[2U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[3U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[4U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[4U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[5U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[5U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[6U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[6U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[7U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[7U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[8U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[8U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[9U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[9U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xaU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xaU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xbU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xbU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xcU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xcU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xdU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xdU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xeU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xeU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xfU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xfU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x10U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x10U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x11U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x11U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x12U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x12U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x13U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x13U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x14U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x14U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x15U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x15U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x16U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x16U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x17U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x17U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x18U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x18U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x19U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x19U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x1aU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x1aU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x1bU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x1bU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x1cU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x1cU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x1dU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x1dU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x1eU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x1eU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x1fU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x1fU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_1[0U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_T_5[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_1[1U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_T_5[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_1[2U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_T_5[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_1[3U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_T_5[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[4U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[4U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[5U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[5U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[6U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[6U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[7U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[7U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[8U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[8U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[9U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[9U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xaU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xbU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xcU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xdU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xeU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xfU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x10U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x10U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x11U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x11U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x12U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x12U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x13U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x13U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x14U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x14U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x15U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x15U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x16U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x16U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x17U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x17U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x18U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x18U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x19U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x19U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x1aU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x1aU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x1bU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x1bU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x1cU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x1cU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x1dU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x1dU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x1eU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x1eU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x1fU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x1fU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__watchdog_1 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T))
                ? 0U : vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___watchdog_T_3);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T))
                ? 0U : vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___watchdog_T_1);
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_3 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_3 
            = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_3)
                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))
                             ? (~ (0xfffffU & (((IData)(0xffU) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_size)) 
                                               >> 3U)))
                             : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter1_3)));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2 
            = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_2)
                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))
                             ? (~ (0xfffffU & (((IData)(0xffU) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_size)) 
                                               >> 3U)))
                             : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter1_2)));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1 
            = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_1)
                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))
                             ? (~ (0xfffffU & (((IData)(0xffU) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_size)) 
                                               >> 3U)))
                             : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__denied 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_denied;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__opcode_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__param_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__size_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_size;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1 
            = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_1)
                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))
                             ? (~ (0xfffffU & (((IData)(0xffU) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                                               >> 3U)))
                             : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__address_2 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__param_3 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__source_3 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
               << 1U);
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__size_3 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__opcode_3 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__source_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_first_counter)))) {
        if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_cam_sel_match_0) 
             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_opcode)))) {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_corrupt 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_corrupt;
        }
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1 
            = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_1)
                         ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))
                             ? 0U : (~ (0xfffffU & 
                                        (((IData)(0xffU) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                                         >> 3U)))) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__param 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__address 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[1U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[2U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[3U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[4U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[4U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[5U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[5U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[6U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[6U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[7U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[7U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[8U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[8U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[9U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[9U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xaU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xbU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xcU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xdU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xeU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xfU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x10U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x10U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x11U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x11U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x12U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x12U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x13U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x13U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x14U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x14U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x15U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x15U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x16U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x16U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x17U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x17U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x18U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x18U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x19U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x19U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x1aU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1aU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x1bU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1bU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x1cU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1cU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x1dU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1dU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x1eU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1eU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x1fU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1fU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[4U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[4U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[5U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[5U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[6U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[6U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[7U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[7U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[8U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[8U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[9U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[9U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xaU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xbU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xcU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xdU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xeU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0xfU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x10U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x10U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x11U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x11U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x12U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x12U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x13U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x13U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x14U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x14U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x15U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x15U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x16U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x16U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x17U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x17U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x18U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x18U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x19U] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x19U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x1aU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1aU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x1bU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1bU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x1cU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1cU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x1dU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1dU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x1eU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1eU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x1fU] 
            = VysyxSoCFull__ConstPool__CONST_d6b7ba52_0[0x1fU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__watchdog_1 = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__watchdog = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight[0U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_T_2[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight[1U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_T_2[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight[2U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_T_2[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight[3U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_T_2[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[1U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[2U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[3U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[4U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[4U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[5U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[5U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[6U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[6U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[7U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[7U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[8U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[8U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[9U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[9U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xaU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0xaU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xbU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0xbU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xcU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0xcU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xdU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0xdU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xeU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0xeU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xfU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0xfU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x10U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x10U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x11U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x11U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x12U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x12U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x13U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x13U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x14U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x14U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x15U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x15U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x16U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x16U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x17U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x17U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x18U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x18U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x19U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x19U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x1aU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x1aU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x1bU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x1bU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x1cU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x1cU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x1dU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x1dU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x1eU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x1eU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x1fU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x1fU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1[0U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_T_5[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1[1U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_T_5[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1[2U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_T_5[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1[3U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_T_5[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[4U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[4U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[5U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[5U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[6U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[6U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[7U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[7U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[8U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[8U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[9U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[9U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0xaU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0xbU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0xcU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0xdU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0xeU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0xfU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x10U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x10U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x11U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x11U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x12U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x12U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x13U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x13U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x14U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x14U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x15U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x15U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x16U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x16U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x17U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x17U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x18U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x18U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x19U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x19U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x1aU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x1aU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x1bU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x1bU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x1cU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x1cU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x1dU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x1dU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x1eU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x1eU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x1fU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x1fU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__watchdog_1 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T))
                ? 0U : vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___watchdog_T_3);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T))
                ? 0U : vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___watchdog_T_1);
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_3 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_3 
            = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_3)
                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))
                             ? (~ (0xfffffU & (((IData)(0xffU) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_size)) 
                                               >> 3U)))
                             : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter1_3)));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2 
            = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_2)
                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))
                             ? (~ (0xfffffU & (((IData)(0xffU) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_size)) 
                                               >> 3U)))
                             : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter1_2)));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1 
            = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_1)
                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))
                             ? (~ (0xfffffU & (((IData)(0xffU) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_size)) 
                                               >> 3U)))
                             : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__denied 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_denied;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__param_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__size_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_size;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1 
            = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_1)
                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))
                             ? (~ (0xfffffU & (((IData)(0xffU) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                                               >> 3U)))
                             : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__address_2 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__param_3 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__opcode_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__source_3 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
               << 1U);
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__size_3 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__opcode_3 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__source_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1 
            = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_1)
                         ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))
                             ? 0U : (~ (0xfffffU & 
                                        (((IData)(0xffU) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                                         >> 3U)))) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__param 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__address 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeat_count 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeat_count;
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source__v0;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_count 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_count;
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_opcode__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_opcode[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_opcode__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_size__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_size[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_size__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode__v0;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes[0U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes[1U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes[2U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes[3U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes[4U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes[5U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes[6U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes[7U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[7U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_1 = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[4U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[5U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[6U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[7U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[7U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__watchdog_1 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__watchdog = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes[0U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes[1U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes[2U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes[3U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes[4U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes[5U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes[6U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes[7U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[7U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_T_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_T_5;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[4U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[5U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[6U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[7U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[7U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__watchdog_1 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___c_first_T) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___d_first_T))
                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___watchdog_T_3);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___d_first_T))
                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___watchdog_T_1);
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_3 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_3 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_3)
                      ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter1_3)));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_2 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_2)
                      ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter1_2)));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_1 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_1)
                      ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__opcode_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__denied 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_denied;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__param_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__size_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___c_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_1)
                      ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__address_2 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__param_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__size_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__opcode_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_1 
            = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                        >> 1U));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_1)
                      ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                          ? 0U : (~ (0x3ffU & (((IData)(0x3fU) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                                               >> 3U))))
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__param 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__size 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__address 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__opcode 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[0U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[1U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[2U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[3U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[4U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[5U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[6U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[7U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[7U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_1 = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[4U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[5U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[6U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[7U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[7U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__watchdog_1 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__watchdog = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[0U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[1U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[2U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[3U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[4U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[5U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[6U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[7U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[7U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_T_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_T_5;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[4U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[5U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[6U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[7U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[7U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__watchdog_1 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___d_first_T))
                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___watchdog_T_3);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___d_first_T))
                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___watchdog_T_1);
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter_3 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter_3 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_3)
                        ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter1_3)));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_2)
                        ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter1_2)));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_1)
                        ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__param_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__denied 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_denied;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__size_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__opcode_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__source_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___c_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first_1)
                        ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__address_2 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__param_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__source_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__size_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__opcode_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_1)
                        ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                            ? 0U : (~ (0x7ffU & (((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                                                 >> 2U))))
                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__param 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__source 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__size 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__address 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__opcode 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT___T) 
         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeat_last)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__saved_corrupt 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[0U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[1U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[2U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[3U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[4U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[5U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[6U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[7U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[8U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[9U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xfU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_1[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_1[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_1[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_1[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[4U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[5U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[6U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[7U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[8U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[9U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xfU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__watchdog_1 = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__watchdog = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[0U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[1U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[2U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[3U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[4U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[4U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[5U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[5U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[6U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[6U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[7U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[7U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[8U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[8U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[9U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[9U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[0xaU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[0xaU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[0xbU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[0xbU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[0xcU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[0xcU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[0xdU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[0xdU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[0xeU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[0xeU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[0xfU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[0xfU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight[0U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_T_2[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight[1U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_T_2[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight[2U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_T_2[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight[3U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_T_2[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_1[0U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_T_5[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_1[1U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_T_5[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_1[2U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_T_5[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_1[3U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_T_5[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[4U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[4U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[5U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[5U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[6U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[6U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[7U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[7U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[8U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[8U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[9U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[9U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0xaU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0xbU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0xcU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0xdU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0xeU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0xfU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__watchdog_1 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___c_first_T) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T))
                ? 0U : vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___watchdog_T_3);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T))
                ? 0U : vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___watchdog_T_1);
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___c_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter_1 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_1)
                        ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter1_1)));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_1)
                        ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))
                            ? 0U : (~ (0x7ffU & (((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                                                 >> 2U))))
                        : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__param_3 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_param;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_3 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_3 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_3)
                        ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter1_3)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__source_3 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_2 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_2)
                        ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter1_2)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__size_3 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__address 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_1 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_1)
                        ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__opcode_3 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__param_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__denied 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_denied;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__size_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__source_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__opcode_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__address_2 
            = (0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
                           ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address)
                           : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__param 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__saved_param)
                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_param));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight = 0ULL;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[0U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[1U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[2U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[3U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[4U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[5U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[6U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[7U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[8U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[9U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xfU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_1 = 0ULL;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[4U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[5U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[6U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[7U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[8U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[9U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xfU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__watchdog_1 = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__watchdog = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_T_2;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[0U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[1U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[2U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[3U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[4U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[4U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[5U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[5U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[6U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[6U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[7U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[7U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[8U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[8U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[9U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[9U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[0xaU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[0xaU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[0xbU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[0xbU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[0xcU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[0xcU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[0xdU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[0xdU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[0xeU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[0xeU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[0xfU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[0xfU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_T_5;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[4U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[4U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[5U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[5U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[6U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[6U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[7U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[7U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[8U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[8U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[9U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[9U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[0xaU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[0xbU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[0xcU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[0xdU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[0xeU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[0xfU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__watchdog_1 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___c_first_T) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T))
                ? 0U : vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___watchdog_T_3);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T))
                ? 0U : vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___watchdog_T_1);
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_3 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_3 
            = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_3)
                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))
                             ? (~ (0xfffffU & (((IData)(0xffU) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_size)) 
                                               >> 3U)))
                             : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter1_3)));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_2 
            = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_2)
                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))
                             ? (~ (0xfffffU & (((IData)(0xffU) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_size)) 
                                               >> 3U)))
                             : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter1_2)));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1 
            = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_1)
                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))
                             ? (~ (0xfffffU & (((IData)(0xffU) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_size)) 
                                               >> 3U)))
                             : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__opcode_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__denied 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_denied;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__param_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__size_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_size;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___c_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1 
            = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_1)
                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))
                             ? (~ (0xfffffU & (((IData)(0xffU) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                                               >> 3U)))
                             : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__address_2 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__param_3 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__source_3 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__size_3 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__opcode_3 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__source_1 
            = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                        >> 1U));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1 
            = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_1)
                         ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                             ? 0U : (~ (0xfffffU & 
                                        (((IData)(0xffU) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                                         >> 3U)))) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__param 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__address 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight = 0ULL;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[0U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[1U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[2U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[3U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[4U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[5U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[6U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[7U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[8U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[9U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xfU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_1 = 0ULL;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[4U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[5U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[6U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[7U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[8U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[9U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xfU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__watchdog_1 = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__watchdog = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_T_2;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[0U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[1U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[2U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[3U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[4U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[4U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[5U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[5U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[6U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[6U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[7U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[7U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[8U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[8U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[9U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[9U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[0xaU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[0xaU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[0xbU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[0xbU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[0xcU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[0xcU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[0xdU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[0xdU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[0xeU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[0xeU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[0xfU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[0xfU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_T_5;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[4U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[4U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[5U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[5U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[6U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[6U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[7U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[7U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[8U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[8U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[9U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[9U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[0xaU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[0xbU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[0xcU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[0xdU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[0xeU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[0xfU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__watchdog_1 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T))
                ? 0U : vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___watchdog_T_3);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T))
                ? 0U : vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___watchdog_T_1);
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_3 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_3 
            = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_3)
                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))
                             ? (~ (0x1fffffU & (((IData)(0xffU) 
                                                 << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                                                >> 2U)))
                             : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter1_3)));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2 
            = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_2)
                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))
                             ? (~ (0x1fffffU & (((IData)(0xffU) 
                                                 << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                                                >> 2U)))
                             : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter1_2)));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1 
            = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_1)
                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))
                             ? (~ (0x1fffffU & (((IData)(0xffU) 
                                                 << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                                                >> 2U)))
                             : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__param_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__denied 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_denied;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__size_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__opcode_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__source_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___c_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1 
            = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_1)
                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))
                             ? (~ (0x1fffffU & (((IData)(0xffU) 
                                                 << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                                                >> 2U)))
                             : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__address_2 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__param_3 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__source_3 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__size_3 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__opcode_3 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1 
            = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_1)
                         ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                             ? 0U : (~ (0x1fffffU & 
                                        (((IData)(0xffU) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                                         >> 2U)))) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__param 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__address 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__idle 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT___GEN_13));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__counter = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT___T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__counter 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__da_first)
                        ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__da_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size
                                             [0U]) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__counter1)));
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data__v0;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT___T) 
         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_last)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[0U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[1U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[2U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[3U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[4U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[5U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[6U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[7U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[7U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_1 = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[0U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[1U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[2U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[3U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[4U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[5U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[6U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[7U] 
            = VysyxSoCFull__ConstPool__CONST_9e67c271_0[7U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__watchdog_1 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__watchdog = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[0U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[1U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[2U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[3U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[4U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[5U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[6U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[7U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[7U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_T_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_T_5;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[0U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[1U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[2U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[3U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[4U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[5U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[6U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[7U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[7U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__watchdog_1 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T))
                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___watchdog_T_3);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__watchdog 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T))
                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___watchdog_T_1);
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_3 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_3 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_3)
                        ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter1_3)));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_2)
                        ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter1_2)));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_1)
                        ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__param_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__denied 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_denied;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__size_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__opcode_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_1)
                        ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (7U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3))) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__address_2 
            = (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1);
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__param_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full 
        = ((~ (IData)(vlSelf->reset)) & ((~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_d_ready) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid)) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_last))) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT___GEN_0)));
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__size_3 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__opcode_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_1)
                        ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                            ? 0U : (~ (0x7ffU & (((IData)(0x3fU) 
                                                  << 
                                                  (7U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3))) 
                                                 >> 2U))))
                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__param 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__size 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__address 
            = (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1);
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__opcode 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data__v0;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT___T) 
         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_last)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight = 0ULL;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[0U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[1U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[2U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[3U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[4U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[5U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[6U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[7U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[8U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[9U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xfU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_1 = 0ULL;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[0U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[1U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[2U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[3U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[4U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[5U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[6U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[7U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[8U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[9U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xfU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__watchdog_1 = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__watchdog = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_T_2;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[0U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[1U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[2U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[3U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[4U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[4U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[5U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[5U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[6U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[6U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[7U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[7U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[8U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[8U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[9U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[9U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[0xaU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[0xaU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[0xbU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[0xbU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[0xcU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[0xcU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[0xdU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[0xdU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[0xeU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[0xeU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[0xfU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[0xfU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_T_5;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[0U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[1U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[2U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[3U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[4U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[4U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[5U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[5U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[6U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[6U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[7U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[7U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[8U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[8U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[9U] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[9U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[0xaU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[0xaU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[0xbU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[0xbU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[0xcU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[0xcU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[0xdU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[0xdU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[0xeU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[0xeU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[0xfU] 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[0xfU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__watchdog_1 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T))
                ? 0U : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___watchdog_T_3);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__watchdog 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T))
                ? 0U : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___watchdog_T_1);
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_3 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_3 
            = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_3)
                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))
                             ? (~ (0x1fffffU & (((IData)(0xffU) 
                                                 << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                                                >> 2U)))
                             : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter1_3)));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2 
            = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_2)
                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))
                             ? (~ (0x1fffffU & (((IData)(0xffU) 
                                                 << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                                                >> 2U)))
                             : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter1_2)));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1 
            = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_1)
                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))
                             ? (~ (0x1fffffU & (((IData)(0xffU) 
                                                 << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                                                >> 2U)))
                             : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__param_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__denied 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_denied;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__size_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__opcode_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1 
            = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_1)
                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))
                             ? (~ (0x1fffffU & (((IData)(0xffU) 
                                                 << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_bits_size)) 
                                                >> 2U)))
                             : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__address_2 
            = (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1);
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__param_3 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_3 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__size_3 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__opcode_3 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_bits_opcode;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full 
        = ((~ (IData)(vlSelf->reset)) & ((~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_d_ready) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid)) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_last))) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT___GEN_0)));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1 
            = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_1)
                         ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                             ? 0U : (~ (0x1fffffU & 
                                        (((IData)(0xffU) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size)) 
                                         >> 2U)))) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter1_1)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__param 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__address 
            = (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1);
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT__ram_real_last__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT__ram_real_last[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT__ram_real_last__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT__ram_real_last__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT__ram_extra_id__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT__ram_extra_id[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT__ram_extra_id__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT__ram_extra_id__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT__ram_real_last__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT__ram_real_last[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT__ram_real_last__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT__ram_real_last__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT__ram_extra_id__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT__ram_extra_id[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT__ram_extra_id__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT__ram_extra_id__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__ram_extra_id__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__ram_extra_id[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__ram_extra_id__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__ram_extra_id__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__ram_extra_id__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__ram_extra_id[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__ram_extra_id__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__ram_extra_id__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__ram_real_last__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__ram_real_last[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__ram_real_last__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__ram_real_last__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__ram_real_last__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__ram_real_last[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__ram_real_last__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__ram_real_last__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__ram_last__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__ram_last[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__ram_last__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__ram_strb__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__ram_strb[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__ram_strb__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__ram_data__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__ram_data[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__ram_data__v0;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq__DOT__maybe_full = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq__DOT__do_deq) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq__DOT__maybe_full = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__ram_extra_id__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__ram_extra_id[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__ram_extra_id__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__ram_extra_id__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_extra_id__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_extra_id[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_extra_id__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_extra_id__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__ram_real_last__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__ram_real_last[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__ram_real_last__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__ram_real_last__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_real_last__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_real_last[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_real_last__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_real_last__v0;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_wdeq__DOT__do_deq) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__w_counter 
        = ((IData)(vlSelf->reset) ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wcounter_T_2));
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_extra_id__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_extra_id[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_extra_id__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_extra_id__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_extra_id__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_extra_id[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_extra_id__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_extra_id__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_real_last__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_real_last[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_real_last__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_real_last__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_real_last__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_real_last[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_real_last__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_real_last__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_burst__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_burst[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_burst__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_size__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_size[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_size__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_burst__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_burst[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_burst__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_size__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_size[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_size__v0;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_counter 
        = ((IData)(vlSelf->reset) ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wcounter_T_2));
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_len__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_len[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_len__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_len__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_len[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_len__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_echo_extra_id__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_echo_extra_id[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_echo_extra_id__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_id__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_id[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_id__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_addr__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_addr[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_addr__v0;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__enq_ptr_value 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__enq_ptr_value;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__deq_ptr_value 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__deq_ptr_value;
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_echo_extra_id__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_echo_extra_id[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_echo_extra_id__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_id__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_id[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_id__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_addr__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_addr[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_addr__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__SRAM0__DOT__ram__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__SRAM0__DOT__ram[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__SRAM0__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__SRAM0__DOT__ram__v0[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__SRAM0__DOT__ram[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__SRAM0__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__SRAM0__DOT__ram__v0[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__SRAM0__DOT__ram[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__SRAM0__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__SRAM0__DOT__ram__v0[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__SRAM0__DOT__ram[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__SRAM0__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__SRAM0__DOT__ram__v0[3U];
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_12_count_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_13_count_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_14_count_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_count_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_6_count_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_7_count_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_8_count_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_9_count_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_10_count_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_11_count_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_count_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_1_count_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_2_count_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_3_count_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_4_count_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_5_count_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_12_count_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_13_count_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_14_count_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_count_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_6_count_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_7_count_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_8_count_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_9_count_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_10_count_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_11_count_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_count_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_1_count_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_2_count_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_3_count_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_4_count_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_5_count_T_3;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_Csr_stage__DOT__interrupt_tag 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_Csr_stage__DOT__interrupt_tag;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_Csr_stage__DOT__cycle 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_Csr_stage__DOT__cycle;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_Csr_stage__DOT__mcause 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_Csr_stage__DOT__mcause;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_Csr_stage__DOT__mscratch 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_Csr_stage__DOT__mscratch;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idex_csr_waddr 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idex_csr_waddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_Csr_stage__DOT__mtvec 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_Csr_stage__DOT__mtvec;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_Csr_stage__DOT__mepc 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_Csr_stage__DOT__mepc;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_Csr_stage__DOT__mie 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_Csr_stage__DOT__mie;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_Csr_stage__DOT__mstatus 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_Csr_stage__DOT__mstatus;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst;
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_regfile1__DOT__regs__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_regfile1__DOT__regs[0U] = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_regfile1__DOT__regs[1U] = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_regfile1__DOT__regs[2U] = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_regfile1__DOT__regs[3U] = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_regfile1__DOT__regs[4U] = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_regfile1__DOT__regs[5U] = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_regfile1__DOT__regs[6U] = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_regfile1__DOT__regs[7U] = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_regfile1__DOT__regs[8U] = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_regfile1__DOT__regs[9U] = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_regfile1__DOT__regs[0xaU] = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_regfile1__DOT__regs[0xbU] = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_regfile1__DOT__regs[0xcU] = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_regfile1__DOT__regs[0xdU] = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_regfile1__DOT__regs[0xeU] = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_regfile1__DOT__regs[0xfU] = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_regfile1__DOT__regs[0x10U] = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_regfile1__DOT__regs[0x11U] = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_regfile1__DOT__regs[0x12U] = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_regfile1__DOT__regs[0x13U] = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_regfile1__DOT__regs[0x14U] = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_regfile1__DOT__regs[0x15U] = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_regfile1__DOT__regs[0x16U] = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_regfile1__DOT__regs[0x17U] = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_regfile1__DOT__regs[0x18U] = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_regfile1__DOT__regs[0x19U] = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_regfile1__DOT__regs[0x1aU] = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_regfile1__DOT__regs[0x1bU] = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_regfile1__DOT__regs[0x1cU] = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_regfile1__DOT__regs[0x1dU] = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_regfile1__DOT__regs[0x1eU] = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_regfile1__DOT__regs[0x1fU] = 0ULL;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_regfile1__DOT__regs__v32) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_regfile1__DOT__regs[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_regfile1__DOT__regs__v32] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_regfile1__DOT__regs__v32;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_cache0__DOT__regs__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_cache0__DOT__regs[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_cache0__DOT__regs__v64) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_cache0__DOT__regs[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_cache0__DOT__regs__v64] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_cache0__DOT__regs__v64;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_mem_we_en 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_mem_we_en;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_Clint__DOT__mtime 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_Clint__DOT__mtime;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__counter1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__counter) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__counter1 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__counter1_2 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__counter_2) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__c_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__counter_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__counter1_2 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__counter_2) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__c_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__counter_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_last_counter1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_last_counter) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_last_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_last_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_last_counter1 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_last_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_last_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_last_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__full 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__value)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__full 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__value)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last_counter1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last_counter) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last_counter1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last_counter) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___T_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___T_2 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___T_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___T_2 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_13__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_13__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_13__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_13__DOT__maybe_full 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_13__DOT__do_enq;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_14__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_14__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_14__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_14__DOT__maybe_full 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_14__DOT__do_enq;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_15__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_15__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_15__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_15__DOT__maybe_full 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_15__DOT__do_enq;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_7__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_7__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_7__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_7__DOT__maybe_full 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_7__DOT__do_enq;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_8__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_8__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_8__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_8__DOT__maybe_full 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_8__DOT__do_enq;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_9__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_9__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_9__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_9__DOT__maybe_full 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_9__DOT__do_enq;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_10__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_10__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_10__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_10__DOT__maybe_full 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_10__DOT__do_enq;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_11__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_11__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_11__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_11__DOT__maybe_full 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_11__DOT__do_enq;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_12__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_12__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_12__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_12__DOT__maybe_full 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_12__DOT__do_enq;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__wrap_1 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__deq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__wrap_1 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__deq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__wrap_1 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__deq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__wrap_1 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__deq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__wrap_1 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__deq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__wrap_1 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__deq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__wrap_1 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__deq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___bcount_0_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__b_count_0)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___bcount_1_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__b_count_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter1_1 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_1) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__counter1_3 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__counter_3) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__d_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__counter_3));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__counter1_3 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__counter_3) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__d_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__counter_3));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___T_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___T_2 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___T_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__state));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___T_2 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__full 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__state) 
                 >> 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___state_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__state)));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__last = 0U;
    } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_opcode))) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___T_3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__last 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___T_1));
        }
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__full 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__state) 
                 >> 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___state_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__state)));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__last = 0U;
    } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_opcode))) {
        if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___T_3) {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__last 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___T_1));
        }
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_3 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_3 
            = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_3)
                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))
                             ? (~ (0x1fffffU & (((IData)(0xffU) 
                                                 << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                                                >> 2U)))
                             : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter1_3)));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_3 = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_3 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_3)
                        ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter1_3)));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__enq_ptr_value = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__enq_ptr_value 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__wrap)
                ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT___value_T_1));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__enq_ptr_value = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__enq_ptr_value 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__wrap)
                ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT___value_T_1));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__enq_ptr_value = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__enq_ptr_value 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__wrap)
                ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT___value_T_1));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__enq_ptr_value = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__enq_ptr_value 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__wrap)
                ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT___value_T_1));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__enq_ptr_value = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__enq_ptr_value 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__wrap)
                ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT___value_T_1));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__enq_ptr_value = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__enq_ptr_value 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__wrap)
                ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT___value_T_1));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__enq_ptr_value = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__enq_ptr_value 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__wrap)
                ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT___value_T_1));
    }
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__value_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__extract__DOT___GEN_2 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__extract__DOT__state))
            ? 8U : (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__extract__DOT__state) 
                            - (IData)(1U))));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__q_last_count = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT___q_last_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__q_last_count 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__q_last_first)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__q_last_beats_a)
                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT___q_last_count_T_1));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__extract__DOT___GEN_2 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__extract__DOT__state))
            ? 8U : (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__extract__DOT__state) 
                            - (IData)(1U))));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__q_last_count = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT___q_last_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__q_last_count 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__q_last_first)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__q_last_beats_a)
                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT___q_last_count_T_1));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__d_first_counter1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__d_first_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__d_first_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__d_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__d_first_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__d_first_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__d_first_counter));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__state = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT___q_last_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__state 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT___T_4)
                ? 1U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT___T_5)
                         ? 2U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT___GEN_11)));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__state = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT___q_last_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__state 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT___T_4)
                ? 1U : ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT___T_5)
                         ? 2U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT___GEN_11)));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_first 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_260));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__maybe_full 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__empty)
                ? ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_ready)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT___do_enq_T))
                : (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT___do_enq_T));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__maybe_full 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__empty)
                ? ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_ready)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT___do_enq_T))
                : (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT___do_enq_T));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__empty)
                ? ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_ready)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT___do_enq_T))
                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT___do_enq_T));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_last_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_last_count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___q_last_count_T_1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_last_count) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_last_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_last_count));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___q_last_count_T_1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_last_count) 
                    - (IData)(1U)));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free = 0xffU;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free = 0xffU;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free 
            = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_T_2));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free 
            = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_T_2));
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___q_last_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__c_first 
            = (3U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__state));
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___q_last_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__c_first 
            = (3U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__state));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_76));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___bcount_0_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__b_count_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___bcount_1_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__b_count_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__value_1));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__maybe_full 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__empty)
                ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__full) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT___do_enq_T))
                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT___do_enq_T));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__empty)
                ? ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_ready)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT___do_enq_T))
                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT___do_enq_T));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__d_last_counter = 0U;
    } else if ((((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))
                  ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__deq__DOT__maybe_full))
                  : (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT__maybe_full))) 
                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_in_d_valid))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__d_last_counter 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__d_last_first)
                      ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__d_last_counter1)));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__d_last_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__d_last_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__d_last_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__d_last_counter));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__maybe_full 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__empty)
                ? ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__allowed___05F0)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT___do_enq_T))
                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT___do_enq_T));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__maybe_full 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__empty)
                ? ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_ready)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT___do_enq_T))
                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT___do_enq_T));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state 
        = ((IData)(vlSelf->reset) ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT___T)
                                           ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_1_arvalid)
                                               ? 1U
                                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_1_awvalid)
                                                   ? 3U
                                                   : 0U))
                                           : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT___T_1)
                                               ? 2U
                                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT___T_2)
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT___GEN_0)
                                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT___GEN_6)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__wrap_1 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__deq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__wrap_1 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__deq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__wrap_1 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__deq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__wrap_1 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__deq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__wrap_1 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__deq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__wrap_1 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__deq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__wrap_1 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__deq_ptr_value)));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_29__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_29__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_29__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_29__DOT__maybe_full 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_29__DOT__do_enq;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_30__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_30__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_30__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_30__DOT__maybe_full 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_30__DOT__do_enq;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_31__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_31__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_31__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_31__DOT__maybe_full 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_31__DOT__do_enq;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_23__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_23__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_23__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_23__DOT__maybe_full 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_23__DOT__do_enq;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_24__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_24__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_24__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_24__DOT__maybe_full 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_24__DOT__do_enq;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_25__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_25__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_25__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_25__DOT__maybe_full 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_25__DOT__do_enq;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_26__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_26__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_26__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_26__DOT__maybe_full 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_26__DOT__do_enq;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_27__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_27__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_27__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_27__DOT__maybe_full 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_27__DOT__do_enq;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_28__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_28__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_28__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_28__DOT__maybe_full 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_28__DOT__do_enq;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__enq_ptr_value = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__enq_ptr_value 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__wrap)
                ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT___value_T_1));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__enq_ptr_value = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__enq_ptr_value 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__wrap)
                ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT___value_T_1));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__enq_ptr_value = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__enq_ptr_value 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__wrap)
                ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT___value_T_1));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__enq_ptr_value = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__enq_ptr_value 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__wrap)
                ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT___value_T_1));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__enq_ptr_value = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__enq_ptr_value 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__wrap)
                ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT___value_T_1));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__enq_ptr_value = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__enq_ptr_value 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__wrap)
                ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT___value_T_1));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__enq_ptr_value = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__enq_ptr_value 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__wrap)
                ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT___value_T_1));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__beatsLeft 
        = ((IData)(vlSelf->reset) ? 0U : (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__latch)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__earlyWinner_1)
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode))
                                                   ? 
                                                  (~ 
                                                   (0x3ffU 
                                                    & (((IData)(0x3fU) 
                                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_size)) 
                                                       >> 3U)))
                                                   : 0U)
                                                  : 0U)
                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___beatsLeft_T_4))));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__maybe_full 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__empty)
                ? ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_ready)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT___do_enq_T))
                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT___do_enq_T));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__counter = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__counter 
            = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__a_first)
                         ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                             ? 0U : (~ (0xfffffU & 
                                        (((IData)(0xffU) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                                         >> 3U)))) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__counter1)));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__dc_bits_param 
        = ((2U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_param
                   [0U])) ? 2U : ((1U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_param
                                          [0U])) ? 2U
                                   : 1U));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free = 0xffffffffU;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__beatsLeft = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free 
            = (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_T_1);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__beatsLeft 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__latch)
                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__earlyWinner_1)
                            ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_bits_opcode))
                                ? (~ (0x7ffU & (((IData)(0x3fU) 
                                                 << 
                                                 vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_size
                                                 [0U]) 
                                                >> 2U)))
                                : 0U) : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___beatsLeft_T_4)));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_last_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_last_count));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___q_last_count_T_1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_last_count) 
                    - (IData)(1U)));
    if (vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT___T_1) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__w_sel1 
            = (0ULL == (0x180000000ULL & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ram_addr_io_deq_bits_MPORT_data)))));
    }
    if (vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT___T_1) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__w_id 
            = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ram_id
            [vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__value_1];
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c_last_counter1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c_last_counter) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c_last_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c_last_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c_last 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c_last_counter)) 
           | (0U == ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_opcode
                      [0U]) ? (0xfU & (~ (0x7ffU & 
                                          (((IData)(0x3fU) 
                                            << vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_size
                                            [0U]) >> 2U))))
                      : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp
        [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value_1];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id
        [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value_1];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___bdelay_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__b_delay)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a_last_counter1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a_last_counter) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a_last_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a_last_counter));
    if (vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT___T_14) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__r_echo_real_last 
            = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__ram_echo_real_last
            [vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__value_1];
    }
    if (vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__rdata_REG) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__rdata_r0 
            = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext_R0_data));
    }
    if (vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__rdata_REG) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__rdata_r1 
            = (0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext_R0_data 
                                >> 8U)));
    }
    if (vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__rdata_REG) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__rdata_r2 
            = (0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext_R0_data 
                                >> 0x10U)));
    }
    if (vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__rdata_REG) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__rdata_r3 
            = (0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext_R0_data 
                                >> 0x18U)));
    }
    if (vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__rdata_REG) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__rdata_r4 
            = (0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext_R0_data 
                                >> 0x20U)));
    }
    if (vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__rdata_REG) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__rdata_r5 
            = (0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext_R0_data 
                                >> 0x28U)));
    }
    if (vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__rdata_REG) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__rdata_r6 
            = (0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext_R0_data 
                                >> 0x30U)));
    }
    if (vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__rdata_REG) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__rdata_r7 
            = (0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext_R0_data 
                                >> 0x38U)));
    }
    if (vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT___T_14) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__r_sel1 
            = (0ULL == (0x180000000ULL & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__ram_addr_io_deq_bits_MPORT_data)))));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__beatsLeft 
        = ((IData)(vlSelf->reset) ? 0U : (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__latch)
                                                    ? 
                                                   ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__earlyWinner_0)
                                                       ? 
                                                      (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__r_wins)
                                                         ? 1U
                                                         : 0U)
                                                        ? 
                                                       (7U 
                                                        & (~ 
                                                           (0x3ffffU 
                                                            & (((IData)(0x3fU) 
                                                                << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_in_d_bits_size)) 
                                                               >> 3U))))
                                                        : 0U)
                                                       : 0U) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__earlyWinner_1)
                                                         ? 
                                                        (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                                           ? 1U
                                                           : 0U)
                                                          ? 
                                                         (~ 
                                                          (0xfffffU 
                                                           & (((IData)(0xffU) 
                                                               << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_in_d_bits_size)) 
                                                              >> 3U)))
                                                          : 0U)
                                                         : 0U)) 
                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__earlyWinner_2)
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err_auto_in_d_bits_opcode))
                                                         ? 
                                                        (7U 
                                                         & (~ 
                                                            (0x3ffffU 
                                                             & (((IData)(0x3fU) 
                                                                 << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err_auto_in_d_bits_size)) 
                                                                >> 3U))))
                                                         : 0U)
                                                        : 0U))
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___beatsLeft_T_4))));
    if (vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT___T_14) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__r_id 
            = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__ram_id
            [vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__value_1];
    }
    vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__r_full 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT___GEN_41));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free 
        = ((IData)(vlSelf->reset) ? 0xffffffffU : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_repeat_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_repeat_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_repeat_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_repeat_counter));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___q_last_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__d_first 
            = (2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__state));
    }
    if (vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT___T_1) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__w_echo_real_last 
            = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ram_echo_real_last
            [vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__value_1];
    }
    vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__w_full 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT___GEN_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_repeat_counter1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_repeat_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_repeat_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_repeat_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__logic_out_lo_hi_lo 
        = ((0x80U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                      >> ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                          >> 0x17U)) 
                                 << 1U)) | (1U & (IData)(
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                          >> 0x17U))))) 
                     << 7U)) | ((0x40U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                           >> ((2U 
                                                & ((IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                            >> 0x16U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x16U))))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                            >> ((2U 
                                                 & ((IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                             >> 0x15U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 0x15U))))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x14U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x14U))))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x13U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x13U))))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x12U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x12U))))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                >> 
                                                ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                              >> 0x11U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                               >> 0x11U))))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                   >> 
                                                   ((2U 
                                                     & ((IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                 >> 0x10U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                  >> 0x10U)))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__logic_out_hi_hi_lo 
        = ((0x80U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                      >> ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                          >> 0x37U)) 
                                 << 1U)) | (1U & (IData)(
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                          >> 0x37U))))) 
                     << 7U)) | ((0x40U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                           >> ((2U 
                                                & ((IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                            >> 0x36U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x36U))))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                            >> ((2U 
                                                 & ((IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                             >> 0x35U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 0x35U))))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x34U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x34U))))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x33U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x33U))))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x32U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x32U))))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                >> 
                                                ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                              >> 0x31U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                               >> 0x31U))))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                   >> 
                                                   ((2U 
                                                     & ((IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                 >> 0x30U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                  >> 0x30U)))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__logic_out_lo_lo_lo 
        = ((0x80U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                      >> ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                          >> 7U)) << 1U)) 
                          | (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                           >> 7U))))) 
                     << 7U)) | ((0x40U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                           >> ((2U 
                                                & ((IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                            >> 6U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 6U))))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                            >> ((2U 
                                                 & ((IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                             >> 5U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 5U))))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 4U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 4U))))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 3U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 3U))))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 2U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 2U))))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                >> 
                                                ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                              >> 1U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                               >> 1U))))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                   >> 
                                                   ((2U 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__logic_out_hi_lo_lo 
        = ((0x80U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                      >> ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                          >> 0x27U)) 
                                 << 1U)) | (1U & (IData)(
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                          >> 0x27U))))) 
                     << 7U)) | ((0x40U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                           >> ((2U 
                                                & ((IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                            >> 0x26U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x26U))))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                            >> ((2U 
                                                 & ((IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                             >> 0x25U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 0x25U))))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x24U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x24U))))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x23U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x23U))))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x22U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x22U))))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                >> 
                                                ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                              >> 0x21U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                               >> 0x21U))))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                   >> 
                                                   ((2U 
                                                     & ((IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                 >> 0x20U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                  >> 0x20U)))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__wide_mask 
        = (((QData)((IData)(((((0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_mask))
                                ? 0xffU : 0U) << 0x18U) 
                             | ((((0x40U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_mask))
                                   ? 0xffU : 0U) << 0x10U) 
                                | ((((0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_mask))
                                      ? 0xffU : 0U) 
                                    << 8U) | ((0x10U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_mask))
                                               ? 0xffU
                                               : 0U)))))) 
            << 0x20U) | (QData)((IData)(((((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_mask))
                                            ? 0xffU
                                            : 0U) << 0x18U) 
                                         | ((((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_mask))
                                               ? 0xffU
                                               : 0U) 
                                             << 0x10U) 
                                            | ((((2U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_mask))
                                                  ? 0xffU
                                                  : 0U) 
                                                << 8U) 
                                               | ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_mask))
                                                   ? 0xffU
                                                   : 0U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signSel_T_2 
        = (0xffU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_mask)) 
                    | (0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_mask) 
                                >> 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_last_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_last_count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___q_last_count_T_1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_last_count) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp
        [vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value_1];
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_echo_real_last
        [vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value_1];
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value_1));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__beatsLeft 
        = ((IData)(vlSelf->reset) ? 0U : (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__latch)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__earlyWinner_1)
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))
                                                   ? 0U
                                                   : 
                                                  (~ 
                                                   (0x3ffU 
                                                    & (((IData)(0x3fU) 
                                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                                                       >> 3U))))
                                                  : 0U)
                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___beatsLeft_T_4))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_first_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__logic_out_lo_hi_lo 
        = ((0x80U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                      >> ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                          >> 0x17U)) 
                                 << 1U)) | (1U & (IData)(
                                                         (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                          >> 0x17U))))) 
                     << 7U)) | ((0x40U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                           >> ((2U 
                                                & ((IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                            >> 0x16U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x16U))))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                            >> ((2U 
                                                 & ((IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                             >> 0x15U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 0x15U))))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x14U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x14U))))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x13U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x13U))))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x12U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x12U))))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                >> 
                                                ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                              >> 0x11U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                               >> 0x11U))))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                   >> 
                                                   ((2U 
                                                     & ((IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                 >> 0x10U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                  >> 0x10U)))))))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__logic_out_hi_hi_lo 
        = ((0x80U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                      >> ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                          >> 0x37U)) 
                                 << 1U)) | (1U & (IData)(
                                                         (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                          >> 0x37U))))) 
                     << 7U)) | ((0x40U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                           >> ((2U 
                                                & ((IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                            >> 0x36U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x36U))))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                            >> ((2U 
                                                 & ((IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                             >> 0x35U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 0x35U))))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x34U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x34U))))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x33U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x33U))))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x32U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x32U))))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                >> 
                                                ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                              >> 0x31U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                               >> 0x31U))))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                   >> 
                                                   ((2U 
                                                     & ((IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                 >> 0x30U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                  >> 0x30U)))))))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__logic_out_lo_lo_lo 
        = ((0x80U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                      >> ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                          >> 7U)) << 1U)) 
                          | (1U & (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                           >> 7U))))) 
                     << 7U)) | ((0x40U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                           >> ((2U 
                                                & ((IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                            >> 6U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 6U))))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                            >> ((2U 
                                                 & ((IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                             >> 5U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 5U))))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 4U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 4U))))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 3U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 3U))))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 2U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 2U))))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                >> 
                                                ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                              >> 1U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                               >> 1U))))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                   >> 
                                                   ((2U 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data))))))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__logic_out_hi_lo_lo 
        = ((0x80U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                      >> ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                          >> 0x27U)) 
                                 << 1U)) | (1U & (IData)(
                                                         (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                          >> 0x27U))))) 
                     << 7U)) | ((0x40U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                           >> ((2U 
                                                & ((IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                            >> 0x26U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x26U))))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                            >> ((2U 
                                                 & ((IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                             >> 0x25U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 0x25U))))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x24U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x24U))))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x23U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x23U))))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x22U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x22U))))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                >> 
                                                ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                              >> 0x21U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                               >> 0x21U))))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                   >> 
                                                   ((2U 
                                                     & ((IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                 >> 0x20U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                  >> 0x20U)))))))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__wide_mask 
        = (((QData)((IData)(((((0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_mask))
                                ? 0xffU : 0U) << 0x18U) 
                             | ((((0x40U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_mask))
                                   ? 0xffU : 0U) << 0x10U) 
                                | ((((0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_mask))
                                      ? 0xffU : 0U) 
                                    << 8U) | ((0x10U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_mask))
                                               ? 0xffU
                                               : 0U)))))) 
            << 0x20U) | (QData)((IData)(((((8U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_mask))
                                            ? 0xffU
                                            : 0U) << 0x18U) 
                                         | ((((4U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_mask))
                                               ? 0xffU
                                               : 0U) 
                                             << 0x10U) 
                                            | ((((2U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_mask))
                                                  ? 0xffU
                                                  : 0U) 
                                                << 8U) 
                                               | ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_mask))
                                                   ? 0xffU
                                                   : 0U)))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signSel_T_2 
        = (0xffU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_mask)) 
                    | (0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_mask) 
                                >> 1U))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___q_last_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__d_first 
            = (2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__state));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_2 
        = (IData)((0U == (6U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_3 
        = (IData)((2U == (6U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_4 
        = (IData)((4U == (6U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_5 
        = (IData)((6U == (6U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc 
        = (1U & ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_size))) 
                           >> 2U) & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address 
                                        >> 2U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc_1 
        = (1U & ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_size))) 
                           >> 2U) & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address 
                                     >> 2U)))));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__beatsLeft = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_s_0_state = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__beatsLeft 
            = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__latch)
                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__earlyWinner_1)
                             ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))
                                 ? 0U : (~ (0xfffffU 
                                            & (((IData)(0xffU) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                                               >> 3U))))
                             : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___beatsLeft_T_4)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_s_0_state 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___d_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_first_counter)))
                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_cam_sel_match_0)
                    ? ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_opcode))
                        ? 2U : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___GEN_25))
                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___GEN_25));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_first_counter1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_first_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_eq_2 
        = (IData)((0U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_eq_3 
        = (IData)((2U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_eq_4 
        = (IData)((4U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_eq_5 
        = (IData)((6U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_acc 
        = (1U & ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_size))) 
                           >> 2U) & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address 
                                        >> 2U))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_acc_1 
        = (1U & ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_size))) 
                           >> 2U) & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address 
                                     >> 2U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state 
        = ((IData)(vlSelf->reset) ? 0U : (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___d_first_T) 
                                           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_first_counter)))
                                           ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_cam_sel_match_0)
                                               ? ((1U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_opcode))
                                                   ? 2U
                                                   : 0U)
                                               : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___GEN_25))
                                           : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___GEN_25)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__stall_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__stall_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__stall_counter1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__stall_counter) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__stall_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__stall_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__stall_counter1 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__stall_counter) 
                    - (IData)(1U)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT___T) {
        if ((0x3fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_63 
                = (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                         >> 2U));
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT___T) {
        if ((0x3eU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_62 
                = (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                         >> 2U));
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT___T) {
        if ((0x3dU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_61 
                = (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                         >> 2U));
        }
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__dc_bits_param 
        = ((2U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_param
                   [0U])) ? 2U : ((1U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_param
                                          [0U])) ? 2U
                                   : 1U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__beatsLeft 
        = ((IData)(vlSelf->reset) ? 0U : (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__latch)
                                                   ? 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__earlyWinner_1)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__da_bits_opcode))
                                                     ? 
                                                    (~ 
                                                     (0x7ffU 
                                                      & (((IData)(0x3fU) 
                                                          << 
                                                          vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size
                                                          [0U]) 
                                                         >> 2U)))
                                                     : 0U)
                                                    : 0U)
                                                   : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT___beatsLeft_T_4))));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT___T) {
        if ((0x3fU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source))) {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_63 
                = (1U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                         >> 2U));
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT___T) {
        if ((0x3eU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source))) {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_62 
                = (1U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                         >> 2U));
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT___T) {
        if ((0x3dU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source))) {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_61 
                = (1U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                         >> 2U));
        }
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_io_bypass;
    } else if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__next_flight))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_io_bypass;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c_last_counter1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c_last_counter) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c_last_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c_last_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c_last 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c_last_counter)) 
           | (0U == ((1U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_opcode
                      [0U]) ? (0xfU & (~ (0x7ffU & 
                                          (((IData)(0x3fU) 
                                            << vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_size
                                            [0U]) >> 2U))))
                      : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a_last_counter1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a_last_counter) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a_last_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a_last_counter));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_io_bypass;
    } else if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__next_flight))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_io_bypass;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT___GEN_2 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__state))
            ? 8U : (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__state) 
                            - (IData)(1U))));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_last_count = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___q_last_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_last_count 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_last_first)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_last_beats_a)
                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___q_last_count_T_1));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free = 0xffU;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free = 0xffU;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free = 0xffU;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free 
            = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_T_2));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free 
            = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_T_2));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free 
            = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_T_2));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT___GEN_2 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__state))
            ? 8U : (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__state) 
                            - (IData)(1U))));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_last_count = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___q_last_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_last_count 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_last_first)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_last_beats_a)
                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___q_last_count_T_1));
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___q_last_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__a_first 
            = (3U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__state));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free = 0xffU;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free = 0xffU;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free = 0xffU;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free = 0xffU;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free = 0xffU;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free = 0xffU;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free = 0xffU;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free = 0xffU;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__beatsLeft = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free 
            = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_T_2));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free 
            = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_T_2));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free 
            = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_T_2));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free 
            = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_T_2));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free 
            = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_T_2));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free 
            = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_T_2));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free 
            = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_T_2));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free 
            = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_T_2));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__beatsLeft 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__latch)
                ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__earlyWinner_1)
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag_auto_out_awlen)
                    : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___beatsLeft_T_4));
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___q_last_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__a_first 
            = (3U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__state));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free = 0xffU;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free = 0xffU;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free = 0xffU;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free = 0xffU;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free = 0xffU;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__beatsLeft = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free 
            = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_T_2));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free 
            = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_T_2));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free 
            = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_T_2));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free 
            = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_T_2));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free 
            = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_T_2));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__beatsLeft 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__latch)
                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__earlyWinner_1)
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_awlen)
                    : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___beatsLeft_T_4));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rcount_1_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_count_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rcount_0_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_count_0)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wcount_0_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_count_0)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wcount_1_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_count_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rcount_1_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_count_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rcount_0_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_count_0)));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT__enq_ptr_value = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT___do_enq_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT__enq_ptr_value 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT___value_T_1;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT__enq_ptr_value = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT___do_enq_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT__enq_ptr_value 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT___value_T_1;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wcount_0_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_count_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wcount_1_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_count_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__deq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__deq_ptr_value)));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__enq_ptr_value = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__enq_ptr_value 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT___value_T_1;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__enq_ptr_value = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__enq_ptr_value 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT___value_T_1;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__empty)
                ? ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_io_deq_ready)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT___do_enq_T))
                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT___do_enq_T));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__deq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__deq_ptr_value)));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__enq_ptr_value = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__enq_ptr_value 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT___value_T_1;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__enq_ptr_value = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__enq_ptr_value 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT___value_T_1;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1__DOT__maybe_full = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1__DOT__do_deq) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1__DOT__maybe_full = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__deq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__deq_ptr_value)));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__enq_ptr_value = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__enq_ptr_value 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT___value_T_1;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__enq_ptr_value = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__enq_ptr_value 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT___value_T_1;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__maybe_full 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__empty)
                ? ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_ready)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT___do_enq_T))
                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT___do_enq_T));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__enq_ptr_value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__deq_ptr_value));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__maybe_full 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__empty)
                ? ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_ready)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT___do_enq_T))
                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT___do_enq_T));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_exe_stage__DOT__srlw_data 
        = VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_data1_i), 
                         (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_data2_i)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_exe_stage__DOT__sraw_data 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_data1_i) 
           >> (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_data2_i)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_exe_stage__DOT__addw_data 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idex_op1_imm) 
           + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idex_op2_imm));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_exe_stage__DOT__subw_data 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idex_op1_imm) 
           - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idex_op2_imm));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_exe_stage__DOT__sllw_data 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idex_op1_imm) 
           << (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idex_op2_imm)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_exe_stage__DOT__addiw_data 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idex_op1_imm) 
           + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idex_op2_imm));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_exe_stage__DOT__op1_add_op2_res 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idex_op1_imm 
           + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idex_op2_imm);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_exe_stage__DOT__op1_eq_op2 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idex_op1_imm 
           == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idex_op2_imm);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_exe_stage__DOT__op1_ge_op2_signed 
        = VL_GTES_IQQ(1,64,64, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idex_op1_imm, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idex_op2_imm);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_exe_stage__DOT__op1_ge_op2_unsigned 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idex_op1_imm 
           >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idex_op2_imm);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_exe_stage__DOT__op1_jump_add_op2_jump_res 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idex_op1_jump 
           + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idex_op2_jump);
    if ((0x40U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)) {
        if ((0x20U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)) {
            if ((0x10U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)) {
                if ((8U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_exe_stage__DOT__mem_we = 0U;
                } else if ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_exe_stage__DOT__mem_we = 0U;
                } else if ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)) {
                    if ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_exe_stage__DOT__mem_we = 0U;
                        if ((0x4000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)) {
                            if ((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst 
                                          >> 0xdU)))) {
                                if ((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst 
                                              >> 0xcU)))) {
                                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_exe_stage__DOT__mem_we = 0U;
                                }
                            }
                        } else if ((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst 
                                             >> 0xdU)))) {
                            if ((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst 
                                          >> 0xcU)))) {
                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_exe_stage__DOT__mem_we = 0U;
                            }
                        }
                    } else {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_exe_stage__DOT__mem_we = 0U;
                    }
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_exe_stage__DOT__mem_we = 0U;
                }
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_exe_stage__DOT__mem_we = 0U;
            }
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_exe_stage__DOT__mem_we = 0U;
        }
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_exe_stage__DOT__mem_we 
            = (IData)((0x23U == (0x403fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)));
    }
    if ((0x40U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)) {
        if ((0x20U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)) {
            if ((0x10U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)) {
                if ((8U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mem_wdata = 0ULL;
                } else if ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mem_wdata = 0ULL;
                } else if ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)) {
                    if ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mem_wdata = 0ULL;
                        if ((0x4000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)) {
                            if ((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst 
                                          >> 0xdU)))) {
                                if ((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst 
                                              >> 0xcU)))) {
                                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mem_wdata = 0ULL;
                                }
                            }
                        } else if ((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst 
                                             >> 0xdU)))) {
                            if ((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst 
                                          >> 0xcU)))) {
                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mem_wdata = 0ULL;
                            }
                        }
                    } else {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mem_wdata = 0ULL;
                    }
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mem_wdata = 0ULL;
                }
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mem_wdata = 0ULL;
            }
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mem_wdata = 0ULL;
        }
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mem_wdata 
            = ((0x20U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)
                ? ((0x10U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)
                    ? 0ULL : ((8U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)
                               ? 0ULL : ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)
                                          ? 0ULL : 
                                         ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)
                                           ? ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)
                                               ? ((0x4000U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)
                                                   ? 0ULL
                                                   : 
                                                  ((0x2000U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_data2_i
                                                     : (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_data2_i)))
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)
                                                     ? (QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_data2_i))))
                                                     : (QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_data2_i)))))))
                                               : 0ULL)
                                           : 0ULL))))
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex2csr_wdata = 0ULL;
    if ((0x40U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)) {
        if ((0x20U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)) {
            if ((0x10U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)) {
                if ((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst 
                                  >> 2U)))) {
                        if ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)) {
                            if ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)) {
                                if ((0x4000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)) {
                                    if ((0x2000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)) {
                                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex2csr_wdata 
                                            = ((0x1000U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)
                                                ? (
                                                   (~ (QData)((IData)(
                                                                      (0x1fU 
                                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst 
                                                                          >> 0xfU))))) 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idex_csr_rdata)
                                                : ((QData)((IData)(
                                                                   (0x1fU 
                                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst 
                                                                       >> 0xfU)))) 
                                                   | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idex_csr_rdata));
                                    } else if ((0x1000U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)) {
                                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex2csr_wdata 
                                            = (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst 
                                                                  >> 0xfU))));
                                    }
                                } else if ((0x2000U 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)) {
                                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex2csr_wdata 
                                        = ((0x1000U 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)
                                            ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idex_csr_rdata 
                                               & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_data1_i))
                                            : (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_data1_i 
                                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idex_csr_rdata));
                                } else if ((0x1000U 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)) {
                                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex2csr_wdata 
                                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_data1_i;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_exe_stage__DOT__mem_rd 
        = (1U & (IData)(((3U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst)) 
                         & (IData)((0x7000U != (0x7000U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_exe_stage__DOT__slliw_data 
        = ((0x1fU >= (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst 
                               >> 0x14U))) ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_data1_i) 
                                              << (0x3fU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst 
                                                     >> 0x14U)))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_exe_stage__DOT__srliw_data 
        = ((0x1fU >= (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst 
                               >> 0x14U))) ? VL_SHIFTRS_III(32,32,6, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_data1_i), 
                                                            (0x3fU 
                                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst 
                                                                >> 0x14U)))
            : (- ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_data1_i) 
                  >> 0x1fU)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_exe_stage__DOT__sraiw_data 
        = ((0x1fU >= (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst 
                               >> 0x14U))) ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_data1_i) 
                                              >> (0x3fU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ex_inst 
                                                     >> 0x14U)))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_f_size = 0U;
    if ((3U != (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mem_inst))) {
        if ((0x23U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mem_inst))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_f_size = 3U;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mask = 0ULL;
    if ((3U != (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mem_inst))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mask 
            = ((0x23U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mem_inst))
                ? ((0x4000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mem_inst)
                    ? 0ULL : ((0x2000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mem_inst)
                               ? ((0x1000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mem_inst)
                                   ? 0xffffffffffffffffULL
                                   : ((1U & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_mem_addr 
                                                     >> 2U)))
                                       ? 0xffffffff00000000ULL
                                       : 0xffffffffULL))
                               : ((0x1000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mem_inst)
                                   ? ((0U == (3U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_mem_addr 
                                                            >> 1U))))
                                       ? 0xffffULL : 
                                      ((1U == (3U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_mem_addr 
                                                             >> 1U))))
                                        ? 0xffff0000ULL
                                        : ((2U == (3U 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_mem_addr 
                                                              >> 1U))))
                                            ? 0xffff00000000ULL
                                            : 0xffff000000000000ULL)))
                                   : ((1U & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_mem_addr 
                                                     >> 2U)))
                                       ? ((1U & (IData)(
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_mem_addr 
                                                         >> 1U)))
                                           ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_mem_addr))
                                               ? 0xff00000000000000ULL
                                               : 0xff000000000000ULL)
                                           : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_mem_addr))
                                               ? 0xff0000000000ULL
                                               : 0xff00000000ULL))
                                       : ((1U & (IData)(
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_mem_addr 
                                                         >> 1U)))
                                           ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_mem_addr))
                                               ? 0xff000000ULL
                                               : 0xff0000ULL)
                                           : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_mem_addr))
                                               ? 0xff00ULL
                                               : 0xffULL))))))
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wrdata = 0ULL;
    if ((3U != (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mem_inst))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wrdata 
            = ((0x23U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mem_inst))
                ? ((0x4000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mem_inst)
                    ? 0ULL : ((0x2000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mem_inst)
                               ? ((0x1000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mem_inst)
                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_mem_wdata
                                   : ((1U & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_mem_addr 
                                                     >> 2U)))
                                       ? ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_mem_wdata)) 
                                          << 0x20U)
                                       : (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_mem_wdata))))
                               : ((0x1000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mem_inst)
                                   ? ((0U == (3U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_mem_addr 
                                                            >> 1U))))
                                       ? (QData)((IData)(
                                                         (0xffffU 
                                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_mem_wdata))))
                                       : ((1U == (3U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_mem_addr 
                                                             >> 1U))))
                                           ? ((QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_mem_wdata)))) 
                                              << 0x10U)
                                           : ((2U == 
                                               (3U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_mem_addr 
                                                           >> 1U))))
                                               ? ((QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_mem_wdata)))) 
                                                  << 0x20U)
                                               : ((QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_mem_wdata)))) 
                                                  << 0x30U))))
                                   : ((1U & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_mem_addr 
                                                     >> 2U)))
                                       ? ((1U & (IData)(
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_mem_addr 
                                                         >> 1U)))
                                           ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_mem_addr))
                                               ? ((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_mem_wdata)))) 
                                                  << 0x38U)
                                               : ((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_mem_wdata)))) 
                                                  << 0x30U))
                                           : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_mem_addr))
                                               ? ((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_mem_wdata)))) 
                                                  << 0x28U)
                                               : ((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_mem_wdata)))) 
                                                  << 0x20U)))
                                       : ((1U & (IData)(
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_mem_addr 
                                                         >> 1U)))
                                           ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_mem_addr))
                                               ? ((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_mem_wdata)))) 
                                                  << 0x18U)
                                               : ((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_mem_wdata)))) 
                                                  << 0x10U))
                                           : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_mem_addr))
                                               ? ((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_mem_wdata)))) 
                                                  << 8U)
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_mem_wdata))))))))))
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_r_last 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)) 
           & ((~ ((0x30000004ULL == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_ar_addr) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_in_rdata 
                     == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_cache0__DOT__begin_data))) 
              & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_cache0__DOT__I_cache_hit) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_r_ready)) 
                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_in_rlast) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_cache0__DOT__I_cache_hit))) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_in_rlast)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wd_o = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wd_o 
        = (0x1fU & ((0x40U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                     ? ((0x20U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                         ? ((0x10U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                             ? ((8U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                 ? 0U : ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                          ? 0U : ((2U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                     ? 
                                                    ((0x2000U 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                      ? 
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                      >> 7U)
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                       ? 
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                       >> 7U)
                                                       : 0U))
                                                     : 
                                                    ((0x2000U 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                      ? 
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                      >> 7U)
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                       ? 
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                       >> 7U)
                                                       : 0U)))
                                                    : 0U)
                                                   : 0U)))
                             : ((8U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                 ? ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                     ? ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                         ? ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                             ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                >> 7U)
                                             : 0U) : 0U)
                                     : 0U) : ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                               ? ((2U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                    >> 7U)
                                                    : 0U)
                                                   : 0U)
                                               : 0U)))
                         : 0U) : ((0x20U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                   ? ((0x10U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                       ? ((8U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                           ? ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                               ? 0U
                                               : ((2U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                    ? 
                                                   ((((0U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                           >> 0xcU))) 
                                                      | (1U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                             >> 0xcU)))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                            >> 0xcU))))
                                                     ? 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                     >> 7U)
                                                     : 0U)
                                                    : 0U)
                                                   : 0U))
                                           : ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                               ? ((2U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                    >> 7U)
                                                    : 0U)
                                                   : 0U)
                                               : ((2U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                    >> 7U)
                                                    : 0U)
                                                   : 0U)))
                                       : 0U) : ((0x10U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                 ? 
                                                ((8U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                     ? 
                                                    ((((0U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                            >> 0xcU))) 
                                                       | (1U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                              >> 0xcU)))) 
                                                      | (5U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                             >> 0xcU))))
                                                      ? 
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                      >> 7U)
                                                      : 0U)
                                                     : 0U)
                                                    : 0U))
                                                  : 
                                                 ((4U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                     ? 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                     >> 7U)
                                                     : 0U)
                                                    : 0U)
                                                   : 
                                                  ((2U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                     ? 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                     >> 7U)
                                                     : 0U)
                                                    : 0U)))
                                                 : 
                                                ((8U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                     ? 
                                                    ((0x4000U 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                      ? 
                                                     ((0x2000U 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                        ? 0U
                                                        : 
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                        >> 7U))
                                                       : 
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                       >> 7U))
                                                      : 
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                      >> 7U))
                                                     : 0U)
                                                    : 0U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wreg_o = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wreg_o 
        = (1U & ((0x40U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                  ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                      >> 5U) & ((0x10U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                 ? (IData)(((3U == 
                                             (0xfU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)) 
                                            & ((0x4000U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                ? (IData)(
                                                          (0U 
                                                           != 
                                                           (0x3000U 
                                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)))
                                                : (IData)(
                                                          (0U 
                                                           != 
                                                           (0x3000U 
                                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i))))))
                                 : ((8U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                     ? (IData)((7U 
                                                == 
                                                (7U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)))
                                     : (IData)((7U 
                                                == 
                                                (7U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i))))))
                  : ((0x20U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                      ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                          >> 4U) & ((8U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                     ? (IData)(((3U 
                                                 == 
                                                 (7U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)) 
                                                & (((0U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                         >> 0xcU))) 
                                                    | (1U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                           >> 0xcU)))) 
                                                   | (5U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                          >> 0xcU))))))
                                     : ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                         ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                             >> 1U) 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                         : ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                             >> 1U) 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i))))
                      : ((0x10U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                          ? ((8U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                              ? (IData)(((3U == (7U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)) 
                                         & (((0U == 
                                              (7U & 
                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                >> 0xcU))) 
                                             | (1U 
                                                == 
                                                (7U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                    >> 0xcU)))) 
                                            | (5U == 
                                               (7U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                   >> 0xcU))))))
                              : ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                  ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                      >> 1U) & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                  : ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                      >> 1U) & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)))
                          : (IData)(((3U == (0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)) 
                                     & (IData)((0x7000U 
                                                != 
                                                (0x7000U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_w_ena = 0U;
    if ((0x40U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)) {
        if ((0x20U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)) {
            if ((0x10U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)) {
                if ((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                  >> 2U)))) {
                        if ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)) {
                            if ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)) {
                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_w_ena 
                                    = (1U & ((0x4000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                              ? (IData)(
                                                        (0U 
                                                         != 
                                                         (0x3000U 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)))
                                              : (IData)(
                                                        (0U 
                                                         != 
                                                         (0x3000U 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)))));
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_w_addr = 0ULL;
    if ((0x40U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)) {
        if ((0x20U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)) {
            if ((0x10U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)) {
                if ((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                  >> 2U)))) {
                        if ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)) {
                            if ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)) {
                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_w_addr 
                                    = (QData)((IData)(
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                       >> 0x14U)));
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_r_addr = 0ULL;
    if ((0x40U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)) {
        if ((0x20U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)) {
            if ((0x10U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)) {
                if ((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                  >> 2U)))) {
                        if ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)) {
                            if ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)) {
                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_r_addr 
                                    = (QData)((IData)(
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                       >> 0x14U)));
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op2_jump = 0ULL;
    if ((0x40U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)) {
        if ((0x20U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)) {
            if ((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                          >> 4U)))) {
                if ((8U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)) {
                    if ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)) {
                        if ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)) {
                            if ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)) {
                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op2_jump 
                                    = (((- (QData)((IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                            >> 0x1fU)))) 
                                        << 0x14U) | (QData)((IData)(
                                                                    ((0xff000U 
                                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i) 
                                                                     | ((0x800U 
                                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                                            >> 9U)) 
                                                                        | (0x7feU 
                                                                           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                                              >> 0x14U)))))));
                            }
                        }
                    }
                } else if ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)) {
                    if ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)) {
                        if ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op2_jump 
                                = (((- (QData)((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                        >> 0x1fU)))) 
                                    << 0xcU) | (QData)((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                                >> 0x14U))));
                        }
                    }
                } else if ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)) {
                    if ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op2_jump 
                            = ((0x4000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                ? (((- (QData)((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                        >> 0x1fU)))) 
                                    << 0xcU) | (QData)((IData)(
                                                               ((0x800U 
                                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                                    << 4U)) 
                                                                | ((0x7e0U 
                                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                                       >> 0x14U)) 
                                                                   | (0x1eU 
                                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                                         >> 7U)))))))
                                : ((0x2000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                    ? 0ULL : (((- (QData)((IData)(
                                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                                   >> 0x1fU)))) 
                                               << 0xcU) 
                                              | (QData)((IData)(
                                                                ((0x800U 
                                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                                     << 4U)) 
                                                                 | ((0x7e0U 
                                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                                        >> 0x14U)) 
                                                                    | (0x1eU 
                                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                                          >> 7U)))))))));
                    }
                }
            }
        }
    } else if ((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                         >> 5U)))) {
        if ((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                      >> 4U)))) {
            if ((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                          >> 3U)))) {
                if ((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                              >> 2U)))) {
                    if ((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                  >> 1U)))) {
                        if ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op2_jump = 0ULL;
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_en 
        = (1U & ((0x40U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                  ? (IData)(((0x23U == (0x3fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)) 
                             & (IData)((0x2000U != 
                                        (0x6000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)))))
                  : ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                      >> 5U) & ((0x10U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                 ? ((8U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                     ? (IData)(((3U 
                                                 == 
                                                 (7U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)) 
                                                & (((0U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                         >> 0xcU))) 
                                                    | (1U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                           >> 0xcU)))) 
                                                   | (5U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                          >> 0xcU))))))
                                     : (IData)((3U 
                                                == 
                                                (7U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i))))
                                 : (IData)((3U == (0x400fU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_addr = 0U;
    if ((0x40U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_addr 
            = (0x1fU & ((0x20U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                         ? ((0x10U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                             ? 0U : ((8U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                      ? 0U : ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                               ? 0U
                                               : ((2U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                     ? 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                     >> 0x14U)
                                                     : 
                                                    ((0x2000U 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                      ? 0U
                                                      : 
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                      >> 0x14U)))
                                                    : 0U)
                                                   : 0U))))
                         : 0U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_en 
            = (1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                      >> 5U) & ((0x10U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                 ? (IData)(((3U == 
                                             (0x400fU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)) 
                                            & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x3000U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)))))
                                 : ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                        >> 3U)) & (
                                                   (4U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                    ? 
                                                   ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                     >> 1U) 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                    : 
                                                   ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                     >> 1U) 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                       & (IData)(
                                                                 (0x2000U 
                                                                  != 
                                                                  (0x6000U 
                                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i))))))))));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs2_addr 
            = (0x1fU & ((0x20U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                         ? ((0x10U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                             ? ((8U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                 ? ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                     ? 0U : ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                              ? ((1U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                  ? 
                                                 ((((0U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                         >> 0xcU))) 
                                                    | (1U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                           >> 0xcU)))) 
                                                   | (5U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                          >> 0xcU))))
                                                   ? 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                   >> 0x14U)
                                                   : 0U)
                                                  : 0U)
                                              : 0U))
                                 : ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                     ? 0U : ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                              ? ((1U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                  ? 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                  >> 0x14U)
                                                  : 0U)
                                              : 0U)))
                             : ((8U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                 ? 0U : ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                          ? 0U : ((2U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                     ? 0U
                                                     : 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                     >> 0x14U))
                                                    : 0U)
                                                   : 0U))))
                         : 0U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_en 
            = (1U & ((0x20U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                      ? ((0x10U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                          ? ((8U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                              ? (IData)(((3U == (7U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)) 
                                         & (((0U == 
                                              (7U & 
                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                >> 0xcU))) 
                                             | (1U 
                                                == 
                                                (7U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                    >> 0xcU)))) 
                                            | (5U == 
                                               (7U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                   >> 0xcU))))))
                              : (IData)((3U == (7U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i))))
                          : (IData)((3U == (0x400fU 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i))))
                      : ((0x10U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                          ? ((8U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                              ? (IData)(((3U == (7U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)) 
                                         & (((0U == 
                                              (7U & 
                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                >> 0xcU))) 
                                             | (1U 
                                                == 
                                                (7U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                    >> 0xcU)))) 
                                            | (5U == 
                                               (7U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                   >> 0xcU))))))
                              : (IData)((3U == (7U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i))))
                          : (IData)(((3U == (0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)) 
                                     & (IData)((0x7000U 
                                                != 
                                                (0x7000U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i))))))));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_addr = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rs1_addr 
        = (0x1fU & ((0x40U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                     ? ((0x20U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                         ? ((0x10U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                             ? ((8U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                 ? 0U : ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                          ? 0U : ((2U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                     ? 0U
                                                     : 
                                                    ((0x2000U 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                      ? 
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                      >> 0xfU)
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                       ? 
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                       >> 0xfU)
                                                       : 0U)))
                                                    : 0U)
                                                   : 0U)))
                             : ((8U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                 ? 0U : ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                          ? ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                              ? ((1U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                  ? 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                  >> 0xfU)
                                                  : 0U)
                                              : 0U)
                                          : ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                              ? ((1U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                  ? 
                                                 ((0x4000U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                   ? 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                   >> 0xfU)
                                                   : 
                                                  ((0x2000U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                    ? 0U
                                                    : 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                    >> 0xfU)))
                                                  : 0U)
                                              : 0U))))
                         : 0U) : ((0x20U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                   ? ((0x10U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                       ? ((8U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                           ? ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                               ? 0U
                                               : ((2U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                    ? 
                                                   ((((0U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                           >> 0xcU))) 
                                                      | (1U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                             >> 0xcU)))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                            >> 0xcU))))
                                                     ? 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                     >> 0xfU)
                                                     : 0U)
                                                    : 0U)
                                                   : 0U))
                                           : ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                               ? 0U
                                               : ((2U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                    >> 0xfU)
                                                    : 0U)
                                                   : 0U)))
                                       : ((8U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                           ? 0U : (
                                                   (4U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                      ? 
                                                     ((0x4000U 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                       ? 0U
                                                       : 
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                       >> 0xfU))
                                                      : 0U)
                                                     : 0U))))
                                   : ((0x10U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                       ? ((8U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                           ? ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                               ? 0U
                                               : ((2U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                    ? 
                                                   ((((0U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                           >> 0xcU))) 
                                                      | (1U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                             >> 0xcU)))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                            >> 0xcU))))
                                                     ? 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                     >> 0xfU)
                                                     : 0U)
                                                    : 0U)
                                                   : 0U))
                                           : ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                               ? 0U
                                               : ((2U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                    >> 0xfU)
                                                    : 0U)
                                                   : 0U)))
                                       : ((8U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                           ? 0U : (
                                                   (4U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                      ? 
                                                     ((0x4000U 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                       ? 
                                                      ((0x2000U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                        ? 
                                                       ((0x1000U 
                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i)
                                                         ? 0U
                                                         : 
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                         >> 0xfU))
                                                        : 
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                        >> 0xfU))
                                                       : 
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst_i 
                                                       >> 0xfU))
                                                      : 0U)
                                                     : 0U)))))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_addr_line = 0x30000000ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc = 0x30000000ULL;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ctrl_hold_flag2if) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rib_hold_if))) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_addr_line 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_addr_line;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_addr_line;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ctrl_jump_flag) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_addr_line 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ctrl_jimp_addr;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ctrl_jimp_addr;
    } else if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                  ? 0U : 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_ready))) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_addr_line 
            = (4ULL + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_addr_line);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
            = (4ULL + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_addr_line);
    } else {
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_addr_line 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_addr_line;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_addr_line;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_Clint__DOT__hs_ar = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_ar_valid) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_ar_ready))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_Clint__DOT__hs_ar = 1U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_r_ready) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_r_valid))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_Clint__DOT__hs_ar = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_79));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_b_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_w_valid) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_w_ready)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_Clint__DOT__mtimecmp = 0x8888ULL;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_w_valid) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_w_ready))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_Clint__DOT__mtimecmp 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_w_data;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_Clint__DOT__addr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
            ? 0ULL : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_ar_valid) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_ar_ready))
                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_ar_addr
                       : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_aw_valid) 
                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_aw_ready))
                           ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_aw_addr
                           : 0ULL)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__empty 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ptr_match) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter1_2 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_2) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter1_1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_1) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_1));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first)
                        ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter1)));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter1_2 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_2) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_2));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter 
            = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first)
                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))
                             ? (~ (0x1fffffU & (((IData)(0xffU) 
                                                 << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                                                >> 2U)))
                             : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter1)));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__watchdog_1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__watchdog);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter1_3 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_3) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_3));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter1_2 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_1));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first)
                      ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter1)));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter1_1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter_1));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first)
                      ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter1)));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter1_1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first)
                      ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))
                          ? 0U : (~ (0x3ffU & (((IData)(0x3fU) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)) 
                                               >> 3U))))
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter1)));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__watchdog_1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__watchdog);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter1_1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___c_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first)
                      ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter1)));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter1_3 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_3) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_3));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter1_2 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first)
                      ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter1)));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter1_1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first)
                      ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))
                          ? 0U : (~ (0x3ffU & (((IData)(0x3fU) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)) 
                                               >> 3U))))
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter1)));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_bits_opcode 
        = ((7U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_opcode
            [0U]) ? 4U : ((6U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_opcode
                           [0U]) ? 4U : ((5U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_opcode
                                          [0U]) ? 2U
                                          : ((4U == 
                                              vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_opcode
                                              [0U])
                                              ? 1U : 
                                             ((3U == 
                                               vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_opcode
                                               [0U])
                                               ? 1U
                                               : ((2U 
                                                   == 
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_opcode
                                                   [0U])
                                                   ? 1U
                                                   : 0U))))));
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_size__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_size[0U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_size__v0;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__watchdog_1);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__watchdog);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter1_3 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_3) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_3));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter1_2 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter1_1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter 
            = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first)
                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))
                             ? (~ (0xfffffU & (((IData)(0xffU) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                                               >> 3U)))
                             : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter1)));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter1_1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter 
            = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first)
                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))
                             ? (~ (0xfffffU & (((IData)(0xffU) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                                               >> 3U)))
                             : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter1)));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter1_1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter 
            = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first)
                         ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                             ? 0U : (~ (0xfffffU & 
                                        (((IData)(0xffU) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                                         >> 3U)))) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter1)));
    }
}
