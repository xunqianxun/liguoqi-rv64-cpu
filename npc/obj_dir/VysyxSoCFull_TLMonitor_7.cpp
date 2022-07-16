// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull_TLMonitor_7.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void VysyxSoCFull_TLMonitor_7___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__5(VysyxSoCFull_TLMonitor_7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLMonitor_7___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__5\n"); );
    // Body
    vlSelf->__PVT__a_set_wo_ready = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                                      & (0U == (IData)(vlSelf->__PVT__a_first_counter_1)))
                                      ? (0xffffU & 
                                         ((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)))
                                      : 0U);
    vlSelf->__PVT___a_first_T = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full)) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid));
}

VL_INLINE_OPT void VysyxSoCFull_TLMonitor_7___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__8(VysyxSoCFull_TLMonitor_7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLMonitor_7___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__8\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp4;
    VlWide<5>/*159:0*/ __Vtemp5;
    VlWide<5>/*159:0*/ __Vtemp11;
    VlWide<5>/*159:0*/ __Vtemp12;
    VlWide<5>/*159:0*/ __Vtemp18;
    VlWide<5>/*159:0*/ __Vtemp19;
    VlWide<5>/*159:0*/ __Vtemp25;
    VlWide<5>/*159:0*/ __Vtemp26;
    // Body
    vlSelf->__PVT___d_first_T = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_d_ready) 
                                 & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid));
    vlSelf->__PVT___inflight_T_5 = ((IData)(vlSelf->__PVT__inflight_1) 
                                    & (~ ((((IData)(vlSelf->__PVT___d_first_T) 
                                            & (0U == (IData)(vlSelf->__PVT__d_first_counter_2))) 
                                           & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode)))
                                           ? ((IData)(1U) 
                                              << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source))
                                           : 0U)));
    __Vtemp4[0U] = 0xfU;
    __Vtemp4[1U] = 0U;
    __Vtemp4[2U] = 0U;
    __Vtemp4[3U] = 0U;
    __Vtemp4[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp5, __Vtemp4, ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source) 
                                                  << 2U));
    vlSelf->__PVT___inflight_sizes_T_5 = (vlSelf->__PVT__inflight_sizes_1 
                                          & (~ (((QData)((IData)(
                                                                 ((((IData)(vlSelf->__PVT___d_first_T) 
                                                                    & (0U 
                                                                       == (IData)(vlSelf->__PVT__d_first_counter_2))) 
                                                                   & (6U 
                                                                      == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode)))
                                                                   ? 
                                                                  __Vtemp5[1U]
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((((IData)(vlSelf->__PVT___d_first_T) 
                                                                     & (0U 
                                                                        == (IData)(vlSelf->__PVT__d_first_counter_2))) 
                                                                    & (6U 
                                                                       == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode)))
                                                                    ? 
                                                                   __Vtemp5[0U]
                                                                    : 0U))))));
    vlSelf->__PVT___inflight_T_2 = (0xffffU & (((IData)(vlSelf->__PVT__inflight) 
                                                | (((IData)(vlSelf->__PVT___a_first_T) 
                                                    & (0U 
                                                       == (IData)(vlSelf->__PVT__a_first_counter_1)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source))
                                                    : 0U)) 
                                               & (~ 
                                                  ((((IData)(vlSelf->__PVT___d_first_T) 
                                                     & (0U 
                                                        == (IData)(vlSelf->__PVT__d_first_counter_1))) 
                                                    & (6U 
                                                       != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source))
                                                    : 0U))));
    __Vtemp11[0U] = 0xfU;
    __Vtemp11[1U] = 0U;
    __Vtemp11[2U] = 0U;
    __Vtemp11[3U] = 0U;
    __Vtemp11[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp12, __Vtemp11, 
                  ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source) 
                   << 2U));
    if ((((IData)(vlSelf->__PVT___d_first_T) & (0U 
                                                == (IData)(vlSelf->__PVT__d_first_counter_1))) 
         & (6U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode)))) {
        vlSelf->__PVT___GEN_23[0U] = __Vtemp12[0U];
        vlSelf->__PVT___GEN_23[1U] = __Vtemp12[1U];
        vlSelf->__PVT___GEN_23[2U] = __Vtemp12[2U];
        vlSelf->__PVT___GEN_23[3U] = __Vtemp12[3U];
        vlSelf->__PVT___GEN_23[4U] = (0x7fffU & __Vtemp12[4U]);
    } else {
        vlSelf->__PVT___GEN_23[0U] = 0U;
        vlSelf->__PVT___GEN_23[1U] = 0U;
        vlSelf->__PVT___GEN_23[2U] = 0U;
        vlSelf->__PVT___GEN_23[3U] = 0U;
        vlSelf->__PVT___GEN_23[4U] = 0U;
    }
    VL_EXTEND_WI(131,4, __Vtemp18, (((IData)(vlSelf->__PVT___a_first_T) 
                                     & (0U == (IData)(vlSelf->__PVT__a_first_counter_1)))
                                     ? (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                                              << 1U))
                                     : 0U));
    VL_SHIFTL_WWI(131,131,7, __Vtemp19, __Vtemp18, 
                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                   << 2U));
    vlSelf->__PVT___inflight_opcodes_T_2 = ((vlSelf->__PVT__inflight_opcodes 
                                             | (((QData)((IData)(
                                                                 (((IData)(vlSelf->__PVT___a_first_T) 
                                                                   & (0U 
                                                                      == (IData)(vlSelf->__PVT__a_first_counter_1)))
                                                                   ? 
                                                                  __Vtemp19[1U]
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlSelf->__PVT___a_first_T) 
                                                                    & (0U 
                                                                       == (IData)(vlSelf->__PVT__a_first_counter_1)))
                                                                    ? 
                                                                   __Vtemp19[0U]
                                                                    : 0U))))) 
                                            & (~ (((QData)((IData)(
                                                                   vlSelf->__PVT___GEN_23[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->__PVT___GEN_23[0U])))));
    VL_EXTEND_WI(131,4, __Vtemp25, (((IData)(vlSelf->__PVT___a_first_T) 
                                     & (0U == (IData)(vlSelf->__PVT__a_first_counter_1)))
                                     ? (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                                              << 1U))
                                     : 0U));
    VL_SHIFTL_WWI(131,131,7, __Vtemp26, __Vtemp25, 
                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                   << 2U));
    vlSelf->__PVT___inflight_sizes_T_2 = ((vlSelf->__PVT__inflight_sizes 
                                           | (((QData)((IData)(
                                                               (((IData)(vlSelf->__PVT___a_first_T) 
                                                                 & (0U 
                                                                    == (IData)(vlSelf->__PVT__a_first_counter_1)))
                                                                 ? 
                                                                __Vtemp26[1U]
                                                                 : 0U))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelf->__PVT___a_first_T) 
                                                                  & (0U 
                                                                     == (IData)(vlSelf->__PVT__a_first_counter_1)))
                                                                  ? 
                                                                 __Vtemp26[0U]
                                                                  : 0U))))) 
                                          & (~ (((QData)((IData)(
                                                                 vlSelf->__PVT___GEN_23[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->__PVT___GEN_23[0U])))));
}

