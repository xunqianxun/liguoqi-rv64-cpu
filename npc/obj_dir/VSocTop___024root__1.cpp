// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSocTop.h for the primary calling header

#include "VSocTop___024root.h"
#include "VSocTop__Syms.h"

#include "verilated_dpi.h"

void VSocTop___024root___sequent__TOP__3(VSocTop___024root* vlSelf);
void VSocTop___024root___sequent__TOP__4(VSocTop___024root* vlSelf);
void VSocTop___024root___combo__TOP__5(VSocTop___024root* vlSelf);

void VSocTop___024root___eval(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VSocTop___024root___sequent__TOP__3(vlSelf);
        VSocTop___024root___sequent__TOP__4(vlSelf);
    }
    VSocTop___024root___combo__TOP__5(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData VSocTop___024root___change_request_1(VSocTop___024root* vlSelf);

VL_INLINE_OPT QData VSocTop___024root___change_request(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___change_request\n"); );
    // Body
    return (VSocTop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VSocTop___024root___change_request_1(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->SocTop__DOT__arbitrate_d_ok ^ vlSelf->__Vchglast__TOP__SocTop__DOT__arbitrate_d_ok));
    VL_DEBUG_IF( if(__req && ((vlSelf->SocTop__DOT__arbitrate_d_ok ^ vlSelf->__Vchglast__TOP__SocTop__DOT__arbitrate_d_ok))) VL_DBG_MSGF("        CHANGE: vsrc/SocTop.v:115: SocTop.arbitrate_d_ok\n"); );
    // Final
    vlSelf->__Vchglast__TOP__SocTop__DOT__arbitrate_d_ok 
        = vlSelf->SocTop__DOT__arbitrate_d_ok;
    return __req;
}

#ifdef VL_DEBUG
void VSocTop___024root___eval_debug_assertions(VSocTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSocTop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
