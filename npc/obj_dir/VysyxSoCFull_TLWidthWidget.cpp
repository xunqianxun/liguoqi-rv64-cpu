// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull_TLWidthWidget.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void VysyxSoCFull_TLWidthWidget___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__5(VysyxSoCFull_TLWidthWidget* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLWidthWidget___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__5\n"); );
    // Body
    vlSelf->__PVT__corrupt_out = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_corrupt) 
                                  | (IData)(vlSelf->__PVT__corrupt_reg));
    vlSelf->auto_in_d_bits_corrupt = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_corrupt) 
                                      | (IData)(vlSelf->__PVT__corrupt_reg));
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1 
        = ((0x3fU >= ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source) 
                      << 2U)) ? (vlSelf->__PVT__monitor__DOT__inflight_opcodes 
                                 >> ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source) 
                                     << 2U)) : 0ULL);
    vlSelf->__PVT__bundleIn_0_d_bits_data_masked_enable_0 
        = (1U & ((~ ((IData)(vlSelf->__PVT__count) 
                     & (~ (0xffU & (((IData)(7U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size)) 
                                    >> 2U))))) | (~ (IData)(vlSelf->__PVT__bundleIn_0_d_bits_data_rdata_written_once))));
    vlSelf->__PVT__last = (1U & (((IData)(vlSelf->__PVT__count) 
                                  == (1U & (~ (0xffU 
                                               & (((IData)(7U) 
                                                   << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size)) 
                                                  >> 2U))))) 
                                 | (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))));
    vlSelf->__PVT__monitor__DOT___GEN_46 = ((5U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 2U : 
                                            ((4U == 
                                              (7U & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                              ? 1U : 
                                             ((3U == 
                                               (7U 
                                                & (IData)(
                                                          (7ULL 
                                                           & (vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1 
                                                              >> 1U)))))
                                               ? 1U
                                               : ((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (7ULL 
                                                               & (vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1 
                                                                  >> 1U)))))
                                                   ? 1U
                                                   : 0U))));
    vlSelf->auto_in_d_bits_data = (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_data)) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((IData)(vlSelf->__PVT__bundleIn_0_d_bits_data_masked_enable_0)
                                                                  ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_data
                                                                  : vlSelf->__PVT__bundleIn_0_d_bits_data_rdata_0))));
    vlSelf->__PVT__monitor_io_in_d_valid = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                                            & (IData)(vlSelf->__PVT__last));
    vlSelf->auto_in_d_valid = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                               & (IData)(vlSelf->__PVT__last));
}

VL_INLINE_OPT void VysyxSoCFull_TLWidthWidget___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__7(VysyxSoCFull_TLWidthWidget* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLWidthWidget___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__7\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp4;
    VlWide<5>/*159:0*/ __Vtemp5;
    VlWide<5>/*159:0*/ __Vtemp11;
    VlWide<5>/*159:0*/ __Vtemp12;
    // Body
    vlSelf->__PVT___T = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_d_ready) 
                          | (~ (IData)(vlSelf->__PVT__last))) 
                         & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid));
    vlSelf->auto_out_d_ready = (1U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_d_ready) 
                                      | (~ (IData)(vlSelf->__PVT__last))));
    vlSelf->__PVT__monitor__DOT___d_first_T = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_d_ready) 
                                               & (IData)(vlSelf->__PVT__monitor_io_in_d_valid));
    vlSelf->__PVT___GEN_10 = (((IData)(vlSelf->__PVT___T) 
                               & (~ (IData)(vlSelf->__PVT__last))) 
                              | (IData)(vlSelf->__PVT__bundleIn_0_d_bits_data_rdata_written_once));
    vlSelf->__PVT__monitor__DOT___inflight_T_5 = ((IData)(vlSelf->__PVT__monitor__DOT__inflight_1) 
                                                  & (~ 
                                                     ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                        & (0U 
                                                           == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                                                       & (6U 
                                                          == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode)))
                                                       ? 
                                                      ((IData)(1U) 
                                                       << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source))
                                                       : 0U)));
    __Vtemp4[0U] = 0xfU;
    __Vtemp4[1U] = 0U;
    __Vtemp4[2U] = 0U;
    __Vtemp4[3U] = 0U;
    __Vtemp4[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp5, __Vtemp4, ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source) 
                                                  << 2U));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes_1 
           & (~ (((QData)((IData)(((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                     & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                                    & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode)))
                                    ? __Vtemp5[1U] : 0U))) 
                  << 0x20U) | (QData)((IData)(((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode)))
                                                ? __Vtemp5[0U]
                                                : 0U))))));
    __Vtemp11[0U] = 0xfU;
    __Vtemp11[1U] = 0U;
    __Vtemp11[2U] = 0U;
    __Vtemp11[3U] = 0U;
    __Vtemp11[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp12, __Vtemp11, 
                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source) 
                   << 2U));
    if ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
         & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode)))) {
        vlSelf->__PVT__monitor__DOT___GEN_23[0U] = 
            __Vtemp12[0U];
        vlSelf->__PVT__monitor__DOT___GEN_23[1U] = 
            __Vtemp12[1U];
        vlSelf->__PVT__monitor__DOT___GEN_23[2U] = 
            __Vtemp12[2U];
        vlSelf->__PVT__monitor__DOT___GEN_23[3U] = 
            __Vtemp12[3U];
        vlSelf->__PVT__monitor__DOT___GEN_23[4U] = 
            (0x7fffU & __Vtemp12[4U]);
    } else {
        vlSelf->__PVT__monitor__DOT___GEN_23[0U] = 0U;
        vlSelf->__PVT__monitor__DOT___GEN_23[1U] = 0U;
        vlSelf->__PVT__monitor__DOT___GEN_23[2U] = 0U;
        vlSelf->__PVT__monitor__DOT___GEN_23[3U] = 0U;
        vlSelf->__PVT__monitor__DOT___GEN_23[4U] = 0U;
    }
}

