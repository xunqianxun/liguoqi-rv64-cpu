// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_RX_H_
#define VERILATED_VYSYXSOCFULL_RX_H_  // guard

#include "verilated_heavy.h"

//==========

class VysyxSoCFull__Syms;
class VysyxSoCFull_VerilatedVcd;
class VysyxSoCFull_AsyncQueueSource;


//----------

VL_MODULE(VysyxSoCFull_RX) {
  public:
    // CELLS
    VysyxSoCFull_AsyncQueueSource* __PVT__io_a_source;
    VysyxSoCFull_AsyncQueueSource* __PVT__io_bsource;
    VysyxSoCFull_AsyncQueueSource* __PVT__io_c_source;
    VysyxSoCFull_AsyncQueueSource* __PVT__io_d_source;
    VysyxSoCFull_AsyncQueueSource* __PVT__io_e_source;

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_b2c_send,0,0);
    VL_IN8(io_a_ridx,3,0);
    VL_OUT8(io_a_widx,3,0);
    VL_IN8(io_a_safe_ridx_valid,0,0);
    VL_OUT8(io_a_safe_widx_valid,0,0);
    VL_OUT8(io_a_safe_source_reset_n,0,0);
    VL_IN8(io_a_safe_sink_reset_n,0,0);
    VL_IN8(io_bridx,3,0);
    VL_OUT8(io_bwidx,3,0);
    VL_IN8(io_bsafe_ridx_valid,0,0);
    VL_OUT8(io_bsafe_widx_valid,0,0);
    VL_OUT8(io_bsafe_source_reset_n,0,0);
    VL_IN8(io_bsafe_sink_reset_n,0,0);
    VL_IN8(io_c_ridx,3,0);
    VL_OUT8(io_c_widx,3,0);
    VL_IN8(io_c_safe_ridx_valid,0,0);
    VL_OUT8(io_c_safe_widx_valid,0,0);
    VL_OUT8(io_c_safe_source_reset_n,0,0);
    VL_IN8(io_c_safe_sink_reset_n,0,0);
    VL_IN8(io_d_ridx,3,0);
    VL_OUT8(io_d_widx,3,0);
    VL_IN8(io_d_safe_ridx_valid,0,0);
    VL_OUT8(io_d_safe_widx_valid,0,0);
    VL_OUT8(io_d_safe_source_reset_n,0,0);
    VL_IN8(io_d_safe_sink_reset_n,0,0);
    VL_IN8(io_e_ridx,3,0);
    VL_OUT8(io_e_widx,3,0);
    VL_IN8(io_e_safe_ridx_valid,0,0);
    VL_OUT8(io_e_safe_widx_valid,0,0);
    VL_OUT8(io_e_safe_source_reset_n,0,0);
    VL_IN8(io_e_safe_sink_reset_n,0,0);
    VL_IN8(io_rxc_ridx,0,0);
    VL_OUT8(io_rxc_widx,0,0);
    VL_IN8(io_rxc_safe_ridx_valid,0,0);
    VL_OUT8(io_rxc_safe_widx_valid,0,0);
    VL_OUT8(io_rxc_safe_source_reset_n,0,0);
    VL_IN8(io_rxc_safe_sink_reset_n,0,0);
    VL_IN8(io_txc_ridx,0,0);
    VL_OUT8(io_txc_widx,0,0);
    VL_IN8(io_txc_safe_ridx_valid,0,0);
    VL_OUT8(io_txc_safe_widx_valid,0,0);
    VL_OUT8(io_txc_safe_source_reset_n,0,0);
    VL_IN8(io_txc_safe_sink_reset_n,0,0);
    VL_IN(io_b2c_data,31,0);
    VL_OUT(io_a_mem_0,31,0);
    VL_OUT(io_a_mem_1,31,0);
    VL_OUT(io_a_mem_2,31,0);
    VL_OUT(io_a_mem_3,31,0);
    VL_OUT(io_a_mem_4,31,0);
    VL_OUT(io_a_mem_5,31,0);
    VL_OUT(io_a_mem_6,31,0);
    VL_OUT(io_a_mem_7,31,0);
    VL_OUT(io_bmem_0,31,0);
    VL_OUT(io_bmem_1,31,0);
    VL_OUT(io_bmem_2,31,0);
    VL_OUT(io_bmem_3,31,0);
    VL_OUT(io_bmem_4,31,0);
    VL_OUT(io_bmem_5,31,0);
    VL_OUT(io_bmem_6,31,0);
    VL_OUT(io_bmem_7,31,0);
    VL_OUT(io_c_mem_0,31,0);
    VL_OUT(io_c_mem_1,31,0);
    VL_OUT(io_c_mem_2,31,0);
    VL_OUT(io_c_mem_3,31,0);
    VL_OUT(io_c_mem_4,31,0);
    VL_OUT(io_c_mem_5,31,0);
    VL_OUT(io_c_mem_6,31,0);
    VL_OUT(io_c_mem_7,31,0);
    VL_OUT(io_d_mem_0,31,0);
    VL_OUT(io_d_mem_1,31,0);
    VL_OUT(io_d_mem_2,31,0);
    VL_OUT(io_d_mem_3,31,0);
    VL_OUT(io_d_mem_4,31,0);
    VL_OUT(io_d_mem_5,31,0);
    VL_OUT(io_d_mem_6,31,0);
    VL_OUT(io_d_mem_7,31,0);
    VL_OUT(io_e_mem_0,31,0);
    VL_OUT(io_e_mem_1,31,0);
    VL_OUT(io_e_mem_2,31,0);
    VL_OUT(io_e_mem_3,31,0);
    VL_OUT(io_e_mem_4,31,0);
    VL_OUT(io_e_mem_5,31,0);
    VL_OUT(io_e_mem_6,31,0);
    VL_OUT(io_e_mem_7,31,0);
    VL_OUT(io_rxc_mem_0_a,19,0);
    VL_OUT(io_rxc_mem_0_b,19,0);
    VL_OUT(io_rxc_mem_0_c,19,0);
    VL_OUT(io_rxc_mem_0_d,19,0);
    VL_OUT(io_rxc_mem_0_e,19,0);
    VL_OUT(io_txc_mem_0_a,19,0);
    VL_OUT(io_txc_mem_0_b,19,0);
    VL_OUT(io_txc_mem_0_c,19,0);
    VL_OUT(io_txc_mem_0_d,19,0);
    VL_OUT(io_txc_mem_0_e,19,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__io_txc_source__DOT__source_valid_0_reset;
        CData/*0:0*/ __PVT__hqa_io_enq_valid;
        CData/*0:0*/ __PVT__hqb_io_enq_valid;
        CData/*0:0*/ __PVT__hqc_io_enq_valid;
        CData/*0:0*/ __PVT__hqd_io_enq_valid;
        CData/*0:0*/ __PVT__hqe_io_enq_valid;
        CData/*0:0*/ __PVT__io_txc_source_io_enq_ready;
        CData/*0:0*/ __PVT__io_rxc_source_io_enq_ready;
        CData/*0:0*/ __PVT__b2c_send_REG;
        CData/*0:0*/ __PVT__b2c_send;
        CData/*4:0*/ __PVT__first_count;
        CData/*4:0*/ __PVT__first_beats_beats;
        CData/*4:0*/ __PVT___first_beats_c_T_1;
        CData/*0:0*/ __PVT__first;
        CData/*4:0*/ __PVT___first_count_T_1;
        CData/*0:0*/ __PVT__formatValid;
        CData/*2:0*/ __PVT__format_r;
        CData/*2:0*/ __PVT___GEN_7;
        CData/*0:0*/ __PVT___rxInc_a_T;
        CData/*0:0*/ __PVT___rxInc_bT;
        CData/*0:0*/ __PVT___rxInc_c_T;
        CData/*0:0*/ __PVT___rxInc_d_T;
        CData/*0:0*/ __PVT___rxInc_e_T;
        CData/*0:0*/ __PVT__hqa__DOT__fq_io_deq_valid;
        CData/*0:0*/ __PVT__hqa__DOT__io_deq_q_io_enq_ready;
        CData/*0:0*/ __PVT__hqa__DOT__fq__DOT__ram_R0_en;
        CData/*0:0*/ __PVT__hqa__DOT__fq__DOT___do_enq_T;
        CData/*4:0*/ __PVT__hqa__DOT__fq__DOT__enq_ptr;
        CData/*4:0*/ __PVT__hqa__DOT__fq__DOT__deq_ptr;
        CData/*0:0*/ __PVT__hqa__DOT__fq__DOT__ptr_match;
        CData/*0:0*/ __PVT__hqa__DOT__fq__DOT__maybe_full;
        CData/*0:0*/ __PVT__hqa__DOT__fq__DOT__empty;
        CData/*0:0*/ __PVT__hqa__DOT__fq__DOT__do_flow;
        CData/*0:0*/ __PVT__hqa__DOT__fq__DOT__do_enq;
        CData/*0:0*/ __PVT__hqa__DOT__fq__DOT__do_deq;
        CData/*4:0*/ __PVT__hqa__DOT__fq__DOT___enq_ptr_wrap_value_T_1;
        CData/*4:0*/ __PVT__hqa__DOT__fq__DOT___wrap_value_T_1;
        CData/*0:0*/ __PVT__hqa__DOT__fq__DOT__full;
        CData/*0:0*/ __PVT__hqa__DOT__fq__DOT__atLeastTwo;
        CData/*0:0*/ __PVT__hqa__DOT__fq__DOT__ram_out_valid;
        CData/*0:0*/ __PVT__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_ren;
        CData/*4:0*/ __PVT__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_addr;
        CData/*0:0*/ __PVT__hqa__DOT__io_deq_q__DOT__maybe_full;
        CData/*0:0*/ __PVT__hqa__DOT__io_deq_q__DOT__do_enq;
        CData/*0:0*/ __PVT__hqa__DOT__io_deq_q__DOT__do_deq;
        CData/*0:0*/ __PVT__hqb__DOT__fq_io_deq_valid;
        CData/*0:0*/ __PVT__hqb__DOT__io_deq_q_io_enq_ready;
        CData/*0:0*/ __PVT__hqb__DOT__fq__DOT__ram_R0_en;
        CData/*0:0*/ __PVT__hqb__DOT__fq__DOT___do_enq_T;
        CData/*4:0*/ __PVT__hqb__DOT__fq__DOT__enq_ptr;
        CData/*4:0*/ __PVT__hqb__DOT__fq__DOT__deq_ptr;
        CData/*0:0*/ __PVT__hqb__DOT__fq__DOT__ptr_match;
        CData/*0:0*/ __PVT__hqb__DOT__fq__DOT__maybe_full;
        CData/*0:0*/ __PVT__hqb__DOT__fq__DOT__empty;
        CData/*0:0*/ __PVT__hqb__DOT__fq__DOT__do_flow;
        CData/*0:0*/ __PVT__hqb__DOT__fq__DOT__do_enq;
        CData/*0:0*/ __PVT__hqb__DOT__fq__DOT__do_deq;
        CData/*4:0*/ __PVT__hqb__DOT__fq__DOT___enq_ptr_wrap_value_T_1;
        CData/*4:0*/ __PVT__hqb__DOT__fq__DOT___wrap_value_T_1;
        CData/*0:0*/ __PVT__hqb__DOT__fq__DOT__full;
        CData/*0:0*/ __PVT__hqb__DOT__fq__DOT__atLeastTwo;
        CData/*0:0*/ __PVT__hqb__DOT__fq__DOT__ram_out_valid;
        CData/*0:0*/ __PVT__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_ren;
        CData/*4:0*/ __PVT__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_addr;
    };
    struct {
        CData/*0:0*/ __PVT__hqb__DOT__io_deq_q__DOT__maybe_full;
        CData/*0:0*/ __PVT__hqb__DOT__io_deq_q__DOT__do_enq;
        CData/*0:0*/ __PVT__hqb__DOT__io_deq_q__DOT__do_deq;
        CData/*0:0*/ __PVT__hqc__DOT__fq_io_deq_valid;
        CData/*0:0*/ __PVT__hqc__DOT__io_deq_q_io_enq_ready;
        CData/*0:0*/ __PVT__hqc__DOT__fq__DOT__ram_R0_en;
        CData/*0:0*/ __PVT__hqc__DOT__fq__DOT___do_enq_T;
        CData/*4:0*/ __PVT__hqc__DOT__fq__DOT__enq_ptr;
        CData/*4:0*/ __PVT__hqc__DOT__fq__DOT__deq_ptr;
        CData/*0:0*/ __PVT__hqc__DOT__fq__DOT__ptr_match;
        CData/*0:0*/ __PVT__hqc__DOT__fq__DOT__maybe_full;
        CData/*0:0*/ __PVT__hqc__DOT__fq__DOT__empty;
        CData/*0:0*/ __PVT__hqc__DOT__fq__DOT__do_flow;
        CData/*0:0*/ __PVT__hqc__DOT__fq__DOT__do_enq;
        CData/*0:0*/ __PVT__hqc__DOT__fq__DOT__do_deq;
        CData/*4:0*/ __PVT__hqc__DOT__fq__DOT___enq_ptr_wrap_value_T_1;
        CData/*4:0*/ __PVT__hqc__DOT__fq__DOT___wrap_value_T_1;
        CData/*0:0*/ __PVT__hqc__DOT__fq__DOT__full;
        CData/*0:0*/ __PVT__hqc__DOT__fq__DOT__atLeastTwo;
        CData/*0:0*/ __PVT__hqc__DOT__fq__DOT__ram_out_valid;
        CData/*0:0*/ __PVT__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_ren;
        CData/*4:0*/ __PVT__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_addr;
        CData/*0:0*/ __PVT__hqc__DOT__io_deq_q__DOT__maybe_full;
        CData/*0:0*/ __PVT__hqc__DOT__io_deq_q__DOT__do_enq;
        CData/*0:0*/ __PVT__hqc__DOT__io_deq_q__DOT__do_deq;
        CData/*0:0*/ __PVT__hqd__DOT__fq_io_deq_valid;
        CData/*0:0*/ __PVT__hqd__DOT__io_deq_q_io_enq_ready;
        CData/*0:0*/ __PVT__hqd__DOT__fq__DOT__ram_R0_en;
        CData/*0:0*/ __PVT__hqd__DOT__fq__DOT___do_enq_T;
        CData/*4:0*/ __PVT__hqd__DOT__fq__DOT__enq_ptr;
        CData/*4:0*/ __PVT__hqd__DOT__fq__DOT__deq_ptr;
        CData/*0:0*/ __PVT__hqd__DOT__fq__DOT__ptr_match;
        CData/*0:0*/ __PVT__hqd__DOT__fq__DOT__maybe_full;
        CData/*0:0*/ __PVT__hqd__DOT__fq__DOT__empty;
        CData/*0:0*/ __PVT__hqd__DOT__fq__DOT__do_flow;
        CData/*0:0*/ __PVT__hqd__DOT__fq__DOT__do_enq;
        CData/*0:0*/ __PVT__hqd__DOT__fq__DOT__do_deq;
        CData/*4:0*/ __PVT__hqd__DOT__fq__DOT___enq_ptr_wrap_value_T_1;
        CData/*4:0*/ __PVT__hqd__DOT__fq__DOT___wrap_value_T_1;
        CData/*0:0*/ __PVT__hqd__DOT__fq__DOT__full;
        CData/*0:0*/ __PVT__hqd__DOT__fq__DOT__atLeastTwo;
        CData/*0:0*/ __PVT__hqd__DOT__fq__DOT__ram_out_valid;
        CData/*0:0*/ __PVT__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_ren;
        CData/*4:0*/ __PVT__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_addr;
        CData/*0:0*/ __PVT__hqd__DOT__io_deq_q__DOT__maybe_full;
        CData/*0:0*/ __PVT__hqd__DOT__io_deq_q__DOT__do_enq;
        CData/*0:0*/ __PVT__hqd__DOT__io_deq_q__DOT__do_deq;
        CData/*0:0*/ __PVT__hqe__DOT__fq_io_deq_valid;
        CData/*0:0*/ __PVT__hqe__DOT__io_deq_q_io_enq_ready;
        CData/*0:0*/ __PVT__hqe__DOT__fq__DOT__ram_R0_en;
        CData/*0:0*/ __PVT__hqe__DOT__fq__DOT___do_enq_T;
        CData/*4:0*/ __PVT__hqe__DOT__fq__DOT__enq_ptr;
        CData/*4:0*/ __PVT__hqe__DOT__fq__DOT__deq_ptr;
        CData/*0:0*/ __PVT__hqe__DOT__fq__DOT__ptr_match;
        CData/*0:0*/ __PVT__hqe__DOT__fq__DOT__maybe_full;
        CData/*0:0*/ __PVT__hqe__DOT__fq__DOT__empty;
        CData/*0:0*/ __PVT__hqe__DOT__fq__DOT__do_flow;
        CData/*0:0*/ __PVT__hqe__DOT__fq__DOT__do_enq;
        CData/*0:0*/ __PVT__hqe__DOT__fq__DOT__do_deq;
        CData/*4:0*/ __PVT__hqe__DOT__fq__DOT___enq_ptr_wrap_value_T_1;
        CData/*4:0*/ __PVT__hqe__DOT__fq__DOT___wrap_value_T_1;
        CData/*0:0*/ __PVT__hqe__DOT__fq__DOT__full;
        CData/*0:0*/ __PVT__hqe__DOT__fq__DOT__atLeastTwo;
        CData/*0:0*/ __PVT__hqe__DOT__fq__DOT__ram_out_valid;
    };
    struct {
        CData/*0:0*/ __PVT__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_ren;
        CData/*4:0*/ __PVT__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__reg_R0_addr;
        CData/*0:0*/ __PVT__hqe__DOT__io_deq_q__DOT__maybe_full;
        CData/*0:0*/ __PVT__hqe__DOT__io_deq_q__DOT__do_enq;
        CData/*0:0*/ __PVT__hqe__DOT__io_deq_q__DOT__do_deq;
        CData/*0:0*/ __PVT__io_txc_source__DOT__widx_widx_bin;
        CData/*0:0*/ __PVT__io_txc_source__DOT__ready_reg;
        CData/*0:0*/ __PVT__io_txc_source__DOT__widx_gray;
        CData/*0:0*/ __PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0;
        CData/*0:0*/ __PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1;
        CData/*0:0*/ __PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2;
        CData/*0:0*/ __PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
        CData/*0:0*/ __PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
        CData/*0:0*/ __PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
        CData/*0:0*/ __PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
        CData/*0:0*/ __PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
        CData/*0:0*/ __PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
        CData/*0:0*/ __PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
        CData/*0:0*/ __PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
        CData/*0:0*/ __PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
        CData/*0:0*/ __PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
        CData/*0:0*/ __PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
        CData/*0:0*/ __PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
        CData/*0:0*/ __PVT__io_rxc_source__DOT__widx_widx_bin;
        CData/*0:0*/ __PVT__io_rxc_source__DOT__ready_reg;
        CData/*0:0*/ __PVT__io_rxc_source__DOT__widx_gray;
        CData/*0:0*/ __PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0;
        CData/*0:0*/ __PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1;
        CData/*0:0*/ __PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2;
        CData/*0:0*/ __PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
        CData/*0:0*/ __PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
        CData/*0:0*/ __PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
        CData/*0:0*/ __PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
        CData/*0:0*/ __PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
        CData/*0:0*/ __PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
        CData/*0:0*/ __PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
        CData/*0:0*/ __PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
        CData/*0:0*/ __PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
        CData/*0:0*/ __PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
        CData/*0:0*/ __PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
        CData/*0:0*/ __PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
        IData/*31:0*/ __PVT__b2c_data_REG;
        IData/*31:0*/ __PVT__b2c_data;
        IData/*19:0*/ __PVT__tx_a;
        IData/*19:0*/ __PVT__tx_b;
        IData/*19:0*/ __PVT__tx_c;
        IData/*19:0*/ __PVT__tx_d;
        IData/*19:0*/ __PVT__tx_e;
        IData/*19:0*/ __PVT__rx_a;
        IData/*19:0*/ __PVT__rx_b;
        IData/*19:0*/ __PVT__rx_c;
        IData/*19:0*/ __PVT__rx_d;
        IData/*19:0*/ __PVT__rx_e;
        IData/*20:0*/ __PVT__tx_z;
        IData/*20:0*/ __PVT__tx_z_1;
        IData/*20:0*/ __PVT__tx_z_2;
        IData/*20:0*/ __PVT__tx_z_3;
        IData/*20:0*/ __PVT__tx_z_4;
        IData/*20:0*/ __PVT__rx_z;
        IData/*20:0*/ __PVT__rx_z_1;
        IData/*20:0*/ __PVT__rx_z_2;
        IData/*20:0*/ __PVT__rx_z_3;
        IData/*20:0*/ __PVT__rx_z_4;
        IData/*31:0*/ __PVT__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__i;
    };
    struct {
        IData/*31:0*/ __PVT__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__i;
        IData/*31:0*/ __PVT__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__i;
        IData/*31:0*/ __PVT__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__i;
        IData/*31:0*/ __PVT__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__i;
        IData/*19:0*/ __PVT__io_txc_source__DOT__mem_0_a;
        IData/*19:0*/ __PVT__io_txc_source__DOT__mem_0_b;
        IData/*19:0*/ __PVT__io_txc_source__DOT__mem_0_c;
        IData/*19:0*/ __PVT__io_txc_source__DOT__mem_0_d;
        IData/*19:0*/ __PVT__io_txc_source__DOT__mem_0_e;
        IData/*19:0*/ __PVT__io_rxc_source__DOT__mem_0_a;
        IData/*19:0*/ __PVT__io_rxc_source__DOT__mem_0_b;
        IData/*19:0*/ __PVT__io_rxc_source__DOT__mem_0_c;
        IData/*19:0*/ __PVT__io_rxc_source__DOT__mem_0_d;
        IData/*19:0*/ __PVT__io_rxc_source__DOT__mem_0_e;
        VlUnpacked<IData/*31:0*/, 32> __PVT__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram;
        VlUnpacked<IData/*31:0*/, 1> __PVT__hqa__DOT__io_deq_q__DOT__ram;
        VlUnpacked<IData/*31:0*/, 32> __PVT__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram;
        VlUnpacked<IData/*31:0*/, 1> __PVT__hqb__DOT__io_deq_q__DOT__ram;
        VlUnpacked<IData/*31:0*/, 32> __PVT__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram;
        VlUnpacked<IData/*31:0*/, 1> __PVT__hqc__DOT__io_deq_q__DOT__ram;
        VlUnpacked<IData/*31:0*/, 32> __PVT__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram;
        VlUnpacked<IData/*31:0*/, 1> __PVT__hqd__DOT__io_deq_q__DOT__ram;
        VlUnpacked<IData/*31:0*/, 32> __PVT__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram;
        VlUnpacked<IData/*31:0*/, 1> __PVT__hqe__DOT__io_deq_q__DOT__ram;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vdlyvset__hqa__DOT__io_deq_q__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__hqb__DOT__io_deq_q__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__hqc__DOT__io_deq_q__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__hqd__DOT__io_deq_q__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__hqe__DOT__io_deq_q__DOT__ram__v0;
    IData/*31:0*/ __Vdlyvval__hqa__DOT__io_deq_q__DOT__ram__v0;
    IData/*31:0*/ __Vdlyvval__hqb__DOT__io_deq_q__DOT__ram__v0;
    IData/*31:0*/ __Vdlyvval__hqc__DOT__io_deq_q__DOT__ram__v0;
    IData/*31:0*/ __Vdlyvval__hqd__DOT__io_deq_q__DOT__ram__v0;
    IData/*31:0*/ __Vdlyvval__hqe__DOT__io_deq_q__DOT__ram__v0;

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VysyxSoCFull_RX);  ///< Copying not allowed
  public:
    VysyxSoCFull_RX(const char* name);
    ~VysyxSoCFull_RX();

    // INTERNAL METHODS
    void __Vconfigure(VysyxSoCFull__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
