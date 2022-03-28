// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vrvcpu__Syms.h"
#include "Vrvcpu.h"
#include "Vrvcpu___024root.h"

void Vrvcpu___024root____Vdpiexp_rvcpu__DOT__svtoc_TOP(Vrvcpu__Syms* __restrict vlSymsp, IData/*31:0*/ &inst_data);

// FUNCTIONS
Vrvcpu__Syms::~Vrvcpu__Syms()
{
}

Vrvcpu__Syms::Vrvcpu__Syms(VerilatedContext* contextp, const char* namep,Vrvcpu* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp(modelp)
    // Setup module instances
    , TOP(namep)
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_rvcpu.configure(this, name(), "rvcpu", "rvcpu", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_rvcpu.exportInsert(__Vfinal, "svtoc", (void*)(&Vrvcpu___024root____Vdpiexp_rvcpu__DOT__svtoc_TOP));
    }
}