VL_INLINE_OPT void VysyxSoCFull_TLMonitor_7___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__9(VysyxSoCFull_TLMonitor_7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLMonitor_7___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__9\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__source_ok) 
                            & ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__source_ok) 
                            & ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:21966: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 21966, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:21990: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 21990, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22014: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22014, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22038: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22038, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22062: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22062, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22086: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22086, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__source_ok) 
                            & ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__source_ok) 
                            & ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22110: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22110, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22134: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22134, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22158: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22158, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22182: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22182, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22206: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22206, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22230: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22230, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22254: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22254, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22278: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22278, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->__PVT___T_88)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->__PVT___T_88)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22302: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22302, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22326: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22326, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22350: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22350, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22374: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22374, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22398: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22398, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22422: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22422, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22446: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22446, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22470: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22470, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22494: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22494, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22518: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22518, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22542: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22542, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->__PVT__mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->__PVT__mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22566: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22566, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__source_ok) 
                            & ((3U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__source_ok) 
                            & ((3U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22590: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22590, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22614: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22614, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22638: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22638, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22662: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22662, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__source_ok) 
                            & ((3U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__source_ok) 
                            & ((3U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22686: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22686, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22710: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22710, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22734: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22734, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22758: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22758, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22782: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22782, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22806: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22806, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22830: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22830, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22854: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22854, "");
    }
    if (VL_UNLIKELY(((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                     & (~ ((6U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                     & (~ ((6U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22878: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22878, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22902: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22902, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U <= (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U <= (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22926: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22926, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((0U == (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((0U == (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22950: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22950, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22974: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22974, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                               >> 2U)) | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                               >> 2U)) | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22998: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22998, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23022: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23022, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U <= (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U <= (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23046: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23046, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U >= (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U >= (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23070: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23070, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U != (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U != (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23094: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23094, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23118: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23118, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23142: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23142, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U <= (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U <= (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23166: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23166, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U >= (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U >= (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23190: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23190, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U != (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U != (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23214: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23214, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (((~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                                >> 2U)) | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (((~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                                >> 2U)) | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23238: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23238, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23262: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23262, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((0U == (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((0U == (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23286: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23286, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23310: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23310, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23334: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23334, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((0U == (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((0U == (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23358: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23358, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (((~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                                >> 2U)) | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (((~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                                >> 2U)) | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23382: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23382, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23406: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23406, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((0U == (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((0U == (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23430: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23430, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23454: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23454, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                            == (IData)(vlSelf->__PVT__opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                            == (IData)(vlSelf->__PVT__opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23478: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23478, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23502: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23502, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__source)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__source)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23526: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23526, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__a_first_counter))) 
                     & (~ ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                            == vlSelf->__PVT__address) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__a_first_counter))) 
                     & (~ ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                            == vlSelf->__PVT__address) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23550: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23550, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode) 
                            == (IData)(vlSelf->__PVT__opcode_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode) 
                            == (IData)(vlSelf->__PVT__opcode_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23574: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23574, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__d_first_counter))) 
                     & (~ (((3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2)) 
                            == (IData)(vlSelf->__PVT__param_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__d_first_counter))) 
                     & (~ (((3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2)) 
                            == (IData)(vlSelf->__PVT__param_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23598: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23598, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__d_first_counter))) 
                     & (~ (((7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3)) 
                            == (IData)(vlSelf->__PVT__size_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__d_first_counter))) 
                     & (~ (((7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3)) 
                            == (IData)(vlSelf->__PVT__size_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23622: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23622, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source) 
                            == (IData)(vlSelf->__PVT__source_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source) 
                            == (IData)(vlSelf->__PVT__source_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23646: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23646, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_sink) 
                            == (IData)(vlSelf->__PVT__sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_sink) 
                            == (IData)(vlSelf->__PVT__sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23670: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23670, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__d_first_counter))) 
                     & (~ (((1U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                                   >> 2U)) == (IData)(vlSelf->__PVT__denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__d_first_counter))) 
                     & (~ (((1U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                                   >> 2U)) == (IData)(vlSelf->__PVT__denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23694: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23694, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT___a_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__a_first_counter_1))) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->__PVT__inflight) 
                                          >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT___a_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__a_first_counter_1))) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->__PVT__inflight) 
                                          >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23718: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23718, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__d_first_counter_1))) 
                      & (6U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (((0xffffU & ((IData)(vlSelf->__PVT__inflight) 
                                        >> (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source))) 
                            | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                                & (0U == (IData)(vlSelf->__PVT__a_first_counter_1))) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__d_first_counter_1))) 
                      & (6U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (((0xffffU & ((IData)(vlSelf->__PVT__inflight) 
                                        >> (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source))) 
                            | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                                & (0U == (IData)(vlSelf->__PVT__a_first_counter_1))) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23742: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23742, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source)))) 
                     & (~ ((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode) 
                             == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                           ? 4U : (IData)(vlSelf->__PVT___GEN_30)))) 
                            | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode) 
                               == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->__PVT___GEN_30))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source)))) 
                     & (~ ((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode) 
                             == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                           ? 4U : (IData)(vlSelf->__PVT___GEN_30)))) 
                            | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode) 
                               == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->__PVT___GEN_30))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23766: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23766, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source)))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source)))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23790: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23790, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source))))) 
                     & (~ ((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->__PVT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->__PVT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlSelf->__PVT___GEN_46)))) 
                            | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlSelf->__PVT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->__PVT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlSelf->__PVT___GEN_46))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source))))) 
                     & (~ ((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->__PVT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->__PVT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlSelf->__PVT___GEN_46)))) 
                            | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlSelf->__PVT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->__PVT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlSelf->__PVT___GEN_46))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23814: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23814, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source))))) 
                     & (~ (((7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3)) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__inflight_sizes 
                                                     >> 
                                                     ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source))))) 
                     & (~ (((7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3)) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__inflight_sizes 
                                                     >> 
                                                     ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23838: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23838, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                          & (0U == (IData)(vlSelf->__PVT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->__PVT__a_first_counter_1))) 
                        & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid)) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                          == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source))) 
                      & (6U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_d_ready)) 
                            | (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                          & (0U == (IData)(vlSelf->__PVT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->__PVT__a_first_counter_1))) 
                        & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid)) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                          == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source))) 
                      & (6U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_d_ready)) 
                            | (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23860: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23860, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((IData)(vlSelf->__PVT__a_set_wo_ready) 
                                != ((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                                      & (0U == (IData)(vlSelf->__PVT__d_first_counter_1))) 
                                     & (6U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode)))
                                     ? (0xffffU & ((IData)(1U) 
                                                   << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source)))
                                     : 0U)) | (~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->__PVT__a_set_wo_ready))))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 8 (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((IData)(vlSelf->__PVT__a_set_wo_ready) 
                                != ((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                                      & (0U == (IData)(vlSelf->__PVT__d_first_counter_1))) 
                                     & (6U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode)))
                                     ? (0xffffU & ((IData)(1U) 
                                                   << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source)))
                                     : 0U)) | (~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->__PVT__a_set_wo_ready))))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23884: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23884, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__inflight)))) 
                                | (0U == vlSelf->__PVT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->__PVT__watchdog 
                                  < vlSelf->__PVT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__inflight)))) 
                                | (0U == vlSelf->__PVT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->__PVT__watchdog 
                                  < vlSelf->__PVT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23908: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23908, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__d_first_counter_2))) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((0xffffU & ((IData)(vlSelf->__PVT__inflight_1) 
                                       >> (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__d_first_counter_2))) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((0xffffU & ((IData)(vlSelf->__PVT__inflight_1) 
                                       >> (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23932: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23932, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__d_first_counter_2))) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (((7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3)) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__inflight_sizes_1 
                                                     >> 
                                                     ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__d_first_counter_2))) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (((7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3)) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__inflight_sizes_1 
                                                     >> 
                                                     ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23956: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23956, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__inflight_1)))) 
                                | (0U == vlSelf->__PVT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->__PVT__watchdog_1 
                                  < vlSelf->__PVT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__inflight_1)))) 
                                | (0U == vlSelf->__PVT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->__PVT__watchdog_1 
                                  < vlSelf->__PVT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23980: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23980, "");
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__inflight_opcodes = 0ULL;
        vlSelf->__PVT__inflight_1 = 0U;
        vlSelf->__PVT__inflight_sizes_1 = 0ULL;
        vlSelf->__PVT__inflight_sizes = 0ULL;
        vlSelf->__PVT__inflight = 0U;
        vlSelf->__PVT__watchdog_1 = 0U;
        vlSelf->__PVT__watchdog = 0U;
    } else {
        vlSelf->__PVT__inflight_opcodes = vlSelf->__PVT___inflight_opcodes_T_2;
        vlSelf->__PVT__inflight_1 = vlSelf->__PVT___inflight_T_5;
        vlSelf->__PVT__inflight_sizes_1 = vlSelf->__PVT___inflight_sizes_T_5;
        vlSelf->__PVT__inflight_sizes = vlSelf->__PVT___inflight_sizes_T_2;
        vlSelf->__PVT__inflight = vlSelf->__PVT___inflight_T_2;
        vlSelf->__PVT__watchdog_1 = ((IData)(vlSelf->__PVT___d_first_T)
                                      ? 0U : vlSelf->__PVT___watchdog_T_3);
        vlSelf->__PVT__watchdog = (((IData)(vlSelf->__PVT___a_first_T) 
                                    | (IData)(vlSelf->__PVT___d_first_T))
                                    ? 0U : vlSelf->__PVT___watchdog_T_1);
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__d_first_counter_2 = 0U;
    } else if (vlSelf->__PVT___d_first_T) {
        vlSelf->__PVT__d_first_counter_2 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__d_first_2)
                                              ? ((1U 
                                                  & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))
                                                  ? 
                                                 (~ 
                                                  (0x7ffU 
                                                   & (((IData)(0x3fU) 
                                                       << 
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                                                      >> 2U)))
                                                  : 0U)
                                              : (IData)(vlSelf->__PVT__d_first_counter1_2)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__d_first_counter_1 = 0U;
    } else if (vlSelf->__PVT___d_first_T) {
        vlSelf->__PVT__d_first_counter_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__d_first_1)
                                              ? ((1U 
                                                  & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))
                                                  ? 
                                                 (~ 
                                                  (0x7ffU 
                                                   & (((IData)(0x3fU) 
                                                       << 
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                                                      >> 2U)))
                                                  : 0U)
                                              : (IData)(vlSelf->__PVT__d_first_counter1_1)));
    }
    if (((IData)(vlSelf->__PVT___d_first_T) & (0U == (IData)(vlSelf->__PVT__d_first_counter)))) {
        vlSelf->__PVT__sink = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_sink;
    }
    if (((IData)(vlSelf->__PVT___d_first_T) & (0U == (IData)(vlSelf->__PVT__d_first_counter)))) {
        vlSelf->__PVT__param_1 = (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2));
    }
    if (((IData)(vlSelf->__PVT___d_first_T) & (0U == (IData)(vlSelf->__PVT__d_first_counter)))) {
        vlSelf->__PVT__denied = (1U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                                       >> 2U));
    }
    if (((IData)(vlSelf->__PVT___d_first_T) & (0U == (IData)(vlSelf->__PVT__d_first_counter)))) {
        vlSelf->__PVT__source_1 = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source;
    }
    if (((IData)(vlSelf->__PVT___d_first_T) & (0U == (IData)(vlSelf->__PVT__d_first_counter)))) {
        vlSelf->__PVT__size_1 = (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3));
    }
    if (((IData)(vlSelf->__PVT___d_first_T) & (0U == (IData)(vlSelf->__PVT__d_first_counter)))) {
        vlSelf->__PVT__opcode_1 = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__a_first_counter_1 = 0U;
    } else if (vlSelf->__PVT___a_first_T) {
        vlSelf->__PVT__a_first_counter_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__a_first_1)
                                              ? ((4U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                                  ? 0U
                                                  : 
                                                 (~ 
                                                  (0x7ffU 
                                                   & (((IData)(0x3fU) 
                                                       << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                      >> 2U))))
                                              : (IData)(vlSelf->__PVT__a_first_counter1_1)));
    }
    if (((IData)(vlSelf->__PVT___a_first_T) & (0U == (IData)(vlSelf->__PVT__a_first_counter)))) {
        vlSelf->__PVT__size = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size;
    }
    if (((IData)(vlSelf->__PVT___a_first_T) & (0U == (IData)(vlSelf->__PVT__a_first_counter)))) {
        vlSelf->__PVT__opcode = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode;
    }
    if (((IData)(vlSelf->__PVT___a_first_T) & (0U == (IData)(vlSelf->__PVT__a_first_counter)))) {
        vlSelf->__PVT__source = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source;
    }
    if (((IData)(vlSelf->__PVT___a_first_T) & (0U == (IData)(vlSelf->__PVT__a_first_counter)))) {
        vlSelf->__PVT__address = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address;
    }
    vlSelf->__PVT___watchdog_T_3 = ((IData)(1U) + vlSelf->__PVT__watchdog_1);
    vlSelf->__PVT___watchdog_T_1 = ((IData)(1U) + vlSelf->__PVT__watchdog);
    vlSelf->__PVT__d_first_counter1_2 = (0xfU & ((IData)(vlSelf->__PVT__d_first_counter_2) 
                                                 - (IData)(1U)));
    vlSelf->__PVT__d_first_2 = (0U == (IData)(vlSelf->__PVT__d_first_counter_2));
    vlSelf->__PVT__d_first_counter1_1 = (0xfU & ((IData)(vlSelf->__PVT__d_first_counter_1) 
                                                 - (IData)(1U)));
    vlSelf->__PVT__d_first_1 = (0U == (IData)(vlSelf->__PVT__d_first_counter_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__d_first_counter = 0U;
    } else if (vlSelf->__PVT___d_first_T) {
        vlSelf->__PVT__d_first_counter = (0xfU & ((IData)(vlSelf->__PVT__d_first)
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))
                                                    ? 
                                                   (~ 
                                                    (0x7ffU 
                                                     & (((IData)(0x3fU) 
                                                         << 
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                                                        >> 2U)))
                                                    : 0U)
                                                   : (IData)(vlSelf->__PVT__d_first_counter1)));
    }
    vlSelf->__PVT__a_first_counter1_1 = (0xfU & ((IData)(vlSelf->__PVT__a_first_counter_1) 
                                                 - (IData)(1U)));
    vlSelf->__PVT__a_first_1 = (0U == (IData)(vlSelf->__PVT__a_first_counter_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__a_first_counter = 0U;
    } else if (vlSelf->__PVT___a_first_T) {
        vlSelf->__PVT__a_first_counter = (0xfU & ((IData)(vlSelf->__PVT__a_first)
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
                                                   : (IData)(vlSelf->__PVT__a_first_counter1)));
    }
    vlSelf->__PVT__d_first_counter1 = (0xfU & ((IData)(vlSelf->__PVT__d_first_counter) 
                                               - (IData)(1U)));
    vlSelf->__PVT__d_first = (0U == (IData)(vlSelf->__PVT__d_first_counter));
    vlSelf->__PVT__a_first_counter1 = (0xfU & ((IData)(vlSelf->__PVT__a_first_counter) 
                                               - (IData)(1U)));
    vlSelf->__PVT__a_first = (0U == (IData)(vlSelf->__PVT__a_first_counter));
}

