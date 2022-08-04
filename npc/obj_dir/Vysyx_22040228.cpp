// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vysyx_22040228.h"
#include "Vysyx_22040228__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vysyx_22040228::Vysyx_22040228(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vysyx_22040228__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , out_slave_addr_{vlSymsp->TOP.out_slave_addr_}
    , out_serial_data_{vlSymsp->TOP.out_serial_data_}
    , out_serial_write_{vlSymsp->TOP.out_serial_write_}
    , out_rtc_read_{vlSymsp->TOP.out_rtc_read_}
    , in_rtc_data_{vlSymsp->TOP.in_rtc_data_}
    , read_ena_sign_{vlSymsp->TOP.read_ena_sign_}
    , out_addr_outp{vlSymsp->TOP.out_addr_outp}
    , read_data_sign_{vlSymsp->TOP.read_data_sign_}
    , out_write_ram_ena{vlSymsp->TOP.out_write_ram_ena}
    , out_write_ram_data{vlSymsp->TOP.out_write_ram_data}
    , out_write_ram_addr{vlSymsp->TOP.out_write_ram_addr}
    , rootp{&(vlSymsp->TOP)}
{
}

Vysyx_22040228::Vysyx_22040228(const char* _vcname__)
    : Vysyx_22040228(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vysyx_22040228::~Vysyx_22040228() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vysyx_22040228___024root___eval_initial(Vysyx_22040228___024root* vlSelf);
void Vysyx_22040228___024root___eval_settle(Vysyx_22040228___024root* vlSelf);
void Vysyx_22040228___024root___eval(Vysyx_22040228___024root* vlSelf);
QData Vysyx_22040228___024root___change_request(Vysyx_22040228___024root* vlSelf);
#ifdef VL_DEBUG
void Vysyx_22040228___024root___eval_debug_assertions(Vysyx_22040228___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_22040228___024root___final(Vysyx_22040228___024root* vlSelf);

static void _eval_initial_loop(Vysyx_22040228__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vysyx_22040228___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vysyx_22040228___024root___eval_settle(&(vlSymsp->TOP));
        Vysyx_22040228___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vysyx_22040228___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("superscalar/ysyx_22040228.v", 18, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vysyx_22040228___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vysyx_22040228::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vysyx_22040228::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vysyx_22040228___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vysyx_22040228___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vysyx_22040228___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("superscalar/ysyx_22040228.v", 18, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vysyx_22040228___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vysyx_22040228::final() {
    Vysyx_22040228___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vysyx_22040228::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vysyx_22040228::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vysyx_22040228___024root__traceInitTop(Vysyx_22040228___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vysyx_22040228___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22040228___024root*>(voidSelf);
    Vysyx_22040228__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vysyx_22040228___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vysyx_22040228___024root__traceRegister(Vysyx_22040228___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_22040228::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vysyx_22040228___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
