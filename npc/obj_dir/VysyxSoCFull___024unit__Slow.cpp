// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull___024unit.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

//==========


void VysyxSoCFull___024unit___ctor_var_reset(VysyxSoCFull___024unit* vlSelf);

VysyxSoCFull___024unit::VysyxSoCFull___024unit(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VysyxSoCFull___024unit___ctor_var_reset(this);
}

void VysyxSoCFull___024unit::__Vconfigure(VysyxSoCFull__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VysyxSoCFull___024unit::~VysyxSoCFull___024unit() {
}

void VysyxSoCFull___024unit___ctor_var_reset(VysyxSoCFull___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit___ctor_var_reset\n"); );
}
