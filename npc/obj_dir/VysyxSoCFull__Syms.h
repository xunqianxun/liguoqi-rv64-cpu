// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VYSYXSOCFULL__SYMS_H_
#define VERILATED_VYSYXSOCFULL__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "VysyxSoCFull.h"

// INCLUDE MODULE CLASSES
#include "VysyxSoCFull___024root.h"
#include "VysyxSoCFull___024unit.h"
#include "VysyxSoCFull_TLXbar_1.h"
#include "VysyxSoCFull_TLError.h"
#include "VysyxSoCFull_TLFIFOFixer.h"
#include "VysyxSoCFull_TLWidthWidget.h"
#include "VysyxSoCFull_AXI4UserYanker_1.h"
#include "VysyxSoCFull_TLToAXI4.h"
#include "VysyxSoCFull_Queue_38.h"
#include "VysyxSoCFull_TLBusBypass.h"
#include "VysyxSoCFull_TLMonitor_7.h"
#include "VysyxSoCFull_RX.h"
#include "VysyxSoCFull_AsyncQueueSink.h"
#include "VysyxSoCFull_TX.h"
#include "VysyxSoCFull_AsyncQueueSource.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class VysyxSoCFull__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VysyxSoCFull* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VysyxSoCFull___024root         TOP;
    VysyxSoCFull___024unit         TOP____024unit;
    VysyxSoCFull_AXI4UserYanker_1  TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1;
    VysyxSoCFull_TLMonitor_7       TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor;
    VysyxSoCFull_RX                TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx;
    VysyxSoCFull_AsyncQueueSource  TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source;
    VysyxSoCFull_AsyncQueueSource  TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource;
    VysyxSoCFull_AsyncQueueSource  TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source;
    VysyxSoCFull_AsyncQueueSource  TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source;
    VysyxSoCFull_AsyncQueueSource  TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source;
    VysyxSoCFull_TLBusBypass       TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass;
    VysyxSoCFull_AsyncQueueSink    TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink;
    VysyxSoCFull_AsyncQueueSink    TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink;
    VysyxSoCFull_AsyncQueueSink    TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink;
    VysyxSoCFull_AsyncQueueSink    TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink;
    VysyxSoCFull_AsyncQueueSink    TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink;
    VysyxSoCFull_TX                TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx;
    VysyxSoCFull_TLError           TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr;
    VysyxSoCFull_TLFIFOFixer       TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer;
    VysyxSoCFull_TLToAXI4          TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4;
    VysyxSoCFull_TLWidthWidget     TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget;
    VysyxSoCFull_TLXbar_1          TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1;
    VysyxSoCFull_Queue_38          TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0;
    VysyxSoCFull_Queue_38          TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1;
    VysyxSoCFull_Queue_38          TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10;
    VysyxSoCFull_Queue_38          TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11;
    VysyxSoCFull_Queue_38          TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12;
    VysyxSoCFull_Queue_38          TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13;
    VysyxSoCFull_Queue_38          TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14;
    VysyxSoCFull_Queue_38          TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15;
    VysyxSoCFull_Queue_38          TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2;
    VysyxSoCFull_Queue_38          TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3;
    VysyxSoCFull_Queue_38          TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4;
    VysyxSoCFull_Queue_38          TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5;
    VysyxSoCFull_Queue_38          TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6;
    VysyxSoCFull_Queue_38          TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7;
    VysyxSoCFull_Queue_38          TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8;
    VysyxSoCFull_Queue_38          TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9;
    VysyxSoCFull_AXI4UserYanker_1  TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank;
    VysyxSoCFull_TLMonitor_7       TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor;
    VysyxSoCFull_RX                TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx;
    VysyxSoCFull_AsyncQueueSource  TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source;
    VysyxSoCFull_AsyncQueueSource  TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource;
    VysyxSoCFull_AsyncQueueSource  TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source;
    VysyxSoCFull_AsyncQueueSource  TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source;
    VysyxSoCFull_AsyncQueueSource  TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source;
    VysyxSoCFull_TLBusBypass       TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass;
    VysyxSoCFull_AsyncQueueSink    TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink;
    VysyxSoCFull_AsyncQueueSink    TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink;
    VysyxSoCFull_AsyncQueueSink    TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink;
    VysyxSoCFull_AsyncQueueSink    TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink;
    VysyxSoCFull_AsyncQueueSink    TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink;
    VysyxSoCFull_TX                TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx;
    VysyxSoCFull_TLError           TOP__ysyxSoCFull__DOT__fpga__DOT__ferr;
    VysyxSoCFull_TLFIFOFixer       TOP__ysyxSoCFull__DOT__fpga__DOT__fixer;
    VysyxSoCFull_TLToAXI4          TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4;
    VysyxSoCFull_TLWidthWidget     TOP__ysyxSoCFull__DOT__fpga__DOT__widget;
    VysyxSoCFull_TLXbar_1          TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1;

    // SCOPE NAMES
    VerilatedScope __Vscope_ysyxSoCFull__asic__axi42apb;
    VerilatedScope __Vscope_ysyxSoCFull__asic__axi4xbar;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__atomics;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__atomics__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__axi42tl;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__axi4frag;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__axi4yank;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__mbypass__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__mbypass__monitor_1;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__rx;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__sbypass__bar__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__sbypass__error;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__sbypass__error__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__tx;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__err;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__err__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__ferr;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__ferr__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__fixer_1__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__fixer__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__hints__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__tl2axi4;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__tl2axi4__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__widget_1__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__widget_2__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__widget__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__xbar;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__xbar_1;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__xbar_1__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__asic__chipMaster__xbar__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__atomics;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__atomics__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__axi42tl;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__axi4deint;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__axi4frag;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__axi4yank;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__axi4yank_1;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__axi4yank_2;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__chiplink__mbypass__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__chiplink__mbypass__monitor_1;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__chiplink__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__chiplink__rx;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__chiplink__sbypass__bar__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__chiplink__sbypass__error;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__chiplink__sbypass__error__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__chiplink__tx;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__err;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__err__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__ferr;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__ferr__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__fixer_1__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__fixer__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__hints__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__tl2axi4;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__tl2axi4_1;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__tl2axi4_1__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__tl2axi4__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__widget_1__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__widget_2__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__widget__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__xbar;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__xbar_1;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__xbar_1__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__fpga__xbar__monitor;
    VerilatedScope __Vscope_ysyxSoCFull__mem__axi4frag;
    VerilatedScope __Vscope_ysyxSoCFull__mem__axi4xbar;
    VerilatedScope __Vscope_ysyxSoCFull__spiFlash;

    // CONSTRUCTORS
    VysyxSoCFull__Syms(VerilatedContext* contextp, const char* namep, VysyxSoCFull* modelp);
    ~VysyxSoCFull__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