VL_INLINE_OPT void VysyxSoCFull_TLMonitor_7___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__12(VysyxSoCFull_TLMonitor_7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLMonitor_7___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__12\n"); );
    // Body
    vlSelf->__PVT___a_opcode_lookup_T_1 = ((0x3fU >= 
                                            ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source) 
                                             << 2U))
                                            ? (vlSelf->__PVT__inflight_opcodes 
                                               >> ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source) 
                                                   << 2U))
                                            : 0ULL);
    vlSelf->__PVT___GEN_46 = ((5U == (7U & (IData)(
                                                   (7ULL 
                                                    & (vlSelf->__PVT___a_opcode_lookup_T_1 
                                                       >> 1U)))))
                               ? 2U : ((4U == (7U & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->__PVT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                        ? 1U : ((3U 
                                                 == 
                                                 (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->__PVT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                                 ? 1U
                                                 : 
                                                ((2U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (7ULL 
                                                              & (vlSelf->__PVT___a_opcode_lookup_T_1 
                                                                 >> 1U)))))
                                                  ? 1U
                                                  : 0U))));
}

VL_INLINE_OPT void VysyxSoCFull_TLMonitor_7___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__13(VysyxSoCFull_TLMonitor_7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLMonitor_7___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__13\n"); );
    // Body
    vlSelf->__PVT___GEN_30 = ((5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                               ? 2U : ((4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                        ? 1U : ((3U 
                                                 == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                                 ? 1U
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                                  ? 1U
                                                  : 0U))));
    vlSelf->__PVT__source_ok = 1U;
    vlSelf->__PVT___T_88 = ((0ULL == (0x1c0000000ULL 
                                      & (QData)((IData)(
                                                        (0x40000000U 
                                                         ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))) 
                            | (0ULL == (0x180000000ULL 
                                        & (QData)((IData)(
                                                          (0x80000000U 
                                                           ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))));
    vlSelf->__PVT__mask_acc = (1U & ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                     | (1U & ((((IData)(1U) 
                                                << 
                                                (1U 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))) 
                                               >> 1U) 
                                              & (~ 
                                                 (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                                  >> 1U))))));
    vlSelf->__PVT__mask_acc_1 = (1U & ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                       | (1U & ((((IData)(1U) 
                                                  << 
                                                  (1U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))) 
                                                 >> 1U) 
                                                & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                                   >> 1U)))));
    vlSelf->__PVT__mask = ((8U & (((IData)(vlSelf->__PVT__mask_acc_1) 
                                   << 3U) | (0xfffffff8U 
                                             & ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                                 << 2U) 
                                                & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                                   << 3U))))) 
                           | ((4U & (((IData)(vlSelf->__PVT__mask_acc_1) 
                                      | (IData)((2U 
                                                 == 
                                                 (3U 
                                                  & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))) 
                                     << 2U)) | ((2U 
                                                 & (((IData)(vlSelf->__PVT__mask_acc) 
                                                     | (IData)(
                                                               (1U 
                                                                == 
                                                                (3U 
                                                                 & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((IData)(vlSelf->__PVT__mask_acc) 
                                                      | (IData)(
                                                                (0U 
                                                                 == 
                                                                 (3U 
                                                                  & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))));
}

VL_INLINE_OPT void VysyxSoCFull_TLMonitor_7___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__6(VysyxSoCFull_TLMonitor_7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLMonitor_7___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__6\n"); );
    // Body
    vlSelf->__PVT__a_set_wo_ready = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                                      & (0U == (IData)(vlSelf->__PVT__a_first_counter_1)))
                                      ? (0xffffU & 
                                         ((IData)(1U) 
                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)))
                                      : 0U);
    vlSelf->__PVT___a_first_T = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full)) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid));
}

VL_INLINE_OPT void VysyxSoCFull_TLMonitor_7___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__7(VysyxSoCFull_TLMonitor_7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLMonitor_7___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__7\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp32;
    VlWide<5>/*159:0*/ __Vtemp33;
    VlWide<5>/*159:0*/ __Vtemp39;
    VlWide<5>/*159:0*/ __Vtemp40;
    VlWide<5>/*159:0*/ __Vtemp46;
    VlWide<5>/*159:0*/ __Vtemp47;
    VlWide<5>/*159:0*/ __Vtemp53;
    VlWide<5>/*159:0*/ __Vtemp54;
    // Body
    vlSelf->__PVT___d_first_T = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_d_ready) 
                                 & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid));
    vlSelf->__PVT___inflight_T_5 = ((IData)(vlSelf->__PVT__inflight_1) 
                                    & (~ ((((IData)(vlSelf->__PVT___d_first_T) 
                                            & (0U == (IData)(vlSelf->__PVT__d_first_counter_2))) 
                                           & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode)))
                                           ? ((IData)(1U) 
                                              << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source))
                                           : 0U)));
    __Vtemp32[0U] = 0xfU;
    __Vtemp32[1U] = 0U;
    __Vtemp32[2U] = 0U;
    __Vtemp32[3U] = 0U;
    __Vtemp32[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp33, __Vtemp32, 
                  ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source) 
                   << 2U));
    vlSelf->__PVT___inflight_sizes_T_5 = (vlSelf->__PVT__inflight_sizes_1 
                                          & (~ (((QData)((IData)(
                                                                 ((((IData)(vlSelf->__PVT___d_first_T) 
                                                                    & (0U 
                                                                       == (IData)(vlSelf->__PVT__d_first_counter_2))) 
                                                                   & (6U 
                                                                      == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode)))
                                                                   ? 
                                                                  __Vtemp33[1U]
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((((IData)(vlSelf->__PVT___d_first_T) 
                                                                     & (0U 
                                                                        == (IData)(vlSelf->__PVT__d_first_counter_2))) 
                                                                    & (6U 
                                                                       == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode)))
                                                                    ? 
                                                                   __Vtemp33[0U]
                                                                    : 0U))))));
    vlSelf->__PVT___inflight_T_2 = (0xffffU & (((IData)(vlSelf->__PVT__inflight) 
                                                | (((IData)(vlSelf->__PVT___a_first_T) 
                                                    & (0U 
                                                       == (IData)(vlSelf->__PVT__a_first_counter_1)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source))
                                                    : 0U)) 
                                               & (~ 
                                                  ((((IData)(vlSelf->__PVT___d_first_T) 
                                                     & (0U 
                                                        == (IData)(vlSelf->__PVT__d_first_counter_1))) 
                                                    & (6U 
                                                       != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source))
                                                    : 0U))));
    __Vtemp39[0U] = 0xfU;
    __Vtemp39[1U] = 0U;
    __Vtemp39[2U] = 0U;
    __Vtemp39[3U] = 0U;
    __Vtemp39[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp40, __Vtemp39, 
                  ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source) 
                   << 2U));
    if ((((IData)(vlSelf->__PVT___d_first_T) & (0U 
                                                == (IData)(vlSelf->__PVT__d_first_counter_1))) 
         & (6U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode)))) {
        vlSelf->__PVT___GEN_23[0U] = __Vtemp40[0U];
        vlSelf->__PVT___GEN_23[1U] = __Vtemp40[1U];
        vlSelf->__PVT___GEN_23[2U] = __Vtemp40[2U];
        vlSelf->__PVT___GEN_23[3U] = __Vtemp40[3U];
        vlSelf->__PVT___GEN_23[4U] = (0x7fffU & __Vtemp40[4U]);
    } else {
        vlSelf->__PVT___GEN_23[0U] = 0U;
        vlSelf->__PVT___GEN_23[1U] = 0U;
        vlSelf->__PVT___GEN_23[2U] = 0U;
        vlSelf->__PVT___GEN_23[3U] = 0U;
        vlSelf->__PVT___GEN_23[4U] = 0U;
    }
    VL_EXTEND_WI(131,4, __Vtemp46, (((IData)(vlSelf->__PVT___a_first_T) 
                                     & (0U == (IData)(vlSelf->__PVT__a_first_counter_1)))
                                     ? (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                                              << 1U))
                                     : 0U));
    VL_SHIFTL_WWI(131,131,7, __Vtemp47, __Vtemp46, 
                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                   << 2U));
    vlSelf->__PVT___inflight_opcodes_T_2 = ((vlSelf->__PVT__inflight_opcodes 
                                             | (((QData)((IData)(
                                                                 (((IData)(vlSelf->__PVT___a_first_T) 
                                                                   & (0U 
                                                                      == (IData)(vlSelf->__PVT__a_first_counter_1)))
                                                                   ? 
                                                                  __Vtemp47[1U]
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlSelf->__PVT___a_first_T) 
                                                                    & (0U 
                                                                       == (IData)(vlSelf->__PVT__a_first_counter_1)))
                                                                    ? 
                                                                   __Vtemp47[0U]
                                                                    : 0U))))) 
                                            & (~ (((QData)((IData)(
                                                                   vlSelf->__PVT___GEN_23[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->__PVT___GEN_23[0U])))));
    VL_EXTEND_WI(131,4, __Vtemp53, (((IData)(vlSelf->__PVT___a_first_T) 
                                     & (0U == (IData)(vlSelf->__PVT__a_first_counter_1)))
                                     ? (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                                              << 1U))
                                     : 0U));
    VL_SHIFTL_WWI(131,131,7, __Vtemp54, __Vtemp53, 
                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                   << 2U));
    vlSelf->__PVT___inflight_sizes_T_2 = ((vlSelf->__PVT__inflight_sizes 
                                           | (((QData)((IData)(
                                                               (((IData)(vlSelf->__PVT___a_first_T) 
                                                                 & (0U 
                                                                    == (IData)(vlSelf->__PVT__a_first_counter_1)))
                                                                 ? 
                                                                __Vtemp54[1U]
                                                                 : 0U))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelf->__PVT___a_first_T) 
                                                                  & (0U 
                                                                     == (IData)(vlSelf->__PVT__a_first_counter_1)))
                                                                  ? 
                                                                 __Vtemp54[0U]
                                                                  : 0U))))) 
                                          & (~ (((QData)((IData)(
                                                                 vlSelf->__PVT___GEN_23[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->__PVT___GEN_23[0U])))));
}

