// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull___024root.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

extern const VlWide<33>/*1055:0*/ VysyxSoCFull__ConstPool__CONST_3892cc72_0;
extern const VlWide<33>/*1055:0*/ VysyxSoCFull__ConstPool__CONST_f1d99c76_0;
extern const VlWide<33>/*1055:0*/ VysyxSoCFull__ConstPool__CONST_ac7e6362_0;
extern const VlWide<33>/*1055:0*/ VysyxSoCFull__ConstPool__CONST_f1d81c7e_0;
extern const VlWide<33>/*1055:0*/ VysyxSoCFull__ConstPool__CONST_99cb7c89_0;
extern const VlWide<33>/*1055:0*/ VysyxSoCFull__ConstPool__CONST_81905067_0;
extern const VlWide<33>/*1055:0*/ VysyxSoCFull__ConstPool__CONST_f1d99c4e_0;
extern const VlWide<33>/*1055:0*/ VysyxSoCFull__ConstPool__CONST_003cb67b_0;
extern const VlWide<17>/*543:0*/ VysyxSoCFull__ConstPool__CONST_ea2bd2fa_0;
extern const VlWide<17>/*543:0*/ VysyxSoCFull__ConstPool__CONST_00a54009_0;
extern const VlWide<17>/*543:0*/ VysyxSoCFull__ConstPool__CONST_0123e283_0;
extern const VlWide<17>/*543:0*/ VysyxSoCFull__ConstPool__CONST_00a4c3f1_0;
extern const VlWide<17>/*543:0*/ VysyxSoCFull__ConstPool__CONST_70f0c30e_0;
extern const VlWide<17>/*543:0*/ VysyxSoCFull__ConstPool__CONST_f974e5b2_0;
extern const VlWide<17>/*543:0*/ VysyxSoCFull__ConstPool__CONST_00a54001_0;
extern const VlWide<17>/*543:0*/ VysyxSoCFull__ConstPool__CONST_a42324e4_0;

