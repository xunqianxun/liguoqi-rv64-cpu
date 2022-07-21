// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull___024root.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VysyxSoCFull___024root___multiclk__TOP__53(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___multiclk__TOP__53\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__deq_io_deq_bits_id 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__deq__DOT__maybe_full)
                  ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__deq__DOT__ram_id
                 [0U] : ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source) 
                         >> 3U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT__maybe_full)
                  ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT__ram_id
                 [0U] : ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source) 
                         >> 3U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_d_ready 
        = (1U & ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))
                  ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__deq__DOT__maybe_full))
                  : (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT__maybe_full))));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__maybe_full)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_out_arvalid));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_valid 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_out_arvalid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_out_awvalid));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_valid 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_out_awvalid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_enq_bits_resp 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_denied) 
            | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_in_d_bits_corrupt))
            ? 2U : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__deq__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__deq__DOT__maybe_full)) 
           & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_in_d_valid) 
              & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_enq_valid 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_in_d_valid) 
           & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2_auto_in_becho_real_last 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__empty)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag_auto_out_awecho_real_last)
                : vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__ram_real_last
               [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__deq_ptr_value])
            : ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__empty)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag_auto_out_awecho_real_last)
                : vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__ram_real_last
               [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__deq_ptr_value]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__b_allow 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__b_count_1)
             : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__b_count_0)) 
           != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_count_1)
                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_count_0)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT___GEN_15 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_ready)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT___do_enq_T));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__do_deq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__maybe_full) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___T_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT___GEN_15 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_ready)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT___do_enq_T));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__do_deq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__maybe_full) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag_auto_out_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___in_awready_T));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___T_5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__wbeats_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_valid) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__wbeats_latched)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_resp 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT__maybe_full)
            ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT__ram_resp
           [0U] : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_enq_bits_resp));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_enq_valid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_deq_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2_auto_in_becho_real_last)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__b_allow));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__maybe_full)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT___do_enq_T)
            : (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT___GEN_15));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___GEN_4 
        = (0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___T_2)
                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len) 
                         - (IData)(1U)) : (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__r_len)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT___do_enq_T)
            : (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT___GEN_15));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag_auto_out_awvalid));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___GEN_9 
        = (0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___T_5)
                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len_1) 
                         - (IData)(1U)) : (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__r_len_1)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___GEN_10 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__wbeats_valid) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__w_counter))) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__wbeats_latched));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___wcounter_T_2 
        = (0x1ffU & (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__w_counter))
                       ? ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__wbeats_valid)
                           ? 1U : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__w_counter)) 
                     - ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__full)) 
                        & ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_io_deq_valid) 
                           & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__w_counter)) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__wbeats_valid))))));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag_auto_out_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_io_deq_valid) 
           & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__w_counter)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__wbeats_valid)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_io_deq_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__full)) 
           & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__w_counter)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__wbeats_valid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___error_0_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__error_0) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_resp));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___error_1_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__error_1) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_resp));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___T_90 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2_auto_in_becho_real_last)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_deq_valid) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__b_allow)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_bvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_deq_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__b_allow));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT__do_deq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT__maybe_full) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_deq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT___GEN_8 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_deq_ready)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT___do_enq_T));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag_auto_out_wvalid));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__do_deq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_io_deq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT___GEN_9 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_io_deq_ready)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT___do_enq_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___T_26 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2_auto_in_becho_real_last)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_bvalid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2_io_deq_ready 
        = (3U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_bvalid) 
                  & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2_auto_in_becho_real_last))) 
                 & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3_io_deq_ready 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_bvalid) 
                  & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2_auto_in_becho_real_last))) 
                 & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id)) 
                    >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT__maybe_full)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT___do_enq_T)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT___GEN_8));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT___do_enq_T)
            : (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT___GEN_9));
}

VL_INLINE_OPT void VysyxSoCFull___024root___multiclk__TOP__54(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___multiclk__TOP__54\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam_io_alloc_valid 
        = (((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_grant) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__d_first)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__xmit)) 
            & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.io_deq_valid)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_d_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_ready 
        = (1U & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_d_ready) 
                  & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__stall))) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__xmit))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___T 
        = ((0U != vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam_io_alloc_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___q_last_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_ready) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_T_1 
        = ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free)) 
           & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___T)
                  ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free_sel
                  : 0ULL)));
}

VL_INLINE_OPT void VysyxSoCFull___024root___multiclk__TOP__55(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___multiclk__TOP__55\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__latch 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__beatsLeft)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_enq_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___T_12 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_enq_ready) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__allowed_0)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2_auto_out_arvalid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___beatsLeft_T_4 
        = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__beatsLeft) 
                    - ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_enq_ready) 
                       & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__beatsLeft))
                           ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___T_50)
                           : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___sink_ACancel_earlyValid_T_3)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_arready 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__allowed_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__out_1_ready 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_enq_ready) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__beatsLeft))
               ? (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___readys_readys_T_2) 
                     >> 1U)) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__state_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT___do_enq_T 
        = (3U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT__full)) 
                 & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq__DOT__maybe_full) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_arready)) 
                    & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_id)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT___do_enq_T 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT__full)) 
                 & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq__DOT__maybe_full) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_arready)) 
                    & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_id)) 
                       >> 1U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2_auto_in_arready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_arready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___T_36 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__out_1_ready) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag_auto_out_wvalid)) 
            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__w_todo))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2_auto_out_awvalid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_wready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__out_1_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2_auto_out_awvalid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_awready 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__out_1_ready) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag_auto_out_wvalid)) 
           & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__w_todo)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq__DOT__do_deq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq__DOT__maybe_full) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2_auto_in_arready) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__ar_last)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2_auto_in_arready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_wdeq__DOT__do_deq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_wready) 
               & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__w_counter)) 
                  | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__wbeats_valid))) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wcounter_T_2 
        = (0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__w_todo) 
                     - ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_wready) 
                        & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full) 
                           & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__w_counter)) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__wbeats_valid))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2_auto_in_awready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN_9));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2_io_enq_valid 
        = (3U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag_auto_out_awvalid) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_awready)) 
                 & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_id))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3_io_enq_valid 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag_auto_out_awvalid) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_awready)) 
                 & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_id)) 
                    >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___GEN_4 
        = (0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___T_2)
                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__len) 
                         - (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__beats))
                      : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__r_len)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_awready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2_auto_in_awready) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__w_counter)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__wbeats_latched)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2_io_deq_valid 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2_io_enq_valid) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__empty))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3_io_deq_valid 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3_io_enq_valid) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__empty))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1__DOT__do_deq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1__DOT__maybe_full) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_awready) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__aw_last)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___T_5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__do_deq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__empty)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2_io_deq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2_io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT___GEN_10 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2_io_deq_ready)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT___do_enq_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__do_deq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__empty)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3_io_deq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3_io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT___GEN_10 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3_io_deq_ready)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT___do_enq_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___GEN_9 
        = (0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___T_5)
                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__len_1) 
                         - (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__w_beats))
                      : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__r_len_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT___GEN_10)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT___do_enq_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT___GEN_10)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT___do_enq_T));
}

VL_INLINE_OPT void VysyxSoCFull___024root___sequent__TOP__56(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___sequent__TOP__56\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_ 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__io_c2b_rst_reg__DOT__reg_;
}

VL_INLINE_OPT void VysyxSoCFull___024root___combo__TOP__57(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___combo__TOP__57\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we 
        = ((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_1_psel)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_1_penable)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_pwrite));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re 
        = ((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_1_psel)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_1_penable)) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_pwrite)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
            & (0U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr))) 
           & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                 >> 7U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
            & (2U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr))) 
           & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                 >> 7U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
            & (6U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr))) 
           & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                 >> 7U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
            & (0U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr))) 
           & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                 >> 7U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
            & (5U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr))) 
           & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                 >> 7U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d)));
}

VL_INLINE_OPT void VysyxSoCFull___024root___combo__TOP__58(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___combo__TOP__58\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp4557;
    VlWide<3>/*95:0*/ __Vtemp4559;
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_valid 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT___GEN_14 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_ready)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT___do_enq_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__do_deq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___T_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT___do_enq_T)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT___GEN_14));
    VL_EXTEND_WI(67,32, __Vtemp4557, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__shift);
    VL_EXTEND_WI(67,32, __Vtemp4559, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__shift);
    if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_opcode))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___GEN_8[0U] 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___T_3)
                ? ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__state) 
                           >> 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__last)))
                    ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide[1U])
                : __Vtemp4557[0U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___GEN_8[1U] 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___T_3)
                ? ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__state) 
                           >> 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__last)))
                    ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide[2U])
                : __Vtemp4557[1U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___GEN_8[2U] 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___T_3)
                      ? ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__state) 
                                 >> 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__last)))
                          ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide[3U])
                      : __Vtemp4557[2U]));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___GEN_8[0U] 
            = __Vtemp4559[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___GEN_8[1U] 
            = __Vtemp4559[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___GEN_8[2U] 
            = (7U & __Vtemp4559[2U]);
    }
}

