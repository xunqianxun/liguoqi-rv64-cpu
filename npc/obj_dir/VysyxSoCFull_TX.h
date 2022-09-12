// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_TX_H_
#define VERILATED_VYSYXSOCFULL_TX_H_  // guard

#include "verilated_heavy.h"

//==========

class VysyxSoCFull__Syms;
class VysyxSoCFull_VerilatedVcd;


//----------

VL_MODULE(VysyxSoCFull_TX) {
  public:

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_c2b_clk,0,0);
    VL_OUT8(io_c2b_rst,0,0);
    VL_OUT8(io_c2b_send,0,0);
    VL_OUT8(io_sa_ready,0,0);
    VL_IN8(io_sa_valid,0,0);
    VL_IN8(io_sa_bits_last,0,0);
    VL_IN8(io_sa_bits_beats,6,0);
    VL_OUT8(io_sb_ready,0,0);
    VL_IN8(io_sb_bits_last,0,0);
    VL_OUT8(io_sc_ready,0,0);
    VL_IN8(io_sc_bits_last,0,0);
    VL_OUT8(io_sd_ready,0,0);
    VL_IN8(io_sd_valid,0,0);
    VL_IN8(io_sd_bits_last,0,0);
    VL_IN8(io_sd_bits_beats,6,0);
    VL_OUT8(io_rxc_ridx,0,0);
    VL_IN8(io_rxc_widx,0,0);
    VL_OUT8(io_rxc_safe_ridx_valid,0,0);
    VL_IN8(io_rxc_safe_widx_valid,0,0);
    VL_IN8(io_rxc_safe_source_reset_n,0,0);
    VL_OUT8(io_rxc_safe_sink_reset_n,0,0);
    VL_OUT8(io_txc_ridx,0,0);
    VL_IN8(io_txc_widx,0,0);
    VL_OUT8(io_txc_safe_ridx_valid,0,0);
    VL_IN8(io_txc_safe_widx_valid,0,0);
    VL_IN8(io_txc_safe_source_reset_n,0,0);
    VL_OUT8(io_txc_safe_sink_reset_n,0,0);
    VL_OUT(io_c2b_data,31,0);
    VL_IN(io_sa_bits_data,31,0);
    VL_IN(io_sb_bits_data,31,0);
    VL_IN(io_sc_bits_data,31,0);
    VL_IN(io_sd_bits_data,31,0);
    VL_IN(io_se_bits_data,31,0);
    VL_IN(io_rxc_mem_0_a,19,0);
    VL_IN(io_rxc_mem_0_b,19,0);
    VL_IN(io_rxc_mem_0_c,19,0);
    VL_IN(io_rxc_mem_0_d,19,0);
    VL_IN(io_rxc_mem_0_e,19,0);
    VL_IN(io_txc_mem_0_a,19,0);
    VL_IN(io_txc_mem_0_b,19,0);
    VL_IN(io_txc_mem_0_c,19,0);
    VL_IN(io_txc_mem_0_d,19,0);
    VL_IN(io_txc_mem_0_e,19,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__rxInc_sink__DOT__sink_valid_0_reset;
        CData/*0:0*/ __PVT__io_c2b_rst_reg__DOT__reg_;
        CData/*0:0*/ __PVT__rxInc_sink_io_deq_valid;
        CData/*0:0*/ __PVT__txInc_sink_io_deq_valid;
        CData/*0:0*/ __PVT__qa_q_io_deq_ready;
        CData/*0:0*/ __PVT__qb_q_io_deq_ready;
        CData/*0:0*/ __PVT__qc_q_io_deq_ready;
        CData/*0:0*/ __PVT__qd_q_io_deq_ready;
        CData/*0:0*/ __PVT__qe_q_io_deq_ready;
        CData/*0:0*/ __PVT__rxQ_io_deq_ready;
        CData/*0:0*/ __PVT___ioX_first_T;
        CData/*0:0*/ __PVT__ioX_first;
        CData/*0:0*/ __PVT___GEN_0;
        CData/*0:0*/ __PVT__ioX_allow;
        CData/*0:0*/ __PVT___ioX_first_T_1;
        CData/*0:0*/ __PVT__ioX_first_1;
        CData/*0:0*/ __PVT___GEN_1;
        CData/*0:0*/ __PVT__ioX_allow_1;
        CData/*0:0*/ __PVT___ioX_first_T_2;
        CData/*0:0*/ __PVT__ioX_first_2;
        CData/*0:0*/ __PVT___GEN_2;
        CData/*0:0*/ __PVT__ioX_allow_2;
        CData/*0:0*/ __PVT___ioX_first_T_3;
        CData/*0:0*/ __PVT__ioX_first_3;
        CData/*0:0*/ __PVT___GEN_3;
        CData/*0:0*/ __PVT__ioX_allow_3;
        CData/*0:0*/ __PVT___ioX_first_T_4;
        CData/*0:0*/ __PVT__ioX_first_4;
        CData/*0:0*/ __PVT___GEN_4;
        CData/*0:0*/ __PVT__ioX_allow_4;
        CData/*7:0*/ __PVT___msb_T_2;
        CData/*3:0*/ __PVT___msb_T_3;
        CData/*7:0*/ __PVT___msb_T_7;
        CData/*3:0*/ __PVT___msb_T_8;
        CData/*7:0*/ __PVT___msb_T_12;
        CData/*3:0*/ __PVT___msb_T_13;
        CData/*7:0*/ __PVT___msb_T_17;
        CData/*3:0*/ __PVT___msb_T_18;
        CData/*7:0*/ __PVT___msb_T_22;
        CData/*3:0*/ __PVT___msb_T_23;
        CData/*1:0*/ __PVT__xmit;
        CData/*0:0*/ __PVT__forceXmit;
        CData/*0:0*/ __PVT__allowReturn;
        CData/*0:0*/ __PVT__f_valid;
        CData/*5:0*/ __PVT__requests;
        CData/*1:0*/ __PVT___xmit_T_1;
        CData/*0:0*/ __PVT__first;
        CData/*5:0*/ __PVT__readys_mask;
        CData/*5:0*/ __PVT___readys_readys_T_2;
        CData/*5:0*/ __PVT__state;
        CData/*5:0*/ __PVT__allowed;
        CData/*5:0*/ __PVT___readys_mask_T;
        CData/*5:0*/ __PVT___readys_mask_T_6;
        CData/*5:0*/ __PVT__grant;
        CData/*5:0*/ __PVT___send_T;
        CData/*0:0*/ __PVT___GEN_8;
        CData/*0:0*/ __PVT__io_c2b_send_REG;
        CData/*0:0*/ __PVT__io_c2b_send_REG_1;
        CData/*5:0*/ __PVT__io_c2b_data_REG;
        CData/*0:0*/ __PVT__rxInc_sink__DOT__ridx_ridx_bin;
        CData/*0:0*/ __PVT__rxInc_sink__DOT__ridx_incremented;
        CData/*0:0*/ __PVT__rxInc_sink__DOT__valid_reg;
        CData/*0:0*/ __PVT__rxInc_sink__DOT__ridx_gray;
        CData/*0:0*/ __PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0;
    };
    struct {
        CData/*0:0*/ __PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1;
        CData/*0:0*/ __PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2;
        CData/*0:0*/ __PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
        CData/*0:0*/ __PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
        CData/*0:0*/ __PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
        CData/*0:0*/ __PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
        CData/*0:0*/ __PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
        CData/*0:0*/ __PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
        CData/*0:0*/ __PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
        CData/*0:0*/ __PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
        CData/*0:0*/ __PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
        CData/*0:0*/ __PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
        CData/*0:0*/ __PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
        CData/*0:0*/ __PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
        CData/*0:0*/ __PVT__txInc_sink__DOT__ridx_ridx_bin;
        CData/*0:0*/ __PVT__txInc_sink__DOT__ridx_incremented;
        CData/*0:0*/ __PVT__txInc_sink__DOT__valid_reg;
        CData/*0:0*/ __PVT__txInc_sink__DOT__ridx_gray;
        CData/*0:0*/ __PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0;
        CData/*0:0*/ __PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1;
        CData/*0:0*/ __PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2;
        CData/*0:0*/ __PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
        CData/*0:0*/ __PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
        CData/*0:0*/ __PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
        CData/*0:0*/ __PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
        CData/*0:0*/ __PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
        CData/*0:0*/ __PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
        CData/*0:0*/ __PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
        CData/*0:0*/ __PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
        CData/*0:0*/ __PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
        CData/*0:0*/ __PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
        CData/*0:0*/ __PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
        CData/*0:0*/ __PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
        CData/*0:0*/ __PVT__qa_q__DOT__valid_0;
        CData/*0:0*/ __PVT__qa_q__DOT__valid_1;
        CData/*0:0*/ __PVT__qa_q__DOT__elts_0_last;
        CData/*6:0*/ __PVT__qa_q__DOT__elts_0_beats;
        CData/*0:0*/ __PVT__qa_q__DOT__elts_1_last;
        CData/*6:0*/ __PVT__qa_q__DOT__elts_1_beats;
        CData/*0:0*/ __PVT__qa_q__DOT___wen_T_3;
        CData/*0:0*/ __PVT__qa_q__DOT__wen;
        CData/*0:0*/ __PVT__qa_q__DOT___valid_0_T_6;
        CData/*0:0*/ __PVT__qa_q__DOT___wen_T_10;
        CData/*0:0*/ __PVT__qa_q__DOT__wen_1;
        CData/*0:0*/ __PVT__qa_q__DOT___valid_1_T_6;
        CData/*0:0*/ __PVT__qb_q__DOT__valid_0;
        CData/*0:0*/ __PVT__qb_q__DOT__valid_1;
        CData/*0:0*/ __PVT__qb_q__DOT__elts_0_last;
        CData/*6:0*/ __PVT__qb_q__DOT__elts_0_beats;
        CData/*0:0*/ __PVT__qb_q__DOT__elts_1_last;
        CData/*6:0*/ __PVT__qb_q__DOT__elts_1_beats;
        CData/*0:0*/ __PVT__qb_q__DOT__wen;
        CData/*0:0*/ __PVT__qb_q__DOT___valid_0_T_6;
        CData/*0:0*/ __PVT__qb_q__DOT___valid_1_T_6;
        CData/*0:0*/ __PVT__qc_q__DOT__valid_0;
        CData/*0:0*/ __PVT__qc_q__DOT__valid_1;
        CData/*0:0*/ __PVT__qc_q__DOT__elts_0_last;
        CData/*6:0*/ __PVT__qc_q__DOT__elts_0_beats;
        CData/*0:0*/ __PVT__qc_q__DOT__elts_1_last;
        CData/*6:0*/ __PVT__qc_q__DOT__elts_1_beats;
        CData/*0:0*/ __PVT__qc_q__DOT__wen;
        CData/*0:0*/ __PVT__qc_q__DOT___valid_0_T_6;
        CData/*0:0*/ __PVT__qc_q__DOT___valid_1_T_6;
        CData/*0:0*/ __PVT__qd_q__DOT__valid_0;
    };
    struct {
        CData/*0:0*/ __PVT__qd_q__DOT__valid_1;
        CData/*0:0*/ __PVT__qd_q__DOT__elts_0_last;
        CData/*6:0*/ __PVT__qd_q__DOT__elts_0_beats;
        CData/*0:0*/ __PVT__qd_q__DOT__elts_1_last;
        CData/*6:0*/ __PVT__qd_q__DOT__elts_1_beats;
        CData/*0:0*/ __PVT__qd_q__DOT___wen_T_3;
        CData/*0:0*/ __PVT__qd_q__DOT__wen;
        CData/*0:0*/ __PVT__qd_q__DOT___valid_0_T_6;
        CData/*0:0*/ __PVT__qd_q__DOT___wen_T_10;
        CData/*0:0*/ __PVT__qd_q__DOT__wen_1;
        CData/*0:0*/ __PVT__qd_q__DOT___valid_1_T_6;
        CData/*0:0*/ __PVT__qe_q__DOT__valid_0;
        CData/*0:0*/ __PVT__qe_q__DOT__valid_1;
        CData/*0:0*/ __PVT__qe_q__DOT__elts_0_last;
        CData/*6:0*/ __PVT__qe_q__DOT__elts_0_beats;
        CData/*0:0*/ __PVT__qe_q__DOT__elts_1_last;
        CData/*6:0*/ __PVT__qe_q__DOT__elts_1_beats;
        CData/*0:0*/ __PVT__qe_q__DOT__wen;
        CData/*0:0*/ __PVT__qe_q__DOT___valid_0_T_6;
        CData/*0:0*/ __PVT__qe_q__DOT___valid_1_T_6;
        CData/*0:0*/ __PVT__ioX_cq__DOT__valid_0;
        CData/*0:0*/ __PVT__ioX_cq__DOT__valid_1;
        CData/*0:0*/ __PVT__ioX_cq__DOT__elts_0_last;
        CData/*6:0*/ __PVT__ioX_cq__DOT__elts_0_beats;
        CData/*0:0*/ __PVT__ioX_cq__DOT__elts_1_last;
        CData/*6:0*/ __PVT__ioX_cq__DOT__elts_1_beats;
        CData/*0:0*/ __PVT__ioX_cq__DOT___wen_T_3;
        CData/*0:0*/ __PVT__ioX_cq__DOT__wen;
        CData/*0:0*/ __PVT__ioX_cq__DOT___valid_0_T_6;
        CData/*0:0*/ __PVT__ioX_cq__DOT___wen_T_10;
        CData/*0:0*/ __PVT__ioX_cq__DOT__wen_1;
        CData/*0:0*/ __PVT__ioX_cq__DOT___valid_1_T_6;
        CData/*0:0*/ __PVT__ioX_cq_1__DOT__valid_0;
        CData/*0:0*/ __PVT__ioX_cq_1__DOT__valid_1;
        CData/*0:0*/ __PVT__ioX_cq_1__DOT__elts_0_last;
        CData/*6:0*/ __PVT__ioX_cq_1__DOT__elts_0_beats;
        CData/*0:0*/ __PVT__ioX_cq_1__DOT__elts_1_last;
        CData/*6:0*/ __PVT__ioX_cq_1__DOT__elts_1_beats;
        CData/*0:0*/ __PVT__ioX_cq_1__DOT___wen_T_3;
        CData/*0:0*/ __PVT__ioX_cq_1__DOT__wen;
        CData/*0:0*/ __PVT__ioX_cq_1__DOT___valid_0_T_6;
        CData/*0:0*/ __PVT__ioX_cq_1__DOT___wen_T_10;
        CData/*0:0*/ __PVT__ioX_cq_1__DOT__wen_1;
        CData/*0:0*/ __PVT__ioX_cq_1__DOT___valid_1_T_6;
        CData/*0:0*/ __PVT__ioX_cq_2__DOT__valid_0;
        CData/*0:0*/ __PVT__ioX_cq_2__DOT__valid_1;
        CData/*0:0*/ __PVT__ioX_cq_2__DOT__elts_0_last;
        CData/*6:0*/ __PVT__ioX_cq_2__DOT__elts_0_beats;
        CData/*0:0*/ __PVT__ioX_cq_2__DOT__elts_1_last;
        CData/*6:0*/ __PVT__ioX_cq_2__DOT__elts_1_beats;
        CData/*0:0*/ __PVT__ioX_cq_2__DOT___wen_T_3;
        CData/*0:0*/ __PVT__ioX_cq_2__DOT__wen;
        CData/*0:0*/ __PVT__ioX_cq_2__DOT___valid_0_T_6;
        CData/*0:0*/ __PVT__ioX_cq_2__DOT___wen_T_10;
        CData/*0:0*/ __PVT__ioX_cq_2__DOT__wen_1;
        CData/*0:0*/ __PVT__ioX_cq_2__DOT___valid_1_T_6;
        CData/*0:0*/ __PVT__ioX_cq_3__DOT__valid_0;
        CData/*0:0*/ __PVT__ioX_cq_3__DOT__valid_1;
        CData/*0:0*/ __PVT__ioX_cq_3__DOT__elts_0_last;
        CData/*6:0*/ __PVT__ioX_cq_3__DOT__elts_0_beats;
        CData/*0:0*/ __PVT__ioX_cq_3__DOT__elts_1_last;
        CData/*6:0*/ __PVT__ioX_cq_3__DOT__elts_1_beats;
        CData/*0:0*/ __PVT__ioX_cq_3__DOT___wen_T_3;
        CData/*0:0*/ __PVT__ioX_cq_3__DOT__wen;
    };
    struct {
        CData/*0:0*/ __PVT__ioX_cq_3__DOT___valid_0_T_6;
        CData/*0:0*/ __PVT__ioX_cq_3__DOT___wen_T_10;
        CData/*0:0*/ __PVT__ioX_cq_3__DOT__wen_1;
        CData/*0:0*/ __PVT__ioX_cq_3__DOT___valid_1_T_6;
        CData/*0:0*/ __PVT__ioX_cq_4__DOT__valid_0;
        CData/*0:0*/ __PVT__ioX_cq_4__DOT__valid_1;
        CData/*0:0*/ __PVT__ioX_cq_4__DOT__elts_0_last;
        CData/*6:0*/ __PVT__ioX_cq_4__DOT__elts_0_beats;
        CData/*0:0*/ __PVT__ioX_cq_4__DOT__elts_1_last;
        CData/*6:0*/ __PVT__ioX_cq_4__DOT__elts_1_beats;
        CData/*0:0*/ __PVT__ioX_cq_4__DOT___wen_T_3;
        CData/*0:0*/ __PVT__ioX_cq_4__DOT__wen;
        CData/*0:0*/ __PVT__ioX_cq_4__DOT___valid_0_T_6;
        CData/*0:0*/ __PVT__ioX_cq_4__DOT___wen_T_10;
        CData/*0:0*/ __PVT__ioX_cq_4__DOT__wen_1;
        CData/*0:0*/ __PVT__ioX_cq_4__DOT___valid_1_T_6;
        CData/*0:0*/ __PVT__rxQ__DOT__valid_0;
        CData/*0:0*/ __PVT__rxQ__DOT__valid_1;
        CData/*0:0*/ __PVT__rxQ__DOT__elts_0_last;
        CData/*6:0*/ __PVT__rxQ__DOT__elts_0_beats;
        CData/*0:0*/ __PVT__rxQ__DOT__elts_1_last;
        CData/*6:0*/ __PVT__rxQ__DOT__elts_1_beats;
        CData/*0:0*/ __PVT__rxQ__DOT___wen_T_3;
        CData/*0:0*/ __PVT__rxQ__DOT__wen;
        CData/*0:0*/ __PVT__rxQ__DOT___valid_0_T_6;
        CData/*0:0*/ __PVT__rxQ__DOT___wen_T_10;
        CData/*0:0*/ __PVT__rxQ__DOT__wen_1;
        CData/*0:0*/ __PVT__rxQ__DOT___valid_1_T_6;
        SData/*15:0*/ __PVT___msb_T_1;
        SData/*15:0*/ __PVT___msb_T_6;
        SData/*15:0*/ __PVT___msb_T_11;
        SData/*15:0*/ __PVT___msb_T_16;
        SData/*15:0*/ __PVT___msb_T_21;
        SData/*11:0*/ __PVT__readys_filter;
        SData/*11:0*/ __PVT__readys_unready;
        IData/*31:0*/ __PVT__rxQ_io_enq_bits_data;
        IData/*19:0*/ __PVT__rx_a;
        IData/*19:0*/ __PVT__rx_b;
        IData/*19:0*/ __PVT__rx_c;
        IData/*19:0*/ __PVT__rx_d;
        IData/*19:0*/ __PVT__rx_e;
        IData/*19:0*/ __PVT__tx_a;
        IData/*19:0*/ __PVT__tx_b;
        IData/*19:0*/ __PVT__tx_c;
        IData/*19:0*/ __PVT__tx_d;
        IData/*19:0*/ __PVT__tx_e;
        IData/*20:0*/ __PVT___ioX_tx_a_T_6;
        IData/*20:0*/ __PVT___ioX_tx_bT_6;
        IData/*20:0*/ __PVT___ioX_tx_c_T_6;
        IData/*20:0*/ __PVT___ioX_tx_d_T_6;
        IData/*20:0*/ __PVT___ioX_tx_e_T_6;
        IData/*19:0*/ __PVT___mask_T_9;
        IData/*19:0*/ __PVT___msbOH_T_1;
        IData/*19:0*/ __PVT___mask_T_20;
        IData/*19:0*/ __PVT___msbOH_T_3;
        IData/*19:0*/ __PVT___mask_T_31;
        IData/*19:0*/ __PVT___msbOH_T_5;
        IData/*19:0*/ __PVT___mask_T_42;
        IData/*19:0*/ __PVT___msbOH_T_7;
        IData/*19:0*/ __PVT___mask_T_53;
        IData/*19:0*/ __PVT___msbOH_T_9;
        IData/*19:0*/ __PVT__header_hi;
        IData/*20:0*/ __PVT__rx_z;
        IData/*20:0*/ __PVT__rx_z_1;
    };
    struct {
        IData/*20:0*/ __PVT__rx_z_2;
        IData/*20:0*/ __PVT__rx_z_3;
        IData/*20:0*/ __PVT__rx_z_4;
        IData/*31:0*/ __PVT__io_c2b_data_REG_1_0;
        IData/*31:0*/ __PVT__io_c2b_data_REG_1_1;
        IData/*31:0*/ __PVT__io_c2b_data_REG_1_2;
        IData/*31:0*/ __PVT__io_c2b_data_REG_1_3;
        IData/*31:0*/ __PVT__io_c2b_data_REG_1_4;
        IData/*31:0*/ __PVT__io_c2b_data_REG_1_5;
        IData/*31:0*/ __PVT__io_c2b_data_REG_2;
        VlWide<4>/*99:0*/ __PVT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
        VlWide<4>/*99:0*/ __PVT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
        IData/*31:0*/ __PVT__qa_q__DOT__elts_0_data;
        IData/*31:0*/ __PVT__qa_q__DOT__elts_1_data;
        IData/*31:0*/ __PVT__qb_q__DOT__elts_0_data;
        IData/*31:0*/ __PVT__qb_q__DOT__elts_1_data;
        IData/*31:0*/ __PVT__qc_q__DOT__elts_0_data;
        IData/*31:0*/ __PVT__qc_q__DOT__elts_1_data;
        IData/*31:0*/ __PVT__qd_q__DOT__elts_0_data;
        IData/*31:0*/ __PVT__qd_q__DOT__elts_1_data;
        IData/*31:0*/ __PVT__qe_q__DOT__elts_0_data;
        IData/*31:0*/ __PVT__qe_q__DOT__elts_1_data;
        IData/*31:0*/ __PVT__ioX_cq__DOT__elts_0_data;
        IData/*31:0*/ __PVT__ioX_cq__DOT__elts_1_data;
        IData/*31:0*/ __PVT__ioX_cq_1__DOT__elts_0_data;
        IData/*31:0*/ __PVT__ioX_cq_1__DOT__elts_1_data;
        IData/*31:0*/ __PVT__ioX_cq_2__DOT__elts_0_data;
        IData/*31:0*/ __PVT__ioX_cq_2__DOT__elts_1_data;
        IData/*31:0*/ __PVT__ioX_cq_3__DOT__elts_0_data;
        IData/*31:0*/ __PVT__ioX_cq_3__DOT__elts_1_data;
        IData/*31:0*/ __PVT__ioX_cq_4__DOT__elts_0_data;
        IData/*31:0*/ __PVT__ioX_cq_4__DOT__elts_1_data;
        IData/*31:0*/ __PVT__rxQ__DOT__elts_0_data;
        IData/*31:0*/ __PVT__rxQ__DOT__elts_1_data;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vdly__rxInc_sink__DOT__ridx_ridx_bin;
    CData/*0:0*/ __Vdly__txInc_sink__DOT__ridx_ridx_bin;

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VysyxSoCFull_TX);  ///< Copying not allowed
  public:
    VysyxSoCFull_TX(const char* name);
    ~VysyxSoCFull_TX();

    // INTERNAL METHODS
    void __Vconfigure(VysyxSoCFull__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
