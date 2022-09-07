// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_TLWIDTHWIDGET_H_
#define VERILATED_VYSYXSOCFULL_TLWIDTHWIDGET_H_  // guard

#include "verilated_heavy.h"

//==========

class VysyxSoCFull__Syms;
class VysyxSoCFull_VerilatedVcd;


//----------

VL_MODULE(VysyxSoCFull_TLWidthWidget) {
  public:

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(auto_in_a_ready,0,0);
    VL_IN8(auto_in_a_valid,0,0);
    VL_IN8(auto_in_a_bits_opcode,2,0);
    VL_IN8(auto_in_a_bits_size,2,0);
    VL_IN8(auto_in_a_bits_source,3,0);
    VL_IN8(auto_in_a_bits_mask,7,0);
    VL_IN8(auto_in_d_ready,0,0);
    VL_OUT8(auto_in_d_valid,0,0);
    VL_OUT8(auto_in_d_bits_opcode,2,0);
    VL_OUT8(auto_in_d_bits_size,2,0);
    VL_OUT8(auto_in_d_bits_source,3,0);
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
    VL_OUT(auto_out_a_bits_address,31,0);
    VL_OUT(auto_out_a_bits_data,31,0);
    VL_IN(auto_out_d_bits_data,31,0);
    VL_IN64(auto_in_a_bits_data,63,0);
    VL_OUT64(auto_in_d_bits_data,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__monitor_io_in_d_valid;
        CData/*0:0*/ __PVT__repeated_repeater_io_enq_ready;
        CData/*0:0*/ __PVT__repeated_repeater_io_deq_valid;
        CData/*2:0*/ __PVT__repeated_repeater_io_deq_bits_opcode;
        CData/*2:0*/ __PVT__repeated_repeater_io_deq_bits_size;
        CData/*3:0*/ __PVT__repeated_repeater_io_deq_bits_source;
        CData/*7:0*/ __PVT__repeated_repeater_io_deq_bits_mask;
        CData/*0:0*/ __PVT__repeat_count;
        CData/*0:0*/ __PVT__repeat_last;
        CData/*0:0*/ __PVT__repeat_index;
        CData/*0:0*/ __PVT__count;
        CData/*0:0*/ __PVT__last;
        CData/*0:0*/ __PVT__corrupt_reg;
        CData/*0:0*/ __PVT__corrupt_out;
        CData/*0:0*/ __PVT___T;
        CData/*0:0*/ __PVT__bundleIn_0_d_bits_data_rdata_written_once;
        CData/*0:0*/ __PVT__bundleIn_0_d_bits_data_masked_enable_0;
        CData/*0:0*/ __PVT___GEN_10;
        CData/*0:0*/ __PVT__monitor__DOT__source_ok;
        CData/*0:0*/ __PVT__monitor__DOT__mask_acc;
        CData/*0:0*/ __PVT__monitor__DOT__mask_acc_1;
        CData/*0:0*/ __PVT__monitor__DOT__mask_eq_2;
        CData/*0:0*/ __PVT__monitor__DOT__mask_acc_2;
        CData/*0:0*/ __PVT__monitor__DOT__mask_eq_3;
        CData/*0:0*/ __PVT__monitor__DOT__mask_acc_3;
        CData/*0:0*/ __PVT__monitor__DOT__mask_eq_4;
        CData/*0:0*/ __PVT__monitor__DOT__mask_acc_4;
        CData/*0:0*/ __PVT__monitor__DOT__mask_eq_5;
        CData/*0:0*/ __PVT__monitor__DOT__mask_acc_5;
        CData/*7:0*/ __PVT__monitor__DOT__mask;
        CData/*0:0*/ __PVT__monitor__DOT___T_77;
        CData/*0:0*/ __PVT__monitor__DOT___a_first_T;
        CData/*2:0*/ __PVT__monitor__DOT__a_first_counter;
        CData/*2:0*/ __PVT__monitor__DOT__a_first_counter1;
        CData/*0:0*/ __PVT__monitor__DOT__a_first;
        CData/*2:0*/ __PVT__monitor__DOT__opcode;
        CData/*2:0*/ __PVT__monitor__DOT__size;
        CData/*3:0*/ __PVT__monitor__DOT__source;
        CData/*0:0*/ __PVT__monitor__DOT___d_first_T;
        CData/*2:0*/ __PVT__monitor__DOT__d_first_counter;
        CData/*2:0*/ __PVT__monitor__DOT__d_first_counter1;
        CData/*0:0*/ __PVT__monitor__DOT__d_first;
        CData/*2:0*/ __PVT__monitor__DOT__opcode_1;
        CData/*1:0*/ __PVT__monitor__DOT__param_1;
        CData/*2:0*/ __PVT__monitor__DOT__size_1;
        CData/*3:0*/ __PVT__monitor__DOT__source_1;
        CData/*5:0*/ __PVT__monitor__DOT__sink;
        CData/*0:0*/ __PVT__monitor__DOT__denied;
        CData/*2:0*/ __PVT__monitor__DOT__a_first_counter_1;
        CData/*2:0*/ __PVT__monitor__DOT__a_first_counter1_1;
        CData/*0:0*/ __PVT__monitor__DOT__a_first_1;
        CData/*2:0*/ __PVT__monitor__DOT__d_first_counter_1;
        CData/*2:0*/ __PVT__monitor__DOT__d_first_counter1_1;
        CData/*0:0*/ __PVT__monitor__DOT__d_first_1;
        CData/*2:0*/ __PVT__monitor__DOT___GEN_30;
        CData/*2:0*/ __PVT__monitor__DOT___GEN_46;
        CData/*2:0*/ __PVT__monitor__DOT__d_first_counter_2;
        CData/*2:0*/ __PVT__monitor__DOT__d_first_counter1_2;
        CData/*0:0*/ __PVT__monitor__DOT__d_first_2;
        CData/*0:0*/ __PVT__repeated_repeater__DOT__full;
        CData/*2:0*/ __PVT__repeated_repeater__DOT__saved_opcode;
        CData/*2:0*/ __PVT__repeated_repeater__DOT__saved_size;
        CData/*3:0*/ __PVT__repeated_repeater__DOT__saved_source;
        CData/*7:0*/ __PVT__repeated_repeater__DOT__saved_mask;
    };
    struct {
        CData/*0:0*/ __PVT__repeated_repeater__DOT___T;
        CData/*0:0*/ __PVT__repeated_repeater__DOT___GEN_0;
        SData/*15:0*/ __PVT__monitor__DOT__inflight;
        SData/*15:0*/ __PVT__monitor__DOT___inflight_T_2;
        SData/*15:0*/ __PVT__monitor__DOT__inflight_1;
        SData/*15:0*/ __PVT__monitor__DOT___inflight_T_5;
        IData/*31:0*/ __PVT__repeated_repeater_io_deq_bits_address;
        IData/*31:0*/ __PVT__bundleIn_0_d_bits_data_rdata_0;
        IData/*31:0*/ __PVT__monitor__DOT__address;
        VlWide<5>/*142:0*/ __PVT__monitor__DOT___GEN_23;
        IData/*31:0*/ __PVT__monitor__DOT__watchdog;
        IData/*31:0*/ __PVT__monitor__DOT___watchdog_T_1;
        IData/*31:0*/ __PVT__monitor__DOT__watchdog_1;
        IData/*31:0*/ __PVT__monitor__DOT___watchdog_T_3;
        IData/*31:0*/ __PVT__monitor__DOT__plusarg_reader__DOT__myplus;
        IData/*31:0*/ __PVT__monitor__DOT__plusarg_reader_1__DOT__myplus;
        IData/*31:0*/ __PVT__repeated_repeater__DOT__saved_address;
        QData/*63:0*/ __PVT__cated_bits_data;
        QData/*63:0*/ __PVT__monitor__DOT__inflight_opcodes;
        QData/*63:0*/ __PVT__monitor__DOT__inflight_sizes;
        QData/*63:0*/ __PVT__monitor__DOT___a_opcode_lookup_T_1;
        QData/*63:0*/ __PVT__monitor__DOT___inflight_opcodes_T_2;
        QData/*63:0*/ __PVT__monitor__DOT___inflight_sizes_T_2;
        QData/*63:0*/ __PVT__monitor__DOT__inflight_sizes_1;
        QData/*63:0*/ __PVT__monitor__DOT___inflight_sizes_T_5;
        QData/*63:0*/ __PVT__repeated_repeater__DOT__saved_data;
    };

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VysyxSoCFull_TLWidthWidget);  ///< Copying not allowed
  public:
    VysyxSoCFull_TLWidthWidget(const char* name);
    ~VysyxSoCFull_TLWidthWidget();

    // INTERNAL METHODS
    void __Vconfigure(VysyxSoCFull__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