VL_INLINE_OPT void VysyxSoCFull_TLWidthWidget___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__9(VysyxSoCFull_TLWidthWidget* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLWidthWidget___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__9\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp18;
    VlWide<5>/*159:0*/ __Vtemp19;
    VlWide<5>/*159:0*/ __Vtemp25;
    VlWide<5>/*159:0*/ __Vtemp26;
    // Body
    vlSelf->__PVT__repeated_repeater_io_enq_ready = 
        ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_in_a_ready) 
         & (~ (IData)(vlSelf->__PVT__repeated_repeater__DOT__full)));
    vlSelf->__PVT__repeated_repeater__DOT___T = ((IData)(vlSelf->__PVT__repeated_repeater_io_enq_ready) 
                                                 & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid));
    vlSelf->__PVT__monitor__DOT___a_first_T = ((IData)(vlSelf->__PVT__repeated_repeater_io_enq_ready) 
                                               & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid));
    vlSelf->__PVT__repeated_repeater__DOT___GEN_0 = 
        (((IData)(vlSelf->__PVT__repeated_repeater__DOT___T) 
          & (~ (IData)(vlSelf->__PVT__repeat_last))) 
         | (IData)(vlSelf->__PVT__repeated_repeater__DOT__full));
    VL_EXTEND_WI(131,4, __Vtemp18, (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                                     ? (1U | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode) 
                                              << 1U))
                                     : 0U));
    VL_SHIFTL_WWI(131,131,7, __Vtemp19, __Vtemp18, 
                  ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source) 
                   << 2U));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2 
        = ((vlSelf->__PVT__monitor__DOT__inflight_opcodes 
            | (((QData)((IData)((((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp19[1U] : 0U))) 
                << 0x20U) | (QData)((IData)((((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                                              & (0U 
                                                 == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                                              ? __Vtemp19[0U]
                                              : 0U))))) 
           & (~ (((QData)((IData)(vlSelf->__PVT__monitor__DOT___GEN_23[1U])) 
                  << 0x20U) | (QData)((IData)(vlSelf->__PVT__monitor__DOT___GEN_23[0U])))));
    VL_EXTEND_WI(131,4, __Vtemp25, (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                                     ? (1U | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size) 
                                              << 1U))
                                     : 0U));
    VL_SHIFTL_WWI(131,131,7, __Vtemp26, __Vtemp25, 
                  ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source) 
                   << 2U));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_2 
        = ((vlSelf->__PVT__monitor__DOT__inflight_sizes 
            | (((QData)((IData)((((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp26[1U] : 0U))) 
                << 0x20U) | (QData)((IData)((((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                                              & (0U 
                                                 == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                                              ? __Vtemp26[0U]
                                              : 0U))))) 
           & (~ (((QData)((IData)(vlSelf->__PVT__monitor__DOT___GEN_23[1U])) 
                  << 0x20U) | (QData)((IData)(vlSelf->__PVT__monitor__DOT___GEN_23[0U])))));
    vlSelf->__PVT__monitor__DOT___inflight_T_2 = (0xffffU 
                                                  & (((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                                                      | (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                                                          & (0U 
                                                             == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                                                          ? 
                                                         ((IData)(1U) 
                                                          << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source))
                                                          : 0U)) 
                                                     & (~ 
                                                        ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                           & (0U 
                                                              == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                                          & (6U 
                                                             != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode)))
                                                          ? 
                                                         ((IData)(1U) 
                                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source))
                                                          : 0U))));
}

VL_INLINE_OPT void VysyxSoCFull_TLWidthWidget___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__10(VysyxSoCFull_TLWidthWidget* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLWidthWidget___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__10\n"); );
    // Variables
    CData/*0:0*/ __Vdly__repeat_count;
    CData/*0:0*/ __Vdly__count;
    // Body
    __Vdly__count = vlSelf->__PVT__count;
    __Vdly__repeat_count = vlSelf->__PVT__repeat_count;
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                                & (0ULL == (0x180000000ULL 
                                            & (QData)((IData)(
                                                              (0x80000000U 
                                                               ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                                & (0ULL == (0x180000000ULL 
                                            & (QData)((IData)(
                                                              (0x80000000U 
                                                               ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36027: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36027, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36051: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36051, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36075: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36075, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36099: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36099, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36123: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36123, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36147: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36147, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                                & (0ULL == (0x180000000ULL 
                                            & (QData)((IData)(
                                                              (0x80000000U 
                                                               ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                                & (0ULL == (0x180000000ULL 
                                            & (QData)((IData)(
                                                              (0x80000000U 
                                                               ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36171: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36171, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36195: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36195, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36219: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36219, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36243: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36243, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36267: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36267, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36291: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36291, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36315: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36315, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36339: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36339, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                            & (((0ULL == (0x1fffff000ULL 
                                          & (QData)((IData)(
                                                            (0x1000U 
                                                             ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))))) 
                                | (0ULL == (0x1c0000000ULL 
                                            & (QData)((IData)(
                                                              (0x40000000U 
                                                               ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)))))) 
                               | (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                            & (((0ULL == (0x1fffff000ULL 
                                          & (QData)((IData)(
                                                            (0x1000U 
                                                             ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))))) 
                                | (0ULL == (0x1c0000000ULL 
                                            & (QData)((IData)(
                                                              (0x40000000U 
                                                               ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)))))) 
                               | (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36363: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36363, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36387: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36387, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36411: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36411, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36435: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36435, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36459: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36459, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36483: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36483, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36507: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36507, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36531: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36531, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36555: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36555, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36579: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36579, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36603: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36603, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->__PVT__monitor__DOT__mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->__PVT__monitor__DOT__mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36627: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36627, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((3U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                                & ((0ULL == (0x1c0000000ULL 
                                             & (QData)((IData)(
                                                               (0x40000000U 
                                                                ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((3U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                                & ((0ULL == (0x1c0000000ULL 
                                             & (QData)((IData)(
                                                               (0x40000000U 
                                                                ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36651: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36651, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36675: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36675, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36699: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36699, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36723: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36723, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((3U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                                & ((0ULL == (0x1c0000000ULL 
                                             & (QData)((IData)(
                                                               (0x40000000U 
                                                                ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((3U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                                & ((0ULL == (0x1c0000000ULL 
                                             & (QData)((IData)(
                                                               (0x40000000U 
                                                                ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36747: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36747, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36771: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36771, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36795: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36795, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36819: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36819, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36843: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36843, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36867: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36867, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36891: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36891, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36915: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36915, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36939: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36939, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36963: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36963, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36987: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36987, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37011: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37011, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_corrupt) 
                               | (IData)(vlSelf->__PVT__corrupt_reg))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_corrupt) 
                               | (IData)(vlSelf->__PVT__corrupt_reg))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37035: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37035, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37059: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37059, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37083: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37083, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37107: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37107, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37131: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37131, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37155: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37155, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37179: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37179, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_corrupt) 
                               | (IData)(vlSelf->__PVT__corrupt_reg))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_corrupt) 
                               | (IData)(vlSelf->__PVT__corrupt_reg))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37203: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37203, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37227: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37227, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37251: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37251, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37275: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37275, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37299: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37299, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37323: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37323, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_denied)) 
                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_corrupt) 
                               | (IData)(vlSelf->__PVT__corrupt_reg))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_denied)) 
                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_corrupt) 
                               | (IData)(vlSelf->__PVT__corrupt_reg))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37347: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37347, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37371: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37371, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37395: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37395, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_corrupt) 
                               | (IData)(vlSelf->__PVT__corrupt_reg))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_corrupt) 
                               | (IData)(vlSelf->__PVT__corrupt_reg))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37419: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37419, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37443: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37443, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37467: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37467, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_denied)) 
                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_corrupt) 
                               | (IData)(vlSelf->__PVT__corrupt_reg))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_denied)) 
                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_corrupt) 
                               | (IData)(vlSelf->__PVT__corrupt_reg))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37491: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37491, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37515: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37515, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37539: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37539, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_corrupt) 
                               | (IData)(vlSelf->__PVT__corrupt_reg))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_corrupt) 
                               | (IData)(vlSelf->__PVT__corrupt_reg))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37563: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37563, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37587: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37587, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37611: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37611, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__source)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__source)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37635: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37635, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                            == vlSelf->__PVT__monitor__DOT__address) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                            == vlSelf->__PVT__monitor__DOT__address) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37659: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37659, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37683: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37683, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_param) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__param_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_param) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__param_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37707: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37707, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__size_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__size_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37731: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37731, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__source_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__source_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37755: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37755, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_sink) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_sink) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37779: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37779, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_denied) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_denied) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37803: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37803, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                                          >> (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                                          >> (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37827: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37827, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (((0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                                        >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source))) 
                            | (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                                & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source) 
                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (((0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                                        >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source))) 
                            | (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                                & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source) 
                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37851: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37851, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source) 
                            == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))
                                           ? 4U : (IData)(vlSelf->__PVT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))
                                             ? 5U : (IData)(vlSelf->__PVT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source) 
                            == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))
                                           ? 4U : (IData)(vlSelf->__PVT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))
                                             ? 5U : (IData)(vlSelf->__PVT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37875: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37875, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source) 
                            == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source)))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size) 
                            == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source) 
                            == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source)))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size) 
                            == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37899: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37899, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source) 
                               == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlSelf->__PVT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlSelf->__PVT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source) 
                               == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlSelf->__PVT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlSelf->__PVT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37923: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37923, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source) 
                               == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source))))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__monitor__DOT__inflight_sizes 
                                                     >> 
                                                     ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source) 
                               == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source))))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__monitor__DOT__inflight_sizes 
                                                     >> 
                                                     ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37947: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37947, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid)) 
                       & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source) 
                          == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source))) 
                      & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_d_ready)) 
                            | (IData)(vlSelf->__PVT__repeated_repeater_io_enq_ready)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid)) 
                       & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source) 
                          == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source))) 
                      & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_d_ready)) 
                            | (IData)(vlSelf->__PVT__repeated_repeater_io_enq_ready)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37969: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37969, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__monitor__DOT__inflight)))) 
                                | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->__PVT__monitor__DOT__watchdog 
                                  < vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__monitor__DOT__inflight)))) 
                                | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->__PVT__monitor__DOT__watchdog 
                                  < vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37993: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37993, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:38017: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 38017, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__monitor__DOT__inflight_sizes_1 
                                                     >> 
                                                     ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__monitor__DOT__inflight_sizes_1 
                                                     >> 
                                                     ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:38041: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 38041, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__monitor__DOT__inflight_1)))) 
                                | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->__PVT__monitor__DOT__watchdog_1 
                                  < vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__monitor__DOT__inflight_1)))) 
                                | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->__PVT__monitor__DOT__watchdog_1 
                                  < vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:38065: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 38065, "");
    }
    vlSelf->__PVT__monitor__DOT__inflight_opcodes = 
        ((IData)(vlSymsp->TOP.reset) ? 0ULL : vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2);
    if (((IData)(vlSelf->__PVT__repeated_repeater__DOT___T) 
         & (~ (IData)(vlSelf->__PVT__repeat_last)))) {
        vlSelf->__PVT__repeated_repeater__DOT__saved_mask 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_mask;
    }
    vlSelf->__PVT__bundleIn_0_d_bits_data_rdata_written_once 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT___GEN_10));
    if (((IData)(vlSelf->__PVT__repeated_repeater__DOT___T) 
         & (~ (IData)(vlSelf->__PVT__repeat_last)))) {
        vlSelf->__PVT__repeated_repeater__DOT__saved_data 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_data;
    }
    if (((IData)(vlSelf->__PVT___T) & (~ (IData)(vlSelf->__PVT__last)))) {
        if (vlSelf->__PVT__bundleIn_0_d_bits_data_masked_enable_0) {
            vlSelf->__PVT__bundleIn_0_d_bits_data_rdata_0 
                = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_data;
        }
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__count = 0U;
    } else if (vlSelf->__PVT___T) {
        __Vdly__count = (1U & ((~ (IData)(vlSelf->__PVT__last)) 
                               & ((IData)(1U) + (IData)(vlSelf->__PVT__count))));
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__repeat_count = 0U;
    } else if (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_in_a_ready) 
                & (IData)(vlSelf->__PVT__repeated_repeater_io_deq_valid))) {
        __Vdly__repeat_count = (1U & ((~ (IData)(vlSelf->__PVT__repeat_last)) 
                                      & ((IData)(1U) 
                                         + (IData)(vlSelf->__PVT__repeat_count))));
    }
    if (((IData)(vlSelf->__PVT__repeated_repeater__DOT___T) 
         & (~ (IData)(vlSelf->__PVT__repeat_last)))) {
        vlSelf->__PVT__repeated_repeater__DOT__saved_size 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size;
    }
    if (((IData)(vlSelf->__PVT__repeated_repeater__DOT___T) 
         & (~ (IData)(vlSelf->__PVT__repeat_last)))) {
        vlSelf->__PVT__repeated_repeater__DOT__saved_opcode 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode;
    }
    if (((IData)(vlSelf->__PVT__repeated_repeater__DOT___T) 
         & (~ (IData)(vlSelf->__PVT__repeat_last)))) {
        vlSelf->__PVT__repeated_repeater__DOT__saved_source 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source;
    }
    if (((IData)(vlSelf->__PVT__repeated_repeater__DOT___T) 
         & (~ (IData)(vlSelf->__PVT__repeat_last)))) {
        vlSelf->__PVT__repeated_repeater__DOT__saved_address 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address;
    }
    vlSelf->__PVT__repeated_repeater__DOT__full = (
                                                   (~ (IData)(vlSymsp->TOP.reset)) 
                                                   & ((~ 
                                                       (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_in_a_ready) 
                                                         & (IData)(vlSelf->__PVT__repeated_repeater_io_deq_valid)) 
                                                        & (IData)(vlSelf->__PVT__repeat_last))) 
                                                      & (IData)(vlSelf->__PVT__repeated_repeater__DOT___GEN_0)));
    vlSelf->__PVT__count = __Vdly__count;
    vlSelf->__PVT__repeat_count = __Vdly__repeat_count;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__monitor__DOT__inflight_1 = 0U;
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1 = 0ULL;
        vlSelf->__PVT__monitor__DOT__inflight_sizes = 0ULL;
        vlSelf->__PVT__monitor__DOT__inflight = 0U;
        vlSelf->__PVT__monitor__DOT__watchdog_1 = 0U;
        vlSelf->__PVT__monitor__DOT__watchdog = 0U;
    } else {
        vlSelf->__PVT__monitor__DOT__inflight_1 = vlSelf->__PVT__monitor__DOT___inflight_T_5;
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5;
        vlSelf->__PVT__monitor__DOT__inflight_sizes 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_2;
        vlSelf->__PVT__monitor__DOT__inflight = vlSelf->__PVT__monitor__DOT___inflight_T_2;
        vlSelf->__PVT__monitor__DOT__watchdog_1 = ((IData)(vlSelf->__PVT__monitor__DOT___d_first_T)
                                                    ? 0U
                                                    : vlSelf->__PVT__monitor__DOT___watchdog_T_3);
        vlSelf->__PVT__monitor__DOT__watchdog = (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                                                  | (IData)(vlSelf->__PVT__monitor__DOT___d_first_T))
                                                  ? 0U
                                                  : vlSelf->__PVT__monitor__DOT___watchdog_T_1);
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__corrupt_reg = 0U;
    } else if (vlSelf->__PVT___T) {
        vlSelf->__PVT__corrupt_reg = ((~ (IData)(vlSelf->__PVT__last)) 
                                      & (IData)(vlSelf->__PVT__corrupt_out));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__monitor__DOT__d_first_counter_2 = 0U;
    } else if (vlSelf->__PVT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__monitor__DOT__d_first_counter_2 
            = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_2)
                      ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter1_2)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__monitor__DOT__d_first_counter_1 = 0U;
    } else if (vlSelf->__PVT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__monitor__DOT__d_first_counter_1 
            = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_1)
                      ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter1_1)));
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__param_1 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_param;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__sink = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_sink;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__denied = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_denied;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__source_1 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__size_1 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__opcode_1 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__monitor__DOT__a_first_counter_1 = 0U;
    } else if (vlSelf->__PVT__monitor__DOT___a_first_T) {
        vlSelf->__PVT__monitor__DOT__a_first_counter_1 
            = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__a_first_1)
                      ? ((4U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))
                          ? 0U : (~ (0x3ffU & (((IData)(0x3fU) 
                                                << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                                               >> 3U))))
                      : (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter1_1)));
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__size = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__opcode = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__source = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__address = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address;
    }
    vlSelf->__PVT__monitor__DOT___watchdog_T_3 = ((IData)(1U) 
                                                  + vlSelf->__PVT__monitor__DOT__watchdog_1);
    vlSelf->__PVT__monitor__DOT___watchdog_T_1 = ((IData)(1U) 
                                                  + vlSelf->__PVT__monitor__DOT__watchdog);
    vlSelf->__PVT__monitor__DOT__d_first_counter1_2 
        = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__d_first_2 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2));
    vlSelf->__PVT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__d_first_1 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__monitor__DOT__d_first_counter = 0U;
    } else if (vlSelf->__PVT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__monitor__DOT__d_first_counter 
            = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__d_first)
                      ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter1)));
    }
    vlSelf->__PVT__monitor__DOT__a_first_counter1_1 
        = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__a_first_1 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__monitor__DOT__a_first_counter = 0U;
    } else if (vlSelf->__PVT__monitor__DOT___a_first_T) {
        vlSelf->__PVT__monitor__DOT__a_first_counter 
            = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__a_first)
                      ? ((4U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))
                          ? 0U : (~ (0x3ffU & (((IData)(0x3fU) 
                                                << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                                               >> 3U))))
                      : (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter1)));
    }
    vlSelf->__PVT__monitor__DOT__d_first_counter1 = 
        (7U & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter) 
               - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__d_first = (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter));
    vlSelf->__PVT__monitor__DOT__a_first_counter1 = 
        (7U & ((IData)(vlSelf->__PVT__monitor__DOT__a_first_counter) 
               - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__a_first = (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter));
}

