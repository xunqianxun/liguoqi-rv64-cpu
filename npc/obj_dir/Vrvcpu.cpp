// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vrvcpu.h"
#include "Vrvcpu__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vrvcpu::Vrvcpu(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vrvcpu__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , inst_addr{vlSymsp->TOP.inst_addr}
    , inst_ena{vlSymsp->TOP.inst_ena}
    , inst_ready{vlSymsp->TOP.inst_ready}
    , inst{vlSymsp->TOP.inst}
    , bui_inst_valid{vlSymsp->TOP.bui_inst_valid}
    , data_addr{vlSymsp->TOP.data_addr}
    , wmask{vlSymsp->TOP.wmask}
    , data_o{vlSymsp->TOP.data_o}
    , data_i{vlSymsp->TOP.data_i}
    , we{vlSymsp->TOP.we}
    , re{vlSymsp->TOP.re}
    , mem_finish{vlSymsp->TOP.mem_finish}
    , timer_intr{vlSymsp->TOP.timer_intr}
    , rootp{&(vlSymsp->TOP)}
{
}

Vrvcpu::Vrvcpu(const char* _vcname__)
    : Vrvcpu(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vrvcpu::~Vrvcpu() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vrvcpu___024root___eval_initial(Vrvcpu___024root* vlSelf);
void Vrvcpu___024root___eval_settle(Vrvcpu___024root* vlSelf);
void Vrvcpu___024root___eval(Vrvcpu___024root* vlSelf);
QData Vrvcpu___024root___change_request(Vrvcpu___024root* vlSelf);
#ifdef VL_DEBUG
void Vrvcpu___024root___eval_debug_assertions(Vrvcpu___024root* vlSelf);
#endif  // VL_DEBUG
void Vrvcpu___024root___final(Vrvcpu___024root* vlSelf);

static void _eval_initial_loop(Vrvcpu__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vrvcpu___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vrvcpu___024root___eval_settle(&(vlSymsp->TOP));
        Vrvcpu___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vrvcpu___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/rvcpu.v", 19, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vrvcpu___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vrvcpu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrvcpu::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vrvcpu___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vrvcpu___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vrvcpu___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/rvcpu.v", 19, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vrvcpu___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vrvcpu::final() {
    Vrvcpu___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vrvcpu::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vrvcpu::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vrvcpu___024root__traceInitTop(Vrvcpu___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vrvcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrvcpu___024root*>(voidSelf);
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vrvcpu___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vrvcpu___024root__traceRegister(Vrvcpu___024root* vlSelf, VerilatedVcd* tracep);

void Vrvcpu::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vrvcpu___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