VL_INLINE_OPT void VysyxSoCFull___024root___multiclk__TOP__53(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___multiclk__TOP__53\n"); );
    // Variables
    CData/*1:0*/ ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___GEN_23;
    VlWide<3>/*95:0*/ __Vtemp4487;
    VlWide<3>/*95:0*/ __Vtemp4489;
    VlWide<4>/*127:0*/ __Vtemp4493;
    VlWide<4>/*127:0*/ __Vtemp4494;
    VlWide<4>/*127:0*/ __Vtemp4499;
    VlWide<4>/*127:0*/ __Vtemp4500;
    VlWide<33>/*1055:0*/ __Vtemp4506;
    VlWide<33>/*1055:0*/ __Vtemp4507;
    VlWide<33>/*1055:0*/ __Vtemp4513;
    VlWide<33>/*1055:0*/ __Vtemp4520;
    VlWide<33>/*1055:0*/ __Vtemp4521;
    VlWide<33>/*1055:0*/ __Vtemp4527;
    VlWide<4>/*127:0*/ __Vtemp4534;
    VlWide<4>/*127:0*/ __Vtemp4535;
    VlWide<4>/*127:0*/ __Vtemp4540;
    VlWide<4>/*127:0*/ __Vtemp4541;
    VlWide<33>/*1055:0*/ __Vtemp4547;
    VlWide<33>/*1055:0*/ __Vtemp4548;
    VlWide<33>/*1055:0*/ __Vtemp4554;
    VlWide<33>/*1055:0*/ __Vtemp4561;
    VlWide<33>/*1055:0*/ __Vtemp4562;
    VlWide<33>/*1055:0*/ __Vtemp4568;
    VlWide<4>/*127:0*/ __Vtemp4575;
    VlWide<4>/*127:0*/ __Vtemp4576;
    VlWide<4>/*127:0*/ __Vtemp4581;
    VlWide<4>/*127:0*/ __Vtemp4582;
    VlWide<33>/*1055:0*/ __Vtemp4588;
    VlWide<33>/*1055:0*/ __Vtemp4589;
    VlWide<33>/*1055:0*/ __Vtemp4595;
    VlWide<33>/*1055:0*/ __Vtemp4602;
    VlWide<33>/*1055:0*/ __Vtemp4603;
    VlWide<33>/*1055:0*/ __Vtemp4609;
    VlWide<17>/*543:0*/ __Vtemp4616;
    VlWide<17>/*543:0*/ __Vtemp4617;
    VlWide<17>/*543:0*/ __Vtemp4623;
    VlWide<17>/*543:0*/ __Vtemp4630;
    VlWide<17>/*543:0*/ __Vtemp4631;
    VlWide<17>/*543:0*/ __Vtemp4637;
    VlWide<17>/*543:0*/ __Vtemp4644;
    VlWide<17>/*543:0*/ __Vtemp4645;
    VlWide<17>/*543:0*/ __Vtemp4651;
    VlWide<17>/*543:0*/ __Vtemp4658;
    VlWide<17>/*543:0*/ __Vtemp4659;
    VlWide<17>/*543:0*/ __Vtemp4665;
    VlWide<17>/*543:0*/ __Vtemp4672;
    VlWide<17>/*543:0*/ __Vtemp4673;
    VlWide<17>/*543:0*/ __Vtemp4679;
    VlWide<17>/*543:0*/ __Vtemp4686;
    VlWide<17>/*543:0*/ __Vtemp4687;
    VlWide<17>/*543:0*/ __Vtemp4693;
    // Body
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_valid 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_bits_len 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__maybe_full)
            ? vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__ram_len
           [0U] : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_len));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_len 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)
            ? vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__ram_len
           [0U] : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_len));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_bits_addr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__maybe_full)
            ? vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__ram_addr
           [0U] : vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_addr);
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_addr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)
            ? vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__ram_addr
           [0U] : vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_addr);
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_bits_size 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__maybe_full)
            ? vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__ram_size
           [0U] : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_size));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_size 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)
            ? vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__ram_size
           [0U] : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_size));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_ready 
        = ((((0ULL == (0x80000000ULL & (QData)((IData)(
                                                       (0x80000000U 
                                                        ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))) 
             & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_in_a_ready)) 
            | ((0ULL == (0xc0000000ULL & (QData)((IData)(
                                                         (0x40000000U 
                                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_in_a_ready))) 
           | ((0ULL == (0xc0000000ULL & (QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_enq_ready)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_a_ready 
        = ((((0ULL == (0x80000000ULL & (QData)((IData)(
                                                       (0x80000000U 
                                                        ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))) 
             & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_in_a_ready)) 
            | ((0ULL == (0xc0000000ULL & (QData)((IData)(
                                                         (0x40000000U 
                                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_in_a_ready))) 
           | ((0ULL == (0xc0000000ULL & (QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_enq_ready)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__deq_io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_io_deq_valid 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__deq_io_deq_valid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT___GEN_14 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_ready)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT___do_enq_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___T_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__do_deq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__busy)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__r_len)
            : (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_bits_len));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__busy_1)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__r_len_1)
            : (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_len));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__busy)
            ? vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__r_addr
            : vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_bits_addr);
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__busy_1)
            ? vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__r_addr_1
            : vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_addr);
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___wrapMask_T_1 
        = (0x7fffffU & ((0xffU | ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_bits_len) 
                                  << 8U)) << (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_bits_size)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___wrapMask_T_3 
        = (0x7fffffU & ((0xffU | ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_len) 
                                  << 8U)) << (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_size)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__latch 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__beatsLeft)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_a_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___beatsLeft_T_4 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__beatsLeft) 
                    - ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_a_ready) 
                       & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__beatsLeft))
                           ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___T_12)
                           : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___sink_ACancel_earlyValid_T_3)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__out_1_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_a_ready) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__beatsLeft))
               ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___readys_T_3))
               : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__state_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT___do_enq_T)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT___GEN_14));
    VL_EXTEND_WI(67,32, __Vtemp4487, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__shift);
    VL_EXTEND_WI(67,32, __Vtemp4489, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__shift);
    if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_opcode))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___GEN_8[0U] 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___T_3)
                ? ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__state) 
                           >> 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__last)))
                    ? 0U : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide[1U])
                : __Vtemp4487[0U]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___GEN_8[1U] 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___T_3)
                ? ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__state) 
                           >> 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__last)))
                    ? 0U : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide[2U])
                : __Vtemp4487[1U]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___GEN_8[2U] 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___T_3)
                      ? ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__state) 
                                 >> 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__last)))
                          ? 0U : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide[3U])
                      : __Vtemp4487[2U]));
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___GEN_8[0U] 
            = __Vtemp4489[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___GEN_8[1U] 
            = __Vtemp4489[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___GEN_8[2U] 
            = (7U & __Vtemp4489[2U]);
    }
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__full)) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_awready) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len_1)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__inc_addr 
        = (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr 
           + (0xffffU & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_bits_size))));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__inc_addr_1 
        = (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr_1 
           + (0xffffU & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_size))));
    __Vtemp4493[0U] = 1U;
    __Vtemp4493[1U] = 0U;
    __Vtemp4493[2U] = 0U;
    __Vtemp4493[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4494, __Vtemp4493, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source));
    __Vtemp4499[0U] = 1U;
    __Vtemp4499[1U] = 0U;
    __Vtemp4499[2U] = 0U;
    __Vtemp4499[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4500, __Vtemp4499, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight[0U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4494[0U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4500[0U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight[1U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4494[1U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4500[1U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight[2U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4494[2U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4500[2U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight[3U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4494[3U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4500[3U]
                                                : 0U)));
    VL_EXTEND_WI(1027,4, __Vtemp4506, (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp4507, __Vtemp4506, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                   << 2U));
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp4513, VysyxSoCFull__ConstPool__CONST_3892cc72_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4507[0U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4513[0U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4507[1U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[1U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[1U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4513[1U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[1U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4507[2U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[2U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[2U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4513[2U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[2U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4507[3U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[3U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[3U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4513[3U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[3U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4507[4U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[4U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[4U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4513[4U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[4U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4507[5U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[5U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[5U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4513[5U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[5U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4507[6U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[6U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[6U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4513[6U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[6U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4507[7U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[7U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[7U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4513[7U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[7U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[8U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[8U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4507[8U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[8U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[8U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4513[8U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[8U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[9U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[9U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[9U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4507[9U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[9U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[9U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4513[9U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[9U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[0xaU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[0xaU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xaU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4507[0xaU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xaU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xaU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4513[0xaU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xaU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[0xbU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[0xbU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xbU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4507[0xbU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xbU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xbU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4513[0xbU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xbU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[0xcU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[0xcU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xcU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4507[0xcU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xcU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xcU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4513[0xcU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xcU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[0xdU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[0xdU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xdU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4507[0xdU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xdU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xdU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4513[0xdU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xdU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[0xeU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[0xeU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xeU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4507[0xeU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xeU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xeU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4513[0xeU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xeU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[0xfU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[0xfU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xfU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4507[0xfU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xfU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xfU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4513[0xfU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xfU]))));
    VL_EXTEND_WI(1028,5, __Vtemp4520, (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1028,1028,10, __Vtemp4521, __Vtemp4520, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                   << 3U));
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp4527, VysyxSoCFull__ConstPool__CONST_81905067_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4521[0U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4527[0U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4521[1U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[1U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[1U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4527[1U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[1U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4521[2U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[2U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[2U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4527[2U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[2U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4521[3U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[3U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[3U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4527[3U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[3U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4521[4U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[4U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[4U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4527[4U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[4U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4521[5U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[5U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[5U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4527[5U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[5U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4521[6U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[6U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[6U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4527[6U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[6U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4521[7U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[7U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[7U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4527[7U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[7U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[8U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[8U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4521[8U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[8U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[8U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4527[8U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[8U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[9U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[9U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[9U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4521[9U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[9U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[9U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4527[9U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[9U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xaU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xaU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xaU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4521[0xaU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xaU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xaU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4527[0xaU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xaU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xbU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xbU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xbU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4521[0xbU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xbU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xbU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4527[0xbU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xbU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xcU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xcU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xcU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4521[0xcU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xcU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xcU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4527[0xcU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xcU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xdU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xdU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xdU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4521[0xdU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xdU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xdU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4527[0xdU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xdU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xeU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xeU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xeU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4521[0xeU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xeU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xeU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4527[0xeU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xeU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xfU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xfU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xfU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4521[0xfU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xfU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xfU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4527[0xfU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xfU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x10U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x10U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x10U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4521[0x10U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x10U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x10U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4527[0x10U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x10U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x11U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x11U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x11U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4521[0x11U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x11U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x11U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4527[0x11U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x11U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x12U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x12U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x12U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4521[0x12U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x12U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x12U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4527[0x12U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x12U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x13U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x13U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x13U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4521[0x13U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x13U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x13U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4527[0x13U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x13U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x14U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x14U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x14U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4521[0x14U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x14U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x14U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4527[0x14U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x14U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x15U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x15U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x15U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4521[0x15U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x15U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x15U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4527[0x15U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x15U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x16U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x16U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x16U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4521[0x16U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x16U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x16U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4527[0x16U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x16U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x17U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x17U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x17U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4521[0x17U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x17U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x17U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4527[0x17U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x17U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x18U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x18U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x18U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4521[0x18U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x18U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x18U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4527[0x18U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x18U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x19U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x19U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x19U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4521[0x19U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x19U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x19U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4527[0x19U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x19U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x1aU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x1aU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1aU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4521[0x1aU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1aU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1aU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4527[0x1aU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1aU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x1bU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x1bU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1bU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4521[0x1bU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1bU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1bU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4527[0x1bU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1bU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x1cU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x1cU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1cU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4521[0x1cU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1cU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1cU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4527[0x1cU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1cU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x1dU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x1dU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1dU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4521[0x1dU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1dU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1dU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4527[0x1dU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1dU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x1eU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x1eU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1eU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4521[0x1eU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1eU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1eU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4527[0x1eU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1eU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x1fU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x1fU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1fU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4521[0x1fU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1fU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1fU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4527[0x1fU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1fU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___T_50 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__out_1_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_i_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__out_1_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_allow));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_a_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__out_1_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_allow));
    ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___GEN_23 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___T_50) 
            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_isSupported)))
            ? ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state))
                ? 3U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state))
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_a_ready) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__stall)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___a_first_T 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_a_ready) 
            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__stall))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_in_a_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_a_ready) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__stall)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___GEN_25 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_a_ready) 
             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__beatsLeft)) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__state_0))) 
            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state)))
            ? ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state))
                ? 1U : (IData)(ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___GEN_23))
            : (IData)(ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___GEN_23));
    __Vtemp4534[0U] = 1U;
    __Vtemp4534[1U] = 0U;
    __Vtemp4534[2U] = 0U;
    __Vtemp4534[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4535, __Vtemp4534, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source));
    __Vtemp4540[0U] = 1U;
    __Vtemp4540[1U] = 0U;
    __Vtemp4540[2U] = 0U;
    __Vtemp4540[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4541, __Vtemp4540, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight[0U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4535[0U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4541[0U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight[1U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4535[1U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4541[1U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight[2U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4535[2U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4541[2U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight[3U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4535[3U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4541[3U]
                                                : 0U)));
    VL_EXTEND_WI(1027,4, __Vtemp4547, (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp4548, __Vtemp4547, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                   << 2U));
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp4554, VysyxSoCFull__ConstPool__CONST_3892cc72_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4548[0U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4554[0U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4548[1U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[1U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[1U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4554[1U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[1U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4548[2U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[2U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[2U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4554[2U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[2U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4548[3U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[3U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[3U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4554[3U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[3U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4548[4U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[4U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[4U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4554[4U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[4U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4548[5U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[5U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[5U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4554[5U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[5U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4548[6U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[6U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[6U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4554[6U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[6U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4548[7U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[7U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[7U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4554[7U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[7U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[8U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[8U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4548[8U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[8U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[8U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4554[8U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[8U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[9U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[9U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[9U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4548[9U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[9U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[9U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4554[9U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[9U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[0xaU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[0xaU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xaU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4548[0xaU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xaU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xaU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4554[0xaU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xaU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[0xbU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[0xbU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xbU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4548[0xbU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xbU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xbU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4554[0xbU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xbU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[0xcU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[0xcU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xcU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4548[0xcU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xcU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xcU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4554[0xcU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xcU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[0xdU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[0xdU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xdU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4548[0xdU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xdU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xdU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4554[0xdU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xdU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[0xeU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[0xeU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xeU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4548[0xeU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xeU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xeU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4554[0xeU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xeU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[0xfU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[0xfU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xfU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4548[0xfU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xfU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xfU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4554[0xfU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xfU]))));
    VL_EXTEND_WI(1028,5, __Vtemp4561, (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1028,1028,10, __Vtemp4562, __Vtemp4561, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                   << 3U));
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp4568, VysyxSoCFull__ConstPool__CONST_81905067_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                   << 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4562[0U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4568[0U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4562[1U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[1U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[1U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4568[1U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[1U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4562[2U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[2U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[2U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4568[2U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[2U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4562[3U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[3U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[3U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4568[3U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[3U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4562[4U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[4U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[4U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4568[4U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[4U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4562[5U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[5U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[5U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4568[5U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[5U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4562[6U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[6U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[6U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4568[6U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[6U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4562[7U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[7U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[7U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4568[7U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[7U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[8U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[8U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4562[8U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[8U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[8U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4568[8U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[8U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[9U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[9U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[9U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4562[9U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[9U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[9U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4568[9U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[9U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xaU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xaU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xaU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4562[0xaU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xaU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xaU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4568[0xaU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xaU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xbU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xbU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xbU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4562[0xbU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xbU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xbU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4568[0xbU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xbU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xcU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xcU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xcU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4562[0xcU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xcU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xcU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4568[0xcU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xcU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xdU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xdU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xdU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4562[0xdU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xdU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xdU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4568[0xdU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xdU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xeU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xeU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xeU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4562[0xeU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xeU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xeU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4568[0xeU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xeU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xfU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xfU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xfU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4562[0xfU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xfU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xfU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4568[0xfU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xfU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x10U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x10U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x10U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4562[0x10U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x10U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x10U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4568[0x10U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x10U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x11U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x11U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x11U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4562[0x11U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x11U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x11U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4568[0x11U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x11U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x12U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x12U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x12U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4562[0x12U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x12U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x12U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4568[0x12U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x12U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x13U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x13U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x13U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4562[0x13U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x13U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x13U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4568[0x13U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x13U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x14U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x14U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x14U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4562[0x14U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x14U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x14U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4568[0x14U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x14U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x15U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x15U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x15U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4562[0x15U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x15U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x15U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4568[0x15U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x15U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x16U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x16U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x16U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4562[0x16U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x16U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x16U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4568[0x16U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x16U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x17U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x17U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x17U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4562[0x17U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x17U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x17U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4568[0x17U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x17U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x18U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x18U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x18U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4562[0x18U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x18U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x18U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4568[0x18U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x18U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x19U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x19U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x19U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4562[0x19U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x19U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x19U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4568[0x19U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x19U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x1aU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x1aU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1aU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4562[0x1aU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1aU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1aU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4568[0x1aU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1aU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x1bU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x1bU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1bU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4562[0x1bU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1bU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1bU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4568[0x1bU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1bU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x1cU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x1cU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1cU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4562[0x1cU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1cU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1cU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4568[0x1cU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1cU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x1dU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x1dU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1dU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4562[0x1dU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1dU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1dU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4568[0x1dU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1dU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x1eU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x1eU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1eU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4562[0x1eU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1eU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1eU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4568[0x1eU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1eU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x1fU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x1fU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1fU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4562[0x1fU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1fU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1fU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4568[0x1fU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1fU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid));
    if (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_first_counter)) 
         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___a_first_T))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_146 
            = ((0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_16));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_147 
            = ((0x11U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_17));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_148 
            = ((0x12U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_18));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_149 
            = ((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_19));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_150 
            = ((0x14U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_20));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_151 
            = ((0x15U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_21));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_152 
            = ((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_22));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_153 
            = ((0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_23));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_154 
            = ((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_24));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_155 
            = ((0x19U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_25));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_156 
            = ((0x1aU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_26));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_157 
            = ((0x1bU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_27));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_158 
            = ((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_28));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_159 
            = ((0x1dU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_29));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_160 
            = ((0x1eU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_30));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_161 
            = ((0x1fU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_31));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_162 
            = ((0x20U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_32));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_163 
            = ((0x21U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_33));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_164 
            = ((0x22U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_34));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_165 
            = ((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_35));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_166 
            = ((0x24U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_36));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_167 
            = ((0x25U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_37));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_168 
            = ((0x26U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_38));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_169 
            = ((0x27U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_39));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_170 
            = ((0x28U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_40));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_171 
            = ((0x29U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_41));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_172 
            = ((0x2aU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_42));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_173 
            = ((0x2bU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_43));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_174 
            = ((0x2cU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_44));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_175 
            = ((0x2dU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_45));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_176 
            = ((0x2eU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_46));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_177 
            = ((0x2fU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_47));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_178 
            = ((0x30U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_48));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_179 
            = ((0x31U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_49));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_180 
            = ((0x32U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_50));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_181 
            = ((0x33U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_51));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_182 
            = ((0x34U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_52));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_183 
            = ((0x35U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_53));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_184 
            = ((0x36U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_54));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_185 
            = ((0x37U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_55));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_186 
            = ((0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_56));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_187 
            = ((0x39U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_57));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_188 
            = ((0x3aU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_58));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_189 
            = ((0x3bU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_59));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_190 
            = ((0x3cU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_60));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_191 
            = ((0x3dU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_61));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_192 
            = ((0x3eU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_62));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_193 
            = ((0x3fU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_63));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_194 
            = ((0x40U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_64));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_195 
            = ((0x41U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_65));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_196 
            = ((0x42U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_66));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_197 
            = ((0x43U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_67));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_198 
            = ((0x44U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_68));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_199 
            = ((0x45U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_69));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_200 
            = ((0x46U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_70));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_201 
            = ((0x47U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_71));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_202 
            = ((0x48U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_72));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_203 
            = ((0x49U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_73));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_204 
            = ((0x4aU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_74));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_205 
            = ((0x4bU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_75));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_206 
            = ((0x4cU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_76));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_207 
            = ((0x4dU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_77));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_208 
            = ((0x4eU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_78));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_209 
            = ((0x4fU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_79));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_210 
            = ((0x50U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_80));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_211 
            = ((0x51U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_81));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_212 
            = ((0x52U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_82));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_213 
            = ((0x53U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_83));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_214 
            = ((0x54U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_84));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_215 
            = ((0x55U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_85));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_216 
            = ((0x56U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_86));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_217 
            = ((0x57U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_87));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_218 
            = ((0x58U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_88));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_219 
            = ((0x59U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_89));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_220 
            = ((0x5aU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_90));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_221 
            = ((0x5bU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_91));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_222 
            = ((0x5cU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_92));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_223 
            = ((0x5dU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_93));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_224 
            = ((0x5eU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_94));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_225 
            = ((0x5fU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_95));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_226 
            = ((0x60U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_96));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_227 
            = ((0x61U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_97));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_228 
            = ((0x62U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_98));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_229 
            = ((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_99));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_230 
            = ((0x64U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_100));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_231 
            = ((0x65U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_101));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_232 
            = ((0x66U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_102));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_233 
            = ((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_103));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_234 
            = ((0x68U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_104));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_235 
            = ((0x69U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_105));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_236 
            = ((0x6aU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_106));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_237 
            = ((0x6bU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_107));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_238 
            = ((0x6cU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_108));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_239 
            = ((0x6dU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_109));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_240 
            = ((0x6eU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_110));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_241 
            = ((0x6fU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_111));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_242 
            = ((0x70U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_112));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_243 
            = ((0x71U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_113));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_244 
            = ((0x72U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_114));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_245 
            = ((0x73U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_115));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_246 
            = ((0x74U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_116));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_247 
            = ((0x75U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_117));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_248 
            = ((0x76U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_118));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_249 
            = ((0x77U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_119));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_250 
            = ((0x78U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_120));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_251 
            = ((0x79U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_121));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_252 
            = ((0x7aU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_122));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_253 
            = ((0x7bU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_123));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_254 
            = ((0x7cU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_124));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_255 
            = ((0x7dU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_125));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_256 
            = ((0x7eU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_126));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_257 
            = ((0x7fU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_127));
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_146 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_16;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_147 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_17;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_148 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_18;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_149 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_19;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_150 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_20;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_21;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_152 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_22;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_153 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_23;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_154 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_24;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_155 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_25;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_156 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_26;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_157 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_27;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_158 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_28;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_159 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_29;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_160 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_30;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_161 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_31;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_162 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_32;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_163 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_33;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_164 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_34;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_165 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_35;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_166 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_36;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_167 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_37;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_168 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_38;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_169 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_39;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_170 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_40;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_171 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_41;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_172 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_42;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_173 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_43;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_174 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_44;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_175 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_45;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_176 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_46;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_177 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_47;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_178 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_48;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_179 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_49;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_180 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_50;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_181 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_51;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_182 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_52;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_183 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_53;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_184 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_54;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_185 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_55;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_186 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_56;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_187 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_57;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_188 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_58;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_189 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_59;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_190 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_60;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_191 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_61;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_192 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_62;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_193 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_63;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_194 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_64;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_195 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_65;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_196 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_66;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_197 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_67;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_198 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_68;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_199 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_69;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_200 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_70;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_201 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_71;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_202 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_72;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_203 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_73;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_204 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_74;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_205 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_75;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_206 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_76;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_207 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_77;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_208 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_78;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_209 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_79;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_210 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_80;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_211 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_81;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_212 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_82;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_213 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_83;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_214 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_84;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_215 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_85;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_216 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_86;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_217 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_87;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_218 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_88;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_219 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_89;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_220 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_90;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_221 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_91;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_222 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_92;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_223 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_93;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_224 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_94;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_225 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_95;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_226 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_96;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_227 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_97;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_228 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_98;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_229 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_99;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_230 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_100;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_231 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_101;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_232 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_102;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_233 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_103;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_234 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_104;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_235 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_105;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_236 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_106;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_237 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_107;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_238 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_108;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_239 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_109;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_240 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_110;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_241 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_111;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_242 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_112;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_243 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_113;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_244 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_114;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_245 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_115;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_246 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_116;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_247 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_117;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_248 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_118;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_249 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_119;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_250 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_120;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_251 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_121;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_252 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_122;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_253 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_123;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_254 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_124;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_255 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_125;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_256 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_126;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_257 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_127;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_enq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_in_a_ready) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__full)));
    __Vtemp4575[0U] = 1U;
    __Vtemp4575[1U] = 0U;
    __Vtemp4575[2U] = 0U;
    __Vtemp4575[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4576, __Vtemp4575, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source));
    __Vtemp4581[0U] = 1U;
    __Vtemp4581[1U] = 0U;
    __Vtemp4581[2U] = 0U;
    __Vtemp4581[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4582, __Vtemp4581, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight[0U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4576[0U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                                ? __Vtemp4582[0U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight[1U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4576[1U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                                ? __Vtemp4582[1U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight[2U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4576[2U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                                ? __Vtemp4582[2U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight[3U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4576[3U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                                ? __Vtemp4582[3U]
                                                : 0U)));
    VL_EXTEND_WI(1027,4, __Vtemp4588, (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp4589, __Vtemp4588, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                   << 2U));
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp4595, VysyxSoCFull__ConstPool__CONST_3892cc72_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4589[0U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4595[0U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4589[1U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[1U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[1U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4595[1U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[1U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4589[2U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[2U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[2U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4595[2U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[2U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4589[3U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[3U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[3U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4595[3U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[3U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4589[4U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[4U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[4U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4595[4U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[4U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4589[5U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[5U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[5U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4595[5U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[5U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4589[6U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[6U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[6U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4595[6U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[6U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4589[7U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[7U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[7U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4595[7U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[7U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[8U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[8U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4589[8U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[8U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[8U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4595[8U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[8U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[9U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[9U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[9U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4589[9U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[9U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[9U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4595[9U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[9U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[0xaU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[0xaU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xaU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4589[0xaU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xaU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xaU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4595[0xaU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xaU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[0xbU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[0xbU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xbU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4589[0xbU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xbU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xbU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4595[0xbU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xbU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[0xcU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[0xcU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xcU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4589[0xcU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xcU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xcU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4595[0xcU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xcU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[0xdU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[0xdU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xdU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4589[0xdU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xdU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xdU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4595[0xdU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xdU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[0xeU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[0xeU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xeU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4589[0xeU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xeU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xeU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4595[0xeU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xeU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[0xfU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[0xfU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xfU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4589[0xfU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xfU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xfU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4595[0xfU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xfU]))));
    VL_EXTEND_WI(1028,5, __Vtemp4602, (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1028,1028,10, __Vtemp4603, __Vtemp4602, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                   << 3U));
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp4609, VysyxSoCFull__ConstPool__CONST_81905067_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                   << 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4603[0U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4609[0U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4603[1U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[1U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[1U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4609[1U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[1U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4603[2U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[2U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[2U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4609[2U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[2U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4603[3U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[3U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[3U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4609[3U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[3U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4603[4U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[4U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[4U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4609[4U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[4U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4603[5U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[5U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[5U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4609[5U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[5U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4603[6U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[6U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[6U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4609[6U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[6U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4603[7U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[7U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[7U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4609[7U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[7U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[8U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[8U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4603[8U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[8U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[8U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4609[8U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[8U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[9U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[9U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[9U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4603[9U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[9U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[9U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4609[9U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[9U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0xaU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xaU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xaU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4603[0xaU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xaU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xaU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4609[0xaU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xaU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0xbU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xbU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xbU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4603[0xbU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xbU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xbU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4609[0xbU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xbU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0xcU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xcU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xcU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4603[0xcU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xcU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xcU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4609[0xcU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xcU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0xdU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xdU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xdU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4603[0xdU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xdU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xdU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4609[0xdU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xdU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0xeU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xeU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xeU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4603[0xeU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xeU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xeU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4609[0xeU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xeU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0xfU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xfU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xfU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4603[0xfU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xfU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xfU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4609[0xfU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xfU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x10U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x10U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x10U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4603[0x10U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x10U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x10U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4609[0x10U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x10U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x11U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x11U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x11U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4603[0x11U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x11U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x11U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4609[0x11U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x11U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x12U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x12U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x12U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4603[0x12U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x12U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x12U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4609[0x12U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x12U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x13U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x13U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x13U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4603[0x13U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x13U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x13U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4609[0x13U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x13U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x14U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x14U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x14U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4603[0x14U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x14U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x14U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4609[0x14U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x14U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x15U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x15U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x15U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4603[0x15U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x15U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x15U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4609[0x15U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x15U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x16U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x16U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x16U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4603[0x16U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x16U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x16U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4609[0x16U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x16U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x17U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x17U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x17U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4603[0x17U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x17U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x17U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4609[0x17U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x17U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x18U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x18U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x18U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4603[0x18U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x18U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x18U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4609[0x18U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x18U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x19U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x19U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x19U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4603[0x19U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x19U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x19U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4609[0x19U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x19U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x1aU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x1aU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1aU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4603[0x1aU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1aU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1aU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4609[0x1aU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1aU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x1bU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x1bU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1bU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4603[0x1bU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1bU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1bU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4609[0x1bU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1bU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x1cU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x1cU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1cU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4603[0x1cU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1cU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1cU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4609[0x1cU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1cU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x1dU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x1dU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1dU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4603[0x1dU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1dU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1dU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4609[0x1dU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1dU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x1eU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x1eU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1eU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4603[0x1eU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1eU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1eU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4609[0x1eU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1eU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x1fU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x1fU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1fU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4603[0x1fU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1fU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1fU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4609[0x1fU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1fU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT___T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT___T 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_enq_ready) 
            | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__last))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor_io_in_a_ready 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_enq_ready) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__last))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_in_a_ready 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_enq_ready) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__last))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT___GEN_0 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT___T) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_repeat)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT___GEN_4 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT___T) 
            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__last))) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__bundleOut_0_a_bits_data_rdata_written_once));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT___GEN_6 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT___T) 
            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__last))) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__bundleOut_0_a_bits_mask_rdata_written_once));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_T_2 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source))
                : 0ULL)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                                & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                ? (1ULL << (0x3fU & 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                             >> 1U)))
                                : 0ULL)));
    VL_EXTEND_WI(515,4, __Vtemp4616, (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                                       ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(515,515,9, __Vtemp4617, __Vtemp4616, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                   << 2U));
    VL_SHIFTL_WWI(527,527,9, __Vtemp4623, VysyxSoCFull__ConstPool__CONST_ea2bd2fa_0, 
                  (0xfcU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                            << 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4617[0U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[0U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4623[0U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4617[1U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[1U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[1U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4623[1U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[1U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_opcodes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4617[2U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[2U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[2U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4623[2U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[2U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_opcodes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4617[3U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[3U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[3U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4623[3U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[3U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_opcodes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4617[4U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[4U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[4U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4623[4U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[4U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_opcodes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4617[5U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[5U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[5U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4623[5U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[5U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_opcodes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4617[6U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[6U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[6U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4623[6U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[6U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_opcodes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4617[7U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[7U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[7U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4623[7U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[7U]))));
    VL_EXTEND_WI(516,5, __Vtemp4630, (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                                       ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(516,516,9, __Vtemp4631, __Vtemp4630, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                   << 3U));
    VL_SHIFTL_WWI(527,527,9, __Vtemp4637, VysyxSoCFull__ConstPool__CONST_f974e5b2_0, 
                  (0x1f8U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                             << 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4631[0U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4637[0U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4631[1U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[1U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[1U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4637[1U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[1U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4631[2U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[2U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[2U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4637[2U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[2U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4631[3U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[3U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[3U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4637[3U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[3U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4631[4U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[4U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[4U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4637[4U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[4U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4631[5U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[5U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[5U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4637[5U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[5U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4631[6U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[6U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[6U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4637[6U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[6U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4631[7U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[7U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[7U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4637[7U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[7U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[8U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[8U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4631[8U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[8U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[8U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4637[8U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[8U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[9U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[9U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[9U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4631[9U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[9U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[9U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4637[9U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[9U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[0xaU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[0xaU] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0xaU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4631[0xaU] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0xaU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0xaU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4637[0xaU] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0xaU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[0xbU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[0xbU] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0xbU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4631[0xbU] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0xbU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0xbU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4637[0xbU] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0xbU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[0xcU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[0xcU] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0xcU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4631[0xcU] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0xcU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0xcU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4637[0xcU] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0xcU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[0xdU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[0xdU] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0xdU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4631[0xdU] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0xdU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0xdU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4637[0xdU] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0xdU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[0xeU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[0xeU] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0xeU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4631[0xeU] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0xeU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0xeU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4637[0xeU] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0xeU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[0xfU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[0xfU] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0xfU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4631[0xfU] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0xfU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0xfU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4637[0xfU] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0xfU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor_io_in_a_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT___T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_in_a_ready) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__stall)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT___bundleOut_0_a_valid_T_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT___bundleIn_0_a_ready_T_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__stall)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_in_a_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_T_2 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source))
                : 0ULL)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                                & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))
                                : 0ULL)));
    VL_EXTEND_WI(515,4, __Vtemp4644, (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                                       ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(515,515,9, __Vtemp4645, __Vtemp4644, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                   << 2U));
    VL_SHIFTL_WWI(527,527,9, __Vtemp4651, VysyxSoCFull__ConstPool__CONST_ea2bd2fa_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4645[0U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[0U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4651[0U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4645[1U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[1U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[1U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4651[1U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[1U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_opcodes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4645[2U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[2U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[2U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4651[2U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[2U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_opcodes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4645[3U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[3U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[3U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4651[3U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[3U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_opcodes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4645[4U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[4U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[4U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4651[4U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[4U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_opcodes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4645[5U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[5U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[5U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4651[5U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[5U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_opcodes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4645[6U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[6U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[6U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4651[6U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[6U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_opcodes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4645[7U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[7U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[7U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4651[7U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[7U]))));
    VL_EXTEND_WI(516,5, __Vtemp4658, (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                                       ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(516,516,9, __Vtemp4659, __Vtemp4658, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                   << 3U));
    VL_SHIFTL_WWI(527,527,9, __Vtemp4665, VysyxSoCFull__ConstPool__CONST_f974e5b2_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                   << 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4659[0U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4665[0U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4659[1U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[1U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[1U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4665[1U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[1U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4659[2U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[2U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[2U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4665[2U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[2U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4659[3U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[3U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[3U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4665[3U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[3U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4659[4U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[4U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[4U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4665[4U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[4U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4659[5U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[5U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[5U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4665[5U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[5U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4659[6U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[6U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[6U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4665[6U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[6U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4659[7U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[7U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[7U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4665[7U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[7U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[8U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[8U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4659[8U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[8U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[8U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4665[8U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[8U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[9U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[9U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[9U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4659[9U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[9U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[9U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4665[9U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[9U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[0xaU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[0xaU] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0xaU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4659[0xaU] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0xaU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0xaU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4665[0xaU] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0xaU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[0xbU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[0xbU] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0xbU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4659[0xbU] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0xbU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0xbU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4665[0xbU] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0xbU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[0xcU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[0xcU] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0xcU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4659[0xcU] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0xcU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0xcU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4665[0xcU] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0xcU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[0xdU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[0xdU] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0xdU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4659[0xdU] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0xdU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0xdU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4665[0xdU] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0xdU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[0xeU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[0xeU] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0xeU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4659[0xeU] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0xeU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0xeU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4665[0xeU] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0xeU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[0xfU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[0xfU] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0xfU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4659[0xfU] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0xfU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0xfU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4665[0xfU] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0xfU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__inc 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT___T) 
             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__counter))) 
            << 4U) | (((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT___T_3) 
                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__counter_3))) 
                        & (IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))))) 
                       << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT___T_2) 
                                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__counter_2))) 
                                  & (IData)((6U == 
                                             (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_c_bits_opcode))))) 
                                 << 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT___bundleIn_0_a_ready_T_1) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_in_1_a_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT___bundleIn_0_a_ready_T_1) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__next_flight 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__flight) 
                     + (7U & ((3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__inc)) 
                                     + (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__inc) 
                                              >> 1U)))) 
                              + (3U & ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__inc) 
                                              >> 2U)) 
                                       + ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__inc) 
                                                 >> 3U)) 
                                          + (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__inc) 
                                                   >> 4U)))))))) 
                    - (7U & ((3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__dec)) 
                                    + (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__dec) 
                                             >> 1U)))) 
                             + (3U & ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__dec) 
                                             >> 2U)) 
                                      + ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__dec) 
                                                >> 3U)) 
                                         + (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__dec) 
                                                  >> 4U)))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
            ? ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__state)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_in_1_a_ready))
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_in_1_a_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_T_2 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source))
                : 0ULL)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                                & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))
                                : 0ULL)));
    VL_EXTEND_WI(515,4, __Vtemp4672, (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                                       ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(515,515,9, __Vtemp4673, __Vtemp4672, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                   << 2U));
    VL_SHIFTL_WWI(527,527,9, __Vtemp4679, VysyxSoCFull__ConstPool__CONST_ea2bd2fa_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_opcodes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4673[0U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[0U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4679[0U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_opcodes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4673[1U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[1U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[1U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4679[1U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[1U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_opcodes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4673[2U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[2U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[2U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4679[2U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[2U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_opcodes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4673[3U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[3U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[3U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4679[3U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[3U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_opcodes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4673[4U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[4U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[4U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4679[4U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[4U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_opcodes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4673[5U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[5U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[5U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4679[5U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[5U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_opcodes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4673[6U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[6U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[6U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4679[6U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[6U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_opcodes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4673[7U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[7U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[7U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4679[7U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[7U]))));
    VL_EXTEND_WI(516,5, __Vtemp4686, (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                                       ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(516,516,9, __Vtemp4687, __Vtemp4686, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                   << 3U));
    VL_SHIFTL_WWI(527,527,9, __Vtemp4693, VysyxSoCFull__ConstPool__CONST_f974e5b2_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                   << 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4687[0U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4693[0U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4687[1U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[1U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[1U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4693[1U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[1U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4687[2U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[2U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[2U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4693[2U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[2U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4687[3U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[3U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[3U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4693[3U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[3U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4687[4U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[4U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[4U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4693[4U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[4U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4687[5U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[5U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[5U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4693[5U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[5U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4687[6U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[6U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[6U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4693[6U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[6U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4687[7U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[7U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[7U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4693[7U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[7U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[8U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[8U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[8U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4687[8U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[8U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[8U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4693[8U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[8U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[9U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[9U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[9U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4687[9U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[9U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[9U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4693[9U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[9U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[0xaU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[0xaU] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0xaU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4687[0xaU] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0xaU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0xaU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4693[0xaU] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0xaU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[0xbU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[0xbU] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0xbU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4687[0xbU] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0xbU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0xbU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4693[0xbU] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0xbU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[0xcU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[0xcU] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0xcU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4687[0xcU] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0xcU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0xcU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4693[0xcU] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0xcU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[0xdU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[0xdU] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0xdU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4687[0xdU] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0xdU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0xdU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4693[0xdU] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0xdU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[0xeU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[0xeU] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0xeU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4687[0xeU] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0xeU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0xeU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4693[0xeU] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0xeU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[0xfU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[0xfU] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0xfU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4687[0xfU] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0xfU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0xfU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4693[0xfU] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0xfU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT___T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_ready 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready) 
                  & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__stall))) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__xmit))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0_io_alloc_valid 
        = (0xffU & ((((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_4)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__a_first)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__xmit)) 
                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.io_deq_valid)) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1_io_alloc_valid 
        = (0x7fU & (((((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_4)) 
                        >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__a_first)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__xmit)) 
                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.io_deq_valid)) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2_io_alloc_valid 
        = (0x3fU & (((((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_4)) 
                        >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__a_first)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__xmit)) 
                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.io_deq_valid)) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3_io_alloc_valid 
        = (0x1fU & (((((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_4)) 
                        >> 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__a_first)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__xmit)) 
                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.io_deq_valid)) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4_io_alloc_valid 
        = (0xfU & (((((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_4)) 
                       >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__a_first)) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__xmit)) 
                    & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.io_deq_valid)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5_io_alloc_valid 
        = (7U & (((((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_4)) 
                     >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__a_first)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__xmit)) 
                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.io_deq_valid)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6_io_alloc_valid 
        = (3U & (((((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_4)) 
                     >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__a_first)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__xmit)) 
                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.io_deq_valid)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7_io_alloc_valid 
        = (1U & (((((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_4)) 
                     >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__a_first)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__xmit)) 
                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.io_deq_valid)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT___GEN_10 
        = (0x7ffffffffffffffULL & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT___T)
                                        ? ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__state))
                                            ? (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))
                                            : (((QData)((IData)(
                                                                vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[2U])) 
                                                << 0x3cU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[2U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[1U])) 
                                                     >> 4U))))
                                        : (QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__shift)))
                                    : (QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__shift))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___q_last_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_ready) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___T 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0_io_alloc_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___T 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1_io_alloc_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___T 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2_io_alloc_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___T 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3_io_alloc_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___T 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4_io_alloc_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___T 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5_io_alloc_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___T 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6_io_alloc_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___T 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7_io_alloc_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_T_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free) 
            & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___T)
                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free_sel)
                   : 0U))) | ((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD_io_a_tlSource_valid) 
                                        & ((IData)(1U) 
                                           << (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                >> 3U)))))
                               ? (0xffU & ((IData)(1U) 
                                           << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))))
                               : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_T_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free) 
            & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___T)
                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free_sel)
                   : 0U))) | ((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD_io_a_tlSource_valid) 
                                        & (((IData)(1U) 
                                            << (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                   >> 3U))) 
                                           >> 1U)))
                               ? (0xffU & ((IData)(1U) 
                                           << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))))
                               : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_T_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free) 
            & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___T)
                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free_sel)
                   : 0U))) | ((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD_io_a_tlSource_valid) 
                                        & (((IData)(1U) 
                                            << (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                   >> 3U))) 
                                           >> 2U)))
                               ? (0xffU & ((IData)(1U) 
                                           << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))))
                               : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_T_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free) 
            & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___T)
                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free_sel)
                   : 0U))) | ((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD_io_a_tlSource_valid) 
                                        & (((IData)(1U) 
                                            << (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                   >> 3U))) 
                                           >> 3U)))
                               ? (0xffU & ((IData)(1U) 
                                           << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))))
                               : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_T_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free) 
            & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___T)
                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free_sel)
                   : 0U))) | ((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD_io_a_tlSource_valid) 
                                       & (((IData)(1U) 
                                           << (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                >> 3U))) 
                                          >> 4U))) ? 
                              (0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))))
                               : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_T_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free) 
            & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___T)
                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free_sel)
                   : 0U))) | ((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD_io_a_tlSource_valid) 
                                     & (((IData)(1U) 
                                         << (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                   >> 3U))) 
                                        >> 5U))) ? 
                              (0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))))
                               : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_T_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free) 
            & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___T)
                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free_sel)
                   : 0U))) | ((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD_io_a_tlSource_valid) 
                                     & (((IData)(1U) 
                                         << (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                   >> 3U))) 
                                        >> 6U))) ? 
                              (0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))))
                               : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_T_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free) 
            & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___T)
                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free_sel)
                   : 0U))) | ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD_io_a_tlSource_valid) 
                                     & (((IData)(1U) 
                                         << (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                   >> 3U))) 
                                        >> 7U))) ? 
                              (0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))))
                               : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD_io_q_bits_data 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state))
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full)
                ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_data
               [0U] : vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_in_d_bits_data)
            : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state))
                ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full) 
                   & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_sink
                   [0U]) : (3U | ((((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_opcode))
                                     ? (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___T) 
                                         & ((7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam_io_key)))
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam_io_alloc_bits)
                                         : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data
                                        [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                     : ((7U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                   >> 3U)))
                                         ? (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___T) 
                                             & ((7U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7_io_key)))
                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7_io_alloc_bits)
                                             : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data
                                            [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                         : ((6U == 
                                             (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                               >> 3U)))
                                             ? (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___T) 
                                                 & ((7U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6_io_key)))
                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6_io_alloc_bits)
                                                 : 
                                                vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data
                                                [(7U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                             : ((5U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                     >> 3U)))
                                                 ? 
                                                (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___T) 
                                                  & ((7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5_io_key)))
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5_io_alloc_bits)
                                                  : 
                                                 vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data
                                                 [(7U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                 : 
                                                ((4U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                      >> 3U)))
                                                  ? 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___T) 
                                                   & ((7U 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4_io_key)))
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4_io_alloc_bits)
                                                   : 
                                                  vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data
                                                  [
                                                  (7U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                       >> 3U)))
                                                   ? 
                                                  (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___T) 
                                                    & ((7U 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3_io_key)))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3_io_alloc_bits)
                                                    : 
                                                   vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data
                                                   [
                                                   (7U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                        >> 3U)))
                                                    ? 
                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___T) 
                                                     & ((7U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2_io_key)))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2_io_alloc_bits)
                                                     : 
                                                    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data
                                                    [
                                                    (7U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                         >> 3U)))
                                                     ? 
                                                    (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___T) 
                                                      & ((7U 
                                                          & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1_io_key)))
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1_io_alloc_bits)
                                                      : 
                                                     vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data
                                                     [
                                                     (7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                     : 
                                                    (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___T) 
                                                      & ((7U 
                                                          & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0_io_key)))
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0_io_alloc_bits)
                                                      : 
                                                     vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data
                                                     [
                                                     (7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))]))))))))) 
                                   << 0x10U) | ((0xe000U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                    << 0xaU)) 
                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_size) 
                                                    << 9U) 
                                                   | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full)
                                                         ? 
                                                        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_denied
                                                        [0U]
                                                         : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_denied)) 
                                                       << 8U) 
                                                      | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full)
                                                            ? 
                                                           vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_param
                                                           [0U]
                                                            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                                                          << 6U) 
                                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_opcode) 
                                                            << 3U)))))))));
}

VL_INLINE_OPT void VysyxSoCFull___024root___multiclk__TOP__54(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___multiclk__TOP__54\n"); );
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

VL_INLINE_OPT void VysyxSoCFull___024root___multiclk__TOP__55(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___multiclk__TOP__55\n"); );
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

VL_INLINE_OPT void VysyxSoCFull___024root___multiclk__TOP__56(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___multiclk__TOP__56\n"); );
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

VL_INLINE_OPT void VysyxSoCFull___024root___sequent__TOP__57(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___sequent__TOP__57\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_ 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__io_c2b_rst_reg__DOT__reg_;
}

VL_INLINE_OPT void VysyxSoCFull___024root___combo__TOP__58(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___combo__TOP__58\n"); );
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

void VysyxSoCFull_AXI4UserYanker_1___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__1(VysyxSoCFull_AXI4UserYanker_1* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__12(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__13(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__14(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__15(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__16(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__17(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__18(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__19(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__20(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__21(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__22(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__23(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__24(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull_TLToAXI4___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__3(VysyxSoCFull_TLToAXI4* vlSelf);
void VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__1(VysyxSoCFull_RX* vlSelf);
void VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__2(VysyxSoCFull_RX* vlSelf);
void VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__1(VysyxSoCFull_TX* vlSelf);
void VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__2(VysyxSoCFull_TX* vlSelf);
void VysyxSoCFull_TLXbar_1___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__3(VysyxSoCFull_TLXbar_1* vlSelf);
void VysyxSoCFull_TLXbar_1___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__4(VysyxSoCFull_TLXbar_1* vlSelf);
void VysyxSoCFull_TLError___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__3(VysyxSoCFull_TLError* vlSelf);
void VysyxSoCFull_TLError___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__ferr__4(VysyxSoCFull_TLError* vlSelf);
void VysyxSoCFull_TLFIFOFixer___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__3(VysyxSoCFull_TLFIFOFixer* vlSelf);
void VysyxSoCFull_TLFIFOFixer___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__4(VysyxSoCFull_TLFIFOFixer* vlSelf);
void VysyxSoCFull_TLWidthWidget___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__3(VysyxSoCFull_TLWidthWidget* vlSelf);
void VysyxSoCFull_TLWidthWidget___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__widget__4(VysyxSoCFull_TLWidthWidget* vlSelf);
void VysyxSoCFull_TLToAXI4___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__4(VysyxSoCFull_TLToAXI4* vlSelf);
void VysyxSoCFull_TLBusBypass___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__3(VysyxSoCFull_TLBusBypass* vlSelf);
void VysyxSoCFull_TLBusBypass___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__4(VysyxSoCFull_TLBusBypass* vlSelf);
void VysyxSoCFull_TLMonitor_7___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__3(VysyxSoCFull_TLMonitor_7* vlSelf);
void VysyxSoCFull_TLMonitor_7___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__4(VysyxSoCFull_TLMonitor_7* vlSelf);
void VysyxSoCFull_AXI4UserYanker_1___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank__2(VysyxSoCFull_AXI4UserYanker_1* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__1(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__2(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__3(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__4(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__5(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__6(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__1(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__2(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__3(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__4(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__5(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__6(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__7(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__8(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__9(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__10(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__11(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__12(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__13(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__14(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__15(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__16(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__7(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__8(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__9(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__10(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__25(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__3(VysyxSoCFull_RX* vlSelf);
void VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__4(VysyxSoCFull_RX* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source__11(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source__12(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource__13(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource__14(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source__15(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source__16(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source__17(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source__18(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__19(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__20(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_TLWidthWidget___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__5(VysyxSoCFull_TLWidthWidget* vlSelf);
void VysyxSoCFull_TLWidthWidget___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__widget__6(VysyxSoCFull_TLWidthWidget* vlSelf);
void VysyxSoCFull_TLToAXI4___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__5(VysyxSoCFull_TLToAXI4* vlSelf);
void VysyxSoCFull_AXI4UserYanker_1___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank__3(VysyxSoCFull_AXI4UserYanker_1* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__17(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__18(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__19(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__20(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__21(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__22(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__23(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__24(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__25(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__26(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__27(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__28(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__29(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__30(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__31(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__32(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_TLMonitor_7___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__5(VysyxSoCFull_TLMonitor_7* vlSelf);
void VysyxSoCFull_TLMonitor_7___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__6(VysyxSoCFull_TLMonitor_7* vlSelf);
void VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__3(VysyxSoCFull_TX* vlSelf);
void VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__4(VysyxSoCFull_TX* vlSelf);
void VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__5(VysyxSoCFull_RX* vlSelf);
void VysyxSoCFull_TLXbar_1___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__5(VysyxSoCFull_TLXbar_1* vlSelf);
void VysyxSoCFull_TLFIFOFixer___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__5(VysyxSoCFull_TLFIFOFixer* vlSelf);
void VysyxSoCFull_TLBusBypass___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__5(VysyxSoCFull_TLBusBypass* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__26(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull_TLError___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__5(VysyxSoCFull_TLError* vlSelf);
void VysyxSoCFull_TLXbar_1___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__6(VysyxSoCFull_TLXbar_1* vlSelf);
void VysyxSoCFull_TLFIFOFixer___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__6(VysyxSoCFull_TLFIFOFixer* vlSelf);
void VysyxSoCFull_TLBusBypass___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__6(VysyxSoCFull_TLBusBypass* vlSelf);
void VysyxSoCFull_TLError___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__ferr__6(VysyxSoCFull_TLError* vlSelf);
void VysyxSoCFull_TLToAXI4___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__6(VysyxSoCFull_TLToAXI4* vlSelf);
void VysyxSoCFull_TLXbar_1___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__7(VysyxSoCFull_TLXbar_1* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__33(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__34(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__35(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__36(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__37(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__38(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__39(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__40(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__41(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__42(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__43(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__44(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__45(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__46(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__47(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__48(VysyxSoCFull_Queue_38* vlSelf);
void VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__5(VysyxSoCFull_TX* vlSelf);
void VysyxSoCFull_TLXbar_1___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__8(VysyxSoCFull_TLXbar_1* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__27(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull_AXI4UserYanker_1___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank__4(VysyxSoCFull_AXI4UserYanker_1* vlSelf);
void VysyxSoCFull_TLError___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__7(VysyxSoCFull_TLError* vlSelf);
void VysyxSoCFull_TLError___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__ferr__8(VysyxSoCFull_TLError* vlSelf);
void VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__8(VysyxSoCFull_TX* vlSelf);
void VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__9(VysyxSoCFull_TX* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__28(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__21(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__22(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__23(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__24(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__25(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__26(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__27(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__28(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__29(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__30(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__29(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__32(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__31(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource__32(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source__33(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source__34(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source__35(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__9(VysyxSoCFull_RX* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__33(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__36(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource__37(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source__38(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source__39(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source__40(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__10(VysyxSoCFull_RX* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__34(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__35(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__45(VysyxSoCFull___024root* vlSelf);
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
void VysyxSoCFull___024root___multiclk__TOP__46(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull_TLBusBypass___multiclk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__15(VysyxSoCFull_TLBusBypass* vlSelf);
void VysyxSoCFull_TLToAXI4___multiclk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__12(VysyxSoCFull_TLToAXI4* vlSelf);
void VysyxSoCFull_TLMonitor_7___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__9(VysyxSoCFull_TLMonitor_7* vlSelf);
void VysyxSoCFull___024root___multiclk__TOP__47(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__15(VysyxSoCFull_TLXbar_1* vlSelf);
void VysyxSoCFull_AXI4UserYanker_1___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__7(VysyxSoCFull_AXI4UserYanker_1* vlSelf);
void VysyxSoCFull_TX___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__14(VysyxSoCFull_TX* vlSelf);
void VysyxSoCFull_AsyncQueueSink___multiclk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__55(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_TLWidthWidget___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__9(VysyxSoCFull_TLWidthWidget* vlSelf);
void VysyxSoCFull_TLFIFOFixer___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__11(VysyxSoCFull_TLFIFOFixer* vlSelf);
void VysyxSoCFull___024root___multiclk__TOP__48(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull_TLWidthWidget___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__11(VysyxSoCFull_TLWidthWidget* vlSelf);
void VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__18(VysyxSoCFull_TLXbar_1* vlSelf);
void VysyxSoCFull_TLFIFOFixer___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__13(VysyxSoCFull_TLFIFOFixer* vlSelf);
void VysyxSoCFull_TLError___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__16(VysyxSoCFull_TLError* vlSelf);
void VysyxSoCFull_TLBusBypass___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__14(VysyxSoCFull_TLBusBypass* vlSelf);
void VysyxSoCFull___024root___multiclk__TOP__49(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull_TLMonitor_7___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__12(VysyxSoCFull_TLMonitor_7* vlSelf);
void VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__20(VysyxSoCFull_TLXbar_1* vlSelf);
void VysyxSoCFull_AsyncQueueSink___multiclk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__56(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_TLFIFOFixer___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__15(VysyxSoCFull_TLFIFOFixer* vlSelf);
void VysyxSoCFull_TLWidthWidget___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__13(VysyxSoCFull_TLWidthWidget* vlSelf);
void VysyxSoCFull___024root___multiclk__TOP__50(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__51(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__57(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__58(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__17(VysyxSoCFull_TX* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource__52(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source__53(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source__54(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source__55(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__15(VysyxSoCFull_RX* vlSelf);
void VysyxSoCFull___024root___sequent__TOP__51(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___multiclk__TOP__52(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull_TLBusBypass___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__17(VysyxSoCFull_TLBusBypass* vlSelf);
void VysyxSoCFull_TLToAXI4___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__13(VysyxSoCFull_TLToAXI4* vlSelf);
void VysyxSoCFull_TLMonitor_7___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__10(VysyxSoCFull_TLMonitor_7* vlSelf);
void VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__16(VysyxSoCFull_TLXbar_1* vlSelf);
void VysyxSoCFull_AXI4UserYanker_1___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank__10(VysyxSoCFull_AXI4UserYanker_1* vlSelf);
void VysyxSoCFull_TX___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__15(VysyxSoCFull_TX* vlSelf);
void VysyxSoCFull_AsyncQueueSink___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__42(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_TLWidthWidget___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__widget__17(VysyxSoCFull_TLWidthWidget* vlSelf);
void VysyxSoCFull_TLFIFOFixer___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__19(VysyxSoCFull_TLFIFOFixer* vlSelf);
void VysyxSoCFull_TLToAXI4___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__11(VysyxSoCFull_TLToAXI4* vlSelf);
void VysyxSoCFull_TLWidthWidget___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__widget__18(VysyxSoCFull_TLWidthWidget* vlSelf);
void VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__17(VysyxSoCFull_TLXbar_1* vlSelf);
void VysyxSoCFull_TLFIFOFixer___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__20(VysyxSoCFull_TLFIFOFixer* vlSelf);
void VysyxSoCFull_TLError___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__ferr__15(VysyxSoCFull_TLError* vlSelf);
void VysyxSoCFull_TLBusBypass___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__13(VysyxSoCFull_TLBusBypass* vlSelf);
void VysyxSoCFull_TLMonitor_7___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__11(VysyxSoCFull_TLMonitor_7* vlSelf);
void VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__19(VysyxSoCFull_TLXbar_1* vlSelf);
void VysyxSoCFull_AsyncQueueSink___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__43(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_TLFIFOFixer___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__14(VysyxSoCFull_TLFIFOFixer* vlSelf);
void VysyxSoCFull_TLWidthWidget___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__widget__12(VysyxSoCFull_TLWidthWidget* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__56(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource__57(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source__58(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source__59(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source__60(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__16(VysyxSoCFull_RX* vlSelf);
void VysyxSoCFull_AsyncQueueSource___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__61(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSource___combo__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__66(VysyxSoCFull_AsyncQueueSource* vlSelf);
void VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__69(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_AsyncQueueSink___multiclk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__70(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__20(VysyxSoCFull_TX* vlSelf);
void VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__21(VysyxSoCFull_TX* vlSelf);
void VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__23(VysyxSoCFull_TX* vlSelf);
void VysyxSoCFull_AsyncQueueSink___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__81(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_TX___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__24(VysyxSoCFull_TX* vlSelf);
void VysyxSoCFull_TX___combo__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__25(VysyxSoCFull_TX* vlSelf);
void VysyxSoCFull_AsyncQueueSink___combo__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__86(VysyxSoCFull_AsyncQueueSink* vlSelf);
void VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__17(VysyxSoCFull_RX* vlSelf);
void VysyxSoCFull_RX___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__19(VysyxSoCFull_RX* vlSelf);
void VysyxSoCFull_RX___combo__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__20(VysyxSoCFull_RX* vlSelf);

void VysyxSoCFull___024root___eval(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VysyxSoCFull_AXI4UserYanker_1___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__1((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1));
        vlSelf->__Vm_traceActivity[1U] = 1U;
        VysyxSoCFull___024root___sequent__TOP__12(vlSelf);
        VysyxSoCFull___024root___sequent__TOP__13(vlSelf);
        VysyxSoCFull___024root___sequent__TOP__14(vlSelf);
        VysyxSoCFull___024root___sequent__TOP__15(vlSelf);
        VysyxSoCFull___024root___sequent__TOP__16(vlSelf);
        VysyxSoCFull___024root___sequent__TOP__17(vlSelf);
        VysyxSoCFull___024root___sequent__TOP__18(vlSelf);
        VysyxSoCFull___024root___sequent__TOP__19(vlSelf);
        VysyxSoCFull___024root___sequent__TOP__20(vlSelf);
        VysyxSoCFull___024root___sequent__TOP__21(vlSelf);
        VysyxSoCFull___024root___sequent__TOP__22(vlSelf);
        VysyxSoCFull___024root___sequent__TOP__23(vlSelf);
        VysyxSoCFull___024root___sequent__TOP__24(vlSelf);
        VysyxSoCFull_TLToAXI4___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__3((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4));
        VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__1((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx));
        VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__2((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx));
        VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__1((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx));
        VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__2((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx));
        VysyxSoCFull_TLXbar_1___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__3((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1));
        VysyxSoCFull_TLXbar_1___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__4((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1));
        VysyxSoCFull_TLError___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__3((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr));
        VysyxSoCFull_TLError___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__ferr__4((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr));
        VysyxSoCFull_TLFIFOFixer___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__3((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer));
        VysyxSoCFull_TLFIFOFixer___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__4((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer));
        VysyxSoCFull_TLWidthWidget___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__3((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget));
        VysyxSoCFull_TLWidthWidget___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__widget__4((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget));
        VysyxSoCFull_TLToAXI4___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__4((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4));
        VysyxSoCFull_TLBusBypass___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__3((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass));
        VysyxSoCFull_TLBusBypass___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__4((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass));
        VysyxSoCFull_TLMonitor_7___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__3((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor));
        VysyxSoCFull_TLMonitor_7___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__4((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor));
        VysyxSoCFull_AXI4UserYanker_1___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank__2((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__1((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__2((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__3((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__4((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__5((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__6((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__1((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__2((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__3((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__4((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__5((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__6((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__7((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__8((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__9((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__10((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__11((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__12((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__13((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__14((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__15((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__16((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__7((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__8((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__9((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__10((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink));
        VysyxSoCFull___024root___sequent__TOP__25(vlSelf);
        VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__3((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx));
        VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__4((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx));
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source__11((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source));
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source__12((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source));
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource__13((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource));
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource__14((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource));
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source__15((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source));
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source__16((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source));
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source__17((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source));
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source__18((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source));
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__19((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source));
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__20((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source));
        VysyxSoCFull_TLWidthWidget___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__5((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget));
        VysyxSoCFull_TLWidthWidget___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__widget__6((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget));
        VysyxSoCFull_TLToAXI4___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__5((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4));
        VysyxSoCFull_AXI4UserYanker_1___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank__3((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__17((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__18((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__19((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__20((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__21((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__22((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__23((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__24((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__25((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__26((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__27((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__28((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__29((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__30((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__31((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__32((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15));
        VysyxSoCFull_TLMonitor_7___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__5((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor));
        VysyxSoCFull_TLMonitor_7___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__6((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor));
        VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__3((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx));
        VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__4((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx));
        VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__5((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx));
        VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__5((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx));
        VysyxSoCFull_TLXbar_1___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__5((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1));
        VysyxSoCFull_TLFIFOFixer___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__5((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer));
        VysyxSoCFull_TLBusBypass___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__5((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass));
        VysyxSoCFull___024root___sequent__TOP__26(vlSelf);
        VysyxSoCFull_TLError___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__5((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr));
        VysyxSoCFull_TLXbar_1___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__6((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1));
        VysyxSoCFull_TLFIFOFixer___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__6((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer));
        VysyxSoCFull_TLBusBypass___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__6((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass));
        VysyxSoCFull_TLError___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__ferr__6((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr));
        VysyxSoCFull_TLToAXI4___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__6((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4));
        VysyxSoCFull_TLXbar_1___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__7((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__33((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__34((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__35((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__36((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__37((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__38((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__39((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__40((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__41((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__42((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__43((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__44((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__45((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__46((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__47((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14));
        VysyxSoCFull_Queue_38___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__48((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15));
        VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__5((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx));
        VysyxSoCFull_TLXbar_1___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__8((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1));
        VysyxSoCFull___024root___sequent__TOP__27(vlSelf);
        VysyxSoCFull_AXI4UserYanker_1___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank__4((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank));
        VysyxSoCFull_TLError___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__7((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr));
        VysyxSoCFull_TLError___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__ferr__8((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr));
    }
    if ((((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__8((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx));
        vlSelf->__Vm_traceActivity[2U] = 1U;
        VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__9((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx));
        VysyxSoCFull___024root___sequent__TOP__28(vlSelf);
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__21((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__22((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__23((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__24((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__25((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__26((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__27((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__28((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__29((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__30((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink));
        VysyxSoCFull___024root___sequent__TOP__29(vlSelf);
    }
    if ((((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))) 
         | ((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_))))) {
        VysyxSoCFull___024root___sequent__TOP__32(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__31((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source));
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource__32((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource));
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source__33((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source));
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source__34((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source));
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source__35((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source));
        VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__9((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx));
    }
    if ((((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))) 
         | ((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_))))) {
        VysyxSoCFull___024root___sequent__TOP__33(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__36((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source));
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource__37((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource));
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source__38((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source));
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source__39((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source));
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source__40((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source));
        VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__10((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_spi_clk) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_spi_clk)))) {
        VysyxSoCFull___024root___sequent__TOP__34(vlSelf);
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_spi_clk) 
          & (~ (IData)(vlSelf->__Vclklast__TOP__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_spi_clk))) 
         | ((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__spiFlash__DOT__reset) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__spiFlash__DOT__reset))))) {
        VysyxSoCFull___024root___sequent__TOP__35(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VysyxSoCFull___024root___sequent__TOP__45(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink____PVT__sink_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink____PVT__sink_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__45((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink));
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink____PVT__sink_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink____PVT__sink_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__46((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink));
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink____PVT__sink_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink____PVT__sink_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__47((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink));
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink____PVT__sink_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink____PVT__sink_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__48((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink));
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink____PVT__sink_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink____PVT__sink_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__49((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink));
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink____PVT__sink_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink____PVT__sink_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__50((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink));
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink____PVT__sink_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink____PVT__sink_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__51((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink));
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink____PVT__sink_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink____PVT__sink_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__52((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink));
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink____PVT__sink_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink____PVT__sink_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__53((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink));
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink____PVT__sink_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink____PVT__sink_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__54((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink));
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
    }
    if (((((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))) 
          | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset)))) 
         | ((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_))))) {
        VysyxSoCFull___024root___multiclk__TOP__46(vlSelf);
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        VysyxSoCFull_TLBusBypass___multiclk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__15((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass));
        VysyxSoCFull_TLToAXI4___multiclk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__12((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4));
        VysyxSoCFull_TLMonitor_7___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__9((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor));
        VysyxSoCFull___024root___multiclk__TOP__47(vlSelf);
        VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__15((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1));
        VysyxSoCFull_AXI4UserYanker_1___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__7((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1));
        VysyxSoCFull_TX___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__14((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx));
        VysyxSoCFull_AsyncQueueSink___multiclk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__55((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink));
        VysyxSoCFull_TLWidthWidget___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__9((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget));
        VysyxSoCFull_TLFIFOFixer___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__11((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer));
        VysyxSoCFull___024root___multiclk__TOP__48(vlSelf);
        VysyxSoCFull_TLWidthWidget___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__11((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget));
        VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__18((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1));
        VysyxSoCFull_TLFIFOFixer___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__13((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer));
        VysyxSoCFull_TLError___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__16((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr));
        VysyxSoCFull_TLBusBypass___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__14((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass));
        VysyxSoCFull___024root___multiclk__TOP__49(vlSelf);
        VysyxSoCFull_TLMonitor_7___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__12((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor));
        VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__20((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1));
        VysyxSoCFull_AsyncQueueSink___multiclk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__56((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink));
        VysyxSoCFull_TLFIFOFixer___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__15((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer));
        VysyxSoCFull_TLWidthWidget___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__13((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget));
        VysyxSoCFull___024root___multiclk__TOP__50(vlSelf);
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source____PVT__source_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source____PVT__source_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__51((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source));
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
    }
    if ((((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__57((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink));
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__58((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__58((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__57((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__58((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink));
        VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__17((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__57((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__58((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__58((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__57((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink));
        VysyxSoCFull_AsyncQueueSink___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__58((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink));
        VysyxSoCFull_TX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__17((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx));
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource____PVT__source_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource____PVT__source_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource__52((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource));
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source____PVT__source_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source____PVT__source_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source__53((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source));
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source____PVT__source_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source____PVT__source_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source__54((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source));
        vlSelf->__Vm_traceActivity[0x16U] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source____PVT__source_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source____PVT__source_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source__55((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source));
        vlSelf->__Vm_traceActivity[0x17U] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx____PVT__io_txc_source__DOT__source_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx____PVT__io_txc_source__DOT__source_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__15((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx));
        vlSelf->__Vm_traceActivity[0x18U] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx____PVT__io_c2b_rst_reg__DOT__reg_) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx____PVT__io_c2b_rst_reg__DOT__reg_))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull___024root___sequent__TOP__51(vlSelf);
    }
    if (((((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))) 
          | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset)))) 
         | ((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_))))) {
        VysyxSoCFull___024root___multiclk__TOP__52(vlSelf);
        vlSelf->__Vm_traceActivity[0x19U] = 1U;
        VysyxSoCFull_TLBusBypass___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__17((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass));
        VysyxSoCFull_TLToAXI4___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__13((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4));
        VysyxSoCFull_TLMonitor_7___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__10((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor));
        VysyxSoCFull___024root___multiclk__TOP__53(vlSelf);
        VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__16((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1));
        VysyxSoCFull_AXI4UserYanker_1___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank__10((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank));
        VysyxSoCFull_TX___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__15((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx));
        VysyxSoCFull_AsyncQueueSink___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__42((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink));
        VysyxSoCFull_TLWidthWidget___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__widget__17((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget));
        VysyxSoCFull___024root___multiclk__TOP__54(vlSelf);
        VysyxSoCFull_TLFIFOFixer___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__19((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer));
        VysyxSoCFull_TLToAXI4___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__11((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4));
        VysyxSoCFull_TLWidthWidget___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__widget__18((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget));
        VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__17((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1));
        VysyxSoCFull_TLFIFOFixer___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__20((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer));
        VysyxSoCFull_TLError___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__ferr__15((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr));
        VysyxSoCFull_TLBusBypass___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__13((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass));
        VysyxSoCFull___024root___multiclk__TOP__55(vlSelf);
        VysyxSoCFull_TLMonitor_7___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__11((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor));
        VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__19((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1));
        VysyxSoCFull_AsyncQueueSink___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__43((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink));
        VysyxSoCFull_TLFIFOFixer___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__14((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer));
        VysyxSoCFull_TLWidthWidget___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__widget__12((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget));
        VysyxSoCFull___024root___multiclk__TOP__56(vlSelf);
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source____PVT__source_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source____PVT__source_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__56((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source));
        vlSelf->__Vm_traceActivity[0x1aU] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource____PVT__source_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource____PVT__source_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource__57((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource));
        vlSelf->__Vm_traceActivity[0x1bU] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source____PVT__source_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source____PVT__source_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source__58((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source));
        vlSelf->__Vm_traceActivity[0x1cU] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source____PVT__source_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source____PVT__source_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source__59((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source));
        vlSelf->__Vm_traceActivity[0x1dU] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source____PVT__source_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source____PVT__source_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_AsyncQueueSource___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source__60((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source));
        vlSelf->__Vm_traceActivity[0x1eU] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx____PVT__io_txc_source__DOT__source_valid_0_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx____PVT__io_txc_source__DOT__source_valid_0_reset))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull_RX___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__16((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx));
        vlSelf->__Vm_traceActivity[0x1fU] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx____PVT__io_c2b_rst_reg__DOT__reg_) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx____PVT__io_c2b_rst_reg__DOT__reg_))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VysyxSoCFull___024root___sequent__TOP__57(vlSelf);
    }
    VysyxSoCFull___024root___combo__TOP__58(vlSelf);
    vlSelf->__Vm_traceActivity[0x20U] = 1U;
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
        VysyxSoCFull_AsyncQueueSink___multiclk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__70((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink));
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
    VysyxSoCFull_AsyncQueueSink___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__81((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink));
    VysyxSoCFull_TX___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__24((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx));
    VysyxSoCFull_TX___combo__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__25((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx));
    VysyxSoCFull_AsyncQueueSink___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__81((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink));
    VysyxSoCFull_AsyncQueueSink___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__81((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink));
    VysyxSoCFull_AsyncQueueSink___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__81((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink));
    VysyxSoCFull_AsyncQueueSink___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__81((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink));
    VysyxSoCFull_AsyncQueueSink___combo__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__86((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink));
    VysyxSoCFull_AsyncQueueSink___combo__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__86((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink));
    VysyxSoCFull_AsyncQueueSink___combo__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__86((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink));
    VysyxSoCFull_AsyncQueueSink___combo__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__86((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink));
    VysyxSoCFull_AsyncQueueSink___combo__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__86((&vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink));
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
    VL_DEBUG_IF( if(__req && ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_ ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29251: ysyxSoCFull.asic.chipMaster.chiplink.rx_reset_reg.reg_\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_ ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29251: ysyxSoCFull.fpga.chiplink.rx_reset_reg.reg_\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__spiFlash__DOT__reset))) VL_DBG_MSGF("        CHANGE: vsrc//spiFlash.v:18: ysyxSoCFull.spiFlash.reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_txc_source__DOT__source_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:27975: io_txc_source.source_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_txc_source__DOT__source_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:27975: io_txc_source.source_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__sink_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29408: sink_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__sink_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29408: sink_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__sink_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29408: sink_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__sink_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29408: sink_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__sink_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29408: sink_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__sink_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29408: sink_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__sink_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29408: sink_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__sink_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29408: sink_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__sink_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29408: sink_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__sink_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29408: sink_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__rxInc_sink__DOT__sink_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29682: rxInc_sink.sink_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__io_c2b_rst_reg__DOT__reg_ ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__io_c2b_rst_reg__DOT__reg_))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29251: io_c2b_rst_reg.reg_\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__rxInc_sink__DOT__sink_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29682: rxInc_sink.sink_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__io_c2b_rst_reg__DOT__reg_ ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__io_c2b_rst_reg__DOT__reg_))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29251: io_c2b_rst_reg.reg_\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__source_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:27683: source_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource__source_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:27683: source_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source__source_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:27683: source_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source__source_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:27683: source_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source__source_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:27683: source_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__source_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:27683: source_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource__source_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:27683: source_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source__source_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:27683: source_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source__source_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:27683: source_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source__source_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:27683: source_valid_0_reset\n"); );
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