VL_INLINE_OPT void VysyxSoCFull_TLWidthWidget___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__13(VysyxSoCFull_TLWidthWidget* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLWidthWidget___combo__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__13\n"); );
    // Body
    vlSelf->__PVT__repeated_repeater_io_deq_valid = 
        ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
         | (IData)(vlSelf->__PVT__repeated_repeater__DOT__full));
    vlSelf->__PVT__repeated_repeater_io_deq_bits_mask 
        = ((IData)(vlSelf->__PVT__repeated_repeater__DOT__full)
            ? (IData)(vlSelf->__PVT__repeated_repeater__DOT__saved_mask)
            : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_mask));
    vlSelf->__PVT__cated_bits_data = (((QData)((IData)(
                                                       (((IData)(vlSelf->__PVT__repeated_repeater__DOT__full)
                                                          ? vlSelf->__PVT__repeated_repeater__DOT__saved_data
                                                          : vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_data) 
                                                        >> 0x20U))) 
                                       << 0x20U) | (QData)((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_data)));
    vlSelf->__PVT__repeated_repeater_io_deq_bits_size 
        = ((IData)(vlSelf->__PVT__repeated_repeater__DOT__full)
            ? (IData)(vlSelf->__PVT__repeated_repeater__DOT__saved_size)
            : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size));
    vlSelf->__PVT__monitor__DOT___GEN_30 = ((5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))
                                             ? 2U : 
                                            ((4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))
                                              ? 1U : 
                                             ((3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))
                                               ? 1U
                                               : ((2U 
                                                   == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))
                                                   ? 1U
                                                   : 0U))));
    vlSelf->__PVT__repeated_repeater_io_deq_bits_opcode 
        = ((IData)(vlSelf->__PVT__repeated_repeater__DOT__full)
            ? (IData)(vlSelf->__PVT__repeated_repeater__DOT__saved_opcode)
            : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode));
    vlSelf->__PVT__monitor__DOT__source_ok = 1U;
    vlSelf->__PVT__repeated_repeater_io_deq_bits_source 
        = ((IData)(vlSelf->__PVT__repeated_repeater__DOT__full)
            ? (IData)(vlSelf->__PVT__repeated_repeater__DOT__saved_source)
            : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source));
    vlSelf->__PVT__monitor__DOT___T_77 = ((6U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                                          & (0ULL == 
                                             (0x1fffff000ULL 
                                              & (QData)((IData)(
                                                                (0x1000U 
                                                                 ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))))));
    vlSelf->__PVT__monitor__DOT__mask_eq_2 = (IData)(
                                                     (0U 
                                                      == 
                                                      (6U 
                                                       & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)));
    vlSelf->__PVT__monitor__DOT__mask_eq_3 = (IData)(
                                                     (2U 
                                                      == 
                                                      (6U 
                                                       & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)));
    vlSelf->__PVT__monitor__DOT__mask_eq_4 = (IData)(
                                                     (4U 
                                                      == 
                                                      (6U 
                                                       & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)));
    vlSelf->__PVT__monitor__DOT__mask_eq_5 = (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)));
    vlSelf->__PVT__monitor__DOT__mask_acc = (1U & (
                                                   (3U 
                                                    <= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                                                   | (1U 
                                                      & ((((IData)(1U) 
                                                           << 
                                                           (3U 
                                                            & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))) 
                                                          >> 2U) 
                                                         & (~ 
                                                            (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                                             >> 2U))))));
    vlSelf->__PVT__monitor__DOT__mask_acc_1 = (1U & 
                                               ((3U 
                                                 <= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                                                | (1U 
                                                   & ((((IData)(1U) 
                                                        << 
                                                        (3U 
                                                         & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))) 
                                                       >> 2U) 
                                                      & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                                         >> 2U)))));
    vlSelf->__PVT__repeated_repeater_io_deq_bits_address 
        = ((IData)(vlSelf->__PVT__repeated_repeater__DOT__full)
            ? vlSelf->__PVT__repeated_repeater__DOT__saved_address
            : vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address);
    vlSelf->__PVT__repeat_last = (1U & (((IData)(vlSelf->__PVT__repeat_count) 
                                         == (1U & (~ 
                                                   (0xffU 
                                                    & (((IData)(7U) 
                                                        << (IData)(vlSelf->__PVT__repeated_repeater_io_deq_bits_size)) 
                                                       >> 2U))))) 
                                        | ((IData)(vlSelf->__PVT__repeated_repeater_io_deq_bits_opcode) 
                                           >> 2U)));
    vlSelf->__PVT__monitor__DOT__mask_acc_2 = ((IData)(vlSelf->__PVT__monitor__DOT__mask_acc) 
                                               | (3U 
                                                  & ((((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))) 
                                                      >> 1U) 
                                                     & (IData)(vlSelf->__PVT__monitor__DOT__mask_eq_2))));
    vlSelf->__PVT__monitor__DOT__mask_acc_3 = ((IData)(vlSelf->__PVT__monitor__DOT__mask_acc) 
                                               | (3U 
                                                  & ((((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))) 
                                                      >> 1U) 
                                                     & (IData)(vlSelf->__PVT__monitor__DOT__mask_eq_3))));
    vlSelf->__PVT__monitor__DOT__mask_acc_4 = ((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_1) 
                                               | (3U 
                                                  & ((((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))) 
                                                      >> 1U) 
                                                     & (IData)(vlSelf->__PVT__monitor__DOT__mask_eq_4))));
    vlSelf->__PVT__monitor__DOT__mask_acc_5 = ((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_1) 
                                               | (3U 
                                                  & ((((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))) 
                                                      >> 1U) 
                                                     & (IData)(vlSelf->__PVT__monitor__DOT__mask_eq_5))));
    vlSelf->__PVT__repeat_index = (1U & ((vlSelf->__PVT__repeated_repeater_io_deq_bits_address 
                                          >> 2U) | (IData)(vlSelf->__PVT__repeat_count)));
    vlSelf->__PVT__monitor__DOT__mask = ((((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_5) 
                                           | ((IData)(vlSelf->__PVT__monitor__DOT__mask_eq_5) 
                                              & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)) 
                                          << 7U) | 
                                         ((((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_5) 
                                            | ((IData)(vlSelf->__PVT__monitor__DOT__mask_eq_5) 
                                               & (~ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))) 
                                           << 6U) | 
                                          ((((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_4) 
                                             | ((IData)(vlSelf->__PVT__monitor__DOT__mask_eq_4) 
                                                & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)) 
                                            << 5U) 
                                           | ((((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_4) 
                                                | ((IData)(vlSelf->__PVT__monitor__DOT__mask_eq_4) 
                                                   & (~ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))) 
                                               << 4U) 
                                              | ((((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_3) 
                                                   | ((IData)(vlSelf->__PVT__monitor__DOT__mask_eq_3) 
                                                      & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)) 
                                                  << 3U) 
                                                 | ((((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_3) 
                                                      | ((IData)(vlSelf->__PVT__monitor__DOT__mask_eq_3) 
                                                         & (~ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))) 
                                                     << 2U) 
                                                    | ((((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_2) 
                                                         | ((IData)(vlSelf->__PVT__monitor__DOT__mask_eq_2) 
                                                            & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)) 
                                                        << 1U) 
                                                       | ((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_2) 
                                                          | ((IData)(vlSelf->__PVT__monitor__DOT__mask_eq_2) 
                                                             & (~ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))))))))));
    if (vlSelf->__PVT__repeat_index) {
        vlSelf->auto_out_a_bits_mask = (0xfU & ((IData)(vlSelf->__PVT__repeated_repeater_io_deq_bits_mask) 
                                                >> 4U));
        vlSelf->auto_out_a_bits_data = (IData)((vlSelf->__PVT__cated_bits_data 
                                                >> 0x20U));
    } else {
        vlSelf->auto_out_a_bits_mask = (0xfU & (IData)(vlSelf->__PVT__repeated_repeater_io_deq_bits_mask));
        vlSelf->auto_out_a_bits_data = (IData)(vlSelf->__PVT__cated_bits_data);
    }
}