VL_INLINE_OPT void VysyxSoCFull___024root___combo__TOP__59(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___combo__TOP__59\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp4563;
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_bits_id 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__maybe_full)
                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_id
                 [0U] : ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source) 
                         >> 3U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__maybe_full)
                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__ram_id
                 [0U] : ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source) 
                         >> 3U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_enq_bits_last 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__d_last_counter)) 
           | (0U == ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))
                      ? (7U & (~ (0x3ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size)) 
                                            >> 3U))))
                      : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_d_ready 
        = (1U & ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))
                  ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__maybe_full))
                  : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__maybe_full))));
    if (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_denied) 
         | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_in_d_bits_corrupt))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_enq_bits_resp = 2U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_enq_bits_resp = 2U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_enq_bits_resp = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_enq_bits_resp = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_enq_valid 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_in_d_valid) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_enq_valid 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_in_d_valid) 
           & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_in_becho_real_last 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__empty)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_awecho_real_last)
                : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_real_last
               [vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__deq_ptr_value])
            : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__empty)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_awecho_real_last)
                : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_real_last
               [vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__deq_ptr_value]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__b_allow 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__b_count_1)
             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__b_count_0)) 
           != ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_count_1)
                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_count_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_bits_last 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__maybe_full)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_last
           [0U] : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_enq_bits_last));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_resp 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__maybe_full)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__ram_resp
           [0U] : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_enq_bits_resp));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_enq_valid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_enq_valid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_in_rlast 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_bits_last) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_bits_id)
               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__empty)
                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_arecho_real_last)
                   : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_real_last
                  [vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__deq_ptr_value])
               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__empty)
                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_arecho_real_last)
                   : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__ram_real_last
                  [vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__deq_ptr_value])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___error_0_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_0) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_resp));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___error_1_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_1) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_resp));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rvalid_T_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_valid)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_in_rvalid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_valid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_in_rvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_filter_lo 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_in_rvalid) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_in_bvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__b_allow));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_valid 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid)
              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rvalid_T_2)) 
            << 2U) | (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__state_time_r)) 
                       << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_axi_r_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_4 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_ready) 
            >> 2U) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid)
                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rvalid_T_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_filter 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_filter_lo) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask))) 
            << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_in_rvalid) 
                       << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_in_bvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_in_bvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_in_becho_real_last));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_valid 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)) 
                 & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_valid)
                     : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_valid) 
                            >> 1U) : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_valid)) 
                                      >> 2U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_76 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_4) 
           | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready 
        = ((7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_filter) 
                   >> 1U) | (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_filter) 
                                   >> 2U)))) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask) 
                                                << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bvalid_T_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_in_bvalid)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1) 
              & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_in_bvalid) 
           | (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_filter_lo_1 
        = (((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_in_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_readys_T_2 
        = (3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready) 
                  >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_b_valid 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1)
              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bvalid_T_2)) 
            << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__tim_axi_b_valid) 
                       << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_axi_b_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_b_ready) 
            >> 2U) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1)
                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bvalid_T_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_filter_1 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_filter_lo_1) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1))) 
            << 2U) | (((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)) 
                       << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_in_bvalid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_mask_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_readys_T_2)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_filter_lo));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT___GEN_0 
        = ((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_ready) 
                    >> 2U) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
                               ? (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_readys_T_2) 
                                     >> 1U)) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1))) 
                  & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___bundleIn_0_pready_T_4))))
            ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_0_rready 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_ready) 
                  >> 2U) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
                             ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_readys_T_2))
                             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_readys_T_2) 
               >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_in_rvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_readys_T_2)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_b_valid 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)) 
                 & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_b_valid)
                     : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_b_valid) 
                            >> 1U) : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_b_valid)) 
                                      >> 2U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_79 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4) 
           | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1 
        = ((7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_filter_1) 
                   >> 1U) | (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_filter_1) 
                                   >> 2U)))) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1) 
                                                << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__do_deq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__maybe_full) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_0_rready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT___GEN_10 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_0_rready)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT___do_enq_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_io_deq_ready 
        = (3U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_valid) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_0_rready)) 
                  & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_bits_id))) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_bits_last)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1_io_deq_ready 
        = (1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_valid) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_0_rready)) 
                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_bits_id)) 
                     >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_bits_last)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_0;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_readys_T_5 
        = (3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1) 
                  >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__maybe_full)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT___do_enq_T)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT___GEN_10));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___T_55 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)
            : 0U);
    __Vtemp4563[2U] = (IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__maybe_full)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_data
                                    [0U] : vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_in_d_bits_data)
                                 : 0ULL) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                                             ? (((QData)((IData)(
                                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
                                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data)
                                                                    : 0U) 
                                                                  | ((0U 
                                                                      == 
                                                                      (0x20001000U 
                                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr))
                                                                      ? 
                                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_1_psel)
                                                                       ? 
                                                                      ((((4U 
                                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                          ? 
                                                                         ((2U 
                                                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                           ? 
                                                                          ((1U 
                                                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                           : 
                                                                          ((1U 
                                                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                            : 0U))
                                                                          : 
                                                                         ((2U 
                                                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                           ? 
                                                                          ((1U 
                                                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                            : 
                                                                           (0xc0U 
                                                                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                           : 
                                                                          ((1U 
                                                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                            ? 
                                                                           ((0x80U 
                                                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                             ? 
                                                                            ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                             >> 8U)
                                                                             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                            : 
                                                                           ((0x80U 
                                                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                             : 
                                                                            ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                             >> 3U))))) 
                                                                        << 0x18U) 
                                                                       | ((0xff0000U 
                                                                           & (((4U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                ? 
                                                                               ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                                 : 0U))
                                                                                : 
                                                                               ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                                 : 
                                                                                (0xc0U 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                                >> 8U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                                 : 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                                 : 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                                >> 3U))))) 
                                                                              << 0x10U)) 
                                                                          | ((0xff00U 
                                                                              & (((4U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                                 : 0U))
                                                                                 : 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                                 : 
                                                                                (0xc0U 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                                >> 8U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                                 : 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                                 : 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                                >> 3U))))) 
                                                                                << 8U)) 
                                                                             | (0xffU 
                                                                                & ((4U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                                 : 0U))
                                                                                 : 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                                 : 
                                                                                (0xc0U 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                                >> 8U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                                 : 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                                 : 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                                >> 3U)))))))))
                                                                       : 0U)
                                                                      : 0U)))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
                                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data)
                                                                     : 0U) 
                                                                   | ((0U 
                                                                       == 
                                                                       (0x20001000U 
                                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr))
                                                                       ? 
                                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_1_psel)
                                                                        ? 
                                                                       ((((4U 
                                                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                           ? 
                                                                          ((2U 
                                                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                            ? 
                                                                           ((1U 
                                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                            : 
                                                                           ((1U 
                                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                             : 0U))
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                            ? 
                                                                           ((1U 
                                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                             : 
                                                                            (0xc0U 
                                                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                            : 
                                                                           ((1U 
                                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                             ? 
                                                                            ((0x80U 
                                                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                              ? 
                                                                             ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                              >> 8U)
                                                                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                             : 
                                                                            ((0x80U 
                                                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                              : 
                                                                             ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                              >> 3U))))) 
                                                                         << 0x18U) 
                                                                        | ((0xff0000U 
                                                                            & (((4U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                                 : 0U))
                                                                                 : 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                                 : 
                                                                                (0xc0U 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                                >> 8U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                                 : 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                                 : 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                                >> 3U))))) 
                                                                               << 0x10U)) 
                                                                           | ((0xff00U 
                                                                               & (((4U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                                 : 0U))
                                                                                 : 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                                 : 
                                                                                (0xc0U 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                                >> 8U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                                 : 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                                 : 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                                >> 3U))))) 
                                                                                << 8U)) 
                                                                              | (0xffU 
                                                                                & ((4U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                                 : 0U))
                                                                                 : 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                                 : 
                                                                                (0xc0U 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                                >> 8U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                                 : 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                                 : 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                                >> 3U)))))))))
                                                                        : 0U)
                                                                       : 0U)))))
                                             : 0ULL)));
    __Vtemp4563[3U] = (IData)(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__maybe_full)
                                      ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_data
                                     [0U] : vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_in_d_bits_data)
                                  : 0ULL) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                                              ? (((QData)((IData)(
                                                                  (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
                                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data)
                                                                     : 0U) 
                                                                   | ((0U 
                                                                       == 
                                                                       (0x20001000U 
                                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr))
                                                                       ? 
                                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_1_psel)
                                                                        ? 
                                                                       ((((4U 
                                                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                           ? 
                                                                          ((2U 
                                                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                            ? 
                                                                           ((1U 
                                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                            : 
                                                                           ((1U 
                                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                             : 0U))
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                            ? 
                                                                           ((1U 
                                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                             : 
                                                                            (0xc0U 
                                                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                            : 
                                                                           ((1U 
                                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                             ? 
                                                                            ((0x80U 
                                                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                              ? 
                                                                             ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                              >> 8U)
                                                                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                             : 
                                                                            ((0x80U 
                                                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                              : 
                                                                             ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                              >> 3U))))) 
                                                                         << 0x18U) 
                                                                        | ((0xff0000U 
                                                                            & (((4U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                                 : 0U))
                                                                                 : 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                                 : 
                                                                                (0xc0U 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                                >> 8U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                                 : 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                                 : 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                                >> 3U))))) 
                                                                               << 0x10U)) 
                                                                           | ((0xff00U 
                                                                               & (((4U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                                 : 0U))
                                                                                 : 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                                 : 
                                                                                (0xc0U 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                                >> 8U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                                 : 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                                 : 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                                >> 3U))))) 
                                                                                << 8U)) 
                                                                              | (0xffU 
                                                                                & ((4U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                                 : 0U))
                                                                                 : 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                                 : 
                                                                                (0xc0U 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                                >> 8U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                                 : 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                                 : 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                                >> 3U)))))))))
                                                                        : 0U)
                                                                       : 0U)))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
                                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data)
                                                                      : 0U) 
                                                                    | ((0U 
                                                                        == 
                                                                        (0x20001000U 
                                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr))
                                                                        ? 
                                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_1_psel)
                                                                         ? 
                                                                        ((((4U 
                                                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                            ? 
                                                                           ((2U 
                                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                             ? 
                                                                            ((1U 
                                                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                             : 
                                                                            ((1U 
                                                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                              : 0U))
                                                                            : 
                                                                           ((2U 
                                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                             ? 
                                                                            ((1U 
                                                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                              : 
                                                                             (0xc0U 
                                                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                             : 
                                                                            ((1U 
                                                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                              ? 
                                                                             ((0x80U 
                                                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                               ? 
                                                                              ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                               >> 8U)
                                                                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                              : 
                                                                             ((0x80U 
                                                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                               : 
                                                                              ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                               >> 3U))))) 
                                                                          << 0x18U) 
                                                                         | ((0xff0000U 
                                                                             & (((4U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                                 : 0U))
                                                                                 : 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                                 : 
                                                                                (0xc0U 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                                >> 8U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                                 : 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                                 : 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                                >> 3U))))) 
                                                                                << 0x10U)) 
                                                                            | ((0xff00U 
                                                                                & (((4U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                                 : 0U))
                                                                                 : 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                                 : 
                                                                                (0xc0U 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                                >> 8U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                                 : 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                                 : 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                                >> 3U))))) 
                                                                                << 8U)) 
                                                                               | (0xffU 
                                                                                & ((4U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                                 : 0U))
                                                                                 : 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                                 : 
                                                                                (0xc0U 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                                >> 8U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                                 : 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                                 : 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                                >> 3U)))))))))
                                                                         : 0U)
                                                                        : 0U)))))
                                              : 0ULL)) 
                               >> 0x20U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_data[0U] 
        = (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_axi_r_data);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_data[1U] 
        = (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_axi_r_data 
                   >> 0x20U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_data[2U] 
        = (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__tim_axi_r_data);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_data[3U] 
        = (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__tim_axi_r_data 
                   >> 0x20U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_data[4U] 
        = __Vtemp4563[2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_data[5U] 
        = __Vtemp4563[3U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_last 
        = (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_in_rlast)) 
             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)) 
            << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__tim_axi_r_last) 
                       << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_axi_r_last)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_resp 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
              ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__maybe_full)
                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_resp
                 [0U] : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_enq_bits_resp))
              : 0U) << 4U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__tim_axi_r_resp) 
                               << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_axi_r_resp)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rlast 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_in_rlast)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___T_54 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
            ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_bits_id)
                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__empty)
                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_echo_extra_id)
                      : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_extra_id
                     [vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__deq_ptr_value])
                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__empty)
                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_echo_extra_id)
                      : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__ram_extra_id
                     [vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__deq_ptr_value])) 
                << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_bits_id))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_mask_T_5 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_readys_T_5)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_filter_lo_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT___GEN_6 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_1_wvalid)
                ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
            : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___bundleIn_0_pready_T_4)
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)
                    : 5U) : ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                              ? ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_b_ready) 
                                         >> 2U) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_readys_T_5) 
                                                     >> 1U))
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1))))
                                  ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_0_bready 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_b_ready) 
                  >> 2U) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                             ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_readys_T_5))
                             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_readys_T_5) 
               >> 1U)) & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_readys_T_5)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_in_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_data 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
            ? 0ULL : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                       ? (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_data[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_data[0U])))
                       : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                           ? (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_data[3U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_data[2U])))
                           : ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                               ? (((QData)((IData)(
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_data[5U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_data[4U])))
                               : 0ULL))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_last 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)) 
                 & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_last)
                     : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_last) 
                            >> 1U) : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_last)) 
                                      >> 2U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_resp 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
            ? 0U : (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_resp)
                           : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_resp) 
                                  >> 2U) : ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_resp) 
                                                >> 4U)
                                             : 0U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_id 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___T_54) 
             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___T_55)) 
            << 8U) | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__state_time_r))
                         ? (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id) 
                                    >> 4U)) : 0U) << 4U) 
                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_axi_r_id)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___T_54) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___T_55));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___T_26 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_0_bready) 
            | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_in_becho_real_last))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_in_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_bready 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_0_bready) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_in_becho_real_last))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_id 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
            ? 0U : (0xfU & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_id)
                             : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_id) 
                                    >> 4U) : ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_id) 
                                                  >> 8U)
                                               : 0U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_count_T_3 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count) 
                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_2)) 
                 - (0xffffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_4)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rlast)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_1_count_T_3 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count) 
                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_1_T_2)) 
                 - (0x7fffU & (((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                 >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_4)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rlast)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_2_count_T_3 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count) 
                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_2_T_2)) 
                 - (0x3fffU & (((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                 >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_4)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rlast)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_3_count_T_3 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count) 
                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_3_T_2)) 
                 - (0x1fffU & (((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                 >> 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_4)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rlast)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_4_count_T_3 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count) 
                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_4_T_2)) 
                 - (0xfffU & (((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_4)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rlast)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_5_count_T_3 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count) 
                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_5_T_2)) 
                 - (0x7ffU & (((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_4)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rlast)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_6_count_T_3 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count) 
                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_6_T_2)) 
                 - (0x3ffU & (((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_4)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rlast)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_7_count_T_3 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count) 
                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_7_T_2)) 
                 - (0x1ffU & (((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_4)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rlast)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_8_count_T_3 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count) 
                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_8_T_2)) 
                 - (0xffU & (((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                               >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_4)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rlast)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_9_count_T_3 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count) 
                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_9_T_2)) 
                 - (0x7fU & (((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                               >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_4)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rlast)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_10_count_T_3 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count) 
                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_10_T_2)) 
                 - (0x3fU & (((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                               >> 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_4)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rlast)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_11_count_T_3 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count) 
                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_11_T_2)) 
                 - (0x1fU & (((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                               >> 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_4)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rlast)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_12_count_T_3 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count) 
                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_12_T_2)) 
                 - (0xfU & (((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                              >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_4)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rlast)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_13_count_T_3 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count) 
                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_13_T_2)) 
                 - (7U & (((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                            >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_4)) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rlast)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_14_count_T_3 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count) 
                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_14_T_2)) 
                 - (3U & (((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                            >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_4)) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rlast)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_count_T_3 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count) 
                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_2)) 
                 - (1U & (((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                            >> 0xfU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_4)) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rlast)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___T_90 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_bready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_valid) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__b_allow)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_bready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__b_allow));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2_io_deq_ready 
        = (3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_in_bvalid) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_bready)) 
                 & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3_io_deq_ready 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_in_bvalid) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_bready)) 
                 & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id)) 
                    >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___T_78 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_b_resp 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
              ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_resp) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id)
                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_1)
                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_0)))
              : 0U) << 4U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__time_reg_resp) 
                               << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_axi_b_resp)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___T_77 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
            ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id)
                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__empty)
                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_echo_extra_id)
                      : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_extra_id
                     [vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__deq_ptr_value])
                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__empty)
                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_echo_extra_id)
                      : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_extra_id
                     [vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__deq_ptr_value])) 
                << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__dread_success 
        = ((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_id)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_valid)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_last)) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_resp)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__dread_success_u 
        = ((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_id)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_valid)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_last)) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_resp)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__iread_success 
        = ((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_id)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_valid)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_last)) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_resp)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__do_deq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__maybe_full) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT___GEN_8 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_ready)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT___do_enq_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_b_resp 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
            ? 0U : (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_b_resp)
                           : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_b_resp) 
                                  >> 2U) : ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_b_resp) 
                                                >> 4U)
                                             : 0U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_b_id 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___T_77) 
             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___T_78)) 
            << 8U) | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__state_time_m))
                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__time_reg_id)
                         : 0U) << 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_axi_b_id)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___T_77) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___T_78));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state_nxt 
        = ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))
            ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))
                ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))
                    ? 1U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__dread_ok_u)
                             ? 1U : 6U)) : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))
                                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__dread_ok)
                                                 ? 1U
                                                 : 5U)
                                             : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__iread_success)
                                                 ? 1U
                                                 : 4U)))
            : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))
                ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))
                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__dwrite_ok_u)
                        ? 1U : 3U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__dwrite_ok)
                                       ? 1U : 2U)) : 
               ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))
                 ? (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__read_icache_shankhand)) 
                     & ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_out_type)) 
                        | (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_out_type))))
                     ? 5U : (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__read_icache_shankhand)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_re))
                              ? 6U : (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__read_icache_shankhand)) 
                                       & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_out_type)) 
                                          | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_out_type))))
                                       ? 2U : (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__read_icache_shankhand)) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_we))
                                                ? 3U
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__read_icache_shankhand)
                                                    ? 4U
                                                    : 1U)))))
                 : 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__maybe_full)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT___do_enq_T)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT___GEN_8));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_b_id 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
            ? 0U : (0xfU & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_b_id)
                             : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_b_id) 
                                    >> 4U) : ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_b_id) 
                                                  >> 8U)
                                               : 0U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_count_T_3 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count) 
                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_2)) 
                 - (0xffffU & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_1_count_T_3 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count) 
                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_1_T_2)) 
                 - (0x7fffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                                >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_2_count_T_3 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count) 
                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_2_T_2)) 
                 - (0x3fffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                                >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_3_count_T_3 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count) 
                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_3_T_2)) 
                 - (0x1fffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                                >> 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_4_count_T_3 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count) 
                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_4_T_2)) 
                 - (0xfffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                               >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_5_count_T_3 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count) 
                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_5_T_2)) 
                 - (0x7ffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                               >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_6_count_T_3 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count) 
                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_6_T_2)) 
                 - (0x3ffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                               >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_7_count_T_3 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count) 
                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_7_T_2)) 
                 - (0x1ffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                               >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_8_count_T_3 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count) 
                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_8_T_2)) 
                 - (0xffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                              >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_9_count_T_3 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count) 
                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_9_T_2)) 
                 - (0x7fU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                              >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_10_count_T_3 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count) 
                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_10_T_2)) 
                 - (0x3fU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                              >> 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_11_count_T_3 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count) 
                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_11_T_2)) 
                 - (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                              >> 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_12_count_T_3 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count) 
                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_12_T_2)) 
                 - (0xfU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                             >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_13_count_T_3 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count) 
                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_13_T_2)) 
                 - (7U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                           >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_14_count_T_3 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count) 
                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_14_T_2)) 
                 - (3U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                           >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_count_T_3 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count) 
                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_2)) 
                 - (1U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                           >> 0xfU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))));
}

