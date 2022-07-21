// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VysyxSoCFull.h"
#include "VysyxSoCFull__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

VysyxSoCFull::VysyxSoCFull(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VysyxSoCFull__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , __PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1}
    , __PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr}
    , __PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer}
    , __PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget}
    , __PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1}
    , __PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4}
    , __PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass}
    , __PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor}
    , __PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx}
    , __PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink}
    , __PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink}
    , __PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink}
    , __PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink}
    , __PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink}
    , __PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx}
    , __PVT__ysyxSoCFull__DOT__fpga__DOT__xbar_1{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__fpga__DOT__xbar_1}
    , __PVT__ysyxSoCFull__DOT__fpga__DOT__ferr{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__fpga__DOT__ferr}
    , __PVT__ysyxSoCFull__DOT__fpga__DOT__axi4yank{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__fpga__DOT__axi4yank}
    , __PVT__ysyxSoCFull__DOT__fpga__DOT__tl2axi4{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__fpga__DOT__tl2axi4}
    , __PVT__ysyxSoCFull__DOT__fpga__DOT__fixer{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__fpga__DOT__fixer}
    , __PVT__ysyxSoCFull__DOT__fpga__DOT__widget{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__fpga__DOT__widget}
    , __PVT__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass}
    , __PVT__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor}
    , __PVT__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx}
    , __PVT__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink}
    , __PVT__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink}
    , __PVT__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink}
    , __PVT__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink}
    , __PVT__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink}
    , __PVT__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx}
    , __PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0}
    , __PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1}
    , __PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2}
    , __PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3}
    , __PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4}
    , __PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5}
    , __PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6}
    , __PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7}
    , __PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8}
    , __PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9}
    , __PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10}
    , __PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11}
    , __PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12}
    , __PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13}
    , __PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14}
    , __PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15{vlSymsp->TOP.__PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15}
    , rootp{&(vlSymsp->TOP)}
{
}

VysyxSoCFull::VysyxSoCFull(const char* _vcname__)
    : VysyxSoCFull(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VysyxSoCFull::~VysyxSoCFull() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VysyxSoCFull___024root___eval_initial(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___eval_settle(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___eval(VysyxSoCFull___024root* vlSelf);
QData VysyxSoCFull___024root___change_request(VysyxSoCFull___024root* vlSelf);
#ifdef VL_DEBUG
void VysyxSoCFull___024root___eval_debug_assertions(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG
void VysyxSoCFull___024root___final(VysyxSoCFull___024root* vlSelf);

static void _eval_initial_loop(VysyxSoCFull__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VysyxSoCFull___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VysyxSoCFull___024root___eval_settle(&(vlSymsp->TOP));
        VysyxSoCFull___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VysyxSoCFull___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/ysyxSoCFull.v", 145745, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VysyxSoCFull___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VysyxSoCFull::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VysyxSoCFull::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VysyxSoCFull___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VysyxSoCFull___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VysyxSoCFull___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/ysyxSoCFull.v", 145745, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VysyxSoCFull___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VysyxSoCFull::final() {
    VysyxSoCFull___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VysyxSoCFull::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VysyxSoCFull::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void VysyxSoCFull___024root__traceInitTop(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VysyxSoCFull___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void VysyxSoCFull___024root__traceRegister(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep);

void VysyxSoCFull::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    VysyxSoCFull___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