VL_INLINE_OPT void VysyxSoCFull_TLWidthWidget___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__widget__8(VysyxSoCFull_TLWidthWidget* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLWidthWidget___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__widget__8\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp46;
    VlWide<5>/*159:0*/ __Vtemp47;
    VlWide<5>/*159:0*/ __Vtemp53;
    VlWide<5>/*159:0*/ __Vtemp54;
    // Body
    vlSelf->__PVT__repeated_repeater_io_enq_ready = 
        ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_in_a_ready) 
         & (~ (IData)(vlSelf->__PVT__repeated_repeater__DOT__full)));
    vlSelf->__PVT__repeated_repeater__DOT___T = ((IData)(vlSelf->__PVT__repeated_repeater_io_enq_ready) 
                                                 & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid));
    vlSelf->__PVT__monitor__DOT___a_first_T = ((IData)(vlSelf->__PVT__repeated_repeater_io_enq_ready) 
                                               & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid));
    vlSelf->__PVT__repeated_repeater__DOT___GEN_0 = 
        (((IData)(vlSelf->__PVT__repeated_repeater__DOT___T) 
          & (~ (IData)(vlSelf->__PVT__repeat_last))) 
         | (IData)(vlSelf->__PVT__repeated_repeater__DOT__full));
    VL_EXTEND_WI(131,4, __Vtemp46, (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                                     ? (1U | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode) 
                                              << 1U))
                                     : 0U));
    VL_SHIFTL_WWI(131,131,7, __Vtemp47, __Vtemp46, 
                  ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source) 
                   << 2U));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2 
        = ((vlSelf->__PVT__monitor__DOT__inflight_opcodes 
            | (((QData)((IData)((((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp47[1U] : 0U))) 
                << 0x20U) | (QData)((IData)((((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                                              & (0U 
                                                 == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                                              ? __Vtemp47[0U]
                                              : 0U))))) 
           & (~ (((QData)((IData)(vlSelf->__PVT__monitor__DOT___GEN_23[1U])) 
                  << 0x20U) | (QData)((IData)(vlSelf->__PVT__monitor__DOT___GEN_23[0U])))));
    VL_EXTEND_WI(131,4, __Vtemp53, (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                                     ? (1U | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size) 
                                              << 1U))
                                     : 0U));
    VL_SHIFTL_WWI(131,131,7, __Vtemp54, __Vtemp53, 
                  ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source) 
                   << 2U));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_2 
        = ((vlSelf->__PVT__monitor__DOT__inflight_sizes 
            | (((QData)((IData)((((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp54[1U] : 0U))) 
                << 0x20U) | (QData)((IData)((((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                                              & (0U 
                                                 == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                                              ? __Vtemp54[0U]
                                              : 0U))))) 
           & (~ (((QData)((IData)(vlSelf->__PVT__monitor__DOT___GEN_23[1U])) 
                  << 0x20U) | (QData)((IData)(vlSelf->__PVT__monitor__DOT___GEN_23[0U])))));
    vlSelf->__PVT__monitor__DOT___inflight_T_2 = (0xffffU 
                                                  & (((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                                                      | (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                                                          & (0U 
                                                             == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                                                          ? 
                                                         ((IData)(1U) 
                                                          << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source))
                                                          : 0U)) 
                                                     & (~ 
                                                        ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                           & (0U 
                                                              == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                                          & (6U 
                                                             != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode)))
                                                          ? 
                                                         ((IData)(1U) 
                                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source))
                                                          : 0U))));
}

VL_INLINE_OPT void VysyxSoCFull_TLWidthWidget___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__widget__11(VysyxSoCFull_TLWidthWidget* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLWidthWidget___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__widget__11\n"); );
    // Variables
    CData/*0:0*/ __Vdly__repeat_count;
    CData/*0:0*/ __Vdly__count;
    // Body
    __Vdly__count = vlSelf->__PVT__count;
    __Vdly__repeat_count = vlSelf->__PVT__repeat_count;
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                                & (0ULL == (0x180000000ULL 
                                            & (QData)((IData)(
                                                              (0x80000000U 
                                                               ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                                & (0ULL == (0x180000000ULL 
                                            & (QData)((IData)(
                                                              (0x80000000U 
                                                               ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36027: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36027, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36051: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36051, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36075: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36075, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36099: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36099, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36123: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36123, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36147: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36147, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                                & (0ULL == (0x180000000ULL 
                                            & (QData)((IData)(
                                                              (0x80000000U 
                                                               ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                                & (0ULL == (0x180000000ULL 
                                            & (QData)((IData)(
                                                              (0x80000000U 
                                                               ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36171: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36171, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36195: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36195, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36219: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36219, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36243: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36243, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36267: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36267, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36291: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36291, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36315: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36315, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36339: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36339, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                            & (((0ULL == (0x1fffff000ULL 
                                          & (QData)((IData)(
                                                            (0x1000U 
                                                             ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))))) 
                                | (0ULL == (0x1c0000000ULL 
                                            & (QData)((IData)(
                                                              (0x40000000U 
                                                               ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)))))) 
                               | (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                            & (((0ULL == (0x1fffff000ULL 
                                          & (QData)((IData)(
                                                            (0x1000U 
                                                             ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))))) 
                                | (0ULL == (0x1c0000000ULL 
                                            & (QData)((IData)(
                                                              (0x40000000U 
                                                               ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)))))) 
                               | (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36363: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36363, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36387: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36387, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36411: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36411, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36435: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36435, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36459: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36459, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36483: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36483, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36507: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36507, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36531: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36531, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36555: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36555, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36579: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36579, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36603: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36603, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->__PVT__monitor__DOT__mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->__PVT__monitor__DOT__mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36627: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36627, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((3U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                                & ((0ULL == (0x1c0000000ULL 
                                             & (QData)((IData)(
                                                               (0x40000000U 
                                                                ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((3U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                                & ((0ULL == (0x1c0000000ULL 
                                             & (QData)((IData)(
                                                               (0x40000000U 
                                                                ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36651: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36651, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36675: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36675, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36699: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36699, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36723: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36723, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((3U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                                & ((0ULL == (0x1c0000000ULL 
                                             & (QData)((IData)(
                                                               (0x40000000U 
                                                                ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((3U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                                & ((0ULL == (0x1c0000000ULL 
                                             & (QData)((IData)(
                                                               (0x40000000U 
                                                                ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36747: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36747, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36771: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36771, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36795: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36795, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36819: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36819, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36843: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36843, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36867: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36867, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36891: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36891, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36915: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36915, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36939: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36939, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36963: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36963, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36987: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 36987, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37011: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37011, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_corrupt) 
                               | (IData)(vlSelf->__PVT__corrupt_reg))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_corrupt) 
                               | (IData)(vlSelf->__PVT__corrupt_reg))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37035: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37035, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37059: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37059, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37083: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37083, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37107: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37107, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37131: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37131, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37155: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37155, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37179: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37179, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_corrupt) 
                               | (IData)(vlSelf->__PVT__corrupt_reg))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_corrupt) 
                               | (IData)(vlSelf->__PVT__corrupt_reg))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37203: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37203, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37227: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37227, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37251: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37251, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37275: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37275, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37299: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37299, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37323: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37323, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_denied)) 
                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_corrupt) 
                               | (IData)(vlSelf->__PVT__corrupt_reg))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_denied)) 
                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_corrupt) 
                               | (IData)(vlSelf->__PVT__corrupt_reg))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37347: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37347, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37371: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37371, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37395: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37395, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_corrupt) 
                               | (IData)(vlSelf->__PVT__corrupt_reg))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_corrupt) 
                               | (IData)(vlSelf->__PVT__corrupt_reg))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37419: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37419, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37443: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37443, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37467: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37467, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_denied)) 
                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_corrupt) 
                               | (IData)(vlSelf->__PVT__corrupt_reg))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_denied)) 
                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_corrupt) 
                               | (IData)(vlSelf->__PVT__corrupt_reg))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37491: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37491, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37515: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37515, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37539: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37539, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_corrupt) 
                               | (IData)(vlSelf->__PVT__corrupt_reg))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_corrupt) 
                               | (IData)(vlSelf->__PVT__corrupt_reg))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37563: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37563, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37587: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37587, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37611: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37611, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__source)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__source)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37635: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37635, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address 
                            == vlSelf->__PVT__monitor__DOT__address) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address 
                            == vlSelf->__PVT__monitor__DOT__address) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37659: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37659, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37683: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37683, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_param) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__param_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_param) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__param_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37707: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37707, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__size_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__size_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37731: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37731, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__source_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__source_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37755: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37755, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_sink) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_sink) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37779: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37779, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_denied) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_denied) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37803: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37803, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                                          >> (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                                          >> (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37827: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37827, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (((0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                                        >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source))) 
                            | (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                                & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source) 
                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (((0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                                        >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source))) 
                            | (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                                & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source) 
                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37851: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37851, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source) 
                            == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))
                                           ? 4U : (IData)(vlSelf->__PVT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))
                                             ? 5U : (IData)(vlSelf->__PVT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source) 
                            == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))
                                           ? 4U : (IData)(vlSelf->__PVT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))
                                             ? 5U : (IData)(vlSelf->__PVT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37875: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37875, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source) 
                            == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source)))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size) 
                            == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source) 
                            == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source)))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size) 
                            == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37899: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37899, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source) 
                               == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlSelf->__PVT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlSelf->__PVT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source) 
                               == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlSelf->__PVT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlSelf->__PVT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37923: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37923, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source) 
                               == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source))))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__monitor__DOT__inflight_sizes 
                                                     >> 
                                                     ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source) 
                               == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source))))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__monitor__DOT__inflight_sizes 
                                                     >> 
                                                     ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37947: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37947, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid)) 
                       & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source) 
                          == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source))) 
                      & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_d_ready)) 
                            | (IData)(vlSelf->__PVT__repeated_repeater_io_enq_ready)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid)) 
                       & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source) 
                          == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source))) 
                      & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_d_ready)) 
                            | (IData)(vlSelf->__PVT__repeated_repeater_io_enq_ready)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37969: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37969, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__monitor__DOT__inflight)))) 
                                | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->__PVT__monitor__DOT__watchdog 
                                  < vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__monitor__DOT__inflight)))) 
                                | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->__PVT__monitor__DOT__watchdog 
                                  < vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37993: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 37993, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:38017: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 38017, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__monitor__DOT__inflight_sizes_1 
                                                     >> 
                                                     ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__monitor__DOT__inflight_sizes_1 
                                                     >> 
                                                     ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:38041: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 38041, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__monitor__DOT__inflight_1)))) 
                                | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->__PVT__monitor__DOT__watchdog_1 
                                  < vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__monitor__DOT__inflight_1)))) 
                                | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->__PVT__monitor__DOT__watchdog_1 
                                  < vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:38065: Assertion failed in %NysyxSoCFull.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 38065, "");
    }
    vlSelf->__PVT__monitor__DOT__inflight_opcodes = 
        ((IData)(vlSymsp->TOP.reset) ? 0ULL : vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2);
    vlSelf->__PVT__bundleIn_0_d_bits_data_rdata_written_once 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelf->__PVT___GEN_10));
    if (((IData)(vlSelf->__PVT__repeated_repeater__DOT___T) 
         & (~ (IData)(vlSelf->__PVT__repeat_last)))) {
        vlSelf->__PVT__repeated_repeater__DOT__saved_mask 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_mask;
    }
    if (((IData)(vlSelf->__PVT__repeated_repeater__DOT___T) 
         & (~ (IData)(vlSelf->__PVT__repeat_last)))) {
        vlSelf->__PVT__repeated_repeater__DOT__saved_data 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_data;
    }
    if (((IData)(vlSelf->__PVT___T) & (~ (IData)(vlSelf->__PVT__last)))) {
        if (vlSelf->__PVT__bundleIn_0_d_bits_data_masked_enable_0) {
            vlSelf->__PVT__bundleIn_0_d_bits_data_rdata_0 
                = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_data;
        }
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__count = 0U;
    } else if (vlSelf->__PVT___T) {
        __Vdly__count = (1U & ((~ (IData)(vlSelf->__PVT__last)) 
                               & ((IData)(1U) + (IData)(vlSelf->__PVT__count))));
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__repeat_count = 0U;
    } else if (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_in_a_ready) 
                & (IData)(vlSelf->__PVT__repeated_repeater_io_deq_valid))) {
        __Vdly__repeat_count = (1U & ((~ (IData)(vlSelf->__PVT__repeat_last)) 
                                      & ((IData)(1U) 
                                         + (IData)(vlSelf->__PVT__repeat_count))));
    }
    if (((IData)(vlSelf->__PVT__repeated_repeater__DOT___T) 
         & (~ (IData)(vlSelf->__PVT__repeat_last)))) {
        vlSelf->__PVT__repeated_repeater__DOT__saved_size 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size;
    }
    if (((IData)(vlSelf->__PVT__repeated_repeater__DOT___T) 
         & (~ (IData)(vlSelf->__PVT__repeat_last)))) {
        vlSelf->__PVT__repeated_repeater__DOT__saved_opcode 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode;
    }
    if (((IData)(vlSelf->__PVT__repeated_repeater__DOT___T) 
         & (~ (IData)(vlSelf->__PVT__repeat_last)))) {
        vlSelf->__PVT__repeated_repeater__DOT__saved_source 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source;
    }
    if (((IData)(vlSelf->__PVT__repeated_repeater__DOT___T) 
         & (~ (IData)(vlSelf->__PVT__repeat_last)))) {
        vlSelf->__PVT__repeated_repeater__DOT__saved_address 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address;
    }
    vlSelf->__PVT__repeated_repeater__DOT__full = (
                                                   (~ (IData)(vlSymsp->TOP.reset)) 
                                                   & ((~ 
                                                       (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_in_a_ready) 
                                                         & (IData)(vlSelf->__PVT__repeated_repeater_io_deq_valid)) 
                                                        & (IData)(vlSelf->__PVT__repeat_last))) 
                                                      & (IData)(vlSelf->__PVT__repeated_repeater__DOT___GEN_0)));
    vlSelf->__PVT__count = __Vdly__count;
    vlSelf->__PVT__repeat_count = __Vdly__repeat_count;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__monitor__DOT__inflight_1 = 0U;
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1 = 0ULL;
        vlSelf->__PVT__monitor__DOT__inflight_sizes = 0ULL;
        vlSelf->__PVT__monitor__DOT__inflight = 0U;
        vlSelf->__PVT__monitor__DOT__watchdog_1 = 0U;
        vlSelf->__PVT__monitor__DOT__watchdog = 0U;
    } else {
        vlSelf->__PVT__monitor__DOT__inflight_1 = vlSelf->__PVT__monitor__DOT___inflight_T_5;
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5;
        vlSelf->__PVT__monitor__DOT__inflight_sizes 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_2;
        vlSelf->__PVT__monitor__DOT__inflight = vlSelf->__PVT__monitor__DOT___inflight_T_2;
        vlSelf->__PVT__monitor__DOT__watchdog_1 = ((IData)(vlSelf->__PVT__monitor__DOT___d_first_T)
                                                    ? 0U
                                                    : vlSelf->__PVT__monitor__DOT___watchdog_T_3);
        vlSelf->__PVT__monitor__DOT__watchdog = (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                                                  | (IData)(vlSelf->__PVT__monitor__DOT___d_first_T))
                                                  ? 0U
                                                  : vlSelf->__PVT__monitor__DOT___watchdog_T_1);
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__corrupt_reg = 0U;
    } else if (vlSelf->__PVT___T) {
        vlSelf->__PVT__corrupt_reg = ((~ (IData)(vlSelf->__PVT__last)) 
                                      & (IData)(vlSelf->__PVT__corrupt_out));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__monitor__DOT__d_first_counter_2 = 0U;
    } else if (vlSelf->__PVT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__monitor__DOT__d_first_counter_2 
            = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_2)
                      ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter1_2)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__monitor__DOT__d_first_counter_1 = 0U;
    } else if (vlSelf->__PVT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__monitor__DOT__d_first_counter_1 
            = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_1)
                      ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter1_1)));
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__param_1 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_param;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__sink = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_sink;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__denied = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_denied;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__source_1 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__size_1 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__opcode_1 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__monitor__DOT__a_first_counter_1 = 0U;
    } else if (vlSelf->__PVT__monitor__DOT___a_first_T) {
        vlSelf->__PVT__monitor__DOT__a_first_counter_1 
            = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__a_first_1)
                      ? ((4U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))
                          ? 0U : (~ (0x3ffU & (((IData)(0x3fU) 
                                                << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                                               >> 3U))))
                      : (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter1_1)));
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__size = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__opcode = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__source = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__address = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address;
    }
    vlSelf->__PVT__monitor__DOT___watchdog_T_3 = ((IData)(1U) 
                                                  + vlSelf->__PVT__monitor__DOT__watchdog_1);
    vlSelf->__PVT__monitor__DOT___watchdog_T_1 = ((IData)(1U) 
                                                  + vlSelf->__PVT__monitor__DOT__watchdog);
    vlSelf->__PVT__monitor__DOT__d_first_counter1_2 
        = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__d_first_2 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2));
    vlSelf->__PVT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__d_first_1 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__monitor__DOT__d_first_counter = 0U;
    } else if (vlSelf->__PVT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__monitor__DOT__d_first_counter 
            = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__d_first)
                      ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter1)));
    }
    vlSelf->__PVT__monitor__DOT__a_first_counter1_1 
        = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__a_first_1 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__monitor__DOT__a_first_counter = 0U;
    } else if (vlSelf->__PVT__monitor__DOT___a_first_T) {
        vlSelf->__PVT__monitor__DOT__a_first_counter 
            = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__a_first)
                      ? ((4U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))
                          ? 0U : (~ (0x3ffU & (((IData)(0x3fU) 
                                                << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                                               >> 3U))))
                      : (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter1)));
    }
    vlSelf->__PVT__monitor__DOT__d_first_counter1 = 
        (7U & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter) 
               - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__d_first = (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter));
    vlSelf->__PVT__monitor__DOT__a_first_counter1 = 
        (7U & ((IData)(vlSelf->__PVT__monitor__DOT__a_first_counter) 
               - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__a_first = (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter));
}

