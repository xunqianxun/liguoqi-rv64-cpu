// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VysyxSoCFull__Syms.h"


void VysyxSoCFull___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    IData/*31:0*/ __Vilp;
    VysyxSoCFull___024root* const __restrict vlSelf = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vilp = 0U;
        while ((__Vilp <= 0x2fU)) {
            vlSymsp->TOP.__Vm_traceActivity[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
}
