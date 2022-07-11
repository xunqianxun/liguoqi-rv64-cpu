// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSocTop.h"
#include "VSocTop__Syms.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

VSocTop::VSocTop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VSocTop__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , read_ena_sign_{vlSymsp->TOP.read_ena_sign_}
    , out_addr_outp{vlSymsp->TOP.out_addr_outp}
    , read_data_sign_{vlSymsp->TOP.read_data_sign_}
    , out_write_ram_ena{vlSymsp->TOP.out_write_ram_ena}
    , out_write_ram_data{vlSymsp->TOP.out_write_ram_data}
    , out_write_ram_addr{vlSymsp->TOP.out_write_ram_addr}
    , rootp{&(vlSymsp->TOP)}
{
}

VSocTop::VSocTop(const char* _vcname__)
    : VSocTop(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VSocTop::~VSocTop() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VSocTop___024root___eval_initial(VSocTop___024root* vlSelf);
void VSocTop___024root___eval_settle(VSocTop___024root* vlSelf);
void VSocTop___024root___eval(VSocTop___024root* vlSelf);
QData VSocTop___024root___change_request(VSocTop___024root* vlSelf);
#ifdef VL_DEBUG
void VSocTop___024root___eval_debug_assertions(VSocTop___024root* vlSelf);
#endif  // VL_DEBUG
void VSocTop___024root___final(VSocTop___024root* vlSelf);

static void _eval_initial_loop(VSocTop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VSocTop___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VSocTop___024root___eval_settle(&(vlSymsp->TOP));
        VSocTop___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VSocTop___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/SocTop.v", 16, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VSocTop___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VSocTop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSocTop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSocTop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VSocTop___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VSocTop___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/SocTop.v", 16, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VSocTop___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VSocTop::final() {
    VSocTop___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VSocTop::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VSocTop::name() const {
    return vlSymsp->name();
}