VL_INLINE_OPT void VysyxSoCFull___024root___combo__TOP__60(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___combo__TOP__60\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam_io_alloc_valid 
        = (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_grant) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__d_first)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__xmit)) 
            & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.io_deq_valid)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_d_ready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_ready 
        = (1U & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_d_ready) 
                  & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__stall))) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__xmit))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___T 
        = ((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam_io_alloc_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___q_last_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_ready) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_T_1 
        = ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free)) 
           & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___T)
                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free_sel
                  : 0ULL)));
}

VL_INLINE_OPT void VysyxSoCFull___024root___combo__TOP__61(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___combo__TOP__61\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__latch 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__beatsLeft)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_enq_ready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___T_12 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_enq_ready) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__allowed_0)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_arvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___beatsLeft_T_4 
        = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__beatsLeft) 
                    - ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_enq_ready) 
                       & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__beatsLeft))
                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___T_50)
                           : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___sink_ACancel_earlyValid_T_3)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_in_arready 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__allowed_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__out_1_ready 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_enq_ready) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__beatsLeft))
               ? (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___readys_readys_T_2) 
                     >> 1U)) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__state_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_io_enq_valid 
        = (3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_valid) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_in_arready)) 
                 & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_id))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1_io_enq_valid 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_valid) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_in_arready)) 
                 & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_id)) 
                    >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_in_arready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_in_arready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___T_36 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__out_1_ready) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_wvalid)) 
            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_todo))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_in_wready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__out_1_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_in_awready 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__out_1_ready) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_wvalid)) 
           & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_todo)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_io_deq_valid 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_io_enq_valid) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__empty))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1_io_deq_valid 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1_io_enq_valid) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__empty))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_in_arready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_in_arready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__ar_last));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wcounter_T_2 
        = (0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_todo) 
                     - ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_in_wready) 
                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_io_deq_valid) 
                           & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_counter)) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__wbeats_valid))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_in_wready) 
           & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_counter)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__wbeats_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2_io_enq_valid 
        = (3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_awvalid) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_in_awready)) 
                 & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_id))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3_io_enq_valid 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_awvalid) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_in_awready)) 
                 & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_id)) 
                    >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_in_awready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_in_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN_9));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__do_deq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__empty)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_io_deq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT___GEN_10 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_io_deq_ready)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT___do_enq_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__do_deq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__empty)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1_io_deq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1_io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT___GEN_10 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1_io_deq_ready)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT___do_enq_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___GEN_4 
        = (0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___T_2)
                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len) 
                         - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats))
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__r_len)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__do_deq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__maybe_full) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT___GEN_16 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_ready)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT___do_enq_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__do_deq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_io_deq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT___GEN_9 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_io_deq_ready)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT___do_enq_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2_io_deq_valid 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2_io_enq_valid) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__empty))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3_io_deq_valid 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3_io_enq_valid) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__empty))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_awready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_in_awready) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_counter)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__wbeats_latched)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT___GEN_10)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT___do_enq_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT___GEN_10)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT___do_enq_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__maybe_full)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT___do_enq_T)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT___GEN_16));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT___do_enq_T)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT___GEN_9));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__do_deq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__empty)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2_io_deq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2_io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT___GEN_10 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2_io_deq_ready)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT___do_enq_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__do_deq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__empty)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3_io_deq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3_io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT___GEN_10 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3_io_deq_ready)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT___do_enq_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___T_5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__aw_last));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT___GEN_10)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT___do_enq_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT___GEN_10)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT___do_enq_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___GEN_9 
        = (0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___T_5)
                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len_1) 
                         - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_beats))
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__r_len_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__do_deq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__maybe_full) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT___GEN_16 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_ready)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT___do_enq_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT___do_enq_T)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT___GEN_16));
}

