// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_TLMONITOR_7_H_
#define VERILATED_VYSYXSOCFULL_TLMONITOR_7_H_  // guard

#include "verilated_heavy.h"

//==========

class VysyxSoCFull__Syms;
class VysyxSoCFull_VerilatedVcd;


//----------

VL_MODULE(VysyxSoCFull_TLMonitor_7) {
  public:

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_in_a_ready,0,0);
    VL_IN8(io_in_a_valid,0,0);
    VL_IN8(io_in_a_bits_opcode,2,0);
    VL_IN8(io_in_a_bits_size,2,0);
    VL_IN8(io_in_a_bits_source,3,0);
    VL_IN8(io_in_a_bits_mask,3,0);
    VL_IN8(io_in_d_ready,0,0);
    VL_IN8(io_in_d_valid,0,0);
    VL_IN8(io_in_d_bits_opcode,2,0);
    VL_IN8(io_in_d_bits_param,1,0);
    VL_IN8(io_in_d_bits_size,2,0);
    VL_IN8(io_in_d_bits_source,3,0);
    VL_IN8(io_in_d_bits_sink,4,0);
    VL_IN8(io_in_d_bits_denied,0,0);
    VL_IN8(io_in_d_bits_corrupt,0,0);
    VL_IN(io_in_a_bits_address,31,0);

    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__source_ok;
    CData/*0:0*/ __PVT__mask_acc;
    CData/*0:0*/ __PVT__mask_acc_1;
    CData/*3:0*/ __PVT__mask;
    CData/*0:0*/ __PVT___T_88;
    CData/*0:0*/ __PVT___a_first_T;
    CData/*3:0*/ __PVT__a_first_counter;
    CData/*3:0*/ __PVT__a_first_counter1;
    CData/*0:0*/ __PVT__a_first;
    CData/*2:0*/ __PVT__opcode;
    CData/*2:0*/ __PVT__size;
    CData/*3:0*/ __PVT__source;
    CData/*0:0*/ __PVT___d_first_T;
    CData/*3:0*/ __PVT__d_first_counter;
    CData/*3:0*/ __PVT__d_first_counter1;
    CData/*0:0*/ __PVT__d_first;
    CData/*2:0*/ __PVT__opcode_1;
    CData/*1:0*/ __PVT__param_1;
    CData/*2:0*/ __PVT__size_1;
    CData/*3:0*/ __PVT__source_1;
    CData/*4:0*/ __PVT__sink;
    CData/*0:0*/ __PVT__denied;
    CData/*3:0*/ __PVT__a_first_counter_1;
    CData/*3:0*/ __PVT__a_first_counter1_1;
    CData/*0:0*/ __PVT__a_first_1;
    CData/*3:0*/ __PVT__d_first_counter_1;
    CData/*3:0*/ __PVT__d_first_counter1_1;
    CData/*0:0*/ __PVT__d_first_1;
    CData/*2:0*/ __PVT___GEN_30;
    CData/*2:0*/ __PVT___GEN_46;
    CData/*3:0*/ __PVT__d_first_counter_2;
    CData/*3:0*/ __PVT__d_first_counter1_2;
    CData/*0:0*/ __PVT__d_first_2;
    SData/*15:0*/ __PVT__inflight;
    SData/*15:0*/ __PVT__a_set_wo_ready;
    SData/*15:0*/ __PVT___inflight_T_2;
    SData/*15:0*/ __PVT__inflight_1;
    SData/*15:0*/ __PVT___inflight_T_5;
    IData/*31:0*/ __PVT__address;
    VlWide<5>/*142:0*/ __PVT___GEN_23;
    IData/*31:0*/ __PVT__watchdog;
    IData/*31:0*/ __PVT___watchdog_T_1;
    IData/*31:0*/ __PVT__watchdog_1;
    IData/*31:0*/ __PVT___watchdog_T_3;
    IData/*31:0*/ __PVT__plusarg_reader__DOT__myplus;
    IData/*31:0*/ __PVT__plusarg_reader_1__DOT__myplus;
    QData/*63:0*/ __PVT__inflight_opcodes;
    QData/*63:0*/ __PVT__inflight_sizes;
    QData/*63:0*/ __PVT___a_opcode_lookup_T_1;
    QData/*63:0*/ __PVT___inflight_opcodes_T_2;
    QData/*63:0*/ __PVT___inflight_sizes_T_2;
    QData/*63:0*/ __PVT__inflight_sizes_1;
    QData/*63:0*/ __PVT___inflight_sizes_T_5;

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VysyxSoCFull_TLMonitor_7);  ///< Copying not allowed
  public:
    VysyxSoCFull_TLMonitor_7(const char* name);
    ~VysyxSoCFull_TLMonitor_7();

    // INTERNAL METHODS
    void __Vconfigure(VysyxSoCFull__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
