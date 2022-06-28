// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSocTop.h"
#include "VSocTop__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

VSocTop::VSocTop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VSocTop__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , out_axi_aw_id{vlSymsp->TOP.out_axi_aw_id}
    , out_axi_aw_addr{vlSymsp->TOP.out_axi_aw_addr}
    , out_axi_aw_len{vlSymsp->TOP.out_axi_aw_len}
    , out_axi_aw_size{vlSymsp->TOP.out_axi_aw_size}
    , out_axi_aw_burst{vlSymsp->TOP.out_axi_aw_burst}
    , out_axi_aw_cache{vlSymsp->TOP.out_axi_aw_cache}
    , out_axi_aw_port{vlSymsp->TOP.out_axi_aw_port}
    , out_axi_aw_qos{vlSymsp->TOP.out_axi_aw_qos}
    , out_axi_aw_valid{vlSymsp->TOP.out_axi_aw_valid}
    , out_axi_aw_ready{vlSymsp->TOP.out_axi_aw_ready}
    , out_axi_w_data{vlSymsp->TOP.out_axi_w_data}
    , out_axi_w_strb{vlSymsp->TOP.out_axi_w_strb}
    , out_axi_w_last{vlSymsp->TOP.out_axi_w_last}
    , out_axi_w_valid{vlSymsp->TOP.out_axi_w_valid}
    , out_axi_w_ready{vlSymsp->TOP.out_axi_w_ready}
    , out_axi_b_id{vlSymsp->TOP.out_axi_b_id}
    , out_axi_b_resp{vlSymsp->TOP.out_axi_b_resp}
    , out_axi_b_valid{vlSymsp->TOP.out_axi_b_valid}
    , out_axi_b_ready{vlSymsp->TOP.out_axi_b_ready}
    , out_axi_ar_id{vlSymsp->TOP.out_axi_ar_id}
    , out_axi_ar_addr{vlSymsp->TOP.out_axi_ar_addr}
    , out_axi_ar_len{vlSymsp->TOP.out_axi_ar_len}
    , out_axi_ar_size{vlSymsp->TOP.out_axi_ar_size}
    , out_axi_ar_burst{vlSymsp->TOP.out_axi_ar_burst}
    , out_axi_ar_cache{vlSymsp->TOP.out_axi_ar_cache}
    , out_axi_ar_prot{vlSymsp->TOP.out_axi_ar_prot}
    , out_axi_ar_qos{vlSymsp->TOP.out_axi_ar_qos}
    , out_axi_ar_valid{vlSymsp->TOP.out_axi_ar_valid}
    , out_axi_ar_ready{vlSymsp->TOP.out_axi_ar_ready}
    , out_axi_r_id{vlSymsp->TOP.out_axi_r_id}
    , out_axi_r_data{vlSymsp->TOP.out_axi_r_data}
    , out_axi_r_resp{vlSymsp->TOP.out_axi_r_resp}
    , out_axi_r_last{vlSymsp->TOP.out_axi_r_last}
    , out_axi_r_valid{vlSymsp->TOP.out_axi_r_valid}
    , out_axi_r_ready{vlSymsp->TOP.out_axi_r_ready}
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
    vlSymsp->__Vm_activity = true;
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
            VL_FATAL_MT("vsrc/SocTop.v", 12, "",
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
    vlSymsp->__Vm_activity = true;
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
            VL_FATAL_MT("vsrc/SocTop.v", 12, "",
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

//============================================================
// Trace configuration

void VSocTop___024root__traceInitTop(VSocTop___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSocTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSocTop___024root*>(voidSelf);
    VSocTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VSocTop___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void VSocTop___024root__traceRegister(VSocTop___024root* vlSelf, VerilatedVcd* tracep);

void VSocTop::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    VSocTop___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
