// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull_TLBusBypass.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__6(VysyxSoCFull_TLBusBypass* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__6\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp422;
    VlWide<4>/*127:0*/ __Vtemp423;
    VlWide<4>/*127:0*/ __Vtemp424;
    VlWide<4>/*127:0*/ __Vtemp425;
    VlWide<4>/*127:0*/ __Vtemp426;
    VlWide<4>/*127:0*/ __Vtemp427;
    VlWide<4>/*127:0*/ __Vtemp428;
    VlWide<4>/*127:0*/ __Vtemp429;
    VlWide<4>/*127:0*/ __Vtemp430;
    VlWide<4>/*127:0*/ __Vtemp431;
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
    VL_EXTEND_WI(128,32, __Vtemp422, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    vlSelf->__PVT__error__DOT__monitor__DOT__mask_acc 
        = (1U & ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))) 
                           >> 1U) & (~ (__Vtemp422[0U] 
                                        >> 1U))))));
    VL_EXTEND_WI(128,32, __Vtemp423, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    vlSelf->__PVT__error__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))) 
                           >> 1U) & (__Vtemp423[0U] 
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
    VL_EXTEND_WI(128,32, __Vtemp424, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp425, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp426, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp427, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp428, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp429, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp430, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp431, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    vlSelf->__PVT__error__DOT__monitor__DOT__mask = 
        ((8U & (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask_acc_1) 
                 << 3U) | (0xfffffff8U & ((__Vtemp424[0U] 
                                           << 2U) & 
                                          (__Vtemp425[0U] 
                                           << 3U))))) 
         | ((4U & (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask_acc_1) 
                    << 2U) | (0xfffffffcU & ((__Vtemp426[0U] 
                                              << 1U) 
                                             & ((~ 
                                                 __Vtemp427[0U]) 
                                                << 2U))))) 
            | ((2U & (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask_acc) 
                       | ((~ (__Vtemp428[0U] >> 1U)) 
                          & __Vtemp429[0U])) << 1U)) 
               | (1U & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask_acc) 
                        | ((~ (__Vtemp430[0U] >> 1U)) 
                           & (~ __Vtemp431[0U])))))));
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

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__13(VysyxSoCFull_TLBusBypass* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__13\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp443;
    VlWide<5>/*159:0*/ __Vtemp444;
    VlWide<5>/*159:0*/ __Vtemp450;
    VlWide<5>/*159:0*/ __Vtemp451;
    VlWide<5>/*159:0*/ __Vtemp457;
    VlWide<5>/*159:0*/ __Vtemp458;
    VlWide<5>/*159:0*/ __Vtemp467;
    VlWide<5>/*159:0*/ __Vtemp468;
    VlWide<5>/*159:0*/ __Vtemp474;
    VlWide<5>/*159:0*/ __Vtemp475;
    VlWide<5>/*159:0*/ __Vtemp481;
    VlWide<5>/*159:0*/ __Vtemp482;
    VlWide<5>/*159:0*/ __Vtemp490;
    VlWide<5>/*159:0*/ __Vtemp491;
    VlWide<5>/*159:0*/ __Vtemp500;
    VlWide<5>/*159:0*/ __Vtemp501;
    VlWide<5>/*159:0*/ __Vtemp507;
    VlWide<5>/*159:0*/ __Vtemp508;
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
    __Vtemp443[0U] = 0xfU;
    __Vtemp443[1U] = 0U;
    __Vtemp443[2U] = 0U;
    __Vtemp443[3U] = 0U;
    __Vtemp443[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp444, __Vtemp443, 
                  ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_sizes_T_5 
        = (vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes_1 
           & (~ (((QData)((IData)(((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
                                     & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2))) 
                                    & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode)))
                                    ? __Vtemp444[1U]
                                    : 0U))) << 0x20U) 
                 | (QData)((IData)(((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp444[0U]
                                     : 0U))))));
    __Vtemp450[0U] = 0xfU;
    __Vtemp450[1U] = 0U;
    __Vtemp450[2U] = 0U;
    __Vtemp450[3U] = 0U;
    __Vtemp450[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp451, __Vtemp450, 
                  ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    if ((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
          & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
         & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[0U] 
            = __Vtemp451[0U];
        vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[1U] 
            = __Vtemp451[1U];
        vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[2U] 
            = __Vtemp451[2U];
        vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[3U] 
            = __Vtemp451[3U];
        vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[4U] 
            = (0x7fffU & __Vtemp451[4U]);
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
    __Vtemp457[0U] = 0xffU;
    __Vtemp457[1U] = 0U;
    __Vtemp457[2U] = 0U;
    __Vtemp457[3U] = 0U;
    __Vtemp457[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp458, __Vtemp457, 
                  ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = (vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[0U] 
           & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp458[0U] : 0U)));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = (vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[1U] 
           & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp458[1U] : 0U)));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = (vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[2U] 
           & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp458[2U] : 0U)));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = (vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[3U] 
           & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp458[3U] : 0U)));
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
    VL_EXTEND_WI(131,4, __Vtemp467, (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                                      & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                                      ? (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                                               << 1U))
                                      : 0U));
    VL_SHIFTL_WWI(131,131,7, __Vtemp468, __Vtemp467, 
                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                   << 2U));
    __Vtemp474[0U] = 0xfU;
    __Vtemp474[1U] = 0U;
    __Vtemp474[2U] = 0U;
    __Vtemp474[3U] = 0U;
    __Vtemp474[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp475, __Vtemp474, 
                  ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_opcodes_T_2 
        = ((vlSelf->__PVT__error__DOT__monitor__DOT__inflight_opcodes 
            | (((QData)((IData)((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp468[1U] : 0U))) 
                << 0x20U) | (QData)((IData)((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                                              & (0U 
                                                 == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                                              ? __Vtemp468[0U]
                                              : 0U))))) 
           & (~ (((QData)((IData)(((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                                     & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                                    & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                                    ? __Vtemp475[1U]
                                    : 0U))) << 0x20U) 
                 | (QData)((IData)(((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                                     & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp475[0U]
                                     : 0U))))));
    VL_EXTEND_WI(132,5, __Vtemp481, (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                                      & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                                      ? (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                                               << 1U))
                                      : 0U));
    VL_SHIFTL_WWI(132,132,7, __Vtemp482, __Vtemp481, 
                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                   << 3U));
    __Vtemp490[0U] = 0xffU;
    __Vtemp490[1U] = 0U;
    __Vtemp490[2U] = 0U;
    __Vtemp490[3U] = 0U;
    __Vtemp490[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp491, __Vtemp490, 
                  ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[0U] 
            | (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp482[0U] : 0U)) & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                                                & (0U 
                                                   == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                                               ? __Vtemp491[0U]
                                               : 0U)));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[1U] 
            | (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp482[1U] : 0U)) & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                                                & (0U 
                                                   == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                                               ? __Vtemp491[1U]
                                               : 0U)));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[2U] 
            | (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp482[2U] : 0U)) & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                                                & (0U 
                                                   == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                                               ? __Vtemp491[2U]
                                               : 0U)));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[3U] 
            | (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp482[3U] : 0U)) & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                                                & (0U 
                                                   == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                                               ? __Vtemp491[3U]
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
    VL_EXTEND_WI(131,4, __Vtemp500, (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
                                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                      ? (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                                               << 1U))
                                      : 0U));
    VL_SHIFTL_WWI(131,131,7, __Vtemp501, __Vtemp500, 
                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                   << 2U));
    vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_opcodes_T_2 
        = ((vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_opcodes 
            | (((QData)((IData)((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp501[1U] : 0U))) 
                << 0x20U) | (QData)((IData)((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
                                              & (0U 
                                                 == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                              ? __Vtemp501[0U]
                                              : 0U))))) 
           & (~ (((QData)((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[1U])) 
                  << 0x20U) | (QData)((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[0U])))));
    VL_EXTEND_WI(131,4, __Vtemp507, (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
                                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                      ? (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                                               << 1U))
                                      : 0U));
    VL_SHIFTL_WWI(131,131,7, __Vtemp508, __Vtemp507, 
                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                   << 2U));
    vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_sizes_T_2 
        = ((vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes 
            | (((QData)((IData)((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp508[1U] : 0U))) 
                << 0x20U) | (QData)((IData)((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
                                              & (0U 
                                                 == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                              ? __Vtemp508[0U]
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

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__17(VysyxSoCFull_TLBusBypass* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__17\n"); );
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
