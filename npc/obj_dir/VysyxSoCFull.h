// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VYSYXSOCFULL_H_
#define VERILATED_VYSYXSOCFULL_H_  // guard

#include "verilated_heavy.h"
#include "svdpi.h"

class VysyxSoCFull__Syms;
class VysyxSoCFull___024root;
class VerilatedVcdC;
class VysyxSoCFull_VerilatedVcd;
class VysyxSoCFull___024unit;
class VysyxSoCFull_TLXbar_1;
class VysyxSoCFull_TLError;
class VysyxSoCFull_TLFIFOFixer;
class VysyxSoCFull_TLWidthWidget;
class VysyxSoCFull_AXI4UserYanker_1;
class VysyxSoCFull_TLToAXI4;
class VysyxSoCFull_TLBusBypass;
class VysyxSoCFull_TLMonitor_7;
class VysyxSoCFull_RX;
class VysyxSoCFull_AsyncQueueSink;
class VysyxSoCFull_TX;
class VysyxSoCFull_ysyx_210340_Meta;
class VysyxSoCFull_Queue_38;


// This class is the main interface to the Verilated model
class VysyxSoCFull VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    VysyxSoCFull__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    VysyxSoCFull___024unit* const __PVT____024unit;
    VysyxSoCFull_TLXbar_1* const __PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1;
    VysyxSoCFull_TLError* const __PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr;
    VysyxSoCFull_TLFIFOFixer* const __PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer;
    VysyxSoCFull_TLWidthWidget* const __PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget;
    VysyxSoCFull_AXI4UserYanker_1* const __PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1;
    VysyxSoCFull_TLToAXI4* const __PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4;
    VysyxSoCFull_TLBusBypass* const __PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass;
    VysyxSoCFull_TLMonitor_7* const __PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor;
    VysyxSoCFull_RX* const __PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx;
    VysyxSoCFull_AsyncQueueSink* const __PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink;
    VysyxSoCFull_AsyncQueueSink* const __PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink;
    VysyxSoCFull_AsyncQueueSink* const __PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink;
    VysyxSoCFull_AsyncQueueSink* const __PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink;
    VysyxSoCFull_AsyncQueueSink* const __PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink;
    VysyxSoCFull_TX* const __PVT__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx;
    VysyxSoCFull_ysyx_210340_Meta* const __PVT__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__cache__DOT__meta_0;
    VysyxSoCFull_ysyx_210340_Meta* const __PVT__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__cache__DOT__meta_1;
    VysyxSoCFull_ysyx_210340_Meta* const __PVT__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__cache__DOT__meta_2;
    VysyxSoCFull_ysyx_210340_Meta* const __PVT__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__cache__DOT__meta_3;
    VysyxSoCFull_ysyx_210340_Meta* const __PVT__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__dcache__DOT__cache__DOT__meta_0;
    VysyxSoCFull_ysyx_210340_Meta* const __PVT__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__dcache__DOT__cache__DOT__meta_1;
    VysyxSoCFull_ysyx_210340_Meta* const __PVT__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__dcache__DOT__cache__DOT__meta_2;
    VysyxSoCFull_ysyx_210340_Meta* const __PVT__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__dcache__DOT__cache__DOT__meta_3;
    VysyxSoCFull_TLXbar_1* const __PVT__ysyxSoCFull__DOT__fpga__DOT__xbar_1;
    VysyxSoCFull_TLError* const __PVT__ysyxSoCFull__DOT__fpga__DOT__ferr;
    VysyxSoCFull_AXI4UserYanker_1* const __PVT__ysyxSoCFull__DOT__fpga__DOT__axi4yank;
    VysyxSoCFull_TLToAXI4* const __PVT__ysyxSoCFull__DOT__fpga__DOT__tl2axi4;
    VysyxSoCFull_TLFIFOFixer* const __PVT__ysyxSoCFull__DOT__fpga__DOT__fixer;
    VysyxSoCFull_TLWidthWidget* const __PVT__ysyxSoCFull__DOT__fpga__DOT__widget;
    VysyxSoCFull_TLBusBypass* const __PVT__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass;
    VysyxSoCFull_TLMonitor_7* const __PVT__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor;
    VysyxSoCFull_RX* const __PVT__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx;
    VysyxSoCFull_AsyncQueueSink* const __PVT__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink;
    VysyxSoCFull_AsyncQueueSink* const __PVT__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink;
    VysyxSoCFull_AsyncQueueSink* const __PVT__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink;
    VysyxSoCFull_AsyncQueueSink* const __PVT__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink;
    VysyxSoCFull_AsyncQueueSink* const __PVT__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink;
    VysyxSoCFull_TX* const __PVT__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx;
    VysyxSoCFull_Queue_38* const __PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0;
    VysyxSoCFull_Queue_38* const __PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1;
    VysyxSoCFull_Queue_38* const __PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2;
    VysyxSoCFull_Queue_38* const __PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3;
    VysyxSoCFull_Queue_38* const __PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4;
    VysyxSoCFull_Queue_38* const __PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5;
    VysyxSoCFull_Queue_38* const __PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6;
    VysyxSoCFull_Queue_38* const __PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7;
    VysyxSoCFull_Queue_38* const __PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8;
    VysyxSoCFull_Queue_38* const __PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9;
    VysyxSoCFull_Queue_38* const __PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10;
    VysyxSoCFull_Queue_38* const __PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11;
    VysyxSoCFull_Queue_38* const __PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12;
    VysyxSoCFull_Queue_38* const __PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13;
    VysyxSoCFull_Queue_38* const __PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14;
    VysyxSoCFull_Queue_38* const __PVT__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VysyxSoCFull___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VysyxSoCFull(VerilatedContext* contextp, const char* name = "TOP");
    explicit VysyxSoCFull(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VysyxSoCFull();
  private:
    VL_UNCOPYABLE(VysyxSoCFull);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