VL_INLINE_OPT void VysyxSoCFull_TLWidthWidget___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__widget__12(VysyxSoCFull_TLWidthWidget* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLWidthWidget___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__widget__12\n"); );
    // Body
    vlSelf->__PVT__repeated_repeater_io_deq_valid = 
        ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
         | (IData)(vlSelf->__PVT__repeated_repeater__DOT__full));
    vlSelf->__PVT__repeated_repeater_io_deq_bits_mask 
        = ((IData)(vlSelf->__PVT__repeated_repeater__DOT__full)
            ? (IData)(vlSelf->__PVT__repeated_repeater__DOT__saved_mask)
            : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_mask));
    vlSelf->__PVT__cated_bits_data = (((QData)((IData)(
                                                       (((IData)(vlSelf->__PVT__repeated_repeater__DOT__full)
                                                          ? vlSelf->__PVT__repeated_repeater__DOT__saved_data
                                                          : vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_data) 
                                                        >> 0x20U))) 
                                       << 0x20U) | (QData)((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_data)));
    vlSelf->__PVT__monitor__DOT__source_ok = 1U;
    vlSelf->__PVT__repeated_repeater_io_deq_bits_source 
        = ((IData)(vlSelf->__PVT__repeated_repeater__DOT__full)
            ? (IData)(vlSelf->__PVT__repeated_repeater__DOT__saved_source)
            : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source));
    vlSelf->__PVT__monitor__DOT__mask_eq_2 = (IData)(
                                                     (0U 
                                                      == 
                                                      (6U 
                                                       & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)));
    vlSelf->__PVT__monitor__DOT__mask_eq_3 = (IData)(
                                                     (2U 
                                                      == 
                                                      (6U 
                                                       & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)));
    vlSelf->__PVT__monitor__DOT__mask_eq_4 = (IData)(
                                                     (4U 
                                                      == 
                                                      (6U 
                                                       & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)));
    vlSelf->__PVT__monitor__DOT__mask_eq_5 = (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)));
    vlSelf->__PVT__repeated_repeater_io_deq_bits_address 
        = ((IData)(vlSelf->__PVT__repeated_repeater__DOT__full)
            ? vlSelf->__PVT__repeated_repeater__DOT__saved_address
            : vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address);
    vlSelf->__PVT__monitor__DOT___T_77 = ((6U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                                          & (0ULL == 
                                             (0x1fffff000ULL 
                                              & (QData)((IData)(
                                                                (0x1000U 
                                                                 ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))))));
    vlSelf->__PVT__monitor__DOT__mask_acc = (1U & (
                                                   (3U 
                                                    <= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                                                   | (1U 
                                                      & ((((IData)(1U) 
                                                           << 
                                                           (3U 
                                                            & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size))) 
                                                          >> 2U) 
                                                         & (~ 
                                                            (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address 
                                                             >> 2U))))));
    vlSelf->__PVT__monitor__DOT__mask_acc_1 = (1U & 
                                               ((3U 
                                                 <= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                                                | (1U 
                                                   & ((((IData)(1U) 
                                                        << 
                                                        (3U 
                                                         & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size))) 
                                                       >> 2U) 
                                                      & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address 
                                                         >> 2U)))));
    vlSelf->__PVT__repeated_repeater_io_deq_bits_size 
        = ((IData)(vlSelf->__PVT__repeated_repeater__DOT__full)
            ? (IData)(vlSelf->__PVT__repeated_repeater__DOT__saved_size)
            : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size));
    vlSelf->__PVT__monitor__DOT___GEN_30 = ((5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))
                                             ? 2U : 
                                            ((4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))
                                              ? 1U : 
                                             ((3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))
                                               ? 1U
                                               : ((2U 
                                                   == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))
                                                   ? 1U
                                                   : 0U))));
    vlSelf->__PVT__repeated_repeater_io_deq_bits_opcode 
        = ((IData)(vlSelf->__PVT__repeated_repeater__DOT__full)
            ? (IData)(vlSelf->__PVT__repeated_repeater__DOT__saved_opcode)
            : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode));
    vlSelf->__PVT__repeat_index = (1U & ((vlSelf->__PVT__repeated_repeater_io_deq_bits_address 
                                          >> 2U) | (IData)(vlSelf->__PVT__repeat_count)));
    vlSelf->__PVT__monitor__DOT__mask_acc_2 = ((IData)(vlSelf->__PVT__monitor__DOT__mask_acc) 
                                               | (3U 
                                                  & ((((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size))) 
                                                      >> 1U) 
                                                     & (IData)(vlSelf->__PVT__monitor__DOT__mask_eq_2))));
    vlSelf->__PVT__monitor__DOT__mask_acc_3 = ((IData)(vlSelf->__PVT__monitor__DOT__mask_acc) 
                                               | (3U 
                                                  & ((((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size))) 
                                                      >> 1U) 
                                                     & (IData)(vlSelf->__PVT__monitor__DOT__mask_eq_3))));
    vlSelf->__PVT__monitor__DOT__mask_acc_4 = ((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_1) 
                                               | (3U 
                                                  & ((((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size))) 
                                                      >> 1U) 
                                                     & (IData)(vlSelf->__PVT__monitor__DOT__mask_eq_4))));
    vlSelf->__PVT__monitor__DOT__mask_acc_5 = ((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_1) 
                                               | (3U 
                                                  & ((((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size))) 
                                                      >> 1U) 
                                                     & (IData)(vlSelf->__PVT__monitor__DOT__mask_eq_5))));
    vlSelf->__PVT__repeat_last = (1U & (((IData)(vlSelf->__PVT__repeat_count) 
                                         == (1U & (~ 
                                                   (0xffU 
                                                    & (((IData)(7U) 
                                                        << (IData)(vlSelf->__PVT__repeated_repeater_io_deq_bits_size)) 
                                                       >> 2U))))) 
                                        | ((IData)(vlSelf->__PVT__repeated_repeater_io_deq_bits_opcode) 
                                           >> 2U)));
    if (vlSelf->__PVT__repeat_index) {
        vlSelf->auto_out_a_bits_mask = (0xfU & ((IData)(vlSelf->__PVT__repeated_repeater_io_deq_bits_mask) 
                                                >> 4U));
        vlSelf->auto_out_a_bits_data = (IData)((vlSelf->__PVT__cated_bits_data 
                                                >> 0x20U));
    } else {
        vlSelf->auto_out_a_bits_mask = (0xfU & (IData)(vlSelf->__PVT__repeated_repeater_io_deq_bits_mask));
        vlSelf->auto_out_a_bits_data = (IData)(vlSelf->__PVT__cated_bits_data);
    }
    vlSelf->__PVT__monitor__DOT__mask = ((((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_5) 
                                           | ((IData)(vlSelf->__PVT__monitor__DOT__mask_eq_5) 
                                              & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)) 
                                          << 7U) | 
                                         ((((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_5) 
                                            | ((IData)(vlSelf->__PVT__monitor__DOT__mask_eq_5) 
                                               & (~ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))) 
                                           << 6U) | 
                                          ((((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_4) 
                                             | ((IData)(vlSelf->__PVT__monitor__DOT__mask_eq_4) 
                                                & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)) 
                                            << 5U) 
                                           | ((((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_4) 
                                                | ((IData)(vlSelf->__PVT__monitor__DOT__mask_eq_4) 
                                                   & (~ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))) 
                                               << 4U) 
                                              | ((((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_3) 
                                                   | ((IData)(vlSelf->__PVT__monitor__DOT__mask_eq_3) 
                                                      & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)) 
                                                  << 3U) 
                                                 | ((((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_3) 
                                                      | ((IData)(vlSelf->__PVT__monitor__DOT__mask_eq_3) 
                                                         & (~ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))) 
                                                     << 2U) 
                                                    | ((((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_2) 
                                                         | ((IData)(vlSelf->__PVT__monitor__DOT__mask_eq_2) 
                                                            & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)) 
                                                        << 1U) 
                                                       | ((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_2) 
                                                          | ((IData)(vlSelf->__PVT__monitor__DOT__mask_eq_2) 
                                                             & (~ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))))))))));
}

