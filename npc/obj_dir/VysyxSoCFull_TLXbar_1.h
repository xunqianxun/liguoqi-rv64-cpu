// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_TLXBAR_1_H_
#define VERILATED_VYSYXSOCFULL_TLXBAR_1_H_  // guard

#include "verilated_heavy.h"

//==========

class VysyxSoCFull__Syms;
class VysyxSoCFull_VerilatedVcd;


//----------

VL_MODULE(VysyxSoCFull_TLXbar_1) {
  public:

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(auto_in_a_ready,0,0);
    VL_IN8(auto_in_a_valid,0,0);
    VL_IN8(auto_in_a_bits_opcode,2,0);
    VL_IN8(auto_in_a_bits_size,2,0);
    VL_IN8(auto_in_a_bits_source,3,0);
    VL_IN8(auto_in_a_bits_mask,3,0);
    VL_IN8(auto_in_d_ready,0,0);
    VL_OUT8(auto_in_d_valid,0,0);
    VL_OUT8(auto_in_d_bits_opcode,2,0);
    VL_OUT8(auto_in_d_bits_param,1,0);
    VL_OUT8(auto_in_d_bits_size,2,0);
    VL_OUT8(auto_in_d_bits_source,3,0);
    VL_OUT8(auto_in_d_bits_sink,5,0);
    VL_OUT8(auto_in_d_bits_denied,0,0);
    VL_OUT8(auto_in_d_bits_corrupt,0,0);
    VL_IN8(auto_out_1_a_ready,0,0);
    VL_OUT8(auto_out_1_a_valid,0,0);
    VL_OUT8(auto_out_1_a_bits_opcode,2,0);
    VL_OUT8(auto_out_1_a_bits_size,2,0);
    VL_OUT8(auto_out_1_a_bits_source,3,0);
    VL_OUT8(auto_out_1_a_bits_mask,3,0);
    VL_OUT8(auto_out_1_d_ready,0,0);
    VL_IN8(auto_out_1_d_valid,0,0);
    VL_IN8(auto_out_1_d_bits_opcode,2,0);
    VL_IN8(auto_out_1_d_bits_size,2,0);
    VL_IN8(auto_out_1_d_bits_source,3,0);
    VL_IN8(auto_out_1_d_bits_denied,0,0);
    VL_IN8(auto_out_1_d_bits_corrupt,0,0);
    VL_IN8(auto_out_0_a_ready,0,0);
    VL_OUT8(auto_out_0_a_valid,0,0);
    VL_OUT8(auto_out_0_a_bits_opcode,2,0);
    VL_OUT8(auto_out_0_a_bits_size,2,0);
    VL_OUT8(auto_out_0_a_bits_source,3,0);
    VL_OUT8(auto_out_0_a_bits_mask,3,0);
    VL_OUT8(auto_out_0_d_ready,0,0);
    VL_IN8(auto_out_0_d_valid,0,0);
    VL_IN8(auto_out_0_d_bits_opcode,2,0);
    VL_IN8(auto_out_0_d_bits_param,1,0);
    VL_IN8(auto_out_0_d_bits_size,2,0);
    VL_IN8(auto_out_0_d_bits_source,3,0);
    VL_IN8(auto_out_0_d_bits_sink,4,0);
    VL_IN8(auto_out_0_d_bits_denied,0,0);
    VL_IN8(auto_out_0_d_bits_corrupt,0,0);
    VL_OUT16(auto_out_1_a_bits_address,12,0);
    VL_IN(auto_in_a_bits_address,31,0);
    VL_IN(auto_in_a_bits_data,31,0);
    VL_OUT(auto_in_d_bits_data,31,0);
    VL_OUT(auto_out_0_a_bits_address,31,0);
    VL_OUT(auto_out_0_a_bits_data,31,0);
    VL_IN(auto_out_0_d_bits_data,31,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__monitor_io_in_a_ready;
        CData/*0:0*/ __PVT__monitor_io_in_d_valid;
        CData/*2:0*/ __PVT__monitor_io_in_d_bits_opcode;
        CData/*1:0*/ __PVT__monitor_io_in_d_bits_param;
        CData/*2:0*/ __PVT__monitor_io_in_d_bits_size;
        CData/*3:0*/ __PVT__monitor_io_in_d_bits_source;
        CData/*5:0*/ __PVT__monitor_io_in_d_bits_sink;
        CData/*0:0*/ __PVT__monitor_io_in_d_bits_denied;
        CData/*3:0*/ __PVT__beatsLeft;
        CData/*1:0*/ __PVT__readys_filter_lo;
        CData/*1:0*/ __PVT__readys_mask;
        CData/*3:0*/ __PVT__readys_filter;
        CData/*3:0*/ __PVT__readys_unready;
        CData/*1:0*/ __PVT___readys_readys_T_2;
        CData/*0:0*/ __PVT__earlyWinner_0;
        CData/*0:0*/ __PVT__state_0;
        CData/*0:0*/ __PVT__muxStateEarly_0;
        CData/*0:0*/ __PVT__earlyWinner_1;
        CData/*0:0*/ __PVT__state_1;
        CData/*0:0*/ __PVT__muxStateEarly_1;
        CData/*0:0*/ __PVT__requestAIO_0_0;
        CData/*0:0*/ __PVT__latch;
        CData/*1:0*/ __PVT___readys_mask_T;
        CData/*0:0*/ __PVT___T_10;
        CData/*0:0*/ __PVT___sink_ACancel_earlyValid_T_3;
        CData/*3:0*/ __PVT___beatsLeft_T_4;
        CData/*0:0*/ __PVT__monitor__DOT__source_ok;
        CData/*0:0*/ __PVT__monitor__DOT__mask_acc;
        CData/*0:0*/ __PVT__monitor__DOT__mask_acc_1;
        CData/*3:0*/ __PVT__monitor__DOT__mask;
        CData/*0:0*/ __PVT__monitor__DOT___T_77;
        CData/*0:0*/ __PVT__monitor__DOT___a_first_T;
        CData/*3:0*/ __PVT__monitor__DOT__a_first_counter;
        CData/*3:0*/ __PVT__monitor__DOT__a_first_counter1;
        CData/*0:0*/ __PVT__monitor__DOT__a_first;
        CData/*2:0*/ __PVT__monitor__DOT__opcode;
        CData/*2:0*/ __PVT__monitor__DOT__size;
        CData/*3:0*/ __PVT__monitor__DOT__source;
        CData/*0:0*/ __PVT__monitor__DOT___d_first_T;
        CData/*3:0*/ __PVT__monitor__DOT__d_first_counter;
        CData/*3:0*/ __PVT__monitor__DOT__d_first_counter1;
        CData/*0:0*/ __PVT__monitor__DOT__d_first;
        CData/*2:0*/ __PVT__monitor__DOT__opcode_1;
        CData/*1:0*/ __PVT__monitor__DOT__param_1;
        CData/*2:0*/ __PVT__monitor__DOT__size_1;
        CData/*3:0*/ __PVT__monitor__DOT__source_1;
        CData/*5:0*/ __PVT__monitor__DOT__sink;
        CData/*0:0*/ __PVT__monitor__DOT__denied;
        CData/*3:0*/ __PVT__monitor__DOT__a_first_counter_1;
        CData/*3:0*/ __PVT__monitor__DOT__a_first_counter1_1;
        CData/*0:0*/ __PVT__monitor__DOT__a_first_1;
        CData/*3:0*/ __PVT__monitor__DOT__d_first_counter_1;
        CData/*3:0*/ __PVT__monitor__DOT__d_first_counter1_1;
        CData/*0:0*/ __PVT__monitor__DOT__d_first_1;
        CData/*2:0*/ __PVT__monitor__DOT___GEN_30;
        CData/*2:0*/ __PVT__monitor__DOT___GEN_46;
        CData/*3:0*/ __PVT__monitor__DOT__d_first_counter_2;
        CData/*3:0*/ __PVT__monitor__DOT__d_first_counter1_2;
        CData/*0:0*/ __PVT__monitor__DOT__d_first_2;
        SData/*15:0*/ __PVT__monitor__DOT__inflight;
        SData/*15:0*/ __PVT__monitor__DOT___inflight_T_2;
        SData/*15:0*/ __PVT__monitor__DOT__inflight_1;
        SData/*15:0*/ __PVT__monitor__DOT___inflight_T_5;
        IData/*31:0*/ __PVT__monitor__DOT__address;
    };
    struct {
        VlWide<5>/*142:0*/ __PVT__monitor__DOT___GEN_23;
        IData/*31:0*/ __PVT__monitor__DOT__watchdog;
        IData/*31:0*/ __PVT__monitor__DOT___watchdog_T_1;
        IData/*31:0*/ __PVT__monitor__DOT__watchdog_1;
        IData/*31:0*/ __PVT__monitor__DOT___watchdog_T_3;
        IData/*31:0*/ __PVT__monitor__DOT__plusarg_reader__DOT__myplus;
        IData/*31:0*/ __PVT__monitor__DOT__plusarg_reader_1__DOT__myplus;
        QData/*63:0*/ __PVT__monitor__DOT__inflight_opcodes;
        QData/*63:0*/ __PVT__monitor__DOT__inflight_sizes;
        QData/*63:0*/ __PVT__monitor__DOT___a_opcode_lookup_T_1;
        QData/*63:0*/ __PVT__monitor__DOT___inflight_opcodes_T_2;
        QData/*63:0*/ __PVT__monitor__DOT___inflight_sizes_T_2;
        QData/*63:0*/ __PVT__monitor__DOT__inflight_sizes_1;
        QData/*63:0*/ __PVT__monitor__DOT___inflight_sizes_T_5;
    };

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VysyxSoCFull_TLXbar_1);  ///< Copying not allowed
  public:
    VysyxSoCFull_TLXbar_1(const char* name);
    ~VysyxSoCFull_TLXbar_1();

    // INTERNAL METHODS
    void __Vconfigure(VysyxSoCFull__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
