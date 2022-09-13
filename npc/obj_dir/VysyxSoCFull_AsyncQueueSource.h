// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_ASYNCQUEUESOURCE_H_
#define VERILATED_VYSYXSOCFULL_ASYNCQUEUESOURCE_H_  // guard

#include "verilated_heavy.h"

//==========

class VysyxSoCFull__Syms;
class VysyxSoCFull_VerilatedVcd;


//----------

VL_MODULE(VysyxSoCFull_AsyncQueueSource) {
  public:

    // PORTS
    VL_IN8(__PVT__clock,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_OUT8(__PVT__io_enq_ready,0,0);
    VL_IN8(__PVT__io_enq_valid,0,0);
    VL_IN8(__PVT__io_async_ridx,3,0);
    VL_OUT8(__PVT__io_async_widx,3,0);
    VL_IN8(__PVT__io_async_safe_ridx_valid,0,0);
    VL_OUT8(__PVT__io_async_safe_widx_valid,0,0);
    VL_OUT8(__PVT__io_async_safe_source_reset_n,0,0);
    VL_IN8(__PVT__io_async_safe_sink_reset_n,0,0);
    VL_IN(__PVT__io_enq_bits,31,0);
    VL_OUT(__PVT__io_async_mem_0,31,0);
    VL_OUT(__PVT__io_async_mem_1,31,0);
    VL_OUT(__PVT__io_async_mem_2,31,0);
    VL_OUT(__PVT__io_async_mem_3,31,0);
    VL_OUT(__PVT__io_async_mem_4,31,0);
    VL_OUT(__PVT__io_async_mem_5,31,0);
    VL_OUT(__PVT__io_async_mem_6,31,0);
    VL_OUT(__PVT__io_async_mem_7,31,0);

    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__source_valid_0_reset;
    CData/*0:0*/ __PVT___widx_T_1;
    CData/*3:0*/ __PVT__widx_widx_bin;
    CData/*3:0*/ __PVT___widx_incremented_T_1;
    CData/*3:0*/ __PVT__widx_incremented;
    CData/*2:0*/ __PVT__index;
    CData/*0:0*/ __PVT__ready_reg;
    CData/*3:0*/ __PVT__widx_gray;
    CData/*0:0*/ __PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0;
    CData/*0:0*/ __PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1;
    CData/*0:0*/ __PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2;
    CData/*0:0*/ __PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0;
    CData/*0:0*/ __PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1;
    CData/*0:0*/ __PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2;
    CData/*0:0*/ __PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0;
    CData/*0:0*/ __PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1;
    CData/*0:0*/ __PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2;
    CData/*0:0*/ __PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0;
    CData/*0:0*/ __PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1;
    CData/*0:0*/ __PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2;
    CData/*0:0*/ __PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    CData/*0:0*/ __PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    CData/*0:0*/ __PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    CData/*0:0*/ __PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    CData/*0:0*/ __PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    CData/*0:0*/ __PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    CData/*0:0*/ __PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    CData/*0:0*/ __PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    CData/*0:0*/ __PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    CData/*0:0*/ __PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    CData/*0:0*/ __PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    CData/*0:0*/ __PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    IData/*31:0*/ __PVT__mem_0;
    IData/*31:0*/ __PVT__mem_1;
    IData/*31:0*/ __PVT__mem_2;
    IData/*31:0*/ __PVT__mem_3;
    IData/*31:0*/ __PVT__mem_4;
    IData/*31:0*/ __PVT__mem_5;
    IData/*31:0*/ __PVT__mem_6;
    IData/*31:0*/ __PVT__mem_7;

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VysyxSoCFull_AsyncQueueSource);  ///< Copying not allowed
  public:
    VysyxSoCFull_AsyncQueueSource(const char* name);
    ~VysyxSoCFull_AsyncQueueSource();

    // INTERNAL METHODS
    void __Vconfigure(VysyxSoCFull__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
