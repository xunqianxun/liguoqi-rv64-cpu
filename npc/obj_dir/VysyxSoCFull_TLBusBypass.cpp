// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull_TLBusBypass.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__5(VysyxSoCFull_TLBusBypass* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__5\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp5;
    VlWide<4>/*127:0*/ __Vtemp6;
    VlWide<4>/*127:0*/ __Vtemp7;
    VlWide<4>/*127:0*/ __Vtemp8;
    VlWide<4>/*127:0*/ __Vtemp9;
    VlWide<4>/*127:0*/ __Vtemp10;
    VlWide<4>/*127:0*/ __Vtemp11;
    VlWide<4>/*127:0*/ __Vtemp12;
    VlWide<4>/*127:0*/ __Vtemp13;
    VlWide<4>/*127:0*/ __Vtemp14;
    // Body
    if ((5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_30 = 2U;
        vlSelf->__PVT__error__DOT__monitor__DOT___GEN_30 = 2U;
    } else {
        vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_30 
            = ((4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                ? 1U : ((3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                         ? 1U : ((2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                  ? 1U : 0U)));
        vlSelf->__PVT__error__DOT__monitor__DOT___GEN_30 
            = ((4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                ? 1U : ((3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                         ? 1U : ((2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                  ? 1U : 0U)));
    }
    vlSelf->__PVT__error__DOT__da_bits_opcode = ((7U 
                                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                                  ? 4U
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                                   ? 4U
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                                    ? 2U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                                     ? 1U
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                                      ? 1U
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                                       ? 1U
                                                       : 0U))))));
    vlSelf->__PVT__error__DOT__a_last = ((1U == (IData)(vlSelf->__PVT__error__DOT__a_last_counter)) 
                                         | (0U == (
                                                   (4U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                                    ? 0U
                                                    : 
                                                   (0x3ffU 
                                                    & (~ 
                                                       (0x1ffffffU 
                                                        & (((IData)(0xfffU) 
                                                            << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                           >> 2U)))))));
    vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok = 1U;
    vlSelf->__PVT__error__DOT__monitor__DOT__source_ok = 1U;
    vlSelf->__PVT__bar__DOT__monitor__DOT___T_88 = 
        ((0ULL == (0x1c0000000ULL & (QData)((IData)(
                                                    (0x40000000U 
                                                     ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))) 
         | (0ULL == (0x180000000ULL & (QData)((IData)(
                                                      (0x80000000U 
                                                       ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))));
    vlSelf->__PVT__bar__DOT__monitor__DOT__mask_acc 
        = (1U & ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))) 
                           >> 1U) & (~ (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                        >> 1U))))));
    vlSelf->__PVT__bar__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))) 
                           >> 1U) & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                     >> 1U)))));
    VL_EXTEND_WI(128,32, __Vtemp5, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    vlSelf->__PVT__error__DOT__monitor__DOT__mask_acc 
        = (1U & ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))) 
                           >> 1U) & (~ (__Vtemp5[0U] 
                                        >> 1U))))));
    VL_EXTEND_WI(128,32, __Vtemp6, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    vlSelf->__PVT__error__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))) 
                           >> 1U) & (__Vtemp6[0U] >> 1U)))));
    vlSelf->__PVT__error__DOT__da_last = ((1U == (IData)(vlSelf->__PVT__error__DOT__counter)) 
                                          | (0U == 
                                             ((1U & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))
                                               ? (0x3ffU 
                                                  & (~ 
                                                     (0x1ffffffU 
                                                      & (((IData)(0xfffU) 
                                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                         >> 2U))))
                                               : 0U)));
    vlSelf->__PVT__bar__DOT__monitor__DOT__mask = (
                                                   (8U 
                                                    & (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask_acc_1) 
                                                        << 3U) 
                                                       | (0xfffffff8U 
                                                          & ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                                              << 2U) 
                                                             & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                                                << 3U))))) 
                                                   | ((4U 
                                                       & (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask_acc_1) 
                                                           | (IData)(
                                                                     (2U 
                                                                      == 
                                                                      (3U 
                                                                       & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask_acc) 
                                                              | (IData)(
                                                                        (1U 
                                                                         == 
                                                                         (3U 
                                                                          & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask_acc) 
                                                               | (IData)(
                                                                         (0U 
                                                                          == 
                                                                          (3U 
                                                                           & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))));
    VL_EXTEND_WI(128,32, __Vtemp7, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp8, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp9, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp10, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp11, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp12, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp13, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp14, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    vlSelf->__PVT__error__DOT__monitor__DOT__mask = 
        ((8U & (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask_acc_1) 
                 << 3U) | (0xfffffff8U & ((__Vtemp7[0U] 
                                           << 2U) & 
                                          (__Vtemp8[0U] 
                                           << 3U))))) 
         | ((4U & (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask_acc_1) 
                    << 2U) | (0xfffffffcU & ((__Vtemp9[0U] 
                                              << 1U) 
                                             & ((~ 
                                                 __Vtemp10[0U]) 
                                                << 2U))))) 
            | ((2U & (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask_acc) 
                       | ((~ (__Vtemp11[0U] >> 1U)) 
                          & __Vtemp12[0U])) << 1U)) 
               | (1U & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask_acc) 
                        | ((~ (__Vtemp13[0U] >> 1U)) 
                           & (~ __Vtemp14[0U])))))));
}

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__7(VysyxSoCFull_TLBusBypass* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__7\n"); );
    // Body
    vlSelf->__PVT__bar_auto_out_1_a_valid = (((~ (IData)(vlSelf->__PVT__bar__DOT__stall)) 
                                              & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid)) 
                                             & (~ (IData)(vlSelf->__PVT__bar__DOT__bypass)));
    vlSelf->__PVT__bar_auto_out_0_a_valid = (((~ (IData)(vlSelf->__PVT__bar__DOT__stall)) 
                                              & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid)) 
                                             & (IData)(vlSelf->__PVT__bar__DOT__bypass));
    vlSelf->__PVT__error__DOT__da_valid = (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                                            & (IData)(vlSelf->__PVT__error__DOT__a_last)) 
                                           & (IData)(vlSelf->__PVT__error__DOT__idle));
    if ((0U == (IData)(vlSelf->__PVT__error__DOT__beatsLeft))) {
        vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_denied 
            = vlSelf->__PVT__error__DOT__da_valid;
        vlSelf->__PVT__error_auto_in_d_bits_denied 
            = vlSelf->__PVT__error__DOT__da_valid;
        vlSelf->__PVT__error__DOT__muxStateEarly_1 
            = vlSelf->__PVT__error__DOT__da_valid;
    } else {
        vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_denied 
            = vlSelf->__PVT__error__DOT__state_1;
        vlSelf->__PVT__error_auto_in_d_bits_denied 
            = vlSelf->__PVT__error__DOT__state_1;
        vlSelf->__PVT__error__DOT__muxStateEarly_1 
            = vlSelf->__PVT__error__DOT__state_1;
    }
    vlSelf->__PVT__error__DOT___sink_ACancel_earlyValid_T_2 
        = ((IData)(vlSelf->__PVT__error__DOT__state_1) 
           & (IData)(vlSelf->__PVT__error__DOT__da_valid));
    if (vlSelf->__PVT__bar__DOT__bypass) {
        vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_denied 
            = (1U & (IData)(vlSelf->__PVT__error_auto_in_d_bits_denied));
        vlSelf->__PVT__bar_auto_in_d_bits_denied = 
            (1U & (IData)(vlSelf->__PVT__error_auto_in_d_bits_denied));
    } else {
        vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_denied 
            = (1U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                     >> 2U));
        vlSelf->__PVT__bar_auto_in_d_bits_denied = 
            (1U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                   >> 2U));
    }
    if (vlSelf->__PVT__error__DOT__muxStateEarly_1) {
        vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size;
        vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode 
            = vlSelf->__PVT__error__DOT__da_bits_opcode;
        vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source;
        vlSelf->__PVT__error_auto_in_d_bits_corrupt 
            = ((IData)(vlSelf->__PVT__error__DOT__da_bits_opcode) 
               & 1U);
        vlSelf->__PVT__error_auto_in_d_bits_source 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source;
        vlSelf->__PVT__error_auto_in_d_bits_size = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size;
        vlSelf->__PVT__error_auto_in_d_bits_opcode 
            = vlSelf->__PVT__error__DOT__da_bits_opcode;
    } else {
        vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size = 0U;
        vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode = 0U;
        vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source = 0U;
        vlSelf->__PVT__error_auto_in_d_bits_corrupt = 0U;
        vlSelf->__PVT__error_auto_in_d_bits_source = 0U;
        vlSelf->__PVT__error_auto_in_d_bits_size = 0U;
        vlSelf->__PVT__error_auto_in_d_bits_opcode = 0U;
    }
    if ((0U == (IData)(vlSelf->__PVT__error__DOT__beatsLeft))) {
        vlSelf->__PVT__error__DOT__monitor_io_in_d_valid 
            = vlSelf->__PVT__error__DOT__da_valid;
        vlSelf->__PVT__error_auto_in_d_valid = vlSelf->__PVT__error__DOT__da_valid;
    } else {
        vlSelf->__PVT__error__DOT__monitor_io_in_d_valid 
            = vlSelf->__PVT__error__DOT___sink_ACancel_earlyValid_T_2;
        vlSelf->__PVT__error_auto_in_d_valid = vlSelf->__PVT__error__DOT___sink_ACancel_earlyValid_T_2;
    }
    vlSelf->__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
        = ((0x3fU >= ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source) 
                      << 2U)) ? (vlSelf->__PVT__error__DOT__monitor__DOT__inflight_opcodes 
                                 >> ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source) 
                                     << 2U)) : 0ULL);
    if (vlSelf->__PVT__bar__DOT__bypass) {
        vlSelf->__PVT__bar_auto_in_d_bits_corrupt = vlSelf->__PVT__error_auto_in_d_bits_corrupt;
        vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source 
            = vlSelf->__PVT__error_auto_in_d_bits_source;
        vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size 
            = (7U & (IData)(vlSelf->__PVT__error_auto_in_d_bits_size));
        vlSelf->__PVT__bar__DOT__in_d_bits_size = (7U 
                                                   & (IData)(vlSelf->__PVT__error_auto_in_d_bits_size));
        vlSelf->__PVT__bar_auto_in_d_bits_size = (7U 
                                                  & (IData)(vlSelf->__PVT__error_auto_in_d_bits_size));
        vlSelf->__PVT__bar__DOT__in_d_bits_opcode = vlSelf->__PVT__error_auto_in_d_bits_opcode;
        vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode 
            = vlSelf->__PVT__error_auto_in_d_bits_opcode;
        vlSelf->__PVT__bar_auto_in_d_bits_opcode = vlSelf->__PVT__error_auto_in_d_bits_opcode;
        vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid 
            = vlSelf->__PVT__error_auto_in_d_valid;
        vlSelf->__PVT__bar_auto_in_d_valid = vlSelf->__PVT__error_auto_in_d_valid;
    } else {
        vlSelf->__PVT__bar_auto_in_d_bits_corrupt = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt;
        vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source;
        vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size 
            = (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3));
        vlSelf->__PVT__bar__DOT__in_d_bits_size = (7U 
                                                   & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3));
        vlSelf->__PVT__bar_auto_in_d_bits_size = (7U 
                                                  & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3));
        vlSelf->__PVT__bar__DOT__in_d_bits_opcode = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode;
        vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode;
        vlSelf->__PVT__bar_auto_in_d_bits_opcode = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode;
        vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid;
        vlSelf->__PVT__bar_auto_in_d_valid = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid;
    }
    vlSelf->__PVT__error__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & (IData)((7ULL & (vlSelf->__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                         >> 1U)))))
            ? 2U : ((4U == (7U & (IData)((7ULL & (vlSelf->__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                  >> 1U)))))
                     ? 1U : ((3U == (7U & (IData)((7ULL 
                                                   & (vlSelf->__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                      >> 1U)))))
                              ? 1U : ((2U == (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                       ? 1U : 0U))));
    vlSelf->__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
        = ((0x3fU >= ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                      << 2U)) ? (vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_opcodes 
                                 >> ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                                     << 2U)) : 0ULL);
    vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & (IData)((7ULL & (vlSelf->__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                         >> 1U)))))
            ? 2U : ((4U == (7U & (IData)((7ULL & (vlSelf->__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                  >> 1U)))))
                     ? 1U : ((3U == (7U & (IData)((7ULL 
                                                   & (vlSelf->__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                      >> 1U)))))
                              ? 1U : ((2U == (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                       ? 1U : 0U))));
}

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__10(VysyxSoCFull_TLBusBypass* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__10\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp16;
    VlWide<5>/*159:0*/ __Vtemp17;
    VlWide<5>/*159:0*/ __Vtemp23;
    VlWide<5>/*159:0*/ __Vtemp24;
    VlWide<5>/*159:0*/ __Vtemp30;
    VlWide<5>/*159:0*/ __Vtemp31;
    VlWide<5>/*159:0*/ __Vtemp40;
    VlWide<5>/*159:0*/ __Vtemp41;
    VlWide<5>/*159:0*/ __Vtemp47;
    VlWide<5>/*159:0*/ __Vtemp48;
    VlWide<5>/*159:0*/ __Vtemp54;
    VlWide<5>/*159:0*/ __Vtemp55;
    VlWide<5>/*159:0*/ __Vtemp63;
    VlWide<5>/*159:0*/ __Vtemp64;
    VlWide<5>/*159:0*/ __Vtemp73;
    VlWide<5>/*159:0*/ __Vtemp74;
    VlWide<5>/*159:0*/ __Vtemp80;
    VlWide<5>/*159:0*/ __Vtemp81;
    // Body
    vlSelf->__PVT__bar__DOT___T_3 = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_d_ready) 
                                     & ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                         ? (IData)(vlSelf->__PVT__error_auto_in_d_valid)
                                         : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid)));
    vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_d_ready) 
           & (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid));
    vlSelf->__PVT__bar_auto_out_1_d_ready = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_d_ready) 
                                             & (~ (IData)(vlSelf->__PVT__bar__DOT__bypass)));
    vlSelf->__PVT__bar_auto_out_0_d_ready = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_d_ready) 
                                             & (IData)(vlSelf->__PVT__bar__DOT__bypass));
    vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_T_5 
        = ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_1) 
           & (~ ((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode)))
                  ? ((IData)(1U) << (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))
                  : 0U)));
    __Vtemp16[0U] = 0xfU;
    __Vtemp16[1U] = 0U;
    __Vtemp16[2U] = 0U;
    __Vtemp16[3U] = 0U;
    __Vtemp16[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp17, __Vtemp16, 
                  ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_sizes_T_5 
        = (vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes_1 
           & (~ (((QData)((IData)(((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
                                     & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2))) 
                                    & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode)))
                                    ? __Vtemp17[1U]
                                    : 0U))) << 0x20U) 
                 | (QData)((IData)(((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp17[0U]
                                     : 0U))))));
    __Vtemp23[0U] = 0xfU;
    __Vtemp23[1U] = 0U;
    __Vtemp23[2U] = 0U;
    __Vtemp23[3U] = 0U;
    __Vtemp23[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp24, __Vtemp23, 
                  ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    if ((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
          & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
         & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[0U] 
            = __Vtemp24[0U];
        vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[1U] 
            = __Vtemp24[1U];
        vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[2U] 
            = __Vtemp24[2U];
        vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[3U] 
            = __Vtemp24[3U];
        vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[4U] 
            = (0x7fffU & __Vtemp24[4U]);
    } else {
        vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[0U] = 0U;
        vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[1U] = 0U;
        vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[2U] = 0U;
        vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[3U] = 0U;
        vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[4U] = 0U;
    }
    vlSelf->__PVT__error__DOT__latch = ((0U == (IData)(vlSelf->__PVT__error__DOT__beatsLeft)) 
                                        & (IData)(vlSelf->__PVT__bar_auto_out_0_d_ready));
    vlSelf->__PVT__error__DOT___beatsLeft_T_4 = (0x3ffU 
                                                 & ((IData)(vlSelf->__PVT__error__DOT__beatsLeft) 
                                                    - 
                                                    ((IData)(vlSelf->__PVT__bar_auto_out_0_d_ready) 
                                                     & ((0U 
                                                         == (IData)(vlSelf->__PVT__error__DOT__beatsLeft))
                                                         ? (IData)(vlSelf->__PVT__error__DOT__da_valid)
                                                         : (IData)(vlSelf->__PVT__error__DOT___sink_ACancel_earlyValid_T_2)))));
    vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T 
        = ((IData)(vlSelf->__PVT__bar_auto_out_0_d_ready) 
           & (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid));
    vlSelf->__PVT__error__DOT__out_1_ready = ((IData)(vlSelf->__PVT__bar_auto_out_0_d_ready) 
                                              & ((0U 
                                                  == (IData)(vlSelf->__PVT__error__DOT__beatsLeft)) 
                                                 | (IData)(vlSelf->__PVT__error__DOT__state_1)));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_T_5 
        = ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight_1) 
           & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                  ? ((IData)(1U) << (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))
                  : 0U)));
    __Vtemp30[0U] = 0xffU;
    __Vtemp30[1U] = 0U;
    __Vtemp30[2U] = 0U;
    __Vtemp30[3U] = 0U;
    __Vtemp30[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp31, __Vtemp30, 
                  ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = (vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[0U] 
           & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp31[0U] : 0U)));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = (vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[1U] 
           & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp31[1U] : 0U)));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = (vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[2U] 
           & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp31[2U] : 0U)));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = (vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[3U] 
           & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp31[3U] : 0U)));
    vlSelf->__PVT__error__DOT___T = ((IData)(vlSelf->__PVT__error__DOT__out_1_ready) 
                                     & (IData)(vlSelf->__PVT__error__DOT__da_valid));
    vlSelf->__PVT__error__DOT__monitor_io_in_a_ready 
        = (1U & ((((IData)(vlSelf->__PVT__error__DOT__out_1_ready) 
                   & (IData)(vlSelf->__PVT__error__DOT__da_last)) 
                  & (IData)(vlSelf->__PVT__error__DOT__idle)) 
                 | (~ (IData)(vlSelf->__PVT__error__DOT__a_last))));
    vlSelf->__PVT__bar__DOT___bundleIn_0_a_ready_T_1 
        = (1U & ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                  ? ((((IData)(vlSelf->__PVT__error__DOT__out_1_ready) 
                       & (IData)(vlSelf->__PVT__error__DOT__da_last)) 
                      & (IData)(vlSelf->__PVT__error__DOT__idle)) 
                     | (~ (IData)(vlSelf->__PVT__error__DOT__a_last)))
                  : (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full))));
    vlSelf->__PVT__error__DOT___GEN_12 = ((~ ((IData)(vlSelf->__PVT__error__DOT___T) 
                                              & (4U 
                                                 == (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode)))) 
                                          & (IData)(vlSelf->__PVT__error__DOT__idle));
    vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_a_ready) 
           & (IData)(vlSelf->__PVT__bar_auto_out_0_a_valid));
    vlSelf->__PVT__bar__DOT___T = (((~ (IData)(vlSelf->__PVT__bar__DOT__stall)) 
                                    & (IData)(vlSelf->__PVT__bar__DOT___bundleIn_0_a_ready_T_1)) 
                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid));
    vlSelf->__PVT__bar__DOT__monitor_io_in_a_ready 
        = ((~ (IData)(vlSelf->__PVT__bar__DOT__stall)) 
           & (IData)(vlSelf->__PVT__bar__DOT___bundleIn_0_a_ready_T_1));
    vlSelf->__PVT__bar_auto_in_a_ready = ((~ (IData)(vlSelf->__PVT__bar__DOT__stall)) 
                                          & (IData)(vlSelf->__PVT__bar__DOT___bundleIn_0_a_ready_T_1));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_T_2 
        = (0xffffU & (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight) 
                       | (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                           & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                           ? ((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source))
                           : 0U)) & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                                          & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                                         & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                                         ? ((IData)(1U) 
                                            << (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))
                                         : 0U))));
    VL_EXTEND_WI(131,4, __Vtemp40, (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                                     ? (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                                              << 1U))
                                     : 0U));
    VL_SHIFTL_WWI(131,131,7, __Vtemp41, __Vtemp40, 
                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                   << 2U));
    __Vtemp47[0U] = 0xfU;
    __Vtemp47[1U] = 0U;
    __Vtemp47[2U] = 0U;
    __Vtemp47[3U] = 0U;
    __Vtemp47[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp48, __Vtemp47, 
                  ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_opcodes_T_2 
        = ((vlSelf->__PVT__error__DOT__monitor__DOT__inflight_opcodes 
            | (((QData)((IData)((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp41[1U] : 0U))) 
                << 0x20U) | (QData)((IData)((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                                              & (0U 
                                                 == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                                              ? __Vtemp41[0U]
                                              : 0U))))) 
           & (~ (((QData)((IData)(((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                                     & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                                    & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                                    ? __Vtemp48[1U]
                                    : 0U))) << 0x20U) 
                 | (QData)((IData)(((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                                     & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp48[0U]
                                     : 0U))))));
    VL_EXTEND_WI(132,5, __Vtemp54, (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                                     ? (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                                              << 1U))
                                     : 0U));
    VL_SHIFTL_WWI(132,132,7, __Vtemp55, __Vtemp54, 
                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                   << 3U));
    __Vtemp63[0U] = 0xffU;
    __Vtemp63[1U] = 0U;
    __Vtemp63[2U] = 0U;
    __Vtemp63[3U] = 0U;
    __Vtemp63[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp64, __Vtemp63, 
                  ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[0U] 
            | (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp55[0U] : 0U)) & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                                               & (0U 
                                                  == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                                              ? __Vtemp64[0U]
                                              : 0U)));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[1U] 
            | (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp55[1U] : 0U)) & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                                               & (0U 
                                                  == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                                              ? __Vtemp64[1U]
                                              : 0U)));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[2U] 
            | (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp55[2U] : 0U)) & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                                               & (0U 
                                                  == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                                              ? __Vtemp64[2U]
                                              : 0U)));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[3U] 
            | (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp55[3U] : 0U)) & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                                               & (0U 
                                                  == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                                              ? __Vtemp64[3U]
                                              : 0U)));
    vlSelf->__PVT__bar__DOT__inc = ((((IData)(vlSelf->__PVT__bar__DOT___T) 
                                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__counter))) 
                                     << 1U) | (((IData)(vlSelf->__PVT__bar__DOT___T_3) 
                                                & (0U 
                                                   == (IData)(vlSelf->__PVT__bar__DOT__counter_3))) 
                                               & (IData)(
                                                         (4U 
                                                          == 
                                                          (6U 
                                                           & (IData)(vlSelf->__PVT__bar__DOT__in_d_bits_opcode))))));
    vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_a_ready) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid));
    vlSelf->__PVT__bar__DOT__next_flight = (0x3fU & 
                                            (((IData)(vlSelf->__PVT__bar__DOT__flight) 
                                              + (3U 
                                                 & ((1U 
                                                     & (IData)(vlSelf->__PVT__bar__DOT__inc)) 
                                                    + 
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__bar__DOT__inc) 
                                                        >> 1U))))) 
                                             - (3U 
                                                & (((IData)(vlSelf->__PVT__bar__DOT___T_3) 
                                                    & ((1U 
                                                        == (IData)(vlSelf->__PVT__bar__DOT__counter_3)) 
                                                       | (0U 
                                                          == 
                                                          ((1U 
                                                            & (IData)(vlSelf->__PVT__bar__DOT__in_d_bits_opcode))
                                                            ? 
                                                           (0xfU 
                                                            & (~ 
                                                               (0x7ffU 
                                                                & (((IData)(0x3fU) 
                                                                    << (IData)(vlSelf->__PVT__bar__DOT__in_d_bits_size)) 
                                                                   >> 2U))))
                                                            : 0U)))) 
                                                   + 
                                                   (1U 
                                                    & (((IData)(vlSelf->__PVT__bar__DOT___T_3) 
                                                        & ((1U 
                                                            == (IData)(vlSelf->__PVT__bar__DOT__counter_3)) 
                                                           | (0U 
                                                              == 
                                                              ((1U 
                                                                & (IData)(vlSelf->__PVT__bar__DOT__in_d_bits_opcode))
                                                                ? 
                                                               (0xfU 
                                                                & (~ 
                                                                   (0x7ffU 
                                                                    & (((IData)(0x3fU) 
                                                                        << (IData)(vlSelf->__PVT__bar__DOT__in_d_bits_size)) 
                                                                       >> 2U))))
                                                                : 0U)))) 
                                                       >> 1U))))));
    VL_EXTEND_WI(131,4, __Vtemp73, (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                     ? (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                                              << 1U))
                                     : 0U));
    VL_SHIFTL_WWI(131,131,7, __Vtemp74, __Vtemp73, 
                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                   << 2U));
    vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_opcodes_T_2 
        = ((vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_opcodes 
            | (((QData)((IData)((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp74[1U] : 0U))) 
                << 0x20U) | (QData)((IData)((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
                                              & (0U 
                                                 == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                              ? __Vtemp74[0U]
                                              : 0U))))) 
           & (~ (((QData)((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[1U])) 
                  << 0x20U) | (QData)((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[0U])))));
    VL_EXTEND_WI(131,4, __Vtemp80, (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                     ? (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                                              << 1U))
                                     : 0U));
    VL_SHIFTL_WWI(131,131,7, __Vtemp81, __Vtemp80, 
                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                   << 2U));
    vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_sizes_T_2 
        = ((vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes 
            | (((QData)((IData)((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp81[1U] : 0U))) 
                << 0x20U) | (QData)((IData)((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
                                              & (0U 
                                                 == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                              ? __Vtemp81[0U]
                                              : 0U))))) 
           & (~ (((QData)((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[1U])) 
                  << 0x20U) | (QData)((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[0U])))));
    vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_T_2 
        = (0xffffU & (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight) 
                       | (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
                           & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1)))
                           ? ((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source))
                           : 0U)) & (~ ((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
                                          & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                                         & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode)))
                                         ? ((IData)(1U) 
                                            << (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))
                                         : 0U))));
}

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__11(VysyxSoCFull_TLBusBypass* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__11\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp88;
    VlWide<5>/*159:0*/ __Vtemp92;
    VlWide<4>/*127:0*/ __Vtemp95;
    VlWide<4>/*127:0*/ __Vtemp96;
    VlWide<4>/*127:0*/ __Vtemp99;
    VlWide<4>/*127:0*/ __Vtemp100;
    VlWide<5>/*159:0*/ __Vtemp104;
    VlWide<5>/*159:0*/ __Vtemp108;
    VlWide<4>/*127:0*/ __Vtemp111;
    VlWide<4>/*127:0*/ __Vtemp112;
    VlWide<4>/*127:0*/ __Vtemp115;
    VlWide<4>/*127:0*/ __Vtemp116;
    VlWide<5>/*159:0*/ __Vtemp120;
    VlWide<5>/*159:0*/ __Vtemp124;
    VlWide<4>/*127:0*/ __Vtemp127;
    VlWide<4>/*127:0*/ __Vtemp128;
    VlWide<4>/*127:0*/ __Vtemp131;
    VlWide<4>/*127:0*/ __Vtemp132;
    VlWide<5>/*159:0*/ __Vtemp136;
    VlWide<5>/*159:0*/ __Vtemp140;
    VlWide<4>/*127:0*/ __Vtemp143;
    VlWide<4>/*127:0*/ __Vtemp144;
    VlWide<4>/*127:0*/ __Vtemp147;
    VlWide<4>/*127:0*/ __Vtemp148;
    VlWide<5>/*159:0*/ __Vtemp152;
    VlWide<5>/*159:0*/ __Vtemp156;
    VlWide<4>/*127:0*/ __Vtemp159;
    VlWide<4>/*127:0*/ __Vtemp160;
    VlWide<4>/*127:0*/ __Vtemp163;
    VlWide<4>/*127:0*/ __Vtemp164;
    VlWide<5>/*159:0*/ __Vtemp168;
    VlWide<5>/*159:0*/ __Vtemp172;
    VlWide<4>/*127:0*/ __Vtemp175;
    VlWide<4>/*127:0*/ __Vtemp176;
    VlWide<4>/*127:0*/ __Vtemp179;
    VlWide<4>/*127:0*/ __Vtemp180;
    VlWide<5>/*159:0*/ __Vtemp184;
    VlWide<5>/*159:0*/ __Vtemp188;
    VlWide<4>/*127:0*/ __Vtemp191;
    VlWide<4>/*127:0*/ __Vtemp192;
    VlWide<4>/*127:0*/ __Vtemp195;
    VlWide<4>/*127:0*/ __Vtemp196;
    VlWide<5>/*159:0*/ __Vtemp200;
    VlWide<5>/*159:0*/ __Vtemp204;
    VlWide<4>/*127:0*/ __Vtemp207;
    VlWide<4>/*127:0*/ __Vtemp208;
    VlWide<4>/*127:0*/ __Vtemp211;
    VlWide<4>/*127:0*/ __Vtemp212;
    VlWide<4>/*127:0*/ __Vtemp214;
    VlWide<4>/*127:0*/ __Vtemp215;
    VlWide<4>/*127:0*/ __Vtemp218;
    VlWide<4>/*127:0*/ __Vtemp221;
    VlWide<4>/*127:0*/ __Vtemp222;
    VlWide<4>/*127:0*/ __Vtemp225;
    VlWide<4>/*127:0*/ __Vtemp228;
    VlWide<4>/*127:0*/ __Vtemp229;
    VlWide<4>/*127:0*/ __Vtemp232;
    VlWide<4>/*127:0*/ __Vtemp235;
    VlWide<4>/*127:0*/ __Vtemp236;
    VlWide<4>/*127:0*/ __Vtemp239;
    VlWide<4>/*127:0*/ __Vtemp242;
    VlWide<4>/*127:0*/ __Vtemp243;
    VlWide<4>/*127:0*/ __Vtemp248;
    // Body
    if (VL_UNLIKELY((1U & (~ (((IData)(vlSelf->__PVT__error__DOT__idle) 
                               | (0U == (IData)(vlSelf->__PVT__error__DOT__counter))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Error.scala:49 assert (idle || da_first) // we only send Grant, never GrantData => simplified flow control below\n");
    }
    if (VL_UNLIKELY((1U & (~ (((IData)(vlSelf->__PVT__error__DOT__idle) 
                               | (0U == (IData)(vlSelf->__PVT__error__DOT__counter))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15558: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15558, "");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:107 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15582: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15582, "");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:108 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15606: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15606, "");
    }
    VL_EXTEND_WI(129,32, __Vtemp88, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp88[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(129,32, __Vtemp92, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp92[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13522: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13522, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13546: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13546, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13570: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13570, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13594: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13594, "");
    }
    VL_EXTEND_WI(128,32, __Vtemp95, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp96, (0xfffU & (~ (0x7ffffffU 
                                                  & ((IData)(0xfffU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp95[0U] 
                                      & __Vtemp96[0U]) 
                                     | (__Vtemp95[1U] 
                                        & __Vtemp96[1U])) 
                                    | (__Vtemp95[2U] 
                                       & __Vtemp96[2U])) 
                                   | (__Vtemp95[3U] 
                                      & __Vtemp96[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(128,32, __Vtemp99, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp100, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp99[0U] 
                                      & __Vtemp100[0U]) 
                                     | (__Vtemp99[1U] 
                                        & __Vtemp100[1U])) 
                                    | (__Vtemp99[2U] 
                                       & __Vtemp100[2U])) 
                                   | (__Vtemp99[3U] 
                                      & __Vtemp100[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13618: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13618, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13642: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13642, "");
    }
    VL_EXTEND_WI(129,32, __Vtemp104, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp104[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(129,32, __Vtemp108, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp108[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13666: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13666, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13690: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13690, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13714: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13714, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13738: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13738, "");
    }
    VL_EXTEND_WI(128,32, __Vtemp111, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp112, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp111[0U] 
                                      & __Vtemp112[0U]) 
                                     | (__Vtemp111[1U] 
                                        & __Vtemp112[1U])) 
                                    | (__Vtemp111[2U] 
                                       & __Vtemp112[2U])) 
                                   | (__Vtemp111[3U] 
                                      & __Vtemp112[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(128,32, __Vtemp115, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp116, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp115[0U] 
                                      & __Vtemp116[0U]) 
                                     | (__Vtemp115[1U] 
                                        & __Vtemp116[1U])) 
                                    | (__Vtemp115[2U] 
                                       & __Vtemp116[2U])) 
                                   | (__Vtemp115[3U] 
                                      & __Vtemp116[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13762: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13762, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13786: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13786, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13810: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13810, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13834: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13834, "");
    }
    VL_EXTEND_WI(129,32, __Vtemp120, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (1U & __Vtemp120[4U])) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(129,32, __Vtemp124, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (1U & __Vtemp124[4U])) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13858: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13858, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13882: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13882, "");
    }
    VL_EXTEND_WI(128,32, __Vtemp127, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp128, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp127[0U] 
                                      & __Vtemp128[0U]) 
                                     | (__Vtemp127[1U] 
                                        & __Vtemp128[1U])) 
                                    | (__Vtemp127[2U] 
                                       & __Vtemp128[2U])) 
                                   | (__Vtemp127[3U] 
                                      & __Vtemp128[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(128,32, __Vtemp131, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp132, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp131[0U] 
                                      & __Vtemp132[0U]) 
                                     | (__Vtemp131[1U] 
                                        & __Vtemp132[1U])) 
                                    | (__Vtemp131[2U] 
                                       & __Vtemp132[2U])) 
                                   | (__Vtemp131[3U] 
                                      & __Vtemp132[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13906: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13906, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13930: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13930, "");
    }
    VL_EXTEND_WI(129,32, __Vtemp136, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp136[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(129,32, __Vtemp140, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp140[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13954: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13954, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13978: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13978, "");
    }
    VL_EXTEND_WI(128,32, __Vtemp143, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp144, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp143[0U] 
                                      & __Vtemp144[0U]) 
                                     | (__Vtemp143[1U] 
                                        & __Vtemp144[1U])) 
                                    | (__Vtemp143[2U] 
                                       & __Vtemp144[2U])) 
                                   | (__Vtemp143[3U] 
                                      & __Vtemp144[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(128,32, __Vtemp147, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp148, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp147[0U] 
                                      & __Vtemp148[0U]) 
                                     | (__Vtemp147[1U] 
                                        & __Vtemp148[1U])) 
                                    | (__Vtemp147[2U] 
                                       & __Vtemp148[2U])) 
                                   | (__Vtemp147[3U] 
                                      & __Vtemp148[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14002: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14002, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14026: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14026, "");
    }
    VL_EXTEND_WI(129,32, __Vtemp152, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp152[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(129,32, __Vtemp156, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp156[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14050: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14050, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14074: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14074, "");
    }
    VL_EXTEND_WI(128,32, __Vtemp159, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp160, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp159[0U] 
                                      & __Vtemp160[0U]) 
                                     | (__Vtemp159[1U] 
                                        & __Vtemp160[1U])) 
                                    | (__Vtemp159[2U] 
                                       & __Vtemp160[2U])) 
                                   | (__Vtemp159[3U] 
                                      & __Vtemp160[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(128,32, __Vtemp163, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp164, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp163[0U] 
                                      & __Vtemp164[0U]) 
                                     | (__Vtemp163[1U] 
                                        & __Vtemp164[1U])) 
                                    | (__Vtemp163[2U] 
                                       & __Vtemp164[2U])) 
                                   | (__Vtemp163[3U] 
                                      & __Vtemp164[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14098: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14098, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14122: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14122, "");
    }
    VL_EXTEND_WI(129,32, __Vtemp168, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & ((4U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0U == (1U & __Vtemp168[4U])))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(129,32, __Vtemp172, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & ((4U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0U == (1U & __Vtemp172[4U])))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14146: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14146, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14170: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14170, "");
    }
    VL_EXTEND_WI(128,32, __Vtemp175, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp176, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp175[0U] 
                                      & __Vtemp176[0U]) 
                                     | (__Vtemp175[1U] 
                                        & __Vtemp176[1U])) 
                                    | (__Vtemp175[2U] 
                                       & __Vtemp176[2U])) 
                                   | (__Vtemp175[3U] 
                                      & __Vtemp176[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(128,32, __Vtemp179, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp180, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp179[0U] 
                                      & __Vtemp180[0U]) 
                                     | (__Vtemp179[1U] 
                                        & __Vtemp180[1U])) 
                                    | (__Vtemp179[2U] 
                                       & __Vtemp180[2U])) 
                                   | (__Vtemp179[3U] 
                                      & __Vtemp180[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14194: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14194, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14218: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14218, "");
    }
    VL_EXTEND_WI(129,32, __Vtemp184, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & ((4U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0U == (1U & __Vtemp184[4U])))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(129,32, __Vtemp188, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & ((4U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0U == (1U & __Vtemp188[4U])))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14242: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14242, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14266: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14266, "");
    }
    VL_EXTEND_WI(128,32, __Vtemp191, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp192, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp191[0U] 
                                      & __Vtemp192[0U]) 
                                     | (__Vtemp191[1U] 
                                        & __Vtemp192[1U])) 
                                    | (__Vtemp191[2U] 
                                       & __Vtemp192[2U])) 
                                   | (__Vtemp191[3U] 
                                      & __Vtemp192[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(128,32, __Vtemp195, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp196, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp195[0U] 
                                      & __Vtemp196[0U]) 
                                     | (__Vtemp195[1U] 
                                        & __Vtemp196[1U])) 
                                    | (__Vtemp195[2U] 
                                       & __Vtemp196[2U])) 
                                   | (__Vtemp195[3U] 
                                      & __Vtemp196[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14290: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14290, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14314: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14314, "");
    }
    VL_EXTEND_WI(129,32, __Vtemp200, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp200[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(129,32, __Vtemp204, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp204[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14338: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14338, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14362: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14362, "");
    }
    VL_EXTEND_WI(128,32, __Vtemp207, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp208, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp207[0U] 
                                      & __Vtemp208[0U]) 
                                     | (__Vtemp207[1U] 
                                        & __Vtemp208[1U])) 
                                    | (__Vtemp207[2U] 
                                       & __Vtemp208[2U])) 
                                   | (__Vtemp207[3U] 
                                      & __Vtemp208[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(128,32, __Vtemp211, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp212, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp211[0U] 
                                      & __Vtemp212[0U]) 
                                     | (__Vtemp211[1U] 
                                        & __Vtemp212[1U])) 
                                    | (__Vtemp211[2U] 
                                       & __Vtemp212[2U])) 
                                   | (__Vtemp211[3U] 
                                      & __Vtemp212[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14386: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14386, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14410: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14410, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14434: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14434, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14458: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14458, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14482: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14482, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14506: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14506, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14530: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14530, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14554: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14554, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14578: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14578, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14602: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14602, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14626: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14626, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14650: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14650, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14674: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14674, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14698: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14698, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14722: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14722, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14746: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14746, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14770: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14770, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14794: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14794, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14818: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14818, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14842: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14842, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14866: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14866, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14890: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14890, "");
    }
    VL_EXTEND_WI(128,32, __Vtemp214, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((0U == ((((__Vtemp214[0U] 
                                      ^ vlSelf->__PVT__error__DOT__monitor__DOT__address[0U]) 
                                     | (__Vtemp214[1U] 
                                        ^ vlSelf->__PVT__error__DOT__monitor__DOT__address[1U])) 
                                    | (__Vtemp214[2U] 
                                       ^ vlSelf->__PVT__error__DOT__monitor__DOT__address[2U])) 
                                   | (__Vtemp214[3U] 
                                      ^ vlSelf->__PVT__error__DOT__monitor__DOT__address[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(128,32, __Vtemp215, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((0U == ((((__Vtemp215[0U] 
                                      ^ vlSelf->__PVT__error__DOT__monitor__DOT__address[0U]) 
                                     | (__Vtemp215[1U] 
                                        ^ vlSelf->__PVT__error__DOT__monitor__DOT__address[1U])) 
                                    | (__Vtemp215[2U] 
                                       ^ vlSelf->__PVT__error__DOT__monitor__DOT__address[2U])) 
                                   | (__Vtemp215[3U] 
                                      ^ vlSelf->__PVT__error__DOT__monitor__DOT__address[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14914: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14914, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14938: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14938, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14962: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14962, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14986: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14986, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_denied) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_denied) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15010: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15010, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight) 
                                          >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight) 
                                          >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15034: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15034, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0xffffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight) 
                                        >> (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))) 
                            | (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                                & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0xffffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight) 
                                        >> (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))) 
                            | (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                                & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15058: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15058, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                           ? 4U : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                           ? 4U : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15082: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15082, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15106: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15106, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlSelf->__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlSelf->__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15130: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15130, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp218, vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    __Vtemp221[0U] = (0x7fU & (__Vtemp218[0U] >> 1U));
    __Vtemp221[1U] = 0U;
    __Vtemp221[2U] = 0U;
    __Vtemp221[3U] = 0U;
    VL_EXTEND_WW(128,127, __Vtemp222, __Vtemp221);
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size) 
                            == (0xffU & __Vtemp222[0U])) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp225, vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    __Vtemp228[0U] = (0x7fU & (__Vtemp225[0U] >> 1U));
    __Vtemp228[1U] = 0U;
    __Vtemp228[2U] = 0U;
    __Vtemp228[3U] = 0U;
    VL_EXTEND_WW(128,127, __Vtemp229, __Vtemp228);
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size) 
                            == (0xffU & __Vtemp229[0U])) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15154: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15154, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSelf->__PVT__bar_auto_out_0_a_valid)) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                          == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))) 
                      & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__bar_auto_out_0_d_ready)) 
                            | (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSelf->__PVT__bar_auto_out_0_a_valid)) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                          == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))) 
                      & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__bar_auto_out_0_d_ready)) 
                            | (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15176: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15176, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight)))) 
                                | (0U == vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->__PVT__error__DOT__monitor__DOT__watchdog 
                                  < vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight)))) 
                                | (0U == vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->__PVT__error__DOT__monitor__DOT__watchdog 
                                  < vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15200: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15200, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0xffffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0xffffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15224: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15224, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp232, vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    __Vtemp235[0U] = (0x7fU & (__Vtemp232[0U] >> 1U));
    __Vtemp235[1U] = 0U;
    __Vtemp235[2U] = 0U;
    __Vtemp235[3U] = 0U;
    VL_EXTEND_WW(128,127, __Vtemp236, __Vtemp235);
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size) 
                            == (0xffU & __Vtemp236[0U])) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp239, vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    __Vtemp242[0U] = (0x7fU & (__Vtemp239[0U] >> 1U));
    __Vtemp242[1U] = 0U;
    __Vtemp242[2U] = 0U;
    __Vtemp242[3U] = 0U;
    VL_EXTEND_WW(128,127, __Vtemp243, __Vtemp242);
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size) 
                            == (0xffU & __Vtemp243[0U])) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15248: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15248, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight_1)))) 
                                | (0U == vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->__PVT__error__DOT__monitor__DOT__watchdog_1 
                                  < vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight_1)))) 
                                | (0U == vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->__PVT__error__DOT__monitor__DOT__watchdog_1 
                                  < vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15272: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15272, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10725: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10725, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10749: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10749, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10773: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10773, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10797: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10797, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10821: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10821, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10845: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10845, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10869: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10869, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10893: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10893, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10917: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10917, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10941: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10941, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10965: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10965, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10989: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10989, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11013: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11013, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11037: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11037, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11061: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11061, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11085: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11085, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11109: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11109, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11133: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11133, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11157: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11157, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11181: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11181, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11205: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11205, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11229: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11229, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11253: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11253, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11277: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11277, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11301: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11301, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11325: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11325, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((3U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((3U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11349: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11349, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11373: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11373, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11397: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11397, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11421: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11421, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((3U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((3U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11445: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11445, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11469: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11469, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11493: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11493, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11517: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11517, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11541: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11541, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11565: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11565, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11589: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11589, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11613: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11613, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11637: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11637, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11661: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11661, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11685: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11685, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11709: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11709, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11733: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11733, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11757: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11757, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11781: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11781, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11805: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11805, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11829: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11829, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11853: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11853, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11877: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11877, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11901: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11901, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11925: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11925, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11949: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11949, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11973: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11973, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11997: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11997, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12021: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12021, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12045: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12045, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12069: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12069, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12093: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12093, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12117: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12117, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12141: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12141, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12165: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12165, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12189: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12189, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12213: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12213, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12237: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12237, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12261: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12261, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12285: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12285, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                            == vlSelf->__PVT__bar__DOT__monitor__DOT__address) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                            == vlSelf->__PVT__bar__DOT__monitor__DOT__address) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12309: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12309, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12333: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12333, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12357: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12357, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12381: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12381, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12405: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12405, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_sink) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_sink) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12429: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12429, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_denied) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_denied) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12453: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12453, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight) 
                                          >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight) 
                                          >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12477: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12477, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0xffffU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight) 
                                        >> (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))) 
                            | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                                & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0xffffU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight) 
                                        >> (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))) 
                            | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                                & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12501: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12501, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                           ? 4U : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                           ? 4U : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12525: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12525, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12549: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12549, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlSelf->__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlSelf->__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12573: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12573, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes 
                                                     >> 
                                                     ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes 
                                                     >> 
                                                     ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12597: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12597, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid)) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                          == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))) 
                      & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_d_ready)) 
                            | (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid)) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                          == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))) 
                      & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_d_ready)) 
                            | (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12619: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12619, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight)))) 
                                | (0U == vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog 
                                  < vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight)))) 
                                | (0U == vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog 
                                  < vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12643: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12643, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0xffffU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0xffffU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12667: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12667, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes_1 
                                                     >> 
                                                     ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes_1 
                                                     >> 
                                                     ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12691: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12691, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_1)))) 
                                | (0U == vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog_1 
                                  < vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_1)))) 
                                | (0U == vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog_1 
                                  < vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12715: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12715, "");
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__flight = 0U;
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_opcodes = 0ULL;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_opcodes = 0ULL;
    } else {
        vlSelf->__PVT__bar__DOT__flight = vlSelf->__PVT__bar__DOT__next_flight;
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_opcodes 
            = vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_opcodes_T_2;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_opcodes 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_opcodes_T_2;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__counter_3 = 0U;
    } else if (vlSelf->__PVT__bar__DOT___T_3) {
        vlSelf->__PVT__bar__DOT__counter_3 = (0xfU 
                                              & ((IData)(vlSelf->__PVT__bar__DOT__d_first)
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->__PVT__bar__DOT__in_d_bits_opcode))
                                                   ? 
                                                  (~ 
                                                   (0x7ffU 
                                                    & (((IData)(0x3fU) 
                                                        << (IData)(vlSelf->__PVT__bar__DOT__in_d_bits_size)) 
                                                       >> 2U)))
                                                   : 0U)
                                                  : (IData)(vlSelf->__PVT__bar__DOT__counter1_3)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__error__DOT__state_1 = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__error__DOT__beatsLeft))) {
        vlSelf->__PVT__error__DOT__state_1 = vlSelf->__PVT__error__DOT__da_valid;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__counter = 0U;
    } else if (vlSelf->__PVT__bar__DOT___T) {
        vlSelf->__PVT__bar__DOT__counter = (0xfU & 
                                            ((IData)(vlSelf->__PVT__bar__DOT__a_first)
                                              ? ((4U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                                  ? 0U
                                                  : 
                                                 (~ 
                                                  (0x7ffU 
                                                   & (((IData)(0x3fU) 
                                                       << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                      >> 2U))))
                                              : (IData)(vlSelf->__PVT__bar__DOT__counter1)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__stall_counter = 0U;
    } else if (vlSelf->__PVT__bar__DOT___T) {
        vlSelf->__PVT__bar__DOT__stall_counter = (0xfU 
                                                  & ((IData)(vlSelf->__PVT__bar__DOT__stall_first)
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                                       ? 0U
                                                       : 
                                                      (~ 
                                                       (0x7ffU 
                                                        & (((IData)(0x3fU) 
                                                            << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                           >> 2U))))
                                                      : (IData)(vlSelf->__PVT__bar__DOT__stall_counter1)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__error__DOT__a_last_counter = 0U;
    } else if ((((((IData)(vlSelf->__PVT__error__DOT__out_1_ready) 
                   & (IData)(vlSelf->__PVT__error__DOT__da_last)) 
                  & (IData)(vlSelf->__PVT__error__DOT__idle)) 
                 | (~ (IData)(vlSelf->__PVT__error__DOT__a_last))) 
                & (IData)(vlSelf->__PVT__bar_auto_out_0_a_valid))) {
        vlSelf->__PVT__error__DOT__a_last_counter = 
            (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__a_last_first)
                        ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                            ? 0U : (~ (0x1ffffffU & 
                                       (((IData)(0xfffU) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                        >> 2U)))) : (IData)(vlSelf->__PVT__error__DOT__a_last_counter1)));
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__in_reset) 
         | (0U == (IData)(vlSelf->__PVT__bar__DOT__next_flight)))) {
        vlSelf->__PVT__bar__DOT__bypass_reg = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass_io_bypass;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__error__DOT__counter = 0U;
    } else if (vlSelf->__PVT__error__DOT___T) {
        vlSelf->__PVT__error__DOT__counter = (0x3ffU 
                                              & ((IData)(vlSelf->__PVT__error__DOT__da_first)
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))
                                                   ? 
                                                  (~ 
                                                   (0x1ffffffU 
                                                    & (((IData)(0xfffU) 
                                                        << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                       >> 2U)))
                                                   : 0U)
                                                  : (IData)(vlSelf->__PVT__error__DOT__counter1)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_1 = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[0U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[1U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[2U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[3U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[0U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[1U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[2U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[3U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__watchdog_1 = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__watchdog = 0U;
    } else {
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_1 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_T_5;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_5[0U];
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_5[1U];
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_5[2U];
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_5[3U];
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_T_2;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[0U] 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_2[0U];
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[1U] 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_2[1U];
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[2U] 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_2[2U];
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[3U] 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_2[3U];
        vlSelf->__PVT__error__DOT__monitor__DOT__watchdog_1 
            = ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T)
                ? 0U : vlSelf->__PVT__error__DOT__monitor__DOT___watchdog_T_3);
        vlSelf->__PVT__error__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                | (IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T))
                ? 0U : vlSelf->__PVT__error__DOT__monitor__DOT___watchdog_T_1);
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else if (vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2 
            = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_2)
                          ? ((1U & (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))
                              ? (~ (0x1ffffffU & (((IData)(0xfffU) 
                                                   << (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                                                  >> 2U)))
                              : 0U) : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter1_2)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else if (vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1 
            = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))
                              ? (~ (0x1ffffffU & (((IData)(0xfffU) 
                                                   << (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                                                  >> 2U)))
                              : 0U) : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter1_1)));
    }
    if (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__error__DOT__monitor__DOT__denied 
            = vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_denied;
    }
    if (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__error__DOT__monitor__DOT__size_1 
            = vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size;
    }
    if (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__error__DOT__monitor__DOT__opcode_1 
            = vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode;
    }
    if (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__error__DOT__monitor__DOT__source_1 
            = vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else if (vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) {
        vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1 
            = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_1)
                          ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                              ? 0U : (~ (0x1ffffffU 
                                         & (((IData)(0xfffU) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                            >> 2U))))
                          : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter1_1)));
    }
    if (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__error__DOT__monitor__DOT__size 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size;
    }
    if (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__error__DOT__monitor__DOT__opcode 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode;
    }
    if (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__error__DOT__monitor__DOT__source 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source;
    }
    if (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter)))) {
        VL_EXTEND_WI(128,32, __Vtemp248, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
        vlSelf->__PVT__error__DOT__monitor__DOT__address[0U] 
            = __Vtemp248[0U];
        vlSelf->__PVT__error__DOT__monitor__DOT__address[1U] 
            = __Vtemp248[1U];
        vlSelf->__PVT__error__DOT__monitor__DOT__address[2U] 
            = __Vtemp248[2U];
        vlSelf->__PVT__error__DOT__monitor__DOT__address[3U] 
            = __Vtemp248[3U];
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_1 = 0U;
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes_1 = 0ULL;
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes = 0ULL;
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight = 0U;
        vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog_1 = 0U;
        vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog = 0U;
    } else {
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_1 
            = vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_T_5;
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes_1 
            = vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_sizes_T_5;
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes 
            = vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_sizes_T_2;
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight 
            = vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_T_2;
        vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog_1 
            = ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T)
                ? 0U : vlSelf->__PVT__bar__DOT__monitor__DOT___watchdog_T_3);
        vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
                | (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T))
                ? 0U : vlSelf->__PVT__bar__DOT__monitor__DOT___watchdog_T_1);
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else if (vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2 
            = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_2)
                        ? ((1U & (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter1_2)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else if (vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1 
            = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_1)
                        ? ((1U & (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter1_1)));
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__param_1 
            = vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param;
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__sink 
            = vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_sink;
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__denied 
            = vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_denied;
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__size_1 
            = vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size;
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__opcode_1 
            = vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode;
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__source_1 
            = vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else if (vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1 
            = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_1)
                        ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                            ? 0U : (~ (0x7ffU & (((IData)(0x3fU) 
                                                  << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                 >> 2U))))
                        : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter1_1)));
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__size 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size;
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__opcode 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode;
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__source 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source;
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__address 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address;
    }
    vlSelf->__PVT__bar__DOT__counter1_3 = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__counter_3) 
                                                   - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__d_first = (0U == (IData)(vlSelf->__PVT__bar__DOT__counter_3));
    vlSelf->__PVT__error__DOT__beatsLeft = ((IData)(vlSymsp->TOP.reset)
                                             ? 0U : 
                                            (0x3ffU 
                                             & ((IData)(vlSelf->__PVT__error__DOT__latch)
                                                 ? 
                                                ((IData)(vlSelf->__PVT__error__DOT__da_valid)
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))
                                                   ? 
                                                  (~ 
                                                   (0x1ffffffU 
                                                    & (((IData)(0xfffU) 
                                                        << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                       >> 2U)))
                                                   : 0U)
                                                  : 0U)
                                                 : (IData)(vlSelf->__PVT__error__DOT___beatsLeft_T_4))));
    vlSelf->__PVT__bar__DOT__counter1 = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__counter) 
                                                 - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__a_first = (0U == (IData)(vlSelf->__PVT__bar__DOT__counter));
    vlSelf->__PVT__bar__DOT__stall_first = (0U == (IData)(vlSelf->__PVT__bar__DOT__stall_counter));
    vlSelf->__PVT__bar__DOT__stall_counter1 = (0xfU 
                                               & ((IData)(vlSelf->__PVT__bar__DOT__stall_counter) 
                                                  - (IData)(1U)));
    vlSelf->__PVT__error__DOT__a_last_counter1 = (0x3ffU 
                                                  & ((IData)(vlSelf->__PVT__error__DOT__a_last_counter) 
                                                     - (IData)(1U)));
    vlSelf->__PVT__error__DOT__a_last_first = (0U == (IData)(vlSelf->__PVT__error__DOT__a_last_counter));
    vlSelf->__PVT__error__DOT__idle = ((IData)(vlSymsp->TOP.reset) 
                                       | (IData)(vlSelf->__PVT__error__DOT___GEN_12));
    vlSelf->__PVT__bar__DOT__in_reset = vlSymsp->TOP.reset;
    vlSelf->__PVT__error__DOT__counter1 = (0x3ffU & 
                                           ((IData)(vlSelf->__PVT__error__DOT__counter) 
                                            - (IData)(1U)));
    vlSelf->__PVT__error__DOT__da_first = (0U == (IData)(vlSelf->__PVT__error__DOT__counter));
    vlSelf->__PVT__error__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlSelf->__PVT__error__DOT__monitor__DOT__watchdog_1);
    vlSelf->__PVT__error__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->__PVT__error__DOT__monitor__DOT__watchdog);
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter1_2 
        = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2) 
                     - (IData)(1U)));
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter1_1 
        = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1) 
                     - (IData)(1U)));
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter 
            = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first)
                          ? ((1U & (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))
                              ? (~ (0x1ffffffU & (((IData)(0xfffU) 
                                                   << (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                                                  >> 2U)))
                              : 0U) : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter1)));
    }
    vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter1_1 
        = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1) 
                     - (IData)(1U)));
    vlSelf->__PVT__error__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) {
        vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter 
            = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first)
                          ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                              ? 0U : (~ (0x1ffffffU 
                                         & (((IData)(0xfffU) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                            >> 2U))))
                          : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter1)));
    }
    vlSelf->__PVT__bar__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog_1);
    vlSelf->__PVT__bar__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog);
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter1_2 
        = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2) 
                   - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter1_1 
        = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1) 
                   - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter 
            = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first)
                        ? ((1U & (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter1)));
    }
    vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter1_1 
        = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1) 
                   - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter 
            = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first)
                        ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                            ? 0U : (~ (0x7ffU & (((IData)(0x3fU) 
                                                  << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                 >> 2U))))
                        : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter1)));
    }
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter1 
        = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter) 
                     - (IData)(1U)));
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter));
    vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter1 
        = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter) 
                     - (IData)(1U)));
    vlSelf->__PVT__error__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter));
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter1 
        = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter) 
                   - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter));
    vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter1 
        = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter) 
                   - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter));
}

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___multiclk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__15(VysyxSoCFull_TLBusBypass* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___multiclk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__15\n"); );
    // Body
    vlSelf->__PVT__bar__DOT__bypass = ((IData)(vlSelf->__PVT__bar__DOT__in_reset)
                                        ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass_io_bypass)
                                        : (IData)(vlSelf->__PVT__bar__DOT__bypass_reg));
    vlSelf->__PVT__bar__DOT__stall = (((IData)(vlSelf->__PVT__bar__DOT__bypass) 
                                       != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass_io_bypass)) 
                                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__stall_counter)));
    if (vlSelf->__PVT__bar__DOT__bypass) {
        vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param = 0U;
        vlSelf->__PVT__bar_auto_in_d_bits_param = 0U;
        vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_sink = 0U;
    } else {
        vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param 
            = (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2));
        vlSelf->__PVT__bar_auto_in_d_bits_param = (3U 
                                                   & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2));
        vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_sink 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_sink;
    }
}

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__9(VysyxSoCFull_TLBusBypass* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__9\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp260;
    VlWide<5>/*159:0*/ __Vtemp261;
    VlWide<5>/*159:0*/ __Vtemp267;
    VlWide<5>/*159:0*/ __Vtemp268;
    VlWide<5>/*159:0*/ __Vtemp274;
    VlWide<5>/*159:0*/ __Vtemp275;
    VlWide<5>/*159:0*/ __Vtemp284;
    VlWide<5>/*159:0*/ __Vtemp285;
    VlWide<5>/*159:0*/ __Vtemp291;
    VlWide<5>/*159:0*/ __Vtemp292;
    VlWide<5>/*159:0*/ __Vtemp298;
    VlWide<5>/*159:0*/ __Vtemp299;
    VlWide<5>/*159:0*/ __Vtemp307;
    VlWide<5>/*159:0*/ __Vtemp308;
    VlWide<5>/*159:0*/ __Vtemp317;
    VlWide<5>/*159:0*/ __Vtemp318;
    VlWide<5>/*159:0*/ __Vtemp324;
    VlWide<5>/*159:0*/ __Vtemp325;
    // Body
    vlSelf->__PVT__bar__DOT___T_3 = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_d_ready) 
                                     & ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                         ? (IData)(vlSelf->__PVT__error_auto_in_d_valid)
                                         : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid)));
    vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_d_ready) 
           & (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid));
    vlSelf->__PVT__bar_auto_out_1_d_ready = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_d_ready) 
                                             & (~ (IData)(vlSelf->__PVT__bar__DOT__bypass)));
    vlSelf->__PVT__bar_auto_out_0_d_ready = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_d_ready) 
                                             & (IData)(vlSelf->__PVT__bar__DOT__bypass));
    vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_T_5 
        = ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_1) 
           & (~ ((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode)))
                  ? ((IData)(1U) << (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))
                  : 0U)));
    __Vtemp260[0U] = 0xfU;
    __Vtemp260[1U] = 0U;
    __Vtemp260[2U] = 0U;
    __Vtemp260[3U] = 0U;
    __Vtemp260[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp261, __Vtemp260, 
                  ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_sizes_T_5 
        = (vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes_1 
           & (~ (((QData)((IData)(((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
                                     & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2))) 
                                    & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode)))
                                    ? __Vtemp261[1U]
                                    : 0U))) << 0x20U) 
                 | (QData)((IData)(((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp261[0U]
                                     : 0U))))));
    __Vtemp267[0U] = 0xfU;
    __Vtemp267[1U] = 0U;
    __Vtemp267[2U] = 0U;
    __Vtemp267[3U] = 0U;
    __Vtemp267[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp268, __Vtemp267, 
                  ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    if ((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
          & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
         & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[0U] 
            = __Vtemp268[0U];
        vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[1U] 
            = __Vtemp268[1U];
        vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[2U] 
            = __Vtemp268[2U];
        vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[3U] 
            = __Vtemp268[3U];
        vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[4U] 
            = (0x7fffU & __Vtemp268[4U]);
    } else {
        vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[0U] = 0U;
        vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[1U] = 0U;
        vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[2U] = 0U;
        vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[3U] = 0U;
        vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[4U] = 0U;
    }
    vlSelf->__PVT__error__DOT__latch = ((0U == (IData)(vlSelf->__PVT__error__DOT__beatsLeft)) 
                                        & (IData)(vlSelf->__PVT__bar_auto_out_0_d_ready));
    vlSelf->__PVT__error__DOT___beatsLeft_T_4 = (0x3ffU 
                                                 & ((IData)(vlSelf->__PVT__error__DOT__beatsLeft) 
                                                    - 
                                                    ((IData)(vlSelf->__PVT__bar_auto_out_0_d_ready) 
                                                     & ((0U 
                                                         == (IData)(vlSelf->__PVT__error__DOT__beatsLeft))
                                                         ? (IData)(vlSelf->__PVT__error__DOT__da_valid)
                                                         : (IData)(vlSelf->__PVT__error__DOT___sink_ACancel_earlyValid_T_2)))));
    vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T 
        = ((IData)(vlSelf->__PVT__bar_auto_out_0_d_ready) 
           & (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid));
    vlSelf->__PVT__error__DOT__out_1_ready = ((IData)(vlSelf->__PVT__bar_auto_out_0_d_ready) 
                                              & ((0U 
                                                  == (IData)(vlSelf->__PVT__error__DOT__beatsLeft)) 
                                                 | (IData)(vlSelf->__PVT__error__DOT__state_1)));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_T_5 
        = ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight_1) 
           & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                  ? ((IData)(1U) << (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))
                  : 0U)));
    __Vtemp274[0U] = 0xffU;
    __Vtemp274[1U] = 0U;
    __Vtemp274[2U] = 0U;
    __Vtemp274[3U] = 0U;
    __Vtemp274[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp275, __Vtemp274, 
                  ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = (vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[0U] 
           & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp275[0U] : 0U)));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = (vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[1U] 
           & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp275[1U] : 0U)));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = (vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[2U] 
           & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp275[2U] : 0U)));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = (vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[3U] 
           & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp275[3U] : 0U)));
    vlSelf->__PVT__error__DOT___T = ((IData)(vlSelf->__PVT__error__DOT__out_1_ready) 
                                     & (IData)(vlSelf->__PVT__error__DOT__da_valid));
    vlSelf->__PVT__error__DOT__monitor_io_in_a_ready 
        = (1U & ((((IData)(vlSelf->__PVT__error__DOT__out_1_ready) 
                   & (IData)(vlSelf->__PVT__error__DOT__da_last)) 
                  & (IData)(vlSelf->__PVT__error__DOT__idle)) 
                 | (~ (IData)(vlSelf->__PVT__error__DOT__a_last))));
    vlSelf->__PVT__bar__DOT___bundleIn_0_a_ready_T_1 
        = (1U & ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                  ? ((((IData)(vlSelf->__PVT__error__DOT__out_1_ready) 
                       & (IData)(vlSelf->__PVT__error__DOT__da_last)) 
                      & (IData)(vlSelf->__PVT__error__DOT__idle)) 
                     | (~ (IData)(vlSelf->__PVT__error__DOT__a_last)))
                  : (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full))));
    vlSelf->__PVT__error__DOT___GEN_12 = ((~ ((IData)(vlSelf->__PVT__error__DOT___T) 
                                              & (4U 
                                                 == (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode)))) 
                                          & (IData)(vlSelf->__PVT__error__DOT__idle));
    vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_a_ready) 
           & (IData)(vlSelf->__PVT__bar_auto_out_0_a_valid));
    vlSelf->__PVT__bar__DOT___T = (((~ (IData)(vlSelf->__PVT__bar__DOT__stall)) 
                                    & (IData)(vlSelf->__PVT__bar__DOT___bundleIn_0_a_ready_T_1)) 
                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid));
    vlSelf->__PVT__bar__DOT__monitor_io_in_a_ready 
        = ((~ (IData)(vlSelf->__PVT__bar__DOT__stall)) 
           & (IData)(vlSelf->__PVT__bar__DOT___bundleIn_0_a_ready_T_1));
    vlSelf->__PVT__bar_auto_in_a_ready = ((~ (IData)(vlSelf->__PVT__bar__DOT__stall)) 
                                          & (IData)(vlSelf->__PVT__bar__DOT___bundleIn_0_a_ready_T_1));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_T_2 
        = (0xffffU & (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight) 
                       | (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                           & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                           ? ((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source))
                           : 0U)) & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                                          & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                                         & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                                         ? ((IData)(1U) 
                                            << (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))
                                         : 0U))));
    VL_EXTEND_WI(131,4, __Vtemp284, (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                                      & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                                      ? (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                                               << 1U))
                                      : 0U));
    VL_SHIFTL_WWI(131,131,7, __Vtemp285, __Vtemp284, 
                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                   << 2U));
    __Vtemp291[0U] = 0xfU;
    __Vtemp291[1U] = 0U;
    __Vtemp291[2U] = 0U;
    __Vtemp291[3U] = 0U;
    __Vtemp291[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp292, __Vtemp291, 
                  ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_opcodes_T_2 
        = ((vlSelf->__PVT__error__DOT__monitor__DOT__inflight_opcodes 
            | (((QData)((IData)((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp285[1U] : 0U))) 
                << 0x20U) | (QData)((IData)((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                                              & (0U 
                                                 == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                                              ? __Vtemp285[0U]
                                              : 0U))))) 
           & (~ (((QData)((IData)(((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                                     & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                                    & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                                    ? __Vtemp292[1U]
                                    : 0U))) << 0x20U) 
                 | (QData)((IData)(((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                                     & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp292[0U]
                                     : 0U))))));
    VL_EXTEND_WI(132,5, __Vtemp298, (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                                      & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                                      ? (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                                               << 1U))
                                      : 0U));
    VL_SHIFTL_WWI(132,132,7, __Vtemp299, __Vtemp298, 
                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                   << 3U));
    __Vtemp307[0U] = 0xffU;
    __Vtemp307[1U] = 0U;
    __Vtemp307[2U] = 0U;
    __Vtemp307[3U] = 0U;
    __Vtemp307[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp308, __Vtemp307, 
                  ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[0U] 
            | (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp299[0U] : 0U)) & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                                                & (0U 
                                                   == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                                               ? __Vtemp308[0U]
                                               : 0U)));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[1U] 
            | (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp299[1U] : 0U)) & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                                                & (0U 
                                                   == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                                               ? __Vtemp308[1U]
                                               : 0U)));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[2U] 
            | (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp299[2U] : 0U)) & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                                                & (0U 
                                                   == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                                               ? __Vtemp308[2U]
                                               : 0U)));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[3U] 
            | (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp299[3U] : 0U)) & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                                                & (0U 
                                                   == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                                               ? __Vtemp308[3U]
                                               : 0U)));
    vlSelf->__PVT__bar__DOT__inc = ((((IData)(vlSelf->__PVT__bar__DOT___T) 
                                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__counter))) 
                                     << 1U) | (((IData)(vlSelf->__PVT__bar__DOT___T_3) 
                                                & (0U 
                                                   == (IData)(vlSelf->__PVT__bar__DOT__counter_3))) 
                                               & (IData)(
                                                         (4U 
                                                          == 
                                                          (6U 
                                                           & (IData)(vlSelf->__PVT__bar__DOT__in_d_bits_opcode))))));
    vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_a_ready) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid));
    vlSelf->__PVT__bar__DOT__next_flight = (0x3fU & 
                                            (((IData)(vlSelf->__PVT__bar__DOT__flight) 
                                              + (3U 
                                                 & ((1U 
                                                     & (IData)(vlSelf->__PVT__bar__DOT__inc)) 
                                                    + 
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__bar__DOT__inc) 
                                                        >> 1U))))) 
                                             - (3U 
                                                & (((IData)(vlSelf->__PVT__bar__DOT___T_3) 
                                                    & ((1U 
                                                        == (IData)(vlSelf->__PVT__bar__DOT__counter_3)) 
                                                       | (0U 
                                                          == 
                                                          ((1U 
                                                            & (IData)(vlSelf->__PVT__bar__DOT__in_d_bits_opcode))
                                                            ? 
                                                           (0xfU 
                                                            & (~ 
                                                               (0x7ffU 
                                                                & (((IData)(0x3fU) 
                                                                    << (IData)(vlSelf->__PVT__bar__DOT__in_d_bits_size)) 
                                                                   >> 2U))))
                                                            : 0U)))) 
                                                   + 
                                                   (1U 
                                                    & (((IData)(vlSelf->__PVT__bar__DOT___T_3) 
                                                        & ((1U 
                                                            == (IData)(vlSelf->__PVT__bar__DOT__counter_3)) 
                                                           | (0U 
                                                              == 
                                                              ((1U 
                                                                & (IData)(vlSelf->__PVT__bar__DOT__in_d_bits_opcode))
                                                                ? 
                                                               (0xfU 
                                                                & (~ 
                                                                   (0x7ffU 
                                                                    & (((IData)(0x3fU) 
                                                                        << (IData)(vlSelf->__PVT__bar__DOT__in_d_bits_size)) 
                                                                       >> 2U))))
                                                                : 0U)))) 
                                                       >> 1U))))));
    VL_EXTEND_WI(131,4, __Vtemp317, (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
                                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                      ? (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                                               << 1U))
                                      : 0U));
    VL_SHIFTL_WWI(131,131,7, __Vtemp318, __Vtemp317, 
                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                   << 2U));
    vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_opcodes_T_2 
        = ((vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_opcodes 
            | (((QData)((IData)((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp318[1U] : 0U))) 
                << 0x20U) | (QData)((IData)((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
                                              & (0U 
                                                 == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                              ? __Vtemp318[0U]
                                              : 0U))))) 
           & (~ (((QData)((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[1U])) 
                  << 0x20U) | (QData)((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[0U])))));
    VL_EXTEND_WI(131,4, __Vtemp324, (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
                                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                      ? (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                                               << 1U))
                                      : 0U));
    VL_SHIFTL_WWI(131,131,7, __Vtemp325, __Vtemp324, 
                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                   << 2U));
    vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_sizes_T_2 
        = ((vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes 
            | (((QData)((IData)((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp325[1U] : 0U))) 
                << 0x20U) | (QData)((IData)((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
                                              & (0U 
                                                 == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                              ? __Vtemp325[0U]
                                              : 0U))))) 
           & (~ (((QData)((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[1U])) 
                  << 0x20U) | (QData)((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[0U])))));
    vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_T_2 
        = (0xffffU & (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight) 
                       | (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
                           & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1)))
                           ? ((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source))
                           : 0U)) & (~ ((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
                                          & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                                         & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode)))
                                         ? ((IData)(1U) 
                                            << (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))
                                         : 0U))));
}

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__12(VysyxSoCFull_TLBusBypass* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__12\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp332;
    VlWide<5>/*159:0*/ __Vtemp336;
    VlWide<4>/*127:0*/ __Vtemp339;
    VlWide<4>/*127:0*/ __Vtemp340;
    VlWide<4>/*127:0*/ __Vtemp343;
    VlWide<4>/*127:0*/ __Vtemp344;
    VlWide<5>/*159:0*/ __Vtemp348;
    VlWide<5>/*159:0*/ __Vtemp352;
    VlWide<4>/*127:0*/ __Vtemp355;
    VlWide<4>/*127:0*/ __Vtemp356;
    VlWide<4>/*127:0*/ __Vtemp359;
    VlWide<4>/*127:0*/ __Vtemp360;
    VlWide<5>/*159:0*/ __Vtemp364;
    VlWide<5>/*159:0*/ __Vtemp368;
    VlWide<4>/*127:0*/ __Vtemp371;
    VlWide<4>/*127:0*/ __Vtemp372;
    VlWide<4>/*127:0*/ __Vtemp375;
    VlWide<4>/*127:0*/ __Vtemp376;
    VlWide<5>/*159:0*/ __Vtemp380;
    VlWide<5>/*159:0*/ __Vtemp384;
    VlWide<4>/*127:0*/ __Vtemp387;
    VlWide<4>/*127:0*/ __Vtemp388;
    VlWide<4>/*127:0*/ __Vtemp391;
    VlWide<4>/*127:0*/ __Vtemp392;
    VlWide<5>/*159:0*/ __Vtemp396;
    VlWide<5>/*159:0*/ __Vtemp400;
    VlWide<4>/*127:0*/ __Vtemp403;
    VlWide<4>/*127:0*/ __Vtemp404;
    VlWide<4>/*127:0*/ __Vtemp407;
    VlWide<4>/*127:0*/ __Vtemp408;
    VlWide<5>/*159:0*/ __Vtemp412;
    VlWide<5>/*159:0*/ __Vtemp416;
    VlWide<4>/*127:0*/ __Vtemp419;
    VlWide<4>/*127:0*/ __Vtemp420;
    VlWide<4>/*127:0*/ __Vtemp423;
    VlWide<4>/*127:0*/ __Vtemp424;
    VlWide<5>/*159:0*/ __Vtemp428;
    VlWide<5>/*159:0*/ __Vtemp432;
    VlWide<4>/*127:0*/ __Vtemp435;
    VlWide<4>/*127:0*/ __Vtemp436;
    VlWide<4>/*127:0*/ __Vtemp439;
    VlWide<4>/*127:0*/ __Vtemp440;
    VlWide<5>/*159:0*/ __Vtemp444;
    VlWide<5>/*159:0*/ __Vtemp448;
    VlWide<4>/*127:0*/ __Vtemp451;
    VlWide<4>/*127:0*/ __Vtemp452;
    VlWide<4>/*127:0*/ __Vtemp455;
    VlWide<4>/*127:0*/ __Vtemp456;
    VlWide<4>/*127:0*/ __Vtemp458;
    VlWide<4>/*127:0*/ __Vtemp459;
    VlWide<4>/*127:0*/ __Vtemp462;
    VlWide<4>/*127:0*/ __Vtemp465;
    VlWide<4>/*127:0*/ __Vtemp466;
    VlWide<4>/*127:0*/ __Vtemp469;
    VlWide<4>/*127:0*/ __Vtemp472;
    VlWide<4>/*127:0*/ __Vtemp473;
    VlWide<4>/*127:0*/ __Vtemp476;
    VlWide<4>/*127:0*/ __Vtemp479;
    VlWide<4>/*127:0*/ __Vtemp480;
    VlWide<4>/*127:0*/ __Vtemp483;
    VlWide<4>/*127:0*/ __Vtemp486;
    VlWide<4>/*127:0*/ __Vtemp487;
    VlWide<4>/*127:0*/ __Vtemp492;
    // Body
    if (VL_UNLIKELY((1U & (~ (((IData)(vlSelf->__PVT__error__DOT__idle) 
                               | (0U == (IData)(vlSelf->__PVT__error__DOT__counter))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Error.scala:49 assert (idle || da_first) // we only send Grant, never GrantData => simplified flow control below\n");
    }
    if (VL_UNLIKELY((1U & (~ (((IData)(vlSelf->__PVT__error__DOT__idle) 
                               | (0U == (IData)(vlSelf->__PVT__error__DOT__counter))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15558: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15558, "");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:107 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15582: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15582, "");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:108 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15606: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15606, "");
    }
    VL_EXTEND_WI(129,32, __Vtemp332, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp332[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(129,32, __Vtemp336, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp336[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13522: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13522, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13546: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13546, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13570: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13570, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13594: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13594, "");
    }
    VL_EXTEND_WI(128,32, __Vtemp339, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp340, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp339[0U] 
                                      & __Vtemp340[0U]) 
                                     | (__Vtemp339[1U] 
                                        & __Vtemp340[1U])) 
                                    | (__Vtemp339[2U] 
                                       & __Vtemp340[2U])) 
                                   | (__Vtemp339[3U] 
                                      & __Vtemp340[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(128,32, __Vtemp343, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp344, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp343[0U] 
                                      & __Vtemp344[0U]) 
                                     | (__Vtemp343[1U] 
                                        & __Vtemp344[1U])) 
                                    | (__Vtemp343[2U] 
                                       & __Vtemp344[2U])) 
                                   | (__Vtemp343[3U] 
                                      & __Vtemp344[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13618: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13618, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13642: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13642, "");
    }
    VL_EXTEND_WI(129,32, __Vtemp348, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp348[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(129,32, __Vtemp352, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp352[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13666: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13666, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13690: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13690, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13714: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13714, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13738: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13738, "");
    }
    VL_EXTEND_WI(128,32, __Vtemp355, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp356, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp355[0U] 
                                      & __Vtemp356[0U]) 
                                     | (__Vtemp355[1U] 
                                        & __Vtemp356[1U])) 
                                    | (__Vtemp355[2U] 
                                       & __Vtemp356[2U])) 
                                   | (__Vtemp355[3U] 
                                      & __Vtemp356[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(128,32, __Vtemp359, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp360, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp359[0U] 
                                      & __Vtemp360[0U]) 
                                     | (__Vtemp359[1U] 
                                        & __Vtemp360[1U])) 
                                    | (__Vtemp359[2U] 
                                       & __Vtemp360[2U])) 
                                   | (__Vtemp359[3U] 
                                      & __Vtemp360[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13762: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13762, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13786: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13786, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13810: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13810, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13834: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13834, "");
    }
    VL_EXTEND_WI(129,32, __Vtemp364, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (1U & __Vtemp364[4U])) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(129,32, __Vtemp368, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (1U & __Vtemp368[4U])) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13858: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13858, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13882: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13882, "");
    }
    VL_EXTEND_WI(128,32, __Vtemp371, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp372, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp371[0U] 
                                      & __Vtemp372[0U]) 
                                     | (__Vtemp371[1U] 
                                        & __Vtemp372[1U])) 
                                    | (__Vtemp371[2U] 
                                       & __Vtemp372[2U])) 
                                   | (__Vtemp371[3U] 
                                      & __Vtemp372[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(128,32, __Vtemp375, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp376, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp375[0U] 
                                      & __Vtemp376[0U]) 
                                     | (__Vtemp375[1U] 
                                        & __Vtemp376[1U])) 
                                    | (__Vtemp375[2U] 
                                       & __Vtemp376[2U])) 
                                   | (__Vtemp375[3U] 
                                      & __Vtemp376[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13906: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13906, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13930: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13930, "");
    }
    VL_EXTEND_WI(129,32, __Vtemp380, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp380[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(129,32, __Vtemp384, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp384[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13954: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13954, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13978: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13978, "");
    }
    VL_EXTEND_WI(128,32, __Vtemp387, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp388, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp387[0U] 
                                      & __Vtemp388[0U]) 
                                     | (__Vtemp387[1U] 
                                        & __Vtemp388[1U])) 
                                    | (__Vtemp387[2U] 
                                       & __Vtemp388[2U])) 
                                   | (__Vtemp387[3U] 
                                      & __Vtemp388[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(128,32, __Vtemp391, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp392, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp391[0U] 
                                      & __Vtemp392[0U]) 
                                     | (__Vtemp391[1U] 
                                        & __Vtemp392[1U])) 
                                    | (__Vtemp391[2U] 
                                       & __Vtemp392[2U])) 
                                   | (__Vtemp391[3U] 
                                      & __Vtemp392[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14002: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14002, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14026: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14026, "");
    }
    VL_EXTEND_WI(129,32, __Vtemp396, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp396[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(129,32, __Vtemp400, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp400[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14050: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14050, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14074: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14074, "");
    }
    VL_EXTEND_WI(128,32, __Vtemp403, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp404, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp403[0U] 
                                      & __Vtemp404[0U]) 
                                     | (__Vtemp403[1U] 
                                        & __Vtemp404[1U])) 
                                    | (__Vtemp403[2U] 
                                       & __Vtemp404[2U])) 
                                   | (__Vtemp403[3U] 
                                      & __Vtemp404[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(128,32, __Vtemp407, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp408, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp407[0U] 
                                      & __Vtemp408[0U]) 
                                     | (__Vtemp407[1U] 
                                        & __Vtemp408[1U])) 
                                    | (__Vtemp407[2U] 
                                       & __Vtemp408[2U])) 
                                   | (__Vtemp407[3U] 
                                      & __Vtemp408[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14098: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14098, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14122: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14122, "");
    }
    VL_EXTEND_WI(129,32, __Vtemp412, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & ((4U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0U == (1U & __Vtemp412[4U])))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(129,32, __Vtemp416, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & ((4U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0U == (1U & __Vtemp416[4U])))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14146: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14146, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14170: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14170, "");
    }
    VL_EXTEND_WI(128,32, __Vtemp419, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp420, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp419[0U] 
                                      & __Vtemp420[0U]) 
                                     | (__Vtemp419[1U] 
                                        & __Vtemp420[1U])) 
                                    | (__Vtemp419[2U] 
                                       & __Vtemp420[2U])) 
                                   | (__Vtemp419[3U] 
                                      & __Vtemp420[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(128,32, __Vtemp423, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp424, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp423[0U] 
                                      & __Vtemp424[0U]) 
                                     | (__Vtemp423[1U] 
                                        & __Vtemp424[1U])) 
                                    | (__Vtemp423[2U] 
                                       & __Vtemp424[2U])) 
                                   | (__Vtemp423[3U] 
                                      & __Vtemp424[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14194: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14194, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14218: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14218, "");
    }
    VL_EXTEND_WI(129,32, __Vtemp428, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & ((4U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0U == (1U & __Vtemp428[4U])))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(129,32, __Vtemp432, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & ((4U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0U == (1U & __Vtemp432[4U])))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14242: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14242, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14266: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14266, "");
    }
    VL_EXTEND_WI(128,32, __Vtemp435, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp436, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp435[0U] 
                                      & __Vtemp436[0U]) 
                                     | (__Vtemp435[1U] 
                                        & __Vtemp436[1U])) 
                                    | (__Vtemp435[2U] 
                                       & __Vtemp436[2U])) 
                                   | (__Vtemp435[3U] 
                                      & __Vtemp436[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(128,32, __Vtemp439, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp440, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp439[0U] 
                                      & __Vtemp440[0U]) 
                                     | (__Vtemp439[1U] 
                                        & __Vtemp440[1U])) 
                                    | (__Vtemp439[2U] 
                                       & __Vtemp440[2U])) 
                                   | (__Vtemp439[3U] 
                                      & __Vtemp440[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14290: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14290, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14314: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14314, "");
    }
    VL_EXTEND_WI(129,32, __Vtemp444, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp444[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(129,32, __Vtemp448, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp448[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14338: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14338, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14362: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14362, "");
    }
    VL_EXTEND_WI(128,32, __Vtemp451, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp452, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp451[0U] 
                                      & __Vtemp452[0U]) 
                                     | (__Vtemp451[1U] 
                                        & __Vtemp452[1U])) 
                                    | (__Vtemp451[2U] 
                                       & __Vtemp452[2U])) 
                                   | (__Vtemp451[3U] 
                                      & __Vtemp452[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(128,32, __Vtemp455, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp456, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp455[0U] 
                                      & __Vtemp456[0U]) 
                                     | (__Vtemp455[1U] 
                                        & __Vtemp456[1U])) 
                                    | (__Vtemp455[2U] 
                                       & __Vtemp456[2U])) 
                                   | (__Vtemp455[3U] 
                                      & __Vtemp456[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14386: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14386, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14410: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14410, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14434: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14434, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14458: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14458, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14482: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14482, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14506: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14506, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14530: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14530, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14554: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14554, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14578: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14578, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14602: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14602, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14626: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14626, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14650: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14650, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14674: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14674, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14698: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14698, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14722: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14722, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14746: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14746, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14770: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14770, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14794: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14794, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14818: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14818, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14842: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14842, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14866: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14866, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14890: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14890, "");
    }
    VL_EXTEND_WI(128,32, __Vtemp458, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((0U == ((((__Vtemp458[0U] 
                                      ^ vlSelf->__PVT__error__DOT__monitor__DOT__address[0U]) 
                                     | (__Vtemp458[1U] 
                                        ^ vlSelf->__PVT__error__DOT__monitor__DOT__address[1U])) 
                                    | (__Vtemp458[2U] 
                                       ^ vlSelf->__PVT__error__DOT__monitor__DOT__address[2U])) 
                                   | (__Vtemp458[3U] 
                                      ^ vlSelf->__PVT__error__DOT__monitor__DOT__address[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(128,32, __Vtemp459, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((0U == ((((__Vtemp459[0U] 
                                      ^ vlSelf->__PVT__error__DOT__monitor__DOT__address[0U]) 
                                     | (__Vtemp459[1U] 
                                        ^ vlSelf->__PVT__error__DOT__monitor__DOT__address[1U])) 
                                    | (__Vtemp459[2U] 
                                       ^ vlSelf->__PVT__error__DOT__monitor__DOT__address[2U])) 
                                   | (__Vtemp459[3U] 
                                      ^ vlSelf->__PVT__error__DOT__monitor__DOT__address[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14914: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14914, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14938: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14938, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14962: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14962, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14986: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14986, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_denied) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_denied) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15010: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15010, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight) 
                                          >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight) 
                                          >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15034: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15034, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0xffffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight) 
                                        >> (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))) 
                            | (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                                & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0xffffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight) 
                                        >> (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))) 
                            | (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                                & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15058: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15058, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                           ? 4U : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                           ? 4U : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15082: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15082, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15106: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15106, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlSelf->__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlSelf->__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15130: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15130, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp462, vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    __Vtemp465[0U] = (0x7fU & (__Vtemp462[0U] >> 1U));
    __Vtemp465[1U] = 0U;
    __Vtemp465[2U] = 0U;
    __Vtemp465[3U] = 0U;
    VL_EXTEND_WW(128,127, __Vtemp466, __Vtemp465);
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size) 
                            == (0xffU & __Vtemp466[0U])) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp469, vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    __Vtemp472[0U] = (0x7fU & (__Vtemp469[0U] >> 1U));
    __Vtemp472[1U] = 0U;
    __Vtemp472[2U] = 0U;
    __Vtemp472[3U] = 0U;
    VL_EXTEND_WW(128,127, __Vtemp473, __Vtemp472);
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size) 
                            == (0xffU & __Vtemp473[0U])) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15154: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15154, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSelf->__PVT__bar_auto_out_0_a_valid)) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                          == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))) 
                      & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__bar_auto_out_0_d_ready)) 
                            | (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSelf->__PVT__bar_auto_out_0_a_valid)) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                          == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))) 
                      & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__bar_auto_out_0_d_ready)) 
                            | (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15176: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15176, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight)))) 
                                | (0U == vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->__PVT__error__DOT__monitor__DOT__watchdog 
                                  < vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight)))) 
                                | (0U == vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->__PVT__error__DOT__monitor__DOT__watchdog 
                                  < vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15200: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15200, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0xffffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0xffffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15224: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15224, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp476, vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    __Vtemp479[0U] = (0x7fU & (__Vtemp476[0U] >> 1U));
    __Vtemp479[1U] = 0U;
    __Vtemp479[2U] = 0U;
    __Vtemp479[3U] = 0U;
    VL_EXTEND_WW(128,127, __Vtemp480, __Vtemp479);
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size) 
                            == (0xffU & __Vtemp480[0U])) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp483, vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    __Vtemp486[0U] = (0x7fU & (__Vtemp483[0U] >> 1U));
    __Vtemp486[1U] = 0U;
    __Vtemp486[2U] = 0U;
    __Vtemp486[3U] = 0U;
    VL_EXTEND_WW(128,127, __Vtemp487, __Vtemp486);
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size) 
                            == (0xffU & __Vtemp487[0U])) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15248: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15248, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight_1)))) 
                                | (0U == vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->__PVT__error__DOT__monitor__DOT__watchdog_1 
                                  < vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight_1)))) 
                                | (0U == vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->__PVT__error__DOT__monitor__DOT__watchdog_1 
                                  < vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15272: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15272, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10725: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10725, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10749: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10749, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10773: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10773, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10797: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10797, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10821: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10821, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10845: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10845, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10869: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10869, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10893: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10893, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10917: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10917, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10941: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10941, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10965: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10965, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10989: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10989, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11013: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11013, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11037: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11037, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11061: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11061, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11085: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11085, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11109: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11109, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11133: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11133, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11157: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11157, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11181: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11181, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11205: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11205, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11229: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11229, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11253: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11253, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11277: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11277, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11301: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11301, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11325: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11325, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((3U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((3U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11349: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11349, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11373: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11373, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11397: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11397, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11421: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11421, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((3U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((3U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11445: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11445, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11469: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11469, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11493: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11493, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11517: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11517, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11541: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11541, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11565: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11565, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11589: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11589, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11613: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11613, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11637: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11637, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11661: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11661, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11685: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11685, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11709: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11709, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11733: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11733, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11757: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11757, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11781: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11781, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11805: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11805, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11829: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11829, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11853: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11853, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11877: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11877, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11901: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11901, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11925: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11925, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11949: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11949, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11973: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11973, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11997: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11997, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12021: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12021, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12045: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12045, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12069: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12069, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12093: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12093, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12117: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12117, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12141: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12141, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12165: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12165, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12189: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12189, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12213: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12213, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12237: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12237, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12261: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12261, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12285: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12285, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                            == vlSelf->__PVT__bar__DOT__monitor__DOT__address) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                            == vlSelf->__PVT__bar__DOT__monitor__DOT__address) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12309: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12309, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12333: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12333, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12357: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12357, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12381: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12381, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12405: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12405, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_sink) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_sink) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12429: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12429, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_denied) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_denied) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12453: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12453, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight) 
                                          >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight) 
                                          >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12477: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12477, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0xffffU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight) 
                                        >> (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))) 
                            | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                                & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0xffffU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight) 
                                        >> (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))) 
                            | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                                & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12501: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12501, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                           ? 4U : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                           ? 4U : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12525: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12525, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12549: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12549, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlSelf->__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlSelf->__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12573: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12573, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes 
                                                     >> 
                                                     ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes 
                                                     >> 
                                                     ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12597: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12597, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid)) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                          == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))) 
                      & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_d_ready)) 
                            | (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid)) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                          == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))) 
                      & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_d_ready)) 
                            | (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12619: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12619, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight)))) 
                                | (0U == vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog 
                                  < vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight)))) 
                                | (0U == vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog 
                                  < vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12643: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12643, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0xffffU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0xffffU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12667: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12667, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes_1 
                                                     >> 
                                                     ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes_1 
                                                     >> 
                                                     ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12691: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12691, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_1)))) 
                                | (0U == vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog_1 
                                  < vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_1)))) 
                                | (0U == vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog_1 
                                  < vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12715: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12715, "");
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__flight = 0U;
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_opcodes = 0ULL;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_opcodes = 0ULL;
    } else {
        vlSelf->__PVT__bar__DOT__flight = vlSelf->__PVT__bar__DOT__next_flight;
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_opcodes 
            = vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_opcodes_T_2;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_opcodes 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_opcodes_T_2;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__counter_3 = 0U;
    } else if (vlSelf->__PVT__bar__DOT___T_3) {
        vlSelf->__PVT__bar__DOT__counter_3 = (0xfU 
                                              & ((IData)(vlSelf->__PVT__bar__DOT__d_first)
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->__PVT__bar__DOT__in_d_bits_opcode))
                                                   ? 
                                                  (~ 
                                                   (0x7ffU 
                                                    & (((IData)(0x3fU) 
                                                        << (IData)(vlSelf->__PVT__bar__DOT__in_d_bits_size)) 
                                                       >> 2U)))
                                                   : 0U)
                                                  : (IData)(vlSelf->__PVT__bar__DOT__counter1_3)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__error__DOT__state_1 = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__error__DOT__beatsLeft))) {
        vlSelf->__PVT__error__DOT__state_1 = vlSelf->__PVT__error__DOT__da_valid;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__counter = 0U;
    } else if (vlSelf->__PVT__bar__DOT___T) {
        vlSelf->__PVT__bar__DOT__counter = (0xfU & 
                                            ((IData)(vlSelf->__PVT__bar__DOT__a_first)
                                              ? ((4U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                                  ? 0U
                                                  : 
                                                 (~ 
                                                  (0x7ffU 
                                                   & (((IData)(0x3fU) 
                                                       << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                      >> 2U))))
                                              : (IData)(vlSelf->__PVT__bar__DOT__counter1)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__stall_counter = 0U;
    } else if (vlSelf->__PVT__bar__DOT___T) {
        vlSelf->__PVT__bar__DOT__stall_counter = (0xfU 
                                                  & ((IData)(vlSelf->__PVT__bar__DOT__stall_first)
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                                       ? 0U
                                                       : 
                                                      (~ 
                                                       (0x7ffU 
                                                        & (((IData)(0x3fU) 
                                                            << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                           >> 2U))))
                                                      : (IData)(vlSelf->__PVT__bar__DOT__stall_counter1)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__error__DOT__a_last_counter = 0U;
    } else if ((((((IData)(vlSelf->__PVT__error__DOT__out_1_ready) 
                   & (IData)(vlSelf->__PVT__error__DOT__da_last)) 
                  & (IData)(vlSelf->__PVT__error__DOT__idle)) 
                 | (~ (IData)(vlSelf->__PVT__error__DOT__a_last))) 
                & (IData)(vlSelf->__PVT__bar_auto_out_0_a_valid))) {
        vlSelf->__PVT__error__DOT__a_last_counter = 
            (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__a_last_first)
                        ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                            ? 0U : (~ (0x1ffffffU & 
                                       (((IData)(0xfffU) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                        >> 2U)))) : (IData)(vlSelf->__PVT__error__DOT__a_last_counter1)));
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__in_reset) 
         | (0U == (IData)(vlSelf->__PVT__bar__DOT__next_flight)))) {
        vlSelf->__PVT__bar__DOT__bypass_reg = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass_io_bypass;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__error__DOT__counter = 0U;
    } else if (vlSelf->__PVT__error__DOT___T) {
        vlSelf->__PVT__error__DOT__counter = (0x3ffU 
                                              & ((IData)(vlSelf->__PVT__error__DOT__da_first)
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))
                                                   ? 
                                                  (~ 
                                                   (0x1ffffffU 
                                                    & (((IData)(0xfffU) 
                                                        << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                       >> 2U)))
                                                   : 0U)
                                                  : (IData)(vlSelf->__PVT__error__DOT__counter1)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_1 = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[0U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[1U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[2U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[3U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[0U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[1U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[2U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[3U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__watchdog_1 = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__watchdog = 0U;
    } else {
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_1 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_T_5;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_5[0U];
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_5[1U];
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_5[2U];
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_5[3U];
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_T_2;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[0U] 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_2[0U];
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[1U] 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_2[1U];
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[2U] 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_2[2U];
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[3U] 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_2[3U];
        vlSelf->__PVT__error__DOT__monitor__DOT__watchdog_1 
            = ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T)
                ? 0U : vlSelf->__PVT__error__DOT__monitor__DOT___watchdog_T_3);
        vlSelf->__PVT__error__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                | (IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T))
                ? 0U : vlSelf->__PVT__error__DOT__monitor__DOT___watchdog_T_1);
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else if (vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2 
            = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_2)
                          ? ((1U & (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))
                              ? (~ (0x1ffffffU & (((IData)(0xfffU) 
                                                   << (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                                                  >> 2U)))
                              : 0U) : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter1_2)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else if (vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1 
            = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))
                              ? (~ (0x1ffffffU & (((IData)(0xfffU) 
                                                   << (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                                                  >> 2U)))
                              : 0U) : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter1_1)));
    }
    if (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__error__DOT__monitor__DOT__denied 
            = vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_denied;
    }
    if (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__error__DOT__monitor__DOT__size_1 
            = vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size;
    }
    if (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__error__DOT__monitor__DOT__opcode_1 
            = vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode;
    }
    if (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__error__DOT__monitor__DOT__source_1 
            = vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else if (vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) {
        vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1 
            = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_1)
                          ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                              ? 0U : (~ (0x1ffffffU 
                                         & (((IData)(0xfffU) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                            >> 2U))))
                          : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter1_1)));
    }
    if (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__error__DOT__monitor__DOT__size 
            = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size;
    }
    if (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__error__DOT__monitor__DOT__opcode 
            = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode;
    }
    if (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__error__DOT__monitor__DOT__source 
            = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source;
    }
    if (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter)))) {
        VL_EXTEND_WI(128,32, __Vtemp492, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
        vlSelf->__PVT__error__DOT__monitor__DOT__address[0U] 
            = __Vtemp492[0U];
        vlSelf->__PVT__error__DOT__monitor__DOT__address[1U] 
            = __Vtemp492[1U];
        vlSelf->__PVT__error__DOT__monitor__DOT__address[2U] 
            = __Vtemp492[2U];
        vlSelf->__PVT__error__DOT__monitor__DOT__address[3U] 
            = __Vtemp492[3U];
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_1 = 0U;
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes_1 = 0ULL;
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes = 0ULL;
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight = 0U;
        vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog_1 = 0U;
        vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog = 0U;
    } else {
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_1 
            = vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_T_5;
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes_1 
            = vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_sizes_T_5;
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes 
            = vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_sizes_T_2;
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight 
            = vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_T_2;
        vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog_1 
            = ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T)
                ? 0U : vlSelf->__PVT__bar__DOT__monitor__DOT___watchdog_T_3);
        vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
                | (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T))
                ? 0U : vlSelf->__PVT__bar__DOT__monitor__DOT___watchdog_T_1);
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else if (vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2 
            = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_2)
                        ? ((1U & (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter1_2)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else if (vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1 
            = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_1)
                        ? ((1U & (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter1_1)));
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__param_1 
            = vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param;
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__sink 
            = vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_sink;
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__denied 
            = vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_denied;
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__size_1 
            = vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size;
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__opcode_1 
            = vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode;
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__source_1 
            = vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else if (vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1 
            = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_1)
                        ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                            ? 0U : (~ (0x7ffU & (((IData)(0x3fU) 
                                                  << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                 >> 2U))))
                        : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter1_1)));
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__size 
            = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size;
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__opcode 
            = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode;
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__source 
            = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source;
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__address 
            = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address;
    }
    vlSelf->__PVT__bar__DOT__counter1_3 = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__counter_3) 
                                                   - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__d_first = (0U == (IData)(vlSelf->__PVT__bar__DOT__counter_3));
    vlSelf->__PVT__error__DOT__beatsLeft = ((IData)(vlSymsp->TOP.reset)
                                             ? 0U : 
                                            (0x3ffU 
                                             & ((IData)(vlSelf->__PVT__error__DOT__latch)
                                                 ? 
                                                ((IData)(vlSelf->__PVT__error__DOT__da_valid)
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))
                                                   ? 
                                                  (~ 
                                                   (0x1ffffffU 
                                                    & (((IData)(0xfffU) 
                                                        << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                       >> 2U)))
                                                   : 0U)
                                                  : 0U)
                                                 : (IData)(vlSelf->__PVT__error__DOT___beatsLeft_T_4))));
    vlSelf->__PVT__bar__DOT__counter1 = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__counter) 
                                                 - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__a_first = (0U == (IData)(vlSelf->__PVT__bar__DOT__counter));
    vlSelf->__PVT__bar__DOT__stall_first = (0U == (IData)(vlSelf->__PVT__bar__DOT__stall_counter));
    vlSelf->__PVT__bar__DOT__stall_counter1 = (0xfU 
                                               & ((IData)(vlSelf->__PVT__bar__DOT__stall_counter) 
                                                  - (IData)(1U)));
    vlSelf->__PVT__error__DOT__a_last_counter1 = (0x3ffU 
                                                  & ((IData)(vlSelf->__PVT__error__DOT__a_last_counter) 
                                                     - (IData)(1U)));
    vlSelf->__PVT__error__DOT__a_last_first = (0U == (IData)(vlSelf->__PVT__error__DOT__a_last_counter));
    vlSelf->__PVT__error__DOT__idle = ((IData)(vlSymsp->TOP.reset) 
                                       | (IData)(vlSelf->__PVT__error__DOT___GEN_12));
    vlSelf->__PVT__bar__DOT__in_reset = vlSymsp->TOP.reset;
    vlSelf->__PVT__error__DOT__counter1 = (0x3ffU & 
                                           ((IData)(vlSelf->__PVT__error__DOT__counter) 
                                            - (IData)(1U)));
    vlSelf->__PVT__error__DOT__da_first = (0U == (IData)(vlSelf->__PVT__error__DOT__counter));
    vlSelf->__PVT__error__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlSelf->__PVT__error__DOT__monitor__DOT__watchdog_1);
    vlSelf->__PVT__error__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->__PVT__error__DOT__monitor__DOT__watchdog);
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter1_2 
        = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2) 
                     - (IData)(1U)));
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter1_1 
        = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1) 
                     - (IData)(1U)));
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter 
            = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first)
                          ? ((1U & (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))
                              ? (~ (0x1ffffffU & (((IData)(0xfffU) 
                                                   << (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                                                  >> 2U)))
                              : 0U) : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter1)));
    }
    vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter1_1 
        = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1) 
                     - (IData)(1U)));
    vlSelf->__PVT__error__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) {
        vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter 
            = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first)
                          ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                              ? 0U : (~ (0x1ffffffU 
                                         & (((IData)(0xfffU) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                            >> 2U))))
                          : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter1)));
    }
    vlSelf->__PVT__bar__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog_1);
    vlSelf->__PVT__bar__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog);
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter1_2 
        = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2) 
                   - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter1_1 
        = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1) 
                   - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter 
            = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first)
                        ? ((1U & (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter1)));
    }
    vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter1_1 
        = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1) 
                   - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter 
            = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first)
                        ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                            ? 0U : (~ (0x7ffU & (((IData)(0x3fU) 
                                                  << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                 >> 2U))))
                        : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter1)));
    }
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter1 
        = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter) 
                     - (IData)(1U)));
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter));
    vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter1 
        = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter) 
                     - (IData)(1U)));
    vlSelf->__PVT__error__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter));
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter1 
        = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter) 
                   - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter));
    vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter1 
        = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter) 
                   - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter));
}
