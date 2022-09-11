// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_TLFIFOFIXER_H_
#define VERILATED_VYSYXSOCFULL_TLFIFOFIXER_H_  // guard

#include "verilated_heavy.h"

//==========

class VysyxSoCFull__Syms;
class VysyxSoCFull_VerilatedVcd;


//----------

VL_MODULE(VysyxSoCFull_TLFIFOFixer) {
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
    VL_IN8(auto_out_a_ready,0,0);
    VL_OUT8(auto_out_a_valid,0,0);
    VL_OUT8(auto_out_a_bits_opcode,2,0);
    VL_OUT8(auto_out_a_bits_size,2,0);
    VL_OUT8(auto_out_a_bits_source,3,0);
    VL_OUT8(auto_out_a_bits_mask,3,0);
    VL_OUT8(auto_out_d_ready,0,0);
    VL_IN8(auto_out_d_valid,0,0);
    VL_IN8(auto_out_d_bits_opcode,2,0);
    VL_IN8(auto_out_d_bits_param,1,0);
    VL_IN8(auto_out_d_bits_size,2,0);
    VL_IN8(auto_out_d_bits_source,3,0);
    VL_IN8(auto_out_d_bits_sink,5,0);
    VL_IN8(auto_out_d_bits_denied,0,0);
    VL_IN8(auto_out_d_bits_corrupt,0,0);
    VL_IN(auto_in_a_bits_address,31,0);
    VL_IN(auto_in_a_bits_data,31,0);
    VL_OUT(auto_in_d_bits_data,31,0);
    VL_OUT(auto_out_a_bits_address,31,0);
    VL_OUT(auto_out_a_bits_data,31,0);
    VL_IN(auto_out_d_bits_data,31,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__monitor_io_in_a_ready;
        CData/*1:0*/ __PVT__a_id;
        CData/*3:0*/ __PVT__a_first_counter;
        CData/*0:0*/ __PVT__a_first;
        CData/*0:0*/ __PVT__flight_0;
        CData/*0:0*/ __PVT__flight_1;
        CData/*0:0*/ __PVT__flight_2;
        CData/*0:0*/ __PVT__flight_3;
        CData/*0:0*/ __PVT__flight_4;
        CData/*0:0*/ __PVT__flight_5;
        CData/*0:0*/ __PVT__flight_6;
        CData/*0:0*/ __PVT__flight_7;
        CData/*1:0*/ __PVT__stalls_id;
        CData/*0:0*/ __PVT__flight_8;
        CData/*0:0*/ __PVT__flight_9;
        CData/*0:0*/ __PVT__flight_10;
        CData/*0:0*/ __PVT__flight_11;
        CData/*0:0*/ __PVT__flight_12;
        CData/*0:0*/ __PVT__flight_13;
        CData/*0:0*/ __PVT__flight_14;
        CData/*0:0*/ __PVT__flight_15;
        CData/*1:0*/ __PVT__stalls_id_1;
        CData/*0:0*/ __PVT__stall;
        CData/*0:0*/ __PVT___a_first_T;
        CData/*3:0*/ __PVT__a_first_counter1;
        CData/*0:0*/ __PVT___d_first_T;
        CData/*3:0*/ __PVT__d_first_counter;
        CData/*3:0*/ __PVT__d_first_counter1;
        CData/*0:0*/ __PVT__d_first_first;
        CData/*0:0*/ __PVT__d_first;
        CData/*0:0*/ __PVT___GEN_18;
        CData/*0:0*/ __PVT___GEN_19;
        CData/*0:0*/ __PVT___GEN_20;
        CData/*0:0*/ __PVT___GEN_21;
        CData/*0:0*/ __PVT___GEN_22;
        CData/*0:0*/ __PVT___GEN_23;
        CData/*0:0*/ __PVT___GEN_24;
        CData/*0:0*/ __PVT___GEN_25;
        CData/*0:0*/ __PVT___GEN_26;
        CData/*0:0*/ __PVT___GEN_27;
        CData/*0:0*/ __PVT___GEN_28;
        CData/*0:0*/ __PVT___GEN_29;
        CData/*0:0*/ __PVT___GEN_30;
        CData/*0:0*/ __PVT___GEN_31;
        CData/*0:0*/ __PVT___GEN_32;
        CData/*0:0*/ __PVT___GEN_33;
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
    };
    struct {
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
    VL_UNCOPYABLE(VysyxSoCFull_TLFIFOFixer);  ///< Copying not allowed
  public:
    VysyxSoCFull_TLFIFOFixer(const char* name);
    ~VysyxSoCFull_TLFIFOFixer();

    // INTERNAL METHODS
    void __Vconfigure(VysyxSoCFull__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
