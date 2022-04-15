// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "Vrvcpu.h"
#include "Vrvcpu__Syms.h"
#include "verilated_dpi.h"


svBit Vrvcpu::Ebreak_teap() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvcpu___024root::Ebreak_teap\n"); );
    // Variables
    CData/*0:0*/ Ebreak_teap__Vfuncrtn__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("Ebreak_teap");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vrvcpu__Vcb_Ebreak_teap_t __Vcb = (Vrvcpu__Vcb_Ebreak_teap_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vrvcpu__Syms*)(__Vscopep->symsp()), Ebreak_teap__Vfuncrtn__Vcvt);
    svBit Ebreak_teap__Vfuncrtn;
    for (size_t Ebreak_teap__Vfuncrtn__Vidx = 0; Ebreak_teap__Vfuncrtn__Vidx < 1; ++Ebreak_teap__Vfuncrtn__Vidx) Ebreak_teap__Vfuncrtn = Ebreak_teap__Vfuncrtn__Vcvt;
    return Ebreak_teap__Vfuncrtn;
}
