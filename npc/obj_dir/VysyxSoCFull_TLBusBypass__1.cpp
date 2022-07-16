// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull_TLBusBypass.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__13(VysyxSoCFull_TLBusBypass* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__13\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp493;
    VlWide<4>/*127:0*/ __Vtemp494;
    VlWide<4>/*127:0*/ __Vtemp495;
    VlWide<4>/*127:0*/ __Vtemp496;
    VlWide<4>/*127:0*/ __Vtemp497;
    VlWide<4>/*127:0*/ __Vtemp498;
    VlWide<4>/*127:0*/ __Vtemp499;
    VlWide<4>/*127:0*/ __Vtemp500;
    VlWide<4>/*127:0*/ __Vtemp501;
    VlWide<4>/*127:0*/ __Vtemp502;
    // Body
    vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok = 1U;
    vlSelf->__PVT__error__DOT__monitor__DOT__source_ok = 1U;
    vlSelf->__PVT__bar__DOT__monitor__DOT___T_88 = 
        ((0ULL == (0x1c0000000ULL & (QData)((IData)(
                                                    (0x40000000U 
                                                     ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))) 
         | (0ULL == (0x180000000ULL & (QData)((IData)(
                                                      (0x80000000U 
                                                       ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))));
    vlSelf->__PVT__bar__DOT__monitor__DOT__mask_acc 
        = (1U & ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))) 
                           >> 1U) & (~ (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                        >> 1U))))));
    vlSelf->__PVT__bar__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))) 
                           >> 1U) & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                     >> 1U)))));
    VL_EXTEND_WI(128,32, __Vtemp493, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    vlSelf->__PVT__error__DOT__monitor__DOT__mask_acc 
        = (1U & ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))) 
                           >> 1U) & (~ (__Vtemp493[0U] 
                                        >> 1U))))));
    VL_EXTEND_WI(128,32, __Vtemp494, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    vlSelf->__PVT__error__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))) 
                           >> 1U) & (__Vtemp494[0U] 
                                     >> 1U)))));
    if ((5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_30 = 2U;
        vlSelf->__PVT__error__DOT__monitor__DOT___GEN_30 = 2U;
    } else {
        vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_30 
            = ((4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                ? 1U : ((3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                         ? 1U : ((2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                  ? 1U : 0U)));
        vlSelf->__PVT__error__DOT__monitor__DOT___GEN_30 
            = ((4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                ? 1U : ((3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                         ? 1U : ((2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                  ? 1U : 0U)));
    }
    vlSelf->__PVT__error__DOT__da_bits_opcode = ((7U 
                                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                                  ? 4U
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                                   ? 4U
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                                    ? 2U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                                     ? 1U
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                                      ? 1U
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                                       ? 1U
                                                       : 0U))))));
    vlSelf->__PVT__error__DOT__a_last = ((1U == (IData)(vlSelf->__PVT__error__DOT__a_last_counter)) 
                                         | (0U == (
                                                   (4U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                                    ? 0U
                                                    : 
                                                   (0x3ffU 
                                                    & (~ 
                                                       (0x1ffffffU 
                                                        & (((IData)(0xfffU) 
                                                            << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                           >> 2U)))))));
    vlSelf->__PVT__bar__DOT__monitor__DOT__mask = (
                                                   (8U 
                                                    & (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask_acc_1) 
                                                        << 3U) 
                                                       | (0xfffffff8U 
                                                          & ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                                              << 2U) 
                                                             & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                                                << 3U))))) 
                                                   | ((4U 
                                                       & (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask_acc_1) 
                                                           | (IData)(
                                                                     (2U 
                                                                      == 
                                                                      (3U 
                                                                       & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask_acc) 
                                                              | (IData)(
                                                                        (1U 
                                                                         == 
                                                                         (3U 
                                                                          & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask_acc) 
                                                               | (IData)(
                                                                         (0U 
                                                                          == 
                                                                          (3U 
                                                                           & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))));
    VL_EXTEND_WI(128,32, __Vtemp495, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp496, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp497, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp498, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp499, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp500, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp501, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp502, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    vlSelf->__PVT__error__DOT__monitor__DOT__mask = 
        ((8U & (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask_acc_1) 
                 << 3U) | (0xfffffff8U & ((__Vtemp495[0U] 
                                           << 2U) & 
                                          (__Vtemp496[0U] 
                                           << 3U))))) 
         | ((4U & (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask_acc_1) 
                    << 2U) | (0xfffffffcU & ((__Vtemp497[0U] 
                                              << 1U) 
                                             & ((~ 
                                                 __Vtemp498[0U]) 
                                                << 2U))))) 
            | ((2U & (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask_acc) 
                       | ((~ (__Vtemp499[0U] >> 1U)) 
                          & __Vtemp500[0U])) << 1U)) 
               | (1U & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask_acc) 
                        | ((~ (__Vtemp501[0U] >> 1U)) 
                           & (~ __Vtemp502[0U])))))));
    vlSelf->__PVT__error__DOT__da_last = ((1U == (IData)(vlSelf->__PVT__error__DOT__counter)) 
                                          | (0U == 
                                             ((1U & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))
                                               ? (0x3ffU 
                                                  & (~ 
                                                     (0x1ffffffU 
                                                      & (((IData)(0xfffU) 
                                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                         >> 2U))))
                                               : 0U)));
}

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__16(VysyxSoCFull_TLBusBypass* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__16\n"); );
    // Body
    vlSelf->__PVT__bar__DOT__bypass = ((IData)(vlSelf->__PVT__bar__DOT__in_reset)
                                        ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass_io_bypass)
                                        : (IData)(vlSelf->__PVT__bar__DOT__bypass_reg));
    vlSelf->__PVT__bar__DOT__stall = (((IData)(vlSelf->__PVT__bar__DOT__bypass) 
                                       != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass_io_bypass)) 
                                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__stall_counter)));
    if (vlSelf->__PVT__bar__DOT__bypass) {
        vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param = 0U;
        vlSelf->__PVT__bar_auto_in_d_bits_param = 0U;
        vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_sink = 0U;
    } else {
        vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param 
            = (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_2));
        vlSelf->__PVT__bar_auto_in_d_bits_param = (3U 
                                                   & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_2));
        vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_sink 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_sink;
    }
    vlSelf->__PVT__bar_auto_out_1_a_valid = (((~ (IData)(vlSelf->__PVT__bar__DOT__stall)) 
                                              & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid)) 
                                             & (~ (IData)(vlSelf->__PVT__bar__DOT__bypass)));
    vlSelf->__PVT__bar_auto_out_0_a_valid = (((~ (IData)(vlSelf->__PVT__bar__DOT__stall)) 
                                              & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid)) 
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
            = (1U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                     >> 2U));
        vlSelf->__PVT__bar_auto_in_d_bits_denied = 
            (1U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                   >> 2U));
    }
    if (vlSelf->__PVT__error__DOT__muxStateEarly_1) {
        vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size 
            = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size;
        vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode 
            = vlSelf->__PVT__error__DOT__da_bits_opcode;
        vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source 
            = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source;
        vlSelf->__PVT__error_auto_in_d_bits_corrupt 
            = ((IData)(vlSelf->__PVT__error__DOT__da_bits_opcode) 
               & 1U);
        vlSelf->__PVT__error_auto_in_d_bits_source 
            = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source;
        vlSelf->__PVT__error_auto_in_d_bits_size = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size;
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
        vlSelf->__PVT__bar_auto_in_d_bits_corrupt = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt;
        vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source;
        vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size 
            = (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_3));
        vlSelf->__PVT__bar__DOT__in_d_bits_size = (7U 
                                                   & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_3));
        vlSelf->__PVT__bar_auto_in_d_bits_size = (7U 
                                                  & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_3));
        vlSelf->__PVT__bar__DOT__in_d_bits_opcode = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode;
        vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode;
        vlSelf->__PVT__bar_auto_in_d_bits_opcode = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode;
        vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid;
        vlSelf->__PVT__bar_auto_in_d_valid = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid;
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
