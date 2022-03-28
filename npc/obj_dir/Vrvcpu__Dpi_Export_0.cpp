// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "Vrvcpu.h"
#include "Vrvcpu__Syms.h"
#include "verilated_dpi.h"


void Vrvcpu::svtoc(int* inst_data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvcpu___024root::svtoc\n"); );
    // Variables
    IData/*31:0*/ inst_data__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("svtoc");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vrvcpu__Vcb_svtoc_t __Vcb = (Vrvcpu__Vcb_svtoc_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vrvcpu__Syms*)(__Vscopep->symsp()), inst_data__Vcvt);
    for (size_t inst_data__Vidx = 0; inst_data__Vidx < 1; ++inst_data__Vidx) *inst_data = inst_data__Vcvt;
}
