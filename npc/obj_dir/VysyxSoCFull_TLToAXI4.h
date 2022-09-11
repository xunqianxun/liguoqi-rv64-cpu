// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_TLTOAXI4_H_
#define VERILATED_VYSYXSOCFULL_TLTOAXI4_H_  // guard

#include "verilated_heavy.h"

//==========

class VysyxSoCFull__Syms;
class VysyxSoCFull_VerilatedVcd;


//----------

VL_MODULE(VysyxSoCFull_TLToAXI4) {
  public:

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(auto_in_a_ready,0,0);
    VL_IN8(auto_in_a_valid,0,0);
    VL_IN8(auto_in_a_bits_opcode,2,0);
    VL_IN8(auto_in_a_bits_param,2,0);
    VL_IN8(auto_in_a_bits_size,2,0);
    VL_IN8(auto_in_a_bits_source,6,0);
    VL_IN8(auto_in_a_bits_mask,7,0);
    VL_IN8(auto_in_a_bits_corrupt,0,0);
    VL_IN8(auto_in_d_ready,0,0);
    VL_OUT8(auto_in_d_valid,0,0);
    VL_OUT8(auto_in_d_bits_opcode,2,0);
    VL_OUT8(auto_in_d_bits_size,2,0);
    VL_OUT8(auto_in_d_bits_source,6,0);
    VL_OUT8(auto_in_d_bits_denied,0,0);
    VL_OUT8(auto_in_d_bits_corrupt,0,0);
    VL_IN8(auto_out_awready,0,0);
    VL_OUT8(auto_out_awvalid,0,0);
    VL_OUT8(auto_out_awid,4,0);
    VL_OUT8(auto_out_awlen,7,0);
    VL_OUT8(auto_out_awsize,2,0);
    VL_OUT8(auto_out_awburst,1,0);
    VL_OUT8(auto_out_awecho_tl_state_size,3,0);
    VL_OUT8(auto_out_awecho_tl_state_source,6,0);
    VL_IN8(auto_out_wready,0,0);
    VL_OUT8(auto_out_wvalid,0,0);
    VL_OUT8(auto_out_wstrb,7,0);
    VL_OUT8(auto_out_wlast,0,0);
    VL_OUT8(auto_out_bready,0,0);
    VL_IN8(auto_out_bvalid,0,0);
    VL_IN8(auto_out_bid,4,0);
    VL_IN8(auto_out_bresp,1,0);
    VL_IN8(auto_out_becho_tl_state_size,3,0);
    VL_IN8(auto_out_becho_tl_state_source,6,0);
    VL_IN8(auto_out_arready,0,0);
    VL_OUT8(auto_out_arvalid,0,0);
    VL_OUT8(auto_out_arid,4,0);
    VL_OUT8(auto_out_arlen,7,0);
    VL_OUT8(auto_out_arsize,2,0);
    VL_OUT8(auto_out_arburst,1,0);
    VL_OUT8(auto_out_arecho_tl_state_size,3,0);
    VL_OUT8(auto_out_arecho_tl_state_source,6,0);
    VL_OUT8(auto_out_rready,0,0);
    VL_IN8(auto_out_rvalid,0,0);
    VL_IN8(auto_out_rid,4,0);
    VL_IN8(auto_out_rresp,1,0);
    VL_IN8(auto_out_recho_tl_state_size,3,0);
    VL_IN8(auto_out_recho_tl_state_source,6,0);
    VL_IN8(auto_out_rlast,0,0);
    VL_IN(auto_in_a_bits_address,31,0);
    VL_OUT(auto_out_awaddr,31,0);
    VL_OUT(auto_out_araddr,31,0);
    VL_IN64(auto_in_a_bits_data,63,0);
    VL_OUT64(auto_in_d_bits_data,63,0);
    VL_OUT64(auto_out_wdata,63,0);
    VL_IN64(auto_out_rdata,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__monitor_io_in_a_ready;
        CData/*0:0*/ __PVT__monitor_io_in_d_valid;
        CData/*2:0*/ __PVT__monitor_io_in_d_bits_size;
        CData/*6:0*/ __PVT__monitor_io_in_d_bits_source;
        CData/*0:0*/ __PVT__monitor_io_in_d_bits_denied;
        CData/*0:0*/ __PVT__deq_io_enq_valid;
        CData/*0:0*/ __PVT__deq_io_enq_bits_last;
        CData/*0:0*/ __PVT__deq_io_deq_valid;
        CData/*7:0*/ __PVT__deq_io_deq_bits_strb;
        CData/*0:0*/ __PVT__queue_arw_deq_io_enq_valid;
        CData/*4:0*/ __PVT__queue_arw_deq_io_enq_bits_id;
        CData/*2:0*/ __PVT__queue_arw_deq_io_enq_bits_size;
        CData/*0:0*/ __PVT__queue_arw_deq_io_deq_ready;
        CData/*0:0*/ __PVT__queue_arw_deq_io_deq_valid;
        CData/*4:0*/ __PVT__queue_arw_deq_io_deq_bits_id;
        CData/*7:0*/ __PVT__queue_arw_deq_io_deq_bits_len;
        CData/*2:0*/ __PVT__queue_arw_deq_io_deq_bits_size;
        CData/*1:0*/ __PVT__queue_arw_deq_io_deq_bits_burst;
        CData/*3:0*/ __PVT__queue_arw_deq_io_deq_bits_echo_tl_state_size;
        CData/*6:0*/ __PVT__queue_arw_deq_io_deq_bits_echo_tl_state_source;
        CData/*0:0*/ __PVT__queue_arw_deq_io_deq_bits_wen;
        CData/*4:0*/ __PVT__count_7;
        CData/*0:0*/ __PVT__write_6;
        CData/*0:0*/ __PVT__idStall_6;
        CData/*4:0*/ __PVT__count_6;
        CData/*0:0*/ __PVT__write_5;
        CData/*0:0*/ __PVT__idStall_5;
        CData/*4:0*/ __PVT__count_5;
        CData/*0:0*/ __PVT__write_4;
        CData/*0:0*/ __PVT__idStall_4;
        CData/*4:0*/ __PVT__count_4;
        CData/*0:0*/ __PVT__write_3;
        CData/*0:0*/ __PVT__idStall_3;
        CData/*4:0*/ __PVT__count_3;
        CData/*0:0*/ __PVT__write_2;
        CData/*0:0*/ __PVT__idStall_2;
        CData/*4:0*/ __PVT__count_2;
        CData/*0:0*/ __PVT__write_1;
        CData/*0:0*/ __PVT__idStall_1;
        CData/*4:0*/ __PVT__count_1;
        CData/*0:0*/ __PVT__write;
        CData/*0:0*/ __PVT__idStall_0;
        CData/*0:0*/ __PVT__count_23;
        CData/*0:0*/ __PVT__count_22;
        CData/*0:0*/ __PVT__count_21;
        CData/*0:0*/ __PVT__count_20;
        CData/*0:0*/ __PVT__count_19;
        CData/*0:0*/ __PVT__count_18;
        CData/*0:0*/ __PVT__count_17;
        CData/*0:0*/ __PVT__count_16;
        CData/*0:0*/ __PVT__count_15;
        CData/*0:0*/ __PVT__count_14;
        CData/*0:0*/ __PVT__count_13;
        CData/*0:0*/ __PVT__count_12;
        CData/*0:0*/ __PVT__count_11;
        CData/*0:0*/ __PVT__count_10;
        CData/*0:0*/ __PVT__count_9;
        CData/*0:0*/ __PVT__count_8;
        CData/*2:0*/ __PVT__counter;
        CData/*0:0*/ __PVT__a_first;
        CData/*0:0*/ __PVT__stall;
        CData/*0:0*/ __PVT__doneAW;
        CData/*0:0*/ __PVT___bundleIn_0_a_ready_T_3;
        CData/*0:0*/ __PVT___T;
    };
    struct {
        CData/*2:0*/ __PVT__beats1;
        CData/*2:0*/ __PVT__counter1;
        CData/*4:0*/ __PVT__out_arw_bits_id;
        CData/*0:0*/ __PVT___out_arw_valid_T_4;
        CData/*0:0*/ __PVT__r_holds_d;
        CData/*2:0*/ __PVT__b_delay;
        CData/*0:0*/ __PVT__r_wins;
        CData/*0:0*/ __PVT___T_2;
        CData/*2:0*/ __PVT___bdelay_T_1;
        CData/*0:0*/ __PVT__r_first;
        CData/*0:0*/ __PVT___GEN_260;
        CData/*0:0*/ __PVT__r_denied_r;
        CData/*0:0*/ __PVT___GEN_261;
        CData/*0:0*/ __PVT__r_d_corrupt;
        CData/*4:0*/ __PVT__d_sel_shiftAmount;
        CData/*0:0*/ __PVT__d_last;
        CData/*0:0*/ __PVT___inc_T;
        CData/*0:0*/ __PVT__inc;
        CData/*0:0*/ __PVT___dec_T_1;
        CData/*4:0*/ __PVT___count_T_4;
        CData/*0:0*/ __PVT__inc_1;
        CData/*4:0*/ __PVT___count_T_8;
        CData/*0:0*/ __PVT__inc_2;
        CData/*4:0*/ __PVT___count_T_12;
        CData/*0:0*/ __PVT__inc_3;
        CData/*4:0*/ __PVT___count_T_16;
        CData/*0:0*/ __PVT__inc_4;
        CData/*4:0*/ __PVT___count_T_20;
        CData/*0:0*/ __PVT__inc_5;
        CData/*4:0*/ __PVT___count_T_24;
        CData/*0:0*/ __PVT__inc_6;
        CData/*4:0*/ __PVT___count_T_28;
        CData/*0:0*/ __PVT___count_T_30;
        CData/*0:0*/ __PVT___count_T_34;
        CData/*0:0*/ __PVT___count_T_38;
        CData/*0:0*/ __PVT___count_T_42;
        CData/*0:0*/ __PVT___count_T_46;
        CData/*0:0*/ __PVT___count_T_50;
        CData/*0:0*/ __PVT___count_T_54;
        CData/*0:0*/ __PVT___count_T_58;
        CData/*0:0*/ __PVT___count_T_62;
        CData/*0:0*/ __PVT___count_T_66;
        CData/*0:0*/ __PVT___count_T_70;
        CData/*0:0*/ __PVT___count_T_74;
        CData/*0:0*/ __PVT___count_T_78;
        CData/*0:0*/ __PVT___count_T_82;
        CData/*0:0*/ __PVT___count_T_86;
        CData/*0:0*/ __PVT___count_T_90;
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
        CData/*0:0*/ __PVT__monitor__DOT___a_first_T;
        CData/*2:0*/ __PVT__monitor__DOT__a_first_counter;
        CData/*2:0*/ __PVT__monitor__DOT__a_first_counter1;
        CData/*0:0*/ __PVT__monitor__DOT__a_first;
        CData/*2:0*/ __PVT__monitor__DOT__opcode;
    };
    struct {
        CData/*2:0*/ __PVT__monitor__DOT__param;
        CData/*2:0*/ __PVT__monitor__DOT__size;
        CData/*6:0*/ __PVT__monitor__DOT__source;
        CData/*0:0*/ __PVT__monitor__DOT___d_first_T;
        CData/*2:0*/ __PVT__monitor__DOT__d_first_counter;
        CData/*2:0*/ __PVT__monitor__DOT__d_first_counter1;
        CData/*0:0*/ __PVT__monitor__DOT__d_first;
        CData/*2:0*/ __PVT__monitor__DOT__opcode_1;
        CData/*2:0*/ __PVT__monitor__DOT__size_1;
        CData/*6:0*/ __PVT__monitor__DOT__source_1;
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
        CData/*0:0*/ __PVT__deq__DOT__maybe_full;
        CData/*0:0*/ __PVT__deq__DOT__empty;
        CData/*0:0*/ __PVT__deq__DOT___do_enq_T;
        CData/*0:0*/ __PVT__deq__DOT___GEN_9;
        CData/*0:0*/ __PVT__deq__DOT__do_enq;
        CData/*0:0*/ __PVT__deq__DOT__do_deq;
        CData/*0:0*/ __PVT__queue_arw_deq__DOT__maybe_full;
        CData/*0:0*/ __PVT__queue_arw_deq__DOT__empty;
        CData/*0:0*/ __PVT__queue_arw_deq__DOT___do_enq_T;
        CData/*0:0*/ __PVT__queue_arw_deq__DOT___GEN_18;
        CData/*0:0*/ __PVT__queue_arw_deq__DOT__do_enq;
        CData/*0:0*/ __PVT__queue_arw_deq__DOT__do_deq;
        IData/*31:0*/ __PVT__queue_arw_deq_io_deq_bits_addr;
        IData/*31:0*/ __PVT__monitor__DOT__address;
        VlWide<4>/*127:0*/ __PVT__monitor__DOT__inflight;
        VlWide<16>/*511:0*/ __PVT__monitor__DOT__inflight_opcodes;
        VlWide<16>/*511:0*/ __PVT__monitor__DOT__inflight_sizes;
        VlWide<16>/*511:0*/ __PVT__monitor__DOT___a_opcode_lookup_T_1;
        VlWide<4>/*127:0*/ __PVT__monitor__DOT__a_set_wo_ready;
        VlWide<33>/*1038:0*/ __PVT__monitor__DOT___GEN_23;
        VlWide<4>/*127:0*/ __PVT__monitor__DOT___inflight_T_2;
        VlWide<16>/*511:0*/ __PVT__monitor__DOT___inflight_opcodes_T;
        VlWide<16>/*511:0*/ __PVT__monitor__DOT___inflight_opcodes_T_2;
        VlWide<16>/*511:0*/ __PVT__monitor__DOT___inflight_sizes_T;
        VlWide<16>/*511:0*/ __PVT__monitor__DOT___inflight_sizes_T_2;
        IData/*31:0*/ __PVT__monitor__DOT__watchdog;
        IData/*31:0*/ __PVT__monitor__DOT___watchdog_T_1;
        VlWide<4>/*127:0*/ __PVT__monitor__DOT__inflight_1;
        VlWide<16>/*511:0*/ __PVT__monitor__DOT__inflight_sizes_1;
        VlWide<4>/*127:0*/ __PVT__monitor__DOT___inflight_T_5;
        VlWide<16>/*511:0*/ __PVT__monitor__DOT___inflight_sizes_T_5;
        IData/*31:0*/ __PVT__monitor__DOT__watchdog_1;
        IData/*31:0*/ __PVT__monitor__DOT___watchdog_T_3;
        IData/*31:0*/ __PVT__monitor__DOT__plusarg_reader__DOT__myplus;
        IData/*31:0*/ __PVT__monitor__DOT__plusarg_reader_1__DOT__myplus;
        QData/*63:0*/ __PVT__deq_io_deq_bits_data;
        VlUnpacked<QData/*63:0*/, 1> __PVT__deq__DOT__ram_data;
        VlUnpacked<CData/*7:0*/, 1> __PVT__deq__DOT__ram_strb;
        VlUnpacked<CData/*0:0*/, 1> __PVT__deq__DOT__ram_last;
        VlUnpacked<CData/*4:0*/, 1> __PVT__queue_arw_deq__DOT__ram_id;
        VlUnpacked<IData/*31:0*/, 1> __PVT__queue_arw_deq__DOT__ram_addr;
        VlUnpacked<CData/*7:0*/, 1> __PVT__queue_arw_deq__DOT__ram_len;
    };
    struct {
        VlUnpacked<CData/*2:0*/, 1> __PVT__queue_arw_deq__DOT__ram_size;
        VlUnpacked<CData/*1:0*/, 1> __PVT__queue_arw_deq__DOT__ram_burst;
        VlUnpacked<CData/*3:0*/, 1> __PVT__queue_arw_deq__DOT__ram_echo_tl_state_size;
        VlUnpacked<CData/*6:0*/, 1> __PVT__queue_arw_deq__DOT__ram_echo_tl_state_source;
        VlUnpacked<CData/*0:0*/, 1> __PVT__queue_arw_deq__DOT__ram_wen;
    };

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VysyxSoCFull_TLToAXI4);  ///< Copying not allowed
  public:
    VysyxSoCFull_TLToAXI4(const char* name);
    ~VysyxSoCFull_TLToAXI4();

    // INTERNAL METHODS
    void __Vconfigure(VysyxSoCFull__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