VL_INLINE_OPT void VysyxSoCFull_TLMonitor_7___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__10(VysyxSoCFull_TLMonitor_7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLMonitor_7___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__10\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__source_ok) 
                            & ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__source_ok) 
                            & ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:21966: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 21966, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:21990: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 21990, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22014: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22014, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22038: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22038, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22062: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22062, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22086: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22086, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__source_ok) 
                            & ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__source_ok) 
                            & ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22110: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22110, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22134: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22134, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22158: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22158, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22182: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22182, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22206: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22206, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22230: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22230, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22254: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22254, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22278: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22278, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->__PVT___T_88)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->__PVT___T_88)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22302: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22302, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22326: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22326, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22350: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22350, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22374: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22374, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22398: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22398, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22422: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22422, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22446: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22446, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22470: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22470, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22494: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22494, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22518: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22518, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22542: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22542, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->__PVT__mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->__PVT__mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22566: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22566, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__source_ok) 
                            & ((3U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__source_ok) 
                            & ((3U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22590: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22590, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22614: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22614, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22638: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22638, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22662: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22662, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__source_ok) 
                            & ((3U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__source_ok) 
                            & ((3U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22686: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22686, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22710: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22710, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22734: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22734, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22758: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22758, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22782: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22782, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22806: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22806, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22830: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22830, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22854: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22854, "");
    }
    if (VL_UNLIKELY(((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                     & (~ ((6U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                     & (~ ((6U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22878: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22878, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22902: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22902, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U <= (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U <= (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22926: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22926, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((0U == (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((0U == (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22950: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22950, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22974: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22974, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                               >> 2U)) | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                               >> 2U)) | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22998: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 22998, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23022: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23022, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U <= (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U <= (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23046: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23046, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U >= (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U >= (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23070: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23070, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U != (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U != (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23094: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23094, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23118: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23118, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23142: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23142, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U <= (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U <= (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23166: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23166, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U >= (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U >= (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23190: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23190, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U != (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U != (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23214: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23214, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (((~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                                >> 2U)) | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (((~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                                >> 2U)) | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23238: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23238, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23262: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23262, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((0U == (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((0U == (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23286: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23286, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23310: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23310, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23334: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23334, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((0U == (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((0U == (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23358: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23358, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (((~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                                >> 2U)) | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (((~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                                >> 2U)) | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23382: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23382, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23406: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23406, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((0U == (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((0U == (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23430: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23430, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23454: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23454, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                            == (IData)(vlSelf->__PVT__opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                            == (IData)(vlSelf->__PVT__opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23478: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23478, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23502: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23502, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__source)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__source)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23526: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23526, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__a_first_counter))) 
                     & (~ ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                            == vlSelf->__PVT__address) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__a_first_counter))) 
                     & (~ ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                            == vlSelf->__PVT__address) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23550: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23550, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode) 
                            == (IData)(vlSelf->__PVT__opcode_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode) 
                            == (IData)(vlSelf->__PVT__opcode_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23574: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23574, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__d_first_counter))) 
                     & (~ (((3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_2)) 
                            == (IData)(vlSelf->__PVT__param_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__d_first_counter))) 
                     & (~ (((3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_2)) 
                            == (IData)(vlSelf->__PVT__param_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23598: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23598, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__d_first_counter))) 
                     & (~ (((7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_3)) 
                            == (IData)(vlSelf->__PVT__size_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__d_first_counter))) 
                     & (~ (((7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_3)) 
                            == (IData)(vlSelf->__PVT__size_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23622: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23622, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source) 
                            == (IData)(vlSelf->__PVT__source_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source) 
                            == (IData)(vlSelf->__PVT__source_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23646: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23646, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_sink) 
                            == (IData)(vlSelf->__PVT__sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_sink) 
                            == (IData)(vlSelf->__PVT__sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23670: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23670, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__d_first_counter))) 
                     & (~ (((1U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                                   >> 2U)) == (IData)(vlSelf->__PVT__denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__d_first_counter))) 
                     & (~ (((1U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                                   >> 2U)) == (IData)(vlSelf->__PVT__denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23694: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23694, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT___a_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__a_first_counter_1))) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->__PVT__inflight) 
                                          >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT___a_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__a_first_counter_1))) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->__PVT__inflight) 
                                          >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23718: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23718, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__d_first_counter_1))) 
                      & (6U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (((0xffffU & ((IData)(vlSelf->__PVT__inflight) 
                                        >> (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source))) 
                            | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                                & (0U == (IData)(vlSelf->__PVT__a_first_counter_1))) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__d_first_counter_1))) 
                      & (6U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (((0xffffU & ((IData)(vlSelf->__PVT__inflight) 
                                        >> (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source))) 
                            | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                                & (0U == (IData)(vlSelf->__PVT__a_first_counter_1))) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23742: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23742, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source)))) 
                     & (~ ((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode) 
                             == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                           ? 4U : (IData)(vlSelf->__PVT___GEN_30)))) 
                            | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode) 
                               == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->__PVT___GEN_30))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source)))) 
                     & (~ ((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode) 
                             == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                           ? 4U : (IData)(vlSelf->__PVT___GEN_30)))) 
                            | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode) 
                               == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->__PVT___GEN_30))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23766: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23766, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source)))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source)))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23790: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23790, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source))))) 
                     & (~ ((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->__PVT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->__PVT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlSelf->__PVT___GEN_46)))) 
                            | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlSelf->__PVT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->__PVT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlSelf->__PVT___GEN_46))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source))))) 
                     & (~ ((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->__PVT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->__PVT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlSelf->__PVT___GEN_46)))) 
                            | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlSelf->__PVT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->__PVT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlSelf->__PVT___GEN_46))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23814: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23814, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source))))) 
                     & (~ (((7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_3)) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__inflight_sizes 
                                                     >> 
                                                     ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source))))) 
                     & (~ (((7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_3)) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__inflight_sizes 
                                                     >> 
                                                     ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23838: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23838, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                          & (0U == (IData)(vlSelf->__PVT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->__PVT__a_first_counter_1))) 
                        & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid)) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                          == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source))) 
                      & (6U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_d_ready)) 
                            | (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                          & (0U == (IData)(vlSelf->__PVT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->__PVT__a_first_counter_1))) 
                        & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid)) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                          == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source))) 
                      & (6U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_d_ready)) 
                            | (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23860: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23860, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((IData)(vlSelf->__PVT__a_set_wo_ready) 
                                != ((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                                      & (0U == (IData)(vlSelf->__PVT__d_first_counter_1))) 
                                     & (6U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode)))
                                     ? (0xffffU & ((IData)(1U) 
                                                   << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source)))
                                     : 0U)) | (~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->__PVT__a_set_wo_ready))))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 8 (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((IData)(vlSelf->__PVT__a_set_wo_ready) 
                                != ((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                                      & (0U == (IData)(vlSelf->__PVT__d_first_counter_1))) 
                                     & (6U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode)))
                                     ? (0xffffU & ((IData)(1U) 
                                                   << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source)))
                                     : 0U)) | (~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->__PVT__a_set_wo_ready))))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23884: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23884, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__inflight)))) 
                                | (0U == vlSelf->__PVT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->__PVT__watchdog 
                                  < vlSelf->__PVT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__inflight)))) 
                                | (0U == vlSelf->__PVT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->__PVT__watchdog 
                                  < vlSelf->__PVT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23908: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23908, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__d_first_counter_2))) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((0xffffU & ((IData)(vlSelf->__PVT__inflight_1) 
                                       >> (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__d_first_counter_2))) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((0xffffU & ((IData)(vlSelf->__PVT__inflight_1) 
                                       >> (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23932: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23932, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__d_first_counter_2))) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (((7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_3)) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__inflight_sizes_1 
                                                     >> 
                                                     ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__d_first_counter_2))) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (((7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_3)) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__inflight_sizes_1 
                                                     >> 
                                                     ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23956: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23956, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__inflight_1)))) 
                                | (0U == vlSelf->__PVT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->__PVT__watchdog_1 
                                  < vlSelf->__PVT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__inflight_1)))) 
                                | (0U == vlSelf->__PVT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->__PVT__watchdog_1 
                                  < vlSelf->__PVT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23980: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 23980, "");
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__inflight_opcodes = 0ULL;
        vlSelf->__PVT__inflight_1 = 0U;
        vlSelf->__PVT__inflight_sizes_1 = 0ULL;
        vlSelf->__PVT__inflight_sizes = 0ULL;
        vlSelf->__PVT__inflight = 0U;
        vlSelf->__PVT__watchdog_1 = 0U;
        vlSelf->__PVT__watchdog = 0U;
    } else {
        vlSelf->__PVT__inflight_opcodes = vlSelf->__PVT___inflight_opcodes_T_2;
        vlSelf->__PVT__inflight_1 = vlSelf->__PVT___inflight_T_5;
        vlSelf->__PVT__inflight_sizes_1 = vlSelf->__PVT___inflight_sizes_T_5;
        vlSelf->__PVT__inflight_sizes = vlSelf->__PVT___inflight_sizes_T_2;
        vlSelf->__PVT__inflight = vlSelf->__PVT___inflight_T_2;
        vlSelf->__PVT__watchdog_1 = ((IData)(vlSelf->__PVT___d_first_T)
                                      ? 0U : vlSelf->__PVT___watchdog_T_3);
        vlSelf->__PVT__watchdog = (((IData)(vlSelf->__PVT___a_first_T) 
                                    | (IData)(vlSelf->__PVT___d_first_T))
                                    ? 0U : vlSelf->__PVT___watchdog_T_1);
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__d_first_counter_2 = 0U;
    } else if (vlSelf->__PVT___d_first_T) {
        vlSelf->__PVT__d_first_counter_2 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__d_first_2)
                                              ? ((1U 
                                                  & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))
                                                  ? 
                                                 (~ 
                                                  (0x7ffU 
                                                   & (((IData)(0x3fU) 
                                                       << 
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                                                      >> 2U)))
                                                  : 0U)
                                              : (IData)(vlSelf->__PVT__d_first_counter1_2)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__d_first_counter_1 = 0U;
    } else if (vlSelf->__PVT___d_first_T) {
        vlSelf->__PVT__d_first_counter_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__d_first_1)
                                              ? ((1U 
                                                  & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))
                                                  ? 
                                                 (~ 
                                                  (0x7ffU 
                                                   & (((IData)(0x3fU) 
                                                       << 
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                                                      >> 2U)))
                                                  : 0U)
                                              : (IData)(vlSelf->__PVT__d_first_counter1_1)));
    }
    if (((IData)(vlSelf->__PVT___d_first_T) & (0U == (IData)(vlSelf->__PVT__d_first_counter)))) {
        vlSelf->__PVT__sink = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_sink;
    }
    if (((IData)(vlSelf->__PVT___d_first_T) & (0U == (IData)(vlSelf->__PVT__d_first_counter)))) {
        vlSelf->__PVT__param_1 = (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_2));
    }
    if (((IData)(vlSelf->__PVT___d_first_T) & (0U == (IData)(vlSelf->__PVT__d_first_counter)))) {
        vlSelf->__PVT__denied = (1U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                                       >> 2U));
    }
    if (((IData)(vlSelf->__PVT___d_first_T) & (0U == (IData)(vlSelf->__PVT__d_first_counter)))) {
        vlSelf->__PVT__source_1 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source;
    }
    if (((IData)(vlSelf->__PVT___d_first_T) & (0U == (IData)(vlSelf->__PVT__d_first_counter)))) {
        vlSelf->__PVT__size_1 = (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_3));
    }
    if (((IData)(vlSelf->__PVT___d_first_T) & (0U == (IData)(vlSelf->__PVT__d_first_counter)))) {
        vlSelf->__PVT__opcode_1 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__a_first_counter_1 = 0U;
    } else if (vlSelf->__PVT___a_first_T) {
        vlSelf->__PVT__a_first_counter_1 = (0xfU & 
                                            ((IData)(vlSelf->__PVT__a_first_1)
                                              ? ((4U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                                  ? 0U
                                                  : 
                                                 (~ 
                                                  (0x7ffU 
                                                   & (((IData)(0x3fU) 
                                                       << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                      >> 2U))))
                                              : (IData)(vlSelf->__PVT__a_first_counter1_1)));
    }
    if (((IData)(vlSelf->__PVT___a_first_T) & (0U == (IData)(vlSelf->__PVT__a_first_counter)))) {
        vlSelf->__PVT__size = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size;
    }
    if (((IData)(vlSelf->__PVT___a_first_T) & (0U == (IData)(vlSelf->__PVT__a_first_counter)))) {
        vlSelf->__PVT__opcode = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode;
    }
    if (((IData)(vlSelf->__PVT___a_first_T) & (0U == (IData)(vlSelf->__PVT__a_first_counter)))) {
        vlSelf->__PVT__source = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source;
    }
    if (((IData)(vlSelf->__PVT___a_first_T) & (0U == (IData)(vlSelf->__PVT__a_first_counter)))) {
        vlSelf->__PVT__address = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address;
    }
    vlSelf->__PVT___watchdog_T_3 = ((IData)(1U) + vlSelf->__PVT__watchdog_1);
    vlSelf->__PVT___watchdog_T_1 = ((IData)(1U) + vlSelf->__PVT__watchdog);
    vlSelf->__PVT__d_first_counter1_2 = (0xfU & ((IData)(vlSelf->__PVT__d_first_counter_2) 
                                                 - (IData)(1U)));
    vlSelf->__PVT__d_first_2 = (0U == (IData)(vlSelf->__PVT__d_first_counter_2));
    vlSelf->__PVT__d_first_counter1_1 = (0xfU & ((IData)(vlSelf->__PVT__d_first_counter_1) 
                                                 - (IData)(1U)));
    vlSelf->__PVT__d_first_1 = (0U == (IData)(vlSelf->__PVT__d_first_counter_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__d_first_counter = 0U;
    } else if (vlSelf->__PVT___d_first_T) {
        vlSelf->__PVT__d_first_counter = (0xfU & ((IData)(vlSelf->__PVT__d_first)
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))
                                                    ? 
                                                   (~ 
                                                    (0x7ffU 
                                                     & (((IData)(0x3fU) 
                                                         << 
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                                                        >> 2U)))
                                                    : 0U)
                                                   : (IData)(vlSelf->__PVT__d_first_counter1)));
    }
    vlSelf->__PVT__a_first_counter1_1 = (0xfU & ((IData)(vlSelf->__PVT__a_first_counter_1) 
                                                 - (IData)(1U)));
    vlSelf->__PVT__a_first_1 = (0U == (IData)(vlSelf->__PVT__a_first_counter_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__a_first_counter = 0U;
    } else if (vlSelf->__PVT___a_first_T) {
        vlSelf->__PVT__a_first_counter = (0xfU & ((IData)(vlSelf->__PVT__a_first)
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
                                                   : (IData)(vlSelf->__PVT__a_first_counter1)));
    }
    vlSelf->__PVT__d_first_counter1 = (0xfU & ((IData)(vlSelf->__PVT__d_first_counter) 
                                               - (IData)(1U)));
    vlSelf->__PVT__d_first = (0U == (IData)(vlSelf->__PVT__d_first_counter));
    vlSelf->__PVT__a_first_counter1 = (0xfU & ((IData)(vlSelf->__PVT__a_first_counter) 
                                               - (IData)(1U)));
    vlSelf->__PVT__a_first = (0U == (IData)(vlSelf->__PVT__a_first_counter));
}

VL_INLINE_OPT void VysyxSoCFull_TLMonitor_7___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__11(VysyxSoCFull_TLMonitor_7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLMonitor_7___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__11\n"); );
    // Body
    vlSelf->__PVT___a_opcode_lookup_T_1 = ((0x3fU >= 
                                            ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source) 
                                             << 2U))
                                            ? (vlSelf->__PVT__inflight_opcodes 
                                               >> ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source) 
                                                   << 2U))
                                            : 0ULL);
    vlSelf->__PVT__source_ok = 1U;
    vlSelf->__PVT___T_88 = ((0ULL == (0x1c0000000ULL 
                                      & (QData)((IData)(
                                                        (0x40000000U 
                                                         ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))) 
                            | (0ULL == (0x180000000ULL 
                                        & (QData)((IData)(
                                                          (0x80000000U 
                                                           ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))));
    vlSelf->__PVT__mask_acc = (1U & ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                     | (1U & ((((IData)(1U) 
                                                << 
                                                (1U 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))) 
                                               >> 1U) 
                                              & (~ 
                                                 (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                                  >> 1U))))));
    vlSelf->__PVT__mask_acc_1 = (1U & ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                       | (1U & ((((IData)(1U) 
                                                  << 
                                                  (1U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))) 
                                                 >> 1U) 
                                                & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                                   >> 1U)))));
    vlSelf->__PVT___GEN_30 = ((5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                               ? 2U : ((4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                        ? 1U : ((3U 
                                                 == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                                 ? 1U
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                                  ? 1U
                                                  : 0U))));
    vlSelf->__PVT___GEN_46 = ((5U == (7U & (IData)(
                                                   (7ULL 
                                                    & (vlSelf->__PVT___a_opcode_lookup_T_1 
                                                       >> 1U)))))
                               ? 2U : ((4U == (7U & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->__PVT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                        ? 1U : ((3U 
                                                 == 
                                                 (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->__PVT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                                 ? 1U
                                                 : 
                                                ((2U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (7ULL 
                                                              & (vlSelf->__PVT___a_opcode_lookup_T_1 
                                                                 >> 1U)))))
                                                  ? 1U
                                                  : 0U))));
    vlSelf->__PVT__mask = ((8U & (((IData)(vlSelf->__PVT__mask_acc_1) 
                                   << 3U) | (0xfffffff8U 
                                             & ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                                 << 2U) 
                                                & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                                   << 3U))))) 
                           | ((4U & (((IData)(vlSelf->__PVT__mask_acc_1) 
                                      | (IData)((2U 
                                                 == 
                                                 (3U 
                                                  & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))) 
                                     << 2U)) | ((2U 
                                                 & (((IData)(vlSelf->__PVT__mask_acc) 
                                                     | (IData)(
                                                               (1U 
                                                                == 
                                                                (3U 
                                                                 & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((IData)(vlSelf->__PVT__mask_acc) 
                                                      | (IData)(
                                                                (0U 
                                                                 == 
                                                                 (3U 
                                                                  & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))));
}
