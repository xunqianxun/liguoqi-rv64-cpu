// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSOCTOP__SYMS_H_
#define VERILATED_VSOCTOP__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "VSocTop.h"

// INCLUDE MODULE CLASSES
#include "VSocTop___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class VSocTop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VSocTop* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VSocTop___024root              TOP;

    // CONSTRUCTORS
    VSocTop__Syms(VerilatedContext* contextp, const char* namep, VSocTop* modelp);
    ~VSocTop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
