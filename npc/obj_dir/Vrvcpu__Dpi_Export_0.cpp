// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "Vrvcpu.h"
#include "Vrvcpu__Syms.h"
#include "verilated_dpi.h"


void Vrvcpu::Ebreak_teap(svBit* Ebreak_teaps) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvcpu___024root::Ebreak_teap\n"); );
    // Variables
    CData/*0:0*/ Ebreak_teaps__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("Ebreak_teap");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vrvcpu__Vcb_Ebreak_teap_t __Vcb = (Vrvcpu__Vcb_Ebreak_teap_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vrvcpu__Syms*)(__Vscopep->symsp()), Ebreak_teaps__Vcvt);
    for (size_t Ebreak_teaps__Vidx = 0; Ebreak_teaps__Vidx < 1; ++Ebreak_teaps__Vidx) *Ebreak_teaps = Ebreak_teaps__Vcvt;
}