void VysyxSoCFull_AXI4UserYanker_1___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__5(VysyxSoCFull_AXI4UserYanker_1* vlSelf);
void VysyxSoCFull_TLToAXI4___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__8(VysyxSoCFull_TLToAXI4* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__20(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__21(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__22(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__23(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__24(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__25(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__26(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__27(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__28(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__29(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__30(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__31(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__32(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__33(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__5(VysyxSoCFull_RX* vlSelf);
void VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__6(VysyxSoCFull_RX* vlSelf);
void VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__7(VysyxSoCFull_TX* vlSelf);
void VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__8(VysyxSoCFull_TX* vlSelf);
void VysyxSoCFull_TLXbar_1___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__15(VysyxSoCFull_TLXbar_1* vlSelf);
void VysyxSoCFull_TLXbar_1___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__16(VysyxSoCFull_TLXbar_1* vlSelf);
void VysyxSoCFull_TLError___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__11(VysyxSoCFull_TLError* vlSelf);
void VysyxSoCFull_TLError___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__ferr__12(VysyxSoCFull_TLError* vlSelf);
void VysyxSoCFull_TLFIFOFixer___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__12(VysyxSoCFull_TLFIFOFixer* vlSelf);
void VysyxSoCFull_TLFIFOFixer___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__13(VysyxSoCFull_TLFIFOFixer* vlSelf);
void VysyxSoCFull_TLWidthWidget___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__10(VysyxSoCFull_TLWidthWidget* vlSelf);
void VysyxSoCFull_TLWidthWidget___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__widget__11(VysyxSoCFull_TLWidthWidget* vlSelf);
void VysyxSoCFull_TLToAXI4___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__9(VysyxSoCFull_TLToAXI4* vlSelf);
void VysyxSoCFull_TLBusBypass___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__11(VysyxSoCFull_TLBusBypass* vlSelf);
void VysyxSoCFull_TLBusBypass___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__12(VysyxSoCFull_TLBusBypass* vlSelf);
void VysyxSoCFull_TLMonitor_7___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__9(VysyxSoCFull_TLMonitor_7* vlSelf);
void VysyxSoCFull_TLMonitor_7___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__10(VysyxSoCFull_TLMonitor_7* vlSelf);
void VysyxSoCFull_AXI4UserYanker_1___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank__6(VysyxSoCFull_AXI4UserYanker_1* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__15(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__16(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__17(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__18(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__19(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__20(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__33(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__34(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__35(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__36(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__37(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__38(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__39(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__40(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__41(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__42(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__43(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__44(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__45(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__46(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__47(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__48(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__21(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__22(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__23(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__24(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_TLToAXI4___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__10(VysyxSoCFull_TLToAXI4* vlSelf);
void VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__7(VysyxSoCFull_RX* vlSelf);
void VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__8(VysyxSoCFull_RX* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__34(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source__21(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source__22(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource__23(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource__24(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source__25(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source__26(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source__27(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source__28(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__29(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__30(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__9(VysyxSoCFull_TX* vlSelf);
void VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__10(VysyxSoCFull_TX* vlSelf);
void VysyxSoCFull_TLWidthWidget___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__widget__12(VysyxSoCFull_TLWidthWidget* vlSelf);
void VysyxSoCFull_TLToAXI4___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__11(VysyxSoCFull_TLToAXI4* vlSelf);
void VysyxSoCFull_AXI4UserYanker_1___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank__7(VysyxSoCFull_AXI4UserYanker_1* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__49(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__50(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__51(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__52(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__53(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__54(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__55(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__56(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__57(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__58(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__59(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__60(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__61(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__62(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__63(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__64(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_TLMonitor_7___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__11(VysyxSoCFull_TLMonitor_7* vlSelf);
void VysyxSoCFull_TLMonitor_7___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__12(VysyxSoCFull_TLMonitor_7* vlSelf);
void VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__9(VysyxSoCFull_RX* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__35(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull_TLXbar_1___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__17(VysyxSoCFull_TLXbar_1* vlSelf);
void VysyxSoCFull_TLFIFOFixer___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__14(VysyxSoCFull_TLFIFOFixer* vlSelf);
void VysyxSoCFull_TLBusBypass___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__13(VysyxSoCFull_TLBusBypass* vlSelf);
void VysyxSoCFull_TLError___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__ferr__13(VysyxSoCFull_TLError* vlSelf);
void VysyxSoCFull_TLToAXI4___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__12(VysyxSoCFull_TLToAXI4* vlSelf);
void VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__17(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__18(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__19(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__20(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__21(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__22(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__23(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__24(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__25(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__26(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__27(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__28(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__29(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__30(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__31(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__32(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_TX___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__4(VysyxSoCFull_TX* vlSelf);
void VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__8(VysyxSoCFull_TLXbar_1* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__36(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull_AXI4UserYanker_1___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank__8(VysyxSoCFull_AXI4UserYanker_1* vlSelf);
void VysyxSoCFull_TLError___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__ferr__8(VysyxSoCFull_TLError* vlSelf);
void VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__14(VysyxSoCFull_TX* vlSelf);
void VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__15(VysyxSoCFull_TX* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__37(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__35(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__36(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__37(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__38(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__39(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__40(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__41(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__42(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__43(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__44(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__38(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__41(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__41(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource__42(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source__43(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source__44(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source__45(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__13(VysyxSoCFull_RX* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__42(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__46(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource__47(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source__48(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source__49(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source__50(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__14(VysyxSoCFull_RX* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__43(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__44(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___combo__TOP__45(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull_TLWidthWidget___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__13(VysyxSoCFull_TLWidthWidget* vlSelf);
void VysyxSoCFull___024root___combo__TOP__46(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__5(VysyxSoCFull_TLXbar_1* vlSelf);
void VysyxSoCFull_TLError___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__5(VysyxSoCFull_TLError* vlSelf);
void VysyxSoCFull_TLFIFOFixer___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__5(VysyxSoCFull_TLFIFOFixer* vlSelf);
void VysyxSoCFull_TLBusBypass___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__5(VysyxSoCFull_TLBusBypass* vlSelf);
void VysyxSoCFull_TLMonitor_7___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__13(VysyxSoCFull_TLMonitor_7* vlSelf);
void VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__7(VysyxSoCFull_TLXbar_1* vlSelf);
void VysyxSoCFull_TLError___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__7(VysyxSoCFull_TLError* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__47(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__45(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__46(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__47(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__48(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__49(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__50(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__51(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__52(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__53(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__54(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull___024root___multiclk__TOP__48(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull_TLBusBypass___multiclk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__15(VysyxSoCFull_TLBusBypass* vlSelf);
void VysyxSoCFull_TLToAXI4___multiclk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__13(VysyxSoCFull_TLToAXI4* vlSelf);
void VysyxSoCFull_AXI4UserYanker_1___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__3(VysyxSoCFull_AXI4UserYanker_1* vlSelf);
void VysyxSoCFull___024root___multiclk__TOP__49(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull_AsyncQueueSink___multiclk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__55(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__51(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__56(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__57(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__16(VysyxSoCFull_TX* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource__52(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source__53(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source__54(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source__55(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__15(VysyxSoCFull_RX* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__50(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___multiclk__TOP__51(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull_TLBusBypass___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__16(VysyxSoCFull_TLBusBypass* vlSelf);
void VysyxSoCFull_TLToAXI4___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__14(VysyxSoCFull_TLToAXI4* vlSelf);
void VysyxSoCFull_TLMonitor_7___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__6(VysyxSoCFull_TLMonitor_7* vlSelf);
void VysyxSoCFull___024root___multiclk__TOP__52(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__10(VysyxSoCFull_TLXbar_1* vlSelf);
void VysyxSoCFull_AXI4UserYanker_1___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank__10(VysyxSoCFull_AXI4UserYanker_1* vlSelf);
void VysyxSoCFull_TX___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__6(VysyxSoCFull_TX* vlSelf);
void VysyxSoCFull_AsyncQueueSink___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__12(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_TLWidthWidget___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__widget__14(VysyxSoCFull_TLWidthWidget* vlSelf);
void VysyxSoCFull_TLFIFOFixer___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__16(VysyxSoCFull_TLFIFOFixer* vlSelf);
void VysyxSoCFull_TLToAXI4___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__7(VysyxSoCFull_TLToAXI4* vlSelf);
void VysyxSoCFull_TLWidthWidget___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__widget__15(VysyxSoCFull_TLWidthWidget* vlSelf);
void VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__11(VysyxSoCFull_TLXbar_1* vlSelf);
void VysyxSoCFull_TLFIFOFixer___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__17(VysyxSoCFull_TLFIFOFixer* vlSelf);
void VysyxSoCFull_TLError___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__ferr__9(VysyxSoCFull_TLError* vlSelf);
void VysyxSoCFull_TLBusBypass___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__9(VysyxSoCFull_TLBusBypass* vlSelf);
void VysyxSoCFull_TLMonitor_7___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__7(VysyxSoCFull_TLMonitor_7* vlSelf);
void VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__13(VysyxSoCFull_TLXbar_1* vlSelf);
void VysyxSoCFull_AsyncQueueSink___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__13(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_TLFIFOFixer___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__10(VysyxSoCFull_TLFIFOFixer* vlSelf);
void VysyxSoCFull_TLWidthWidget___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__widget__8(VysyxSoCFull_TLWidthWidget* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__56(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource__57(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source__58(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source__59(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source__60(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__16(VysyxSoCFull_RX* vlSelf);
void VysyxSoCFull_TLBusBypass___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__7(VysyxSoCFull_TLBusBypass* vlSelf);
void VysyxSoCFull_AsyncQueueSource___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__61(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___combo__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__66(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_TLMonitor_7___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__5(VysyxSoCFull_TLMonitor_7* vlSelf);
void VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__9(VysyxSoCFull_TLXbar_1* vlSelf);
void VysyxSoCFull_TX___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__5(VysyxSoCFull_TX* vlSelf);
void VysyxSoCFull_TLWidthWidget___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__5(VysyxSoCFull_TLWidthWidget* vlSelf);
void VysyxSoCFull_TLFIFOFixer___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__7(VysyxSoCFull_TLFIFOFixer* vlSelf);
void VysyxSoCFull_TLWidthWidget___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__7(VysyxSoCFull_TLWidthWidget* vlSelf);
void VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__12(VysyxSoCFull_TLXbar_1* vlSelf);
void VysyxSoCFull_TLFIFOFixer___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__9(VysyxSoCFull_TLFIFOFixer* vlSelf);
void VysyxSoCFull_TLError___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__10(VysyxSoCFull_TLError* vlSelf);
void VysyxSoCFull_TLBusBypass___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__10(VysyxSoCFull_TLBusBypass* vlSelf);
void VysyxSoCFull_TLMonitor_7___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__8(VysyxSoCFull_TLMonitor_7* vlSelf);
void VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__14(VysyxSoCFull_TLXbar_1* vlSelf);
void VysyxSoCFull_AsyncQueueSink___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__14(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_TLFIFOFixer___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__11(VysyxSoCFull_TLFIFOFixer* vlSelf);
void VysyxSoCFull_TLWidthWidget___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__9(VysyxSoCFull_TLWidthWidget* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__69(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___multiclk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__70(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__20(VysyxSoCFull_TX* vlSelf);
void VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__21(VysyxSoCFull_TX* vlSelf);
void VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__23(VysyxSoCFull_TX* vlSelf);
void VysyxSoCFull_AsyncQueueSink___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__80(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_TX___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__24(VysyxSoCFull_TX* vlSelf);
void VysyxSoCFull_TX___combo__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__25(VysyxSoCFull_TX* vlSelf);
void VysyxSoCFull_AsyncQueueSink___combo__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__85(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__17(VysyxSoCFull_RX* vlSelf);
void VysyxSoCFull_RX___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__19(VysyxSoCFull_RX* vlSelf);
void VysyxSoCFull_RX___combo__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__20(VysyxSoCFull_RX* vlSelf);

void VysyxSoCFull___024root___eval(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VysyxSoCFull_AXI4UserYanker_1___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__5((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1));
        vlSelf->__Vm_traceActivity[1U] = 1U;
        VysyxSoCFull_TLToAXI4___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__8((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4));
        VysyxSoCFull___024root___sequent__TOP__20(vlSelf);
        VysyxSoCFull___024root___sequent__TOP__21(vlSelf);
        VysyxSoCFull___024root___sequent__TOP__22(vlSelf);
        VysyxSoCFull___024root___sequent__TOP__23(vlSelf);
        VysyxSoCFull___024root___sequent__TOP__24(vlSelf);
        VysyxSoCFull___024root___sequent__TOP__25(vlSelf);
        VysyxSoCFull___024root___sequent__TOP__26(vlSelf);
        VysyxSoCFull___024root___sequent__TOP__27(vlSelf);
        VysyxSoCFull___024root___sequent__TOP__28(vlSelf);
        VysyxSoCFull___024root___sequent__TOP__29(vlSelf);
        VysyxSoCFull___024root___sequent__TOP__30(vlSelf);
        VysyxSoCFull___024root___sequent__TOP__31(vlSelf);
        VysyxSoCFull___024root___sequent__TOP__32(vlSelf);
        VysyxSoCFull___024root___sequent__TOP__33(vlSelf);
        VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__5((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx));
        VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__6((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx));
        VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__7((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx));
        VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__8((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx));
        VysyxSoCFull_TLXbar_1___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__15((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1));
        VysyxSoCFull_TLXbar_1___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__16((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1));
        VysyxSoCFull_TLError___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__11((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr));
        VysyxSoCFull_TLError___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__ferr__12((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr));
        VysyxSoCFull_TLFIFOFixer___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__12((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer));
        VysyxSoCFull_TLFIFOFixer___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__13((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer));
        VysyxSoCFull_TLWidthWidget___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__10((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget));
        VysyxSoCFull_TLWidthWidget___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__widget__11((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget));
        VysyxSoCFull_TLToAXI4___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__9((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4));
        VysyxSoCFull_TLBusBypass___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__11((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass));
        VysyxSoCFull_TLBusBypass___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__12((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass));
        VysyxSoCFull_TLMonitor_7___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__9((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor));
        VysyxSoCFull_TLMonitor_7___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__10((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor));
        VysyxSoCFull_AXI4UserYanker_1___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank__6((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__15((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__16((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__17((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__18((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__19((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__20((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__33((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__34((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__35((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__36((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__37((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__38((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__39((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__40((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__41((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__42((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__43((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__44((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__45((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__46((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__47((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__48((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__21((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__22((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__23((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__24((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink));
        VysyxSoCFull_TLToAXI4___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__10((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4));
        VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__7((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx));
        VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__8((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx));
        VysyxSoCFull___024root___sequent__TOP__34(vlSelf);
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source__21((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source));
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source__22((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source));
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource__23((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource));
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource__24((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource));
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source__25((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source));
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source__26((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source));
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source__27((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source));
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source__28((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source));
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__29((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source));
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__30((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source));
        VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__9((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx));
        VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__10((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx));
        VysyxSoCFull_TLWidthWidget___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__widget__12((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget));
        VysyxSoCFull_TLToAXI4___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__11((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4));
        VysyxSoCFull_AXI4UserYanker_1___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank__7((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__49((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__50((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__51((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__52((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__53((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__54((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__55((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__56((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__57((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__58((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__59((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__60((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__61((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__62((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__63((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__64((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15));
        VysyxSoCFull_TLMonitor_7___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__11((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor));
        VysyxSoCFull_TLMonitor_7___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__12((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor));
        VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__9((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx));
        VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__9((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx));
        VysyxSoCFull___024root___sequent__TOP__35(vlSelf);
        VysyxSoCFull_TLXbar_1___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__17((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1));
        VysyxSoCFull_TLFIFOFixer___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__14((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer));
        VysyxSoCFull_TLBusBypass___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__13((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass));
        VysyxSoCFull_TLError___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__ferr__13((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr));
        VysyxSoCFull_TLToAXI4___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__12((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4));
        VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__17((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0));
        VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__18((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1));
        VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__19((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2));
        VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__20((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3));
        VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__21((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4));
        VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__22((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5));
        VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__23((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6));
        VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__24((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7));
        VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__25((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8));
        VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__26((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9));
        VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__27((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10));
        VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__28((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11));
        VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__29((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12));
        VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__30((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13));
        VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__31((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14));
        VysyxSoCFull_Queue_38___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__32((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15));
        VysyxSoCFull_TX___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__4((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx));
        VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__8((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1));
        VysyxSoCFull___024root___sequent__TOP__36(vlSelf);
        VysyxSoCFull_AXI4UserYanker_1___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank__8((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank));
        VysyxSoCFull_TLError___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__ferr__8((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr));
    }
    if ((((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__14((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx));
        vlSelf->__Vm_traceActivity[2U] = 1U;
        VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__15((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx));
        VysyxSoCFull___024root___sequent__TOP__37(vlSelf);
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__35((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__36((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__37((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__38((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__39((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__40((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__41((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__42((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__43((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__44((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink));
        VysyxSoCFull___024root___sequent__TOP__38(vlSelf);
    }
    if ((((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))) 
         | ((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_))))) {
        VysyxSoCFull___024root___sequent__TOP__41(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__41((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source));
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource__42((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource));
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source__43((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source));
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source__44((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source));
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source__45((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source));
        VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__13((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx));
    }
    if ((((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))) 
         | ((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_))))) {
        VysyxSoCFull___024root___sequent__TOP__42(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__46((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source));
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource__47((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource));
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source__48((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source));
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source__49((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source));
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source__50((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source));
        VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__14((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_spi_clk) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_spi_clk)))) {
        VysyxSoCFull___024root___sequent__TOP__43(vlSelf);
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_spi_clk) 
          & (~ (IData)(vlSelf->__Vclklast__TOP__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_spi_clk))) 
         | ((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__spiFlash__DOT__reset) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__spiFlash__DOT__reset))))) {
        VysyxSoCFull___024root___sequent__TOP__44(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    VysyxSoCFull___024root___combo__TOP__45(vlSelf);
    vlSelf->__Vm_traceActivity[6U] = 1U;
    VysyxSoCFull_TLWidthWidget___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__13((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget));
    VysyxSoCFull___024root___combo__TOP__46(vlSelf);
    VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__5((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1));
    VysyxSoCFull_TLError___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__5((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr));
    VysyxSoCFull_TLFIFOFixer___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__5((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer));
    VysyxSoCFull_TLBusBypass___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__5((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass));
    VysyxSoCFull_TLMonitor_7___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__13((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor));
    VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__7((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1));
    VysyxSoCFull_TLError___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__7((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr));
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VysyxSoCFull___024root___sequent__TOP__47(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink____PVT__sink_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink____PVT__sink_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__45((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink));
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink____PVT__sink_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink____PVT__sink_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__46((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink));
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink____PVT__sink_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink____PVT__sink_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__47((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink));
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink____PVT__sink_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink____PVT__sink_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__48((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink));
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink____PVT__sink_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink____PVT__sink_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__49((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink));
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink____PVT__sink_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink____PVT__sink_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__50((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink));
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink____PVT__sink_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink____PVT__sink_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__51((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink));
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink____PVT__sink_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink____PVT__sink_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__52((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink));
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink____PVT__sink_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink____PVT__sink_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__53((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink));
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink____PVT__sink_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink____PVT__sink_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__54((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink));
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
    }
    if (((((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))) 
          | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset)))) 
         | ((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_))))) {
        VysyxSoCFull___024root___multiclk__TOP__48(vlSelf);
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        VysyxSoCFull_TLBusBypass___multiclk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__15((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass));
        VysyxSoCFull_TLToAXI4___multiclk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__13((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4));
        VysyxSoCFull_AXI4UserYanker_1___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__3((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1));
        VysyxSoCFull___024root___multiclk__TOP__49(vlSelf);
        VysyxSoCFull_AsyncQueueSink___multiclk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__55((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink));
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source____PVT__source_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source____PVT__source_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__51((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source));
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
    }
    if ((((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__56((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink));
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__57((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__57((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__56((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__57((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink));
        VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__16((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__56((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__57((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__57((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__56((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__57((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink));
        VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__16((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx));
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource____PVT__source_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource____PVT__source_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource__52((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource));
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source____PVT__source_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source____PVT__source_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source__53((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source));
        vlSelf->__Vm_traceActivity[0x16U] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source____PVT__source_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source____PVT__source_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source__54((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source));
        vlSelf->__Vm_traceActivity[0x17U] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source____PVT__source_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source____PVT__source_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source__55((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source));
        vlSelf->__Vm_traceActivity[0x18U] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx____PVT__io_txc_source__DOT__source_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx____PVT__io_txc_source__DOT__source_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__15((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx));
        vlSelf->__Vm_traceActivity[0x19U] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx____PVT__io_c2b_rst_reg__DOT__reg_) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx____PVT__io_c2b_rst_reg__DOT__reg_))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull___024root___sequent__TOP__50(vlSelf);
    }
    if (((((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))) 
          | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset)))) 
         | ((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_))))) {
        VysyxSoCFull___024root___multiclk__TOP__51(vlSelf);
        vlSelf->__Vm_traceActivity[0x1aU] = 1U;
        VysyxSoCFull_TLBusBypass___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__16((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass));
        VysyxSoCFull_TLToAXI4___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__14((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4));
        VysyxSoCFull_TLMonitor_7___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__6((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor));
        VysyxSoCFull___024root___multiclk__TOP__52(vlSelf);
        VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__10((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1));
        VysyxSoCFull_AXI4UserYanker_1___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank__10((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank));
        VysyxSoCFull_TX___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__6((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx));
        VysyxSoCFull_AsyncQueueSink___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__12((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink));
        VysyxSoCFull_TLWidthWidget___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__widget__14((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget));
        VysyxSoCFull___024root___multiclk__TOP__53(vlSelf);
        VysyxSoCFull_TLFIFOFixer___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__16((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer));
        VysyxSoCFull_TLToAXI4___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__7((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4));
        VysyxSoCFull_TLWidthWidget___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__widget__15((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget));
        VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__11((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1));
        VysyxSoCFull_TLFIFOFixer___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__17((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer));
        VysyxSoCFull_TLError___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__ferr__9((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr));
        VysyxSoCFull_TLBusBypass___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__9((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass));
        VysyxSoCFull___024root___multiclk__TOP__54(vlSelf);
        VysyxSoCFull_TLMonitor_7___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__7((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor));
        VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__13((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1));
        VysyxSoCFull_AsyncQueueSink___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__13((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink));
        VysyxSoCFull_TLFIFOFixer___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__10((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer));
        VysyxSoCFull_TLWidthWidget___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__widget__8((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget));
        VysyxSoCFull___024root___multiclk__TOP__55(vlSelf);
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source____PVT__source_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source____PVT__source_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__56((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source));
        vlSelf->__Vm_traceActivity[0x1bU] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource____PVT__source_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource____PVT__source_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource__57((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource));
        vlSelf->__Vm_traceActivity[0x1cU] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source____PVT__source_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source____PVT__source_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source__58((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source));
        vlSelf->__Vm_traceActivity[0x1dU] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source____PVT__source_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source____PVT__source_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source__59((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source));
        vlSelf->__Vm_traceActivity[0x1eU] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source____PVT__source_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source____PVT__source_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source__60((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source));
        vlSelf->__Vm_traceActivity[0x1fU] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx____PVT__io_txc_source__DOT__source_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx____PVT__io_txc_source__DOT__source_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__16((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx));
        vlSelf->__Vm_traceActivity[0x20U] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx____PVT__io_c2b_rst_reg__DOT__reg_) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx____PVT__io_c2b_rst_reg__DOT__reg_))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull___024root___sequent__TOP__56(vlSelf);
    }
    VysyxSoCFull___024root___combo__TOP__57(vlSelf);
    VysyxSoCFull_TLBusBypass___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__7((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass));
    VysyxSoCFull_AsyncQueueSource___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__61((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source));
    VysyxSoCFull_AsyncQueueSource___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__61((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource));
    VysyxSoCFull_AsyncQueueSource___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__61((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source));
    VysyxSoCFull_AsyncQueueSource___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__61((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source));
    VysyxSoCFull_AsyncQueueSource___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__61((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source));
    VysyxSoCFull_AsyncQueueSource___combo__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__66((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source));
    VysyxSoCFull_AsyncQueueSource___combo__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__66((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource));
    VysyxSoCFull_AsyncQueueSource___combo__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__66((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source));
    VysyxSoCFull_AsyncQueueSource___combo__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__66((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source));
    VysyxSoCFull_AsyncQueueSource___combo__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__66((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source));
    VysyxSoCFull_TLMonitor_7___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__5((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor));
    VysyxSoCFull___024root___combo__TOP__58(vlSelf);
    VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__9((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1));
    VysyxSoCFull_TX___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__5((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx));
    VysyxSoCFull_TLWidthWidget___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__5((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget));
    VysyxSoCFull_TLFIFOFixer___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__7((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer));
    VysyxSoCFull___024root___combo__TOP__59(vlSelf);
    VysyxSoCFull_TLWidthWidget___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__7((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget));
    VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__12((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1));
    VysyxSoCFull_TLFIFOFixer___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__9((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer));
    VysyxSoCFull_TLError___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__10((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr));
    VysyxSoCFull_TLBusBypass___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__10((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass));
    VysyxSoCFull___024root___combo__TOP__60(vlSelf);
    VysyxSoCFull_TLMonitor_7___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__8((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor));
    VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__14((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1));
    VysyxSoCFull_AsyncQueueSink___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__14((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink));
    VysyxSoCFull_TLFIFOFixer___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__11((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer));
    VysyxSoCFull_TLWidthWidget___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__9((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget));
    VysyxSoCFull___024root___combo__TOP__61(vlSelf);
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink____PVT__sink_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink____PVT__sink_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__69((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink));
        vlSelf->__Vm_traceActivity[0x21U] = 1U;
    }
    if (((((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))) 
          | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset)))) 
         | ((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_))))) {
        VysyxSoCFull_AsyncQueueSink___multiclk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__70((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink));
        vlSelf->__Vm_traceActivity[0x22U] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx____PVT__rxInc_sink__DOT__sink_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx____PVT__rxInc_sink__DOT__sink_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__20((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx));
        vlSelf->__Vm_traceActivity[0x23U] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx____PVT__rxInc_sink__DOT__sink_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx____PVT__rxInc_sink__DOT__sink_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__21((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx));
        vlSelf->__Vm_traceActivity[0x24U] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink____PVT__sink_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink____PVT__sink_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__69((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink));
        vlSelf->__Vm_traceActivity[0x25U] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink____PVT__sink_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink____PVT__sink_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__69((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink));
        vlSelf->__Vm_traceActivity[0x26U] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink____PVT__sink_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink____PVT__sink_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__69((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink));
        vlSelf->__Vm_traceActivity[0x27U] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink____PVT__sink_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink____PVT__sink_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__69((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink));
        vlSelf->__Vm_traceActivity[0x28U] = 1U;
    }
    if ((((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__23((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx));
        VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__23((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx));
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink____PVT__sink_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink____PVT__sink_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__69((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink));
        vlSelf->__Vm_traceActivity[0x29U] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink____PVT__sink_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink____PVT__sink_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__69((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink));
        vlSelf->__Vm_traceActivity[0x2aU] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink____PVT__sink_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink____PVT__sink_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__69((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink));
        vlSelf->__Vm_traceActivity[0x2bU] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink____PVT__sink_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink____PVT__sink_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__69((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink));
        vlSelf->__Vm_traceActivity[0x2cU] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink____PVT__sink_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink____PVT__sink_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__69((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink));
        vlSelf->__Vm_traceActivity[0x2dU] = 1U;
    }
    VysyxSoCFull_AsyncQueueSink___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__80((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink));
    VysyxSoCFull_TX___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__24((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx));
    VysyxSoCFull_TX___combo__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__25((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx));
    VysyxSoCFull_AsyncQueueSink___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__80((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink));
    VysyxSoCFull_AsyncQueueSink___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__80((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink));
    VysyxSoCFull_AsyncQueueSink___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__80((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink));
    VysyxSoCFull_AsyncQueueSink___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__80((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink));
    VysyxSoCFull_AsyncQueueSink___combo__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__85((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink));
    VysyxSoCFull_AsyncQueueSink___combo__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__85((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink));
    VysyxSoCFull_AsyncQueueSink___combo__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__85((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink));
    VysyxSoCFull_AsyncQueueSink___combo__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__85((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink));
    VysyxSoCFull_AsyncQueueSink___combo__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__85((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink));
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx____PVT__io_txc_source__DOT__source_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx____PVT__io_txc_source__DOT__source_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__17((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx));
        vlSelf->__Vm_traceActivity[0x2eU] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx____PVT__io_txc_source__DOT__source_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx____PVT__io_txc_source__DOT__source_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__17((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx));
        vlSelf->__Vm_traceActivity[0x2fU] = 1U;
    }
    VysyxSoCFull_RX___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__19((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx));
    VysyxSoCFull_RX___combo__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__20((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx));
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink____PVT__sink_valid_0_reset 
        = vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink____PVT__sink_valid_0_reset;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink____PVT__sink_valid_0_reset 
        = vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink____PVT__sink_valid_0_reset;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink____PVT__sink_valid_0_reset 
        = vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink____PVT__sink_valid_0_reset;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink____PVT__sink_valid_0_reset 
        = vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink____PVT__sink_valid_0_reset;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink____PVT__sink_valid_0_reset 
        = vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink____PVT__sink_valid_0_reset;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink____PVT__sink_valid_0_reset 
        = vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink____PVT__sink_valid_0_reset;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink____PVT__sink_valid_0_reset 
        = vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink____PVT__sink_valid_0_reset;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink____PVT__sink_valid_0_reset 
        = vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink____PVT__sink_valid_0_reset;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink____PVT__sink_valid_0_reset 
        = vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink____PVT__sink_valid_0_reset;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink____PVT__sink_valid_0_reset 
        = vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink____PVT__sink_valid_0_reset;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source____PVT__source_valid_0_reset 
        = vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source____PVT__source_valid_0_reset;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource____PVT__source_valid_0_reset 
        = vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource____PVT__source_valid_0_reset;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source____PVT__source_valid_0_reset 
        = vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source____PVT__source_valid_0_reset;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source____PVT__source_valid_0_reset 
        = vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source____PVT__source_valid_0_reset;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source____PVT__source_valid_0_reset 
        = vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source____PVT__source_valid_0_reset;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source____PVT__source_valid_0_reset 
        = vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source____PVT__source_valid_0_reset;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource____PVT__source_valid_0_reset 
        = vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource____PVT__source_valid_0_reset;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source____PVT__source_valid_0_reset 
        = vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source____PVT__source_valid_0_reset;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source____PVT__source_valid_0_reset 
        = vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source____PVT__source_valid_0_reset;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source____PVT__source_valid_0_reset 
        = vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source____PVT__source_valid_0_reset;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx____PVT__io_txc_source__DOT__source_valid_0_reset 
        = vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx____PVT__io_txc_source__DOT__source_valid_0_reset;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx____PVT__io_txc_source__DOT__source_valid_0_reset 
        = vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx____PVT__io_txc_source__DOT__source_valid_0_reset;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx____PVT__rxInc_sink__DOT__sink_valid_0_reset 
        = vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx____PVT__rxInc_sink__DOT__sink_valid_0_reset;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx____PVT__rxInc_sink__DOT__sink_valid_0_reset 
        = vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx____PVT__rxInc_sink__DOT__sink_valid_0_reset;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx____PVT__io_c2b_rst_reg__DOT__reg_ 
        = vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx____PVT__io_c2b_rst_reg__DOT__reg_;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx____PVT__io_c2b_rst_reg__DOT__reg_ 
        = vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx____PVT__io_c2b_rst_reg__DOT__reg_;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_ 
        = vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_ 
        = vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_;
    vlSelf->__Vclklast__TOP__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_spi_clk 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_spi_clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__spiFlash__DOT__reset 
        = vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__spiFlash__DOT__reset;
    vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink____PVT__sink_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0_reset;
    vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink____PVT__sink_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0_reset;
    vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink____PVT__sink_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0_reset;
    vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink____PVT__sink_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0_reset;
    vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink____PVT__sink_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0_reset;
    vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink____PVT__sink_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0_reset;
    vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink____PVT__sink_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0_reset;
    vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink____PVT__sink_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0_reset;
    vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink____PVT__sink_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0_reset;
    vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink____PVT__sink_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0_reset;
    vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source____PVT__source_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0_reset;
    vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource____PVT__source_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0_reset;
    vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source____PVT__source_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0_reset;
    vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source____PVT__source_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0_reset;
    vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source____PVT__source_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0_reset;
    vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source____PVT__source_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0_reset;
    vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource____PVT__source_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0_reset;
    vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source____PVT__source_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0_reset;
    vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source____PVT__source_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0_reset;
    vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source____PVT__source_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0_reset;
    vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx____PVT__io_txc_source__DOT__source_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0_reset;
    vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx____PVT__io_txc_source__DOT__source_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0_reset;
    vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx____PVT__rxInc_sink__DOT__sink_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0_reset;
    vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx____PVT__rxInc_sink__DOT__sink_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0_reset;
    vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx____PVT__io_c2b_rst_reg__DOT__reg_ 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__io_c2b_rst_reg__DOT__reg_;
    vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx____PVT__io_c2b_rst_reg__DOT__reg_ 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__io_c2b_rst_reg__DOT__reg_;
    vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_ 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_;
    vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_ 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_;
    vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__spiFlash__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__reset;
}

QData VysyxSoCFull___024root___change_request_1(VysyxSoCFull___024root* vlSelf);

VL_INLINE_OPT QData VysyxSoCFull___024root___change_request(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___change_request\n"); );
    // Body
    return (VysyxSoCFull___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VysyxSoCFull___024root___change_request_1(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_ ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)
         | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_ ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)
         | (vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__spiFlash__DOT__reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_txc_source__DOT__source_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_txc_source__DOT__source_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__sink_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__sink_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__sink_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__sink_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__sink_valid_0_reset)
        || (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__sink_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__sink_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__sink_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__sink_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__sink_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__rxInc_sink__DOT__sink_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__io_c2b_rst_reg__DOT__reg_ ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__io_c2b_rst_reg__DOT__reg_)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__rxInc_sink__DOT__sink_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__io_c2b_rst_reg__DOT__reg_ ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__io_c2b_rst_reg__DOT__reg_)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__source_valid_0_reset)
        || (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource__source_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source__source_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source__source_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source__source_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__source_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource__source_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source__source_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source__source_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source__source_valid_0_reset));
    VL_DEBUG_IF( if(__req && ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_ ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29249: ysyxSoCFull.asic.chipMaster.chiplink.rx_reset_reg.reg_\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_ ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29249: ysyxSoCFull.fpga.chiplink.rx_reset_reg.reg_\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__spiFlash__DOT__reset))) VL_DBG_MSGF("        CHANGE: vsrc//spiFlash.v:17: ysyxSoCFull.spiFlash.reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_txc_source__DOT__source_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:27973: io_txc_source.source_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_txc_source__DOT__source_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:27973: io_txc_source.source_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__sink_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29406: sink_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__sink_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29406: sink_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__sink_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29406: sink_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__sink_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29406: sink_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__sink_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29406: sink_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__sink_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29406: sink_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__sink_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29406: sink_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__sink_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29406: sink_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__sink_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29406: sink_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__sink_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29406: sink_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__rxInc_sink__DOT__sink_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29680: rxInc_sink.sink_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__io_c2b_rst_reg__DOT__reg_ ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__io_c2b_rst_reg__DOT__reg_))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29249: io_c2b_rst_reg.reg_\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__rxInc_sink__DOT__sink_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29680: rxInc_sink.sink_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__io_c2b_rst_reg__DOT__reg_ ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__io_c2b_rst_reg__DOT__reg_))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29249: io_c2b_rst_reg.reg_\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__source_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:27681: source_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource__source_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:27681: source_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source__source_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:27681: source_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source__source_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:27681: source_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source__source_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:27681: source_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__source_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:27681: source_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource__source_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:27681: source_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source__source_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:27681: source_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source__source_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:27681: source_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source__source_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:27681: source_valid_0_reset\n"); );
    // Final
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_ 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_ 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__spiFlash__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_txc_source__DOT__source_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_txc_source__DOT__source_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__sink_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__sink_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__sink_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__sink_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__sink_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__sink_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__sink_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__sink_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__sink_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__sink_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__rxInc_sink__DOT__sink_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__io_c2b_rst_reg__DOT__reg_ 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__io_c2b_rst_reg__DOT__reg_;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__rxInc_sink__DOT__sink_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__io_c2b_rst_reg__DOT__reg_ 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__io_c2b_rst_reg__DOT__reg_;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__source_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource__source_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source__source_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source__source_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source__source_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__source_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource__source_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source__source_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source__source_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source__source_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0_reset;
    return __req;
}

#ifdef VL_DEBUG
void VysyxSoCFull___024root___eval_debug_assertions(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