VL_INLINE_OPT void VysyxSoCFull_TLWidthWidget___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__widget__14(VysyxSoCFull_TLWidthWidget* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLWidthWidget___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__widget__14\n"); );
    // Body
    vlSelf->__PVT__corrupt_out = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_corrupt) 
                                  | (IData)(vlSelf->__PVT__corrupt_reg));
    vlSelf->auto_in_d_bits_corrupt = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_corrupt) 
                                      | (IData)(vlSelf->__PVT__corrupt_reg));
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1 
        = ((0x3fU >= ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source) 
                      << 2U)) ? (vlSelf->__PVT__monitor__DOT__inflight_opcodes 
                                 >> ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source) 
                                     << 2U)) : 0ULL);
    vlSelf->__PVT__bundleIn_0_d_bits_data_masked_enable_0 
        = (1U & ((~ ((IData)(vlSelf->__PVT__count) 
                     & (~ (0xffU & (((IData)(7U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size)) 
                                    >> 2U))))) | (~ (IData)(vlSelf->__PVT__bundleIn_0_d_bits_data_rdata_written_once))));
    vlSelf->__PVT__last = (1U & (((IData)(vlSelf->__PVT__count) 
                                  == (1U & (~ (0xffU 
                                               & (((IData)(7U) 
                                                   << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size)) 
                                                  >> 2U))))) 
                                 | (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))));
    vlSelf->__PVT__monitor__DOT___GEN_46 = ((5U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 2U : 
                                            ((4U == 
                                              (7U & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                              ? 1U : 
                                             ((3U == 
                                               (7U 
                                                & (IData)(
                                                          (7ULL 
                                                           & (vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1 
                                                              >> 1U)))))
                                               ? 1U
                                               : ((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (7ULL 
                                                               & (vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1 
                                                                  >> 1U)))))
                                                   ? 1U
                                                   : 0U))));
    vlSelf->auto_in_d_bits_data = (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_data)) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((IData)(vlSelf->__PVT__bundleIn_0_d_bits_data_masked_enable_0)
                                                                  ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_data
                                                                  : vlSelf->__PVT__bundleIn_0_d_bits_data_rdata_0))));
    vlSelf->__PVT__monitor_io_in_d_valid = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                                            & (IData)(vlSelf->__PVT__last));
    vlSelf->auto_in_d_valid = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                               & (IData)(vlSelf->__PVT__last));
}

