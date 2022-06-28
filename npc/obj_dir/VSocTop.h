// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VSOCTOP_H_
#define VERILATED_VSOCTOP_H_  // guard

#include "verilated_heavy.h"
#include "svdpi.h"

class VSocTop__Syms;
class VSocTop___024root;
class VerilatedVcdC;
class VSocTop_VerilatedVcd;


// This class is the main interface to the Verilated model
class VSocTop VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    VSocTop__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst,0,0);
    VL_OUT8(&out_axi_aw_id,3,0);
    VL_OUT64(&out_axi_aw_addr,63,0);
    VL_OUT8(&out_axi_aw_len,7,0);
    VL_OUT8(&out_axi_aw_size,2,0);
    VL_OUT8(&out_axi_aw_burst,1,0);
    VL_OUT8(&out_axi_aw_cache,3,0);
    VL_OUT8(&out_axi_aw_port,2,0);
    VL_OUT8(&out_axi_aw_qos,3,0);
    VL_OUT8(&out_axi_aw_valid,0,0);
    VL_IN8(&out_axi_aw_ready,0,0);
    VL_OUT64(&out_axi_w_data,63,0);
    VL_OUT8(&out_axi_w_strb,7,0);
    VL_OUT8(&out_axi_w_last,0,0);
    VL_OUT8(&out_axi_w_valid,0,0);
    VL_IN8(&out_axi_w_ready,0,0);
    VL_IN8(&out_axi_b_id,3,0);
    VL_IN8(&out_axi_b_resp,1,0);
    VL_IN8(&out_axi_b_valid,0,0);
    VL_OUT8(&out_axi_b_ready,0,0);
    VL_OUT8(&out_axi_ar_id,3,0);
    VL_OUT64(&out_axi_ar_addr,63,0);
    VL_OUT8(&out_axi_ar_len,7,0);
    VL_OUT8(&out_axi_ar_size,2,0);
    VL_OUT8(&out_axi_ar_burst,1,0);
    VL_OUT8(&out_axi_ar_cache,3,0);
    VL_OUT8(&out_axi_ar_prot,2,0);
    VL_OUT8(&out_axi_ar_qos,3,0);
    VL_OUT8(&out_axi_ar_valid,0,0);
    VL_IN8(&out_axi_ar_ready,0,0);
    VL_IN8(&out_axi_r_id,3,0);
    VL_IN64(&out_axi_r_data,63,0);
    VL_IN8(&out_axi_r_resp,1,0);
    VL_IN8(&out_axi_r_last,0,0);
    VL_IN8(&out_axi_r_valid,0,0);
    VL_OUT8(&out_axi_r_ready,0,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VSocTop___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VSocTop(VerilatedContext* contextp, const char* name = "TOP");
    explicit VSocTop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VSocTop();
  private:
    VL_UNCOPYABLE(VSocTop);  ///< Copying not allowed

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
