// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_QUEUE_38_H_
#define VERILATED_VYSYXSOCFULL_QUEUE_38_H_  // guard

#include "verilated_heavy.h"

//==========

class VysyxSoCFull__Syms;
class VysyxSoCFull_VerilatedVcd;


//----------

VL_MODULE(VysyxSoCFull_Queue_38) {
  public:

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_enq_ready,0,0);
    VL_IN8(io_enq_valid,0,0);
    VL_IN8(io_enq_bits_id,3,0);
    VL_IN8(io_enq_bits_resp,1,0);
    VL_IN8(io_enq_bits_echo_tl_state_size,3,0);
    VL_IN8(io_enq_bits_echo_tl_state_source,6,0);
    VL_IN8(io_enq_bits_echo_extra_id,0,0);
    VL_IN8(io_enq_bits_last,0,0);
    VL_IN8(io_deq_ready,0,0);
    VL_OUT8(io_deq_valid,0,0);
    VL_OUT8(io_deq_bits_id,3,0);
    VL_OUT8(io_deq_bits_resp,1,0);
    VL_OUT8(io_deq_bits_echo_tl_state_size,3,0);
    VL_OUT8(io_deq_bits_echo_tl_state_source,6,0);
    VL_OUT8(io_deq_bits_echo_extra_id,0,0);
    VL_OUT8(io_deq_bits_last,0,0);
    VL_IN64(io_enq_bits_data,63,0);
    VL_OUT64(io_deq_bits_data,63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__ram_last_io_deq_bits_MPORT_data;
    CData/*2:0*/ __PVT__enq_ptr_value;
    CData/*2:0*/ __PVT__deq_ptr_value;
    CData/*0:0*/ __PVT__maybe_full;
    CData/*0:0*/ __PVT__ptr_match;
    CData/*0:0*/ __PVT__full;
    CData/*0:0*/ __PVT__do_enq;
    CData/*0:0*/ __PVT__do_deq;
    CData/*2:0*/ __PVT___value_T_1;
    CData/*2:0*/ __PVT___value_T_3;
    VlUnpacked<CData/*3:0*/, 8> __PVT__ram_id;
    VlUnpacked<QData/*63:0*/, 8> __PVT__ram_data;
    VlUnpacked<CData/*1:0*/, 8> __PVT__ram_resp;
    VlUnpacked<CData/*3:0*/, 8> __PVT__ram_echo_tl_state_size;
    VlUnpacked<CData/*6:0*/, 8> __PVT__ram_echo_tl_state_source;
    VlUnpacked<CData/*0:0*/, 8> __PVT__ram_echo_extra_id;
    VlUnpacked<CData/*0:0*/, 8> __PVT__ram_last;

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VysyxSoCFull_Queue_38);  ///< Copying not allowed
  public:
    VysyxSoCFull_Queue_38(const char* name);
    ~VysyxSoCFull_Queue_38();

    // INTERNAL METHODS
    void __Vconfigure(VysyxSoCFull__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