VL_INLINE_OPT void VysyxSoCFull_TLWidthWidget___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__widget__15(VysyxSoCFull_TLWidthWidget* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLWidthWidget___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__widget__15\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp60;
    VlWide<5>/*159:0*/ __Vtemp61;
    VlWide<5>/*159:0*/ __Vtemp67;
    VlWide<5>/*159:0*/ __Vtemp68;
    // Body
    vlSelf->__PVT___T = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_d_ready) 
                          | (~ (IData)(vlSelf->__PVT__last))) 
                         & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid));
    vlSelf->auto_out_d_ready = (1U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_d_ready) 
                                      | (~ (IData)(vlSelf->__PVT__last))));
    vlSelf->__PVT__monitor__DOT___d_first_T = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_d_ready) 
                                               & (IData)(vlSelf->__PVT__monitor_io_in_d_valid));
    vlSelf->__PVT___GEN_10 = (((IData)(vlSelf->__PVT___T) 
                               & (~ (IData)(vlSelf->__PVT__last))) 
                              | (IData)(vlSelf->__PVT__bundleIn_0_d_bits_data_rdata_written_once));
    vlSelf->__PVT__monitor__DOT___inflight_T_5 = ((IData)(vlSelf->__PVT__monitor__DOT__inflight_1) 
                                                  & (~ 
                                                     ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                        & (0U 
                                                           == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                                                       & (6U 
                                                          == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode)))
                                                       ? 
                                                      ((IData)(1U) 
                                                       << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source))
                                                       : 0U)));
    __Vtemp60[0U] = 0xfU;
    __Vtemp60[1U] = 0U;
    __Vtemp60[2U] = 0U;
    __Vtemp60[3U] = 0U;
    __Vtemp60[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp61, __Vtemp60, 
                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source) 
                   << 2U));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes_1 
           & (~ (((QData)((IData)(((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                     & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                                    & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode)))
                                    ? __Vtemp61[1U]
                                    : 0U))) << 0x20U) 
                 | (QData)((IData)(((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode)))
                                     ? __Vtemp61[0U]
                                     : 0U))))));
    __Vtemp67[0U] = 0xfU;
    __Vtemp67[1U] = 0U;
    __Vtemp67[2U] = 0U;
    __Vtemp67[3U] = 0U;
    __Vtemp67[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp68, __Vtemp67, 
                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source) 
                   << 2U));
    if ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
         & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode)))) {
        vlSelf->__PVT__monitor__DOT___GEN_23[0U] = 
            __Vtemp68[0U];
        vlSelf->__PVT__monitor__DOT___GEN_23[1U] = 
            __Vtemp68[1U];
        vlSelf->__PVT__monitor__DOT___GEN_23[2U] = 
            __Vtemp68[2U];
        vlSelf->__PVT__monitor__DOT___GEN_23[3U] = 
            __Vtemp68[3U];
        vlSelf->__PVT__monitor__DOT___GEN_23[4U] = 
            (0x7fffU & __Vtemp68[4U]);
    } else {
        vlSelf->__PVT__monitor__DOT___GEN_23[0U] = 0U;
        vlSelf->__PVT__monitor__DOT___GEN_23[1U] = 0U;
        vlSelf->__PVT__monitor__DOT___GEN_23[2U] = 0U;
        vlSelf->__PVT__monitor__DOT___GEN_23[3U] = 0U;
        vlSelf->__PVT__monitor__DOT___GEN_23[4U] = 0U;
    }
}
